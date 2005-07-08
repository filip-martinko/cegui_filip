/*
** Lua binding: CEGUI
** Generated automatically by tolua++-1.0.6pre2 on 07/09/05 00:00:55.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_CEGUI_open (lua_State* tolua_S);

#include "required.h"
#include "CEGUIPropertyHelper.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CEGUI__Point (lua_State* tolua_S)
{
 CEGUI::Point* self = (CEGUI::Point*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__MCLGridRef (lua_State* tolua_S)
{
 CEGUI::MCLGridRef* self = (CEGUI::MCLGridRef*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__HeaderSequenceEventArgs (lua_State* tolua_S)
{
 CEGUI::HeaderSequenceEventArgs* self = (CEGUI::HeaderSequenceEventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__WindowEventArgs (lua_State* tolua_S)
{
 CEGUI::WindowEventArgs* self = (CEGUI::WindowEventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_ColourRect (lua_State* tolua_S)
{
 ColourRect* self = (ColourRect*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__colour (lua_State* tolua_S)
{
 CEGUI::colour* self = (CEGUI::colour*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__Size (lua_State* tolua_S)
{
 CEGUI::Size* self = (CEGUI::Size*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__MouseEventArgs (lua_State* tolua_S)
{
 CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__ActivationEventArgs (lua_State* tolua_S)
{
 CEGUI::ActivationEventArgs* self = (CEGUI::ActivationEventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__MouseCursorEventArgs (lua_State* tolua_S)
{
 CEGUI::MouseCursorEventArgs* self = (CEGUI::MouseCursorEventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__KeyEventArgs (lua_State* tolua_S)
{
 CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_uint (lua_State* tolua_S)
{
 uint* self = (uint*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__EventArgs (lua_State* tolua_S)
{
 CEGUI::EventArgs* self = (CEGUI::EventArgs*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__Rect (lua_State* tolua_S)
{
 CEGUI::Rect* self = (CEGUI::Rect*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CEGUI__Vector2 (lua_State* tolua_S)
{
 CEGUI::Vector2* self = (CEGUI::Vector2*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CEGUI::Logger");
 tolua_usertype(tolua_S,"CEGUI::Image");
 tolua_usertype(tolua_S,"CEGUI::Renderer");
 tolua_usertype(tolua_S,"CEGUI::Scrollbar");
 tolua_usertype(tolua_S,"CEGUI::MouseCursorEventArgs");
 tolua_usertype(tolua_S,"CEGUI::MouseCursor");
 tolua_usertype(tolua_S,"CEGUI::ComboDropList");
 tolua_usertype(tolua_S,"CEGUI::FrameWindow");
 tolua_usertype(tolua_S,"CEGUI::ButtonBase");
 tolua_usertype(tolua_S,"CEGUI::ListboxItem");
 tolua_usertype(tolua_S,"CEGUI::Imageset");
 tolua_usertype(tolua_S,"String");
 tolua_usertype(tolua_S,"CEGUI::PropertyHelper");
 tolua_usertype(tolua_S,"CEGUI::ProgressBar");
 tolua_usertype(tolua_S,"CEGUI::Spinner");
 tolua_usertype(tolua_S,"ColourRect");
 tolua_usertype(tolua_S,"CEGUI::TabPane");
 tolua_usertype(tolua_S,"CEGUI::KeyEventArgs");
 tolua_usertype(tolua_S,"CEGUI::FontManager");
 tolua_usertype(tolua_S,"uint");
 tolua_usertype(tolua_S,"CEGUI::ImagesetManager");
 tolua_usertype(tolua_S,"CEGUI::GlobalEventSet");
 tolua_usertype(tolua_S,"CEGUI::StaticText");
 tolua_usertype(tolua_S,"CEGUI::MultiLineEditbox");
 tolua_usertype(tolua_S,"CEGUI::WindowManager");
 tolua_usertype(tolua_S,"CEGUI::Checkbox");
 tolua_usertype(tolua_S,"CEGUI::ListHeader");
 tolua_usertype(tolua_S,"CEGUI::ScrolledContainer");
 tolua_usertype(tolua_S,"CEGUI::PushButton");
 tolua_usertype(tolua_S,"CEGUI::Listbox");
 tolua_usertype(tolua_S,"CEGUI::System");
 tolua_usertype(tolua_S,"CEGUI::ListboxTextItem");
 tolua_usertype(tolua_S,"CEGUI::TabButton");
 tolua_usertype(tolua_S,"CEGUI::MultiColumnList");
 tolua_usertype(tolua_S,"CEGUI::Point");
 tolua_usertype(tolua_S,"CEGUI::MCLGridRef");
 tolua_usertype(tolua_S,"CEGUI::Thumb");
 tolua_usertype(tolua_S,"CEGUI::GUISheet");
 tolua_usertype(tolua_S,"CEGUI::StaticImage");
 tolua_usertype(tolua_S,"CEGUI::colour");
 tolua_usertype(tolua_S,"CEGUI::Size");
 tolua_usertype(tolua_S,"CEGUI::ListHeaderSegment");
 tolua_usertype(tolua_S,"CEGUI::Texture");
 tolua_usertype(tolua_S,"CEGUI::MouseEventArgs");
 tolua_usertype(tolua_S,"CEGUI::TabControl");
 tolua_usertype(tolua_S,"CEGUI::Combobox");
 tolua_usertype(tolua_S,"CEGUI::SchemeManager");
 tolua_usertype(tolua_S,"CEGUI::ScrollablePane");
 tolua_usertype(tolua_S,"CEGUI::EventSet");
 tolua_usertype(tolua_S,"CEGUI::DragContainer");
 tolua_usertype(tolua_S,"CEGUI::Editbox");
 tolua_usertype(tolua_S,"CEGUI::RadioButton");
 tolua_usertype(tolua_S,"CEGUI::HeaderSequenceEventArgs");
 tolua_usertype(tolua_S,"CEGUI::Slider");
 tolua_usertype(tolua_S,"CEGUI::Vector2");
 tolua_usertype(tolua_S,"CEGUI::Tooltip");
 tolua_usertype(tolua_S,"CEGUI::Scheme");
 tolua_usertype(tolua_S,"CEGUI::Static");
 tolua_usertype(tolua_S,"CEGUI::Titlebar");
 tolua_usertype(tolua_S,"CEGUI::WindowEventArgs");
 tolua_usertype(tolua_S,"CEGUI::Font");
 tolua_usertype(tolua_S,"CEGUI::ActivationEventArgs");
 tolua_usertype(tolua_S,"CEGUI::EventArgs");
 tolua_usertype(tolua_S,"CEGUI::Window");
 tolua_usertype(tolua_S,"CEGUI::Rect");
}

/* get function: d_x of class  CEGUI::Vector2 */
static int tolua_get_CEGUI__Vector2_x(lua_State* tolua_S)
{
  CEGUI::Vector2* self = (CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_x'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_x);
 return 1;
}

/* set function: d_x of class  CEGUI::Vector2 */
static int tolua_set_CEGUI__Vector2_x(lua_State* tolua_S)
{
  CEGUI::Vector2* self = (CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_x'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_x = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_y of class  CEGUI::Vector2 */
static int tolua_get_CEGUI__Vector2_y(lua_State* tolua_S)
{
  CEGUI::Vector2* self = (CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_y);
 return 1;
}

/* set function: d_y of class  CEGUI::Vector2 */
static int tolua_set_CEGUI__Vector2_y(lua_State* tolua_S)
{
  CEGUI::Vector2* self = (CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_y = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: operator+ of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Vector2* self = (const CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Vector2* vec = ((const CEGUI::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'",NULL);
#endif
 {
  CEGUI::Vector2 tolua_ret = (CEGUI::Vector2)  self->operator+(*vec);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Vector2(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Vector2");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Vector2));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Vector2");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}

/* method: operator- of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Vector2* self = (const CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Vector2* vec = ((const CEGUI::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'",NULL);
#endif
 {
  CEGUI::Vector2 tolua_ret = (CEGUI::Vector2)  self->operator-(*vec);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Vector2(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Vector2");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Vector2));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Vector2");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}

/* method: operator* of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Vector2* self = (const CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Vector2* vec = ((const CEGUI::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'",NULL);
#endif
 {
  CEGUI::Vector2 tolua_ret = (CEGUI::Vector2)  self->operator*(*vec);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Vector2(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Vector2");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Vector2));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Vector2");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}

/* method: operator== of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Vector2* self = (const CEGUI::Vector2*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Vector2* vec = ((const CEGUI::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->operator==(*vec);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Vector2* tolua_ret = (CEGUI::Vector2*)  new CEGUI::Vector2();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Vector2");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Vector2* tolua_ret = (CEGUI::Vector2*)  new CEGUI::Vector2();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Vector2");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::Vector2* tolua_ret = (CEGUI::Vector2*)  new CEGUI::Vector2(x,y);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Vector2");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Vector2_new00(tolua_S);
}

/* method: new_local of class  CEGUI::Vector2 */
static int tolua_CEGUI_CEGUI_Vector2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::Vector2* tolua_ret = (CEGUI::Vector2*)  new CEGUI::Vector2(x,y);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Vector2");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Vector2_new00_local(tolua_S);
}

/* get function: d_x of class  CEGUI::Point */
static int tolua_get_CEGUI__Point_x(lua_State* tolua_S)
{
  CEGUI::Point* self = (CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_x'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_x);
 return 1;
}

/* set function: d_x of class  CEGUI::Point */
static int tolua_set_CEGUI__Point_x(lua_State* tolua_S)
{
  CEGUI::Point* self = (CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_x'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_x = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_y of class  CEGUI::Point */
static int tolua_get_CEGUI__Point_y(lua_State* tolua_S)
{
  CEGUI::Point* self = (CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_y);
 return 1;
}

/* set function: d_y of class  CEGUI::Point */
static int tolua_set_CEGUI__Point_y(lua_State* tolua_S)
{
  CEGUI::Point* self = (CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_y = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: operator+ of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Point* self = (const CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* vec = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->operator+(*vec);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}

/* method: operator- of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Point* self = (const CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* vec = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->operator-(*vec);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}

/* method: operator* of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Point* self = (const CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* vec = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->operator*(*vec);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}

/* method: operator== of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Point* self = (const CEGUI::Point*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* vec = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->operator==(*vec);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Point* tolua_ret = (CEGUI::Point*)  new CEGUI::Point();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Point");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Point* tolua_ret = (CEGUI::Point*)  new CEGUI::Point();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Point");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Point",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::Point* tolua_ret = (CEGUI::Point*)  new CEGUI::Point(x,y);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Point");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Point_new00(tolua_S);
}

/* method: new_local of class  CEGUI::Point */
static int tolua_CEGUI_CEGUI_Point_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Point",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::Point* tolua_ret = (CEGUI::Point*)  new CEGUI::Point(x,y);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Point");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Point_new00_local(tolua_S);
}

/* get function: d_width of class  CEGUI::Size */
static int tolua_get_CEGUI__Size_width(lua_State* tolua_S)
{
  CEGUI::Size* self = (CEGUI::Size*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_width'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_width);
 return 1;
}

/* set function: d_width of class  CEGUI::Size */
static int tolua_set_CEGUI__Size_width(lua_State* tolua_S)
{
  CEGUI::Size* self = (CEGUI::Size*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_width'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_width = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_height of class  CEGUI::Size */
static int tolua_get_CEGUI__Size_height(lua_State* tolua_S)
{
  CEGUI::Size* self = (CEGUI::Size*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_height'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_height);
 return 1;
}

/* set function: d_height of class  CEGUI::Size */
static int tolua_set_CEGUI__Size_height(lua_State* tolua_S)
{
  CEGUI::Size* self = (CEGUI::Size*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_height'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_height = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: operator== of class  CEGUI::Size */
static int tolua_CEGUI_CEGUI_Size__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Size* self = (const CEGUI::Size*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->operator==(*sz);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Size */
static int tolua_CEGUI_CEGUI_Size_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Size* tolua_ret = (CEGUI::Size*)  new CEGUI::Size();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Size");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::Size */
static int tolua_CEGUI_CEGUI_Size_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Size* tolua_ret = (CEGUI::Size*)  new CEGUI::Size();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Size");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Size */
static int tolua_CEGUI_CEGUI_Size_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Size",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::Size* tolua_ret = (CEGUI::Size*)  new CEGUI::Size(w,h);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Size");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Size_new00(tolua_S);
}

/* method: new_local of class  CEGUI::Size */
static int tolua_CEGUI_CEGUI_Size_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Size",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::Size* tolua_ret = (CEGUI::Size*)  new CEGUI::Size(w,h);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Size");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Size_new00_local(tolua_S);
}

/* get function: d_top of class  CEGUI::Rect */
static int tolua_get_CEGUI__Rect_top(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_top'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_top);
 return 1;
}

/* set function: d_top of class  CEGUI::Rect */
static int tolua_set_CEGUI__Rect_top(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_top'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_top = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_bottom of class  CEGUI::Rect */
static int tolua_get_CEGUI__Rect_bottom(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_bottom'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_bottom);
 return 1;
}

/* set function: d_bottom of class  CEGUI::Rect */
static int tolua_set_CEGUI__Rect_bottom(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_bottom'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_bottom = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_left of class  CEGUI::Rect */
static int tolua_get_CEGUI__Rect_left(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_left'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_left);
 return 1;
}

/* set function: d_left of class  CEGUI::Rect */
static int tolua_set_CEGUI__Rect_left(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_left'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_left = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_right of class  CEGUI::Rect */
static int tolua_get_CEGUI__Rect_right(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_right'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_right);
 return 1;
}

/* set function: d_right of class  CEGUI::Rect */
static int tolua_set_CEGUI__Rect_right(lua_State* tolua_S)
{
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_right'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_right = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: getPosition of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getPosition();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getWidth of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getHeight of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getSize of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getIntersection of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_getIntersection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* rect = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIntersection'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getIntersection(*rect);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIntersection'.",&tolua_err);
 return 0;
#endif
}

/* method: isPointInRect of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_isPointInRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPointInRect'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isPointInRect(*p);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPointInRect'.",&tolua_err);
 return 0;
#endif
}

/* method: setPosition of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'",NULL);
#endif
 {
  self->setPosition(*p);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setWidth of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_setWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidth'",NULL);
#endif
 {
  self->setWidth(w);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: setHeight of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_setHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  float h = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHeight'",NULL);
#endif
 {
  self->setHeight(h);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: setSize of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_setSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSize'",NULL);
#endif
 {
  self->setSize(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSize'.",&tolua_err);
 return 0;
#endif
}

/* method: offset of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_offset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'offset'",NULL);
#endif
 {
  CEGUI::Rect& tolua_ret = (CEGUI::Rect&)  self->offset(*p);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'offset'.",&tolua_err);
 return 0;
#endif
}

/* method: constrainSizeMax of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_constrainSizeMax00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'constrainSizeMax'",NULL);
#endif
 {
  CEGUI::Rect& tolua_ret = (CEGUI::Rect&)  self->constrainSizeMax(*sz);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'constrainSizeMax'.",&tolua_err);
 return 0;
#endif
}

/* method: constrainSizeMin of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_constrainSizeMin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'constrainSizeMin'",NULL);
#endif
 {
  CEGUI::Rect& tolua_ret = (CEGUI::Rect&)  self->constrainSizeMin(*sz);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'constrainSizeMin'.",&tolua_err);
 return 0;
#endif
}

/* method: constrainSize of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_constrainSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Rect* self = (CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* min = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::Size* max = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'constrainSize'",NULL);
#endif
 {
  CEGUI::Rect& tolua_ret = (CEGUI::Rect&)  self->constrainSize(*min,*max);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'constrainSize'.",&tolua_err);
 return 0;
#endif
}

/* method: operator== of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* self = (const CEGUI::Rect*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* r = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->operator==(*r);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Rect* tolua_ret = (CEGUI::Rect*)  new CEGUI::Rect();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Rect* tolua_ret = (CEGUI::Rect*)  new CEGUI::Rect();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float l = ((float)  tolua_tonumber(tolua_S,2,0));
  float t = ((float)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float b = ((float)  tolua_tonumber(tolua_S,5,0));
 {
  CEGUI::Rect* tolua_ret = (CEGUI::Rect*)  new CEGUI::Rect(l,t,r,b);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Rect_new00(tolua_S);
}

/* method: new_local of class  CEGUI::Rect */
static int tolua_CEGUI_CEGUI_Rect_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float l = ((float)  tolua_tonumber(tolua_S,2,0));
  float t = ((float)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float b = ((float)  tolua_tonumber(tolua_S,5,0));
 {
  CEGUI::Rect* tolua_ret = (CEGUI::Rect*)  new CEGUI::Rect(l,t,r,b);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::Rect");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Rect_new00_local(tolua_S);
}

/* method: getAlpha of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAlpha();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: getRed of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getRed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRed'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRed();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRed'.",&tolua_err);
 return 0;
#endif
}

/* method: getGreen of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getGreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGreen'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getGreen();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGreen'.",&tolua_err);
 return 0;
#endif
}

/* method: getBlue of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getBlue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getBlue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlue'.",&tolua_err);
 return 0;
#endif
}

/* method: getHue of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getHue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHue'.",&tolua_err);
 return 0;
#endif
}

/* method: getSaturation of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getSaturation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSaturation'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getSaturation();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSaturation'.",&tolua_err);
 return 0;
#endif
}

/* method: getLumination of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_getLumination00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLumination'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getLumination();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLumination'.",&tolua_err);
 return 0;
#endif
}

/* method: set of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
 {
  self->set(r,g,b,a);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}

/* method: setAlpha of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'",NULL);
#endif
 {
  self->setAlpha(a);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: setRed of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_setRed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRed'",NULL);
#endif
 {
  self->setRed(r);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRed'.",&tolua_err);
 return 0;
#endif
}

/* method: setGreen of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_setGreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float g = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGreen'",NULL);
#endif
 {
  self->setGreen(g);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGreen'.",&tolua_err);
 return 0;
#endif
}

/* method: setBlue of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_setBlue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float b = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlue'",NULL);
#endif
 {
  self->setBlue(b);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlue'.",&tolua_err);
 return 0;
#endif
}

/* method: setRGB of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_setRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRGB'",NULL);
#endif
 {
  self->setRGB(r,g,b);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRGB'.",&tolua_err);
 return 0;
#endif
}

/* method: setHSL of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_setHSL00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::colour* self = (CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  float hue = ((float)  tolua_tonumber(tolua_S,2,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,3,0));
  float luminance = ((float)  tolua_tonumber(tolua_S,4,0));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHSL'",NULL);
#endif
 {
  self->setHSL(hue,saturation,luminance,alpha);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHSL'.",&tolua_err);
 return 0;
#endif
}

/* method: operator+ of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->operator+(*c);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}

/* method: operator- of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->operator-(*c);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}

/* method: operator== of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* self = (const CEGUI::colour*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->operator==(*c);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::colour* tolua_ret = (CEGUI::colour*)  new CEGUI::colour();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::colour");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::colour* tolua_ret = (CEGUI::colour*)  new CEGUI::colour();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::colour");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
 {
  CEGUI::colour* tolua_ret = (CEGUI::colour*)  new CEGUI::colour(r,g,b,a);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::colour");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_colour_new00(tolua_S);
}

/* method: new_local of class  CEGUI::colour */
static int tolua_CEGUI_CEGUI_colour_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
 {
  CEGUI::colour* tolua_ret = (CEGUI::colour*)  new CEGUI::colour(r,g,b,a);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::colour");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_colour_new00_local(tolua_S);
}

/* method: getSingleton of class  CEGUI::Logger */
static int tolua_CEGUI_CEGUI_Logger_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Logger",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Logger& tolua_ret = (CEGUI::Logger&)  CEGUI::Logger::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::Logger");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: setLoggingLevel of class  CEGUI::Logger */
static int tolua_CEGUI_CEGUI_Logger_setLoggingLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Logger",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Logger* self = (CEGUI::Logger*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::LoggingLevel level = ((CEGUI::LoggingLevel) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLoggingLevel'",NULL);
#endif
 {
  self->setLoggingLevel(level);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLoggingLevel'.",&tolua_err);
 return 0;
#endif
}

/* method: getLoggingLevel of class  CEGUI::Logger */
static int tolua_CEGUI_CEGUI_Logger_getLoggingLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Logger",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Logger* self = (const CEGUI::Logger*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLoggingLevel'",NULL);
#endif
 {
  CEGUI::LoggingLevel tolua_ret = (CEGUI::LoggingLevel)  self->getLoggingLevel();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLoggingLevel'.",&tolua_err);
 return 0;
#endif
}

/* method: logEvent of class  CEGUI::Logger */
static int tolua_CEGUI_CEGUI_Logger_logEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Logger",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Logger* self = (CEGUI::Logger*)  tolua_tousertype(tolua_S,1,0);
  string message = ((string)  tolua_tocppstring(tolua_S,2,0));
  CEGUI::LoggingLevel level = ((CEGUI::LoggingLevel) (int)  tolua_tonumber(tolua_S,3,CEGUI::Standard));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logEvent'",NULL);
#endif
 {
  self->logEvent(message,level);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: getName of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getName();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}

/* method: defineFontGlyphs of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_defineFontGlyphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Font* self = (CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned long first = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long last = ((unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'defineFontGlyphs'",NULL);
#endif
 {
  self->defineFontGlyphs(first,last);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defineFontGlyphs'.",&tolua_err);
 return 0;
#endif
}

/* method: defineFontGlyphs of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_defineFontGlyphs01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Font",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Font* self = (CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  string glyph_set = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'defineFontGlyphs'",NULL);
#endif
 {
  self->defineFontGlyphs(glyph_set);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Font_defineFontGlyphs00(tolua_S);
}

/* method: isCodepointAvailable of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_isCodepointAvailable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned long cp = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCodepointAvailable'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isCodepointAvailable(cp);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCodepointAvailable'.",&tolua_err);
 return 0;
#endif
}

/* method: getAvailableGlyphs of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getAvailableGlyphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAvailableGlyphs'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getAvailableGlyphs();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAvailableGlyphs'.",&tolua_err);
 return 0;
#endif
}

/* method: getPointSize of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getPointSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPointSize'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getPointSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPointSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setNativeResolution of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_setNativeResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Font* self = (CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNativeResolution'",NULL);
#endif
 {
  self->setNativeResolution(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNativeResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: getNativeResolution of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getNativeResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNativeResolution'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getNativeResolution();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNativeResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyScreenResolution of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_notifyScreenResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Font* self = (CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyScreenResolution'",NULL);
#endif
 {
  self->notifyScreenResolution(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyScreenResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: setAutoScalingEnabled of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_setAutoScalingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Font* self = (CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoScalingEnabled'",NULL);
#endif
 {
  self->setAutoScalingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoScalingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isAutoScaled of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_isAutoScaled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoScaled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAutoScaled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoScaled'.",&tolua_err);
 return 0;
#endif
}

/* method: setAntiAliased of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_setAntiAliased00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Font* self = (CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAntiAliased'",NULL);
#endif
 {
  self->setAntiAliased(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAntiAliased'.",&tolua_err);
 return 0;
#endif
}

/* method: isAntiAliased of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_isAntiAliased00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAntiAliased'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAntiAliased();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAntiAliased'.",&tolua_err);
 return 0;
#endif
}

/* method: getTextExtent of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getTextExtent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  float xscale = ((float)  tolua_tonumber(tolua_S,3,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextExtent'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getTextExtent(text,xscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextExtent'.",&tolua_err);
 return 0;
#endif
}

/* method: getLineSpacing of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getLineSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  float yscale = ((float)  tolua_tonumber(tolua_S,2,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineSpacing'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getLineSpacing(yscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineSpacing'.",&tolua_err);
 return 0;
#endif
}

/* method: getFontHeight of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getFontHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  float yscale = ((float)  tolua_tonumber(tolua_S,2,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getFontHeight(yscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getCharAtPixel of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getCharAtPixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned long start_char = ((unsigned long)  tolua_tonumber(tolua_S,3,0));
  float pixel = ((float)  tolua_tonumber(tolua_S,4,0));
  float xscale = ((float)  tolua_tonumber(tolua_S,5,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCharAtPixel'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getCharAtPixel(text,start_char,pixel,xscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCharAtPixel'.",&tolua_err);
 return 0;
#endif
}

/* method: getCharAtPixel of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getCharAtPixel01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  float pixel = ((float)  tolua_tonumber(tolua_S,3,0));
  float xscale = ((float)  tolua_tonumber(tolua_S,4,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCharAtPixel'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getCharAtPixel(text,pixel,xscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Font_getCharAtPixel00(tolua_S);
}

/* method: getFormattedLineCount of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getFormattedLineCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  const CEGUI::Rect* format_area = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,3,0));
  CEGUI::TextFormatting fmt = ((CEGUI::TextFormatting) (int)  tolua_tonumber(tolua_S,4,0));
  float xscale = ((float)  tolua_tonumber(tolua_S,5,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFormattedLineCount'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getFormattedLineCount(text,*format_area,fmt,xscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFormattedLineCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getFormattedTextExtent of class  CEGUI::Font */
static int tolua_CEGUI_CEGUI_Font_getFormattedTextExtent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Font* self = (const CEGUI::Font*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  const CEGUI::Rect* format_area = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,3,0));
  CEGUI::TextFormatting fmt = ((CEGUI::TextFormatting) (int)  tolua_tonumber(tolua_S,4,0));
  float xscale = ((float)  tolua_tonumber(tolua_S,5,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFormattedTextExtent'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getFormattedTextExtent(text,*format_area,fmt,xscale);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFormattedTextExtent'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::FontManager& tolua_ret = (CEGUI::FontManager&)  CEGUI::FontManager::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::FontManager");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: createFont of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_createFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FontManager* self = (CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  string fontname = ((string)  tolua_tocppstring(tolua_S,3,0));
  unsigned int size = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int flags = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,6,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createFont'",NULL);
#endif
 {
  CEGUI::Font* tolua_ret = (CEGUI::Font*)  self->createFont(name,fontname,size,flags,resourcegroup);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Font");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createFont'.",&tolua_err);
 return 0;
#endif
}

/* method: createFont of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_createFont01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::FontManager* self = (CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,3,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createFont'",NULL);
#endif
 {
  CEGUI::Font* tolua_ret = (CEGUI::Font*)  self->createFont(filename,resourcegroup);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Font");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_FontManager_createFont00(tolua_S);
}

/* method: destroyFont of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_destroyFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FontManager* self = (CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyFont'",NULL);
#endif
 {
  self->destroyFont(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyFont'.",&tolua_err);
 return 0;
#endif
}

/* method: destroyFont of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_destroyFont01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::FontManager* self = (CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Font* font = ((CEGUI::Font*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyFont'",NULL);
#endif
 {
  self->destroyFont(font);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_FontManager_destroyFont00(tolua_S);
}

/* method: destroyAllFonts of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_destroyAllFonts00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FontManager* self = (CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllFonts'",NULL);
#endif
 {
  self->destroyAllFonts();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllFonts'.",&tolua_err);
 return 0;
#endif
}

/* method: isFontPresent of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_isFontPresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FontManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FontManager* self = (const CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFontPresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isFontPresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFontPresent'.",&tolua_err);
 return 0;
#endif
}

/* method: getFont of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_getFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FontManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FontManager* self = (const CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFont'",NULL);
#endif
 {
  CEGUI::Font* tolua_ret = (CEGUI::Font*)  self->getFont(name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Font");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFont'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyScreenResolution of class  CEGUI::FontManager */
static int tolua_CEGUI_CEGUI_FontManager_notifyScreenResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FontManager",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FontManager* self = (CEGUI::FontManager*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyScreenResolution'",NULL);
#endif
 {
  self->notifyScreenResolution(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyScreenResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: getSize of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getWidth of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getHeight of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getOffsets of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getOffsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsets'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getOffsets();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsets'.",&tolua_err);
 return 0;
#endif
}

/* method: getOffsetX of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetX'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getOffsetX();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetX'.",&tolua_err);
 return 0;
#endif
}

/* method: getOffsetY of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetY'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getOffsetY();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetY'.",&tolua_err);
 return 0;
#endif
}

/* method: getName of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getName();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}

/* method: getImagesetName of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getImagesetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImagesetName'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getImagesetName();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImagesetName'.",&tolua_err);
 return 0;
#endif
}

/* method: getSourceTextureArea of class  CEGUI::Image */
static int tolua_CEGUI_CEGUI_Image_getSourceTextureArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* self = (const CEGUI::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSourceTextureArea'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getSourceTextureArea();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSourceTextureArea'.",&tolua_err);
 return 0;
#endif
}

/* method: getWidth of class  CEGUI::Texture */
static int tolua_CEGUI_CEGUI_Texture_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Texture",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Texture* self = (const CEGUI::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'",NULL);
#endif
 {
  unsigned short tolua_ret = (unsigned short)  self->getWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getHeight of class  CEGUI::Texture */
static int tolua_CEGUI_CEGUI_Texture_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Texture",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Texture* self = (const CEGUI::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'",NULL);
#endif
 {
  unsigned short tolua_ret = (unsigned short)  self->getHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: loadFromFile of class  CEGUI::Texture */
static int tolua_CEGUI_CEGUI_Texture_loadFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Texture",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Texture* self = (CEGUI::Texture*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,3,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadFromFile'",NULL);
#endif
 {
  self->loadFromFile(filename,resourcegroup);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadFromFile'.",&tolua_err);
 return 0;
#endif
}

/* method: getRenderer of class  CEGUI::Texture */
static int tolua_CEGUI_CEGUI_Texture_getRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Texture",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Texture* self = (const CEGUI::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRenderer'",NULL);
#endif
 {
  CEGUI::Renderer* tolua_ret = (CEGUI::Renderer*)  self->getRenderer();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Renderer");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRenderer'.",&tolua_err);
 return 0;
#endif
}

/* method: getTexture of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'",NULL);
#endif
 {
  CEGUI::Texture* tolua_ret = (CEGUI::Texture*)  self->getTexture();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Texture");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}

/* method: getName of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getName();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageCount of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getImageCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageCount'.",&tolua_err);
 return 0;
#endif
}

/* method: isImageDefined of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_isImageDefined00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isImageDefined'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isImageDefined(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isImageDefined'.",&tolua_err);
 return 0;
#endif
}

/* method: getImage of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImage'",NULL);
#endif
 {
  const CEGUI::Image& tolua_ret = (const CEGUI::Image&)  self->getImage(name);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImage'.",&tolua_err);
 return 0;
#endif
}

/* method: undefineImage of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_undefineImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'undefineImage'",NULL);
#endif
 {
  self->undefineImage(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'undefineImage'.",&tolua_err);
 return 0;
#endif
}

/* method: undefineAllImages of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_undefineAllImages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'undefineAllImages'",NULL);
#endif
 {
  self->undefineAllImages();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'undefineAllImages'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageSize of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getImageSize(name);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageWidth of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getImageWidth(name);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageHeight of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getImageHeight(name);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageOffset of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageOffset'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getImageOffset(name);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageOffset'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageOffsetX of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageOffsetX'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getImageOffsetX(name);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageOffsetX'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageOffsetY of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getImageOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageOffsetY'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getImageOffsetY(name);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageOffsetY'.",&tolua_err);
 return 0;
#endif
}

/* method: defineImage of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_defineImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  const CEGUI::Point* pos = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::Size* size = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,4,0));
  const CEGUI::Point* render_offset = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'defineImage'",NULL);
#endif
 {
  self->defineImage(name,*pos,*size,*render_offset);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defineImage'.",&tolua_err);
 return 0;
#endif
}

/* method: defineImage of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_defineImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  const CEGUI::Rect* rect = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::Point* render_offset = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'defineImage'",NULL);
#endif
 {
  self->defineImage(name,*rect,*render_offset);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Imageset_defineImage00(tolua_S);
}

/* method: isAutoScaled of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_isAutoScaled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoScaled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAutoScaled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoScaled'.",&tolua_err);
 return 0;
#endif
}

/* method: setAutoScalingEnabled of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_setAutoScalingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoScalingEnabled'",NULL);
#endif
 {
  self->setAutoScalingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoScalingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getNativeResolution of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_getNativeResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Imageset* self = (const CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNativeResolution'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getNativeResolution();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNativeResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: setNativeResolution of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_setNativeResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNativeResolution'",NULL);
#endif
 {
  self->setNativeResolution(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNativeResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyScreenResolution of class  CEGUI::Imageset */
static int tolua_CEGUI_CEGUI_Imageset_notifyScreenResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Imageset* self = (CEGUI::Imageset*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyScreenResolution'",NULL);
#endif
 {
  self->notifyScreenResolution(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyScreenResolution'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::ImagesetManager& tolua_ret = (CEGUI::ImagesetManager&)  CEGUI::ImagesetManager::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::ImagesetManager");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: createImageset of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_createImageset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CEGUI::Texture",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ImagesetManager* self = (CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  CEGUI::Texture* texture = ((CEGUI::Texture*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createImageset'",NULL);
#endif
 {
  CEGUI::Imageset* tolua_ret = (CEGUI::Imageset*)  self->createImageset(name,texture);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Imageset");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createImageset'.",&tolua_err);
 return 0;
#endif
}

/* method: createImageset of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_createImageset01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ImagesetManager* self = (CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,3,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createImageset'",NULL);
#endif
 {
  CEGUI::Imageset* tolua_ret = (CEGUI::Imageset*)  self->createImageset(filename,resourcegroup);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Imageset");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ImagesetManager_createImageset00(tolua_S);
}

/* method: destroyImageset of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_destroyImageset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Imageset",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ImagesetManager* self = (CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Imageset* imageset = ((CEGUI::Imageset*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyImageset'",NULL);
#endif
 {
  self->destroyImageset(imageset);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyImageset'.",&tolua_err);
 return 0;
#endif
}

/* method: destroyImageset of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_destroyImageset01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ImagesetManager* self = (CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyImageset'",NULL);
#endif
 {
  self->destroyImageset(name);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ImagesetManager_destroyImageset00(tolua_S);
}

/* method: destroyAllImagesets of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_destroyAllImagesets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ImagesetManager* self = (CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllImagesets'",NULL);
#endif
 {
  self->destroyAllImagesets();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllImagesets'.",&tolua_err);
 return 0;
#endif
}

/* method: getImageset of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_getImageset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ImagesetManager* self = (const CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageset'",NULL);
#endif
 {
  CEGUI::Imageset* tolua_ret = (CEGUI::Imageset*)  self->getImageset(name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Imageset");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageset'.",&tolua_err);
 return 0;
#endif
}

/* method: isImagesetPresent of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_isImagesetPresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ImagesetManager* self = (const CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isImagesetPresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isImagesetPresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isImagesetPresent'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyScreenResolution of class  CEGUI::ImagesetManager */
static int tolua_CEGUI_CEGUI_ImagesetManager_notifyScreenResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ImagesetManager",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ImagesetManager* self = (CEGUI::ImagesetManager*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* size = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyScreenResolution'",NULL);
#endif
 {
  self->notifyScreenResolution(*size);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyScreenResolution'.",&tolua_err);
 return 0;
#endif
}

/* get function: handled of class  CEGUI::EventArgs */
static int tolua_get_CEGUI__EventArgs_handled(lua_State* tolua_S)
{
  CEGUI::EventArgs* self = (CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'handled'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->handled);
 return 1;
}

/* set function: handled of class  CEGUI::EventArgs */
static int tolua_set_CEGUI__EventArgs_handled(lua_State* tolua_S)
{
  CEGUI::EventArgs* self = (CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'handled'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->handled = ((bool)  tolua_toboolean(tolua_S,2,0));
 return 0;
}

/* method: new of class  CEGUI::EventArgs */
static int tolua_CEGUI_CEGUI_EventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::EventArgs* tolua_ret = (CEGUI::EventArgs*)  new CEGUI::EventArgs();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::EventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::EventArgs */
static int tolua_CEGUI_CEGUI_EventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::EventArgs* tolua_ret = (CEGUI::EventArgs*)  new CEGUI::EventArgs();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::EventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* get function: mouseCursor of class  CEGUI::MouseCursorEventArgs */
static int tolua_get_CEGUI__MouseCursorEventArgs_mouseCursor_ptr(lua_State* tolua_S)
{
  CEGUI::MouseCursorEventArgs* self = (CEGUI::MouseCursorEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseCursor'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->mouseCursor,"CEGUI::MouseCursor");
 return 1;
}

/* set function: mouseCursor of class  CEGUI::MouseCursorEventArgs */
static int tolua_set_CEGUI__MouseCursorEventArgs_mouseCursor_ptr(lua_State* tolua_S)
{
  CEGUI::MouseCursorEventArgs* self = (CEGUI::MouseCursorEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseCursor'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CEGUI::MouseCursor",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mouseCursor = ((CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,2,0));
 return 0;
}

/* get function: image of class  CEGUI::MouseCursorEventArgs */
static int tolua_get_CEGUI__MouseCursorEventArgs_image_ptr(lua_State* tolua_S)
{
  CEGUI::MouseCursorEventArgs* self = (CEGUI::MouseCursorEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'image'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->image,"const CEGUI::Image");
 return 1;
}

/* method: new of class  CEGUI::MouseCursorEventArgs */
static int tolua_CEGUI_CEGUI_MouseCursorEventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MouseCursorEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* cursor = ((CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::MouseCursorEventArgs* tolua_ret = (CEGUI::MouseCursorEventArgs*)  new CEGUI::MouseCursorEventArgs(cursor);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::MouseCursorEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::MouseCursorEventArgs */
static int tolua_CEGUI_CEGUI_MouseCursorEventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MouseCursorEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* cursor = ((CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::MouseCursorEventArgs* tolua_ret = (CEGUI::MouseCursorEventArgs*)  new CEGUI::MouseCursorEventArgs(cursor);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::MouseCursorEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* get function: window of class  CEGUI::WindowEventArgs */
static int tolua_get_CEGUI__WindowEventArgs_window_ptr(lua_State* tolua_S)
{
  CEGUI::WindowEventArgs* self = (CEGUI::WindowEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'window'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->window,"CEGUI::Window");
 return 1;
}

/* set function: window of class  CEGUI::WindowEventArgs */
static int tolua_set_CEGUI__WindowEventArgs_window_ptr(lua_State* tolua_S)
{
  CEGUI::WindowEventArgs* self = (CEGUI::WindowEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'window'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->window = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 return 0;
}

/* method: new of class  CEGUI::WindowEventArgs */
static int tolua_CEGUI_CEGUI_WindowEventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::WindowEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::WindowEventArgs* tolua_ret = (CEGUI::WindowEventArgs*)  new CEGUI::WindowEventArgs(wnd);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::WindowEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::WindowEventArgs */
static int tolua_CEGUI_CEGUI_WindowEventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::WindowEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::WindowEventArgs* tolua_ret = (CEGUI::WindowEventArgs*)  new CEGUI::WindowEventArgs(wnd);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::WindowEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* get function: otherWindow of class  CEGUI::ActivationEventArgs */
static int tolua_get_CEGUI__ActivationEventArgs_otherWindow_ptr(lua_State* tolua_S)
{
  CEGUI::ActivationEventArgs* self = (CEGUI::ActivationEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'otherWindow'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->otherWindow,"CEGUI::Window");
 return 1;
}

/* set function: otherWindow of class  CEGUI::ActivationEventArgs */
static int tolua_set_CEGUI__ActivationEventArgs_otherWindow_ptr(lua_State* tolua_S)
{
  CEGUI::ActivationEventArgs* self = (CEGUI::ActivationEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'otherWindow'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->otherWindow = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 return 0;
}

/* method: new of class  CEGUI::ActivationEventArgs */
static int tolua_CEGUI_CEGUI_ActivationEventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::ActivationEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::ActivationEventArgs* tolua_ret = (CEGUI::ActivationEventArgs*)  new CEGUI::ActivationEventArgs(wnd);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ActivationEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::ActivationEventArgs */
static int tolua_CEGUI_CEGUI_ActivationEventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::ActivationEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::ActivationEventArgs* tolua_ret = (CEGUI::ActivationEventArgs*)  new CEGUI::ActivationEventArgs(wnd);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::ActivationEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* get function: d_oldIdx of class  CEGUI::HeaderSequenceEventArgs */
static int tolua_get_CEGUI__HeaderSequenceEventArgs_unsigned_oldIdx(lua_State* tolua_S)
{
  CEGUI::HeaderSequenceEventArgs* self = (CEGUI::HeaderSequenceEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_oldIdx'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_oldIdx);
 return 1;
}

/* set function: d_oldIdx of class  CEGUI::HeaderSequenceEventArgs */
static int tolua_set_CEGUI__HeaderSequenceEventArgs_unsigned_oldIdx(lua_State* tolua_S)
{
  CEGUI::HeaderSequenceEventArgs* self = (CEGUI::HeaderSequenceEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_oldIdx'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_oldIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: d_newIdx of class  CEGUI::HeaderSequenceEventArgs */
static int tolua_get_CEGUI__HeaderSequenceEventArgs_unsigned_newIdx(lua_State* tolua_S)
{
  CEGUI::HeaderSequenceEventArgs* self = (CEGUI::HeaderSequenceEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_newIdx'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->d_newIdx);
 return 1;
}

/* set function: d_newIdx of class  CEGUI::HeaderSequenceEventArgs */
static int tolua_set_CEGUI__HeaderSequenceEventArgs_unsigned_newIdx(lua_State* tolua_S)
{
  CEGUI::HeaderSequenceEventArgs* self = (CEGUI::HeaderSequenceEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd_newIdx'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d_newIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: new of class  CEGUI::HeaderSequenceEventArgs */
static int tolua_CEGUI_CEGUI_HeaderSequenceEventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::HeaderSequenceEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
  unsigned int old_index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int new_index = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
 {
  CEGUI::HeaderSequenceEventArgs* tolua_ret = (CEGUI::HeaderSequenceEventArgs*)  new CEGUI::HeaderSequenceEventArgs(wnd,old_index,new_index);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::HeaderSequenceEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::HeaderSequenceEventArgs */
static int tolua_CEGUI_CEGUI_HeaderSequenceEventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::HeaderSequenceEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
  unsigned int old_index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int new_index = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
 {
  CEGUI::HeaderSequenceEventArgs* tolua_ret = (CEGUI::HeaderSequenceEventArgs*)  new CEGUI::HeaderSequenceEventArgs(wnd,old_index,new_index);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::HeaderSequenceEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* get function: position of class  CEGUI::MouseEventArgs */
static int tolua_get_CEGUI__MouseEventArgs_position(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&self->position,"CEGUI::Point");
 return 1;
}

/* set function: position of class  CEGUI::MouseEventArgs */
static int tolua_set_CEGUI__MouseEventArgs_position(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CEGUI::Point",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->position = *((CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
 return 0;
}

/* get function: moveDelta of class  CEGUI::MouseEventArgs */
static int tolua_get_CEGUI__MouseEventArgs_moveDelta(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'moveDelta'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&self->moveDelta,"CEGUI::Vector2");
 return 1;
}

/* set function: moveDelta of class  CEGUI::MouseEventArgs */
static int tolua_set_CEGUI__MouseEventArgs_moveDelta(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'moveDelta'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CEGUI::Vector2",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->moveDelta = *((CEGUI::Vector2*)  tolua_tousertype(tolua_S,2,0));
 return 0;
}

/* get function: button of class  CEGUI::MouseEventArgs */
static int tolua_get_CEGUI__MouseEventArgs_button(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->button);
 return 1;
}

/* set function: button of class  CEGUI::MouseEventArgs */
static int tolua_set_CEGUI__MouseEventArgs_button(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->button = ((CEGUI::MouseButton) (int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: sysKeys of class  CEGUI::MouseEventArgs */
static int tolua_get_CEGUI__MouseEventArgs_unsigned_sysKeys(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sysKeys'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->sysKeys);
 return 1;
}

/* set function: sysKeys of class  CEGUI::MouseEventArgs */
static int tolua_set_CEGUI__MouseEventArgs_unsigned_sysKeys(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sysKeys'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sysKeys = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: wheelChange of class  CEGUI::MouseEventArgs */
static int tolua_get_CEGUI__MouseEventArgs_wheelChange(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wheelChange'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->wheelChange);
 return 1;
}

/* set function: wheelChange of class  CEGUI::MouseEventArgs */
static int tolua_set_CEGUI__MouseEventArgs_wheelChange(lua_State* tolua_S)
{
  CEGUI::MouseEventArgs* self = (CEGUI::MouseEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wheelChange'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wheelChange = ((float)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: new of class  CEGUI::MouseEventArgs */
static int tolua_CEGUI_CEGUI_MouseEventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MouseEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::MouseEventArgs* tolua_ret = (CEGUI::MouseEventArgs*)  new CEGUI::MouseEventArgs(wnd);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::MouseEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::MouseEventArgs */
static int tolua_CEGUI_CEGUI_MouseEventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MouseEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::MouseEventArgs* tolua_ret = (CEGUI::MouseEventArgs*)  new CEGUI::MouseEventArgs(wnd);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::MouseEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* get function: codepoint of class  CEGUI::KeyEventArgs */
static int tolua_get_CEGUI__KeyEventArgs_unsigned_codepoint(lua_State* tolua_S)
{
  CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'codepoint'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->codepoint);
 return 1;
}

/* set function: codepoint of class  CEGUI::KeyEventArgs */
static int tolua_set_CEGUI__KeyEventArgs_unsigned_codepoint(lua_State* tolua_S)
{
  CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'codepoint'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->codepoint = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: scancode of class  CEGUI::KeyEventArgs */
static int tolua_get_CEGUI__KeyEventArgs_scancode(lua_State* tolua_S)
{
  CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scancode'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->scancode);
 return 1;
}

/* set function: scancode of class  CEGUI::KeyEventArgs */
static int tolua_set_CEGUI__KeyEventArgs_scancode(lua_State* tolua_S)
{
  CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scancode'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scancode = ((CEGUI::Key::Scan) (int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: sysKeys of class  CEGUI::KeyEventArgs */
static int tolua_get_CEGUI__KeyEventArgs_unsigned_sysKeys(lua_State* tolua_S)
{
  CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sysKeys'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->sysKeys);
 return 1;
}

/* set function: sysKeys of class  CEGUI::KeyEventArgs */
static int tolua_set_CEGUI__KeyEventArgs_unsigned_sysKeys(lua_State* tolua_S)
{
  CEGUI::KeyEventArgs* self = (CEGUI::KeyEventArgs*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sysKeys'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sysKeys = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: new of class  CEGUI::KeyEventArgs */
static int tolua_CEGUI_CEGUI_KeyEventArgs_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::KeyEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::KeyEventArgs* tolua_ret = (CEGUI::KeyEventArgs*)  new CEGUI::KeyEventArgs(wnd);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::KeyEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::KeyEventArgs */
static int tolua_CEGUI_CEGUI_KeyEventArgs_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::KeyEventArgs",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
 {
  CEGUI::KeyEventArgs* tolua_ret = (CEGUI::KeyEventArgs*)  new CEGUI::KeyEventArgs(wnd);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::KeyEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: addEvent of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_addEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEvent'",NULL);
#endif
 {
  self->addEvent(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: removeEvent of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_removeEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeEvent'",NULL);
#endif
 {
  self->removeEvent(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: removeAllEvents of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_removeAllEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllEvents'",NULL);
#endif
 {
  self->removeAllEvents();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllEvents'.",&tolua_err);
 return 0;
#endif
}

/* method: isEventPresent of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_isEventPresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEventPresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isEventPresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEventPresent'.",&tolua_err);
 return 0;
#endif
}

/* method: subscribeScriptedEvent of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_subscribeEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  string callback_name = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'subscribeScriptedEvent'",NULL);
#endif
 {
  self->subscribeScriptedEvent(name,callback_name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'subscribeEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: fireEvent of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_fireEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  CEGUI::EventArgs* args = ((CEGUI::EventArgs*)  tolua_tousertype(tolua_S,3,0));
  string eventnamespace = ((string)  tolua_tocppstring(tolua_S,4,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fireEvent'",NULL);
#endif
 {
  self->fireEvent(name,*args,eventnamespace);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fireEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: isMuted of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_isMuted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::EventSet",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::EventSet* self = (const CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMuted'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isMuted();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMuted'.",&tolua_err);
 return 0;
#endif
}

/* method: setMutedState of class  CEGUI::EventSet */
static int tolua_CEGUI_CEGUI_EventSet_setMutedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::EventSet",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::EventSet* self = (CEGUI::EventSet*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMutedState'",NULL);
#endif
 {
  self->setMutedState(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMutedState'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::GlobalEventSet */
static int tolua_CEGUI_CEGUI_GlobalEventSet_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::GlobalEventSet",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::GlobalEventSet& tolua_ret = (CEGUI::GlobalEventSet&)  CEGUI::GlobalEventSet::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::GlobalEventSet");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::MouseCursor& tolua_ret = (CEGUI::MouseCursor&)  CEGUI::MouseCursor::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::MouseCursor");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: setImage of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_setImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* image = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImage'",NULL);
#endif
 {
  self->setImage(image);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setImage of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_setImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
  string imageset = ((string)  tolua_tocppstring(tolua_S,2,0));
  string image = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImage'",NULL);
#endif
 {
  self->setImage(imageset,image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_MouseCursor_setImage00(tolua_S);
}

/* method: getImage of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_getImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MouseCursor* self = (const CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImage'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getImage();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setPosition of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* pos = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'",NULL);
#endif
 {
  self->setPosition(*pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: offsetPosition of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_offsetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* offset = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'offsetPosition'",NULL);
#endif
 {
  self->offsetPosition(*offset);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'offsetPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setConstraintArea of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_setConstraintArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* area = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setConstraintArea'",NULL);
#endif
 {
  self->setConstraintArea(area);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setConstraintArea'.",&tolua_err);
 return 0;
#endif
}

/* method: getPosition of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MouseCursor* self = (const CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getPosition();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getConstraintArea of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_getConstraintArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MouseCursor* self = (const CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getConstraintArea'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getConstraintArea();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getConstraintArea'.",&tolua_err);
 return 0;
#endif
}

/* method: getDisplayIndependantPosition of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_getDisplayIndependantPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MouseCursor* self = (const CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayIndependantPosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getDisplayIndependantPosition();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayIndependantPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: hide of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_hide00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hide'",NULL);
#endif
 {
  self->hide();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hide'.",&tolua_err);
 return 0;
#endif
}

/* method: show of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MouseCursor* self = (CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'show'",NULL);
#endif
 {
  self->show();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'show'.",&tolua_err);
 return 0;
#endif
}

/* method: isVisible of class  CEGUI::MouseCursor */
static int tolua_CEGUI_CEGUI_MouseCursor_isVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MouseCursor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MouseCursor* self = (const CEGUI::MouseCursor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisible'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVisible();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisible'.",&tolua_err);
 return 0;
#endif
}

/* method: getType of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getType();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
 return 0;
#endif
}

/* method: getName of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getName();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}

/* method: isDestroyedByParent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isDestroyedByParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDestroyedByParent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDestroyedByParent();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDestroyedByParent'.",&tolua_err);
 return 0;
#endif
}

/* method: isAlwaysOnTop of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isAlwaysOnTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAlwaysOnTop'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAlwaysOnTop();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAlwaysOnTop'.",&tolua_err);
 return 0;
#endif
}

/* method: isDisabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDisabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDisabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDisabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isVisible of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisible'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVisible();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisible'.",&tolua_err);
 return 0;
#endif
}

/* method: isActive of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isActive'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isActive();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isActive'.",&tolua_err);
 return 0;
#endif
}

/* method: isClippedByParent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isClippedByParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClippedByParent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isClippedByParent();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClippedByParent'.",&tolua_err);
 return 0;
#endif
}

/* method: setDestroyedByParent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setDestroyedByParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDestroyedByParent'",NULL);
#endif
 {
  self->setDestroyedByParent(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDestroyedByParent'.",&tolua_err);
 return 0;
#endif
}

/* method: setAlwaysOnTop of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setAlwaysOnTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlwaysOnTop'",NULL);
#endif
 {
  self->setAlwaysOnTop(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlwaysOnTop'.",&tolua_err);
 return 0;
#endif
}

/* method: setEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'",NULL);
#endif
 {
  self->setEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: enable of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'enable'",NULL);
#endif
 {
  self->enable();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'enable'.",&tolua_err);
 return 0;
#endif
}

/* method: disable of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_disable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disable'",NULL);
#endif
 {
  self->disable();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disable'.",&tolua_err);
 return 0;
#endif
}

/* method: setVisible of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'",NULL);
#endif
 {
  self->setVisible(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}

/* method: show of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'show'",NULL);
#endif
 {
  self->show();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'show'.",&tolua_err);
 return 0;
#endif
}

/* method: hide of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_hide00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hide'",NULL);
#endif
 {
  self->hide();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hide'.",&tolua_err);
 return 0;
#endif
}

/* method: activate of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_activate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'activate'",NULL);
#endif
 {
  self->activate();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'activate'.",&tolua_err);
 return 0;
#endif
}

/* method: deactivate of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_deactivate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'deactivate'",NULL);
#endif
 {
  self->deactivate();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'deactivate'.",&tolua_err);
 return 0;
#endif
}

/* method: setClippedByParent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setClippedByParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippedByParent'",NULL);
#endif
 {
  self->setClippedByParent(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippedByParent'.",&tolua_err);
 return 0;
#endif
}

/* method: getID of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getID'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getID();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getID'.",&tolua_err);
 return 0;
#endif
}

/* method: setID of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setID'",NULL);
#endif
 {
  self->setID(ID);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setID'.",&tolua_err);
 return 0;
#endif
}

/* method: getChildCount of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getChildCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getChildCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildCount'.",&tolua_err);
 return 0;
#endif
}

/* method: isChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isChild'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isChild(ID);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isChild'.",&tolua_err);
 return 0;
#endif
}

/* method: isChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isChild'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isChild(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_isChild00(tolua_S);
}

/* method: isChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Window* window = ((const CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isChild'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isChild(window);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_isChild01(tolua_S);
}

/* method: addChildWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_addChildWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChildWindow'",NULL);
#endif
 {
  self->addChildWindow(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChildWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: addChildWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_addChildWindow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* window = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChildWindow'",NULL);
#endif
 {
  self->addChildWindow(window);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_addChildWindow00(tolua_S);
}

/* method: removeChildWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_removeChildWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildWindow'",NULL);
#endif
 {
  self->removeChildWindow(ID);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChildWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: removeChildWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_removeChildWindow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildWindow'",NULL);
#endif
 {
  self->removeChildWindow(name);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_removeChildWindow00(tolua_S);
}

/* method: removeChildWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_removeChildWindow02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* window = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildWindow'",NULL);
#endif
 {
  self->removeChildWindow(window);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_removeChildWindow01(tolua_S);
}

/* method: getChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChild'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getChild(ID);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChild'.",&tolua_err);
 return 0;
#endif
}

/* method: getChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChild'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getChild(name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getChild00(tolua_S);
}

/* method: getChildAtIdx of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getChildAtIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildAtIdx'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getChildAtIdx(ID);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildAtIdx'.",&tolua_err);
 return 0;
#endif
}

/* method: getActiveChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getActiveChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActiveChild'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getActiveChild();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActiveChild'.",&tolua_err);
 return 0;
#endif
}

/* method: getChildAtPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getChildAtPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* pos = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildAtPosition'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getChildAtPosition(*pos);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildAtPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getParent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParent'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getParent();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParent'.",&tolua_err);
 return 0;
#endif
}

/* method: isAncestor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isAncestor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAncestor'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAncestor(ID);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAncestor'.",&tolua_err);
 return 0;
#endif
}

/* method: isAncestor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isAncestor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAncestor'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAncestor(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_isAncestor00(tolua_S);
}

/* method: isAncestor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isAncestor02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Window* window = ((const CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAncestor'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAncestor(window);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_isAncestor01(tolua_S);
}

/* method: setFont of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'",NULL);
#endif
 {
  self->setFont(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFont'.",&tolua_err);
 return 0;
#endif
}

/* method: setFont of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setFont01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Font* font = ((const CEGUI::Font*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'",NULL);
#endif
 {
  self->setFont(font);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setFont00(tolua_S);
}

/* method: getFont of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFont'",NULL);
#endif
 {
  CEGUI::Font* tolua_ret = (CEGUI::Font*)  self->getFont();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Font");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFont'.",&tolua_err);
 return 0;
#endif
}

/* method: setText of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'",NULL);
#endif
 {
  self->setText(text);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}

/* method: getText of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getText();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}

/* method: inheritsAlpha of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_inheritsAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'inheritsAlpha'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->inheritsAlpha();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inheritsAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: getAlpha of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAlpha();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: getEffectiveAlpha of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getEffectiveAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEffectiveAlpha'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getEffectiveAlpha();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEffectiveAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: setAlpha of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'",NULL);
#endif
 {
  self->setAlpha(a);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: setInheritsAlpha of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setInheritsAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInheritsAlpha'",NULL);
#endif
 {
  self->setInheritsAlpha(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInheritsAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: requestRedraw of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_requestRedraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'requestRedraw'",NULL);
#endif
 {
  self->requestRedraw();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'requestRedraw'.",&tolua_err);
 return 0;
#endif
}

/* method: isZOrderingEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isZOrderingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isZOrderingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isZOrderingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isZOrderingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setZOrderingEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setZOrderingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZOrderingEnabled'",NULL);
#endif
 {
  self->setZOrderingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZOrderingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getPixelRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getPixelRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getPixelRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getInnerRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getInnerRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getInnerRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getUnclippedPixelRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getUnclippedPixelRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUnclippedPixelRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getUnclippedPixelRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUnclippedPixelRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getUnclippedInnerRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getUnclippedInnerRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUnclippedInnerRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getUnclippedInnerRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUnclippedInnerRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getCaptureWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getCaptureWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  CEGUI::Window::getCaptureWindow();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCaptureWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: setRestoreCapture of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setRestoreCapture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRestoreCapture'",NULL);
#endif
 {
  self->setRestoreCapture(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRestoreCapture'.",&tolua_err);
 return 0;
#endif
}

/* method: restoresOldCapture of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_restoresOldCapture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'restoresOldCapture'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->restoresOldCapture();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoresOldCapture'.",&tolua_err);
 return 0;
#endif
}

/* method: distributesCapturedInputs of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_distributesCapturedInputs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'distributesCapturedInputs'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->distributesCapturedInputs();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distributesCapturedInputs'.",&tolua_err);
 return 0;
#endif
}

/* method: setDistributesCapturedInputs of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setDistributesCapturedInputs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDistributesCapturedInputs'",NULL);
#endif
 {
  self->setDistributesCapturedInputs(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDistributesCapturedInputs'.",&tolua_err);
 return 0;
#endif
}

/* method: captureInput of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_captureInput00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'captureInput'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->captureInput();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'captureInput'.",&tolua_err);
 return 0;
#endif
}

/* method: releaseInput of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_releaseInput00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseInput'",NULL);
#endif
 {
  self->releaseInput();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'releaseInput'.",&tolua_err);
 return 0;
#endif
}

/* method: isCapturedByThis of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isCapturedByThis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCapturedByThis'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isCapturedByThis();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCapturedByThis'.",&tolua_err);
 return 0;
#endif
}

/* method: isCapturedByAncestor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isCapturedByAncestor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCapturedByAncestor'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isCapturedByAncestor();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCapturedByAncestor'.",&tolua_err);
 return 0;
#endif
}

/* method: isCapturedByChild of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isCapturedByChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCapturedByChild'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isCapturedByChild();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCapturedByChild'.",&tolua_err);
 return 0;
#endif
}

/* method: isHit of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isHit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* pos = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHit'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHit(*pos);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHit'.",&tolua_err);
 return 0;
#endif
}

/* method: isRiseOnClickEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isRiseOnClickEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRiseOnClickEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isRiseOnClickEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRiseOnClickEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setRiseOnClickEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setRiseOnClickEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRiseOnClickEnabled'",NULL);
#endif
 {
  self->setRiseOnClickEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRiseOnClickEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getMetricsMode of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getMetricsMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMetricsMode'",NULL);
#endif
 {
  CEGUI::MetricsMode tolua_ret = (CEGUI::MetricsMode)  self->getMetricsMode();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMetricsMode'.",&tolua_err);
 return 0;
#endif
}

/* method: setMetricsMode of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMetricsMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMetricsMode'",NULL);
#endif
 {
  self->setMetricsMode(mode);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMetricsMode'.",&tolua_err);
 return 0;
#endif
}

/* method: getMouseCursor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getMouseCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMouseCursor'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getMouseCursor();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMouseCursor'.",&tolua_err);
 return 0;
#endif
}

/* method: setMouseCursor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMouseCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MouseCursorImage cursor = ((CEGUI::MouseCursorImage) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMouseCursor'",NULL);
#endif
 {
  self->setMouseCursor(cursor);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMouseCursor'.",&tolua_err);
 return 0;
#endif
}

/* method: setMouseCursor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMouseCursor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* image = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMouseCursor'",NULL);
#endif
 {
  self->setMouseCursor(image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setMouseCursor00(tolua_S);
}

/* method: setMouseCursor of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMouseCursor02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string imageset = ((string)  tolua_tocppstring(tolua_S,2,0));
  string image = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMouseCursor'",NULL);
#endif
 {
  self->setMouseCursor(imageset,image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setMouseCursor01(tolua_S);
}

/* method: getRelativeRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativeRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getRelativeRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativePosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativePosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getRelativePosition();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativePosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeXPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativeXPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeXPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRelativeXPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeXPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeYPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativeYPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeYPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRelativeYPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeYPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativeSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getRelativeSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeWidth of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativeWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRelativeWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeHeight of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRelativeHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRelativeHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsoluteRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getAbsoluteRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsolutePosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsolutePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsolutePosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getAbsolutePosition();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsolutePosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteXPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsoluteXPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteXPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAbsoluteXPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteXPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteYPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsoluteYPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteYPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAbsoluteYPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteYPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsoluteSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getAbsoluteSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteWidth of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsoluteWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAbsoluteWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteHeight of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAbsoluteHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAbsoluteHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: setPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  const CEGUI::Point* pos = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'",NULL);
#endif
 {
  self->setPosition(mode,*pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setXPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setXPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  float x = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXPosition'",NULL);
#endif
 {
  self->setXPosition(mode,x);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setXPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setYPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setYPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYPosition'",NULL);
#endif
 {
  self->setYPosition(mode,y);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setYPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setWidth of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  float w = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidth'",NULL);
#endif
 {
  self->setWidth(mode,w);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: setHeight of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHeight'",NULL);
#endif
 {
  self->setHeight(mode,h);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: setSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSize'",NULL);
#endif
 {
  self->setSize(mode,*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
  const CEGUI::Rect* r = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRect'",NULL);
#endif
 {
  self->setRect(mode,*r);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getPosition(mode);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getXPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getXPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getXPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getXPosition(mode);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getXPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getYPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getYPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getYPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getYPosition(mode);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getYPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getWidth of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getWidth(mode);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getHeight of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHeight(mode);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getSize(mode);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getRect01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MetricsMode mode = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getRect(mode);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getRect00(tolua_S);
}

/* method: setMinimumSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMinimumSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimumSize'",NULL);
#endif
 {
  self->setMinimumSize(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinimumSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaximumSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMaximumSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximumSize'",NULL);
#endif
 {
  self->setMaximumSize(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaximumSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setSize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSize'",NULL);
#endif
 {
  self->setSize(*sz);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setSize00(tolua_S);
}

/* method: setWidth of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setWidth01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidth'",NULL);
#endif
 {
  self->setWidth(w);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setWidth00(tolua_S);
}

/* method: setHeight of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setHeight01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float h = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHeight'",NULL);
#endif
 {
  self->setHeight(h);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setHeight00(tolua_S);
}

/* method: getWidth of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getWidth01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getWidth00(tolua_S);
}

/* method: getHeight of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getHeight01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getHeight00(tolua_S);
}

/* method: getSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getSize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getSize00(tolua_S);
}

/* method: getMinimumSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getMinimumSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinimumSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getMinimumSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinimumSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaximumSize of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getMaximumSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaximumSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getMaximumSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaximumSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* pos = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'",NULL);
#endif
 {
  self->setPosition(*pos);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setPosition00(tolua_S);
}

/* method: setXPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setXPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXPosition'",NULL);
#endif
 {
  self->setXPosition(x);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setXPosition00(tolua_S);
}

/* method: setYPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setYPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYPosition'",NULL);
#endif
 {
  self->setYPosition(y);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_setYPosition00(tolua_S);
}

/* method: getXPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getXPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getXPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getXPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getXPosition00(tolua_S);
}

/* method: getYPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getYPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getYPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getYPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getYPosition00(tolua_S);
}

/* method: getPosition of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->getPosition();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_getPosition00(tolua_S);
}

/* method: setAreaRect of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setAreaRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* rect = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAreaRect'",NULL);
#endif
 {
  self->setAreaRect(*rect);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAreaRect'.",&tolua_err);
 return 0;
#endif
}

/* method: absoluteToRelativeX of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_absoluteToRelativeX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'absoluteToRelativeX'",NULL);
#endif
 {
  float tolua_ret = (float)  self->absoluteToRelativeX(x);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'absoluteToRelativeX'.",&tolua_err);
 return 0;
#endif
}

/* method: absoluteToRelativeY of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_absoluteToRelativeY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'absoluteToRelativeY'",NULL);
#endif
 {
  float tolua_ret = (float)  self->absoluteToRelativeY(y);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'absoluteToRelativeY'.",&tolua_err);
 return 0;
#endif
}

/* method: absoluteToRelative of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_absoluteToRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'absoluteToRelative'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->absoluteToRelative(*p);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'absoluteToRelative'.",&tolua_err);
 return 0;
#endif
}

/* method: absoluteToRelative of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_absoluteToRelative01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'absoluteToRelative'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->absoluteToRelative(*sz);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_absoluteToRelative00(tolua_S);
}

/* method: absoluteToRelative of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_absoluteToRelative02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* r = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'absoluteToRelative'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->absoluteToRelative(*r);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_absoluteToRelative01(tolua_S);
}

/* method: relativeToAbsoluteX of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_relativeToAbsoluteX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relativeToAbsoluteX'",NULL);
#endif
 {
  float tolua_ret = (float)  self->relativeToAbsoluteX(x);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'relativeToAbsoluteX'.",&tolua_err);
 return 0;
#endif
}

/* method: relativeToAbsoluteY of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_relativeToAbsoluteY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relativeToAbsoluteY'",NULL);
#endif
 {
  float tolua_ret = (float)  self->relativeToAbsoluteY(y);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'relativeToAbsoluteY'.",&tolua_err);
 return 0;
#endif
}

/* method: relativeToAbsolute of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_relativeToAbsolute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relativeToAbsolute'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->relativeToAbsolute(*p);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'relativeToAbsolute'.",&tolua_err);
 return 0;
#endif
}

/* method: relativeToAbsolute of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_relativeToAbsolute01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relativeToAbsolute'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->relativeToAbsolute(*sz);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_relativeToAbsolute00(tolua_S);
}

/* method: relativeToAbsolute of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_relativeToAbsolute02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* r = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relativeToAbsolute'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->relativeToAbsolute(*r);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_relativeToAbsolute01(tolua_S);
}

/* method: windowToScreenX of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_windowToScreenX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'windowToScreenX'",NULL);
#endif
 {
  float tolua_ret = (float)  self->windowToScreenX(x);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'windowToScreenX'.",&tolua_err);
 return 0;
#endif
}

/* method: windowToScreenY of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_windowToScreenY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'windowToScreenY'",NULL);
#endif
 {
  float tolua_ret = (float)  self->windowToScreenY(y);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'windowToScreenY'.",&tolua_err);
 return 0;
#endif
}

/* method: windowToScreen of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_windowToScreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'windowToScreen'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->windowToScreen(*p);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'windowToScreen'.",&tolua_err);
 return 0;
#endif
}

/* method: windowToScreen of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_windowToScreen01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'windowToScreen'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->windowToScreen(*sz);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_windowToScreen00(tolua_S);
}

/* method: windowToScreen of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_windowToScreen02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* r = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'windowToScreen'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->windowToScreen(*r);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_windowToScreen01(tolua_S);
}

/* method: screenToWindowX of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_screenToWindowX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenToWindowX'",NULL);
#endif
 {
  float tolua_ret = (float)  self->screenToWindowX(x);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'screenToWindowX'.",&tolua_err);
 return 0;
#endif
}

/* method: screenToWindowY of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_screenToWindowY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenToWindowY'",NULL);
#endif
 {
  float tolua_ret = (float)  self->screenToWindowY(y);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'screenToWindowY'.",&tolua_err);
 return 0;
#endif
}

/* method: screenToWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_screenToWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Point* p = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenToWindow'",NULL);
#endif
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  self->screenToWindow(*p);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'screenToWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: screenToWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_screenToWindow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenToWindow'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->screenToWindow(*sz);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_screenToWindow00(tolua_S);
}

/* method: screenToWindow of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_screenToWindow02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* r = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenToWindow'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->screenToWindow(*r);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Window_screenToWindow01(tolua_S);
}

/* method: moveToFront of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_moveToFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveToFront'",NULL);
#endif
 {
  self->moveToFront();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveToFront'.",&tolua_err);
 return 0;
#endif
}

/* method: moveToBack of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_moveToBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveToBack'",NULL);
#endif
 {
  self->moveToBack();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveToBack'.",&tolua_err);
 return 0;
#endif
}

/* method: wantsMultiClickEvents of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_wantsMultiClickEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'wantsMultiClickEvents'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->wantsMultiClickEvents();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'wantsMultiClickEvents'.",&tolua_err);
 return 0;
#endif
}

/* method: isMouseAutoRepeatEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isMouseAutoRepeatEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMouseAutoRepeatEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isMouseAutoRepeatEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMouseAutoRepeatEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getAutoRepeatDelay of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAutoRepeatDelay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoRepeatDelay'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAutoRepeatDelay();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoRepeatDelay'.",&tolua_err);
 return 0;
#endif
}

/* method: getAutoRepeatRate of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getAutoRepeatRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoRepeatRate'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAutoRepeatRate();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoRepeatRate'.",&tolua_err);
 return 0;
#endif
}

/* method: setWantsMultiClickEvents of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setWantsMultiClickEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWantsMultiClickEvents'",NULL);
#endif
 {
  self->setWantsMultiClickEvents(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWantsMultiClickEvents'.",&tolua_err);
 return 0;
#endif
}

/* method: setMouseAutoRepeatEnabled of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMouseAutoRepeatEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMouseAutoRepeatEnabled'",NULL);
#endif
 {
  self->setMouseAutoRepeatEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMouseAutoRepeatEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setAutoRepeatDelay of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setAutoRepeatDelay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float delay = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRepeatDelay'",NULL);
#endif
 {
  self->setAutoRepeatDelay(delay);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRepeatDelay'.",&tolua_err);
 return 0;
#endif
}

/* method: setAutoRepeatRate of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setAutoRepeatRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  float rate = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRepeatRate'",NULL);
#endif
 {
  self->setAutoRepeatRate(rate);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRepeatRate'.",&tolua_err);
 return 0;
#endif
}

/* method: isUsingDefaultTooltip of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isUsingDefaultTooltip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUsingDefaultTooltip'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isUsingDefaultTooltip();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUsingDefaultTooltip'.",&tolua_err);
 return 0;
#endif
}

/* method: getTooltip of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getTooltip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTooltip'",NULL);
#endif
 {
  CEGUI::Tooltip* tolua_ret = (CEGUI::Tooltip*)  self->getTooltip();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Tooltip");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTooltip'.",&tolua_err);
 return 0;
#endif
}

/* method: getTooltipType of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getTooltipType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTooltipType'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getTooltipType();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTooltipType'.",&tolua_err);
 return 0;
#endif
}

/* method: getTooltipText of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getTooltipText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTooltipText'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getTooltipText();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTooltipText'.",&tolua_err);
 return 0;
#endif
}

/* method: inheritsTooltipText of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_inheritsTooltipText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'inheritsTooltipText'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->inheritsTooltipText();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inheritsTooltipText'.",&tolua_err);
 return 0;
#endif
}

/* method: setTooltip of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setTooltip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Tooltip* tooltip = ((CEGUI::Tooltip*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTooltip'",NULL);
#endif
 {
  self->setTooltip(tooltip);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTooltip'.",&tolua_err);
 return 0;
#endif
}

/* method: setTooltipType of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setTooltipType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string tooltipType = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTooltipType'",NULL);
#endif
 {
  self->setTooltipType(tooltipType);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTooltipType'.",&tolua_err);
 return 0;
#endif
}

/* method: setTooltipText of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setTooltipText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string tip = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTooltipText'",NULL);
#endif
 {
  self->setTooltipText(tip);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTooltipText'.",&tolua_err);
 return 0;
#endif
}

/* method: setInheritsTooltipText of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setInheritsTooltipText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInheritsTooltipText'",NULL);
#endif
 {
  self->setInheritsTooltipText(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInheritsTooltipText'.",&tolua_err);
 return 0;
#endif
}

/* method: testClassName of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_testClassName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string class_name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'testClassName'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->testClassName(class_name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'testClassName'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyDragDropItemEnters of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_notifyDragDropItemEnters00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::DragContainer* item = ((CEGUI::DragContainer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyDragDropItemEnters'",NULL);
#endif
 {
  self->notifyDragDropItemEnters(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyDragDropItemEnters'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyDragDropItemLeaves of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_notifyDragDropItemLeaves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::DragContainer* item = ((CEGUI::DragContainer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyDragDropItemLeaves'",NULL);
#endif
 {
  self->notifyDragDropItemLeaves(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyDragDropItemLeaves'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyDragDropItemDropped of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_notifyDragDropItemDropped00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::DragContainer* item = ((CEGUI::DragContainer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyDragDropItemDropped'",NULL);
#endif
 {
  self->notifyDragDropItemDropped(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyDragDropItemDropped'.",&tolua_err);
 return 0;
#endif
}

/* method: setProperty of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  string value = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProperty'",NULL);
#endif
 {
  self->setProperty(name,value);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProperty'.",&tolua_err);
 return 0;
#endif
}

/* method: getProperty of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProperty'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getProperty(name);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProperty'.",&tolua_err);
 return 0;
#endif
}

/* method: getPropertyDefault of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getPropertyDefault00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPropertyDefault'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getPropertyDefault(name);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPropertyDefault'.",&tolua_err);
 return 0;
#endif
}

/* method: getPropertyHelp of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_getPropertyHelp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPropertyHelp'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getPropertyHelp(name);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPropertyHelp'.",&tolua_err);
 return 0;
#endif
}

/* method: isPropertyPresent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isPropertyPresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPropertyPresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isPropertyPresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPropertyPresent'.",&tolua_err);
 return 0;
#endif
}

/* method: isPropertyDefault of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isPropertyDefault00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPropertyDefault'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isPropertyDefault(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPropertyDefault'.",&tolua_err);
 return 0;
#endif
}

/* method: addEvent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_addEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEvent'",NULL);
#endif
 {
  self->addEvent(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: removeEvent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_removeEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeEvent'",NULL);
#endif
 {
  self->removeEvent(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: removeAllEvents of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_removeAllEvents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllEvents'",NULL);
#endif
 {
  self->removeAllEvents();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllEvents'.",&tolua_err);
 return 0;
#endif
}

/* method: isEventPresent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isEventPresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEventPresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isEventPresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEventPresent'.",&tolua_err);
 return 0;
#endif
}

/* method: subscribeScriptedEvent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_subscribeEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  string callback_name = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'subscribeScriptedEvent'",NULL);
#endif
 {
  self->subscribeScriptedEvent(name,callback_name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'subscribeEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: fireEvent of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_fireEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
  CEGUI::EventArgs* args = ((CEGUI::EventArgs*)  tolua_tousertype(tolua_S,3,0));
  string eventnamespace = ((string)  tolua_tocppstring(tolua_S,4,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fireEvent'",NULL);
#endif
 {
  self->fireEvent(name,*args,eventnamespace);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fireEvent'.",&tolua_err);
 return 0;
#endif
}

/* method: isMuted of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_isMuted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Window* self = (const CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMuted'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isMuted();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMuted'.",&tolua_err);
 return 0;
#endif
}

/* method: setMutedState of class  CEGUI::Window */
static int tolua_CEGUI_CEGUI_Window_setMutedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* self = (CEGUI::Window*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMutedState'",NULL);
#endif
 {
  self->setMutedState(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMutedState'.",&tolua_err);
 return 0;
#endif
}

/* method: getCurrentZ of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getCurrentZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentZ'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getCurrentZ();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentZ'.",&tolua_err);
 return 0;
#endif
}

/* method: getZLayer of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getZLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
  unsigned int layer = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZLayer'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getZLayer(layer);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZLayer'.",&tolua_err);
 return 0;
#endif
}

/* method: isQueueingEnabled of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_isQueueingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isQueueingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isQueueingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isQueueingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: createTexture of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_createTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Renderer* self = (CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createTexture'",NULL);
#endif
 {
  CEGUI::Texture* tolua_ret = (CEGUI::Texture*)  self->createTexture();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Texture");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createTexture'.",&tolua_err);
 return 0;
#endif
}

/* method: createTexture of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_createTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Renderer* self = (CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
  float size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createTexture'",NULL);
#endif
 {
  CEGUI::Texture* tolua_ret = (CEGUI::Texture*)  self->createTexture(size);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Texture");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Renderer_createTexture00(tolua_S);
}

/* method: createTexture of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_createTexture02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Renderer",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Renderer* self = (CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createTexture'",NULL);
#endif
 {
  CEGUI::Texture* tolua_ret = (CEGUI::Texture*)  self->createTexture(filename,resourcegroup);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Texture");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Renderer_createTexture01(tolua_S);
}

/* method: destroyTexture of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_destroyTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Texture",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Renderer* self = (CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Texture* tex = ((CEGUI::Texture*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyTexture'",NULL);
#endif
 {
  self->destroyTexture(tex);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyTexture'.",&tolua_err);
 return 0;
#endif
}

/* method: destroyAllTextures of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_destroyAllTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Renderer* self = (CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllTextures'",NULL);
#endif
 {
  self->destroyAllTextures();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllTextures'.",&tolua_err);
 return 0;
#endif
}

/* method: getWidth of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getHeight of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getSize of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getRect of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRect'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getRect();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRect'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaxTextureSize of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getMaxTextureSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxTextureSize'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getMaxTextureSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxTextureSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getHorzScreenDPI of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getHorzScreenDPI00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorzScreenDPI'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getHorzScreenDPI();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorzScreenDPI'.",&tolua_err);
 return 0;
#endif
}

/* method: getVertScreenDPI of class  CEGUI::Renderer */
static int tolua_CEGUI_CEGUI_Renderer_getVertScreenDPI00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Renderer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Renderer* self = (const CEGUI::Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVertScreenDPI'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getVertScreenDPI();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVertScreenDPI'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::System& tolua_ret = (CEGUI::System&)  CEGUI::System::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::System");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: getRenderer of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRenderer'",NULL);
#endif
 {
  CEGUI::Renderer* tolua_ret = (CEGUI::Renderer*)  self->getRenderer();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Renderer");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRenderer'.",&tolua_err);
 return 0;
#endif
}

/* method: setDefaultFont of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setDefaultFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultFont'",NULL);
#endif
 {
  self->setDefaultFont(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultFont'.",&tolua_err);
 return 0;
#endif
}

/* method: setDefaultFont of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setDefaultFont01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Font* font = ((CEGUI::Font*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultFont'",NULL);
#endif
 {
  self->setDefaultFont(font);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_System_setDefaultFont00(tolua_S);
}

/* method: signalRedraw of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_signalRedraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'signalRedraw'",NULL);
#endif
 {
  self->signalRedraw();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'signalRedraw'.",&tolua_err);
 return 0;
#endif
}

/* method: isRedrawRequested of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_isRedrawRequested00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRedrawRequested'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isRedrawRequested();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRedrawRequested'.",&tolua_err);
 return 0;
#endif
}

/* method: setGUISheet of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setGUISheet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* sheet = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGUISheet'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->setGUISheet(sheet);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGUISheet'.",&tolua_err);
 return 0;
#endif
}

/* method: getGUISheet of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getGUISheet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGUISheet'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getGUISheet();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGUISheet'.",&tolua_err);
 return 0;
#endif
}

/* method: setSingleClickTimeout of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setSingleClickTimeout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  double timeout = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSingleClickTimeout'",NULL);
#endif
 {
  self->setSingleClickTimeout(timeout);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSingleClickTimeout'.",&tolua_err);
 return 0;
#endif
}

/* method: setMultiClickTimeout of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setMultiClickTimeout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  double timeout = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMultiClickTimeout'",NULL);
#endif
 {
  self->setMultiClickTimeout(timeout);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMultiClickTimeout'.",&tolua_err);
 return 0;
#endif
}

/* method: setMultiClickToleranceAreaSize of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setMultiClickToleranceAreaSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Size* sz = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMultiClickToleranceAreaSize'",NULL);
#endif
 {
  self->setMultiClickToleranceAreaSize(*sz);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMultiClickToleranceAreaSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleClickTimeout of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getSingleClickTimeout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSingleClickTimeout'",NULL);
#endif
 {
  double tolua_ret = (double)  self->getSingleClickTimeout();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleClickTimeout'.",&tolua_err);
 return 0;
#endif
}

/* method: getMultiClickTimeout of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getMultiClickTimeout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMultiClickTimeout'",NULL);
#endif
 {
  double tolua_ret = (double)  self->getMultiClickTimeout();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMultiClickTimeout'.",&tolua_err);
 return 0;
#endif
}

/* method: getMultiClickToleranceAreaSize of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getMultiClickToleranceAreaSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMultiClickToleranceAreaSize'",NULL);
#endif
 {
  const CEGUI::Size& tolua_ret = (const CEGUI::Size&)  self->getMultiClickToleranceAreaSize();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::Size");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMultiClickToleranceAreaSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setDefaultMouseCursor of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setDefaultMouseCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MouseCursorImage image = ((CEGUI::MouseCursorImage) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultMouseCursor'",NULL);
#endif
 {
  self->setDefaultMouseCursor(image);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultMouseCursor'.",&tolua_err);
 return 0;
#endif
}

/* method: setDefaultMouseCursor of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setDefaultMouseCursor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* image = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultMouseCursor'",NULL);
#endif
 {
  self->setDefaultMouseCursor(image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_System_setDefaultMouseCursor00(tolua_S);
}

/* method: setDefaultMouseCursor of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setDefaultMouseCursor02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  string imageset_name = ((string)  tolua_tocppstring(tolua_S,2,0));
  string image_name = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultMouseCursor'",NULL);
#endif
 {
  self->setDefaultMouseCursor(imageset_name,image_name);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_System_setDefaultMouseCursor01(tolua_S);
}

/* method: getDefaultMouseCursor of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getDefaultMouseCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDefaultMouseCursor'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getDefaultMouseCursor();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDefaultMouseCursor'.",&tolua_err);
 return 0;
#endif
}

/* method: getWindowContainingMouse of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getWindowContainingMouse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWindowContainingMouse'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getWindowContainingMouse();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowContainingMouse'.",&tolua_err);
 return 0;
#endif
}

/* method: executeScriptFile of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_executeScriptFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'executeScriptFile'",NULL);
#endif
 {
  self->executeScriptFile(filename);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'executeScriptFile'.",&tolua_err);
 return 0;
#endif
}

/* method: executeScriptGlobal of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_executeScriptGlobal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  string global_name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'executeScriptGlobal'",NULL);
#endif
 {
  int tolua_ret = (int)  self->executeScriptGlobal(global_name);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'executeScriptGlobal'.",&tolua_err);
 return 0;
#endif
}

/* method: executeScriptString of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_executeScriptString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  string lua_string = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'executeScriptString'",NULL);
#endif
 {
  self->executeScriptString(lua_string);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'executeScriptString'.",&tolua_err);
 return 0;
#endif
}

/* method: getMouseMoveScaling of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_getMouseMoveScaling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::System* self = (const CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMouseMoveScaling'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getMouseMoveScaling();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMouseMoveScaling'.",&tolua_err);
 return 0;
#endif
}

/* method: setMouseMoveScaling of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_setMouseMoveScaling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  float scaling = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMouseMoveScaling'",NULL);
#endif
 {
  self->setMouseMoveScaling(scaling);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMouseMoveScaling'.",&tolua_err);
 return 0;
#endif
}

/* method: notifyWindowDestroyed of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_notifyWindowDestroyed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Window* window = ((const CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notifyWindowDestroyed'",NULL);
#endif
 {
  self->notifyWindowDestroyed(window);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notifyWindowDestroyed'.",&tolua_err);
 return 0;
#endif
}

/* method: injectMouseMove of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectMouseMove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  float dx = ((float)  tolua_tonumber(tolua_S,2,0));
  float dy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectMouseMove'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectMouseMove(dx,dy);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectMouseMove'.",&tolua_err);
 return 0;
#endif
}

/* method: injectMouseLeaves of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectMouseLeaves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectMouseLeaves'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectMouseLeaves();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectMouseLeaves'.",&tolua_err);
 return 0;
#endif
}

/* method: injectMouseButtonDown of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectMouseButtonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MouseButton btn = ((CEGUI::MouseButton) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectMouseButtonDown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectMouseButtonDown(btn);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectMouseButtonDown'.",&tolua_err);
 return 0;
#endif
}

/* method: injectMouseButtonUp of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectMouseButtonUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MouseButton btn = ((CEGUI::MouseButton) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectMouseButtonUp'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectMouseButtonUp(btn);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectMouseButtonUp'.",&tolua_err);
 return 0;
#endif
}

/* method: injectKeyDown of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectKeyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  unsigned int keycode = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectKeyDown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectKeyDown(keycode);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectKeyDown'.",&tolua_err);
 return 0;
#endif
}

/* method: injectKeyUp of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectKeyUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  unsigned int keycode = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectKeyUp'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectKeyUp(keycode);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectKeyUp'.",&tolua_err);
 return 0;
#endif
}

/* method: injectChar of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  unsigned long code_point = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectChar'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectChar(code_point);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectChar'.",&tolua_err);
 return 0;
#endif
}

/* method: injectMouseWheelChange of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectMouseWheelChange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectMouseWheelChange'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectMouseWheelChange(delta);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectMouseWheelChange'.",&tolua_err);
 return 0;
#endif
}

/* method: injectMousePosition of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectMousePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectMousePosition'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectMousePosition(x,y);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectMousePosition'.",&tolua_err);
 return 0;
#endif
}

/* method: injectTimePulse of class  CEGUI::System */
static int tolua_CEGUI_CEGUI_System_injectTimePulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::System",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::System* self = (CEGUI::System*)  tolua_tousertype(tolua_S,1,0);
  float timeElapsed = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'injectTimePulse'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->injectTimePulse(timeElapsed);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'injectTimePulse'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::WindowManager& tolua_ret = (CEGUI::WindowManager&)  CEGUI::WindowManager::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::WindowManager");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: createWindow of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_createWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::WindowManager* self = (CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
  string type = ((string)  tolua_tocppstring(tolua_S,2,0));
  string name = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createWindow'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->createWindow(type,name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: loadWindowLayout of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_loadWindowLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,1,&tolua_err) ||
 !tolua_iscppstring(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::WindowManager* self = (CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string name_prefix = ((string)  tolua_tocppstring(tolua_S,3,""));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,4,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadWindowLayout'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->loadWindowLayout(filename,name_prefix,resourcegroup);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadWindowLayout'.",&tolua_err);
 return 0;
#endif
}

/* method: destroyWindow of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_destroyWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::WindowManager* self = (CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyWindow'",NULL);
#endif
 {
  self->destroyWindow(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: destroyWindow of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_destroyWindow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::WindowManager* self = (CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* window = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyWindow'",NULL);
#endif
 {
  self->destroyWindow(window);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_WindowManager_destroyWindow00(tolua_S);
}

/* method: destroyAllWindows of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_destroyAllWindows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::WindowManager* self = (CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyAllWindows'",NULL);
#endif
 {
  self->destroyAllWindows();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyAllWindows'.",&tolua_err);
 return 0;
#endif
}

/* method: getWindow of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_getWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::WindowManager* self = (const CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWindow'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getWindow(name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: isWindowPresent of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_isWindowPresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::WindowManager* self = (const CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isWindowPresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isWindowPresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isWindowPresent'.",&tolua_err);
 return 0;
#endif
}

/* method: isDeadPoolEmpty of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_isDeadPoolEmpty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::WindowManager* self = (const CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDeadPoolEmpty'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDeadPoolEmpty();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDeadPoolEmpty'.",&tolua_err);
 return 0;
#endif
}

/* method: cleanDeadPool of class  CEGUI::WindowManager */
static int tolua_CEGUI_CEGUI_WindowManager_cleanDeadPool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::WindowManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::WindowManager* self = (CEGUI::WindowManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanDeadPool'",NULL);
#endif
 {
  self->cleanDeadPool();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanDeadPool'.",&tolua_err);
 return 0;
#endif
}

/* method: loadResources of class  CEGUI::Scheme */
static int tolua_CEGUI_CEGUI_Scheme_loadResources00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scheme",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scheme* self = (CEGUI::Scheme*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadResources'",NULL);
#endif
 {
  self->loadResources();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadResources'.",&tolua_err);
 return 0;
#endif
}

/* method: unloadResources of class  CEGUI::Scheme */
static int tolua_CEGUI_CEGUI_Scheme_unloadResources00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scheme",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scheme* self = (CEGUI::Scheme*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadResources'",NULL);
#endif
 {
  self->unloadResources();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadResources'.",&tolua_err);
 return 0;
#endif
}

/* method: resourcesLoaded of class  CEGUI::Scheme */
static int tolua_CEGUI_CEGUI_Scheme_resourcesLoaded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scheme",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scheme* self = (const CEGUI::Scheme*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resourcesLoaded'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->resourcesLoaded();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resourcesLoaded'.",&tolua_err);
 return 0;
#endif
}

/* method: getName of class  CEGUI::Scheme */
static int tolua_CEGUI_CEGUI_Scheme_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scheme",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scheme* self = (const CEGUI::Scheme*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getName();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}

/* method: getSingleton of class  CEGUI::SchemeManager */
static int tolua_CEGUI_CEGUI_SchemeManager_getSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::SchemeManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  CEGUI::SchemeManager& tolua_ret = (CEGUI::SchemeManager&)  CEGUI::SchemeManager::getSingleton();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::SchemeManager");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleton'.",&tolua_err);
 return 0;
#endif
}

/* method: loadScheme of class  CEGUI::SchemeManager */
static int tolua_CEGUI_CEGUI_SchemeManager_loadScheme00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::SchemeManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::SchemeManager* self = (CEGUI::SchemeManager*)  tolua_tousertype(tolua_S,1,0);
  string filename = ((string)  tolua_tocppstring(tolua_S,2,0));
  string resourcegroup = ((string)  tolua_tocppstring(tolua_S,3,""));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadScheme'",NULL);
#endif
 {
  CEGUI::Scheme* tolua_ret = (CEGUI::Scheme*)  self->loadScheme(filename,resourcegroup);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Scheme");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadScheme'.",&tolua_err);
 return 0;
#endif
}

/* method: unloadScheme of class  CEGUI::SchemeManager */
static int tolua_CEGUI_CEGUI_SchemeManager_unloadScheme00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::SchemeManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::SchemeManager* self = (CEGUI::SchemeManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadScheme'",NULL);
#endif
 {
  self->unloadScheme(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadScheme'.",&tolua_err);
 return 0;
#endif
}

/* method: isSchemePresent of class  CEGUI::SchemeManager */
static int tolua_CEGUI_CEGUI_SchemeManager_isSchemePresent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::SchemeManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::SchemeManager* self = (const CEGUI::SchemeManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSchemePresent'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSchemePresent(name);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSchemePresent'.",&tolua_err);
 return 0;
#endif
}

/* method: getScheme of class  CEGUI::SchemeManager */
static int tolua_CEGUI_CEGUI_SchemeManager_getScheme00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::SchemeManager",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::SchemeManager* self = (const CEGUI::SchemeManager*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScheme'",NULL);
#endif
 {
  CEGUI::Scheme* tolua_ret = (CEGUI::Scheme*)  self->getScheme(name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Scheme");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScheme'.",&tolua_err);
 return 0;
#endif
}

/* method: unloadAllSchemes of class  CEGUI::SchemeManager */
static int tolua_CEGUI_CEGUI_SchemeManager_unloadAllSchemes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::SchemeManager",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::SchemeManager* self = (CEGUI::SchemeManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadAllSchemes'",NULL);
#endif
 {
  self->unloadAllSchemes();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadAllSchemes'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToFloat of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToFloat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  float tolua_ret = (float)  CEGUI::PropertyHelper::stringToFloat(str);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToFloat'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToUint of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToUint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  uint tolua_ret = (uint)  CEGUI::PropertyHelper::stringToUint(str);
 {
#ifdef __cplusplus
 void* tolua_obj = new uint(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"uint");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(uint));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"uint");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToUint'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToBool of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToBool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  bool tolua_ret = (bool)  CEGUI::PropertyHelper::stringToBool(str);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToBool'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToSize of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  CEGUI::PropertyHelper::stringToSize(str);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToSize'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToPoint of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  CEGUI::Point tolua_ret = (CEGUI::Point)  CEGUI::PropertyHelper::stringToPoint(str);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Point(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Point));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Point");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToPoint'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToRect of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  CEGUI::PropertyHelper::stringToRect(str);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToRect'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToMetricsMode of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToMetricsMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  CEGUI::MetricsMode tolua_ret = (CEGUI::MetricsMode)  CEGUI::PropertyHelper::stringToMetricsMode(str);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToMetricsMode'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToImage of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  CEGUI::PropertyHelper::stringToImage(str);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToImage'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToColour of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  CEGUI::PropertyHelper::stringToColour(str);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToColour'.",&tolua_err);
 return 0;
#endif
}

/* method: stringToColourRect of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_stringToColourRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string str = ((string)  tolua_tocppstring(tolua_S,2,0));
 {
  ColourRect tolua_ret = (ColourRect)  CEGUI::PropertyHelper::stringToColourRect(str);
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stringToColourRect'.",&tolua_err);
 return 0;
#endif
}

/* method: floatToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_floatToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  float val = ((float)  tolua_tonumber(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::floatToString(val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'floatToString'.",&tolua_err);
 return 0;
#endif
}

/* method: uintToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_uintToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"uint",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  uint val = *((uint*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::uintToString(val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'uintToString'.",&tolua_err);
 return 0;
#endif
}

/* method: boolToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_boolToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bool val = ((bool)  tolua_toboolean(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::boolToString(val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'boolToString'.",&tolua_err);
 return 0;
#endif
}

/* method: sizeToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_sizeToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Size",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Size* val = ((const CEGUI::Size*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::sizeToString(*val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sizeToString'.",&tolua_err);
 return 0;
#endif
}

/* method: pointToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_pointToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Point* val = ((const CEGUI::Point*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::pointToString(*val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pointToString'.",&tolua_err);
 return 0;
#endif
}

/* method: rectToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_rectToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Rect* val = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::rectToString(*val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rectToString'.",&tolua_err);
 return 0;
#endif
}

/* method: metricsModeToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_metricsModeToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MetricsMode val = ((CEGUI::MetricsMode) (int)  tolua_tonumber(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::metricsModeToString(val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'metricsModeToString'.",&tolua_err);
 return 0;
#endif
}

/* method: imageToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_imageToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Image* val = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::imageToString(val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imageToString'.",&tolua_err);
 return 0;
#endif
}

/* method: colourToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_colourToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::colour* val = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::colourToString(*val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'colourToString'.",&tolua_err);
 return 0;
#endif
}

/* method: colourRectToString of class  CEGUI::PropertyHelper */
static int tolua_CEGUI_CEGUI_PropertyHelper_colourRectToString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::PropertyHelper",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const ColourRect* val = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
 {
  string tolua_ret = (string)  CEGUI::PropertyHelper::colourRectToString(*val);
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'colourRectToString'.",&tolua_err);
 return 0;
#endif
}

/* method: isHovering of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_isHovering00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ButtonBase* self = (const CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHovering'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHovering();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHovering'.",&tolua_err);
 return 0;
#endif
}

/* method: isPushed of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_isPushed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ButtonBase* self = (const CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPushed'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isPushed();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPushed'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_getNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ButtonBase* self = (const CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getHoverTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_getHoverTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ButtonBase* self = (const CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHoverTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getHoverTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHoverTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getPushedTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_getPushedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ButtonBase* self = (const CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPushedTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getPushedTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPushedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getDisabledTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_getDisabledTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ButtonBase* self = (const CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getDisabledTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_setNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ButtonBase* self = (CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTextColour'",NULL);
#endif
 {
  self->setNormalTextColour(*c);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setHoverTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_setHoverTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ButtonBase* self = (CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHoverTextColour'",NULL);
#endif
 {
  self->setHoverTextColour(*c);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHoverTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setPushedTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_setPushedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ButtonBase* self = (CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPushedTextColour'",NULL);
#endif
 {
  self->setPushedTextColour(*c);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPushedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setDisabledTextColour of class  CEGUI::ButtonBase */
static int tolua_CEGUI_CEGUI_ButtonBase_setDisabledTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ButtonBase",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ButtonBase* self = (CEGUI::ButtonBase*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* c = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledTextColour'",NULL);
#endif
 {
  self->setDisabledTextColour(*c);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: isSelected of class  CEGUI::Checkbox */
static int tolua_CEGUI_CEGUI_Checkbox_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Checkbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Checkbox* self = (const CEGUI::Checkbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSelected();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelected of class  CEGUI::Checkbox */
static int tolua_CEGUI_CEGUI_Checkbox_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Checkbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Checkbox* self = (CEGUI::Checkbox*)  tolua_tousertype(tolua_S,1,0);
  bool select = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'",NULL);
#endif
 {
  self->setSelected(select);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: isStandardImageryEnabled of class  CEGUI::PushButton */
static int tolua_CEGUI_CEGUI_PushButton_isStandardImageryEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::PushButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::PushButton* self = (const CEGUI::PushButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isStandardImageryEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isStandardImageryEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isStandardImageryEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isCustomImageryAutoSized of class  CEGUI::PushButton */
static int tolua_CEGUI_CEGUI_PushButton_isCustomImageryAutoSized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::PushButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::PushButton* self = (const CEGUI::PushButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCustomImageryAutoSized'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isCustomImageryAutoSized();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCustomImageryAutoSized'.",&tolua_err);
 return 0;
#endif
}

/* method: setStandardImageryEnabled of class  CEGUI::PushButton */
static int tolua_CEGUI_CEGUI_PushButton_setStandardImageryEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::PushButton",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::PushButton* self = (CEGUI::PushButton*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStandardImageryEnabled'",NULL);
#endif
 {
  self->setStandardImageryEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStandardImageryEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setCustomImageryAutoSized of class  CEGUI::PushButton */
static int tolua_CEGUI_CEGUI_PushButton_setCustomImageryAutoSized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::PushButton",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::PushButton* self = (CEGUI::PushButton*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCustomImageryAutoSized'",NULL);
#endif
 {
  self->setCustomImageryAutoSized(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCustomImageryAutoSized'.",&tolua_err);
 return 0;
#endif
}

/* method: getTextXOffset of class  CEGUI::PushButton */
static int tolua_CEGUI_CEGUI_PushButton_getTextXOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::PushButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::PushButton* self = (const CEGUI::PushButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextXOffset'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getTextXOffset();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextXOffset'.",&tolua_err);
 return 0;
#endif
}

/* method: setTextXOffset of class  CEGUI::PushButton */
static int tolua_CEGUI_CEGUI_PushButton_setTextXOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::PushButton",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::PushButton* self = (CEGUI::PushButton*)  tolua_tousertype(tolua_S,1,0);
  float offset = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextXOffset'",NULL);
#endif
 {
  self->setTextXOffset(offset);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextXOffset'.",&tolua_err);
 return 0;
#endif
}

/* method: isHotTracked of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_isHotTracked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Thumb* self = (const CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHotTracked'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHotTracked();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHotTracked'.",&tolua_err);
 return 0;
#endif
}

/* method: isVertFree of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_isVertFree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Thumb* self = (const CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertFree'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVertFree();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertFree'.",&tolua_err);
 return 0;
#endif
}

/* method: isHorzFree of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_isHorzFree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Thumb* self = (const CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorzFree'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHorzFree();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorzFree'.",&tolua_err);
 return 0;
#endif
}

/* method: setHotTracked of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_setHotTracked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHotTracked'",NULL);
#endif
 {
  self->setHotTracked(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHotTracked'.",&tolua_err);
 return 0;
#endif
}

/* method: setVertFree of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_setVertFree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVertFree'",NULL);
#endif
 {
  self->setVertFree(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVertFree'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorzFree of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_setHorzFree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorzFree'",NULL);
#endif
 {
  self->setHorzFree(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorzFree'.",&tolua_err);
 return 0;
#endif
}

/* method: ceguiLua_Thumb_getVertRange of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_getVertRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  float min = ((float)  tolua_tonumber(tolua_S,2,0));
  float max = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ceguiLua_Thumb_getVertRange'",NULL);
#endif
 {
  ceguiLua_Thumb_getVertRange(self,&min,&max);
 tolua_pushnumber(tolua_S,(lua_Number)min);
 tolua_pushnumber(tolua_S,(lua_Number)max);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVertRange'.",&tolua_err);
 return 0;
#endif
}

/* method: ceguiLua_Thumb_getHorzRange of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_getHorzRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  float min = ((float)  tolua_tonumber(tolua_S,2,0));
  float max = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ceguiLua_Thumb_getHorzRange'",NULL);
#endif
 {
  ceguiLua_Thumb_getHorzRange(self,&min,&max);
 tolua_pushnumber(tolua_S,(lua_Number)min);
 tolua_pushnumber(tolua_S,(lua_Number)max);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorzRange'.",&tolua_err);
 return 0;
#endif
}

/* method: setVertRange of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_setVertRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  float min = ((float)  tolua_tonumber(tolua_S,2,0));
  float max = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVertRange'",NULL);
#endif
 {
  self->setVertRange(min,max);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVertRange'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorzRange of class  CEGUI::Thumb */
static int tolua_CEGUI_CEGUI_Thumb_setHorzRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Thumb",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Thumb* self = (CEGUI::Thumb*)  tolua_tousertype(tolua_S,1,0);
  float min = ((float)  tolua_tonumber(tolua_S,2,0));
  float max = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorzRange'",NULL);
#endif
 {
  self->setHorzRange(min,max);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorzRange'.",&tolua_err);
 return 0;
#endif
}

/* method: isSelected of class  CEGUI::RadioButton */
static int tolua_CEGUI_CEGUI_RadioButton_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::RadioButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::RadioButton* self = (const CEGUI::RadioButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSelected();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelected of class  CEGUI::RadioButton */
static int tolua_CEGUI_CEGUI_RadioButton_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::RadioButton",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::RadioButton* self = (CEGUI::RadioButton*)  tolua_tousertype(tolua_S,1,0);
  bool select = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'",NULL);
#endif
 {
  self->setSelected(select);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: getGroupID of class  CEGUI::RadioButton */
static int tolua_CEGUI_CEGUI_RadioButton_getGroupID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::RadioButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::RadioButton* self = (const CEGUI::RadioButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGroupID'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getGroupID();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGroupID'.",&tolua_err);
 return 0;
#endif
}

/* method: setGroupID of class  CEGUI::RadioButton */
static int tolua_CEGUI_CEGUI_RadioButton_setGroupID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::RadioButton",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::RadioButton* self = (CEGUI::RadioButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned long group = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGroupID'",NULL);
#endif
 {
  self->setGroupID(group);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGroupID'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedButtonInGroup of class  CEGUI::RadioButton */
static int tolua_CEGUI_CEGUI_RadioButton_getSelectedButtonInGroup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::RadioButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::RadioButton* self = (const CEGUI::RadioButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedButtonInGroup'",NULL);
#endif
 {
  CEGUI::RadioButton* tolua_ret = (CEGUI::RadioButton*)  self->getSelectedButtonInGroup();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::RadioButton");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedButtonInGroup'.",&tolua_err);
 return 0;
#endif
}

/* method: isSelected of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabButton* self = (const CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSelected();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelected of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabButton* self = (CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
  bool select = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'",NULL);
#endif
 {
  self->setSelected(select);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: setRightOfSelected of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_setRightOfSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabButton* self = (CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
  bool isRight = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRightOfSelected'",NULL);
#endif
 {
  self->setRightOfSelected(isRight);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRightOfSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: setTargetWindow of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_setTargetWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabButton* self = (CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTargetWindow'",NULL);
#endif
 {
  self->setTargetWindow(wnd);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTargetWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: getTargetWindow of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_getTargetWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabButton* self = (CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTargetWindow'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getTargetWindow();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTargetWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: setTabIndex of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_setTabIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabButton* self = (CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTabIndex'",NULL);
#endif
 {
  self->setTabIndex(idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTabIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabIndex of class  CEGUI::TabButton */
static int tolua_CEGUI_CEGUI_TabButton_getTabIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabButton",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabButton* self = (CEGUI::TabButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabIndex'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getTabIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabCount of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getTabCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getTabCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabCount'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectedTab of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setSelectedTab00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTab'",NULL);
#endif
 {
  self->setSelectedTab(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTab'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectedTab of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setSelectedTab01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTab'",NULL);
#endif
 {
  self->setSelectedTab(ID);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_TabControl_setSelectedTab00(tolua_S);
}

/* method: setSelectedTabAtIndex of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setSelectedTabAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTabAtIndex'",NULL);
#endif
 {
  self->setSelectedTabAtIndex(index);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTabAtIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabContentsAtIndex of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getTabContentsAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabContentsAtIndex'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getTabContentsAtIndex(index);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabContentsAtIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabContents of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getTabContents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabContents'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getTabContents(name);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabContents'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabContents of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getTabContents01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabContents'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getTabContents(ID);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_TabControl_getTabContents00(tolua_S);
}

/* method: isTabContentsSelected of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_isTabContentsSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTabContentsSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isTabContentsSelected(wnd);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTabContentsSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedTabIndex of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getSelectedTabIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedTabIndex'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getSelectedTabIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedTabIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeTabHeight of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getRelativeTabHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeTabHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRelativeTabHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeTabHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteTabHeight of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getAbsoluteTabHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteTabHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAbsoluteTabHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteTabHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabHeight of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getTabHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabHeight'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getTabHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: getTabTextPadding of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getTabTextPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabTextPadding'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getTabTextPadding();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabTextPadding'.",&tolua_err);
 return 0;
#endif
}

/* method: getRelativeTabTextPadding of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getRelativeTabTextPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeTabTextPadding'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getRelativeTabTextPadding();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeTabTextPadding'.",&tolua_err);
 return 0;
#endif
}

/* method: getAbsoluteTabTextPadding of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_getAbsoluteTabTextPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::TabControl* self = (const CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsoluteTabTextPadding'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getAbsoluteTabTextPadding();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsoluteTabTextPadding'.",&tolua_err);
 return 0;
#endif
}

/* method: setRelativeTabHeight of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setRelativeTabHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  float height = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeTabHeight'",NULL);
#endif
 {
  self->setRelativeTabHeight(height);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeTabHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: setAbsoluteTabHeight of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setAbsoluteTabHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  float height = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAbsoluteTabHeight'",NULL);
#endif
 {
  self->setAbsoluteTabHeight(height);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAbsoluteTabHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: setTabHeight of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setTabHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  float height = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTabHeight'",NULL);
#endif
 {
  self->setTabHeight(height);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTabHeight'.",&tolua_err);
 return 0;
#endif
}

/* method: setTabTextPadding of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setTabTextPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  float pad = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTabTextPadding'",NULL);
#endif
 {
  self->setTabTextPadding(pad);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTabTextPadding'.",&tolua_err);
 return 0;
#endif
}

/* method: setRelativeTabTextPadding of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setRelativeTabTextPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  float pad = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeTabTextPadding'",NULL);
#endif
 {
  self->setRelativeTabTextPadding(pad);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeTabTextPadding'.",&tolua_err);
 return 0;
#endif
}

/* method: setAbsoluteTabTextPadding of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_setAbsoluteTabTextPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  float pad = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAbsoluteTabTextPadding'",NULL);
#endif
 {
  self->setAbsoluteTabTextPadding(pad);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAbsoluteTabTextPadding'.",&tolua_err);
 return 0;
#endif
}

/* method: addTab of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_addTab00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTab'",NULL);
#endif
 {
  self->addTab(wnd);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTab'.",&tolua_err);
 return 0;
#endif
}

/* method: removeTab of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_removeTab00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ID = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTab'",NULL);
#endif
 {
  self->removeTab(ID);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTab'.",&tolua_err);
 return 0;
#endif
}

/* method: removeTab of class  CEGUI::TabControl */
static int tolua_CEGUI_CEGUI_TabControl_removeTab01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::TabControl",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::TabControl* self = (CEGUI::TabControl*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTab'",NULL);
#endif
 {
  self->removeTab(name);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_TabControl_removeTab00(tolua_S);
}

/* method: isDraggingEnabled of class  CEGUI::Titlebar */
static int tolua_CEGUI_CEGUI_Titlebar_isDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Titlebar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Titlebar* self = (const CEGUI::Titlebar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDraggingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDraggingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setDraggingEnabled of class  CEGUI::Titlebar */
static int tolua_CEGUI_CEGUI_Titlebar_setDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Titlebar",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Titlebar* self = (CEGUI::Titlebar*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDraggingEnabled'",NULL);
#endif
 {
  self->setDraggingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getCaptionColour of class  CEGUI::Titlebar */
static int tolua_CEGUI_CEGUI_Titlebar_getCaptionColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Titlebar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Titlebar* self = (const CEGUI::Titlebar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCaptionColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getCaptionColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCaptionColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setCaptionColour of class  CEGUI::Titlebar */
static int tolua_CEGUI_CEGUI_Titlebar_setCaptionColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Titlebar",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Titlebar* self = (CEGUI::Titlebar*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCaptionColour'",NULL);
#endif
 {
  self->setCaptionColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCaptionColour'.",&tolua_err);
 return 0;
#endif
}

/* method: isSizingEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSizingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSizingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isFrameEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isFrameEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFrameEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isFrameEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFrameEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isTitleBarEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isTitleBarEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTitleBarEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isTitleBarEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTitleBarEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isCloseButtonEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isCloseButtonEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCloseButtonEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isCloseButtonEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCloseButtonEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isRollupEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isRollupEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRollupEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isRollupEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRollupEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isRolledup of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isRolledup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRolledup'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isRolledup();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRolledup'.",&tolua_err);
 return 0;
#endif
}

/* method: isDragMovingEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_isDragMovingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDragMovingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDragMovingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDragMovingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setSizingEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizingEnabled'",NULL);
#endif
 {
  self->setSizingEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setFrameEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setFrameEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameEnabled'",NULL);
#endif
 {
  self->setFrameEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrameEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setTitleBarEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setTitleBarEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleBarEnabled'",NULL);
#endif
 {
  self->setTitleBarEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleBarEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setCloseButtonEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setCloseButtonEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCloseButtonEnabled'",NULL);
#endif
 {
  self->setCloseButtonEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCloseButtonEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setRollupEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setRollupEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRollupEnabled'",NULL);
#endif
 {
  self->setRollupEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRollupEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setDragMovingEnabled of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setDragMovingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragMovingEnabled'",NULL);
#endif
 {
  self->setDragMovingEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDragMovingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getSizingBorderThickness of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_getSizingBorderThickness00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizingBorderThickness'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getSizingBorderThickness();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizingBorderThickness'.",&tolua_err);
 return 0;
#endif
}

/* method: setSizingBorderThickness of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setSizingBorderThickness00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  float pixels = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizingBorderThickness'",NULL);
#endif
 {
  self->setSizingBorderThickness(pixels);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizingBorderThickness'.",&tolua_err);
 return 0;
#endif
}

/* method: toggleRollup of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_toggleRollup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toggleRollup'",NULL);
#endif
 {
  self->toggleRollup();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toggleRollup'.",&tolua_err);
 return 0;
#endif
}

/* method: setTitlebarFont of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setTitlebarFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  string name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitlebarFont'",NULL);
#endif
 {
  self->setTitlebarFont(name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitlebarFont'.",&tolua_err);
 return 0;
#endif
}

/* method: setTitlebarFont of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setTitlebarFont01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Font* font = ((CEGUI::Font*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitlebarFont'",NULL);
#endif
 {
  self->setTitlebarFont(font);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_FrameWindow_setTitlebarFont00(tolua_S);
}

/* method: getTitlebarFont of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_getTitlebarFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitlebarFont'",NULL);
#endif
 {
  const CEGUI::Font* tolua_ret = (const CEGUI::Font*)  self->getTitlebarFont();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Font");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitlebarFont'.",&tolua_err);
 return 0;
#endif
}

/* method: getCaptionColour of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_getCaptionColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::FrameWindow* self = (const CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCaptionColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getCaptionColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCaptionColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setCaptionColour of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_setCaptionColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCaptionColour'",NULL);
#endif
 {
  self->setCaptionColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCaptionColour'.",&tolua_err);
 return 0;
#endif
}

/* method: offsetPixelPosition of class  CEGUI::FrameWindow */
static int tolua_CEGUI_CEGUI_FrameWindow_offsetPixelPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::FrameWindow",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Vector2",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::FrameWindow* self = (CEGUI::FrameWindow*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Vector2* offset = ((const CEGUI::Vector2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'offsetPixelPosition'",NULL);
#endif
 {
  self->offsetPixelPosition(*offset);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'offsetPixelPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: isFrameEnabled of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_isFrameEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Static",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Static* self = (const CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFrameEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isFrameEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFrameEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isBackgroundEnabled of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_isBackgroundEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Static",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Static* self = (const CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBackgroundEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isBackgroundEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBackgroundEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setFrameEnabled of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setFrameEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameEnabled'",NULL);
#endif
 {
  self->setFrameEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrameEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setBackgroundEnabled of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setBackgroundEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundEnabled'",NULL);
#endif
 {
  self->setBackgroundEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getFrameColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_getFrameColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Static",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Static* self = (const CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFrameColours'",NULL);
#endif
 {
  ColourRect tolua_ret = (ColourRect)  self->getFrameColours();
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFrameColours'.",&tolua_err);
 return 0;
#endif
}

/* method: getBackgroundColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_getBackgroundColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Static",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Static* self = (const CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundColours'",NULL);
#endif
 {
  ColourRect tolua_ret = (ColourRect)  self->getBackgroundColours();
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setFrameColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setFrameColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* tl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::colour* tr = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::colour* bl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,4,0));
  const CEGUI::colour* br = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameColours'",NULL);
#endif
 {
  self->setFrameColours(*tl,*tr,*bl,*br);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrameColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setFrameColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setFrameColours01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const ColourRect* colours = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameColours'",NULL);
#endif
 {
  self->setFrameColours(*colours);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Static_setFrameColours00(tolua_S);
}

/* method: setFrameColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setFrameColours02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameColours'",NULL);
#endif
 {
  self->setFrameColours(*col);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Static_setFrameColours01(tolua_S);
}

/* method: setBackgroundColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setBackgroundColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* tl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::colour* tr = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::colour* bl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,4,0));
  const CEGUI::colour* br = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColours'",NULL);
#endif
 {
  self->setBackgroundColours(*tl,*tr,*bl,*br);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setBackgroundColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setBackgroundColours01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const ColourRect* colours = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColours'",NULL);
#endif
 {
  self->setBackgroundColours(*colours);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Static_setBackgroundColours00(tolua_S);
}

/* method: setBackgroundColours of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setBackgroundColours02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColours'",NULL);
#endif
 {
  self->setBackgroundColours(*col);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Static_setBackgroundColours01(tolua_S);
}

/* method: getImageForFrameLocation of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_getImageForFrameLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Static",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Static* self = (const CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::FrameLocation location = ((CEGUI::FrameLocation) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageForFrameLocation'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getImageForFrameLocation(location);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageForFrameLocation'.",&tolua_err);
 return 0;
#endif
}

/* method: getBackgroundImage of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_getBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Static",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Static* self = (const CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundImage'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getBackgroundImage();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setImageForFrameLocation of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setImageForFrameLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::FrameLocation location = ((CEGUI::FrameLocation) (int)  tolua_tonumber(tolua_S,2,0));
  const CEGUI::Image* img = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImageForFrameLocation'",NULL);
#endif
 {
  self->setImageForFrameLocation(location,img);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setImageForFrameLocation'.",&tolua_err);
 return 0;
#endif
}

/* method: setFrameImages of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setFrameImages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,6,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,7,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,8,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,9,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* tl = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::Image* tr = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::Image* bl = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,4,0));
  const CEGUI::Image* br = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,5,0));
  const CEGUI::Image* l = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,6,0));
  const CEGUI::Image* t = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,7,0));
  const CEGUI::Image* r = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,8,0));
  const CEGUI::Image* b = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,9,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrameImages'",NULL);
#endif
 {
  self->setFrameImages(tl,tr,bl,br,l,t,r,b);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrameImages'.",&tolua_err);
 return 0;
#endif
}

/* method: setBackgroundImage of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  string imagesetname = ((string)  tolua_tocppstring(tolua_S,2,0));
  string imagename = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundImage'",NULL);
#endif
 {
  self->setBackgroundImage(imagesetname,imagename);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setBackgroundImage of class  CEGUI::Static */
static int tolua_CEGUI_CEGUI_Static_setBackgroundImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Static",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Static* self = (CEGUI::Static*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* bgimg = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundImage'",NULL);
#endif
 {
  self->setBackgroundImage(bgimg);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Static_setBackgroundImage00(tolua_S);
}

/* method: getTextColours of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_getTextColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticText* self = (const CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextColours'",NULL);
#endif
 {
  ColourRect tolua_ret = (ColourRect)  self->getTextColours();
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setTextColours of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setTextColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* tl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::colour* tr = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::colour* bl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,4,0));
  const CEGUI::colour* br = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColours'",NULL);
#endif
 {
  self->setTextColours(*tl,*tr,*bl,*br);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setTextColours of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setTextColours01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  const ColourRect* colurs = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColours'",NULL);
#endif
 {
  self->setTextColours(*colurs);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_StaticText_setTextColours00(tolua_S);
}

/* method: setTextColours of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setTextColours02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColours'",NULL);
#endif
 {
  self->setTextColours(*col);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_StaticText_setTextColours01(tolua_S);
}

/* method: getHorizontalFormatting of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_getHorizontalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticText* self = (const CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalFormatting'",NULL);
#endif
 {
  CEGUI::StaticText::HorzFormatting tolua_ret = (CEGUI::StaticText::HorzFormatting)  self->getHorizontalFormatting();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: getVerticalFormatting of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_getVerticalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticText* self = (const CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalFormatting'",NULL);
#endif
 {
  CEGUI::StaticText::VertFormatting tolua_ret = (CEGUI::StaticText::VertFormatting)  self->getVerticalFormatting();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setFormatting of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::StaticText::HorzFormatting h_fmt = ((CEGUI::StaticText::HorzFormatting) (int)  tolua_tonumber(tolua_S,2,0));
  CEGUI::StaticText::VertFormatting v_fmt = ((CEGUI::StaticText::VertFormatting) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFormatting'",NULL);
#endif
 {
  self->setFormatting(h_fmt,v_fmt);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorizontalFormatting of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setHorizontalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::StaticText::HorzFormatting h_fmt = ((CEGUI::StaticText::HorzFormatting) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalFormatting'",NULL);
#endif
 {
  self->setHorizontalFormatting(h_fmt);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setVerticalFormatting of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setVerticalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::StaticText::VertFormatting v_fmt = ((CEGUI::StaticText::VertFormatting) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalFormatting'",NULL);
#endif
 {
  self->setVerticalFormatting(v_fmt);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: isVerticalScrollbarEnabled of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_isVerticalScrollbarEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticText* self = (const CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVerticalScrollbarEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVerticalScrollbarEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVerticalScrollbarEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isHorizontalScrollbarEnabled of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_isHorizontalScrollbarEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticText* self = (const CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorizontalScrollbarEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHorizontalScrollbarEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorizontalScrollbarEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setVerticalScrollbarEnabled of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setVerticalScrollbarEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalScrollbarEnabled'",NULL);
#endif
 {
  self->setVerticalScrollbarEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalScrollbarEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorizontalScrollbarEnabled of class  CEGUI::StaticText */
static int tolua_CEGUI_CEGUI_StaticText_setHorizontalScrollbarEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticText",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticText* self = (CEGUI::StaticText*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalScrollbarEnabled'",NULL);
#endif
 {
  self->setHorizontalScrollbarEnabled(enabled);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalScrollbarEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getImage of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_getImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticImage* self = (const CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImage'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getImage();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setImage of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  string imagesetname = ((string)  tolua_tocppstring(tolua_S,2,0));
  string imagename = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImage'",NULL);
#endif
 {
  self->setImage(imagesetname,imagename);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setImage of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* image = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImage'",NULL);
#endif
 {
  self->setImage(image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_StaticImage_setImage00(tolua_S);
}

/* method: getImageColours of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_getImageColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticImage* self = (const CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getImageColours'",NULL);
#endif
 {
  ColourRect tolua_ret = (ColourRect)  self->getImageColours();
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setImageColours of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setImageColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* tl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::colour* tr = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,3,0));
  const CEGUI::colour* bl = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,4,0));
  const CEGUI::colour* br = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImageColours'",NULL);
#endif
 {
  self->setImageColours(*tl,*tr,*bl,*br);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setImageColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setImageColours of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setImageColours01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  const ColourRect* colurs = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImageColours'",NULL);
#endif
 {
  self->setImageColours(*colurs);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_StaticImage_setImageColours00(tolua_S);
}

/* method: setImageColours of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setImageColours02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImageColours'",NULL);
#endif
 {
  self->setImageColours(*col);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_StaticImage_setImageColours01(tolua_S);
}

/* method: getHorizontalFormatting of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_getHorizontalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticImage* self = (const CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalFormatting'",NULL);
#endif
 {
  CEGUI::StaticImage::HorzFormatting tolua_ret = (CEGUI::StaticImage::HorzFormatting)  self->getHorizontalFormatting();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: getVerticalFormatting of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_getVerticalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::StaticImage* self = (const CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalFormatting'",NULL);
#endif
 {
  CEGUI::StaticImage::VertFormatting tolua_ret = (CEGUI::StaticImage::VertFormatting)  self->getVerticalFormatting();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setFormatting of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::StaticImage::HorzFormatting h_fmt = ((CEGUI::StaticImage::HorzFormatting) (int)  tolua_tonumber(tolua_S,2,0));
  CEGUI::StaticImage::VertFormatting v_fmt = ((CEGUI::StaticImage::VertFormatting) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFormatting'",NULL);
#endif
 {
  self->setFormatting(h_fmt,v_fmt);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorizontalFormatting of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setHorizontalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::StaticImage::HorzFormatting h_fmt = ((CEGUI::StaticImage::HorzFormatting) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalFormatting'",NULL);
#endif
 {
  self->setHorizontalFormatting(h_fmt);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setVerticalFormatting of class  CEGUI::StaticImage */
static int tolua_CEGUI_CEGUI_StaticImage_setVerticalFormatting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::StaticImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::StaticImage* self = (CEGUI::StaticImage*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::StaticImage::VertFormatting v_fmt = ((CEGUI::StaticImage::VertFormatting) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalFormatting'",NULL);
#endif
 {
  self->setVerticalFormatting(v_fmt);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalFormatting'.",&tolua_err);
 return 0;
#endif
}

/* method: setTargetWindow of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_setTargetWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Tooltip* self = (CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Window* wnd = ((CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTargetWindow'",NULL);
#endif
 {
  self->setTargetWindow(wnd);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTargetWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: resetTimer of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_resetTimer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Tooltip* self = (CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetTimer'",NULL);
#endif
 {
  self->resetTimer();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetTimer'.",&tolua_err);
 return 0;
#endif
}

/* method: getHoverTime of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_getHoverTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Tooltip* self = (const CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHoverTime'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHoverTime();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHoverTime'.",&tolua_err);
 return 0;
#endif
}

/* method: setDisplayTime of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_setDisplayTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Tooltip* self = (CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
  float seconds = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayTime'",NULL);
#endif
 {
  self->setDisplayTime(seconds);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayTime'.",&tolua_err);
 return 0;
#endif
}

/* method: getFadeTime of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_getFadeTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Tooltip* self = (const CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFadeTime'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getFadeTime();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFadeTime'.",&tolua_err);
 return 0;
#endif
}

/* method: setHoverTime of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_setHoverTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Tooltip* self = (CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
  float seconds = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHoverTime'",NULL);
#endif
 {
  self->setHoverTime(seconds);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHoverTime'.",&tolua_err);
 return 0;
#endif
}

/* method: getDisplayTime of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_getDisplayTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Tooltip* self = (const CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayTime'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getDisplayTime();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayTime'.",&tolua_err);
 return 0;
#endif
}

/* method: setFadeTime of class  CEGUI::Tooltip */
static int tolua_CEGUI_CEGUI_Tooltip_setFadeTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Tooltip",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Tooltip* self = (CEGUI::Tooltip*)  tolua_tousertype(tolua_S,1,0);
  float seconds = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFadeTime'",NULL);
#endif
 {
  self->setFadeTime(seconds);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFadeTime'.",&tolua_err);
 return 0;
#endif
}

/* method: isDraggingEnabled of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_isDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::DragContainer* self = (const CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDraggingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDraggingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setDraggingEnabled of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_setDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::DragContainer* self = (CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDraggingEnabled'",NULL);
#endif
 {
  self->setDraggingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isBeingDragged of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_isBeingDragged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::DragContainer* self = (const CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBeingDragged'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isBeingDragged();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBeingDragged'.",&tolua_err);
 return 0;
#endif
}

/* method: getPixelDragThreshold of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_getPixelDragThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::DragContainer* self = (const CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelDragThreshold'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getPixelDragThreshold();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelDragThreshold'.",&tolua_err);
 return 0;
#endif
}

/* method: setPixelDragThreshold of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_setPixelDragThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::DragContainer* self = (CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
  float pixels = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPixelDragThreshold'",NULL);
#endif
 {
  self->setPixelDragThreshold(pixels);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPixelDragThreshold'.",&tolua_err);
 return 0;
#endif
}

/* method: getDragAlpha of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_getDragAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::DragContainer* self = (const CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDragAlpha'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getDragAlpha();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDragAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: setDragAlpha of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_setDragAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::DragContainer* self = (CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
  float alpha = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragAlpha'",NULL);
#endif
 {
  self->setDragAlpha(alpha);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDragAlpha'.",&tolua_err);
 return 0;
#endif
}

/* method: getDragCursorImage of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_getDragCursorImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::DragContainer* self = (const CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDragCursorImage'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getDragCursorImage();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDragCursorImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setDragCursorImage of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::DragContainer* self = (CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MouseCursorImage image = ((CEGUI::MouseCursorImage) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragCursorImage'",NULL);
#endif
 {
  self->setDragCursorImage(image);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDragCursorImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setDragCursorImage of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::DragContainer* self = (CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
  string imageset = ((string)  tolua_tocppstring(tolua_S,2,0));
  string image = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragCursorImage'",NULL);
#endif
 {
  self->setDragCursorImage(imageset,image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage00(tolua_S);
}

/* method: setDragCursorImage of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::DragContainer* self = (CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* image = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragCursorImage'",NULL);
#endif
 {
  self->setDragCursorImage(image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage01(tolua_S);
}

/* method: getCurrentDropTarget of class  CEGUI::DragContainer */
static int tolua_CEGUI_CEGUI_DragContainer_getCurrentDropTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::DragContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::DragContainer* self = (const CEGUI::DragContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentDropTarget'",NULL);
#endif
 {
  CEGUI::Window* tolua_ret = (CEGUI::Window*)  self->getCurrentDropTarget();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentDropTarget'.",&tolua_err);
 return 0;
#endif
}

/* method: getDocumentSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_getDocumentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scrollbar* self = (const CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDocumentSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getDocumentSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDocumentSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getPageSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_getPageSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scrollbar* self = (const CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPageSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getPageSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPageSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getStepSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_getStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scrollbar* self = (const CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStepSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getStepSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getOverlapSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_getOverlapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scrollbar* self = (const CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOverlapSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getOverlapSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOverlapSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getScrollPosition of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_getScrollPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Scrollbar* self = (const CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScrollPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getScrollPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScrollPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setDocumentSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_setDocumentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scrollbar* self = (CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
  float document_size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDocumentSize'",NULL);
#endif
 {
  self->setDocumentSize(document_size);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDocumentSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setPageSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_setPageSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scrollbar* self = (CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
  float page_size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPageSize'",NULL);
#endif
 {
  self->setPageSize(page_size);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPageSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setStepSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_setStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scrollbar* self = (CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
  float step_size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStepSize'",NULL);
#endif
 {
  self->setStepSize(step_size);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setOverlapSize of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_setOverlapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scrollbar* self = (CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
  float overlap_size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOverlapSize'",NULL);
#endif
 {
  self->setOverlapSize(overlap_size);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOverlapSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setScrollPosition of class  CEGUI::Scrollbar */
static int tolua_CEGUI_CEGUI_Scrollbar_setScrollPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Scrollbar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Scrollbar* self = (CEGUI::Scrollbar*)  tolua_tousertype(tolua_S,1,0);
  float position = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScrollPosition'",NULL);
#endif
 {
  self->setScrollPosition(position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScrollPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: isContentPaneAutoSized of class  CEGUI::ScrolledContainer */
static int tolua_CEGUI_CEGUI_ScrolledContainer_isContentPaneAutoSized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrolledContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrolledContainer* self = (const CEGUI::ScrolledContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isContentPaneAutoSized'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isContentPaneAutoSized();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isContentPaneAutoSized'.",&tolua_err);
 return 0;
#endif
}

/* method: setContentPaneAutoSized of class  CEGUI::ScrolledContainer */
static int tolua_CEGUI_CEGUI_ScrolledContainer_setContentPaneAutoSized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrolledContainer",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrolledContainer* self = (CEGUI::ScrolledContainer*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentPaneAutoSized'",NULL);
#endif
 {
  self->setContentPaneAutoSized(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentPaneAutoSized'.",&tolua_err);
 return 0;
#endif
}

/* method: getContentArea of class  CEGUI::ScrolledContainer */
static int tolua_CEGUI_CEGUI_ScrolledContainer_getContentArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrolledContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrolledContainer* self = (const CEGUI::ScrolledContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentArea'",NULL);
#endif
 {
  const CEGUI::Rect& tolua_ret = (const CEGUI::Rect&)  self->getContentArea();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentArea'.",&tolua_err);
 return 0;
#endif
}

/* method: setContentArea of class  CEGUI::ScrolledContainer */
static int tolua_CEGUI_CEGUI_ScrolledContainer_setContentArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrolledContainer",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrolledContainer* self = (CEGUI::ScrolledContainer*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* area = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentArea'",NULL);
#endif
 {
  self->setContentArea(*area);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentArea'.",&tolua_err);
 return 0;
#endif
}

/* method: getChildExtentsArea of class  CEGUI::ScrolledContainer */
static int tolua_CEGUI_CEGUI_ScrolledContainer_getChildExtentsArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrolledContainer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrolledContainer* self = (const CEGUI::ScrolledContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildExtentsArea'",NULL);
#endif
 {
  CEGUI::Rect tolua_ret = (CEGUI::Rect)  self->getChildExtentsArea();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Rect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Rect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Rect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildExtentsArea'.",&tolua_err);
 return 0;
#endif
}

/* method: getContentPane of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getContentPane00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentPane'",NULL);
#endif
 {
  const CEGUI::ScrolledContainer* tolua_ret = (const CEGUI::ScrolledContainer*)  self->getContentPane();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::ScrolledContainer");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentPane'.",&tolua_err);
 return 0;
#endif
}

/* method: isVertScrollbarAlwaysShown of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_isVertScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVertScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowVertScrollbar of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setShowVertScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowVertScrollbar'",NULL);
#endif
 {
  self->setShowVertScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowVertScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: isHorzScrollbarAlwaysShown of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_isHorzScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorzScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHorzScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorzScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowHorzScrollbar of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setShowHorzScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowHorzScrollbar'",NULL);
#endif
 {
  self->setShowHorzScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowHorzScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: isContentPaneAutoSized of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_isContentPaneAutoSized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isContentPaneAutoSized'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isContentPaneAutoSized();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isContentPaneAutoSized'.",&tolua_err);
 return 0;
#endif
}

/* method: setContentPaneAutoSized of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setContentPaneAutoSized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentPaneAutoSized'",NULL);
#endif
 {
  self->setContentPaneAutoSized(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentPaneAutoSized'.",&tolua_err);
 return 0;
#endif
}

/* method: getContentPaneArea of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getContentPaneArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentPaneArea'",NULL);
#endif
 {
  const CEGUI::Rect& tolua_ret = (const CEGUI::Rect&)  self->getContentPaneArea();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::Rect");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentPaneArea'.",&tolua_err);
 return 0;
#endif
}

/* method: setContentPaneArea of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setContentPaneArea00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Rect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Rect* area = ((const CEGUI::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentPaneArea'",NULL);
#endif
 {
  self->setContentPaneArea(*area);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentPaneArea'.",&tolua_err);
 return 0;
#endif
}

/* method: getHorizontalStepSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getHorizontalStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalStepSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHorizontalStepSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorizontalStepSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setHorizontalStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  float step = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalStepSize'",NULL);
#endif
 {
  self->setHorizontalStepSize(step);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getHorizontalOverlapSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getHorizontalOverlapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalOverlapSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHorizontalOverlapSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalOverlapSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorizontalOverlapSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setHorizontalOverlapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  float overlap = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalOverlapSize'",NULL);
#endif
 {
  self->setHorizontalOverlapSize(overlap);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalOverlapSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getHorizontalScrollPosition of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getHorizontalScrollPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalScrollPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getHorizontalScrollPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalScrollPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setHorizontalScrollPosition of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setHorizontalScrollPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  float position = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalScrollPosition'",NULL);
#endif
 {
  self->setHorizontalScrollPosition(position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalScrollPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getVerticalStepSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getVerticalStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalStepSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getVerticalStepSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setVerticalStepSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setVerticalStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  float step = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalStepSize'",NULL);
#endif
 {
  self->setVerticalStepSize(step);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getVerticalOverlapSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getVerticalOverlapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalOverlapSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getVerticalOverlapSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalOverlapSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setVerticalOverlapSize of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setVerticalOverlapSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  float overlap = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalOverlapSize'",NULL);
#endif
 {
  self->setVerticalOverlapSize(overlap);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalOverlapSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getVerticalScrollPosition of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_getVerticalScrollPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ScrollablePane* self = (const CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalScrollPosition'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getVerticalScrollPosition();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalScrollPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: setVerticalScrollPosition of class  CEGUI::ScrollablePane */
static int tolua_CEGUI_CEGUI_ScrollablePane_setVerticalScrollPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ScrollablePane",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ScrollablePane* self = (CEGUI::ScrollablePane*)  tolua_tousertype(tolua_S,1,0);
  float position = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalScrollPosition'",NULL);
#endif
 {
  self->setVerticalScrollPosition(position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalScrollPosition'.",&tolua_err);
 return 0;
#endif
}

/* method: getCurrentValue of class  CEGUI::Slider */
static int tolua_CEGUI_CEGUI_Slider_getCurrentValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Slider",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Slider* self = (const CEGUI::Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentValue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getCurrentValue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentValue'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaxValue of class  CEGUI::Slider */
static int tolua_CEGUI_CEGUI_Slider_getMaxValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Slider",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Slider* self = (const CEGUI::Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxValue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getMaxValue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxValue'.",&tolua_err);
 return 0;
#endif
}

/* method: getClickStep of class  CEGUI::Slider */
static int tolua_CEGUI_CEGUI_Slider_getClickStep00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Slider",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Slider* self = (const CEGUI::Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClickStep'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getClickStep();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClickStep'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaxValue of class  CEGUI::Slider */
static int tolua_CEGUI_CEGUI_Slider_setMaxValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Slider* self = (CEGUI::Slider*)  tolua_tousertype(tolua_S,1,0);
  float maxVal = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxValue'",NULL);
#endif
 {
  self->setMaxValue(maxVal);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxValue'.",&tolua_err);
 return 0;
#endif
}

/* method: setCurrentValue of class  CEGUI::Slider */
static int tolua_CEGUI_CEGUI_Slider_setCurrentValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Slider* self = (CEGUI::Slider*)  tolua_tousertype(tolua_S,1,0);
  float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCurrentValue'",NULL);
#endif
 {
  self->setCurrentValue(value);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentValue'.",&tolua_err);
 return 0;
#endif
}

/* method: setClickStep of class  CEGUI::Slider */
static int tolua_CEGUI_CEGUI_Slider_setClickStep00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Slider* self = (CEGUI::Slider*)  tolua_tousertype(tolua_S,1,0);
  float step = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClickStep'",NULL);
#endif
 {
  self->setClickStep(step);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClickStep'.",&tolua_err);
 return 0;
#endif
}

/* method: getCurrentValue of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_getCurrentValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Spinner* self = (const CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentValue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getCurrentValue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentValue'.",&tolua_err);
 return 0;
#endif
}

/* method: getStepSize of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_getStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Spinner* self = (const CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStepSize'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getStepSize();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaximumValue of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_getMaximumValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Spinner* self = (const CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaximumValue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getMaximumValue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaximumValue'.",&tolua_err);
 return 0;
#endif
}

/* method: getMinimumValue of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_getMinimumValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Spinner* self = (const CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinimumValue'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getMinimumValue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinimumValue'.",&tolua_err);
 return 0;
#endif
}

/* method: getTextInputMode of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_getTextInputMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Spinner* self = (const CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextInputMode'",NULL);
#endif
 {
  CEGUI::Spinner::TextInputMode tolua_ret = (CEGUI::Spinner::TextInputMode)  self->getTextInputMode();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextInputMode'.",&tolua_err);
 return 0;
#endif
}

/* method: setCurrentValue of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_setCurrentValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Spinner* self = (CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
  float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCurrentValue'",NULL);
#endif
 {
  self->setCurrentValue(value);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentValue'.",&tolua_err);
 return 0;
#endif
}

/* method: setStepSize of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_setStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Spinner* self = (CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
  float step = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStepSize'",NULL);
#endif
 {
  self->setStepSize(step);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaximumValue of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_setMaximumValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Spinner* self = (CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
  float maxValue = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximumValue'",NULL);
#endif
 {
  self->setMaximumValue(maxValue);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaximumValue'.",&tolua_err);
 return 0;
#endif
}

/* method: setMinimumValue of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_setMinimumValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Spinner* self = (CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
  float minVaue = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimumValue'",NULL);
#endif
 {
  self->setMinimumValue(minVaue);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinimumValue'.",&tolua_err);
 return 0;
#endif
}

/* method: setTextInputMode of class  CEGUI::Spinner */
static int tolua_CEGUI_CEGUI_Spinner_setTextInputMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Spinner",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Spinner* self = (CEGUI::Spinner*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::Spinner::TextInputMode mode = ((CEGUI::Spinner::TextInputMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextInputMode'",NULL);
#endif
 {
  self->setTextInputMode(mode);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextInputMode'.",&tolua_err);
 return 0;
#endif
}

/* method: getProgress of class  CEGUI::ProgressBar */
static int tolua_CEGUI_CEGUI_ProgressBar_getProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ProgressBar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ProgressBar* self = (const CEGUI::ProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProgress'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getProgress();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProgress'.",&tolua_err);
 return 0;
#endif
}

/* method: getStep of class  CEGUI::ProgressBar */
static int tolua_CEGUI_CEGUI_ProgressBar_getStep00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ProgressBar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ProgressBar* self = (const CEGUI::ProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStep'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getStep();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStep'.",&tolua_err);
 return 0;
#endif
}

/* method: setProgress of class  CEGUI::ProgressBar */
static int tolua_CEGUI_CEGUI_ProgressBar_setProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ProgressBar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ProgressBar* self = (CEGUI::ProgressBar*)  tolua_tousertype(tolua_S,1,0);
  float progress = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgress'",NULL);
#endif
 {
  self->setProgress(progress);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgress'.",&tolua_err);
 return 0;
#endif
}

/* method: setStepSize of class  CEGUI::ProgressBar */
static int tolua_CEGUI_CEGUI_ProgressBar_setStepSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ProgressBar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ProgressBar* self = (CEGUI::ProgressBar*)  tolua_tousertype(tolua_S,1,0);
  float step = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStepSize'",NULL);
#endif
 {
  self->setStepSize(step);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStepSize'.",&tolua_err);
 return 0;
#endif
}

/* method: step of class  CEGUI::ProgressBar */
static int tolua_CEGUI_CEGUI_ProgressBar_step00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ProgressBar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ProgressBar* self = (CEGUI::ProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'step'",NULL);
#endif
 {
  self->step();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'step'.",&tolua_err);
 return 0;
#endif
}

/* method: adjustProgress of class  CEGUI::ProgressBar */
static int tolua_CEGUI_CEGUI_ProgressBar_adjustProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ProgressBar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ProgressBar* self = (CEGUI::ProgressBar*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'adjustProgress'",NULL);
#endif
 {
  self->adjustProgress(delta);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'adjustProgress'.",&tolua_err);
 return 0;
#endif
}

/* method: hasInputFocus of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_hasInputFocus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasInputFocus'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->hasInputFocus();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasInputFocus'.",&tolua_err);
 return 0;
#endif
}

/* method: isReadOnly of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_isReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isReadOnly'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isReadOnly();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isReadOnly'.",&tolua_err);
 return 0;
#endif
}

/* method: isTextMasked of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_isTextMasked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTextMasked'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isTextMasked();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTextMasked'.",&tolua_err);
 return 0;
#endif
}

/* method: isTextValid of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_isTextValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTextValid'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isTextValid();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTextValid'.",&tolua_err);
 return 0;
#endif
}

/* method: getValidationString of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getValidationString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValidationString'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getValidationString();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValidationString'.",&tolua_err);
 return 0;
#endif
}

/* method: getCaratIndex of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getCaratIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCaratIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getCaratIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCaratIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionStartIndex of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getSelectionStartIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionStartIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionStartIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionStartIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionEndIndex of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getSelectionEndIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionEndIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionEndIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionEndIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionLength of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getSelectionLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionLength'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionLength();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaskCodePoint of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getMaskCodePoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaskCodePoint'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getMaskCodePoint();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaskCodePoint'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaxTextLength of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getMaxTextLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxTextLength'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getMaxTextLength();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxTextLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalTextColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedTextColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getSelectedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getSelectedTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalSelectBrushColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getNormalSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalSelectBrushColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalSelectBrushColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getInactiveSelectBrushColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_getInactiveSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Editbox* self = (const CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInactiveSelectBrushColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getInactiveSelectBrushColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInactiveSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setReadOnly of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setReadOnly'",NULL);
#endif
 {
  self->setReadOnly(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setReadOnly'.",&tolua_err);
 return 0;
#endif
}

/* method: setTextMasked of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setTextMasked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextMasked'",NULL);
#endif
 {
  self->setTextMasked(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextMasked'.",&tolua_err);
 return 0;
#endif
}

/* method: setValidationString of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setValidationString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  string validation_string = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValidationString'",NULL);
#endif
 {
  self->setValidationString(validation_string);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValidationString'.",&tolua_err);
 return 0;
#endif
}

/* method: setCaratIndex of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setCaratIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long carat_pos = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCaratIndex'",NULL);
#endif
 {
  self->setCaratIndex(carat_pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCaratIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelection of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long start_pos = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long end_pos = ((unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelection'",NULL);
#endif
 {
  self->setSelection(start_pos,end_pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelection'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaskCodePoint of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setMaskCodePoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long code_point = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaskCodePoint'",NULL);
#endif
 {
  self->setMaskCodePoint(code_point);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaskCodePoint'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaxTextLength of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setMaxTextLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long max_len = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxTextLength'",NULL);
#endif
 {
  self->setMaxTextLength(max_len);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxTextLength'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalTextColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTextColour'",NULL);
#endif
 {
  self->setNormalTextColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectedTextColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setSelectedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTextColour'",NULL);
#endif
 {
  self->setSelectedTextColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalSelectBrushColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setNormalSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSelectBrushColour'",NULL);
#endif
 {
  self->setNormalSelectBrushColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setInactiveSelectBrushColour of class  CEGUI::Editbox */
static int tolua_CEGUI_CEGUI_Editbox_setInactiveSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Editbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Editbox* self = (CEGUI::Editbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInactiveSelectBrushColour'",NULL);
#endif
 {
  self->setInactiveSelectBrushColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInactiveSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: hasInputFocus of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_hasInputFocus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasInputFocus'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->hasInputFocus();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasInputFocus'.",&tolua_err);
 return 0;
#endif
}

/* method: isReadOnly of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_isReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isReadOnly'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isReadOnly();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isReadOnly'.",&tolua_err);
 return 0;
#endif
}

/* method: getCaratIndex of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getCaratIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCaratIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getCaratIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCaratIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionStartIndex of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectionStartIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionStartIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionStartIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionStartIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionEndIndex of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectionEndIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionEndIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionEndIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionEndIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionLength of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectionLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionLength'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionLength();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaxTextLength of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getMaxTextLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxTextLength'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getMaxTextLength();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxTextLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalTextColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedTextColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getSelectedTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalSelectBrushColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getNormalSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalSelectBrushColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalSelectBrushColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getInactiveSelectBrushColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_getInactiveSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInactiveSelectBrushColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getInactiveSelectBrushColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInactiveSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: isWordWrapped of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_isWordWrapped00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiLineEditbox* self = (const CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isWordWrapped'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isWordWrapped();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isWordWrapped'.",&tolua_err);
 return 0;
#endif
}

/* method: setReadOnly of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setReadOnly'",NULL);
#endif
 {
  self->setReadOnly(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setReadOnly'.",&tolua_err);
 return 0;
#endif
}

/* method: setCaratIndex of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setCaratIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long carat_pos = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCaratIndex'",NULL);
#endif
 {
  self->setCaratIndex(carat_pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCaratIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelection of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long start_pos = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long end_pos = ((unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelection'",NULL);
#endif
 {
  self->setSelection(start_pos,end_pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelection'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaxTextLength of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setMaxTextLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long max_len = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxTextLength'",NULL);
#endif
 {
  self->setMaxTextLength(max_len);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxTextLength'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalTextColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTextColour'",NULL);
#endif
 {
  self->setNormalTextColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectedTextColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setSelectedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTextColour'",NULL);
#endif
 {
  self->setSelectedTextColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalSelectBrushColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setNormalSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSelectBrushColour'",NULL);
#endif
 {
  self->setNormalSelectBrushColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setInactiveSelectBrushColour of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setInactiveSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::colour* col = ((const CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInactiveSelectBrushColour'",NULL);
#endif
 {
  self->setInactiveSelectBrushColour(*col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInactiveSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: ensureCaratIsVisible of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_ensureCaratIsVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ensureCaratIsVisible'",NULL);
#endif
 {
  self->ensureCaratIsVisible();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ensureCaratIsVisible'.",&tolua_err);
 return 0;
#endif
}

/* method: setWordWrapping of class  CEGUI::MultiLineEditbox */
static int tolua_CEGUI_CEGUI_MultiLineEditbox_setWordWrapping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiLineEditbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiLineEditbox* self = (CEGUI::MultiLineEditbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWordWrapping'",NULL);
#endif
 {
  self->setWordWrapping(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWordWrapping'.",&tolua_err);
 return 0;
#endif
}

/* method: getText of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getText();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}

/* method: getID of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getID'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getID();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getID'.",&tolua_err);
 return 0;
#endif
}

/* method: getUserData of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserData'",NULL);
#endif
 {
  void* tolua_ret = (void*)  self->getUserData();
 tolua_pushuserdata(tolua_S,(void*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserData'.",&tolua_err);
 return 0;
#endif
}

/* method: isSelected of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSelected();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: isDisabled of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_isDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDisabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDisabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDisabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isAutoDeleted of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_isAutoDeleted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoDeleted'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAutoDeleted();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoDeleted'.",&tolua_err);
 return 0;
#endif
}

/* method: getOwnerWindow of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getOwnerWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Window* owner = ((const CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOwnerWindow'",NULL);
#endif
 {
  const CEGUI::Window* tolua_ret = (const CEGUI::Window*)  self->getOwnerWindow(owner);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Window");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOwnerWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionColours of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getSelectionColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionColours'",NULL);
#endif
 {
  ColourRect tolua_ret = (ColourRect)  self->getSelectionColours();
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionColours'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionBrushImage of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getSelectionBrushImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionBrushImage'",NULL);
#endif
 {
  const CEGUI::Image* tolua_ret = (const CEGUI::Image*)  self->getSelectionBrushImage();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Image");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionBrushImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setText of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'",NULL);
#endif
 {
  self->setText(text);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}

/* method: setID of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  unsigned int item_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setID'",NULL);
#endif
 {
  self->setID(item_id);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setID'.",&tolua_err);
 return 0;
#endif
}

/* method: setUserData of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  void* item_data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserData'",NULL);
#endif
 {
  self->setUserData(item_data);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserData'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelected of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'",NULL);
#endif
 {
  self->setSelected(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: setDisabled of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabled'",NULL);
#endif
 {
  self->setDisabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setAutoDeleted of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setAutoDeleted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoDeleted'",NULL);
#endif
 {
  self->setAutoDeleted(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoDeleted'.",&tolua_err);
 return 0;
#endif
}

/* method: setOwnerWindow of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setOwnerWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Window* owner = ((const CEGUI::Window*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOwnerWindow'",NULL);
#endif
 {
  self->setOwnerWindow(owner);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOwnerWindow'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectionColours of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  const ColourRect* cols = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectionColours'",NULL);
#endif
 {
  self->setSelectionColours(*cols);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectionColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectionColours of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour top_left_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::colour top_right_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,3,0));
  CEGUI::colour bottom_left_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,4,0));
  CEGUI::colour bottom_right_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectionColours'",NULL);
#endif
 {
  self->setSelectionColours(top_left_colour,top_right_colour,bottom_left_colour,bottom_right_colour);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours00(tolua_S);
}

/* method: setSelectionColours of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour col = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectionColours'",NULL);
#endif
 {
  self->setSelectionColours(col);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours01(tolua_S);
}

/* method: setSelectionBrushImage of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setSelectionBrushImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Image",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Image* image = ((const CEGUI::Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectionBrushImage'",NULL);
#endif
 {
  self->setSelectionBrushImage(image);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectionBrushImage'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectionBrushImage of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_setSelectionBrushImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListboxItem* self = (CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
  string imageset = ((string)  tolua_tocppstring(tolua_S,2,0));
  string image = ((string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectionBrushImage'",NULL);
#endif
 {
  self->setSelectionBrushImage(imageset,image);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListboxItem_setSelectionBrushImage00(tolua_S);
}

/* method: getPixelSize of class  CEGUI::ListboxItem */
static int tolua_CEGUI_CEGUI_ListboxItem_getPixelSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxItem* self = (const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelSize'",NULL);
#endif
 {
  CEGUI::Size tolua_ret = (CEGUI::Size)  self->getPixelSize();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::Size(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::Size));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::Size");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelSize'.",&tolua_err);
 return 0;
#endif
}

/* method: getFont of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_getFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxTextItem* self = (const CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFont'",NULL);
#endif
 {
  const CEGUI::Font* tolua_ret = (const CEGUI::Font*)  self->getFont();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CEGUI::Font");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFont'.",&tolua_err);
 return 0;
#endif
}

/* method: getTextColours of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_getTextColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListboxTextItem* self = (const CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextColours'",NULL);
#endif
 {
  ColourRect tolua_ret = (ColourRect)  self->getTextColours();
 {
#ifdef __cplusplus
 void* tolua_obj = new ColourRect(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ColourRect));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"ColourRect");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setFont of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_setFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxTextItem* self = (CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
  string font_name = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'",NULL);
#endif
 {
  self->setFont(font_name);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFont'.",&tolua_err);
 return 0;
#endif
}

/* method: setFont of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_setFont01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::Font",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListboxTextItem* self = (CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::Font* font = ((const CEGUI::Font*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'",NULL);
#endif
 {
  self->setFont(font);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListboxTextItem_setFont00(tolua_S);
}

/* method: setTextColours of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListboxTextItem* self = (CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour top_left_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
  CEGUI::colour top_right_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,3,0));
  CEGUI::colour bottom_left_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,4,0));
  CEGUI::colour bottom_right_colour = *((CEGUI::colour*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColours'",NULL);
#endif
 {
  self->setTextColours(top_left_colour,top_right_colour,bottom_left_colour,bottom_right_colour);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextColours'.",&tolua_err);
 return 0;
#endif
}

/* method: setTextColours of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const ColourRect",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListboxTextItem* self = (CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
  const ColourRect* cols = ((const ColourRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColours'",NULL);
#endif
 {
  self->setTextColours(*cols);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours00(tolua_S);
}

/* method: setTextColours of class  CEGUI::ListboxTextItem */
static int tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListboxTextItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListboxTextItem* self = (CEGUI::ListboxTextItem*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour col = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColours'",NULL);
#endif
 {
  self->setTextColours(col);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours01(tolua_S);
}

/* method: getSingleClickEnabled of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getSingleClickEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSingleClickEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->getSingleClickEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSingleClickEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isDropDownListVisible of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isDropDownListVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDropDownListVisible'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDropDownListVisible();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDropDownListVisible'.",&tolua_err);
 return 0;
#endif
}

/* method: hasInputFocus of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_hasInputFocus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasInputFocus'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->hasInputFocus();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasInputFocus'.",&tolua_err);
 return 0;
#endif
}

/* method: isReadOnly of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isReadOnly'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isReadOnly();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isReadOnly'.",&tolua_err);
 return 0;
#endif
}

/* method: isTextValid of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isTextValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTextValid'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isTextValid();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTextValid'.",&tolua_err);
 return 0;
#endif
}

/* method: getValidationString of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getValidationString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValidationString'",NULL);
#endif
 {
  string tolua_ret = (string)  self->getValidationString();
 tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValidationString'.",&tolua_err);
 return 0;
#endif
}

/* method: getCaratIndex of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getCaratIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCaratIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getCaratIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCaratIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionStartIndex of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getSelectionStartIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionStartIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionStartIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionStartIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionEndIndex of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getSelectionEndIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionEndIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionEndIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionEndIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionLength of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getSelectionLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionLength'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectionLength();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getMaxTextLength of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getMaxTextLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxTextLength'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getMaxTextLength();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxTextLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalTextColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedTextColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getSelectedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedTextColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getSelectedTextColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getNormalSelectBrushColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getNormalSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalSelectBrushColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getNormalSelectBrushColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: getInactiveSelectBrushColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getInactiveSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInactiveSelectBrushColour'",NULL);
#endif
 {
  CEGUI::colour tolua_ret = (CEGUI::colour)  self->getInactiveSelectBrushColour();
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::colour(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::colour));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::colour");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInactiveSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalTextColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setNormalTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour col = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTextColour'",NULL);
#endif
 {
  self->setNormalTextColour(col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelectedTextColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setSelectedTextColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour col = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTextColour'",NULL);
#endif
 {
  self->setSelectedTextColour(col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTextColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setNormalSelectBrushColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setNormalSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour col = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSelectBrushColour'",NULL);
#endif
 {
  self->setNormalSelectBrushColour(col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: setInactiveSelectBrushColour of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setInactiveSelectBrushColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::colour",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::colour col = *((CEGUI::colour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInactiveSelectBrushColour'",NULL);
#endif
 {
  self->setInactiveSelectBrushColour(col);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInactiveSelectBrushColour'.",&tolua_err);
 return 0;
#endif
}

/* method: activateEditbox of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_activateEditbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'activateEditbox'",NULL);
#endif
 {
  self->activateEditbox();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'activateEditbox'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemCount of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getItemCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemCount'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getItemCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedItem of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getSelectedItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedItem'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getSelectedItem();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedItem'.",&tolua_err);
 return 0;
#endif
}

/* method: getListboxItemFromIndex of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getListboxItemFromIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getListboxItemFromIndex'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getListboxItemFromIndex(index);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getListboxItemFromIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemIndex of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_getItemIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getItemIndex(item);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: isItemSelected of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isItemSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isItemSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isItemSelected(index);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isItemSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: findItemWithText of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_findItemWithText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const String",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  const String* text = ((const String*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findItemWithText'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->findItemWithText(*text,start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findItemWithText'.",&tolua_err);
 return 0;
#endif
}

/* method: isListboxItemInList of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isListboxItemInList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isListboxItemInList'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isListboxItemInList(item);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isListboxItemInList'.",&tolua_err);
 return 0;
#endif
}

/* method: resetList of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_resetList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetList'",NULL);
#endif
 {
  self->resetList();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetList'.",&tolua_err);
 return 0;
#endif
}

/* method: addItem of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_addItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addItem'",NULL);
#endif
 {
  self->addItem(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addItem'.",&tolua_err);
 return 0;
#endif
}

/* method: insertItem of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_insertItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::ListboxItem* position = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'",NULL);
#endif
 {
  self->insertItem(item,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertItem'.",&tolua_err);
 return 0;
#endif
}

/* method: removeItem of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_removeItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeItem'",NULL);
#endif
 {
  self->removeItem(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeItem'.",&tolua_err);
 return 0;
#endif
}

/* method: clearAllSelections of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_clearAllSelections00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearAllSelections'",NULL);
#endif
 {
  self->clearAllSelections();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAllSelections'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortingEnabled of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setSortingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortingEnabled'",NULL);
#endif
 {
  self->setSortingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowVertScrollbar of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setShowVertScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowVertScrollbar'",NULL);
#endif
 {
  self->setShowVertScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowVertScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowHorzScrollbar of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setShowHorzScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowHorzScrollbar'",NULL);
#endif
 {
  self->setShowHorzScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowHorzScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: setItemSelectState of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setItemSelectState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemSelectState'",NULL);
#endif
 {
  self->setItemSelectState(item,state);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItemSelectState'.",&tolua_err);
 return 0;
#endif
}

/* method: setItemSelectState of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setItemSelectState01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long item_index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemSelectState'",NULL);
#endif
 {
  self->setItemSelectState(item_index,state);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Combobox_setItemSelectState00(tolua_S);
}

/* method: handleUpdatedListItemData of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_handleUpdatedListItemData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'handleUpdatedListItemData'",NULL);
#endif
 {
  self->handleUpdatedListItemData();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'handleUpdatedListItemData'.",&tolua_err);
 return 0;
#endif
}

/* method: isSortEnabled of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isSortEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSortEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSortEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSortEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isVertScrollbarAlwaysShown of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isVertScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVertScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: isHorzScrollbarAlwaysShown of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_isHorzScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Combobox* self = (const CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorzScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHorzScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorzScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: showDropList of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_showDropList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'showDropList'",NULL);
#endif
 {
  self->showDropList();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showDropList'.",&tolua_err);
 return 0;
#endif
}

/* method: hideDropList of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_hideDropList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hideDropList'",NULL);
#endif
 {
  self->hideDropList();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hideDropList'.",&tolua_err);
 return 0;
#endif
}

/* method: setSingleClickEnabled of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setSingleClickEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSingleClickEnabled'",NULL);
#endif
 {
  self->setSingleClickEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSingleClickEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setReadOnly of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setReadOnly'",NULL);
#endif
 {
  self->setReadOnly(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setReadOnly'.",&tolua_err);
 return 0;
#endif
}

/* method: setValidationString of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setValidationString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  string validation_string = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValidationString'",NULL);
#endif
 {
  self->setValidationString(validation_string);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValidationString'.",&tolua_err);
 return 0;
#endif
}

/* method: setCaratIndex of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setCaratIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long carat_pos = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCaratIndex'",NULL);
#endif
 {
  self->setCaratIndex(carat_pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCaratIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: setSelection of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long start_pos = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long end_pos = ((unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelection'",NULL);
#endif
 {
  self->setSelection(start_pos,end_pos);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelection'.",&tolua_err);
 return 0;
#endif
}

/* method: setMaxTextLength of class  CEGUI::Combobox */
static int tolua_CEGUI_CEGUI_Combobox_setMaxTextLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Combobox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Combobox* self = (CEGUI::Combobox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long max_len = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxTextLength'",NULL);
#endif
 {
  self->setMaxTextLength(max_len);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxTextLength'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemCount of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_getItemCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemCount'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getItemCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedCount of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_getSelectedCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedCount'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getSelectedCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getFirstSelectedItem of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_getFirstSelectedItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFirstSelectedItem'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getFirstSelectedItem();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFirstSelectedItem'.",&tolua_err);
 return 0;
#endif
}

/* method: getNextSelected of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_getNextSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNextSelected'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getNextSelected(start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNextSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: getListboxItemFromIndex of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_getListboxItemFromIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getListboxItemFromIndex'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getListboxItemFromIndex(index);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getListboxItemFromIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemIndex of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_getItemIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemIndex'",NULL);
#endif
 {
  unsigned long tolua_ret = (unsigned long)  self->getItemIndex(item);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: findItemWithText of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_findItemWithText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findItemWithText'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->findItemWithText(text,start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findItemWithText'.",&tolua_err);
 return 0;
#endif
}

/* method: isSortEnabled of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_isSortEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSortEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSortEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSortEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isMultiselectEnabled of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_isMultiselectEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMultiselectEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isMultiselectEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMultiselectEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isItemSelected of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_isItemSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isItemSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isItemSelected(index);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isItemSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: isListboxItemInList of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_isListboxItemInList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isListboxItemInList'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isListboxItemInList(item);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isListboxItemInList'.",&tolua_err);
 return 0;
#endif
}

/* method: isVertScrollbarAlwaysShown of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_isVertScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVertScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: isHorzScrollbarAlwaysShown of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_isHorzScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::Listbox* self = (const CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorzScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHorzScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorzScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: resetList of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_resetList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetList'",NULL);
#endif
 {
  self->resetList();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetList'.",&tolua_err);
 return 0;
#endif
}

/* method: addItem of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_addItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addItem'",NULL);
#endif
 {
  self->addItem(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addItem'.",&tolua_err);
 return 0;
#endif
}

/* method: insertItem of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_insertItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::ListboxItem* position = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'",NULL);
#endif
 {
  self->insertItem(item,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertItem'.",&tolua_err);
 return 0;
#endif
}

/* method: removeItem of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_removeItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeItem'",NULL);
#endif
 {
  self->removeItem(item);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeItem'.",&tolua_err);
 return 0;
#endif
}

/* method: clearAllSelections of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_clearAllSelections00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearAllSelections'",NULL);
#endif
 {
  self->clearAllSelections();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAllSelections'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortingEnabled of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_setSortingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortingEnabled'",NULL);
#endif
 {
  self->setSortingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setMultiselectEnabled of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_setMultiselectEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMultiselectEnabled'",NULL);
#endif
 {
  self->setMultiselectEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMultiselectEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowVertScrollbar of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_setShowVertScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowVertScrollbar'",NULL);
#endif
 {
  self->setShowVertScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowVertScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowHorzScrollbar of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_setShowHorzScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowHorzScrollbar'",NULL);
#endif
 {
  self->setShowHorzScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowHorzScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: setItemSelectState of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_setItemSelectState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemSelectState'",NULL);
#endif
 {
  self->setItemSelectState(item,state);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItemSelectState'.",&tolua_err);
 return 0;
#endif
}

/* method: setItemSelectState of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_setItemSelectState01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long item_index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemSelectState'",NULL);
#endif
 {
  self->setItemSelectState(item_index,state);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Listbox_setItemSelectState00(tolua_S);
}

/* method: handleUpdatedItemData of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_handleUpdatedItemData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'handleUpdatedItemData'",NULL);
#endif
 {
  self->handleUpdatedItemData();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'handleUpdatedItemData'.",&tolua_err);
 return 0;
#endif
}

/* method: ensureItemIsVisible of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_ensureItemIsVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  unsigned long item_index = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ensureItemIsVisible'",NULL);
#endif
 {
  self->ensureItemIsVisible(item_index);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ensureItemIsVisible'.",&tolua_err);
 return 0;
#endif
}

/* method: ensureItemIsVisible of class  CEGUI::Listbox */
static int tolua_CEGUI_CEGUI_Listbox_ensureItemIsVisible01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Listbox",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::Listbox* self = (CEGUI::Listbox*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ensureItemIsVisible'",NULL);
#endif
 {
  self->ensureItemIsVisible(item);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_Listbox_ensureItemIsVisible00(tolua_S);
}

/* method: setArmed of class  CEGUI::ComboDropList */
static int tolua_CEGUI_CEGUI_ComboDropList_setArmed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ComboDropList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ComboDropList* self = (CEGUI::ComboDropList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setArmed'",NULL);
#endif
 {
  self->setArmed(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setArmed'.",&tolua_err);
 return 0;
#endif
}

/* method: isArmed of class  CEGUI::ComboDropList */
static int tolua_CEGUI_CEGUI_ComboDropList_isArmed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ComboDropList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ComboDropList* self = (const CEGUI::ComboDropList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isArmed'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isArmed();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isArmed'.",&tolua_err);
 return 0;
#endif
}

/* method: setAutoArmEnabled of class  CEGUI::ComboDropList */
static int tolua_CEGUI_CEGUI_ComboDropList_setAutoArmEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ComboDropList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ComboDropList* self = (CEGUI::ComboDropList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoArmEnabled'",NULL);
#endif
 {
  self->setAutoArmEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoArmEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isAutoArmEnabled of class  CEGUI::ComboDropList */
static int tolua_CEGUI_CEGUI_ComboDropList_isAutoArmEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ComboDropList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ComboDropList* self = (const CEGUI::ComboDropList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoArmEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isAutoArmEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoArmEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isSizingEnabled of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_isSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeaderSegment* self = (const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSizingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSizingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getSortDirection of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_getSortDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeaderSegment* self = (const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortDirection'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment::SortDirection tolua_ret = (CEGUI::ListHeaderSegment::SortDirection)  self->getSortDirection();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortDirection'.",&tolua_err);
 return 0;
#endif
}

/* method: isDragMovingEnabled of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_isDragMovingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeaderSegment* self = (const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDragMovingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isDragMovingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDragMovingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getDragMoveOffset of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_getDragMoveOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeaderSegment* self = (const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDragMoveOffset'",NULL);
#endif
 {
  const CEGUI::Point& tolua_ret = (const CEGUI::Point&)  self->getDragMoveOffset();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::Point");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDragMoveOffset'.",&tolua_err);
 return 0;
#endif
}

/* method: isClickable of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_isClickable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeaderSegment* self = (const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClickable'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isClickable();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClickable'.",&tolua_err);
 return 0;
#endif
}

/* method: setSizingEnabled of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_setSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeaderSegment* self = (CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizingEnabled'",NULL);
#endif
 {
  self->setSizingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortDirection of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_setSortDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeaderSegment* self = (CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListHeaderSegment::SortDirection sort_dir = ((CEGUI::ListHeaderSegment::SortDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortDirection'",NULL);
#endif
 {
  self->setSortDirection(sort_dir);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortDirection'.",&tolua_err);
 return 0;
#endif
}

/* method: setDragMovingEnabled of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_setDragMovingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeaderSegment* self = (CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragMovingEnabled'",NULL);
#endif
 {
  self->setDragMovingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDragMovingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setClickable of class  CEGUI::ListHeaderSegment */
static int tolua_CEGUI_CEGUI_ListHeaderSegment_setClickable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeaderSegment* self = (CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClickable'",NULL);
#endif
 {
  self->setClickable(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClickable'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnCount of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getColumnCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getSegmentFromColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getSegmentFromColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSegmentFromColumn'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment& tolua_ret = (CEGUI::ListHeaderSegment&)  self->getSegmentFromColumn(column);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::ListHeaderSegment");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSegmentFromColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: getSegmentFromID of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getSegmentFromID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSegmentFromID'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment& tolua_ret = (CEGUI::ListHeaderSegment&)  self->getSegmentFromID(id);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::ListHeaderSegment");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSegmentFromID'.",&tolua_err);
 return 0;
#endif
}

/* method: getSortSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getSortSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortSegment'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment& tolua_ret = (CEGUI::ListHeaderSegment&)  self->getSortSegment();
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::ListHeaderSegment");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortSegment'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnFromSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getColumnFromSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListHeaderSegment* segment = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnFromSegment'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnFromSegment(*segment);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnFromSegment'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnFromID of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getColumnFromID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnFromID'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnFromID(id);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnFromID'.",&tolua_err);
 return 0;
#endif
}

/* method: getSortColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getSortColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortColumn'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getSortColumn();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnWithText of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getColumnWithText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnWithText'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnWithText(text);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnWithText'.",&tolua_err);
 return 0;
#endif
}

/* method: getPixelOffsetToSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getPixelOffsetToSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListHeaderSegment* segment = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelOffsetToSegment'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getPixelOffsetToSegment(*segment);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelOffsetToSegment'.",&tolua_err);
 return 0;
#endif
}

/* method: getPixelOffsetToColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getPixelOffsetToColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelOffsetToColumn'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getPixelOffsetToColumn(column);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelOffsetToColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: getTotalSegmentsPixelExtent of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getTotalSegmentsPixelExtent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTotalSegmentsPixelExtent'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getTotalSegmentsPixelExtent();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTotalSegmentsPixelExtent'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnPixelWidth of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getColumnPixelWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnPixelWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getColumnPixelWidth(column);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnPixelWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getSortDirection of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getSortDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortDirection'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment::SortDirection tolua_ret = (CEGUI::ListHeaderSegment::SortDirection)  self->getSortDirection();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortDirection'.",&tolua_err);
 return 0;
#endif
}

/* method: isSortingEnabled of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_isSortingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSortingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isSortingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSortingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isColumnSizingEnabled of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_isColumnSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isColumnSizingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isColumnSizingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isColumnSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isColumnDraggingEnabled of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_isColumnDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isColumnDraggingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isColumnDraggingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isColumnDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getSegmentOffset of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_getSegmentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::ListHeader* self = (const CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSegmentOffset'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getSegmentOffset();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSegmentOffset'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortingEnabled of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setSortingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortingEnabled'",NULL);
#endif
 {
  self->setSortingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortDirection of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setSortDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListHeaderSegment::SortDirection direction = ((CEGUI::ListHeaderSegment::SortDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortDirection'",NULL);
#endif
 {
  self->setSortDirection(direction);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortDirection'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setSortSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListHeaderSegment* segment = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortSegment'",NULL);
#endif
 {
  self->setSortSegment(*segment);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortSegment'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setSortColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortColumn'",NULL);
#endif
 {
  self->setSortColumn(column);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortColumnFromID of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setSortColumnFromID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortColumnFromID'",NULL);
#endif
 {
  self->setSortColumnFromID(id);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortColumnFromID'.",&tolua_err);
 return 0;
#endif
}

/* method: setColumnSizingEnabled of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setColumnSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumnSizingEnabled'",NULL);
#endif
 {
  self->setColumnSizingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumnSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setColumnDraggingEnabled of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setColumnDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumnDraggingEnabled'",NULL);
#endif
 {
  self->setColumnDraggingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumnDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: addColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_addColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addColumn'",NULL);
#endif
 {
  self->addColumn(text,id,width);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: insertColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_insertColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  unsigned int position = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertColumn'",NULL);
#endif
 {
  self->insertColumn(text,id,width,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: insertColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_insertColumn01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,5,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  const CEGUI::ListHeaderSegment* position = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertColumn'",NULL);
#endif
 {
  self->insertColumn(text,id,width,*position);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListHeader_insertColumn00(tolua_S);
}

/* method: removeColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_removeColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeColumn'",NULL);
#endif
 {
  self->removeColumn(column);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: removeSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_removeSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListHeaderSegment* segment = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSegment'",NULL);
#endif
 {
  self->removeSegment(*segment);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSegment'.",&tolua_err);
 return 0;
#endif
}

/* method: moveColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_moveColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int position = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveColumn'",NULL);
#endif
 {
  self->moveColumn(column,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: moveColumn of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_moveColumn01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  const CEGUI::ListHeaderSegment* position = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveColumn'",NULL);
#endif
 {
  self->moveColumn(column,*position);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListHeader_moveColumn00(tolua_S);
}

/* method: moveSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_moveSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListHeaderSegment* segment = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,2,0));
  unsigned int position = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveSegment'",NULL);
#endif
 {
  self->moveSegment(*segment,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveSegment'.",&tolua_err);
 return 0;
#endif
}

/* method: moveSegment of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_moveSegment01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListHeaderSegment",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListHeaderSegment* segment = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::ListHeaderSegment* position = ((const CEGUI::ListHeaderSegment*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveSegment'",NULL);
#endif
 {
  self->moveSegment(*segment,*position);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_ListHeader_moveSegment00(tolua_S);
}

/* method: setSegmentOffset of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setSegmentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  float offset = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSegmentOffset'",NULL);
#endif
 {
  self->setSegmentOffset(offset);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSegmentOffset'.",&tolua_err);
 return 0;
#endif
}

/* method: setColumnPixelWidth of class  CEGUI::ListHeader */
static int tolua_CEGUI_CEGUI_ListHeader_setColumnPixelWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::ListHeader",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::ListHeader* self = (CEGUI::ListHeader*)  tolua_tousertype(tolua_S,1,0);
  unsigned int column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  float width = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumnPixelWidth'",NULL);
#endif
 {
  self->setColumnPixelWidth(column,width);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumnPixelWidth'.",&tolua_err);
 return 0;
#endif
}

/* get function: row of class  CEGUI::MCLGridRef */
static int tolua_get_CEGUI__MCLGridRef_unsigned_row(lua_State* tolua_S)
{
  CEGUI::MCLGridRef* self = (CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'row'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->row);
 return 1;
}

/* set function: row of class  CEGUI::MCLGridRef */
static int tolua_set_CEGUI__MCLGridRef_unsigned_row(lua_State* tolua_S)
{
  CEGUI::MCLGridRef* self = (CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'row'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->row = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* get function: column of class  CEGUI::MCLGridRef */
static int tolua_get_CEGUI__MCLGridRef_unsigned_column(lua_State* tolua_S)
{
  CEGUI::MCLGridRef* self = (CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'column'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->column);
 return 1;
}

/* set function: column of class  CEGUI::MCLGridRef */
static int tolua_set_CEGUI__MCLGridRef_unsigned_column(lua_State* tolua_S)
{
  CEGUI::MCLGridRef* self = (CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'column'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->column = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
 return 0;
}

/* method: operator== of class  CEGUI::MCLGridRef */
static int tolua_CEGUI_CEGUI_MCLGridRef__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MCLGridRef* self = (const CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::MCLGridRef* rhs = ((const CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->operator==(*rhs);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}

/* method: new of class  CEGUI::MCLGridRef */
static int tolua_CEGUI_CEGUI_MCLGridRef_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  unsigned int r = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int c = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::MCLGridRef* tolua_ret = (CEGUI::MCLGridRef*)  new CEGUI::MCLGridRef(r,c);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::MCLGridRef");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: new_local of class  CEGUI::MCLGridRef */
static int tolua_CEGUI_CEGUI_MCLGridRef_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  unsigned int r = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int c = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
 {
  CEGUI::MCLGridRef* tolua_ret = (CEGUI::MCLGridRef*)  new CEGUI::MCLGridRef(r,c);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CEGUI::MCLGridRef");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}

/* method: isUserSortControlEnabled of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isUserSortControlEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUserSortControlEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isUserSortControlEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUserSortControlEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isUserColumnSizingEnabled of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isUserColumnSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUserColumnSizingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isUserColumnSizingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUserColumnSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: isUserColumnDraggingEnabled of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isUserColumnDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUserColumnDraggingEnabled'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isUserColumnDraggingEnabled();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUserColumnDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnCount of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getColumnCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getRowCount of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getRowCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRowCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getRowCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRowCount'.",&tolua_err);
 return 0;
#endif
}

/* method: getSortColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getSortColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortColumn'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getSortColumn();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnWithID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getColumnWithID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnWithID'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnWithID(col_id);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnWithID'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnWithHeaderText of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getColumnWithHeaderText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnWithHeaderText'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnWithHeaderText(text);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnWithHeaderText'.",&tolua_err);
 return 0;
#endif
}

/* method: getTotalColumnHeadersWidth of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getTotalColumnHeadersWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTotalColumnHeadersWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getTotalColumnHeadersWidth();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTotalColumnHeadersWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnHeaderWidth of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getColumnHeaderWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnHeaderWidth'",NULL);
#endif
 {
  float tolua_ret = (float)  self->getColumnHeaderWidth(col_idx);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnHeaderWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: getSortDirection of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getSortDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSortDirection'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment::SortDirection tolua_ret = (CEGUI::ListHeaderSegment::SortDirection)  self->getSortDirection();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSortDirection'.",&tolua_err);
 return 0;
#endif
}

/* method: getHeaderSegmentForColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getHeaderSegmentForColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeaderSegmentForColumn'",NULL);
#endif
 {
  CEGUI::ListHeaderSegment& tolua_ret = (CEGUI::ListHeaderSegment&)  self->getHeaderSegmentForColumn(col_idx);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CEGUI::ListHeaderSegment");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeaderSegmentForColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemRowIndex of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getItemRowIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemRowIndex'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getItemRowIndex(item);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemRowIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemColumnIndex of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getItemColumnIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemColumnIndex'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getItemColumnIndex(item);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemColumnIndex'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemGridReference of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getItemGridReference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemGridReference'",NULL);
#endif
 {
  CEGUI::MCLGridRef tolua_ret = (CEGUI::MCLGridRef)  self->getItemGridReference(item);
 {
#ifdef __cplusplus
 void* tolua_obj = new CEGUI::MCLGridRef(tolua_ret);
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::MCLGridRef");
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CEGUI::MCLGridRef));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"CEGUI::MCLGridRef");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemGridReference'.",&tolua_err);
 return 0;
#endif
}

/* method: getItemAtGridReference of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getItemAtGridReference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::MCLGridRef* grid_ref = ((const CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemAtGridReference'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getItemAtGridReference(*grid_ref);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemAtGridReference'.",&tolua_err);
 return 0;
#endif
}

/* method: isListboxItemInColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isListboxItemInColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isListboxItemInColumn'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isListboxItemInColumn(item,col_idx);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isListboxItemInColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: isListboxItemInRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isListboxItemInRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isListboxItemInRow'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isListboxItemInRow(item,row_idx);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isListboxItemInRow'.",&tolua_err);
 return 0;
#endif
}

/* method: isListboxItemInList of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isListboxItemInList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isListboxItemInList'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isListboxItemInList(item);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isListboxItemInList'.",&tolua_err);
 return 0;
#endif
}

/* method: findColumnItemWithText of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_findColumnItemWithText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findColumnItemWithText'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->findColumnItemWithText(text,col_idx,start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findColumnItemWithText'.",&tolua_err);
 return 0;
#endif
}

/* method: findRowItemWithText of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_findRowItemWithText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findRowItemWithText'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->findRowItemWithText(text,row_idx,start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findRowItemWithText'.",&tolua_err);
 return 0;
#endif
}

/* method: findListItemWithText of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_findListItemWithText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findListItemWithText'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->findListItemWithText(text,start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findListItemWithText'.",&tolua_err);
 return 0;
#endif
}

/* method: getFirstSelectedItem of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getFirstSelectedItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFirstSelectedItem'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getFirstSelectedItem();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFirstSelectedItem'.",&tolua_err);
 return 0;
#endif
}

/* method: getNextSelected of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getNextSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::ListboxItem* start_item = ((const CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNextSelected'",NULL);
#endif
 {
  CEGUI::ListboxItem* tolua_ret = (CEGUI::ListboxItem*)  self->getNextSelected(start_item);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNextSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectedCount of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getSelectedCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedCount'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getSelectedCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedCount'.",&tolua_err);
 return 0;
#endif
}

/* method: isItemSelected of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isItemSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::MCLGridRef* grid_ref = ((const CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isItemSelected'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isItemSelected(*grid_ref);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isItemSelected'.",&tolua_err);
 return 0;
#endif
}

/* method: getNominatedSelectionColumnID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getNominatedSelectionColumnID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNominatedSelectionColumnID'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getNominatedSelectionColumnID();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNominatedSelectionColumnID'.",&tolua_err);
 return 0;
#endif
}

/* method: getNominatedSelectionColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getNominatedSelectionColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNominatedSelectionColumn'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getNominatedSelectionColumn();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNominatedSelectionColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: getNominatedSelectionRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getNominatedSelectionRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNominatedSelectionRow'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getNominatedSelectionRow();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNominatedSelectionRow'.",&tolua_err);
 return 0;
#endif
}

/* method: getSelectionMode of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getSelectionMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectionMode'",NULL);
#endif
 {
  CEGUI::MultiColumnList::SelectionMode tolua_ret = (CEGUI::MultiColumnList::SelectionMode)  self->getSelectionMode();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectionMode'.",&tolua_err);
 return 0;
#endif
}

/* method: isVertScrollbarAlwaysShown of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isVertScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isVertScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: isHorzScrollbarAlwaysShown of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_isHorzScrollbarAlwaysShown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorzScrollbarAlwaysShown'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isHorzScrollbarAlwaysShown();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorzScrollbarAlwaysShown'.",&tolua_err);
 return 0;
#endif
}

/* method: getColumnID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_getColumnID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::MultiColumnList* self = (const CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumnID'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->getColumnID(col_idx);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumnID'.",&tolua_err);
 return 0;
#endif
}

/* method: resetList of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_resetList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetList'",NULL);
#endif
 {
  self->resetList();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetList'.",&tolua_err);
 return 0;
#endif
}

/* method: addColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_addColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addColumn'",NULL);
#endif
 {
  self->addColumn(text,col_id,width);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: insertColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_insertColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  string text = ((string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  unsigned int position = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertColumn'",NULL);
#endif
 {
  self->insertColumn(text,col_id,width,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: removeColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_removeColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeColumn'",NULL);
#endif
 {
  self->removeColumn(col_idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: removeColumnWithID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_removeColumnWithID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeColumnWithID'",NULL);
#endif
 {
  self->removeColumnWithID(col_id);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeColumnWithID'.",&tolua_err);
 return 0;
#endif
}

/* method: moveColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_moveColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int position = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveColumn'",NULL);
#endif
 {
  self->moveColumn(col_idx,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: moveColumnWithID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_moveColumnWithID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int position = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveColumnWithID'",NULL);
#endif
 {
  self->moveColumnWithID(col_id,position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveColumnWithID'.",&tolua_err);
 return 0;
#endif
}

/* method: addRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_addRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRow'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->addRow();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRow'.",&tolua_err);
 return 0;
#endif
}

/* method: addRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_addRow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRow'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->addRow(item,col_id);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_MultiColumnList_addRow00(tolua_S);
}

/* method: insertRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_insertRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertRow'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->insertRow(row_idx);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertRow'.",&tolua_err);
 return 0;
#endif
}

/* method: insertRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_insertRow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertRow'",NULL);
#endif
 {
  unsigned int tolua_ret = (unsigned int)  self->insertRow(item,col_id,row_idx);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
tolua_lerror:
 return tolua_CEGUI_CEGUI_MultiColumnList_insertRow00(tolua_S);
}

/* method: removeRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_removeRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeRow'",NULL);
#endif
 {
  self->removeRow(row_idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeRow'.",&tolua_err);
 return 0;
#endif
}

/* method: setItem of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"const CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  const CEGUI::MCLGridRef* position = ((const CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItem'",NULL);
#endif
 {
  self->setItem(item,*position);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItem'.",&tolua_err);
 return 0;
#endif
}

/* method: setItem of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setItem01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItem'",NULL);
#endif
 {
  self->setItem(item,col_id,row_idx);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_MultiColumnList_setItem00(tolua_S);
}

/* method: setSelectionMode of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setSelectionMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::MultiColumnList::SelectionMode sel_mode = ((CEGUI::MultiColumnList::SelectionMode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectionMode'",NULL);
#endif
 {
  self->setSelectionMode(sel_mode);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectionMode'.",&tolua_err);
 return 0;
#endif
}

/* method: setNominatedSelectionColumnID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setNominatedSelectionColumnID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNominatedSelectionColumnID'",NULL);
#endif
 {
  self->setNominatedSelectionColumnID(col_id);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNominatedSelectionColumnID'.",&tolua_err);
 return 0;
#endif
}

/* method: setNominatedSelectionColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setNominatedSelectionColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNominatedSelectionColumn'",NULL);
#endif
 {
  self->setNominatedSelectionColumn(col_idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNominatedSelectionColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: setNominatedSelectionRow of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setNominatedSelectionRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int row_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNominatedSelectionRow'",NULL);
#endif
 {
  self->setNominatedSelectionRow(row_idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNominatedSelectionRow'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortDirection of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setSortDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListHeaderSegment::SortDirection direction = ((CEGUI::ListHeaderSegment::SortDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortDirection'",NULL);
#endif
 {
  self->setSortDirection(direction);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortDirection'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortColumn of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setSortColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortColumn'",NULL);
#endif
 {
  self->setSortColumn(col_idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortColumn'.",&tolua_err);
 return 0;
#endif
}

/* method: setSortColumnByID of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setSortColumnByID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSortColumnByID'",NULL);
#endif
 {
  self->setSortColumnByID(col_id);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSortColumnByID'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowVertScrollbar of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setShowVertScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowVertScrollbar'",NULL);
#endif
 {
  self->setShowVertScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowVertScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: setShowHorzScrollbar of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setShowHorzScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowHorzScrollbar'",NULL);
#endif
 {
  self->setShowHorzScrollbar(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowHorzScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* method: clearAllSelections of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_clearAllSelections00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearAllSelections'",NULL);
#endif
 {
  self->clearAllSelections();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAllSelections'.",&tolua_err);
 return 0;
#endif
}

/* method: setItemSelectState of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setItemSelectState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CEGUI::ListboxItem",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  CEGUI::ListboxItem* item = ((CEGUI::ListboxItem*)  tolua_tousertype(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemSelectState'",NULL);
#endif
 {
  self->setItemSelectState(item,state);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItemSelectState'.",&tolua_err);
 return 0;
#endif
}

/* method: setItemSelectState of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setItemSelectState01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"const CEGUI::MCLGridRef",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  const CEGUI::MCLGridRef* grid_ref = ((const CEGUI::MCLGridRef*)  tolua_tousertype(tolua_S,2,0));
  bool state = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemSelectState'",NULL);
#endif
 {
  self->setItemSelectState(*grid_ref,state);
 }
 }
 return 0;
tolua_lerror:
 return tolua_CEGUI_CEGUI_MultiColumnList_setItemSelectState00(tolua_S);
}

/* method: handleUpdatedItemData of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_handleUpdatedItemData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'handleUpdatedItemData'",NULL);
#endif
 {
  self->handleUpdatedItemData();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'handleUpdatedItemData'.",&tolua_err);
 return 0;
#endif
}

/* method: setColumnHeaderWidth of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setColumnHeaderWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  float width = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumnHeaderWidth'",NULL);
#endif
 {
  self->setColumnHeaderWidth(col_idx,width);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumnHeaderWidth'.",&tolua_err);
 return 0;
#endif
}

/* method: setUserSortControlEnabled of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setUserSortControlEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserSortControlEnabled'",NULL);
#endif
 {
  self->setUserSortControlEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserSortControlEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setUserColumnSizingEnabled of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setUserColumnSizingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserColumnSizingEnabled'",NULL);
#endif
 {
  self->setUserColumnSizingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserColumnSizingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: setUserColumnDraggingEnabled of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_setUserColumnDraggingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  bool setting = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserColumnDraggingEnabled'",NULL);
#endif
 {
  self->setUserColumnDraggingEnabled(setting);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserColumnDraggingEnabled'.",&tolua_err);
 return 0;
#endif
}

/* method: autoSizeColumnHeader of class  CEGUI::MultiColumnList */
static int tolua_CEGUI_CEGUI_MultiColumnList_autoSizeColumnHeader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::MultiColumnList",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::MultiColumnList* self = (CEGUI::MultiColumnList*)  tolua_tousertype(tolua_S,1,0);
  unsigned int col_idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'autoSizeColumnHeader'",NULL);
#endif
 {
  self->autoSizeColumnHeader(col_idx);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'autoSizeColumnHeader'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toMouseCursorEventArgs */
static int tolua_CEGUI_CEGUI_toMouseCursorEventArgs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::EventArgs* e = ((const CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0));
 {
  const CEGUI::MouseCursorEventArgs& tolua_ret = (const CEGUI::MouseCursorEventArgs&)  CEGUI::ceguiLua_toMouseCursorEventArgs(*e);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::MouseCursorEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toMouseCursorEventArgs'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toWindowEventArgs */
static int tolua_CEGUI_CEGUI_toWindowEventArgs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::EventArgs* e = ((const CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0));
 {
  const CEGUI::WindowEventArgs& tolua_ret = (const CEGUI::WindowEventArgs&)  CEGUI::ceguiLua_toWindowEventArgs(*e);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::WindowEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toWindowEventArgs'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toActivationEventArgs */
static int tolua_CEGUI_CEGUI_toActivationEventArgs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::EventArgs* e = ((const CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0));
 {
  const CEGUI::ActivationEventArgs& tolua_ret = (const CEGUI::ActivationEventArgs&)  CEGUI::ceguiLua_toActivationEventArgs(*e);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::ActivationEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toActivationEventArgs'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toHeaderSequenceEventArgs */
static int tolua_CEGUI_CEGUI_toHeaderSequenceEventArgs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::EventArgs* e = ((const CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0));
 {
  const CEGUI::HeaderSequenceEventArgs& tolua_ret = (const CEGUI::HeaderSequenceEventArgs&)  CEGUI::ceguiLua_toHeaderSequenceEventArgs(*e);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::HeaderSequenceEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toHeaderSequenceEventArgs'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toMouseEventArgs */
static int tolua_CEGUI_CEGUI_toMouseEventArgs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const CEGUI::EventArgs",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const CEGUI::EventArgs* e = ((const CEGUI::EventArgs*)  tolua_tousertype(tolua_S,1,0));
 {
  const CEGUI::MouseEventArgs& tolua_ret = (const CEGUI::MouseEventArgs&)  CEGUI::ceguiLua_toMouseEventArgs(*e);
 tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CEGUI::MouseEventArgs");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toMouseEventArgs'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toButtonBase */
static int tolua_CEGUI_CEGUI_toButtonBase00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ButtonBase* tolua_ret = (CEGUI::ButtonBase*)  CEGUI::ceguiLua_toButtonBase(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ButtonBase");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toButtonBase'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toCheckbox */
static int tolua_CEGUI_CEGUI_toCheckbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Checkbox* tolua_ret = (CEGUI::Checkbox*)  CEGUI::ceguiLua_toCheckbox(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Checkbox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toCheckbox'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toCombobox */
static int tolua_CEGUI_CEGUI_toCombobox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Combobox* tolua_ret = (CEGUI::Combobox*)  CEGUI::ceguiLua_toCombobox(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Combobox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toCombobox'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toComboDropList */
static int tolua_CEGUI_CEGUI_toComboDropList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ComboDropList* tolua_ret = (CEGUI::ComboDropList*)  CEGUI::ceguiLua_toComboDropList(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ComboDropList");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toComboDropList'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toDragContainer */
static int tolua_CEGUI_CEGUI_toDragContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::DragContainer* tolua_ret = (CEGUI::DragContainer*)  CEGUI::ceguiLua_toDragContainer(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::DragContainer");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toDragContainer'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toEditbox */
static int tolua_CEGUI_CEGUI_toEditbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Editbox* tolua_ret = (CEGUI::Editbox*)  CEGUI::ceguiLua_toEditbox(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Editbox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toEditbox'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toFrameWindow */
static int tolua_CEGUI_CEGUI_toFrameWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::FrameWindow* tolua_ret = (CEGUI::FrameWindow*)  CEGUI::ceguiLua_toFrameWindow(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::FrameWindow");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toFrameWindow'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toGUISheet */
static int tolua_CEGUI_CEGUI_toGUISheet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::GUISheet* tolua_ret = (CEGUI::GUISheet*)  CEGUI::ceguiLua_toGUISheet(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::GUISheet");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toGUISheet'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toListbox */
static int tolua_CEGUI_CEGUI_toListbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Listbox* tolua_ret = (CEGUI::Listbox*)  CEGUI::ceguiLua_toListbox(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Listbox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toListbox'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toListHeader */
static int tolua_CEGUI_CEGUI_toListHeader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ListHeader* tolua_ret = (CEGUI::ListHeader*)  CEGUI::ceguiLua_toListHeader(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListHeader");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toListHeader'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toListHeaderSegment */
static int tolua_CEGUI_CEGUI_toListHeaderSegment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ListHeaderSegment* tolua_ret = (CEGUI::ListHeaderSegment*)  CEGUI::ceguiLua_toListHeaderSegment(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListHeaderSegment");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toListHeaderSegment'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toMultiColumnList */
static int tolua_CEGUI_CEGUI_toMultiColumnList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::MultiColumnList* tolua_ret = (CEGUI::MultiColumnList*)  CEGUI::ceguiLua_toMultiColumnList(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::MultiColumnList");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toMultiColumnList'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toMultiLineEditbox */
static int tolua_CEGUI_CEGUI_toMultiLineEditbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::MultiLineEditbox* tolua_ret = (CEGUI::MultiLineEditbox*)  CEGUI::ceguiLua_toMultiLineEditbox(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::MultiLineEditbox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toMultiLineEditbox'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toProgressBar */
static int tolua_CEGUI_CEGUI_toProgressBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ProgressBar* tolua_ret = (CEGUI::ProgressBar*)  CEGUI::ceguiLua_toProgressBar(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ProgressBar");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toProgressBar'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toPushButton */
static int tolua_CEGUI_CEGUI_toPushButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::PushButton* tolua_ret = (CEGUI::PushButton*)  CEGUI::ceguiLua_toPushButton(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::PushButton");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toPushButton'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toRadioButton */
static int tolua_CEGUI_CEGUI_toRadioButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::RadioButton* tolua_ret = (CEGUI::RadioButton*)  CEGUI::ceguiLua_toRadioButton(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::RadioButton");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toRadioButton'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toScrollablePane */
static int tolua_CEGUI_CEGUI_toScrollablePane00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ScrollablePane* tolua_ret = (CEGUI::ScrollablePane*)  CEGUI::ceguiLua_toScrollablePane(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ScrollablePane");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toScrollablePane'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toScrollbar */
static int tolua_CEGUI_CEGUI_toScrollbar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Scrollbar* tolua_ret = (CEGUI::Scrollbar*)  CEGUI::ceguiLua_toScrollbar(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Scrollbar");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toScrollbar'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toScrolledContainer */
static int tolua_CEGUI_CEGUI_toScrolledContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::ScrolledContainer* tolua_ret = (CEGUI::ScrolledContainer*)  CEGUI::ceguiLua_toScrolledContainer(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ScrolledContainer");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toScrolledContainer'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toSlider */
static int tolua_CEGUI_CEGUI_toSlider00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Slider* tolua_ret = (CEGUI::Slider*)  CEGUI::ceguiLua_toSlider(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Slider");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toSlider'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toSpinner */
static int tolua_CEGUI_CEGUI_toSpinner00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Spinner* tolua_ret = (CEGUI::Spinner*)  CEGUI::ceguiLua_toSpinner(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Spinner");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toSpinner'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toStatic */
static int tolua_CEGUI_CEGUI_toStatic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Static* tolua_ret = (CEGUI::Static*)  CEGUI::ceguiLua_toStatic(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Static");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toStatic'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toStaticImage */
static int tolua_CEGUI_CEGUI_toStaticImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::StaticImage* tolua_ret = (CEGUI::StaticImage*)  CEGUI::ceguiLua_toStaticImage(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::StaticImage");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toStaticImage'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toStaticText */
static int tolua_CEGUI_CEGUI_toStaticText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::StaticText* tolua_ret = (CEGUI::StaticText*)  CEGUI::ceguiLua_toStaticText(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::StaticText");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toStaticText'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toTabButton */
static int tolua_CEGUI_CEGUI_toTabButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::TabButton* tolua_ret = (CEGUI::TabButton*)  CEGUI::ceguiLua_toTabButton(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::TabButton");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toTabButton'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toTabControl */
static int tolua_CEGUI_CEGUI_toTabControl00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::TabControl* tolua_ret = (CEGUI::TabControl*)  CEGUI::ceguiLua_toTabControl(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::TabControl");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toTabControl'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toTabPane */
static int tolua_CEGUI_CEGUI_toTabPane00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::TabPane* tolua_ret = (CEGUI::TabPane*)  CEGUI::ceguiLua_toTabPane(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::TabPane");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toTabPane'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toThumb */
static int tolua_CEGUI_CEGUI_toThumb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Thumb* tolua_ret = (CEGUI::Thumb*)  CEGUI::ceguiLua_toThumb(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Thumb");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toThumb'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_toTooltip */
static int tolua_CEGUI_CEGUI_toTooltip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CEGUI::Window",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CEGUI::Window* w = ((CEGUI::Window*)  tolua_tousertype(tolua_S,1,0));
 {
  CEGUI::Tooltip* tolua_ret = (CEGUI::Tooltip*)  CEGUI::ceguiLua_toTooltip(w);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::Tooltip");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toTooltip'.",&tolua_err);
 return 0;
#endif
}

/* function: CEGUI::ceguiLua_createListboxTextItem */
static int tolua_CEGUI_CEGUI_createListboxTextItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isuserdata(tolua_S,3,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  string text = ((string)  tolua_tocppstring(tolua_S,1,0));
  unsigned int item_id = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  void* item_data = ((void*)  tolua_touserdata(tolua_S,3,NULL));
  bool disabled = ((bool)  tolua_toboolean(tolua_S,4,false));
  bool auto_delete = ((bool)  tolua_toboolean(tolua_S,5,true));
 {
  CEGUI::ListboxTextItem* tolua_ret = (CEGUI::ListboxTextItem*)  CEGUI::ceguiLua_createListboxTextItem(text,item_id,item_data,disabled,auto_delete);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CEGUI::ListboxTextItem");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createListboxTextItem'.",&tolua_err);
 return 0;
#endif
}

/* Open function */
TOLUA_API int tolua_CEGUI_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_module(tolua_S,"CEGUI",0);
 tolua_beginmodule(tolua_S,"CEGUI");
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Vector2","CEGUI::Vector2","",tolua_collect_CEGUI__Vector2);
#else
 tolua_cclass(tolua_S,"Vector2","CEGUI::Vector2","",NULL);
#endif
 tolua_beginmodule(tolua_S,"Vector2");
 tolua_variable(tolua_S,"x",tolua_get_CEGUI__Vector2_x,tolua_set_CEGUI__Vector2_x);
 tolua_variable(tolua_S,"y",tolua_get_CEGUI__Vector2_y,tolua_set_CEGUI__Vector2_y);
 tolua_function(tolua_S,".add",tolua_CEGUI_CEGUI_Vector2__add00);
 tolua_function(tolua_S,".sub",tolua_CEGUI_CEGUI_Vector2__sub00);
 tolua_function(tolua_S,".mul",tolua_CEGUI_CEGUI_Vector2__mul00);
 tolua_function(tolua_S,".eq",tolua_CEGUI_CEGUI_Vector2__eq00);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Vector2_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Vector2_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Vector2_new00_local, "CEGUI::Vector2");
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Vector2_new01);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Vector2_new01_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Vector2_new01_local, "CEGUI::Vector2");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Point","CEGUI::Point","",tolua_collect_CEGUI__Point);
#else
 tolua_cclass(tolua_S,"Point","CEGUI::Point","",NULL);
#endif
 tolua_beginmodule(tolua_S,"Point");
 tolua_variable(tolua_S,"x",tolua_get_CEGUI__Point_x,tolua_set_CEGUI__Point_x);
 tolua_variable(tolua_S,"y",tolua_get_CEGUI__Point_y,tolua_set_CEGUI__Point_y);
 tolua_function(tolua_S,".add",tolua_CEGUI_CEGUI_Point__add00);
 tolua_function(tolua_S,".sub",tolua_CEGUI_CEGUI_Point__sub00);
 tolua_function(tolua_S,".mul",tolua_CEGUI_CEGUI_Point__mul00);
 tolua_function(tolua_S,".eq",tolua_CEGUI_CEGUI_Point__eq00);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Point_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Point_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Point_new00_local, "CEGUI::Point");
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Point_new01);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Point_new01_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Point_new01_local, "CEGUI::Point");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Size","CEGUI::Size","",tolua_collect_CEGUI__Size);
#else
 tolua_cclass(tolua_S,"Size","CEGUI::Size","",NULL);
#endif
 tolua_beginmodule(tolua_S,"Size");
 tolua_variable(tolua_S,"width",tolua_get_CEGUI__Size_width,tolua_set_CEGUI__Size_width);
 tolua_variable(tolua_S,"height",tolua_get_CEGUI__Size_height,tolua_set_CEGUI__Size_height);
 tolua_function(tolua_S,".eq",tolua_CEGUI_CEGUI_Size__eq00);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Size_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Size_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Size_new00_local, "CEGUI::Size");
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Size_new01);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Size_new01_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Size_new01_local, "CEGUI::Size");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Rect","CEGUI::Rect","",tolua_collect_CEGUI__Rect);
#else
 tolua_cclass(tolua_S,"Rect","CEGUI::Rect","",NULL);
#endif
 tolua_beginmodule(tolua_S,"Rect");
 tolua_variable(tolua_S,"top",tolua_get_CEGUI__Rect_top,tolua_set_CEGUI__Rect_top);
 tolua_variable(tolua_S,"bottom",tolua_get_CEGUI__Rect_bottom,tolua_set_CEGUI__Rect_bottom);
 tolua_variable(tolua_S,"left",tolua_get_CEGUI__Rect_left,tolua_set_CEGUI__Rect_left);
 tolua_variable(tolua_S,"right",tolua_get_CEGUI__Rect_right,tolua_set_CEGUI__Rect_right);
 tolua_function(tolua_S,"getPosition",tolua_CEGUI_CEGUI_Rect_getPosition00);
 tolua_function(tolua_S,"getWidth",tolua_CEGUI_CEGUI_Rect_getWidth00);
 tolua_function(tolua_S,"getHeight",tolua_CEGUI_CEGUI_Rect_getHeight00);
 tolua_function(tolua_S,"getSize",tolua_CEGUI_CEGUI_Rect_getSize00);
 tolua_function(tolua_S,"getIntersection",tolua_CEGUI_CEGUI_Rect_getIntersection00);
 tolua_function(tolua_S,"isPointInRect",tolua_CEGUI_CEGUI_Rect_isPointInRect00);
 tolua_function(tolua_S,"setPosition",tolua_CEGUI_CEGUI_Rect_setPosition00);
 tolua_function(tolua_S,"setWidth",tolua_CEGUI_CEGUI_Rect_setWidth00);
 tolua_function(tolua_S,"setHeight",tolua_CEGUI_CEGUI_Rect_setHeight00);
 tolua_function(tolua_S,"setSize",tolua_CEGUI_CEGUI_Rect_setSize00);
 tolua_function(tolua_S,"offset",tolua_CEGUI_CEGUI_Rect_offset00);
 tolua_function(tolua_S,"constrainSizeMax",tolua_CEGUI_CEGUI_Rect_constrainSizeMax00);
 tolua_function(tolua_S,"constrainSizeMin",tolua_CEGUI_CEGUI_Rect_constrainSizeMin00);
 tolua_function(tolua_S,"constrainSize",tolua_CEGUI_CEGUI_Rect_constrainSize00);
 tolua_function(tolua_S,".eq",tolua_CEGUI_CEGUI_Rect__eq00);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Rect_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Rect_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Rect_new00_local, "CEGUI::Rect");
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_Rect_new01);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_Rect_new01_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_Rect_new01_local, "CEGUI::Rect");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"colour","CEGUI::colour","",tolua_collect_CEGUI__colour);
#else
 tolua_cclass(tolua_S,"colour","CEGUI::colour","",NULL);
#endif
 tolua_beginmodule(tolua_S,"colour");
 tolua_function(tolua_S,"getAlpha",tolua_CEGUI_CEGUI_colour_getAlpha00);
 tolua_function(tolua_S,"getRed",tolua_CEGUI_CEGUI_colour_getRed00);
 tolua_function(tolua_S,"getGreen",tolua_CEGUI_CEGUI_colour_getGreen00);
 tolua_function(tolua_S,"getBlue",tolua_CEGUI_CEGUI_colour_getBlue00);
 tolua_function(tolua_S,"getHue",tolua_CEGUI_CEGUI_colour_getHue00);
 tolua_function(tolua_S,"getSaturation",tolua_CEGUI_CEGUI_colour_getSaturation00);
 tolua_function(tolua_S,"getLumination",tolua_CEGUI_CEGUI_colour_getLumination00);
 tolua_function(tolua_S,"set",tolua_CEGUI_CEGUI_colour_set00);
 tolua_function(tolua_S,"setAlpha",tolua_CEGUI_CEGUI_colour_setAlpha00);
 tolua_function(tolua_S,"setRed",tolua_CEGUI_CEGUI_colour_setRed00);
 tolua_function(tolua_S,"setGreen",tolua_CEGUI_CEGUI_colour_setGreen00);
 tolua_function(tolua_S,"setBlue",tolua_CEGUI_CEGUI_colour_setBlue00);
 tolua_function(tolua_S,"setRGB",tolua_CEGUI_CEGUI_colour_setRGB00);
 tolua_function(tolua_S,"setHSL",tolua_CEGUI_CEGUI_colour_setHSL00);
 tolua_function(tolua_S,".add",tolua_CEGUI_CEGUI_colour__add00);
 tolua_function(tolua_S,".sub",tolua_CEGUI_CEGUI_colour__sub00);
 tolua_function(tolua_S,".eq",tolua_CEGUI_CEGUI_colour__eq00);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_colour_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_colour_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_colour_new00_local, "CEGUI::colour");
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_colour_new01);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_colour_new01_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_colour_new01_local, "CEGUI::colour");
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"Errors",CEGUI::Errors);
 tolua_constant(tolua_S,"Standard",CEGUI::Standard);
 tolua_constant(tolua_S,"Informative",CEGUI::Informative);
 tolua_constant(tolua_S,"Insane",CEGUI::Insane);
 tolua_cclass(tolua_S,"Logger","CEGUI::Logger","",NULL);
 tolua_beginmodule(tolua_S,"Logger");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_Logger_getSingleton00);
 tolua_function(tolua_S,"setLoggingLevel",tolua_CEGUI_CEGUI_Logger_setLoggingLevel00);
 tolua_function(tolua_S,"getLoggingLevel",tolua_CEGUI_CEGUI_Logger_getLoggingLevel00);
 tolua_function(tolua_S,"logEvent",tolua_CEGUI_CEGUI_Logger_logEvent00);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"LeftAligned",CEGUI::LeftAligned);
 tolua_constant(tolua_S,"RightAligned",CEGUI::RightAligned);
 tolua_constant(tolua_S,"Centred",CEGUI::Centred);
 tolua_constant(tolua_S,"Justified",CEGUI::Justified);
 tolua_constant(tolua_S,"WordWrapLeftAligned",CEGUI::WordWrapLeftAligned);
 tolua_constant(tolua_S,"WordWrapRightAligned",CEGUI::WordWrapRightAligned);
 tolua_constant(tolua_S,"WordWrapCentred",CEGUI::WordWrapCentred);
 tolua_constant(tolua_S,"WordWrapJustified",CEGUI::WordWrapJustified);
 tolua_cclass(tolua_S,"Font","CEGUI::Font","",NULL);
 tolua_beginmodule(tolua_S,"Font");
 tolua_function(tolua_S,"getName",tolua_CEGUI_CEGUI_Font_getName00);
 tolua_function(tolua_S,"defineFontGlyphs",tolua_CEGUI_CEGUI_Font_defineFontGlyphs00);
 tolua_function(tolua_S,"defineFontGlyphs",tolua_CEGUI_CEGUI_Font_defineFontGlyphs01);
 tolua_function(tolua_S,"isCodepointAvailable",tolua_CEGUI_CEGUI_Font_isCodepointAvailable00);
 tolua_function(tolua_S,"getAvailableGlyphs",tolua_CEGUI_CEGUI_Font_getAvailableGlyphs00);
 tolua_function(tolua_S,"getPointSize",tolua_CEGUI_CEGUI_Font_getPointSize00);
 tolua_function(tolua_S,"setNativeResolution",tolua_CEGUI_CEGUI_Font_setNativeResolution00);
 tolua_function(tolua_S,"getNativeResolution",tolua_CEGUI_CEGUI_Font_getNativeResolution00);
 tolua_function(tolua_S,"notifyScreenResolution",tolua_CEGUI_CEGUI_Font_notifyScreenResolution00);
 tolua_function(tolua_S,"setAutoScalingEnabled",tolua_CEGUI_CEGUI_Font_setAutoScalingEnabled00);
 tolua_function(tolua_S,"isAutoScaled",tolua_CEGUI_CEGUI_Font_isAutoScaled00);
 tolua_function(tolua_S,"setAntiAliased",tolua_CEGUI_CEGUI_Font_setAntiAliased00);
 tolua_function(tolua_S,"isAntiAliased",tolua_CEGUI_CEGUI_Font_isAntiAliased00);
 tolua_function(tolua_S,"getTextExtent",tolua_CEGUI_CEGUI_Font_getTextExtent00);
 tolua_function(tolua_S,"getLineSpacing",tolua_CEGUI_CEGUI_Font_getLineSpacing00);
 tolua_function(tolua_S,"getFontHeight",tolua_CEGUI_CEGUI_Font_getFontHeight00);
 tolua_function(tolua_S,"getCharAtPixel",tolua_CEGUI_CEGUI_Font_getCharAtPixel00);
 tolua_function(tolua_S,"getCharAtPixel",tolua_CEGUI_CEGUI_Font_getCharAtPixel01);
 tolua_function(tolua_S,"getFormattedLineCount",tolua_CEGUI_CEGUI_Font_getFormattedLineCount00);
 tolua_function(tolua_S,"getFormattedTextExtent",tolua_CEGUI_CEGUI_Font_getFormattedTextExtent00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"FontManager","CEGUI::FontManager","",NULL);
 tolua_beginmodule(tolua_S,"FontManager");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_FontManager_getSingleton00);
 tolua_function(tolua_S,"createFont",tolua_CEGUI_CEGUI_FontManager_createFont00);
 tolua_function(tolua_S,"createFont",tolua_CEGUI_CEGUI_FontManager_createFont01);
 tolua_function(tolua_S,"destroyFont",tolua_CEGUI_CEGUI_FontManager_destroyFont00);
 tolua_function(tolua_S,"destroyFont",tolua_CEGUI_CEGUI_FontManager_destroyFont01);
 tolua_function(tolua_S,"destroyAllFonts",tolua_CEGUI_CEGUI_FontManager_destroyAllFonts00);
 tolua_function(tolua_S,"isFontPresent",tolua_CEGUI_CEGUI_FontManager_isFontPresent00);
 tolua_function(tolua_S,"getFont",tolua_CEGUI_CEGUI_FontManager_getFont00);
 tolua_function(tolua_S,"notifyScreenResolution",tolua_CEGUI_CEGUI_FontManager_notifyScreenResolution00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Image","CEGUI::Image","",NULL);
 tolua_beginmodule(tolua_S,"Image");
 tolua_function(tolua_S,"getSize",tolua_CEGUI_CEGUI_Image_getSize00);
 tolua_function(tolua_S,"getWidth",tolua_CEGUI_CEGUI_Image_getWidth00);
 tolua_function(tolua_S,"getHeight",tolua_CEGUI_CEGUI_Image_getHeight00);
 tolua_function(tolua_S,"getOffsets",tolua_CEGUI_CEGUI_Image_getOffsets00);
 tolua_function(tolua_S,"getOffsetX",tolua_CEGUI_CEGUI_Image_getOffsetX00);
 tolua_function(tolua_S,"getOffsetY",tolua_CEGUI_CEGUI_Image_getOffsetY00);
 tolua_function(tolua_S,"getName",tolua_CEGUI_CEGUI_Image_getName00);
 tolua_function(tolua_S,"getImagesetName",tolua_CEGUI_CEGUI_Image_getImagesetName00);
 tolua_function(tolua_S,"getSourceTextureArea",tolua_CEGUI_CEGUI_Image_getSourceTextureArea00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Texture","CEGUI::Texture","",NULL);
 tolua_beginmodule(tolua_S,"Texture");
 tolua_function(tolua_S,"getWidth",tolua_CEGUI_CEGUI_Texture_getWidth00);
 tolua_function(tolua_S,"getHeight",tolua_CEGUI_CEGUI_Texture_getHeight00);
 tolua_function(tolua_S,"loadFromFile",tolua_CEGUI_CEGUI_Texture_loadFromFile00);
 tolua_function(tolua_S,"getRenderer",tolua_CEGUI_CEGUI_Texture_getRenderer00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Imageset","CEGUI::Imageset","",NULL);
 tolua_beginmodule(tolua_S,"Imageset");
 tolua_function(tolua_S,"getTexture",tolua_CEGUI_CEGUI_Imageset_getTexture00);
 tolua_function(tolua_S,"getName",tolua_CEGUI_CEGUI_Imageset_getName00);
 tolua_function(tolua_S,"getImageCount",tolua_CEGUI_CEGUI_Imageset_getImageCount00);
 tolua_function(tolua_S,"isImageDefined",tolua_CEGUI_CEGUI_Imageset_isImageDefined00);
 tolua_function(tolua_S,"getImage",tolua_CEGUI_CEGUI_Imageset_getImage00);
 tolua_function(tolua_S,"undefineImage",tolua_CEGUI_CEGUI_Imageset_undefineImage00);
 tolua_function(tolua_S,"undefineAllImages",tolua_CEGUI_CEGUI_Imageset_undefineAllImages00);
 tolua_function(tolua_S,"getImageSize",tolua_CEGUI_CEGUI_Imageset_getImageSize00);
 tolua_function(tolua_S,"getImageWidth",tolua_CEGUI_CEGUI_Imageset_getImageWidth00);
 tolua_function(tolua_S,"getImageHeight",tolua_CEGUI_CEGUI_Imageset_getImageHeight00);
 tolua_function(tolua_S,"getImageOffset",tolua_CEGUI_CEGUI_Imageset_getImageOffset00);
 tolua_function(tolua_S,"getImageOffsetX",tolua_CEGUI_CEGUI_Imageset_getImageOffsetX00);
 tolua_function(tolua_S,"getImageOffsetY",tolua_CEGUI_CEGUI_Imageset_getImageOffsetY00);
 tolua_function(tolua_S,"defineImage",tolua_CEGUI_CEGUI_Imageset_defineImage00);
 tolua_function(tolua_S,"defineImage",tolua_CEGUI_CEGUI_Imageset_defineImage01);
 tolua_function(tolua_S,"isAutoScaled",tolua_CEGUI_CEGUI_Imageset_isAutoScaled00);
 tolua_function(tolua_S,"setAutoScalingEnabled",tolua_CEGUI_CEGUI_Imageset_setAutoScalingEnabled00);
 tolua_function(tolua_S,"getNativeResolution",tolua_CEGUI_CEGUI_Imageset_getNativeResolution00);
 tolua_function(tolua_S,"setNativeResolution",tolua_CEGUI_CEGUI_Imageset_setNativeResolution00);
 tolua_function(tolua_S,"notifyScreenResolution",tolua_CEGUI_CEGUI_Imageset_notifyScreenResolution00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ImagesetManager","CEGUI::ImagesetManager","",NULL);
 tolua_beginmodule(tolua_S,"ImagesetManager");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_ImagesetManager_getSingleton00);
 tolua_function(tolua_S,"createImageset",tolua_CEGUI_CEGUI_ImagesetManager_createImageset00);
 tolua_function(tolua_S,"createImageset",tolua_CEGUI_CEGUI_ImagesetManager_createImageset01);
 tolua_function(tolua_S,"destroyImageset",tolua_CEGUI_CEGUI_ImagesetManager_destroyImageset00);
 tolua_function(tolua_S,"destroyImageset",tolua_CEGUI_CEGUI_ImagesetManager_destroyImageset01);
 tolua_function(tolua_S,"destroyAllImagesets",tolua_CEGUI_CEGUI_ImagesetManager_destroyAllImagesets00);
 tolua_function(tolua_S,"getImageset",tolua_CEGUI_CEGUI_ImagesetManager_getImageset00);
 tolua_function(tolua_S,"isImagesetPresent",tolua_CEGUI_CEGUI_ImagesetManager_isImagesetPresent00);
 tolua_function(tolua_S,"notifyScreenResolution",tolua_CEGUI_CEGUI_ImagesetManager_notifyScreenResolution00);
 tolua_endmodule(tolua_S);
 tolua_module(tolua_S,"Key",0);
 tolua_beginmodule(tolua_S,"Key");
 tolua_constant(tolua_S,"Escape",CEGUI::Key::Escape);
 tolua_constant(tolua_S,"One",CEGUI::Key::One);
 tolua_constant(tolua_S,"Two",CEGUI::Key::Two);
 tolua_constant(tolua_S,"Three",CEGUI::Key::Three);
 tolua_constant(tolua_S,"Four",CEGUI::Key::Four);
 tolua_constant(tolua_S,"Five",CEGUI::Key::Five);
 tolua_constant(tolua_S,"Six",CEGUI::Key::Six);
 tolua_constant(tolua_S,"Seven",CEGUI::Key::Seven);
 tolua_constant(tolua_S,"Eight",CEGUI::Key::Eight);
 tolua_constant(tolua_S,"Nine",CEGUI::Key::Nine);
 tolua_constant(tolua_S,"Zero",CEGUI::Key::Zero);
 tolua_constant(tolua_S,"Minus",CEGUI::Key::Minus);
 tolua_constant(tolua_S,"Equals",CEGUI::Key::Equals);
 tolua_constant(tolua_S,"Backspace",CEGUI::Key::Backspace);
 tolua_constant(tolua_S,"Tab",CEGUI::Key::Tab);
 tolua_constant(tolua_S,"Q",CEGUI::Key::Q);
 tolua_constant(tolua_S,"W",CEGUI::Key::W);
 tolua_constant(tolua_S,"E",CEGUI::Key::E);
 tolua_constant(tolua_S,"R",CEGUI::Key::R);
 tolua_constant(tolua_S,"T",CEGUI::Key::T);
 tolua_constant(tolua_S,"Y",CEGUI::Key::Y);
 tolua_constant(tolua_S,"U",CEGUI::Key::U);
 tolua_constant(tolua_S,"I",CEGUI::Key::I);
 tolua_constant(tolua_S,"O",CEGUI::Key::O);
 tolua_constant(tolua_S,"P",CEGUI::Key::P);
 tolua_constant(tolua_S,"LeftBracket",CEGUI::Key::LeftBracket);
 tolua_constant(tolua_S,"RightBracket",CEGUI::Key::RightBracket);
 tolua_constant(tolua_S,"Return",CEGUI::Key::Return);
 tolua_constant(tolua_S,"LeftControl",CEGUI::Key::LeftControl);
 tolua_constant(tolua_S,"A",CEGUI::Key::A);
 tolua_constant(tolua_S,"S",CEGUI::Key::S);
 tolua_constant(tolua_S,"D",CEGUI::Key::D);
 tolua_constant(tolua_S,"F",CEGUI::Key::F);
 tolua_constant(tolua_S,"G",CEGUI::Key::G);
 tolua_constant(tolua_S,"H",CEGUI::Key::H);
 tolua_constant(tolua_S,"J",CEGUI::Key::J);
 tolua_constant(tolua_S,"K",CEGUI::Key::K);
 tolua_constant(tolua_S,"L",CEGUI::Key::L);
 tolua_constant(tolua_S,"Semicolon",CEGUI::Key::Semicolon);
 tolua_constant(tolua_S,"Apostrophe",CEGUI::Key::Apostrophe);
 tolua_constant(tolua_S,"Grave",CEGUI::Key::Grave);
 tolua_constant(tolua_S,"LeftShift",CEGUI::Key::LeftShift);
 tolua_constant(tolua_S,"Backslash",CEGUI::Key::Backslash);
 tolua_constant(tolua_S,"Z",CEGUI::Key::Z);
 tolua_constant(tolua_S,"X",CEGUI::Key::X);
 tolua_constant(tolua_S,"C",CEGUI::Key::C);
 tolua_constant(tolua_S,"V",CEGUI::Key::V);
 tolua_constant(tolua_S,"B",CEGUI::Key::B);
 tolua_constant(tolua_S,"N",CEGUI::Key::N);
 tolua_constant(tolua_S,"M",CEGUI::Key::M);
 tolua_constant(tolua_S,"Comma",CEGUI::Key::Comma);
 tolua_constant(tolua_S,"Period",CEGUI::Key::Period);
 tolua_constant(tolua_S,"Slash",CEGUI::Key::Slash);
 tolua_constant(tolua_S,"RightShift",CEGUI::Key::RightShift);
 tolua_constant(tolua_S,"Multiply",CEGUI::Key::Multiply);
 tolua_constant(tolua_S,"LeftAlt",CEGUI::Key::LeftAlt);
 tolua_constant(tolua_S,"Space",CEGUI::Key::Space);
 tolua_constant(tolua_S,"Capital",CEGUI::Key::Capital);
 tolua_constant(tolua_S,"F1",CEGUI::Key::F1);
 tolua_constant(tolua_S,"F2",CEGUI::Key::F2);
 tolua_constant(tolua_S,"F3",CEGUI::Key::F3);
 tolua_constant(tolua_S,"F4",CEGUI::Key::F4);
 tolua_constant(tolua_S,"F5",CEGUI::Key::F5);
 tolua_constant(tolua_S,"F6",CEGUI::Key::F6);
 tolua_constant(tolua_S,"F7",CEGUI::Key::F7);
 tolua_constant(tolua_S,"F8",CEGUI::Key::F8);
 tolua_constant(tolua_S,"F9",CEGUI::Key::F9);
 tolua_constant(tolua_S,"F10",CEGUI::Key::F10);
 tolua_constant(tolua_S,"NumLock",CEGUI::Key::NumLock);
 tolua_constant(tolua_S,"ScrollLock",CEGUI::Key::ScrollLock);
 tolua_constant(tolua_S,"Numpad7",CEGUI::Key::Numpad7);
 tolua_constant(tolua_S,"Numpad8",CEGUI::Key::Numpad8);
 tolua_constant(tolua_S,"Numpad9",CEGUI::Key::Numpad9);
 tolua_constant(tolua_S,"Subtract",CEGUI::Key::Subtract);
 tolua_constant(tolua_S,"Numpad4",CEGUI::Key::Numpad4);
 tolua_constant(tolua_S,"Numpad5",CEGUI::Key::Numpad5);
 tolua_constant(tolua_S,"Numpad6",CEGUI::Key::Numpad6);
 tolua_constant(tolua_S,"Add",CEGUI::Key::Add);
 tolua_constant(tolua_S,"Numpad1",CEGUI::Key::Numpad1);
 tolua_constant(tolua_S,"Numpad2",CEGUI::Key::Numpad2);
 tolua_constant(tolua_S,"Numpad3",CEGUI::Key::Numpad3);
 tolua_constant(tolua_S,"Numpad0",CEGUI::Key::Numpad0);
 tolua_constant(tolua_S,"Decimal",CEGUI::Key::Decimal);
 tolua_constant(tolua_S,"OEM_102",CEGUI::Key::OEM_102);
 tolua_constant(tolua_S,"F11",CEGUI::Key::F11);
 tolua_constant(tolua_S,"F12",CEGUI::Key::F12);
 tolua_constant(tolua_S,"F13",CEGUI::Key::F13);
 tolua_constant(tolua_S,"F14",CEGUI::Key::F14);
 tolua_constant(tolua_S,"F15",CEGUI::Key::F15);
 tolua_constant(tolua_S,"Kana",CEGUI::Key::Kana);
 tolua_constant(tolua_S,"ABNT_C1",CEGUI::Key::ABNT_C1);
 tolua_constant(tolua_S,"Convert",CEGUI::Key::Convert);
 tolua_constant(tolua_S,"NoConvert",CEGUI::Key::NoConvert);
 tolua_constant(tolua_S,"Yen",CEGUI::Key::Yen);
 tolua_constant(tolua_S,"ABNT_C2",CEGUI::Key::ABNT_C2);
 tolua_constant(tolua_S,"NumpadEquals",CEGUI::Key::NumpadEquals);
 tolua_constant(tolua_S,"PrevTrack",CEGUI::Key::PrevTrack);
 tolua_constant(tolua_S,"At",CEGUI::Key::At);
 tolua_constant(tolua_S,"Colon",CEGUI::Key::Colon);
 tolua_constant(tolua_S,"Underline",CEGUI::Key::Underline);
 tolua_constant(tolua_S,"Kanji",CEGUI::Key::Kanji);
 tolua_constant(tolua_S,"Stop",CEGUI::Key::Stop);
 tolua_constant(tolua_S,"AX",CEGUI::Key::AX);
 tolua_constant(tolua_S,"Unlabeled",CEGUI::Key::Unlabeled);
 tolua_constant(tolua_S,"NextTrack",CEGUI::Key::NextTrack);
 tolua_constant(tolua_S,"NumpadEnter",CEGUI::Key::NumpadEnter);
 tolua_constant(tolua_S,"RightControl",CEGUI::Key::RightControl);
 tolua_constant(tolua_S,"Mute",CEGUI::Key::Mute);
 tolua_constant(tolua_S,"Calculator",CEGUI::Key::Calculator);
 tolua_constant(tolua_S,"PlayPause",CEGUI::Key::PlayPause);
 tolua_constant(tolua_S,"MediaStop",CEGUI::Key::MediaStop);
 tolua_constant(tolua_S,"VolumeDown",CEGUI::Key::VolumeDown);
 tolua_constant(tolua_S,"VolumeUp",CEGUI::Key::VolumeUp);
 tolua_constant(tolua_S,"WebHome",CEGUI::Key::WebHome);
 tolua_constant(tolua_S,"NumpadComma",CEGUI::Key::NumpadComma);
 tolua_constant(tolua_S,"Divide",CEGUI::Key::Divide);
 tolua_constant(tolua_S,"SysRq",CEGUI::Key::SysRq);
 tolua_constant(tolua_S,"RightAlt",CEGUI::Key::RightAlt);
 tolua_constant(tolua_S,"Pause",CEGUI::Key::Pause);
 tolua_constant(tolua_S,"Home",CEGUI::Key::Home);
 tolua_constant(tolua_S,"ArrowUp",CEGUI::Key::ArrowUp);
 tolua_constant(tolua_S,"PageUp",CEGUI::Key::PageUp);
 tolua_constant(tolua_S,"ArrowLeft",CEGUI::Key::ArrowLeft);
 tolua_constant(tolua_S,"ArrowRight",CEGUI::Key::ArrowRight);
 tolua_constant(tolua_S,"End",CEGUI::Key::End);
 tolua_constant(tolua_S,"ArrowDown",CEGUI::Key::ArrowDown);
 tolua_constant(tolua_S,"PageDown",CEGUI::Key::PageDown);
 tolua_constant(tolua_S,"Insert",CEGUI::Key::Insert);
 tolua_constant(tolua_S,"Delete",CEGUI::Key::Delete);
 tolua_constant(tolua_S,"LeftWindows",CEGUI::Key::LeftWindows);
 tolua_constant(tolua_S,"RightWindow",CEGUI::Key::RightWindow);
 tolua_constant(tolua_S,"AppMenu",CEGUI::Key::AppMenu);
 tolua_constant(tolua_S,"Power",CEGUI::Key::Power);
 tolua_constant(tolua_S,"Sleep",CEGUI::Key::Sleep);
 tolua_constant(tolua_S,"Wake",CEGUI::Key::Wake);
 tolua_constant(tolua_S,"WebSearch",CEGUI::Key::WebSearch);
 tolua_constant(tolua_S,"WebFavorites",CEGUI::Key::WebFavorites);
 tolua_constant(tolua_S,"WebRefresh",CEGUI::Key::WebRefresh);
 tolua_constant(tolua_S,"WebStop",CEGUI::Key::WebStop);
 tolua_constant(tolua_S,"WebForward",CEGUI::Key::WebForward);
 tolua_constant(tolua_S,"WebBack",CEGUI::Key::WebBack);
 tolua_constant(tolua_S,"MyComputer",CEGUI::Key::MyComputer);
 tolua_constant(tolua_S,"Mail",CEGUI::Key::Mail);
 tolua_constant(tolua_S,"MediaSelect",CEGUI::Key::MediaSelect);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"LeftMouse",CEGUI::LeftMouse);
 tolua_constant(tolua_S,"RightMouse",CEGUI::RightMouse);
 tolua_constant(tolua_S,"Shift",CEGUI::Shift);
 tolua_constant(tolua_S,"Control",CEGUI::Control);
 tolua_constant(tolua_S,"MiddleMouse",CEGUI::MiddleMouse);
 tolua_constant(tolua_S,"X1Mouse",CEGUI::X1Mouse);
 tolua_constant(tolua_S,"X2Mouse",CEGUI::X2Mouse);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"EventArgs","CEGUI::EventArgs","",tolua_collect_CEGUI__EventArgs);
#else
 tolua_cclass(tolua_S,"EventArgs","CEGUI::EventArgs","",NULL);
#endif
 tolua_beginmodule(tolua_S,"EventArgs");
 tolua_variable(tolua_S,"handled",tolua_get_CEGUI__EventArgs_handled,tolua_set_CEGUI__EventArgs_handled);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_EventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_EventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_EventArgs_new00_local, "CEGUI::EventArgs");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"MouseCursorEventArgs","CEGUI::MouseCursorEventArgs","CEGUI::EventArgs",tolua_collect_CEGUI__MouseCursorEventArgs);
#else
 tolua_cclass(tolua_S,"MouseCursorEventArgs","CEGUI::MouseCursorEventArgs","CEGUI::EventArgs",NULL);
#endif
 tolua_beginmodule(tolua_S,"MouseCursorEventArgs");
 tolua_variable(tolua_S,"mouseCursor",tolua_get_CEGUI__MouseCursorEventArgs_mouseCursor_ptr,tolua_set_CEGUI__MouseCursorEventArgs_mouseCursor_ptr);
 tolua_variable(tolua_S,"image",tolua_get_CEGUI__MouseCursorEventArgs_image_ptr,NULL);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_MouseCursorEventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_MouseCursorEventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_MouseCursorEventArgs_new00_local, "CEGUI::MouseCursorEventArgs");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"WindowEventArgs","CEGUI::WindowEventArgs","CEGUI::EventArgs",tolua_collect_CEGUI__WindowEventArgs);
#else
 tolua_cclass(tolua_S,"WindowEventArgs","CEGUI::WindowEventArgs","CEGUI::EventArgs",NULL);
#endif
 tolua_beginmodule(tolua_S,"WindowEventArgs");
 tolua_variable(tolua_S,"window",tolua_get_CEGUI__WindowEventArgs_window_ptr,tolua_set_CEGUI__WindowEventArgs_window_ptr);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_WindowEventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_WindowEventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_WindowEventArgs_new00_local, "CEGUI::WindowEventArgs");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"ActivationEventArgs","CEGUI::ActivationEventArgs","CEGUI::WindowEventArgs",tolua_collect_CEGUI__ActivationEventArgs);
#else
 tolua_cclass(tolua_S,"ActivationEventArgs","CEGUI::ActivationEventArgs","CEGUI::WindowEventArgs",NULL);
#endif
 tolua_beginmodule(tolua_S,"ActivationEventArgs");
 tolua_variable(tolua_S,"otherWindow",tolua_get_CEGUI__ActivationEventArgs_otherWindow_ptr,tolua_set_CEGUI__ActivationEventArgs_otherWindow_ptr);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_ActivationEventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_ActivationEventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_ActivationEventArgs_new00_local, "CEGUI::ActivationEventArgs");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"HeaderSequenceEventArgs","CEGUI::HeaderSequenceEventArgs","CEGUI::WindowEventArgs",tolua_collect_CEGUI__HeaderSequenceEventArgs);
#else
 tolua_cclass(tolua_S,"HeaderSequenceEventArgs","CEGUI::HeaderSequenceEventArgs","CEGUI::WindowEventArgs",NULL);
#endif
 tolua_beginmodule(tolua_S,"HeaderSequenceEventArgs");
 tolua_variable(tolua_S,"oldIdx",tolua_get_CEGUI__HeaderSequenceEventArgs_unsigned_oldIdx,tolua_set_CEGUI__HeaderSequenceEventArgs_unsigned_oldIdx);
 tolua_variable(tolua_S,"newIdx",tolua_get_CEGUI__HeaderSequenceEventArgs_unsigned_newIdx,tolua_set_CEGUI__HeaderSequenceEventArgs_unsigned_newIdx);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_HeaderSequenceEventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_HeaderSequenceEventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_HeaderSequenceEventArgs_new00_local, "CEGUI::HeaderSequenceEventArgs");
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"LeftButton",CEGUI::LeftButton);
 tolua_constant(tolua_S,"RightButton",CEGUI::RightButton);
 tolua_constant(tolua_S,"MiddleButton",CEGUI::MiddleButton);
 tolua_constant(tolua_S,"X1Button",CEGUI::X1Button);
 tolua_constant(tolua_S,"X2Button",CEGUI::X2Button);
 tolua_constant(tolua_S,"MouseButtonCount",CEGUI::MouseButtonCount);
 tolua_constant(tolua_S,"NoButton",CEGUI::NoButton);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"MouseEventArgs","CEGUI::MouseEventArgs","CEGUI::WindowEventArgs",tolua_collect_CEGUI__MouseEventArgs);
#else
 tolua_cclass(tolua_S,"MouseEventArgs","CEGUI::MouseEventArgs","CEGUI::WindowEventArgs",NULL);
#endif
 tolua_beginmodule(tolua_S,"MouseEventArgs");
 tolua_variable(tolua_S,"position",tolua_get_CEGUI__MouseEventArgs_position,tolua_set_CEGUI__MouseEventArgs_position);
 tolua_variable(tolua_S,"moveDelta",tolua_get_CEGUI__MouseEventArgs_moveDelta,tolua_set_CEGUI__MouseEventArgs_moveDelta);
 tolua_variable(tolua_S,"button",tolua_get_CEGUI__MouseEventArgs_button,tolua_set_CEGUI__MouseEventArgs_button);
 tolua_variable(tolua_S,"sysKeys",tolua_get_CEGUI__MouseEventArgs_unsigned_sysKeys,tolua_set_CEGUI__MouseEventArgs_unsigned_sysKeys);
 tolua_variable(tolua_S,"wheelChange",tolua_get_CEGUI__MouseEventArgs_wheelChange,tolua_set_CEGUI__MouseEventArgs_wheelChange);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_MouseEventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_MouseEventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_MouseEventArgs_new00_local, "CEGUI::MouseEventArgs");
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"KeyEventArgs","CEGUI::KeyEventArgs","CEGUI::WindowEventArgs",tolua_collect_CEGUI__KeyEventArgs);
#else
 tolua_cclass(tolua_S,"KeyEventArgs","CEGUI::KeyEventArgs","CEGUI::WindowEventArgs",NULL);
#endif
 tolua_beginmodule(tolua_S,"KeyEventArgs");
 tolua_variable(tolua_S,"codepoint",tolua_get_CEGUI__KeyEventArgs_unsigned_codepoint,tolua_set_CEGUI__KeyEventArgs_unsigned_codepoint);
 tolua_variable(tolua_S,"scancode",tolua_get_CEGUI__KeyEventArgs_scancode,tolua_set_CEGUI__KeyEventArgs_scancode);
 tolua_variable(tolua_S,"sysKeys",tolua_get_CEGUI__KeyEventArgs_unsigned_sysKeys,tolua_set_CEGUI__KeyEventArgs_unsigned_sysKeys);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_KeyEventArgs_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_KeyEventArgs_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_KeyEventArgs_new00_local, "CEGUI::KeyEventArgs");
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"EventSet","CEGUI::EventSet","",NULL);
 tolua_beginmodule(tolua_S,"EventSet");
 tolua_function(tolua_S,"addEvent",tolua_CEGUI_CEGUI_EventSet_addEvent00);
 tolua_function(tolua_S,"removeEvent",tolua_CEGUI_CEGUI_EventSet_removeEvent00);
 tolua_function(tolua_S,"removeAllEvents",tolua_CEGUI_CEGUI_EventSet_removeAllEvents00);
 tolua_function(tolua_S,"isEventPresent",tolua_CEGUI_CEGUI_EventSet_isEventPresent00);
 tolua_function(tolua_S,"subscribeEvent",tolua_CEGUI_CEGUI_EventSet_subscribeEvent00);
 tolua_function(tolua_S,"fireEvent",tolua_CEGUI_CEGUI_EventSet_fireEvent00);
 tolua_function(tolua_S,"isMuted",tolua_CEGUI_CEGUI_EventSet_isMuted00);
 tolua_function(tolua_S,"setMutedState",tolua_CEGUI_CEGUI_EventSet_setMutedState00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"GlobalEventSet","CEGUI::GlobalEventSet","CEGUI::EventSet",NULL);
 tolua_beginmodule(tolua_S,"GlobalEventSet");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_GlobalEventSet_getSingleton00);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"BlankMouseCursor",CEGUI::BlankMouseCursor);
 tolua_constant(tolua_S,"DefaultMouseCursor",CEGUI::DefaultMouseCursor);
 tolua_cclass(tolua_S,"MouseCursor","CEGUI::MouseCursor","CEGUI::EventSet",NULL);
 tolua_beginmodule(tolua_S,"MouseCursor");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_MouseCursor_getSingleton00);
 tolua_function(tolua_S,"setImage",tolua_CEGUI_CEGUI_MouseCursor_setImage00);
 tolua_function(tolua_S,"setImage",tolua_CEGUI_CEGUI_MouseCursor_setImage01);
 tolua_function(tolua_S,"getImage",tolua_CEGUI_CEGUI_MouseCursor_getImage00);
 tolua_function(tolua_S,"setPosition",tolua_CEGUI_CEGUI_MouseCursor_setPosition00);
 tolua_function(tolua_S,"offsetPosition",tolua_CEGUI_CEGUI_MouseCursor_offsetPosition00);
 tolua_function(tolua_S,"setConstraintArea",tolua_CEGUI_CEGUI_MouseCursor_setConstraintArea00);
 tolua_function(tolua_S,"getPosition",tolua_CEGUI_CEGUI_MouseCursor_getPosition00);
 tolua_function(tolua_S,"getConstraintArea",tolua_CEGUI_CEGUI_MouseCursor_getConstraintArea00);
 tolua_function(tolua_S,"getDisplayIndependantPosition",tolua_CEGUI_CEGUI_MouseCursor_getDisplayIndependantPosition00);
 tolua_function(tolua_S,"hide",tolua_CEGUI_CEGUI_MouseCursor_hide00);
 tolua_function(tolua_S,"show",tolua_CEGUI_CEGUI_MouseCursor_show00);
 tolua_function(tolua_S,"isVisible",tolua_CEGUI_CEGUI_MouseCursor_isVisible00);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"Relative",CEGUI::Relative);
 tolua_constant(tolua_S,"Absolute",CEGUI::Absolute);
 tolua_constant(tolua_S,"Inherited",CEGUI::Inherited);
 tolua_cclass(tolua_S,"Window","CEGUI::Window","",NULL);
 tolua_beginmodule(tolua_S,"Window");
 tolua_function(tolua_S,"getType",tolua_CEGUI_CEGUI_Window_getType00);
 tolua_function(tolua_S,"getName",tolua_CEGUI_CEGUI_Window_getName00);
 tolua_function(tolua_S,"isDestroyedByParent",tolua_CEGUI_CEGUI_Window_isDestroyedByParent00);
 tolua_function(tolua_S,"isAlwaysOnTop",tolua_CEGUI_CEGUI_Window_isAlwaysOnTop00);
 tolua_function(tolua_S,"isDisabled",tolua_CEGUI_CEGUI_Window_isDisabled00);
 tolua_function(tolua_S,"isVisible",tolua_CEGUI_CEGUI_Window_isVisible00);
 tolua_function(tolua_S,"isActive",tolua_CEGUI_CEGUI_Window_isActive00);
 tolua_function(tolua_S,"isClippedByParent",tolua_CEGUI_CEGUI_Window_isClippedByParent00);
 tolua_function(tolua_S,"setDestroyedByParent",tolua_CEGUI_CEGUI_Window_setDestroyedByParent00);
 tolua_function(tolua_S,"setAlwaysOnTop",tolua_CEGUI_CEGUI_Window_setAlwaysOnTop00);
 tolua_function(tolua_S,"setEnabled",tolua_CEGUI_CEGUI_Window_setEnabled00);
 tolua_function(tolua_S,"enable",tolua_CEGUI_CEGUI_Window_enable00);
 tolua_function(tolua_S,"disable",tolua_CEGUI_CEGUI_Window_disable00);
 tolua_function(tolua_S,"setVisible",tolua_CEGUI_CEGUI_Window_setVisible00);
 tolua_function(tolua_S,"show",tolua_CEGUI_CEGUI_Window_show00);
 tolua_function(tolua_S,"hide",tolua_CEGUI_CEGUI_Window_hide00);
 tolua_function(tolua_S,"activate",tolua_CEGUI_CEGUI_Window_activate00);
 tolua_function(tolua_S,"deactivate",tolua_CEGUI_CEGUI_Window_deactivate00);
 tolua_function(tolua_S,"setClippedByParent",tolua_CEGUI_CEGUI_Window_setClippedByParent00);
 tolua_function(tolua_S,"getID",tolua_CEGUI_CEGUI_Window_getID00);
 tolua_function(tolua_S,"setID",tolua_CEGUI_CEGUI_Window_setID00);
 tolua_function(tolua_S,"getChildCount",tolua_CEGUI_CEGUI_Window_getChildCount00);
 tolua_function(tolua_S,"isChild",tolua_CEGUI_CEGUI_Window_isChild00);
 tolua_function(tolua_S,"isChild",tolua_CEGUI_CEGUI_Window_isChild01);
 tolua_function(tolua_S,"isChild",tolua_CEGUI_CEGUI_Window_isChild02);
 tolua_function(tolua_S,"addChildWindow",tolua_CEGUI_CEGUI_Window_addChildWindow00);
 tolua_function(tolua_S,"addChildWindow",tolua_CEGUI_CEGUI_Window_addChildWindow01);
 tolua_function(tolua_S,"removeChildWindow",tolua_CEGUI_CEGUI_Window_removeChildWindow00);
 tolua_function(tolua_S,"removeChildWindow",tolua_CEGUI_CEGUI_Window_removeChildWindow01);
 tolua_function(tolua_S,"removeChildWindow",tolua_CEGUI_CEGUI_Window_removeChildWindow02);
 tolua_function(tolua_S,"getChild",tolua_CEGUI_CEGUI_Window_getChild00);
 tolua_function(tolua_S,"getChild",tolua_CEGUI_CEGUI_Window_getChild01);
 tolua_function(tolua_S,"getChildAtIdx",tolua_CEGUI_CEGUI_Window_getChildAtIdx00);
 tolua_function(tolua_S,"getActiveChild",tolua_CEGUI_CEGUI_Window_getActiveChild00);
 tolua_function(tolua_S,"getChildAtPosition",tolua_CEGUI_CEGUI_Window_getChildAtPosition00);
 tolua_function(tolua_S,"getParent",tolua_CEGUI_CEGUI_Window_getParent00);
 tolua_function(tolua_S,"isAncestor",tolua_CEGUI_CEGUI_Window_isAncestor00);
 tolua_function(tolua_S,"isAncestor",tolua_CEGUI_CEGUI_Window_isAncestor01);
 tolua_function(tolua_S,"isAncestor",tolua_CEGUI_CEGUI_Window_isAncestor02);
 tolua_function(tolua_S,"setFont",tolua_CEGUI_CEGUI_Window_setFont00);
 tolua_function(tolua_S,"setFont",tolua_CEGUI_CEGUI_Window_setFont01);
 tolua_function(tolua_S,"getFont",tolua_CEGUI_CEGUI_Window_getFont00);
 tolua_function(tolua_S,"setText",tolua_CEGUI_CEGUI_Window_setText00);
 tolua_function(tolua_S,"getText",tolua_CEGUI_CEGUI_Window_getText00);
 tolua_function(tolua_S,"inheritsAlpha",tolua_CEGUI_CEGUI_Window_inheritsAlpha00);
 tolua_function(tolua_S,"getAlpha",tolua_CEGUI_CEGUI_Window_getAlpha00);
 tolua_function(tolua_S,"getEffectiveAlpha",tolua_CEGUI_CEGUI_Window_getEffectiveAlpha00);
 tolua_function(tolua_S,"setAlpha",tolua_CEGUI_CEGUI_Window_setAlpha00);
 tolua_function(tolua_S,"setInheritsAlpha",tolua_CEGUI_CEGUI_Window_setInheritsAlpha00);
 tolua_function(tolua_S,"requestRedraw",tolua_CEGUI_CEGUI_Window_requestRedraw00);
 tolua_function(tolua_S,"isZOrderingEnabled",tolua_CEGUI_CEGUI_Window_isZOrderingEnabled00);
 tolua_function(tolua_S,"setZOrderingEnabled",tolua_CEGUI_CEGUI_Window_setZOrderingEnabled00);
 tolua_function(tolua_S,"getRect",tolua_CEGUI_CEGUI_Window_getRect00);
 tolua_function(tolua_S,"getPixelRect",tolua_CEGUI_CEGUI_Window_getPixelRect00);
 tolua_function(tolua_S,"getInnerRect",tolua_CEGUI_CEGUI_Window_getInnerRect00);
 tolua_function(tolua_S,"getUnclippedPixelRect",tolua_CEGUI_CEGUI_Window_getUnclippedPixelRect00);
 tolua_function(tolua_S,"getUnclippedInnerRect",tolua_CEGUI_CEGUI_Window_getUnclippedInnerRect00);
 tolua_function(tolua_S,"getCaptureWindow",tolua_CEGUI_CEGUI_Window_getCaptureWindow00);
 tolua_function(tolua_S,"setRestoreCapture",tolua_CEGUI_CEGUI_Window_setRestoreCapture00);
 tolua_function(tolua_S,"restoresOldCapture",tolua_CEGUI_CEGUI_Window_restoresOldCapture00);
 tolua_function(tolua_S,"distributesCapturedInputs",tolua_CEGUI_CEGUI_Window_distributesCapturedInputs00);
 tolua_function(tolua_S,"setDistributesCapturedInputs",tolua_CEGUI_CEGUI_Window_setDistributesCapturedInputs00);
 tolua_function(tolua_S,"captureInput",tolua_CEGUI_CEGUI_Window_captureInput00);
 tolua_function(tolua_S,"releaseInput",tolua_CEGUI_CEGUI_Window_releaseInput00);
 tolua_function(tolua_S,"isCapturedByThis",tolua_CEGUI_CEGUI_Window_isCapturedByThis00);
 tolua_function(tolua_S,"isCapturedByAncestor",tolua_CEGUI_CEGUI_Window_isCapturedByAncestor00);
 tolua_function(tolua_S,"isCapturedByChild",tolua_CEGUI_CEGUI_Window_isCapturedByChild00);
 tolua_function(tolua_S,"isHit",tolua_CEGUI_CEGUI_Window_isHit00);
 tolua_function(tolua_S,"isRiseOnClickEnabled",tolua_CEGUI_CEGUI_Window_isRiseOnClickEnabled00);
 tolua_function(tolua_S,"setRiseOnClickEnabled",tolua_CEGUI_CEGUI_Window_setRiseOnClickEnabled00);
 tolua_function(tolua_S,"getMetricsMode",tolua_CEGUI_CEGUI_Window_getMetricsMode00);
 tolua_function(tolua_S,"setMetricsMode",tolua_CEGUI_CEGUI_Window_setMetricsMode00);
 tolua_function(tolua_S,"getMouseCursor",tolua_CEGUI_CEGUI_Window_getMouseCursor00);
 tolua_function(tolua_S,"setMouseCursor",tolua_CEGUI_CEGUI_Window_setMouseCursor00);
 tolua_function(tolua_S,"setMouseCursor",tolua_CEGUI_CEGUI_Window_setMouseCursor01);
 tolua_function(tolua_S,"setMouseCursor",tolua_CEGUI_CEGUI_Window_setMouseCursor02);
 tolua_function(tolua_S,"getRelativeRect",tolua_CEGUI_CEGUI_Window_getRelativeRect00);
 tolua_function(tolua_S,"getRelativePosition",tolua_CEGUI_CEGUI_Window_getRelativePosition00);
 tolua_function(tolua_S,"getRelativeXPosition",tolua_CEGUI_CEGUI_Window_getRelativeXPosition00);
 tolua_function(tolua_S,"getRelativeYPosition",tolua_CEGUI_CEGUI_Window_getRelativeYPosition00);
 tolua_function(tolua_S,"getRelativeSize",tolua_CEGUI_CEGUI_Window_getRelativeSize00);
 tolua_function(tolua_S,"getRelativeWidth",tolua_CEGUI_CEGUI_Window_getRelativeWidth00);
 tolua_function(tolua_S,"getRelativeHeight",tolua_CEGUI_CEGUI_Window_getRelativeHeight00);
 tolua_function(tolua_S,"getAbsoluteRect",tolua_CEGUI_CEGUI_Window_getAbsoluteRect00);
 tolua_function(tolua_S,"getAbsolutePosition",tolua_CEGUI_CEGUI_Window_getAbsolutePosition00);
 tolua_function(tolua_S,"getAbsoluteXPosition",tolua_CEGUI_CEGUI_Window_getAbsoluteXPosition00);
 tolua_function(tolua_S,"getAbsoluteYPosition",tolua_CEGUI_CEGUI_Window_getAbsoluteYPosition00);
 tolua_function(tolua_S,"getAbsoluteSize",tolua_CEGUI_CEGUI_Window_getAbsoluteSize00);
 tolua_function(tolua_S,"getAbsoluteWidth",tolua_CEGUI_CEGUI_Window_getAbsoluteWidth00);
 tolua_function(tolua_S,"getAbsoluteHeight",tolua_CEGUI_CEGUI_Window_getAbsoluteHeight00);
 tolua_function(tolua_S,"setPosition",tolua_CEGUI_CEGUI_Window_setPosition00);
 tolua_function(tolua_S,"setXPosition",tolua_CEGUI_CEGUI_Window_setXPosition00);
 tolua_function(tolua_S,"setYPosition",tolua_CEGUI_CEGUI_Window_setYPosition00);
 tolua_function(tolua_S,"setWidth",tolua_CEGUI_CEGUI_Window_setWidth00);
 tolua_function(tolua_S,"setHeight",tolua_CEGUI_CEGUI_Window_setHeight00);
 tolua_function(tolua_S,"setSize",tolua_CEGUI_CEGUI_Window_setSize00);
 tolua_function(tolua_S,"setRect",tolua_CEGUI_CEGUI_Window_setRect00);
 tolua_function(tolua_S,"getPosition",tolua_CEGUI_CEGUI_Window_getPosition00);
 tolua_function(tolua_S,"getXPosition",tolua_CEGUI_CEGUI_Window_getXPosition00);
 tolua_function(tolua_S,"getYPosition",tolua_CEGUI_CEGUI_Window_getYPosition00);
 tolua_function(tolua_S,"getWidth",tolua_CEGUI_CEGUI_Window_getWidth00);
 tolua_function(tolua_S,"getHeight",tolua_CEGUI_CEGUI_Window_getHeight00);
 tolua_function(tolua_S,"getSize",tolua_CEGUI_CEGUI_Window_getSize00);
 tolua_function(tolua_S,"getRect",tolua_CEGUI_CEGUI_Window_getRect01);
 tolua_function(tolua_S,"setMinimumSize",tolua_CEGUI_CEGUI_Window_setMinimumSize00);
 tolua_function(tolua_S,"setMaximumSize",tolua_CEGUI_CEGUI_Window_setMaximumSize00);
 tolua_function(tolua_S,"setSize",tolua_CEGUI_CEGUI_Window_setSize01);
 tolua_function(tolua_S,"setWidth",tolua_CEGUI_CEGUI_Window_setWidth01);
 tolua_function(tolua_S,"setHeight",tolua_CEGUI_CEGUI_Window_setHeight01);
 tolua_function(tolua_S,"getWidth",tolua_CEGUI_CEGUI_Window_getWidth01);
 tolua_function(tolua_S,"getHeight",tolua_CEGUI_CEGUI_Window_getHeight01);
 tolua_function(tolua_S,"getSize",tolua_CEGUI_CEGUI_Window_getSize01);
 tolua_function(tolua_S,"getMinimumSize",tolua_CEGUI_CEGUI_Window_getMinimumSize00);
 tolua_function(tolua_S,"getMaximumSize",tolua_CEGUI_CEGUI_Window_getMaximumSize00);
 tolua_function(tolua_S,"setPosition",tolua_CEGUI_CEGUI_Window_setPosition01);
 tolua_function(tolua_S,"setXPosition",tolua_CEGUI_CEGUI_Window_setXPosition01);
 tolua_function(tolua_S,"setYPosition",tolua_CEGUI_CEGUI_Window_setYPosition01);
 tolua_function(tolua_S,"getXPosition",tolua_CEGUI_CEGUI_Window_getXPosition01);
 tolua_function(tolua_S,"getYPosition",tolua_CEGUI_CEGUI_Window_getYPosition01);
 tolua_function(tolua_S,"getPosition",tolua_CEGUI_CEGUI_Window_getPosition01);
 tolua_function(tolua_S,"setAreaRect",tolua_CEGUI_CEGUI_Window_setAreaRect00);
 tolua_function(tolua_S,"absoluteToRelativeX",tolua_CEGUI_CEGUI_Window_absoluteToRelativeX00);
 tolua_function(tolua_S,"absoluteToRelativeY",tolua_CEGUI_CEGUI_Window_absoluteToRelativeY00);
 tolua_function(tolua_S,"absoluteToRelative",tolua_CEGUI_CEGUI_Window_absoluteToRelative00);
 tolua_function(tolua_S,"absoluteToRelative",tolua_CEGUI_CEGUI_Window_absoluteToRelative01);
 tolua_function(tolua_S,"absoluteToRelative",tolua_CEGUI_CEGUI_Window_absoluteToRelative02);
 tolua_function(tolua_S,"relativeToAbsoluteX",tolua_CEGUI_CEGUI_Window_relativeToAbsoluteX00);
 tolua_function(tolua_S,"relativeToAbsoluteY",tolua_CEGUI_CEGUI_Window_relativeToAbsoluteY00);
 tolua_function(tolua_S,"relativeToAbsolute",tolua_CEGUI_CEGUI_Window_relativeToAbsolute00);
 tolua_function(tolua_S,"relativeToAbsolute",tolua_CEGUI_CEGUI_Window_relativeToAbsolute01);
 tolua_function(tolua_S,"relativeToAbsolute",tolua_CEGUI_CEGUI_Window_relativeToAbsolute02);
 tolua_function(tolua_S,"windowToScreenX",tolua_CEGUI_CEGUI_Window_windowToScreenX00);
 tolua_function(tolua_S,"windowToScreenY",tolua_CEGUI_CEGUI_Window_windowToScreenY00);
 tolua_function(tolua_S,"windowToScreen",tolua_CEGUI_CEGUI_Window_windowToScreen00);
 tolua_function(tolua_S,"windowToScreen",tolua_CEGUI_CEGUI_Window_windowToScreen01);
 tolua_function(tolua_S,"windowToScreen",tolua_CEGUI_CEGUI_Window_windowToScreen02);
 tolua_function(tolua_S,"screenToWindowX",tolua_CEGUI_CEGUI_Window_screenToWindowX00);
 tolua_function(tolua_S,"screenToWindowY",tolua_CEGUI_CEGUI_Window_screenToWindowY00);
 tolua_function(tolua_S,"screenToWindow",tolua_CEGUI_CEGUI_Window_screenToWindow00);
 tolua_function(tolua_S,"screenToWindow",tolua_CEGUI_CEGUI_Window_screenToWindow01);
 tolua_function(tolua_S,"screenToWindow",tolua_CEGUI_CEGUI_Window_screenToWindow02);
 tolua_function(tolua_S,"moveToFront",tolua_CEGUI_CEGUI_Window_moveToFront00);
 tolua_function(tolua_S,"moveToBack",tolua_CEGUI_CEGUI_Window_moveToBack00);
 tolua_function(tolua_S,"wantsMultiClickEvents",tolua_CEGUI_CEGUI_Window_wantsMultiClickEvents00);
 tolua_function(tolua_S,"isMouseAutoRepeatEnabled",tolua_CEGUI_CEGUI_Window_isMouseAutoRepeatEnabled00);
 tolua_function(tolua_S,"getAutoRepeatDelay",tolua_CEGUI_CEGUI_Window_getAutoRepeatDelay00);
 tolua_function(tolua_S,"getAutoRepeatRate",tolua_CEGUI_CEGUI_Window_getAutoRepeatRate00);
 tolua_function(tolua_S,"setWantsMultiClickEvents",tolua_CEGUI_CEGUI_Window_setWantsMultiClickEvents00);
 tolua_function(tolua_S,"setMouseAutoRepeatEnabled",tolua_CEGUI_CEGUI_Window_setMouseAutoRepeatEnabled00);
 tolua_function(tolua_S,"setAutoRepeatDelay",tolua_CEGUI_CEGUI_Window_setAutoRepeatDelay00);
 tolua_function(tolua_S,"setAutoRepeatRate",tolua_CEGUI_CEGUI_Window_setAutoRepeatRate00);
 tolua_function(tolua_S,"isUsingDefaultTooltip",tolua_CEGUI_CEGUI_Window_isUsingDefaultTooltip00);
 tolua_function(tolua_S,"getTooltip",tolua_CEGUI_CEGUI_Window_getTooltip00);
 tolua_function(tolua_S,"getTooltipType",tolua_CEGUI_CEGUI_Window_getTooltipType00);
 tolua_function(tolua_S,"getTooltipText",tolua_CEGUI_CEGUI_Window_getTooltipText00);
 tolua_function(tolua_S,"inheritsTooltipText",tolua_CEGUI_CEGUI_Window_inheritsTooltipText00);
 tolua_function(tolua_S,"setTooltip",tolua_CEGUI_CEGUI_Window_setTooltip00);
 tolua_function(tolua_S,"setTooltipType",tolua_CEGUI_CEGUI_Window_setTooltipType00);
 tolua_function(tolua_S,"setTooltipText",tolua_CEGUI_CEGUI_Window_setTooltipText00);
 tolua_function(tolua_S,"setInheritsTooltipText",tolua_CEGUI_CEGUI_Window_setInheritsTooltipText00);
 tolua_function(tolua_S,"testClassName",tolua_CEGUI_CEGUI_Window_testClassName00);
 tolua_function(tolua_S,"notifyDragDropItemEnters",tolua_CEGUI_CEGUI_Window_notifyDragDropItemEnters00);
 tolua_function(tolua_S,"notifyDragDropItemLeaves",tolua_CEGUI_CEGUI_Window_notifyDragDropItemLeaves00);
 tolua_function(tolua_S,"notifyDragDropItemDropped",tolua_CEGUI_CEGUI_Window_notifyDragDropItemDropped00);
 tolua_function(tolua_S,"setProperty",tolua_CEGUI_CEGUI_Window_setProperty00);
 tolua_function(tolua_S,"getProperty",tolua_CEGUI_CEGUI_Window_getProperty00);
 tolua_function(tolua_S,"getPropertyDefault",tolua_CEGUI_CEGUI_Window_getPropertyDefault00);
 tolua_function(tolua_S,"getPropertyHelp",tolua_CEGUI_CEGUI_Window_getPropertyHelp00);
 tolua_function(tolua_S,"isPropertyPresent",tolua_CEGUI_CEGUI_Window_isPropertyPresent00);
 tolua_function(tolua_S,"isPropertyDefault",tolua_CEGUI_CEGUI_Window_isPropertyDefault00);
 tolua_function(tolua_S,"addEvent",tolua_CEGUI_CEGUI_Window_addEvent00);
 tolua_function(tolua_S,"removeEvent",tolua_CEGUI_CEGUI_Window_removeEvent00);
 tolua_function(tolua_S,"removeAllEvents",tolua_CEGUI_CEGUI_Window_removeAllEvents00);
 tolua_function(tolua_S,"isEventPresent",tolua_CEGUI_CEGUI_Window_isEventPresent00);
 tolua_function(tolua_S,"subscribeEvent",tolua_CEGUI_CEGUI_Window_subscribeEvent00);
 tolua_function(tolua_S,"fireEvent",tolua_CEGUI_CEGUI_Window_fireEvent00);
 tolua_function(tolua_S,"isMuted",tolua_CEGUI_CEGUI_Window_isMuted00);
 tolua_function(tolua_S,"setMutedState",tolua_CEGUI_CEGUI_Window_setMutedState00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Renderer","CEGUI::Renderer","CEGUI::EventSet",NULL);
 tolua_beginmodule(tolua_S,"Renderer");
 tolua_function(tolua_S,"getCurrentZ",tolua_CEGUI_CEGUI_Renderer_getCurrentZ00);
 tolua_function(tolua_S,"getZLayer",tolua_CEGUI_CEGUI_Renderer_getZLayer00);
 tolua_function(tolua_S,"isQueueingEnabled",tolua_CEGUI_CEGUI_Renderer_isQueueingEnabled00);
 tolua_function(tolua_S,"createTexture",tolua_CEGUI_CEGUI_Renderer_createTexture00);
 tolua_function(tolua_S,"createTexture",tolua_CEGUI_CEGUI_Renderer_createTexture01);
 tolua_function(tolua_S,"createTexture",tolua_CEGUI_CEGUI_Renderer_createTexture02);
 tolua_function(tolua_S,"destroyTexture",tolua_CEGUI_CEGUI_Renderer_destroyTexture00);
 tolua_function(tolua_S,"destroyAllTextures",tolua_CEGUI_CEGUI_Renderer_destroyAllTextures00);
 tolua_function(tolua_S,"getWidth",tolua_CEGUI_CEGUI_Renderer_getWidth00);
 tolua_function(tolua_S,"getHeight",tolua_CEGUI_CEGUI_Renderer_getHeight00);
 tolua_function(tolua_S,"getSize",tolua_CEGUI_CEGUI_Renderer_getSize00);
 tolua_function(tolua_S,"getRect",tolua_CEGUI_CEGUI_Renderer_getRect00);
 tolua_function(tolua_S,"getMaxTextureSize",tolua_CEGUI_CEGUI_Renderer_getMaxTextureSize00);
 tolua_function(tolua_S,"getHorzScreenDPI",tolua_CEGUI_CEGUI_Renderer_getHorzScreenDPI00);
 tolua_function(tolua_S,"getVertScreenDPI",tolua_CEGUI_CEGUI_Renderer_getVertScreenDPI00);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"Invalid",CEGUI::Invalid);
 tolua_constant(tolua_S,"TopLeftCorner",CEGUI::TopLeftCorner);
 tolua_constant(tolua_S,"TopRightCorner",CEGUI::TopRightCorner);
 tolua_constant(tolua_S,"BottomLeftCorner",CEGUI::BottomLeftCorner);
 tolua_constant(tolua_S,"BottomRightCorner",CEGUI::BottomRightCorner);
 tolua_constant(tolua_S,"LeftEdge",CEGUI::LeftEdge);
 tolua_constant(tolua_S,"TopEdge",CEGUI::TopEdge);
 tolua_constant(tolua_S,"RightEdge",CEGUI::RightEdge);
 tolua_constant(tolua_S,"BottomEdge",CEGUI::BottomEdge);
 tolua_cclass(tolua_S,"System","CEGUI::System","CEGUI::EventSet",NULL);
 tolua_beginmodule(tolua_S,"System");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_System_getSingleton00);
 tolua_function(tolua_S,"getRenderer",tolua_CEGUI_CEGUI_System_getRenderer00);
 tolua_function(tolua_S,"setDefaultFont",tolua_CEGUI_CEGUI_System_setDefaultFont00);
 tolua_function(tolua_S,"setDefaultFont",tolua_CEGUI_CEGUI_System_setDefaultFont01);
 tolua_function(tolua_S,"signalRedraw",tolua_CEGUI_CEGUI_System_signalRedraw00);
 tolua_function(tolua_S,"isRedrawRequested",tolua_CEGUI_CEGUI_System_isRedrawRequested00);
 tolua_function(tolua_S,"setGUISheet",tolua_CEGUI_CEGUI_System_setGUISheet00);
 tolua_function(tolua_S,"getGUISheet",tolua_CEGUI_CEGUI_System_getGUISheet00);
 tolua_function(tolua_S,"setSingleClickTimeout",tolua_CEGUI_CEGUI_System_setSingleClickTimeout00);
 tolua_function(tolua_S,"setMultiClickTimeout",tolua_CEGUI_CEGUI_System_setMultiClickTimeout00);
 tolua_function(tolua_S,"setMultiClickToleranceAreaSize",tolua_CEGUI_CEGUI_System_setMultiClickToleranceAreaSize00);
 tolua_function(tolua_S,"getSingleClickTimeout",tolua_CEGUI_CEGUI_System_getSingleClickTimeout00);
 tolua_function(tolua_S,"getMultiClickTimeout",tolua_CEGUI_CEGUI_System_getMultiClickTimeout00);
 tolua_function(tolua_S,"getMultiClickToleranceAreaSize",tolua_CEGUI_CEGUI_System_getMultiClickToleranceAreaSize00);
 tolua_function(tolua_S,"setDefaultMouseCursor",tolua_CEGUI_CEGUI_System_setDefaultMouseCursor00);
 tolua_function(tolua_S,"setDefaultMouseCursor",tolua_CEGUI_CEGUI_System_setDefaultMouseCursor01);
 tolua_function(tolua_S,"setDefaultMouseCursor",tolua_CEGUI_CEGUI_System_setDefaultMouseCursor02);
 tolua_function(tolua_S,"getDefaultMouseCursor",tolua_CEGUI_CEGUI_System_getDefaultMouseCursor00);
 tolua_function(tolua_S,"getWindowContainingMouse",tolua_CEGUI_CEGUI_System_getWindowContainingMouse00);
 tolua_function(tolua_S,"executeScriptFile",tolua_CEGUI_CEGUI_System_executeScriptFile00);
 tolua_function(tolua_S,"executeScriptGlobal",tolua_CEGUI_CEGUI_System_executeScriptGlobal00);
 tolua_function(tolua_S,"executeScriptString",tolua_CEGUI_CEGUI_System_executeScriptString00);
 tolua_function(tolua_S,"getMouseMoveScaling",tolua_CEGUI_CEGUI_System_getMouseMoveScaling00);
 tolua_function(tolua_S,"setMouseMoveScaling",tolua_CEGUI_CEGUI_System_setMouseMoveScaling00);
 tolua_function(tolua_S,"notifyWindowDestroyed",tolua_CEGUI_CEGUI_System_notifyWindowDestroyed00);
 tolua_function(tolua_S,"injectMouseMove",tolua_CEGUI_CEGUI_System_injectMouseMove00);
 tolua_function(tolua_S,"injectMouseLeaves",tolua_CEGUI_CEGUI_System_injectMouseLeaves00);
 tolua_function(tolua_S,"injectMouseButtonDown",tolua_CEGUI_CEGUI_System_injectMouseButtonDown00);
 tolua_function(tolua_S,"injectMouseButtonUp",tolua_CEGUI_CEGUI_System_injectMouseButtonUp00);
 tolua_function(tolua_S,"injectKeyDown",tolua_CEGUI_CEGUI_System_injectKeyDown00);
 tolua_function(tolua_S,"injectKeyUp",tolua_CEGUI_CEGUI_System_injectKeyUp00);
 tolua_function(tolua_S,"injectChar",tolua_CEGUI_CEGUI_System_injectChar00);
 tolua_function(tolua_S,"injectMouseWheelChange",tolua_CEGUI_CEGUI_System_injectMouseWheelChange00);
 tolua_function(tolua_S,"injectMousePosition",tolua_CEGUI_CEGUI_System_injectMousePosition00);
 tolua_function(tolua_S,"injectTimePulse",tolua_CEGUI_CEGUI_System_injectTimePulse00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"WindowManager","CEGUI::WindowManager","",NULL);
 tolua_beginmodule(tolua_S,"WindowManager");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_WindowManager_getSingleton00);
 tolua_function(tolua_S,"createWindow",tolua_CEGUI_CEGUI_WindowManager_createWindow00);
 tolua_function(tolua_S,"loadWindowLayout",tolua_CEGUI_CEGUI_WindowManager_loadWindowLayout00);
 tolua_function(tolua_S,"destroyWindow",tolua_CEGUI_CEGUI_WindowManager_destroyWindow00);
 tolua_function(tolua_S,"destroyWindow",tolua_CEGUI_CEGUI_WindowManager_destroyWindow01);
 tolua_function(tolua_S,"destroyAllWindows",tolua_CEGUI_CEGUI_WindowManager_destroyAllWindows00);
 tolua_function(tolua_S,"getWindow",tolua_CEGUI_CEGUI_WindowManager_getWindow00);
 tolua_function(tolua_S,"isWindowPresent",tolua_CEGUI_CEGUI_WindowManager_isWindowPresent00);
 tolua_function(tolua_S,"isDeadPoolEmpty",tolua_CEGUI_CEGUI_WindowManager_isDeadPoolEmpty00);
 tolua_function(tolua_S,"cleanDeadPool",tolua_CEGUI_CEGUI_WindowManager_cleanDeadPool00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Scheme","CEGUI::Scheme","",NULL);
 tolua_beginmodule(tolua_S,"Scheme");
 tolua_function(tolua_S,"loadResources",tolua_CEGUI_CEGUI_Scheme_loadResources00);
 tolua_function(tolua_S,"unloadResources",tolua_CEGUI_CEGUI_Scheme_unloadResources00);
 tolua_function(tolua_S,"resourcesLoaded",tolua_CEGUI_CEGUI_Scheme_resourcesLoaded00);
 tolua_function(tolua_S,"getName",tolua_CEGUI_CEGUI_Scheme_getName00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"SchemeManager","CEGUI::SchemeManager","",NULL);
 tolua_beginmodule(tolua_S,"SchemeManager");
 tolua_function(tolua_S,"getSingleton",tolua_CEGUI_CEGUI_SchemeManager_getSingleton00);
 tolua_function(tolua_S,"loadScheme",tolua_CEGUI_CEGUI_SchemeManager_loadScheme00);
 tolua_function(tolua_S,"unloadScheme",tolua_CEGUI_CEGUI_SchemeManager_unloadScheme00);
 tolua_function(tolua_S,"isSchemePresent",tolua_CEGUI_CEGUI_SchemeManager_isSchemePresent00);
 tolua_function(tolua_S,"getScheme",tolua_CEGUI_CEGUI_SchemeManager_getScheme00);
 tolua_function(tolua_S,"unloadAllSchemes",tolua_CEGUI_CEGUI_SchemeManager_unloadAllSchemes00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"PropertyHelper","CEGUI::PropertyHelper","",NULL);
 tolua_beginmodule(tolua_S,"PropertyHelper");
 tolua_function(tolua_S,"stringToFloat",tolua_CEGUI_CEGUI_PropertyHelper_stringToFloat00);
 tolua_function(tolua_S,"stringToUint",tolua_CEGUI_CEGUI_PropertyHelper_stringToUint00);
 tolua_function(tolua_S,"stringToBool",tolua_CEGUI_CEGUI_PropertyHelper_stringToBool00);
 tolua_function(tolua_S,"stringToSize",tolua_CEGUI_CEGUI_PropertyHelper_stringToSize00);
 tolua_function(tolua_S,"stringToPoint",tolua_CEGUI_CEGUI_PropertyHelper_stringToPoint00);
 tolua_function(tolua_S,"stringToRect",tolua_CEGUI_CEGUI_PropertyHelper_stringToRect00);
 tolua_function(tolua_S,"stringToMetricsMode",tolua_CEGUI_CEGUI_PropertyHelper_stringToMetricsMode00);
 tolua_function(tolua_S,"stringToImage",tolua_CEGUI_CEGUI_PropertyHelper_stringToImage00);
 tolua_function(tolua_S,"stringToColour",tolua_CEGUI_CEGUI_PropertyHelper_stringToColour00);
 tolua_function(tolua_S,"stringToColourRect",tolua_CEGUI_CEGUI_PropertyHelper_stringToColourRect00);
 tolua_function(tolua_S,"floatToString",tolua_CEGUI_CEGUI_PropertyHelper_floatToString00);
 tolua_function(tolua_S,"uintToString",tolua_CEGUI_CEGUI_PropertyHelper_uintToString00);
 tolua_function(tolua_S,"boolToString",tolua_CEGUI_CEGUI_PropertyHelper_boolToString00);
 tolua_function(tolua_S,"sizeToString",tolua_CEGUI_CEGUI_PropertyHelper_sizeToString00);
 tolua_function(tolua_S,"pointToString",tolua_CEGUI_CEGUI_PropertyHelper_pointToString00);
 tolua_function(tolua_S,"rectToString",tolua_CEGUI_CEGUI_PropertyHelper_rectToString00);
 tolua_function(tolua_S,"metricsModeToString",tolua_CEGUI_CEGUI_PropertyHelper_metricsModeToString00);
 tolua_function(tolua_S,"imageToString",tolua_CEGUI_CEGUI_PropertyHelper_imageToString00);
 tolua_function(tolua_S,"colourToString",tolua_CEGUI_CEGUI_PropertyHelper_colourToString00);
 tolua_function(tolua_S,"colourRectToString",tolua_CEGUI_CEGUI_PropertyHelper_colourRectToString00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"GUISheet","CEGUI::GUISheet","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"GUISheet");
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ButtonBase","CEGUI::ButtonBase","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"ButtonBase");
 tolua_function(tolua_S,"isHovering",tolua_CEGUI_CEGUI_ButtonBase_isHovering00);
 tolua_function(tolua_S,"isPushed",tolua_CEGUI_CEGUI_ButtonBase_isPushed00);
 tolua_function(tolua_S,"getNormalTextColour",tolua_CEGUI_CEGUI_ButtonBase_getNormalTextColour00);
 tolua_function(tolua_S,"getHoverTextColour",tolua_CEGUI_CEGUI_ButtonBase_getHoverTextColour00);
 tolua_function(tolua_S,"getPushedTextColour",tolua_CEGUI_CEGUI_ButtonBase_getPushedTextColour00);
 tolua_function(tolua_S,"getDisabledTextColour",tolua_CEGUI_CEGUI_ButtonBase_getDisabledTextColour00);
 tolua_function(tolua_S,"setNormalTextColour",tolua_CEGUI_CEGUI_ButtonBase_setNormalTextColour00);
 tolua_function(tolua_S,"setHoverTextColour",tolua_CEGUI_CEGUI_ButtonBase_setHoverTextColour00);
 tolua_function(tolua_S,"setPushedTextColour",tolua_CEGUI_CEGUI_ButtonBase_setPushedTextColour00);
 tolua_function(tolua_S,"setDisabledTextColour",tolua_CEGUI_CEGUI_ButtonBase_setDisabledTextColour00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Checkbox","CEGUI::Checkbox","CEGUI::ButtonBase",NULL);
 tolua_beginmodule(tolua_S,"Checkbox");
 tolua_function(tolua_S,"isSelected",tolua_CEGUI_CEGUI_Checkbox_isSelected00);
 tolua_function(tolua_S,"setSelected",tolua_CEGUI_CEGUI_Checkbox_setSelected00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"PushButton","CEGUI::PushButton","CEGUI::ButtonBase",NULL);
 tolua_beginmodule(tolua_S,"PushButton");
 tolua_function(tolua_S,"isStandardImageryEnabled",tolua_CEGUI_CEGUI_PushButton_isStandardImageryEnabled00);
 tolua_function(tolua_S,"isCustomImageryAutoSized",tolua_CEGUI_CEGUI_PushButton_isCustomImageryAutoSized00);
 tolua_function(tolua_S,"setStandardImageryEnabled",tolua_CEGUI_CEGUI_PushButton_setStandardImageryEnabled00);
 tolua_function(tolua_S,"setCustomImageryAutoSized",tolua_CEGUI_CEGUI_PushButton_setCustomImageryAutoSized00);
 tolua_function(tolua_S,"getTextXOffset",tolua_CEGUI_CEGUI_PushButton_getTextXOffset00);
 tolua_function(tolua_S,"setTextXOffset",tolua_CEGUI_CEGUI_PushButton_setTextXOffset00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Thumb","CEGUI::Thumb","CEGUI::PushButton",NULL);
 tolua_beginmodule(tolua_S,"Thumb");
 tolua_function(tolua_S,"isHotTracked",tolua_CEGUI_CEGUI_Thumb_isHotTracked00);
 tolua_function(tolua_S,"isVertFree",tolua_CEGUI_CEGUI_Thumb_isVertFree00);
 tolua_function(tolua_S,"isHorzFree",tolua_CEGUI_CEGUI_Thumb_isHorzFree00);
 tolua_function(tolua_S,"setHotTracked",tolua_CEGUI_CEGUI_Thumb_setHotTracked00);
 tolua_function(tolua_S,"setVertFree",tolua_CEGUI_CEGUI_Thumb_setVertFree00);
 tolua_function(tolua_S,"setHorzFree",tolua_CEGUI_CEGUI_Thumb_setHorzFree00);
 tolua_function(tolua_S,"getVertRange",tolua_CEGUI_CEGUI_Thumb_getVertRange00);
 tolua_function(tolua_S,"getHorzRange",tolua_CEGUI_CEGUI_Thumb_getHorzRange00);
 tolua_function(tolua_S,"setVertRange",tolua_CEGUI_CEGUI_Thumb_setVertRange00);
 tolua_function(tolua_S,"setHorzRange",tolua_CEGUI_CEGUI_Thumb_setHorzRange00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"RadioButton","CEGUI::RadioButton","CEGUI::ButtonBase",NULL);
 tolua_beginmodule(tolua_S,"RadioButton");
 tolua_function(tolua_S,"isSelected",tolua_CEGUI_CEGUI_RadioButton_isSelected00);
 tolua_function(tolua_S,"setSelected",tolua_CEGUI_CEGUI_RadioButton_setSelected00);
 tolua_function(tolua_S,"getGroupID",tolua_CEGUI_CEGUI_RadioButton_getGroupID00);
 tolua_function(tolua_S,"setGroupID",tolua_CEGUI_CEGUI_RadioButton_setGroupID00);
 tolua_function(tolua_S,"getSelectedButtonInGroup",tolua_CEGUI_CEGUI_RadioButton_getSelectedButtonInGroup00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"TabButton","CEGUI::TabButton","CEGUI::ButtonBase",NULL);
 tolua_beginmodule(tolua_S,"TabButton");
 tolua_function(tolua_S,"isSelected",tolua_CEGUI_CEGUI_TabButton_isSelected00);
 tolua_function(tolua_S,"setSelected",tolua_CEGUI_CEGUI_TabButton_setSelected00);
 tolua_function(tolua_S,"setRightOfSelected",tolua_CEGUI_CEGUI_TabButton_setRightOfSelected00);
 tolua_function(tolua_S,"setTargetWindow",tolua_CEGUI_CEGUI_TabButton_setTargetWindow00);
 tolua_function(tolua_S,"getTargetWindow",tolua_CEGUI_CEGUI_TabButton_getTargetWindow00);
 tolua_function(tolua_S,"setTabIndex",tolua_CEGUI_CEGUI_TabButton_setTabIndex00);
 tolua_function(tolua_S,"getTabIndex",tolua_CEGUI_CEGUI_TabButton_getTabIndex00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"TabPane","CEGUI::TabPane","CEGUI::Static",NULL);
 tolua_beginmodule(tolua_S,"TabPane");
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"TabControl","CEGUI::TabControl","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"TabControl");
 tolua_function(tolua_S,"getTabCount",tolua_CEGUI_CEGUI_TabControl_getTabCount00);
 tolua_function(tolua_S,"setSelectedTab",tolua_CEGUI_CEGUI_TabControl_setSelectedTab00);
 tolua_function(tolua_S,"setSelectedTab",tolua_CEGUI_CEGUI_TabControl_setSelectedTab01);
 tolua_function(tolua_S,"setSelectedTabAtIndex",tolua_CEGUI_CEGUI_TabControl_setSelectedTabAtIndex00);
 tolua_function(tolua_S,"getTabContentsAtIndex",tolua_CEGUI_CEGUI_TabControl_getTabContentsAtIndex00);
 tolua_function(tolua_S,"getTabContents",tolua_CEGUI_CEGUI_TabControl_getTabContents00);
 tolua_function(tolua_S,"getTabContents",tolua_CEGUI_CEGUI_TabControl_getTabContents01);
 tolua_function(tolua_S,"isTabContentsSelected",tolua_CEGUI_CEGUI_TabControl_isTabContentsSelected00);
 tolua_function(tolua_S,"getSelectedTabIndex",tolua_CEGUI_CEGUI_TabControl_getSelectedTabIndex00);
 tolua_function(tolua_S,"getRelativeTabHeight",tolua_CEGUI_CEGUI_TabControl_getRelativeTabHeight00);
 tolua_function(tolua_S,"getAbsoluteTabHeight",tolua_CEGUI_CEGUI_TabControl_getAbsoluteTabHeight00);
 tolua_function(tolua_S,"getTabHeight",tolua_CEGUI_CEGUI_TabControl_getTabHeight00);
 tolua_function(tolua_S,"getTabTextPadding",tolua_CEGUI_CEGUI_TabControl_getTabTextPadding00);
 tolua_function(tolua_S,"getRelativeTabTextPadding",tolua_CEGUI_CEGUI_TabControl_getRelativeTabTextPadding00);
 tolua_function(tolua_S,"getAbsoluteTabTextPadding",tolua_CEGUI_CEGUI_TabControl_getAbsoluteTabTextPadding00);
 tolua_function(tolua_S,"setRelativeTabHeight",tolua_CEGUI_CEGUI_TabControl_setRelativeTabHeight00);
 tolua_function(tolua_S,"setAbsoluteTabHeight",tolua_CEGUI_CEGUI_TabControl_setAbsoluteTabHeight00);
 tolua_function(tolua_S,"setTabHeight",tolua_CEGUI_CEGUI_TabControl_setTabHeight00);
 tolua_function(tolua_S,"setTabTextPadding",tolua_CEGUI_CEGUI_TabControl_setTabTextPadding00);
 tolua_function(tolua_S,"setRelativeTabTextPadding",tolua_CEGUI_CEGUI_TabControl_setRelativeTabTextPadding00);
 tolua_function(tolua_S,"setAbsoluteTabTextPadding",tolua_CEGUI_CEGUI_TabControl_setAbsoluteTabTextPadding00);
 tolua_function(tolua_S,"addTab",tolua_CEGUI_CEGUI_TabControl_addTab00);
 tolua_function(tolua_S,"removeTab",tolua_CEGUI_CEGUI_TabControl_removeTab00);
 tolua_function(tolua_S,"removeTab",tolua_CEGUI_CEGUI_TabControl_removeTab01);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Titlebar","CEGUI::Titlebar","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Titlebar");
 tolua_function(tolua_S,"isDraggingEnabled",tolua_CEGUI_CEGUI_Titlebar_isDraggingEnabled00);
 tolua_function(tolua_S,"setDraggingEnabled",tolua_CEGUI_CEGUI_Titlebar_setDraggingEnabled00);
 tolua_function(tolua_S,"getCaptionColour",tolua_CEGUI_CEGUI_Titlebar_getCaptionColour00);
 tolua_function(tolua_S,"setCaptionColour",tolua_CEGUI_CEGUI_Titlebar_setCaptionColour00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"FrameWindow","CEGUI::FrameWindow","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"FrameWindow");
 tolua_function(tolua_S,"isSizingEnabled",tolua_CEGUI_CEGUI_FrameWindow_isSizingEnabled00);
 tolua_function(tolua_S,"isFrameEnabled",tolua_CEGUI_CEGUI_FrameWindow_isFrameEnabled00);
 tolua_function(tolua_S,"isTitleBarEnabled",tolua_CEGUI_CEGUI_FrameWindow_isTitleBarEnabled00);
 tolua_function(tolua_S,"isCloseButtonEnabled",tolua_CEGUI_CEGUI_FrameWindow_isCloseButtonEnabled00);
 tolua_function(tolua_S,"isRollupEnabled",tolua_CEGUI_CEGUI_FrameWindow_isRollupEnabled00);
 tolua_function(tolua_S,"isRolledup",tolua_CEGUI_CEGUI_FrameWindow_isRolledup00);
 tolua_function(tolua_S,"isDragMovingEnabled",tolua_CEGUI_CEGUI_FrameWindow_isDragMovingEnabled00);
 tolua_function(tolua_S,"setSizingEnabled",tolua_CEGUI_CEGUI_FrameWindow_setSizingEnabled00);
 tolua_function(tolua_S,"setFrameEnabled",tolua_CEGUI_CEGUI_FrameWindow_setFrameEnabled00);
 tolua_function(tolua_S,"setTitleBarEnabled",tolua_CEGUI_CEGUI_FrameWindow_setTitleBarEnabled00);
 tolua_function(tolua_S,"setCloseButtonEnabled",tolua_CEGUI_CEGUI_FrameWindow_setCloseButtonEnabled00);
 tolua_function(tolua_S,"setRollupEnabled",tolua_CEGUI_CEGUI_FrameWindow_setRollupEnabled00);
 tolua_function(tolua_S,"setDragMovingEnabled",tolua_CEGUI_CEGUI_FrameWindow_setDragMovingEnabled00);
 tolua_function(tolua_S,"getSizingBorderThickness",tolua_CEGUI_CEGUI_FrameWindow_getSizingBorderThickness00);
 tolua_function(tolua_S,"setSizingBorderThickness",tolua_CEGUI_CEGUI_FrameWindow_setSizingBorderThickness00);
 tolua_function(tolua_S,"toggleRollup",tolua_CEGUI_CEGUI_FrameWindow_toggleRollup00);
 tolua_function(tolua_S,"setTitlebarFont",tolua_CEGUI_CEGUI_FrameWindow_setTitlebarFont00);
 tolua_function(tolua_S,"setTitlebarFont",tolua_CEGUI_CEGUI_FrameWindow_setTitlebarFont01);
 tolua_function(tolua_S,"getTitlebarFont",tolua_CEGUI_CEGUI_FrameWindow_getTitlebarFont00);
 tolua_function(tolua_S,"getCaptionColour",tolua_CEGUI_CEGUI_FrameWindow_getCaptionColour00);
 tolua_function(tolua_S,"setCaptionColour",tolua_CEGUI_CEGUI_FrameWindow_setCaptionColour00);
 tolua_function(tolua_S,"offsetPixelPosition",tolua_CEGUI_CEGUI_FrameWindow_offsetPixelPosition00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Static","CEGUI::Static","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Static");
 tolua_function(tolua_S,"isFrameEnabled",tolua_CEGUI_CEGUI_Static_isFrameEnabled00);
 tolua_function(tolua_S,"isBackgroundEnabled",tolua_CEGUI_CEGUI_Static_isBackgroundEnabled00);
 tolua_function(tolua_S,"setFrameEnabled",tolua_CEGUI_CEGUI_Static_setFrameEnabled00);
 tolua_function(tolua_S,"setBackgroundEnabled",tolua_CEGUI_CEGUI_Static_setBackgroundEnabled00);
 tolua_function(tolua_S,"getFrameColours",tolua_CEGUI_CEGUI_Static_getFrameColours00);
 tolua_function(tolua_S,"getBackgroundColours",tolua_CEGUI_CEGUI_Static_getBackgroundColours00);
 tolua_function(tolua_S,"setFrameColours",tolua_CEGUI_CEGUI_Static_setFrameColours00);
 tolua_function(tolua_S,"setFrameColours",tolua_CEGUI_CEGUI_Static_setFrameColours01);
 tolua_function(tolua_S,"setFrameColours",tolua_CEGUI_CEGUI_Static_setFrameColours02);
 tolua_function(tolua_S,"setBackgroundColours",tolua_CEGUI_CEGUI_Static_setBackgroundColours00);
 tolua_function(tolua_S,"setBackgroundColours",tolua_CEGUI_CEGUI_Static_setBackgroundColours01);
 tolua_function(tolua_S,"setBackgroundColours",tolua_CEGUI_CEGUI_Static_setBackgroundColours02);
 tolua_function(tolua_S,"getImageForFrameLocation",tolua_CEGUI_CEGUI_Static_getImageForFrameLocation00);
 tolua_function(tolua_S,"getBackgroundImage",tolua_CEGUI_CEGUI_Static_getBackgroundImage00);
 tolua_function(tolua_S,"setImageForFrameLocation",tolua_CEGUI_CEGUI_Static_setImageForFrameLocation00);
 tolua_function(tolua_S,"setFrameImages",tolua_CEGUI_CEGUI_Static_setFrameImages00);
 tolua_function(tolua_S,"setBackgroundImage",tolua_CEGUI_CEGUI_Static_setBackgroundImage00);
 tolua_function(tolua_S,"setBackgroundImage",tolua_CEGUI_CEGUI_Static_setBackgroundImage01);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"StaticText","CEGUI::StaticText","CEGUI::Static",NULL);
 tolua_beginmodule(tolua_S,"StaticText");
 tolua_constant(tolua_S,"LeftAligned",CEGUI::StaticText::LeftAligned);
 tolua_constant(tolua_S,"RightAligned",CEGUI::StaticText::RightAligned);
 tolua_constant(tolua_S,"HorzCentred",CEGUI::StaticText::HorzCentred);
 tolua_constant(tolua_S,"HorzJustified",CEGUI::StaticText::HorzJustified);
 tolua_constant(tolua_S,"WordWrapLeftAligned",CEGUI::StaticText::WordWrapLeftAligned);
 tolua_constant(tolua_S,"WordWrapRightAligned",CEGUI::StaticText::WordWrapRightAligned);
 tolua_constant(tolua_S,"WordWrapCentred",CEGUI::StaticText::WordWrapCentred);
 tolua_constant(tolua_S,"WordWrapJustified",CEGUI::StaticText::WordWrapJustified);
 tolua_constant(tolua_S,"TopAligned",CEGUI::StaticText::TopAligned);
 tolua_constant(tolua_S,"BottomAligned",CEGUI::StaticText::BottomAligned);
 tolua_constant(tolua_S,"VertCentred",CEGUI::StaticText::VertCentred);
 tolua_function(tolua_S,"getTextColours",tolua_CEGUI_CEGUI_StaticText_getTextColours00);
 tolua_function(tolua_S,"setTextColours",tolua_CEGUI_CEGUI_StaticText_setTextColours00);
 tolua_function(tolua_S,"setTextColours",tolua_CEGUI_CEGUI_StaticText_setTextColours01);
 tolua_function(tolua_S,"setTextColours",tolua_CEGUI_CEGUI_StaticText_setTextColours02);
 tolua_function(tolua_S,"getHorizontalFormatting",tolua_CEGUI_CEGUI_StaticText_getHorizontalFormatting00);
 tolua_function(tolua_S,"getVerticalFormatting",tolua_CEGUI_CEGUI_StaticText_getVerticalFormatting00);
 tolua_function(tolua_S,"setFormatting",tolua_CEGUI_CEGUI_StaticText_setFormatting00);
 tolua_function(tolua_S,"setHorizontalFormatting",tolua_CEGUI_CEGUI_StaticText_setHorizontalFormatting00);
 tolua_function(tolua_S,"setVerticalFormatting",tolua_CEGUI_CEGUI_StaticText_setVerticalFormatting00);
 tolua_function(tolua_S,"isVerticalScrollbarEnabled",tolua_CEGUI_CEGUI_StaticText_isVerticalScrollbarEnabled00);
 tolua_function(tolua_S,"isHorizontalScrollbarEnabled",tolua_CEGUI_CEGUI_StaticText_isHorizontalScrollbarEnabled00);
 tolua_function(tolua_S,"setVerticalScrollbarEnabled",tolua_CEGUI_CEGUI_StaticText_setVerticalScrollbarEnabled00);
 tolua_function(tolua_S,"setHorizontalScrollbarEnabled",tolua_CEGUI_CEGUI_StaticText_setHorizontalScrollbarEnabled00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"StaticImage","CEGUI::StaticImage","CEGUI::Static",NULL);
 tolua_beginmodule(tolua_S,"StaticImage");
 tolua_constant(tolua_S,"LeftAligned",CEGUI::StaticImage::LeftAligned);
 tolua_constant(tolua_S,"RightAligned",CEGUI::StaticImage::RightAligned);
 tolua_constant(tolua_S,"HorzCentred",CEGUI::StaticImage::HorzCentred);
 tolua_constant(tolua_S,"HorzStretched",CEGUI::StaticImage::HorzStretched);
 tolua_constant(tolua_S,"HorzTiled",CEGUI::StaticImage::HorzTiled);
 tolua_constant(tolua_S,"TopAligned",CEGUI::StaticImage::TopAligned);
 tolua_constant(tolua_S,"BottomAligned",CEGUI::StaticImage::BottomAligned);
 tolua_constant(tolua_S,"VertCentred",CEGUI::StaticImage::VertCentred);
 tolua_constant(tolua_S,"VertStretched",CEGUI::StaticImage::VertStretched);
 tolua_constant(tolua_S,"VertTiled",CEGUI::StaticImage::VertTiled);
 tolua_function(tolua_S,"getImage",tolua_CEGUI_CEGUI_StaticImage_getImage00);
 tolua_function(tolua_S,"setImage",tolua_CEGUI_CEGUI_StaticImage_setImage00);
 tolua_function(tolua_S,"setImage",tolua_CEGUI_CEGUI_StaticImage_setImage01);
 tolua_function(tolua_S,"getImageColours",tolua_CEGUI_CEGUI_StaticImage_getImageColours00);
 tolua_function(tolua_S,"setImageColours",tolua_CEGUI_CEGUI_StaticImage_setImageColours00);
 tolua_function(tolua_S,"setImageColours",tolua_CEGUI_CEGUI_StaticImage_setImageColours01);
 tolua_function(tolua_S,"setImageColours",tolua_CEGUI_CEGUI_StaticImage_setImageColours02);
 tolua_function(tolua_S,"getHorizontalFormatting",tolua_CEGUI_CEGUI_StaticImage_getHorizontalFormatting00);
 tolua_function(tolua_S,"getVerticalFormatting",tolua_CEGUI_CEGUI_StaticImage_getVerticalFormatting00);
 tolua_function(tolua_S,"setFormatting",tolua_CEGUI_CEGUI_StaticImage_setFormatting00);
 tolua_function(tolua_S,"setHorizontalFormatting",tolua_CEGUI_CEGUI_StaticImage_setHorizontalFormatting00);
 tolua_function(tolua_S,"setVerticalFormatting",tolua_CEGUI_CEGUI_StaticImage_setVerticalFormatting00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Tooltip","CEGUI::Tooltip","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Tooltip");
 tolua_function(tolua_S,"setTargetWindow",tolua_CEGUI_CEGUI_Tooltip_setTargetWindow00);
 tolua_function(tolua_S,"resetTimer",tolua_CEGUI_CEGUI_Tooltip_resetTimer00);
 tolua_function(tolua_S,"getHoverTime",tolua_CEGUI_CEGUI_Tooltip_getHoverTime00);
 tolua_function(tolua_S,"setDisplayTime",tolua_CEGUI_CEGUI_Tooltip_setDisplayTime00);
 tolua_function(tolua_S,"getFadeTime",tolua_CEGUI_CEGUI_Tooltip_getFadeTime00);
 tolua_function(tolua_S,"setHoverTime",tolua_CEGUI_CEGUI_Tooltip_setHoverTime00);
 tolua_function(tolua_S,"getDisplayTime",tolua_CEGUI_CEGUI_Tooltip_getDisplayTime00);
 tolua_function(tolua_S,"setFadeTime",tolua_CEGUI_CEGUI_Tooltip_setFadeTime00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"DragContainer","CEGUI::DragContainer","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"DragContainer");
 tolua_function(tolua_S,"isDraggingEnabled",tolua_CEGUI_CEGUI_DragContainer_isDraggingEnabled00);
 tolua_function(tolua_S,"setDraggingEnabled",tolua_CEGUI_CEGUI_DragContainer_setDraggingEnabled00);
 tolua_function(tolua_S,"isBeingDragged",tolua_CEGUI_CEGUI_DragContainer_isBeingDragged00);
 tolua_function(tolua_S,"getPixelDragThreshold",tolua_CEGUI_CEGUI_DragContainer_getPixelDragThreshold00);
 tolua_function(tolua_S,"setPixelDragThreshold",tolua_CEGUI_CEGUI_DragContainer_setPixelDragThreshold00);
 tolua_function(tolua_S,"getDragAlpha",tolua_CEGUI_CEGUI_DragContainer_getDragAlpha00);
 tolua_function(tolua_S,"setDragAlpha",tolua_CEGUI_CEGUI_DragContainer_setDragAlpha00);
 tolua_function(tolua_S,"getDragCursorImage",tolua_CEGUI_CEGUI_DragContainer_getDragCursorImage00);
 tolua_function(tolua_S,"setDragCursorImage",tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage00);
 tolua_function(tolua_S,"setDragCursorImage",tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage01);
 tolua_function(tolua_S,"setDragCursorImage",tolua_CEGUI_CEGUI_DragContainer_setDragCursorImage02);
 tolua_function(tolua_S,"getCurrentDropTarget",tolua_CEGUI_CEGUI_DragContainer_getCurrentDropTarget00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Scrollbar","CEGUI::Scrollbar","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Scrollbar");
 tolua_function(tolua_S,"getDocumentSize",tolua_CEGUI_CEGUI_Scrollbar_getDocumentSize00);
 tolua_function(tolua_S,"getPageSize",tolua_CEGUI_CEGUI_Scrollbar_getPageSize00);
 tolua_function(tolua_S,"getStepSize",tolua_CEGUI_CEGUI_Scrollbar_getStepSize00);
 tolua_function(tolua_S,"getOverlapSize",tolua_CEGUI_CEGUI_Scrollbar_getOverlapSize00);
 tolua_function(tolua_S,"getScrollPosition",tolua_CEGUI_CEGUI_Scrollbar_getScrollPosition00);
 tolua_function(tolua_S,"setDocumentSize",tolua_CEGUI_CEGUI_Scrollbar_setDocumentSize00);
 tolua_function(tolua_S,"setPageSize",tolua_CEGUI_CEGUI_Scrollbar_setPageSize00);
 tolua_function(tolua_S,"setStepSize",tolua_CEGUI_CEGUI_Scrollbar_setStepSize00);
 tolua_function(tolua_S,"setOverlapSize",tolua_CEGUI_CEGUI_Scrollbar_setOverlapSize00);
 tolua_function(tolua_S,"setScrollPosition",tolua_CEGUI_CEGUI_Scrollbar_setScrollPosition00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ScrolledContainer","CEGUI::ScrolledContainer","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"ScrolledContainer");
 tolua_function(tolua_S,"isContentPaneAutoSized",tolua_CEGUI_CEGUI_ScrolledContainer_isContentPaneAutoSized00);
 tolua_function(tolua_S,"setContentPaneAutoSized",tolua_CEGUI_CEGUI_ScrolledContainer_setContentPaneAutoSized00);
 tolua_function(tolua_S,"getContentArea",tolua_CEGUI_CEGUI_ScrolledContainer_getContentArea00);
 tolua_function(tolua_S,"setContentArea",tolua_CEGUI_CEGUI_ScrolledContainer_setContentArea00);
 tolua_function(tolua_S,"getChildExtentsArea",tolua_CEGUI_CEGUI_ScrolledContainer_getChildExtentsArea00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ScrollablePane","CEGUI::ScrollablePane","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"ScrollablePane");
 tolua_function(tolua_S,"getContentPane",tolua_CEGUI_CEGUI_ScrollablePane_getContentPane00);
 tolua_function(tolua_S,"isVertScrollbarAlwaysShown",tolua_CEGUI_CEGUI_ScrollablePane_isVertScrollbarAlwaysShown00);
 tolua_function(tolua_S,"setShowVertScrollbar",tolua_CEGUI_CEGUI_ScrollablePane_setShowVertScrollbar00);
 tolua_function(tolua_S,"isHorzScrollbarAlwaysShown",tolua_CEGUI_CEGUI_ScrollablePane_isHorzScrollbarAlwaysShown00);
 tolua_function(tolua_S,"setShowHorzScrollbar",tolua_CEGUI_CEGUI_ScrollablePane_setShowHorzScrollbar00);
 tolua_function(tolua_S,"isContentPaneAutoSized",tolua_CEGUI_CEGUI_ScrollablePane_isContentPaneAutoSized00);
 tolua_function(tolua_S,"setContentPaneAutoSized",tolua_CEGUI_CEGUI_ScrollablePane_setContentPaneAutoSized00);
 tolua_function(tolua_S,"getContentPaneArea",tolua_CEGUI_CEGUI_ScrollablePane_getContentPaneArea00);
 tolua_function(tolua_S,"setContentPaneArea",tolua_CEGUI_CEGUI_ScrollablePane_setContentPaneArea00);
 tolua_function(tolua_S,"getHorizontalStepSize",tolua_CEGUI_CEGUI_ScrollablePane_getHorizontalStepSize00);
 tolua_function(tolua_S,"setHorizontalStepSize",tolua_CEGUI_CEGUI_ScrollablePane_setHorizontalStepSize00);
 tolua_function(tolua_S,"getHorizontalOverlapSize",tolua_CEGUI_CEGUI_ScrollablePane_getHorizontalOverlapSize00);
 tolua_function(tolua_S,"setHorizontalOverlapSize",tolua_CEGUI_CEGUI_ScrollablePane_setHorizontalOverlapSize00);
 tolua_function(tolua_S,"getHorizontalScrollPosition",tolua_CEGUI_CEGUI_ScrollablePane_getHorizontalScrollPosition00);
 tolua_function(tolua_S,"setHorizontalScrollPosition",tolua_CEGUI_CEGUI_ScrollablePane_setHorizontalScrollPosition00);
 tolua_function(tolua_S,"getVerticalStepSize",tolua_CEGUI_CEGUI_ScrollablePane_getVerticalStepSize00);
 tolua_function(tolua_S,"setVerticalStepSize",tolua_CEGUI_CEGUI_ScrollablePane_setVerticalStepSize00);
 tolua_function(tolua_S,"getVerticalOverlapSize",tolua_CEGUI_CEGUI_ScrollablePane_getVerticalOverlapSize00);
 tolua_function(tolua_S,"setVerticalOverlapSize",tolua_CEGUI_CEGUI_ScrollablePane_setVerticalOverlapSize00);
 tolua_function(tolua_S,"getVerticalScrollPosition",tolua_CEGUI_CEGUI_ScrollablePane_getVerticalScrollPosition00);
 tolua_function(tolua_S,"setVerticalScrollPosition",tolua_CEGUI_CEGUI_ScrollablePane_setVerticalScrollPosition00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Slider","CEGUI::Slider","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Slider");
 tolua_function(tolua_S,"getCurrentValue",tolua_CEGUI_CEGUI_Slider_getCurrentValue00);
 tolua_function(tolua_S,"getMaxValue",tolua_CEGUI_CEGUI_Slider_getMaxValue00);
 tolua_function(tolua_S,"getClickStep",tolua_CEGUI_CEGUI_Slider_getClickStep00);
 tolua_function(tolua_S,"setMaxValue",tolua_CEGUI_CEGUI_Slider_setMaxValue00);
 tolua_function(tolua_S,"setCurrentValue",tolua_CEGUI_CEGUI_Slider_setCurrentValue00);
 tolua_function(tolua_S,"setClickStep",tolua_CEGUI_CEGUI_Slider_setClickStep00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Spinner","CEGUI::Spinner","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Spinner");
 tolua_constant(tolua_S,"FloatingPoint",CEGUI::Spinner::FloatingPoint);
 tolua_constant(tolua_S,"Integer",CEGUI::Spinner::Integer);
 tolua_constant(tolua_S,"Hexadecimal",CEGUI::Spinner::Hexadecimal);
 tolua_constant(tolua_S,"Octal",CEGUI::Spinner::Octal);
 tolua_function(tolua_S,"getCurrentValue",tolua_CEGUI_CEGUI_Spinner_getCurrentValue00);
 tolua_function(tolua_S,"getStepSize",tolua_CEGUI_CEGUI_Spinner_getStepSize00);
 tolua_function(tolua_S,"getMaximumValue",tolua_CEGUI_CEGUI_Spinner_getMaximumValue00);
 tolua_function(tolua_S,"getMinimumValue",tolua_CEGUI_CEGUI_Spinner_getMinimumValue00);
 tolua_function(tolua_S,"getTextInputMode",tolua_CEGUI_CEGUI_Spinner_getTextInputMode00);
 tolua_function(tolua_S,"setCurrentValue",tolua_CEGUI_CEGUI_Spinner_setCurrentValue00);
 tolua_function(tolua_S,"setStepSize",tolua_CEGUI_CEGUI_Spinner_setStepSize00);
 tolua_function(tolua_S,"setMaximumValue",tolua_CEGUI_CEGUI_Spinner_setMaximumValue00);
 tolua_function(tolua_S,"setMinimumValue",tolua_CEGUI_CEGUI_Spinner_setMinimumValue00);
 tolua_function(tolua_S,"setTextInputMode",tolua_CEGUI_CEGUI_Spinner_setTextInputMode00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ProgressBar","CEGUI::ProgressBar","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"ProgressBar");
 tolua_function(tolua_S,"getProgress",tolua_CEGUI_CEGUI_ProgressBar_getProgress00);
 tolua_function(tolua_S,"getStep",tolua_CEGUI_CEGUI_ProgressBar_getStep00);
 tolua_function(tolua_S,"setProgress",tolua_CEGUI_CEGUI_ProgressBar_setProgress00);
 tolua_function(tolua_S,"setStepSize",tolua_CEGUI_CEGUI_ProgressBar_setStepSize00);
 tolua_function(tolua_S,"step",tolua_CEGUI_CEGUI_ProgressBar_step00);
 tolua_function(tolua_S,"adjustProgress",tolua_CEGUI_CEGUI_ProgressBar_adjustProgress00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Editbox","CEGUI::Editbox","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Editbox");
 tolua_function(tolua_S,"hasInputFocus",tolua_CEGUI_CEGUI_Editbox_hasInputFocus00);
 tolua_function(tolua_S,"isReadOnly",tolua_CEGUI_CEGUI_Editbox_isReadOnly00);
 tolua_function(tolua_S,"isTextMasked",tolua_CEGUI_CEGUI_Editbox_isTextMasked00);
 tolua_function(tolua_S,"isTextValid",tolua_CEGUI_CEGUI_Editbox_isTextValid00);
 tolua_function(tolua_S,"getValidationString",tolua_CEGUI_CEGUI_Editbox_getValidationString00);
 tolua_function(tolua_S,"getCaratIndex",tolua_CEGUI_CEGUI_Editbox_getCaratIndex00);
 tolua_function(tolua_S,"getSelectionStartIndex",tolua_CEGUI_CEGUI_Editbox_getSelectionStartIndex00);
 tolua_function(tolua_S,"getSelectionEndIndex",tolua_CEGUI_CEGUI_Editbox_getSelectionEndIndex00);
 tolua_function(tolua_S,"getSelectionLength",tolua_CEGUI_CEGUI_Editbox_getSelectionLength00);
 tolua_function(tolua_S,"getMaskCodePoint",tolua_CEGUI_CEGUI_Editbox_getMaskCodePoint00);
 tolua_function(tolua_S,"getMaxTextLength",tolua_CEGUI_CEGUI_Editbox_getMaxTextLength00);
 tolua_function(tolua_S,"getNormalTextColour",tolua_CEGUI_CEGUI_Editbox_getNormalTextColour00);
 tolua_function(tolua_S,"getSelectedTextColour",tolua_CEGUI_CEGUI_Editbox_getSelectedTextColour00);
 tolua_function(tolua_S,"getNormalSelectBrushColour",tolua_CEGUI_CEGUI_Editbox_getNormalSelectBrushColour00);
 tolua_function(tolua_S,"getInactiveSelectBrushColour",tolua_CEGUI_CEGUI_Editbox_getInactiveSelectBrushColour00);
 tolua_function(tolua_S,"setReadOnly",tolua_CEGUI_CEGUI_Editbox_setReadOnly00);
 tolua_function(tolua_S,"setTextMasked",tolua_CEGUI_CEGUI_Editbox_setTextMasked00);
 tolua_function(tolua_S,"setValidationString",tolua_CEGUI_CEGUI_Editbox_setValidationString00);
 tolua_function(tolua_S,"setCaratIndex",tolua_CEGUI_CEGUI_Editbox_setCaratIndex00);
 tolua_function(tolua_S,"setSelection",tolua_CEGUI_CEGUI_Editbox_setSelection00);
 tolua_function(tolua_S,"setMaskCodePoint",tolua_CEGUI_CEGUI_Editbox_setMaskCodePoint00);
 tolua_function(tolua_S,"setMaxTextLength",tolua_CEGUI_CEGUI_Editbox_setMaxTextLength00);
 tolua_function(tolua_S,"setNormalTextColour",tolua_CEGUI_CEGUI_Editbox_setNormalTextColour00);
 tolua_function(tolua_S,"setSelectedTextColour",tolua_CEGUI_CEGUI_Editbox_setSelectedTextColour00);
 tolua_function(tolua_S,"setNormalSelectBrushColour",tolua_CEGUI_CEGUI_Editbox_setNormalSelectBrushColour00);
 tolua_function(tolua_S,"setInactiveSelectBrushColour",tolua_CEGUI_CEGUI_Editbox_setInactiveSelectBrushColour00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"MultiLineEditbox","CEGUI::MultiLineEditbox","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"MultiLineEditbox");
 tolua_function(tolua_S,"hasInputFocus",tolua_CEGUI_CEGUI_MultiLineEditbox_hasInputFocus00);
 tolua_function(tolua_S,"isReadOnly",tolua_CEGUI_CEGUI_MultiLineEditbox_isReadOnly00);
 tolua_function(tolua_S,"getCaratIndex",tolua_CEGUI_CEGUI_MultiLineEditbox_getCaratIndex00);
 tolua_function(tolua_S,"getSelectionStartIndex",tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectionStartIndex00);
 tolua_function(tolua_S,"getSelectionEndIndex",tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectionEndIndex00);
 tolua_function(tolua_S,"getSelectionLength",tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectionLength00);
 tolua_function(tolua_S,"getMaxTextLength",tolua_CEGUI_CEGUI_MultiLineEditbox_getMaxTextLength00);
 tolua_function(tolua_S,"getNormalTextColour",tolua_CEGUI_CEGUI_MultiLineEditbox_getNormalTextColour00);
 tolua_function(tolua_S,"getSelectedTextColour",tolua_CEGUI_CEGUI_MultiLineEditbox_getSelectedTextColour00);
 tolua_function(tolua_S,"getNormalSelectBrushColour",tolua_CEGUI_CEGUI_MultiLineEditbox_getNormalSelectBrushColour00);
 tolua_function(tolua_S,"getInactiveSelectBrushColour",tolua_CEGUI_CEGUI_MultiLineEditbox_getInactiveSelectBrushColour00);
 tolua_function(tolua_S,"isWordWrapped",tolua_CEGUI_CEGUI_MultiLineEditbox_isWordWrapped00);
 tolua_function(tolua_S,"setReadOnly",tolua_CEGUI_CEGUI_MultiLineEditbox_setReadOnly00);
 tolua_function(tolua_S,"setCaratIndex",tolua_CEGUI_CEGUI_MultiLineEditbox_setCaratIndex00);
 tolua_function(tolua_S,"setSelection",tolua_CEGUI_CEGUI_MultiLineEditbox_setSelection00);
 tolua_function(tolua_S,"setMaxTextLength",tolua_CEGUI_CEGUI_MultiLineEditbox_setMaxTextLength00);
 tolua_function(tolua_S,"setNormalTextColour",tolua_CEGUI_CEGUI_MultiLineEditbox_setNormalTextColour00);
 tolua_function(tolua_S,"setSelectedTextColour",tolua_CEGUI_CEGUI_MultiLineEditbox_setSelectedTextColour00);
 tolua_function(tolua_S,"setNormalSelectBrushColour",tolua_CEGUI_CEGUI_MultiLineEditbox_setNormalSelectBrushColour00);
 tolua_function(tolua_S,"setInactiveSelectBrushColour",tolua_CEGUI_CEGUI_MultiLineEditbox_setInactiveSelectBrushColour00);
 tolua_function(tolua_S,"ensureCaratIsVisible",tolua_CEGUI_CEGUI_MultiLineEditbox_ensureCaratIsVisible00);
 tolua_function(tolua_S,"setWordWrapping",tolua_CEGUI_CEGUI_MultiLineEditbox_setWordWrapping00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ListboxItem","CEGUI::ListboxItem","",NULL);
 tolua_beginmodule(tolua_S,"ListboxItem");
 tolua_function(tolua_S,"getText",tolua_CEGUI_CEGUI_ListboxItem_getText00);
 tolua_function(tolua_S,"getID",tolua_CEGUI_CEGUI_ListboxItem_getID00);
 tolua_function(tolua_S,"getUserData",tolua_CEGUI_CEGUI_ListboxItem_getUserData00);
 tolua_function(tolua_S,"isSelected",tolua_CEGUI_CEGUI_ListboxItem_isSelected00);
 tolua_function(tolua_S,"isDisabled",tolua_CEGUI_CEGUI_ListboxItem_isDisabled00);
 tolua_function(tolua_S,"isAutoDeleted",tolua_CEGUI_CEGUI_ListboxItem_isAutoDeleted00);
 tolua_function(tolua_S,"getOwnerWindow",tolua_CEGUI_CEGUI_ListboxItem_getOwnerWindow00);
 tolua_function(tolua_S,"getSelectionColours",tolua_CEGUI_CEGUI_ListboxItem_getSelectionColours00);
 tolua_function(tolua_S,"getSelectionBrushImage",tolua_CEGUI_CEGUI_ListboxItem_getSelectionBrushImage00);
 tolua_function(tolua_S,"setText",tolua_CEGUI_CEGUI_ListboxItem_setText00);
 tolua_function(tolua_S,"setID",tolua_CEGUI_CEGUI_ListboxItem_setID00);
 tolua_function(tolua_S,"setUserData",tolua_CEGUI_CEGUI_ListboxItem_setUserData00);
 tolua_function(tolua_S,"setSelected",tolua_CEGUI_CEGUI_ListboxItem_setSelected00);
 tolua_function(tolua_S,"setDisabled",tolua_CEGUI_CEGUI_ListboxItem_setDisabled00);
 tolua_function(tolua_S,"setAutoDeleted",tolua_CEGUI_CEGUI_ListboxItem_setAutoDeleted00);
 tolua_function(tolua_S,"setOwnerWindow",tolua_CEGUI_CEGUI_ListboxItem_setOwnerWindow00);
 tolua_function(tolua_S,"setSelectionColours",tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours00);
 tolua_function(tolua_S,"setSelectionColours",tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours01);
 tolua_function(tolua_S,"setSelectionColours",tolua_CEGUI_CEGUI_ListboxItem_setSelectionColours02);
 tolua_function(tolua_S,"setSelectionBrushImage",tolua_CEGUI_CEGUI_ListboxItem_setSelectionBrushImage00);
 tolua_function(tolua_S,"setSelectionBrushImage",tolua_CEGUI_CEGUI_ListboxItem_setSelectionBrushImage01);
 tolua_function(tolua_S,"getPixelSize",tolua_CEGUI_CEGUI_ListboxItem_getPixelSize00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ListboxTextItem","CEGUI::ListboxTextItem","CEGUI::ListboxItem",NULL);
 tolua_beginmodule(tolua_S,"ListboxTextItem");
 tolua_function(tolua_S,"getFont",tolua_CEGUI_CEGUI_ListboxTextItem_getFont00);
 tolua_function(tolua_S,"getTextColours",tolua_CEGUI_CEGUI_ListboxTextItem_getTextColours00);
 tolua_function(tolua_S,"setFont",tolua_CEGUI_CEGUI_ListboxTextItem_setFont00);
 tolua_function(tolua_S,"setFont",tolua_CEGUI_CEGUI_ListboxTextItem_setFont01);
 tolua_function(tolua_S,"setTextColours",tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours00);
 tolua_function(tolua_S,"setTextColours",tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours01);
 tolua_function(tolua_S,"setTextColours",tolua_CEGUI_CEGUI_ListboxTextItem_setTextColours02);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Combobox","CEGUI::Combobox","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Combobox");
 tolua_function(tolua_S,"getSingleClickEnabled",tolua_CEGUI_CEGUI_Combobox_getSingleClickEnabled00);
 tolua_function(tolua_S,"isDropDownListVisible",tolua_CEGUI_CEGUI_Combobox_isDropDownListVisible00);
 tolua_function(tolua_S,"hasInputFocus",tolua_CEGUI_CEGUI_Combobox_hasInputFocus00);
 tolua_function(tolua_S,"isReadOnly",tolua_CEGUI_CEGUI_Combobox_isReadOnly00);
 tolua_function(tolua_S,"isTextValid",tolua_CEGUI_CEGUI_Combobox_isTextValid00);
 tolua_function(tolua_S,"getValidationString",tolua_CEGUI_CEGUI_Combobox_getValidationString00);
 tolua_function(tolua_S,"getCaratIndex",tolua_CEGUI_CEGUI_Combobox_getCaratIndex00);
 tolua_function(tolua_S,"getSelectionStartIndex",tolua_CEGUI_CEGUI_Combobox_getSelectionStartIndex00);
 tolua_function(tolua_S,"getSelectionEndIndex",tolua_CEGUI_CEGUI_Combobox_getSelectionEndIndex00);
 tolua_function(tolua_S,"getSelectionLength",tolua_CEGUI_CEGUI_Combobox_getSelectionLength00);
 tolua_function(tolua_S,"getMaxTextLength",tolua_CEGUI_CEGUI_Combobox_getMaxTextLength00);
 tolua_function(tolua_S,"getNormalTextColour",tolua_CEGUI_CEGUI_Combobox_getNormalTextColour00);
 tolua_function(tolua_S,"getSelectedTextColour",tolua_CEGUI_CEGUI_Combobox_getSelectedTextColour00);
 tolua_function(tolua_S,"getNormalSelectBrushColour",tolua_CEGUI_CEGUI_Combobox_getNormalSelectBrushColour00);
 tolua_function(tolua_S,"getInactiveSelectBrushColour",tolua_CEGUI_CEGUI_Combobox_getInactiveSelectBrushColour00);
 tolua_function(tolua_S,"setNormalTextColour",tolua_CEGUI_CEGUI_Combobox_setNormalTextColour00);
 tolua_function(tolua_S,"setSelectedTextColour",tolua_CEGUI_CEGUI_Combobox_setSelectedTextColour00);
 tolua_function(tolua_S,"setNormalSelectBrushColour",tolua_CEGUI_CEGUI_Combobox_setNormalSelectBrushColour00);
 tolua_function(tolua_S,"setInactiveSelectBrushColour",tolua_CEGUI_CEGUI_Combobox_setInactiveSelectBrushColour00);
 tolua_function(tolua_S,"activateEditbox",tolua_CEGUI_CEGUI_Combobox_activateEditbox00);
 tolua_function(tolua_S,"getItemCount",tolua_CEGUI_CEGUI_Combobox_getItemCount00);
 tolua_function(tolua_S,"getSelectedItem",tolua_CEGUI_CEGUI_Combobox_getSelectedItem00);
 tolua_function(tolua_S,"getListboxItemFromIndex",tolua_CEGUI_CEGUI_Combobox_getListboxItemFromIndex00);
 tolua_function(tolua_S,"getItemIndex",tolua_CEGUI_CEGUI_Combobox_getItemIndex00);
 tolua_function(tolua_S,"isItemSelected",tolua_CEGUI_CEGUI_Combobox_isItemSelected00);
 tolua_function(tolua_S,"findItemWithText",tolua_CEGUI_CEGUI_Combobox_findItemWithText00);
 tolua_function(tolua_S,"isListboxItemInList",tolua_CEGUI_CEGUI_Combobox_isListboxItemInList00);
 tolua_function(tolua_S,"resetList",tolua_CEGUI_CEGUI_Combobox_resetList00);
 tolua_function(tolua_S,"addItem",tolua_CEGUI_CEGUI_Combobox_addItem00);
 tolua_function(tolua_S,"insertItem",tolua_CEGUI_CEGUI_Combobox_insertItem00);
 tolua_function(tolua_S,"removeItem",tolua_CEGUI_CEGUI_Combobox_removeItem00);
 tolua_function(tolua_S,"clearAllSelections",tolua_CEGUI_CEGUI_Combobox_clearAllSelections00);
 tolua_function(tolua_S,"setSortingEnabled",tolua_CEGUI_CEGUI_Combobox_setSortingEnabled00);
 tolua_function(tolua_S,"setShowVertScrollbar",tolua_CEGUI_CEGUI_Combobox_setShowVertScrollbar00);
 tolua_function(tolua_S,"setShowHorzScrollbar",tolua_CEGUI_CEGUI_Combobox_setShowHorzScrollbar00);
 tolua_function(tolua_S,"setItemSelectState",tolua_CEGUI_CEGUI_Combobox_setItemSelectState00);
 tolua_function(tolua_S,"setItemSelectState",tolua_CEGUI_CEGUI_Combobox_setItemSelectState01);
 tolua_function(tolua_S,"handleUpdatedListItemData",tolua_CEGUI_CEGUI_Combobox_handleUpdatedListItemData00);
 tolua_function(tolua_S,"isSortEnabled",tolua_CEGUI_CEGUI_Combobox_isSortEnabled00);
 tolua_function(tolua_S,"isVertScrollbarAlwaysShown",tolua_CEGUI_CEGUI_Combobox_isVertScrollbarAlwaysShown00);
 tolua_function(tolua_S,"isHorzScrollbarAlwaysShown",tolua_CEGUI_CEGUI_Combobox_isHorzScrollbarAlwaysShown00);
 tolua_function(tolua_S,"showDropList",tolua_CEGUI_CEGUI_Combobox_showDropList00);
 tolua_function(tolua_S,"hideDropList",tolua_CEGUI_CEGUI_Combobox_hideDropList00);
 tolua_function(tolua_S,"setSingleClickEnabled",tolua_CEGUI_CEGUI_Combobox_setSingleClickEnabled00);
 tolua_function(tolua_S,"setReadOnly",tolua_CEGUI_CEGUI_Combobox_setReadOnly00);
 tolua_function(tolua_S,"setValidationString",tolua_CEGUI_CEGUI_Combobox_setValidationString00);
 tolua_function(tolua_S,"setCaratIndex",tolua_CEGUI_CEGUI_Combobox_setCaratIndex00);
 tolua_function(tolua_S,"setSelection",tolua_CEGUI_CEGUI_Combobox_setSelection00);
 tolua_function(tolua_S,"setMaxTextLength",tolua_CEGUI_CEGUI_Combobox_setMaxTextLength00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Listbox","CEGUI::Listbox","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"Listbox");
 tolua_function(tolua_S,"getItemCount",tolua_CEGUI_CEGUI_Listbox_getItemCount00);
 tolua_function(tolua_S,"getSelectedCount",tolua_CEGUI_CEGUI_Listbox_getSelectedCount00);
 tolua_function(tolua_S,"getFirstSelectedItem",tolua_CEGUI_CEGUI_Listbox_getFirstSelectedItem00);
 tolua_function(tolua_S,"getNextSelected",tolua_CEGUI_CEGUI_Listbox_getNextSelected00);
 tolua_function(tolua_S,"getListboxItemFromIndex",tolua_CEGUI_CEGUI_Listbox_getListboxItemFromIndex00);
 tolua_function(tolua_S,"getItemIndex",tolua_CEGUI_CEGUI_Listbox_getItemIndex00);
 tolua_function(tolua_S,"findItemWithText",tolua_CEGUI_CEGUI_Listbox_findItemWithText00);
 tolua_function(tolua_S,"isSortEnabled",tolua_CEGUI_CEGUI_Listbox_isSortEnabled00);
 tolua_function(tolua_S,"isMultiselectEnabled",tolua_CEGUI_CEGUI_Listbox_isMultiselectEnabled00);
 tolua_function(tolua_S,"isItemSelected",tolua_CEGUI_CEGUI_Listbox_isItemSelected00);
 tolua_function(tolua_S,"isListboxItemInList",tolua_CEGUI_CEGUI_Listbox_isListboxItemInList00);
 tolua_function(tolua_S,"isVertScrollbarAlwaysShown",tolua_CEGUI_CEGUI_Listbox_isVertScrollbarAlwaysShown00);
 tolua_function(tolua_S,"isHorzScrollbarAlwaysShown",tolua_CEGUI_CEGUI_Listbox_isHorzScrollbarAlwaysShown00);
 tolua_function(tolua_S,"resetList",tolua_CEGUI_CEGUI_Listbox_resetList00);
 tolua_function(tolua_S,"addItem",tolua_CEGUI_CEGUI_Listbox_addItem00);
 tolua_function(tolua_S,"insertItem",tolua_CEGUI_CEGUI_Listbox_insertItem00);
 tolua_function(tolua_S,"removeItem",tolua_CEGUI_CEGUI_Listbox_removeItem00);
 tolua_function(tolua_S,"clearAllSelections",tolua_CEGUI_CEGUI_Listbox_clearAllSelections00);
 tolua_function(tolua_S,"setSortingEnabled",tolua_CEGUI_CEGUI_Listbox_setSortingEnabled00);
 tolua_function(tolua_S,"setMultiselectEnabled",tolua_CEGUI_CEGUI_Listbox_setMultiselectEnabled00);
 tolua_function(tolua_S,"setShowVertScrollbar",tolua_CEGUI_CEGUI_Listbox_setShowVertScrollbar00);
 tolua_function(tolua_S,"setShowHorzScrollbar",tolua_CEGUI_CEGUI_Listbox_setShowHorzScrollbar00);
 tolua_function(tolua_S,"setItemSelectState",tolua_CEGUI_CEGUI_Listbox_setItemSelectState00);
 tolua_function(tolua_S,"setItemSelectState",tolua_CEGUI_CEGUI_Listbox_setItemSelectState01);
 tolua_function(tolua_S,"handleUpdatedItemData",tolua_CEGUI_CEGUI_Listbox_handleUpdatedItemData00);
 tolua_function(tolua_S,"ensureItemIsVisible",tolua_CEGUI_CEGUI_Listbox_ensureItemIsVisible00);
 tolua_function(tolua_S,"ensureItemIsVisible",tolua_CEGUI_CEGUI_Listbox_ensureItemIsVisible01);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ComboDropList","CEGUI::ComboDropList","CEGUI::Listbox",NULL);
 tolua_beginmodule(tolua_S,"ComboDropList");
 tolua_function(tolua_S,"setArmed",tolua_CEGUI_CEGUI_ComboDropList_setArmed00);
 tolua_function(tolua_S,"isArmed",tolua_CEGUI_CEGUI_ComboDropList_isArmed00);
 tolua_function(tolua_S,"setAutoArmEnabled",tolua_CEGUI_CEGUI_ComboDropList_setAutoArmEnabled00);
 tolua_function(tolua_S,"isAutoArmEnabled",tolua_CEGUI_CEGUI_ComboDropList_isAutoArmEnabled00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ListHeaderSegment","CEGUI::ListHeaderSegment","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"ListHeaderSegment");
 tolua_constant(tolua_S,"None",CEGUI::ListHeaderSegment::None);
 tolua_constant(tolua_S,"Ascending",CEGUI::ListHeaderSegment::Ascending);
 tolua_constant(tolua_S,"Descending",CEGUI::ListHeaderSegment::Descending);
 tolua_function(tolua_S,"isSizingEnabled",tolua_CEGUI_CEGUI_ListHeaderSegment_isSizingEnabled00);
 tolua_function(tolua_S,"getSortDirection",tolua_CEGUI_CEGUI_ListHeaderSegment_getSortDirection00);
 tolua_function(tolua_S,"isDragMovingEnabled",tolua_CEGUI_CEGUI_ListHeaderSegment_isDragMovingEnabled00);
 tolua_function(tolua_S,"getDragMoveOffset",tolua_CEGUI_CEGUI_ListHeaderSegment_getDragMoveOffset00);
 tolua_function(tolua_S,"isClickable",tolua_CEGUI_CEGUI_ListHeaderSegment_isClickable00);
 tolua_function(tolua_S,"setSizingEnabled",tolua_CEGUI_CEGUI_ListHeaderSegment_setSizingEnabled00);
 tolua_function(tolua_S,"setSortDirection",tolua_CEGUI_CEGUI_ListHeaderSegment_setSortDirection00);
 tolua_function(tolua_S,"setDragMovingEnabled",tolua_CEGUI_CEGUI_ListHeaderSegment_setDragMovingEnabled00);
 tolua_function(tolua_S,"setClickable",tolua_CEGUI_CEGUI_ListHeaderSegment_setClickable00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ListHeader","CEGUI::ListHeader","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"ListHeader");
 tolua_function(tolua_S,"getColumnCount",tolua_CEGUI_CEGUI_ListHeader_getColumnCount00);
 tolua_function(tolua_S,"getSegmentFromColumn",tolua_CEGUI_CEGUI_ListHeader_getSegmentFromColumn00);
 tolua_function(tolua_S,"getSegmentFromID",tolua_CEGUI_CEGUI_ListHeader_getSegmentFromID00);
 tolua_function(tolua_S,"getSortSegment",tolua_CEGUI_CEGUI_ListHeader_getSortSegment00);
 tolua_function(tolua_S,"getColumnFromSegment",tolua_CEGUI_CEGUI_ListHeader_getColumnFromSegment00);
 tolua_function(tolua_S,"getColumnFromID",tolua_CEGUI_CEGUI_ListHeader_getColumnFromID00);
 tolua_function(tolua_S,"getSortColumn",tolua_CEGUI_CEGUI_ListHeader_getSortColumn00);
 tolua_function(tolua_S,"getColumnWithText",tolua_CEGUI_CEGUI_ListHeader_getColumnWithText00);
 tolua_function(tolua_S,"getPixelOffsetToSegment",tolua_CEGUI_CEGUI_ListHeader_getPixelOffsetToSegment00);
 tolua_function(tolua_S,"getPixelOffsetToColumn",tolua_CEGUI_CEGUI_ListHeader_getPixelOffsetToColumn00);
 tolua_function(tolua_S,"getTotalSegmentsPixelExtent",tolua_CEGUI_CEGUI_ListHeader_getTotalSegmentsPixelExtent00);
 tolua_function(tolua_S,"getColumnPixelWidth",tolua_CEGUI_CEGUI_ListHeader_getColumnPixelWidth00);
 tolua_function(tolua_S,"getSortDirection",tolua_CEGUI_CEGUI_ListHeader_getSortDirection00);
 tolua_function(tolua_S,"isSortingEnabled",tolua_CEGUI_CEGUI_ListHeader_isSortingEnabled00);
 tolua_function(tolua_S,"isColumnSizingEnabled",tolua_CEGUI_CEGUI_ListHeader_isColumnSizingEnabled00);
 tolua_function(tolua_S,"isColumnDraggingEnabled",tolua_CEGUI_CEGUI_ListHeader_isColumnDraggingEnabled00);
 tolua_function(tolua_S,"getSegmentOffset",tolua_CEGUI_CEGUI_ListHeader_getSegmentOffset00);
 tolua_function(tolua_S,"setSortingEnabled",tolua_CEGUI_CEGUI_ListHeader_setSortingEnabled00);
 tolua_function(tolua_S,"setSortDirection",tolua_CEGUI_CEGUI_ListHeader_setSortDirection00);
 tolua_function(tolua_S,"setSortSegment",tolua_CEGUI_CEGUI_ListHeader_setSortSegment00);
 tolua_function(tolua_S,"setSortColumn",tolua_CEGUI_CEGUI_ListHeader_setSortColumn00);
 tolua_function(tolua_S,"setSortColumnFromID",tolua_CEGUI_CEGUI_ListHeader_setSortColumnFromID00);
 tolua_function(tolua_S,"setColumnSizingEnabled",tolua_CEGUI_CEGUI_ListHeader_setColumnSizingEnabled00);
 tolua_function(tolua_S,"setColumnDraggingEnabled",tolua_CEGUI_CEGUI_ListHeader_setColumnDraggingEnabled00);
 tolua_function(tolua_S,"addColumn",tolua_CEGUI_CEGUI_ListHeader_addColumn00);
 tolua_function(tolua_S,"insertColumn",tolua_CEGUI_CEGUI_ListHeader_insertColumn00);
 tolua_function(tolua_S,"insertColumn",tolua_CEGUI_CEGUI_ListHeader_insertColumn01);
 tolua_function(tolua_S,"removeColumn",tolua_CEGUI_CEGUI_ListHeader_removeColumn00);
 tolua_function(tolua_S,"removeSegment",tolua_CEGUI_CEGUI_ListHeader_removeSegment00);
 tolua_function(tolua_S,"moveColumn",tolua_CEGUI_CEGUI_ListHeader_moveColumn00);
 tolua_function(tolua_S,"moveColumn",tolua_CEGUI_CEGUI_ListHeader_moveColumn01);
 tolua_function(tolua_S,"moveSegment",tolua_CEGUI_CEGUI_ListHeader_moveSegment00);
 tolua_function(tolua_S,"moveSegment",tolua_CEGUI_CEGUI_ListHeader_moveSegment01);
 tolua_function(tolua_S,"setSegmentOffset",tolua_CEGUI_CEGUI_ListHeader_setSegmentOffset00);
 tolua_function(tolua_S,"setColumnPixelWidth",tolua_CEGUI_CEGUI_ListHeader_setColumnPixelWidth00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"MCLGridRef","CEGUI::MCLGridRef","",tolua_collect_CEGUI__MCLGridRef);
#else
 tolua_cclass(tolua_S,"MCLGridRef","CEGUI::MCLGridRef","",NULL);
#endif
 tolua_beginmodule(tolua_S,"MCLGridRef");
 tolua_variable(tolua_S,"row",tolua_get_CEGUI__MCLGridRef_unsigned_row,tolua_set_CEGUI__MCLGridRef_unsigned_row);
 tolua_variable(tolua_S,"column",tolua_get_CEGUI__MCLGridRef_unsigned_column,tolua_set_CEGUI__MCLGridRef_unsigned_column);
 tolua_function(tolua_S,".eq",tolua_CEGUI_CEGUI_MCLGridRef__eq00);
 tolua_function(tolua_S,"new",tolua_CEGUI_CEGUI_MCLGridRef_new00);
 tolua_function(tolua_S,"new_local",tolua_CEGUI_CEGUI_MCLGridRef_new00_local);
 tolua_set_call_event(tolua_S,tolua_CEGUI_CEGUI_MCLGridRef_new00_local, "CEGUI::MCLGridRef");
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"MultiColumnList","CEGUI::MultiColumnList","CEGUI::Window",NULL);
 tolua_beginmodule(tolua_S,"MultiColumnList");
 tolua_constant(tolua_S,"RowSingle",CEGUI::MultiColumnList::RowSingle);
 tolua_constant(tolua_S,"RowMultiple",CEGUI::MultiColumnList::RowMultiple);
 tolua_constant(tolua_S,"CellSingle",CEGUI::MultiColumnList::CellSingle);
 tolua_constant(tolua_S,"CellMultiple",CEGUI::MultiColumnList::CellMultiple);
 tolua_constant(tolua_S,"NominatedColumnSingle",CEGUI::MultiColumnList::NominatedColumnSingle);
 tolua_constant(tolua_S,"NominatedColumnMultiple",CEGUI::MultiColumnList::NominatedColumnMultiple);
 tolua_constant(tolua_S,"ColumnSingle",CEGUI::MultiColumnList::ColumnSingle);
 tolua_constant(tolua_S,"ColumnMultiple",CEGUI::MultiColumnList::ColumnMultiple);
 tolua_constant(tolua_S,"NominatedRowSingle",CEGUI::MultiColumnList::NominatedRowSingle);
 tolua_constant(tolua_S,"NominatedRowMultiple",CEGUI::MultiColumnList::NominatedRowMultiple);
 tolua_function(tolua_S,"isUserSortControlEnabled",tolua_CEGUI_CEGUI_MultiColumnList_isUserSortControlEnabled00);
 tolua_function(tolua_S,"isUserColumnSizingEnabled",tolua_CEGUI_CEGUI_MultiColumnList_isUserColumnSizingEnabled00);
 tolua_function(tolua_S,"isUserColumnDraggingEnabled",tolua_CEGUI_CEGUI_MultiColumnList_isUserColumnDraggingEnabled00);
 tolua_function(tolua_S,"getColumnCount",tolua_CEGUI_CEGUI_MultiColumnList_getColumnCount00);
 tolua_function(tolua_S,"getRowCount",tolua_CEGUI_CEGUI_MultiColumnList_getRowCount00);
 tolua_function(tolua_S,"getSortColumn",tolua_CEGUI_CEGUI_MultiColumnList_getSortColumn00);
 tolua_function(tolua_S,"getColumnWithID",tolua_CEGUI_CEGUI_MultiColumnList_getColumnWithID00);
 tolua_function(tolua_S,"getColumnWithHeaderText",tolua_CEGUI_CEGUI_MultiColumnList_getColumnWithHeaderText00);
 tolua_function(tolua_S,"getTotalColumnHeadersWidth",tolua_CEGUI_CEGUI_MultiColumnList_getTotalColumnHeadersWidth00);
 tolua_function(tolua_S,"getColumnHeaderWidth",tolua_CEGUI_CEGUI_MultiColumnList_getColumnHeaderWidth00);
 tolua_function(tolua_S,"getSortDirection",tolua_CEGUI_CEGUI_MultiColumnList_getSortDirection00);
 tolua_function(tolua_S,"getHeaderSegmentForColumn",tolua_CEGUI_CEGUI_MultiColumnList_getHeaderSegmentForColumn00);
 tolua_function(tolua_S,"getItemRowIndex",tolua_CEGUI_CEGUI_MultiColumnList_getItemRowIndex00);
 tolua_function(tolua_S,"getItemColumnIndex",tolua_CEGUI_CEGUI_MultiColumnList_getItemColumnIndex00);
 tolua_function(tolua_S,"getItemGridReference",tolua_CEGUI_CEGUI_MultiColumnList_getItemGridReference00);
 tolua_function(tolua_S,"getItemAtGridReference",tolua_CEGUI_CEGUI_MultiColumnList_getItemAtGridReference00);
 tolua_function(tolua_S,"isListboxItemInColumn",tolua_CEGUI_CEGUI_MultiColumnList_isListboxItemInColumn00);
 tolua_function(tolua_S,"isListboxItemInRow",tolua_CEGUI_CEGUI_MultiColumnList_isListboxItemInRow00);
 tolua_function(tolua_S,"isListboxItemInList",tolua_CEGUI_CEGUI_MultiColumnList_isListboxItemInList00);
 tolua_function(tolua_S,"findColumnItemWithText",tolua_CEGUI_CEGUI_MultiColumnList_findColumnItemWithText00);
 tolua_function(tolua_S,"findRowItemWithText",tolua_CEGUI_CEGUI_MultiColumnList_findRowItemWithText00);
 tolua_function(tolua_S,"findListItemWithText",tolua_CEGUI_CEGUI_MultiColumnList_findListItemWithText00);
 tolua_function(tolua_S,"getFirstSelectedItem",tolua_CEGUI_CEGUI_MultiColumnList_getFirstSelectedItem00);
 tolua_function(tolua_S,"getNextSelected",tolua_CEGUI_CEGUI_MultiColumnList_getNextSelected00);
 tolua_function(tolua_S,"getSelectedCount",tolua_CEGUI_CEGUI_MultiColumnList_getSelectedCount00);
 tolua_function(tolua_S,"isItemSelected",tolua_CEGUI_CEGUI_MultiColumnList_isItemSelected00);
 tolua_function(tolua_S,"getNominatedSelectionColumnID",tolua_CEGUI_CEGUI_MultiColumnList_getNominatedSelectionColumnID00);
 tolua_function(tolua_S,"getNominatedSelectionColumn",tolua_CEGUI_CEGUI_MultiColumnList_getNominatedSelectionColumn00);
 tolua_function(tolua_S,"getNominatedSelectionRow",tolua_CEGUI_CEGUI_MultiColumnList_getNominatedSelectionRow00);
 tolua_function(tolua_S,"getSelectionMode",tolua_CEGUI_CEGUI_MultiColumnList_getSelectionMode00);
 tolua_function(tolua_S,"isVertScrollbarAlwaysShown",tolua_CEGUI_CEGUI_MultiColumnList_isVertScrollbarAlwaysShown00);
 tolua_function(tolua_S,"isHorzScrollbarAlwaysShown",tolua_CEGUI_CEGUI_MultiColumnList_isHorzScrollbarAlwaysShown00);
 tolua_function(tolua_S,"getColumnID",tolua_CEGUI_CEGUI_MultiColumnList_getColumnID00);
 tolua_function(tolua_S,"resetList",tolua_CEGUI_CEGUI_MultiColumnList_resetList00);
 tolua_function(tolua_S,"addColumn",tolua_CEGUI_CEGUI_MultiColumnList_addColumn00);
 tolua_function(tolua_S,"insertColumn",tolua_CEGUI_CEGUI_MultiColumnList_insertColumn00);
 tolua_function(tolua_S,"removeColumn",tolua_CEGUI_CEGUI_MultiColumnList_removeColumn00);
 tolua_function(tolua_S,"removeColumnWithID",tolua_CEGUI_CEGUI_MultiColumnList_removeColumnWithID00);
 tolua_function(tolua_S,"moveColumn",tolua_CEGUI_CEGUI_MultiColumnList_moveColumn00);
 tolua_function(tolua_S,"moveColumnWithID",tolua_CEGUI_CEGUI_MultiColumnList_moveColumnWithID00);
 tolua_function(tolua_S,"addRow",tolua_CEGUI_CEGUI_MultiColumnList_addRow00);
 tolua_function(tolua_S,"addRow",tolua_CEGUI_CEGUI_MultiColumnList_addRow01);
 tolua_function(tolua_S,"insertRow",tolua_CEGUI_CEGUI_MultiColumnList_insertRow00);
 tolua_function(tolua_S,"insertRow",tolua_CEGUI_CEGUI_MultiColumnList_insertRow01);
 tolua_function(tolua_S,"removeRow",tolua_CEGUI_CEGUI_MultiColumnList_removeRow00);
 tolua_function(tolua_S,"setItem",tolua_CEGUI_CEGUI_MultiColumnList_setItem00);
 tolua_function(tolua_S,"setItem",tolua_CEGUI_CEGUI_MultiColumnList_setItem01);
 tolua_function(tolua_S,"setSelectionMode",tolua_CEGUI_CEGUI_MultiColumnList_setSelectionMode00);
 tolua_function(tolua_S,"setNominatedSelectionColumnID",tolua_CEGUI_CEGUI_MultiColumnList_setNominatedSelectionColumnID00);
 tolua_function(tolua_S,"setNominatedSelectionColumn",tolua_CEGUI_CEGUI_MultiColumnList_setNominatedSelectionColumn00);
 tolua_function(tolua_S,"setNominatedSelectionRow",tolua_CEGUI_CEGUI_MultiColumnList_setNominatedSelectionRow00);
 tolua_function(tolua_S,"setSortDirection",tolua_CEGUI_CEGUI_MultiColumnList_setSortDirection00);
 tolua_function(tolua_S,"setSortColumn",tolua_CEGUI_CEGUI_MultiColumnList_setSortColumn00);
 tolua_function(tolua_S,"setSortColumnByID",tolua_CEGUI_CEGUI_MultiColumnList_setSortColumnByID00);
 tolua_function(tolua_S,"setShowVertScrollbar",tolua_CEGUI_CEGUI_MultiColumnList_setShowVertScrollbar00);
 tolua_function(tolua_S,"setShowHorzScrollbar",tolua_CEGUI_CEGUI_MultiColumnList_setShowHorzScrollbar00);
 tolua_function(tolua_S,"clearAllSelections",tolua_CEGUI_CEGUI_MultiColumnList_clearAllSelections00);
 tolua_function(tolua_S,"setItemSelectState",tolua_CEGUI_CEGUI_MultiColumnList_setItemSelectState00);
 tolua_function(tolua_S,"setItemSelectState",tolua_CEGUI_CEGUI_MultiColumnList_setItemSelectState01);
 tolua_function(tolua_S,"handleUpdatedItemData",tolua_CEGUI_CEGUI_MultiColumnList_handleUpdatedItemData00);
 tolua_function(tolua_S,"setColumnHeaderWidth",tolua_CEGUI_CEGUI_MultiColumnList_setColumnHeaderWidth00);
 tolua_function(tolua_S,"setUserSortControlEnabled",tolua_CEGUI_CEGUI_MultiColumnList_setUserSortControlEnabled00);
 tolua_function(tolua_S,"setUserColumnSizingEnabled",tolua_CEGUI_CEGUI_MultiColumnList_setUserColumnSizingEnabled00);
 tolua_function(tolua_S,"setUserColumnDraggingEnabled",tolua_CEGUI_CEGUI_MultiColumnList_setUserColumnDraggingEnabled00);
 tolua_function(tolua_S,"autoSizeColumnHeader",tolua_CEGUI_CEGUI_MultiColumnList_autoSizeColumnHeader00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"toMouseCursorEventArgs",tolua_CEGUI_CEGUI_toMouseCursorEventArgs00);
 tolua_function(tolua_S,"toWindowEventArgs",tolua_CEGUI_CEGUI_toWindowEventArgs00);
 tolua_function(tolua_S,"toActivationEventArgs",tolua_CEGUI_CEGUI_toActivationEventArgs00);
 tolua_function(tolua_S,"toHeaderSequenceEventArgs",tolua_CEGUI_CEGUI_toHeaderSequenceEventArgs00);
 tolua_function(tolua_S,"toMouseEventArgs",tolua_CEGUI_CEGUI_toMouseEventArgs00);
 tolua_function(tolua_S,"toButtonBase",tolua_CEGUI_CEGUI_toButtonBase00);
 tolua_function(tolua_S,"toCheckbox",tolua_CEGUI_CEGUI_toCheckbox00);
 tolua_function(tolua_S,"toCombobox",tolua_CEGUI_CEGUI_toCombobox00);
 tolua_function(tolua_S,"toComboDropList",tolua_CEGUI_CEGUI_toComboDropList00);
 tolua_function(tolua_S,"toDragContainer",tolua_CEGUI_CEGUI_toDragContainer00);
 tolua_function(tolua_S,"toEditbox",tolua_CEGUI_CEGUI_toEditbox00);
 tolua_function(tolua_S,"toFrameWindow",tolua_CEGUI_CEGUI_toFrameWindow00);
 tolua_function(tolua_S,"toGUISheet",tolua_CEGUI_CEGUI_toGUISheet00);
 tolua_function(tolua_S,"toListbox",tolua_CEGUI_CEGUI_toListbox00);
 tolua_function(tolua_S,"toListHeader",tolua_CEGUI_CEGUI_toListHeader00);
 tolua_function(tolua_S,"toListHeaderSegment",tolua_CEGUI_CEGUI_toListHeaderSegment00);
 tolua_function(tolua_S,"toMultiColumnList",tolua_CEGUI_CEGUI_toMultiColumnList00);
 tolua_function(tolua_S,"toMultiLineEditbox",tolua_CEGUI_CEGUI_toMultiLineEditbox00);
 tolua_function(tolua_S,"toProgressBar",tolua_CEGUI_CEGUI_toProgressBar00);
 tolua_function(tolua_S,"toPushButton",tolua_CEGUI_CEGUI_toPushButton00);
 tolua_function(tolua_S,"toRadioButton",tolua_CEGUI_CEGUI_toRadioButton00);
 tolua_function(tolua_S,"toScrollablePane",tolua_CEGUI_CEGUI_toScrollablePane00);
 tolua_function(tolua_S,"toScrollbar",tolua_CEGUI_CEGUI_toScrollbar00);
 tolua_function(tolua_S,"toScrolledContainer",tolua_CEGUI_CEGUI_toScrolledContainer00);
 tolua_function(tolua_S,"toSlider",tolua_CEGUI_CEGUI_toSlider00);
 tolua_function(tolua_S,"toSpinner",tolua_CEGUI_CEGUI_toSpinner00);
 tolua_function(tolua_S,"toStatic",tolua_CEGUI_CEGUI_toStatic00);
 tolua_function(tolua_S,"toStaticImage",tolua_CEGUI_CEGUI_toStaticImage00);
 tolua_function(tolua_S,"toStaticText",tolua_CEGUI_CEGUI_toStaticText00);
 tolua_function(tolua_S,"toTabButton",tolua_CEGUI_CEGUI_toTabButton00);
 tolua_function(tolua_S,"toTabControl",tolua_CEGUI_CEGUI_toTabControl00);
 tolua_function(tolua_S,"toTabPane",tolua_CEGUI_CEGUI_toTabPane00);
 tolua_function(tolua_S,"toThumb",tolua_CEGUI_CEGUI_toThumb00);
 tolua_function(tolua_S,"toTooltip",tolua_CEGUI_CEGUI_toTooltip00);
 tolua_function(tolua_S,"createListboxTextItem",tolua_CEGUI_CEGUI_createListboxTextItem00);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}
