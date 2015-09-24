#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",102,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(104)
	super::__construct();
	HX_STACK_LINE(106)
	this->mouseChildren = true;
	HX_STACK_LINE(108)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(109)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",144,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(146)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(148)
		bool tmp1 = (child->parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(150)
			::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			child->parent->removeChild(tmp2);
		}
		HX_STACK_LINE(154)
		::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		this->__children->push(tmp2);
		HX_STACK_LINE(155)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(157)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		if ((tmp4)){
			HX_STACK_LINE(159)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			child->__setStageReference(tmp5);
		}
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			bool tmp5 = child->__transformDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			if ((tmp6)){
				HX_STACK_LINE(163)
				child->__transformDirty = true;
				HX_STACK_LINE(163)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			bool tmp5 = child->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			if ((tmp6)){
				HX_STACK_LINE(164)
				child->__renderDirty = true;
				HX_STACK_LINE(164)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(166)
		::String tmp5 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		::openfl::events::Event event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(167)
		event->target = child;
		HX_STACK_LINE(168)
		::openfl::events::Event tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		child->dispatchEvent(tmp7);
	}
	HX_STACK_LINE(172)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",206,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(208)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	if ((tmp3)){
		HX_STACK_LINE(208)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(208)
		tmp4 = true;
	}
	HX_STACK_LINE(208)
	if ((tmp4)){
		HX_STACK_LINE(210)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(214)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(214)
	if ((tmp5)){
		HX_STACK_LINE(216)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		this->__children->remove(tmp6);
	}
	else{
		HX_STACK_LINE(220)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		if ((tmp6)){
			HX_STACK_LINE(222)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(226)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(228)
		::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(228)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		if ((tmp8)){
			HX_STACK_LINE(230)
			::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			child->__setStageReference(tmp9);
		}
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			bool tmp9 = child->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(234)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(234)
			if ((tmp10)){
				HX_STACK_LINE(234)
				child->__transformDirty = true;
				HX_STACK_LINE(234)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			bool tmp9 = child->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			if ((tmp10)){
				HX_STACK_LINE(235)
				child->__renderDirty = true;
				HX_STACK_LINE(235)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(237)
		::String tmp9 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(237)
		::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(238)
		event->target = child;
		HX_STACK_LINE(239)
		::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(239)
		child->dispatchEvent(tmp11);
	}
	HX_STACK_LINE(243)
	int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(243)
	::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(243)
	this->__children->insert(tmp6,tmp7);
	HX_STACK_LINE(245)
	::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(245)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",273,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(273)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",290,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(292)
	while((true)){
		HX_STACK_LINE(292)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		if ((tmp)){
			HX_STACK_LINE(292)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(292)
			tmp1 = false;
		}
		HX_STACK_LINE(292)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		if ((tmp2)){
			HX_STACK_LINE(292)
			break;
		}
		HX_STACK_LINE(294)
		child = child->parent;
	}
	HX_STACK_LINE(298)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",316,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(318)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	if ((tmp)){
		HX_STACK_LINE(318)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(318)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(318)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(318)
		tmp1 = false;
	}
	HX_STACK_LINE(318)
	if ((tmp1)){
		HX_STACK_LINE(320)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		return tmp2;
	}
	HX_STACK_LINE(324)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",347,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(349)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(349)
		while((true)){
			HX_STACK_LINE(349)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(349)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(349)
			if ((tmp1)){
				HX_STACK_LINE(349)
				break;
			}
			HX_STACK_LINE(349)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(349)
			++(_g);
			HX_STACK_LINE(351)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(351)
			if ((tmp5)){
				HX_STACK_LINE(351)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(351)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(355)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",368,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(370)
	{
		HX_STACK_LINE(370)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(370)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(370)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			if ((tmp2)){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(370)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(370)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(372)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(372)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			if ((tmp6)){
				HX_STACK_LINE(372)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(372)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(376)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",400,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(402)
	::openfl::geom::Point tmp = point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	::openfl::geom::Point tmp1 = this->localToGlobal(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	point = tmp1;
	HX_STACK_LINE(403)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(404)
	Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	this->__hitTest(tmp2,tmp3,false,stack,false);
	HX_STACK_LINE(405)
	stack->reverse();
	HX_STACK_LINE(406)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",430,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(432)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(432)
	if ((tmp)){
		HX_STACK_LINE(432)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(432)
		tmp1 = false;
	}
	HX_STACK_LINE(432)
	if ((tmp1)){
		HX_STACK_LINE(434)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		if ((tmp3)){
			HX_STACK_LINE(436)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(440)
		child->parent = null();
		HX_STACK_LINE(441)
		::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		this->__children->remove(tmp4);
		HX_STACK_LINE(442)
		::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		this->__removedChildren->push(tmp5);
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			bool tmp6 = child->__transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(443)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(443)
			if ((tmp7)){
				HX_STACK_LINE(443)
				child->__transformDirty = true;
				HX_STACK_LINE(443)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			bool tmp6 = child->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(444)
			if ((tmp7)){
				HX_STACK_LINE(444)
				child->__renderDirty = true;
				HX_STACK_LINE(444)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(445)
		::String tmp6 = ::openfl::events::Event_obj::REMOVED;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		child->dispatchEvent(tmp7);
	}
	HX_STACK_LINE(449)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",476,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(478)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(478)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(478)
	if ((tmp)){
		HX_STACK_LINE(478)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(478)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(478)
		tmp1 = false;
	}
	HX_STACK_LINE(478)
	if ((tmp1)){
		HX_STACK_LINE(480)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		return tmp3;
	}
	HX_STACK_LINE(484)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",489,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(491)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		if ((tmp)){
			HX_STACK_LINE(493)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(493)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(493)
			endIndex = tmp2;
			HX_STACK_LINE(495)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(495)
			if ((tmp3)){
				HX_STACK_LINE(497)
				return null();
			}
		}
		HX_STACK_LINE(503)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(503)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(503)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(503)
		if ((tmp4)){
			HX_STACK_LINE(505)
			return null();
		}
		else{
			HX_STACK_LINE(507)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(507)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(507)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(507)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(507)
			if ((tmp7)){
				HX_STACK_LINE(507)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(507)
				tmp8 = true;
			}
			HX_STACK_LINE(507)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(507)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(507)
			if ((tmp9)){
				HX_STACK_LINE(507)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(507)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(507)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(507)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(507)
				tmp10 = true;
			}
			HX_STACK_LINE(507)
			if ((tmp10)){
				HX_STACK_LINE(509)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(509)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(513)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			if ((tmp7)){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(516)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(516)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(517)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",552,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(554)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(554)
		if ((tmp1)){
			HX_STACK_LINE(554)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(554)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(554)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(554)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(554)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(554)
			tmp2 = false;
		}
		HX_STACK_LINE(554)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(554)
		if ((tmp2)){
			HX_STACK_LINE(554)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(554)
			tmp3 = false;
		}
		HX_STACK_LINE(554)
		if ((tmp3)){
			HX_STACK_LINE(556)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(556)
			this->__children->remove(tmp4);
			HX_STACK_LINE(557)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",574,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(576)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		if ((tmp)){
			HX_STACK_LINE(576)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(576)
			tmp1 = false;
		}
		HX_STACK_LINE(576)
		if ((tmp1)){
			HX_STACK_LINE(580)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(580)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(581)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(581)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(581)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(604)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(604)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(605)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(605)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",621,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(623)
		::openfl::display::DisplayObject tmp = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(623)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(624)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(624)
		this->__children[child1] = tmp1;
		HX_STACK_LINE(625)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		this->__children[child2] = tmp2;
		HX_STACK_LINE(626)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",631,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(633)
	bool tmp = (event->target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	if ((tmp)){
		HX_STACK_LINE(635)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(639)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(639)
	bool tmp2 = notifyChilden;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(639)
	bool tmp3 = this->super::__broadcast(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(639)
	bool result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(641)
	bool tmp4 = event->__isCancelled;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(641)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(641)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(641)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(641)
	if ((tmp6)){
		HX_STACK_LINE(641)
		tmp7 = notifyChilden;
	}
	else{
		HX_STACK_LINE(641)
		tmp7 = false;
	}
	HX_STACK_LINE(641)
	if ((tmp7)){
		HX_STACK_LINE(643)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(643)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(643)
		while((true)){
			HX_STACK_LINE(643)
			bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(643)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(643)
			if ((tmp9)){
				HX_STACK_LINE(643)
				break;
			}
			HX_STACK_LINE(643)
			::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(643)
			::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(643)
			++(_g);
			HX_STACK_LINE(645)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(645)
			child->__broadcast(tmp11,true);
			HX_STACK_LINE(647)
			bool tmp12 = event->__isCancelled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(647)
			if ((tmp12)){
				HX_STACK_LINE(649)
				return true;
			}
		}
	}
	HX_STACK_LINE(657)
	bool tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(657)
	return tmp8;
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",662,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(664)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(666)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(666)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(666)
		if ((tmp3)){
			HX_STACK_LINE(666)
			return null();
		}
		HX_STACK_LINE(668)
		::openfl::geom::Matrix matrixCache = null();		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(670)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(670)
		if ((tmp4)){
			HX_STACK_LINE(672)
			::openfl::geom::Matrix tmp5 = this->__worldTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(672)
			matrixCache = tmp5;
			HX_STACK_LINE(673)
			this->__worldTransform = matrix;
			HX_STACK_LINE(674)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(678)
		{
			HX_STACK_LINE(678)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(678)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(678)
			while((true)){
				HX_STACK_LINE(678)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(678)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(678)
				if ((tmp6)){
					HX_STACK_LINE(678)
					break;
				}
				HX_STACK_LINE(678)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(678)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(678)
				++(_g);
				HX_STACK_LINE(680)
				bool tmp8 = child->__renderable;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(680)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(680)
				if ((tmp9)){
					HX_STACK_LINE(680)
					continue;
				}
				HX_STACK_LINE(681)
				::openfl::geom::Rectangle tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(681)
				::openfl::geom::Matrix tmp11 = child->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(681)
				child->__getBounds(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(685)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(685)
		if ((tmp5)){
			HX_STACK_LINE(687)
			this->__worldTransform = matrixCache;
			HX_STACK_LINE(688)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",695,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(697)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(697)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(697)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(697)
	if ((tmp3)){
		HX_STACK_LINE(697)
		bool tmp5 = interactiveOnly;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(697)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(697)
		if ((tmp6)){
			HX_STACK_LINE(697)
			bool tmp7 = this->mouseEnabled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(697)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(697)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(697)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(697)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(697)
			tmp4 = !(tmp11);
		}
		else{
			HX_STACK_LINE(697)
			tmp4 = false;
		}
	}
	else{
		HX_STACK_LINE(697)
		tmp4 = true;
	}
	HX_STACK_LINE(697)
	if ((tmp4)){
		HX_STACK_LINE(697)
		return false;
	}
	HX_STACK_LINE(699)
	::openfl::geom::Rectangle tmp5 = this->get_scrollRect();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(699)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(699)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(699)
	if ((tmp6)){
		HX_STACK_LINE(699)
		::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(699)
		::openfl::geom::Rectangle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(699)
		::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(699)
		::openfl::geom::Point tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(699)
		::openfl::geom::Point tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(699)
		::openfl::geom::Point tmp13 = this->globalToLocal(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(699)
		::openfl::geom::Point tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(699)
		::openfl::geom::Point tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(699)
		bool tmp16 = tmp9->containsPoint(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(699)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(699)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(699)
		tmp7 = !(tmp18);
	}
	else{
		HX_STACK_LINE(699)
		tmp7 = false;
	}
	HX_STACK_LINE(699)
	if ((tmp7)){
		HX_STACK_LINE(699)
		return false;
	}
	HX_STACK_LINE(701)
	int tmp8 = this->__children->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(701)
	int i = tmp8;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(702)
	bool tmp9 = interactiveOnly;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(702)
	if ((tmp9)){
		HX_STACK_LINE(704)
		bool tmp10 = (stack == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(704)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(704)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(704)
		if ((tmp11)){
			HX_STACK_LINE(704)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(704)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(704)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(704)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(704)
			tmp12 = true;
		}
		HX_STACK_LINE(704)
		if ((tmp12)){
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				int tmp13 = --(i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(706)
				bool tmp14 = (tmp13 >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(706)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(706)
				if ((tmp15)){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(708)
				::openfl::display::DisplayObject tmp16 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(708)
				Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(708)
				Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(708)
				bool tmp19 = shapeFlag;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(708)
				bool tmp20 = tmp16->__hitTest(tmp17,tmp18,tmp19,null(),true);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(708)
				if ((tmp20)){
					HX_STACK_LINE(710)
					bool tmp21 = (stack != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(710)
					if ((tmp21)){
						HX_STACK_LINE(712)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(716)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(722)
			bool tmp13 = (stack != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(722)
			if ((tmp13)){
				HX_STACK_LINE(724)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(726)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(727)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(729)
				while((true)){
					HX_STACK_LINE(729)
					int tmp14 = --(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(729)
					bool tmp15 = (tmp14 >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(729)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(729)
					if ((tmp16)){
						HX_STACK_LINE(729)
						break;
					}
					HX_STACK_LINE(731)
					::openfl::display::DisplayObject tmp17 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(731)
					bool tmp18 = tmp17->__getInteractive(null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(731)
					interactive = tmp18;
					HX_STACK_LINE(733)
					bool tmp19 = interactive;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(733)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(733)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(733)
					if ((tmp20)){
						HX_STACK_LINE(733)
						bool tmp22 = hitTest;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(733)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(733)
						tmp21 = !(tmp23);
					}
					else{
						HX_STACK_LINE(733)
						tmp21 = true;
					}
					HX_STACK_LINE(733)
					if ((tmp21)){
						HX_STACK_LINE(735)
						::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(735)
						Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(735)
						Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(735)
						bool tmp25 = shapeFlag;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(735)
						bool tmp26 = tmp22->__hitTest(tmp23,tmp24,tmp25,stack,true);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(735)
						if ((tmp26)){
							HX_STACK_LINE(737)
							hitTest = true;
							HX_STACK_LINE(739)
							bool tmp27 = interactive;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(739)
							if ((tmp27)){
								HX_STACK_LINE(741)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(751)
				bool tmp14 = hitTest;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(751)
				if ((tmp14)){
					HX_STACK_LINE(753)
					int tmp15 = length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(753)
					stack->insert(tmp15,hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(754)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			int tmp10 = --(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(762)
			bool tmp11 = (tmp10 >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(762)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(762)
			if ((tmp12)){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(764)
			::openfl::display::DisplayObject tmp13 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(764)
			Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(764)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(764)
			bool tmp16 = shapeFlag;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(764)
			tmp13->__hitTest(tmp14,tmp15,tmp16,stack,false);
		}
	}
	HX_STACK_LINE(771)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",776,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(778)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(778)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(778)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(778)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(778)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(778)
		if ((tmp3)){
			HX_STACK_LINE(778)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(778)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(778)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(778)
			tmp4 = true;
		}
		HX_STACK_LINE(778)
		if ((tmp4)){
			HX_STACK_LINE(778)
			return null();
		}
		HX_STACK_LINE(780)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(780)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(782)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(782)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(782)
		if ((tmp7)){
			HX_STACK_LINE(784)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(784)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(784)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(788)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(788)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(788)
		if ((tmp9)){
			HX_STACK_LINE(790)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(790)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(794)
		{
			HX_STACK_LINE(794)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(794)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(794)
			while((true)){
				HX_STACK_LINE(794)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(794)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(794)
				if ((tmp11)){
					HX_STACK_LINE(794)
					break;
				}
				HX_STACK_LINE(794)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(794)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(794)
				++(_g);
				HX_STACK_LINE(796)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(796)
				child->__renderCairo(tmp13);
			}
		}
		HX_STACK_LINE(800)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(802)
		::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(802)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(802)
		if ((tmp11)){
			HX_STACK_LINE(804)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(808)
		::openfl::geom::Rectangle tmp12 = this->get_scrollRect();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(808)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(808)
		if ((tmp13)){
			HX_STACK_LINE(810)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",817,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(819)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(819)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(819)
		if ((tmp1)){
			HX_STACK_LINE(821)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(821)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(821)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(830)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(830)
			while((true)){
				HX_STACK_LINE(830)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(830)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(830)
				if ((tmp3)){
					HX_STACK_LINE(830)
					break;
				}
				HX_STACK_LINE(830)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(830)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(830)
				++(_g);
				HX_STACK_LINE(832)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(832)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",839,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(841)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(841)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(841)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(841)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(841)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(841)
		if ((tmp3)){
			HX_STACK_LINE(841)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(841)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(841)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(841)
			tmp4 = true;
		}
		HX_STACK_LINE(841)
		if ((tmp4)){
			HX_STACK_LINE(841)
			return null();
		}
		HX_STACK_LINE(845)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(845)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(847)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(847)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(847)
		if ((tmp7)){
			HX_STACK_LINE(849)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(849)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(849)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(853)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(853)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(853)
		if ((tmp9)){
			HX_STACK_LINE(855)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(855)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(859)
		{
			HX_STACK_LINE(859)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(859)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(859)
			while((true)){
				HX_STACK_LINE(859)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(859)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(859)
				if ((tmp11)){
					HX_STACK_LINE(859)
					break;
				}
				HX_STACK_LINE(859)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(859)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(859)
				++(_g);
				HX_STACK_LINE(861)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(861)
				child->__renderCanvas(tmp13);
			}
		}
		HX_STACK_LINE(865)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(867)
		::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(867)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(867)
		if ((tmp11)){
			HX_STACK_LINE(869)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(873)
		::openfl::geom::Rectangle tmp12 = this->get_scrollRect();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(873)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(873)
		if ((tmp13)){
			HX_STACK_LINE(875)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",884,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(886)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(886)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		if ((tmp1)){
			HX_STACK_LINE(888)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(888)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(888)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(892)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(892)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(893)
			this->__getTransform();
			HX_STACK_LINE(893)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(893)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(893)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(895)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(895)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(895)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",906,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(912)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(912)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(914)
		::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(914)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(914)
		if ((tmp2)){
			HX_STACK_LINE(916)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(916)
			renderSession->maskManager->pushMask(tmp3);
		}
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(922)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(922)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(922)
			while((true)){
				HX_STACK_LINE(922)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(922)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(922)
				if ((tmp4)){
					HX_STACK_LINE(922)
					break;
				}
				HX_STACK_LINE(922)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(922)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(922)
				++(_g);
				HX_STACK_LINE(924)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(924)
				child->__renderDOM(tmp6);
			}
		}
		HX_STACK_LINE(928)
		{
			HX_STACK_LINE(928)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(928)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(928)
			while((true)){
				HX_STACK_LINE(928)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(928)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(928)
				if ((tmp4)){
					HX_STACK_LINE(928)
					break;
				}
				HX_STACK_LINE(928)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(928)
				::openfl::display::DisplayObject orphan = tmp5;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(928)
				++(_g);
				HX_STACK_LINE(930)
				bool tmp6 = (orphan->stage == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(930)
				if ((tmp6)){
					HX_STACK_LINE(932)
					::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(932)
					orphan->__renderDOM(tmp7);
				}
			}
		}
		HX_STACK_LINE(938)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(940)
		::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(940)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(940)
		if ((tmp4)){
			HX_STACK_LINE(942)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",951,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(953)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(953)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(953)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(953)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(953)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(953)
		if ((tmp3)){
			HX_STACK_LINE(953)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(953)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(953)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(953)
			tmp4 = true;
		}
		HX_STACK_LINE(953)
		if ((tmp4)){
			HX_STACK_LINE(953)
			return null();
		}
		HX_STACK_LINE(955)
		::openfl::geom::Rectangle tmp5 = this->get_scrollRect();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(955)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(955)
		if ((tmp6)){
			HX_STACK_LINE(956)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(957)
			::openfl::geom::Matrix tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(957)
			{
				HX_STACK_LINE(957)
				::openfl::geom::Matrix tmp8 = this->__worldTransform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(957)
				::openfl::geom::Matrix _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(957)
				tmp7 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
			}
			HX_STACK_LINE(957)
			::openfl::geom::Matrix m = tmp7;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(958)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(958)
			::openfl::geom::Matrix tmp9 = m;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(958)
			::openfl::geom::Rectangle tmp10 = tmp8->transform(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(958)
			::openfl::geom::Rectangle clip = tmp10;		HX_STACK_VAR(clip,"clip");
			HX_STACK_LINE(959)
			int tmp11 = renderSession->renderer->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(959)
			Float tmp12 = clip->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(959)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(959)
			Float tmp14 = clip->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(959)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(959)
			clip->y = tmp15;
			HX_STACK_LINE(961)
			::openfl::geom::Rectangle tmp16 = clip;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(961)
			renderSession->spriteBatch->start(tmp16);
		}
		HX_STACK_LINE(965)
		::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(965)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(965)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(965)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(965)
		if ((tmp9)){
			HX_STACK_LINE(965)
			::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(965)
			::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(965)
			::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(965)
			tmp10 = (tmp13 != null());
		}
		else{
			HX_STACK_LINE(965)
			tmp10 = false;
		}
		HX_STACK_LINE(965)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(965)
		if ((tmp10)){
			HX_STACK_LINE(965)
			::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(965)
			::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(965)
			int tmp14 = tmp13->__commands->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(965)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(965)
			tmp11 = (tmp15 > (int)0);
		}
		else{
			HX_STACK_LINE(965)
			tmp11 = false;
		}
		HX_STACK_LINE(965)
		bool masked = tmp11;		HX_STACK_VAR(masked,"masked");
		HX_STACK_LINE(967)
		bool tmp12 = masked;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(967)
		if ((tmp12)){
			HX_STACK_LINE(969)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(970)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(971)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(975)
		::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(975)
		this->super::__renderGL(tmp13);
		HX_STACK_LINE(977)
		{
			HX_STACK_LINE(977)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(977)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(977)
			while((true)){
				HX_STACK_LINE(977)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(977)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(977)
				if ((tmp15)){
					HX_STACK_LINE(977)
					break;
				}
				HX_STACK_LINE(977)
				::openfl::display::DisplayObject tmp16 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(977)
				::openfl::display::DisplayObject child = tmp16;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(977)
				++(_g);
				HX_STACK_LINE(979)
				::openfl::_internal::renderer::RenderSession tmp17 = renderSession;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(979)
				child->__renderGL(tmp17);
			}
		}
		HX_STACK_LINE(983)
		bool tmp14 = masked;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(983)
		if ((tmp14)){
			HX_STACK_LINE(985)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(987)
			renderSession->maskManager->popMask();
			HX_STACK_LINE(988)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(992)
		::openfl::geom::Rectangle tmp15 = this->get_scrollRect();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(992)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(992)
		if ((tmp16)){
			HX_STACK_LINE(993)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(994)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(997)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",1002,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1004)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1004)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1004)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1004)
		if ((tmp2)){
			HX_STACK_LINE(1006)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1006)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1006)
			if ((tmp4)){
				HX_STACK_LINE(1008)
				::String tmp5 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1008)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1008)
				this->dispatchEvent(tmp6);
			}
			HX_STACK_LINE(1012)
			this->stage = stage;
			HX_STACK_LINE(1014)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1014)
			if ((tmp5)){
				HX_STACK_LINE(1016)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1016)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1016)
				this->dispatchEvent(tmp7);
			}
			HX_STACK_LINE(1020)
			bool tmp6 = (this->__children != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1020)
			if ((tmp6)){
				HX_STACK_LINE(1022)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1022)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1022)
				while((true)){
					HX_STACK_LINE(1022)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1022)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1022)
					if ((tmp8)){
						HX_STACK_LINE(1022)
						break;
					}
					HX_STACK_LINE(1022)
					::openfl::display::DisplayObject tmp9 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1022)
					::openfl::display::DisplayObject child = tmp9;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(1022)
					++(_g);
					HX_STACK_LINE(1024)
					::openfl::display::Stage tmp10 = stage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1024)
					child->__setStageReference(tmp10);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",1035,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1037)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1037)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1037)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1037)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(1040)
		bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1040)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1040)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1040)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1040)
		if ((tmp5)){
			HX_STACK_LINE(1040)
			bool tmp7 = this->__isMask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1040)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1040)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1040)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1040)
			tmp6 = false;
		}
		HX_STACK_LINE(1040)
		if ((tmp6)){
			HX_STACK_LINE(1042)
			return null();
		}
		HX_STACK_LINE(1048)
		bool tmp7 = updateChildren;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1048)
		if ((tmp7)){
			HX_STACK_LINE(1050)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1050)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1050)
			while((true)){
				HX_STACK_LINE(1050)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1050)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1050)
				if ((tmp9)){
					HX_STACK_LINE(1050)
					break;
				}
				HX_STACK_LINE(1050)
				::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1050)
				::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1050)
				++(_g);
				HX_STACK_LINE(1052)
				bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1052)
				::openfl::display::Graphics tmp12 = maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1052)
				child->__update(tmp11,true,tmp12);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",1061,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1063)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(1065)
		{
			HX_STACK_LINE(1065)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1065)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1065)
			while((true)){
				HX_STACK_LINE(1065)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1065)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1065)
				if ((tmp2)){
					HX_STACK_LINE(1065)
					break;
				}
				HX_STACK_LINE(1065)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1065)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1065)
				++(_g);
				HX_STACK_LINE(1067)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1067)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1081,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1083)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1083)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObjectContainer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DisplayObjectContainer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
