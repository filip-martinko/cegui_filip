/***********************************************************************
    created:    27/01/2022
    author:     Vladimir Orlov
 *************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2022 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#include "CEGUI/text/RenderedTextParagraph.h"
#include "CEGUI/text/RenderedTextElement.h"
#include "CEGUI/text/Font.h"
#include "CEGUI/text/FontGlyph.h"
#include <algorithm>

namespace CEGUI
{

//----------------------------------------------------------------------------//
void RenderedTextParagraph::setupGlyphs(const std::u32string& text,
    const std::vector<uint16_t>& elementIndices, const std::vector<RenderedTextElementPtr>& elements)
{
    d_linesDirty = true;

    const size_t elementIdxCount = elementIndices.size();
    const uint16_t defaultStyleIdx = static_cast<uint16_t>(elements.size() - 1);

    for (auto& glyph : d_glyphs)
    {
        // NB: remapSourceIndices should not have been called yet!
        const auto utf32SourceIndex = glyph.sourceIndex;

        // Find associated element or associate with default text style
        glyph.elementIndex = (utf32SourceIndex < elementIdxCount) ?
            elementIndices[utf32SourceIndex] :
            defaultStyleIdx;

        // Do element-dependent initialization of the glyph
        if (auto element = elements[glyph.elementIndex].get())
            element->setupGlyph(glyph, text[utf32SourceIndex]);
    }
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::remapSourceIndices(const std::vector<size_t>& originalIndices, size_t sourceLength)
{
    if (originalIndices.empty())
        return;

    for (auto& glyph : d_glyphs)
        glyph.sourceIndex = static_cast<uint32_t>(originalIndices[glyph.sourceIndex]);

    d_sourceStartIndex = static_cast<uint32_t>(
        (d_sourceStartIndex < originalIndices.size()) ? originalIndices[d_sourceStartIndex] : sourceLength);
    d_sourceEndIndex = static_cast<uint32_t>(
        (d_sourceEndIndex < originalIndices.size()) ? originalIndices[d_sourceEndIndex] : sourceLength);
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::createRenderGeometry(std::vector<GeometryBuffer*>& out, glm::vec2& penPosition,
    const ColourRect* modColours, const Rectf* clipRect, const SelectionInfo* selection,
    const std::vector<RenderedTextElementPtr>& elements) const
{
    if (d_linesDirty)
        return;

    //!!!TODO TEXT: need to pass default style here! not only colors but also underline flag etc!
    //???how to know where to apply a default style? now this style element is the same as explicit ones! Last is not always default!

    //???TODO TEXT: to what buffers really can merge?! need to see rendering order first!
    //???!!!merge between paragraphs?! pass canCombineFromIdx as arg!!!
    //???what about outline glyphs? may be in another texture, or generally the same?
    const auto canCombineFromIdx = out.size();
    auto penPos = penPosition;

    //!!!TODO TEXT: render background color before selection (under it too, because selection can be transparent)!
    //Need default bg color, selection color, selected text color etc + optional override from element.

    //!!!TODO TEXT: can use one loop through lines but ensure that bg buffers are always sorted before main ones?
    // Render selection background
    uint32_t i = 0;
    if (selection && selection->bgBrush && selection->end > selection->start)
    {
        ImageRenderSettings settings(Rectf(), clipRect, selection->bgColours);

        for (const auto& line : d_lines)
        {
            const float lineBottom = penPos.y + line.extents.d_height;

            // Cull invisible lines
            if (clipRect)
            {
                if (penPos.y >= clipRect->bottom())
                    break;

                if (lineBottom <= clipRect->top())
                {
                    i = line.glyphEndIdx;
                    penPos.y = lineBottom;
                    continue;
                }
            }

            penPos.x = penPosition.x + line.horzOffset;

            i = skipWrappedWhitespace(i, line.glyphEndIdx);

            settings.d_destArea.d_min = penPos;
            settings.d_destArea.d_max.x = penPos.x;
            settings.d_destArea.d_max.y = lineBottom;
            for (; i < line.glyphEndIdx; ++i)
            {
                const auto& glyph = d_glyphs[i];
                const bool hasSelection = !settings.d_destArea.empty();

                float glyphWidth = glyph.advance;
                if (glyph.isJustifyable)
                    glyphWidth += line.justifySpaceSize;

                if (glyph.sourceIndex >= selection->start && glyph.sourceIndex < selection->end)
                {
                    if (!hasSelection)
                        settings.d_destArea.d_max.x = settings.d_destArea.d_min.x;
                    settings.d_destArea.d_max.x += glyphWidth;
                }
                else
                {
                    // Draw currently collected selection and reset range
                    if (hasSelection)
                    {
                        selection->bgBrush->createRenderGeometry(out, settings, canCombineFromIdx);
                        settings.d_destArea.d_min.x = settings.d_destArea.d_max.x;
                    }
                    settings.d_destArea.d_min.x += glyphWidth;
                }
            }

            // Draw selection to the end of the line
            if (!settings.d_destArea.empty())
            {
                settings.d_destArea.d_max.x = penPos.x + line.extents.d_width + line.justifyableCount * line.justifySpaceSize;
                selection->bgBrush->createRenderGeometry(out, settings, canCombineFromIdx);
            }

            penPos.y = lineBottom;
        }
    }

    // Render main geometry
    penPos = penPosition;
    i = 0;
    for (const auto& line : d_lines)
    {
        const float lineBottom = penPos.y + line.extents.d_height;

        // Cull invisible lines
        if (clipRect)
        {
            if (penPos.y >= clipRect->bottom())
                break;

            if (lineBottom <= clipRect->top())
            {
                i = line.glyphEndIdx;
                penPos.y = lineBottom;
                continue;
            }
        }

        penPos.x = penPosition.x + line.horzOffset;

        i = skipWrappedWhitespace(i, line.glyphEndIdx);

        // Render glyph chunks using their associated elements
        while (i < line.glyphEndIdx)
        {
            const auto startElementIdx = d_glyphs[i].elementIndex;
            const auto start = i;
            do ++i; while (i < line.glyphEndIdx && d_glyphs[i].elementIndex == startElementIdx);

            elements[startElementIdx]->createRenderGeometry(out, &d_glyphs[start], i - start, penPos,
                modColours, clipRect, line.extents.d_height, line.justifySpaceSize, canCombineFromIdx);
        }

        penPos.y = lineBottom;
    }

    // Advance the pen to the start of the next paragraph
    penPosition.y += d_height;
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::updateLines(const std::vector<RenderedTextElementPtr>& elements, float areaWidth)
{
    if (!d_linesDirty)
        return;

    d_linesDirty = false;
    d_fitsIntoAreaWidth = true;

    d_lines.clear();

    // Always add the first line of the paragraph
    d_lines.emplace_back();
    auto* currLine = &d_lines.back();

    const auto glyphCount = d_glyphs.size();
    if (!glyphCount)
    {
        currLine->glyphEndIdx = 0;
        return;
    }

    // Remember the difference between the full width and advance of the current glyph.
    // It is important for calculating the line width if it ends with this glyph.
    // This difference may be e.g. due to kerning at the line break point.
    float widthAdvanceDiff = 0.f;

    // Word wrapping breakpoint tracking
    size_t lastBreakPointIdx = std::numeric_limits<size_t>().max();
    uint16_t lastBreakPointJustifyableCount = 0;
    float lastBreakPointWidth = 0.f;

    uint32_t lineStartGlyphIdx = 0;
    for (size_t i = 0; i < glyphCount; ++i)
    {
        // Break too long lines if word wrapping is enabled
        if (d_wordWrap)
        {
            float glyphWidth = elements[d_glyphs[i].elementIndex]->getGlyphWidth(d_glyphs[i]);
            if (currLine->extents.d_width + glyphWidth > areaWidth)
            {
                // If there is a good break point for word wrapping in the current line, use it
                if (lastBreakPointIdx < glyphCount)
                {
                    // Restore the current line to the saved state
                    currLine->justifyableCount = lastBreakPointJustifyableCount;
                    currLine->extents.d_width = lastBreakPointWidth;
                    currLine->glyphEndIdx = static_cast<uint32_t>(lastBreakPointIdx);
                    lineStartGlyphIdx = skipWrappedWhitespace(currLine->glyphEndIdx, glyphCount);

                    // Restart from the first wrapped glyph, 'i' will be incremented by the loop
                    i = lineStartGlyphIdx - 1;

                    // Break only once at the same breakable glyph to prevent infinite looping
                    lastBreakPointIdx = std::numeric_limits<size_t>().max();

                    d_lines.emplace_back();
                    currLine = &d_lines.back();

                    // Clear widthAdvanceDiff because the first glyph is not added to the line yet
                    widthAdvanceDiff = 0.f;

                    continue;
                }

                // No break point was found, maybe the glyph itself is too wide.
                // Track the word broken in the middle.
                d_fitsIntoAreaWidth = false;

                // If this glyph is not the first in its line, transfer it to its own new line
                if (i > lineStartGlyphIdx)
                {
                    currLine->extents.d_width += widthAdvanceDiff;
                    currLine->glyphEndIdx = static_cast<uint32_t>(i);
                    lineStartGlyphIdx = skipWrappedWhitespace(currLine->glyphEndIdx, glyphCount);
                    if (i != lineStartGlyphIdx)
                    {
                        // 'i' changed, cached glyphWidth is no longer valid
                        glyphWidth = elements[d_glyphs[i].elementIndex]->getGlyphWidth(d_glyphs[i]);
                        i = lineStartGlyphIdx;
                    }

                    d_lines.emplace_back();
                    currLine = &d_lines.back();
                }
            }
            else if (d_glyphs[i].isBreakable)
            {
                // Remember this glyph as the most recent word wrapping point
                lastBreakPointIdx = i;
                lastBreakPointJustifyableCount = currLine->justifyableCount;
                lastBreakPointWidth = currLine->extents.d_width + widthAdvanceDiff;
            }

            widthAdvanceDiff = glyphWidth - d_glyphs[i].advance;
        }

        // Count the current glyph in the current line
        // NB: 'i' might change in the word wrapping code
        currLine->extents.d_width += d_glyphs[i].advance;
        if (d_glyphs[i].isJustifyable)
            ++currLine->justifyableCount;
    }

    // Calculate widthAdvanceDiff of the last glyph if not done during word wrapping
    if (!d_wordWrap)
    {
        const auto& glyph = d_glyphs.back();
        widthAdvanceDiff = elements[glyph.elementIndex]->getGlyphWidth(glyph) - glyph.advance;
    }

    currLine->extents.d_width += widthAdvanceDiff;
    currLine->glyphEndIdx = glyphCount;

    // Track the paragraph exceeding an area width
    if (!d_wordWrap && currLine->extents.d_width > areaWidth)
        d_fitsIntoAreaWidth = false;
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::updateLineHeights(const std::vector<RenderedTextElementPtr>& elements, float defaultFontHeight)
{
    if (d_linesDirty)
        return;

    //!!!FIXME TEXT: get the whole style (not only font height) from the corresponding element of '\n'!
    //There can be a string like this: "\n\n[colour="..."][font="..."]\n\n", last two paragraphs must honor style changes!

    if (d_lines.empty())
    {
        d_height = defaultFontHeight;
        return;
    }

    d_height = 0.f;

    uint32_t i = 0;
    for (auto& line : d_lines)
    {
        if (!line.heightDirty)
        {
            i = line.glyphEndIdx;
            d_height += line.extents.d_height;
            continue;
        }

        line.heightDirty = false;

        if (i == line.glyphEndIdx)
        {
            // An empty line has the height of the previous glyph's font
            if (i)
            {
                const auto fontSrc = elements[d_glyphs[i - 1].elementIndex].get();
                line.extents.d_height = fontSrc->getFont()->getFontHeight() +
                    fontSrc->getTopPadding() + fontSrc->getBottomPadding();
            }
            else
            {
                line.extents.d_height = defaultFontHeight;
            }
        }
        else
        {
            // A non-empty line has the height of the tallest element in it
            line.extents.d_height = 0.f;
            while (i < line.glyphEndIdx)
            {
                // Count height of the current element
                const auto elementIdx = d_glyphs[i].elementIndex;
                const float height = elements[elementIdx]->getHeight();
                if (line.extents.d_height < height)
                    line.extents.d_height = height;

                // Skip to the next element
                do ++i; while (i < line.glyphEndIdx && d_glyphs[i].elementIndex == elementIdx);
            }
        }

        d_height += line.extents.d_height;
    }
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::updateHorizontalFormatting(float areaWidth)
{
    if (d_linesDirty)
        return;

    for (auto& line : d_lines)
    {
        if (!line.horzFmtDirty)
            continue;

        line.horzFmtDirty = false;

        const bool isLastLine = (&line == &d_lines.back());
        const auto lineHorzFmt = (isLastLine && d_horzFormatting == HorizontalTextFormatting::Justified) ?
            d_lastJustifiedLineFormatting :
            d_horzFormatting;

        switch (lineHorzFmt)
        {
            case HorizontalTextFormatting::RightAligned:
                line.horzOffset = areaWidth - line.extents.d_width;
                line.justifySpaceSize = 0.f;
                break;
            case HorizontalTextFormatting::CentreAligned:
                line.horzOffset = (areaWidth - line.extents.d_width) * 0.5f;
                line.justifySpaceSize = 0.f;
                break;
            case HorizontalTextFormatting::Justified:
                line.horzOffset = 0.f;
                if (line.justifyableCount && line.extents.d_width < areaWidth)
                    line.justifySpaceSize = (areaWidth - line.extents.d_width) / line.justifyableCount;
                break;
        }
    }
}

//----------------------------------------------------------------------------//
//???TODO TEXT: cache extents rect?!
void RenderedTextParagraph::accumulateExtents(Rectf& extents) const
{
    if (d_linesDirty)
        return;

    for (const auto& line : d_lines)
    {
        extents.d_max.y += line.extents.d_height;

        const float left = line.horzOffset;
        const float right = left + line.extents.d_width;
        if (extents.d_min.x > left)
            extents.d_min.x = left;
        if (extents.d_max.x < right)
            extents.d_max.x = right;
    }
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::onElementWidthChanged(size_t elementIndex, float diff)
{
    const size_t glyphCount = d_glyphs.size();
    size_t firstElementIndex = glyphCount;

    // Glyph advances must be updated in any case
    for (size_t i = 0; i < glyphCount; ++i)
    {
        if (elementIndex == d_glyphs[i].elementIndex)
        {
            d_glyphs[i].advance += diff;
            if (firstElementIndex > i)
                firstElementIndex = i;
        }
    }

    if (d_linesDirty || firstElementIndex == glyphCount)
        return;

    // Any width change in a word wrapped paragraph may lead to changes in wrapping
    if (d_wordWrap)
    {
        d_linesDirty = true;
        return;
    }

    // Otherwise only line level recalculations are needed
    size_t i = firstElementIndex;
    for (auto& line : d_lines)
    {
        for (; i < line.glyphEndIdx; ++i)
        {
            if (elementIndex == d_glyphs[i].elementIndex)
            {
                line.extents.d_width += diff;
                line.horzFmtDirty = true;
            }
        }
    }
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::onElementHeightChanged(size_t elementIndex, float diff)
{
    if (d_linesDirty)
        return;

    uint32_t i = 0;
    for (auto& line : d_lines)
    {
        while (i < line.glyphEndIdx)
        {
            if (elementIndex == d_glyphs[i].elementIndex)
            {
                // Invalidate line height and skip to the next line immediately
                line.heightDirty = true;
                i = line.glyphEndIdx;
            }
            else
            {
                ++i;
            }
        }
    }
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::onAreaWidthChanged()
{
    if (d_wordWrap)
        d_linesDirty = true;
    else if (!d_linesDirty && d_horzFormatting != HorizontalTextFormatting::LeftAligned)
        for (auto& line : d_lines)
            line.horzFmtDirty = true;
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::setHorizontalFormatting(HorizontalTextFormatting fmt, bool breakDefault)
{
    if (breakDefault)
        d_defaultHorzFormatting = false;

    if (fmt == d_horzFormatting)
        return;

    d_horzFormatting = fmt;

    if (!d_linesDirty)
        for (auto& line : d_lines)
            line.horzFmtDirty = true;
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::setLastJustifiedLineFormatting(HorizontalTextFormatting fmt, bool breakDefault)
{
    if (breakDefault)
        d_defaultLastJustifiedLineFormatting = false;

    if (fmt == d_lastJustifiedLineFormatting)
        return;

    d_lastJustifiedLineFormatting = fmt;

    if (!d_linesDirty && d_horzFormatting == HorizontalTextFormatting::Justified)
        for (auto& line : d_lines)
            line.horzFmtDirty = true;
}

//----------------------------------------------------------------------------//
void RenderedTextParagraph::setWordWrapEnabled(bool wrap, bool breakDefault)
{
    if (breakDefault)
        d_defaultWordWrap = false;

    if (wrap == d_wordWrap)
        return;

    d_wordWrap = wrap;
    d_linesDirty = true;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getGlyphLineIndex(size_t glyphIndex) const
{
    if (d_linesDirty)
        return npos;

    const auto it = std::upper_bound(d_lines.cbegin(), d_lines.cend(), glyphIndex,
        [](uint32_t value, const Line& elm) { return value < elm.glyphEndIdx; });

    return (it == d_lines.cend()) ? npos : std::distance(d_lines.cbegin(), it);
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getTextIndexAtPoint(const glm::vec2& pt) const
{
    return d_glyphs.empty() ? d_sourceStartIndex : getTextIndex(getGlyphIndexAtPoint(pt));
}

//----------------------------------------------------------------------------//
bool RenderedTextParagraph::getTextIndexBounds(Rectf& out, size_t textIndex,
    const std::vector<RenderedTextElementPtr>& elements) const
{
    const auto glyphIndex = getNearestGlyphIndex(textIndex);
    if (glyphIndex != npos)
        return getGlyphBounds(out, glyphIndex, elements);

    // No glyph found, return the end of the paragraph
    if (d_lines.empty())
    {
        out.d_min.y = 0.f;
        out.d_min.x = 0.f;
    }
    else
    {
        const auto& lastLine = d_lines.back();
        out.d_min.y = d_height - lastLine.extents.d_height;
        out.d_min.x = lastLine.horzOffset + lastLine.extents.d_width;
    }

    out.d_max.y = d_height;
    out.d_max.x = out.d_min.x;

    return true;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getGlyphIndexAtPoint(const glm::vec2& pt) const
{
    if (d_linesDirty || pt.y < 0.f)
        return npos;

    float lineLocalY = pt.y;
    for (size_t i = 0; i < d_lines.size(); ++i)
    {
        const auto& line = d_lines[i];

        if (line.heightDirty)
            return npos;

        if (lineLocalY <= line.extents.d_height)
            return getNearestGlyphIndex(i, pt.x);

        lineLocalY -= line.extents.d_height;
    }

    return npos;
}

//----------------------------------------------------------------------------//
bool RenderedTextParagraph::getGlyphBounds(Rectf& out, size_t glyphIndex,
    const std::vector<RenderedTextElementPtr>& elements) const
{
    if (d_linesDirty || glyphIndex >= d_glyphs.size())
        return false;

    float lineY = 0.f;
    uint32_t i = 0;
    for (const auto& line : d_lines)
    {
        if (line.heightDirty)
            return false;

        if (glyphIndex >= line.glyphEndIdx)
        {
            lineY += line.extents.d_height;
            i = line.glyphEndIdx;
            continue;
        }

        const auto& glyph = d_glyphs[glyphIndex];
        const auto element = elements[glyph.elementIndex].get();

        out.d_min.y = lineY;
        float scale = 1.f;
        element->applyVerticalFormatting(line.extents.d_height, out.d_min.y, scale);

        out.setHeight(element->getHeight());

        i = skipWrappedWhitespace(i, line.glyphEndIdx);

        out.d_min.x = line.horzOffset;
        for (; i < glyphIndex; ++i)
        {
            out.d_min.x += d_glyphs[i].advance;
            if (d_glyphs[i].isJustifyable)
                out.d_min.x += line.justifySpaceSize;
        }

        if (glyphIndex < i)
        {
            // Skipped whitespace glyph is always a zero width rect at the beginning of the line
            out.setWidth(0.f);
        }
        else
        {
            float glyphWidth = std::max(glyph.advance, element->getGlyphWidth(glyph));
            if (glyph.isJustifyable)
                glyphWidth += line.justifySpaceSize;
            out.setWidth(glyphWidth);
        }

        return true;
    }

    return false;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getTextIndex(size_t glyphIndex) const
{
    return (glyphIndex < d_glyphs.size()) ? d_glyphs[glyphIndex].sourceIndex : npos;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getTextIndex(size_t lineIndex, float offsetX) const
{
    if (d_glyphs.empty())
        return d_sourceStartIndex;

    const auto idx = getNearestGlyphIndex(lineIndex, offsetX);
    return (idx != npos) ? d_glyphs[idx].sourceIndex : npos;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getNearestGlyphIndex(size_t textIndex) const
{
    size_t nearestIdx = npos;
    size_t nearestSrcIdx = npos;
    for (size_t i = 0; i < d_glyphs.size(); ++i)
    {
        // Check if the glyph represents this very textIndex
        const auto srcIndex = d_glyphs[i].sourceIndex;
        if (srcIndex == textIndex)
            return i;

        //!!!TODO TEXT: handle images and other non-text glyphs!
#if (CEGUI_STRING_CLASS == CEGUI_STRING_CLASS_UTF_8)
        // Check if textIndex is in the middle of the multi-byte UTF-8 codepoint
        if (auto fontGlyph = d_glyphs[i].fontGlyph)
            if (srcIndex < textIndex && textIndex < srcIndex + String::getCodePointUtf8Size(fontGlyph->getCodePoint()))
                return i;
#endif

        // Track the nearest existing glyph that goes after the requested position
        if (textIndex < srcIndex && srcIndex < nearestSrcIdx)
        {
            nearestIdx = i;
            nearestSrcIdx = srcIndex;
        }
    }

    return nearestIdx;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getNearestGlyphIndex(size_t lineIndex, float offsetX) const
{
    if (d_linesDirty || d_lines.size() <= lineIndex)
        return npos;

    const auto& line = d_lines[lineIndex];
    auto i = lineIndex ? d_lines[lineIndex - 1].glyphEndIdx : 0;

    // Point is to the left of the beginning
    if (offsetX < line.horzOffset)
        return i;

    i = skipWrappedWhitespace(i, line.glyphEndIdx);

    float nextGlyphStart = line.horzOffset;
    while (i < line.glyphEndIdx)
    {
        nextGlyphStart += d_glyphs[i].advance;
        if (d_glyphs[i].isJustifyable)
            nextGlyphStart += line.justifySpaceSize;

        if (offsetX < nextGlyphStart)
            return i;

        ++i;
    }

    // Point is to the right of the end
    return line.glyphEndIdx;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::getLineIndex(size_t textIndex) const
{
    if (d_linesDirty || d_lines.empty())
        return npos;

    const auto idx = getNearestGlyphIndex(textIndex);
    return (idx != npos) ? getGlyphLineIndex(idx) : (d_lines.size() - 1);
}

//----------------------------------------------------------------------------//
float RenderedTextParagraph::getLineOffsetY(size_t lineIndex) const
{
    if (d_linesDirty || d_lines.size() <= lineIndex)
        return 0.f;

    float lineOffsetY = 0.f;
    for (size_t i = 0; i < lineIndex; ++i)
    {
        const auto& line = d_lines[i];
        if (line.heightDirty)
            break;
        lineOffsetY += line.extents.d_height;
    }

    return lineOffsetY;
}

//----------------------------------------------------------------------------//
float RenderedTextParagraph::getLineHeight(size_t lineIndex) const
{
    if (d_linesDirty || d_lines.size() <= lineIndex || d_lines[lineIndex].heightDirty)
        return 0.f;
    return d_lines[lineIndex].extents.d_height;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::nextTextIndex(size_t textIndex) const
{
    const auto idx = getNearestGlyphIndex(textIndex);
    return (idx + 1 < d_glyphs.size() && idx != npos) ? d_glyphs[idx + 1].sourceIndex : d_sourceEndIndex;
}

//----------------------------------------------------------------------------//
size_t RenderedTextParagraph::prevTextIndex(size_t textIndex) const
{
    if (textIndex >= d_sourceEndIndex)
    {
        // Handle paragraph ending (newline) which has no glyph
        const auto idx = getNearestGlyphIndex(d_sourceEndIndex - 1);
        return (idx == npos) ? d_sourceEndIndex : d_glyphs[idx].sourceIndex;
    }
    else
    {
        const auto idx = getNearestGlyphIndex(textIndex);
        return (idx == npos) ? d_sourceEndIndex : idx ? d_glyphs[idx - 1].sourceIndex : d_sourceStartIndex;
    }
}

//----------------------------------------------------------------------------//
uint32_t RenderedTextParagraph::skipWrappedWhitespace(uint32_t start, uint32_t end) const
{
    // Never skip leading whitespaces in a paragraph
    if (!start || !d_wordWrap || !d_skipWrappedWhitespace)
        return start;

    for (uint32_t i = start; i < end; ++i)
        if (!d_glyphs[i].isWhitespace)
            return i;

    // Don't skip anything if there are only whitespace glyphs in the line
    return start;
}

}
