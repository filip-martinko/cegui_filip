/***************************************************************************
 *   Copyright (C) 2004 - 2006 Paul D Turner & The CEGUI Development Team
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
#include "CEGUI/WindowNavigator.h"
#include "CEGUI/Window.h"

namespace CEGUI
{

//----------------------------------------------------------------------------//
WindowNavigator::WindowNavigator(std::vector<std::pair<SemanticValue, String>> mappings,
    NavigationStrategy* strategy) :
    d_mappings(mappings),
    d_strategy(strategy),
    d_currentFocusedWindow(0)
{
}

//----------------------------------------------------------------------------//
void WindowNavigator::handleSemanticEvent(const SemanticInputEvent& event)
{
    std::vector<std::pair<SemanticValue, String>>::const_iterator itor;

    for (itor = d_mappings.begin();itor != d_mappings.end(); ++ itor)
    {
        if (itor->first == event.d_value)
        {
            if (d_currentFocusedWindow != 0)
                d_currentFocusedWindow->unfocus();

            d_currentFocusedWindow = 
                d_strategy->getWindow(d_currentFocusedWindow, itor->second);

            if (d_currentFocusedWindow != 0)
                d_currentFocusedWindow->focus();
            break;
        }
    }
}

//----------------------------------------------------------------------------//
}
