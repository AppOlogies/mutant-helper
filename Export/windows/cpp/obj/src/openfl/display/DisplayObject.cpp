#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",171,0xc7539829)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(749)
	this->__cacheAsBitmap = false;
	HX_STACK_LINE(724)
	this->__maskCached = false;
	HX_STACK_LINE(761)
	super::__construct(null());
	HX_STACK_LINE(763)
	this->__alpha = (int)1;
	HX_STACK_LINE(764)
	this->__rotation = (int)0;
	HX_STACK_LINE(765)
	this->__scaleX = (int)1;
	HX_STACK_LINE(766)
	this->__scaleY = (int)1;
	HX_STACK_LINE(767)
	this->__visible = true;
	HX_STACK_LINE(768)
	this->__x = (int)0;
	HX_STACK_LINE(769)
	this->__y = (int)0;
	HX_STACK_LINE(771)
	this->__worldAlpha = (int)1;
	HX_STACK_LINE(772)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(772)
	this->__worldTransform = tmp;
	HX_STACK_LINE(773)
	this->__rotationCache = (int)0;
	HX_STACK_LINE(774)
	this->__rotationSine = (int)0;
	HX_STACK_LINE(775)
	this->__rotationCosine = (int)1;
	HX_STACK_LINE(777)
	::openfl::geom::ColorTransform tmp1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(777)
	this->__worldColorTransform = tmp1;
	HX_STACK_LINE(783)
	int tmp2 = ++(::openfl::display::DisplayObject_obj::__instanceCount);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(783)
	::String tmp3 = (HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(783)
	this->set_name(tmp3);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
bool DisplayObject_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","dispatchEvent",0xe6cd7049,"openfl.display.DisplayObject.dispatchEvent","openfl/display/DisplayObject.hx",788,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(790)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(790)
	bool tmp1 = this->super::dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(790)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(792)
	bool tmp2 = event->__isCancelled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(792)
	if ((tmp2)){
		HX_STACK_LINE(794)
		return true;
	}
	HX_STACK_LINE(798)
	bool tmp3 = event->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(798)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(798)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(798)
	if ((tmp4)){
		HX_STACK_LINE(798)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(798)
		::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(798)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(798)
		tmp5 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(798)
		tmp5 = false;
	}
	HX_STACK_LINE(798)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(798)
	if ((tmp5)){
		HX_STACK_LINE(798)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(798)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(798)
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(798)
		tmp6 = false;
	}
	HX_STACK_LINE(798)
	if ((tmp6)){
		HX_STACK_LINE(800)
		event->eventPhase = ::openfl::events::EventPhase_obj::BUBBLING_PHASE;
		HX_STACK_LINE(802)
		bool tmp7 = (event->target == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(802)
		if ((tmp7)){
			HX_STACK_LINE(804)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(808)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(808)
		::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(808)
		tmp8->dispatchEvent(tmp9);
	}
	HX_STACK_LINE(812)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(812)
	return tmp7;
}


::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",841,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(843)
	::openfl::geom::Matrix tmp = this->__getTransform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	::openfl::geom::Matrix matrix = tmp;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(845)
	bool tmp1 = (targetCoordinateSpace != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(845)
	if ((tmp1)){
		HX_STACK_LINE(847)
		::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(847)
		matrix = tmp2;
		HX_STACK_LINE(848)
		::openfl::geom::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(848)
		{
			HX_STACK_LINE(848)
			::openfl::geom::Matrix _this = targetCoordinateSpace->__worldTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(848)
			tmp3 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(848)
		::openfl::geom::Matrix tmp4 = tmp3->invert();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(848)
		matrix->concat(tmp4);
	}
	HX_STACK_LINE(852)
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(852)
	::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(853)
	::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(853)
	::openfl::geom::Matrix tmp4 = matrix;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(853)
	this->__getBounds(tmp3,tmp4);
	HX_STACK_LINE(855)
	::openfl::geom::Rectangle tmp5 = bounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(855)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",878,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(881)
	::openfl::display::DisplayObject tmp = targetCoordinateSpace;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(881)
	::openfl::geom::Rectangle tmp1 = this->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(881)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",903,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(905)
	::openfl::geom::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(905)
		::openfl::geom::Matrix tmp1 = this->__getTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(905)
		tmp = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
	}
	HX_STACK_LINE(905)
	::openfl::geom::Matrix tmp1 = tmp->invert();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(905)
	::openfl::geom::Point tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(905)
	::openfl::geom::Point tmp3 = tmp1->transformPoint(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(905)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",918,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(920)
	bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(920)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(920)
	if ((tmp1)){
		HX_STACK_LINE(920)
		tmp2 = (obj->parent != null());
	}
	else{
		HX_STACK_LINE(920)
		tmp2 = false;
	}
	HX_STACK_LINE(920)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(920)
	if ((tmp2)){
		HX_STACK_LINE(920)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(920)
		::openfl::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(920)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(920)
		tmp3 = false;
	}
	HX_STACK_LINE(920)
	if ((tmp3)){
		HX_STACK_LINE(922)
		::openfl::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(922)
		::openfl::geom::Rectangle currentBounds = tmp4;		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(923)
		::openfl::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(923)
		::openfl::geom::Rectangle targetBounds = tmp5;		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(925)
		::openfl::geom::Rectangle tmp6 = targetBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(925)
		bool tmp7 = currentBounds->intersects(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(925)
		return tmp7;
	}
	HX_STACK_LINE(929)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",950,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(952)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(952)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(952)
		if ((tmp1)){
			HX_STACK_LINE(954)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(954)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(955)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(955)
			::openfl::geom::Matrix tmp4 = this->__getTransform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(955)
			this->__getBounds(tmp3,tmp4);
			HX_STACK_LINE(957)
			::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(957)
			bool tmp6 = bounds->containsPoint(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(957)
			return tmp6;
		}
		HX_STACK_LINE(961)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",989,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(991)
	::openfl::geom::Matrix tmp = this->__getTransform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	::openfl::geom::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(991)
	::openfl::geom::Point tmp2 = tmp->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(991)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObject","__broadcast",0xe41880ea,"openfl.display.DisplayObject.__broadcast","openfl/display/DisplayObject.hx",996,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(998)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(998)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(998)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(998)
	if ((tmp1)){
		HX_STACK_LINE(998)
		::String tmp3 = event->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(998)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(998)
		tmp2 = this->hasEventListener(tmp4);
	}
	else{
		HX_STACK_LINE(998)
		tmp2 = false;
	}
	HX_STACK_LINE(998)
	if ((tmp2)){
		HX_STACK_LINE(1000)
		::openfl::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1000)
		bool tmp4 = this->super::dispatchEvent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1000)
		bool result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1002)
		bool tmp5 = event->__isCancelled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1002)
		if ((tmp5)){
			HX_STACK_LINE(1004)
			return true;
		}
		HX_STACK_LINE(1008)
		bool tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1008)
		return tmp6;
	}
	HX_STACK_LINE(1012)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__broadcast,return )

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",1017,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1019)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1019)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1019)
		if ((tmp1)){
			HX_STACK_LINE(1021)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1021)
			::openfl::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1021)
			::openfl::geom::Matrix tmp4 = matrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1021)
			tmp2->__getBounds(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

::lime::ui::MouseCursor DisplayObject_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getCursor",0xc03df5f5,"openfl.display.DisplayObject.__getCursor","openfl/display/DisplayObject.hx",1030,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1030)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getCursor,return )

bool DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",1037,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(1037)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,return )

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",1042,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(1044)
		this->__getTransform();
		HX_STACK_LINE(1045)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1045)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1045)
		this->__getBounds(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getTransform",0xb0d5c3ad,"openfl.display.DisplayObject.__getTransform","openfl/display/DisplayObject.hx",1050,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1052)
	bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1052)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1052)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1052)
	if ((tmp1)){
		HX_STACK_LINE(1052)
		int tmp3 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1052)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1052)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(1052)
		tmp2 = true;
	}
	HX_STACK_LINE(1052)
	if ((tmp2)){
		HX_STACK_LINE(1054)
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1055)
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1056)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1056)
		bool transformDirty = tmp3;		HX_STACK_VAR(transformDirty,"transformDirty");
		HX_STACK_LINE(1058)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1058)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1058)
		if ((tmp5)){
			HX_STACK_LINE(1060)
			bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1060)
			if ((tmp6)){
				HX_STACK_LINE(1060)
				this->__update(true,false,null());
			}
		}
		else{
			HX_STACK_LINE(1064)
			while((true)){
				HX_STACK_LINE(1064)
				bool tmp6 = (current->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1064)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1064)
				if ((tmp7)){
					HX_STACK_LINE(1064)
					break;
				}
				HX_STACK_LINE(1066)
				::openfl::display::DisplayObject tmp8 = current;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1066)
				list->push(tmp8);
				HX_STACK_LINE(1067)
				current = current->parent;
				HX_STACK_LINE(1069)
				bool tmp9 = current->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1069)
				if ((tmp9)){
					HX_STACK_LINE(1071)
					transformDirty = true;
				}
			}
		}
		HX_STACK_LINE(1079)
		bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1079)
		if ((tmp6)){
			HX_STACK_LINE(1081)
			int i = list->length;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1082)
			while((true)){
				HX_STACK_LINE(1082)
				int tmp7 = --(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1082)
				bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1082)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1082)
				if ((tmp9)){
					HX_STACK_LINE(1082)
					break;
				}
				HX_STACK_LINE(1084)
				::openfl::display::DisplayObject tmp10 = list->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1084)
				tmp10->__update(true,false,null());
			}
		}
	}
	HX_STACK_LINE(1092)
	::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1092)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",1097,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(1099)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1099)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1099)
	if ((tmp1)){
		HX_STACK_LINE(1101)
		bool tmp2 = this->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1101)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1101)
		if ((tmp2)){
			HX_STACK_LINE(1101)
			::openfl::display::Graphics tmp4 = this->__graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1101)
			::openfl::display::Graphics tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1101)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1101)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1101)
			bool tmp8 = shapeFlag;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1101)
			::openfl::geom::Matrix tmp9 = this->__getTransform();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1101)
			::openfl::geom::Matrix tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1101)
			Float tmp11 = tmp6;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1101)
			Float tmp12 = tmp7;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1101)
			bool tmp13 = tmp8;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1101)
			::openfl::geom::Matrix tmp14 = tmp10;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1101)
			tmp3 = tmp5->__hitTest(tmp11,tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(1101)
			tmp3 = false;
		}
		HX_STACK_LINE(1101)
		if ((tmp3)){
			HX_STACK_LINE(1103)
			bool tmp4 = interactiveOnly;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1103)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1103)
			if ((tmp5)){
				HX_STACK_LINE(1105)
				stack->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(1109)
			return true;
		}
	}
	HX_STACK_LINE(1115)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(DisplayObject_obj,__hitTest,return )

Void DisplayObject_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairo",0x75ab477b,"openfl.display.DisplayObject.__renderCairo","openfl/display/DisplayObject.hx",1120,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1122)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1122)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1122)
		if ((tmp1)){
			HX_STACK_LINE(1124)
			::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1124)
			::openfl::_internal::renderer::cairo::CairoShape_obj::render(hx::ObjectPtr<OBJ_>(this),tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairo,(void))

Void DisplayObject_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairoMask",0x9fd38e07,"openfl.display.DisplayObject.__renderCairoMask","openfl/display/DisplayObject.hx",1131,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1133)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1133)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1133)
		if ((tmp1)){
			HX_STACK_LINE(1135)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1135)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1135)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairoMask,(void))

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvas",0x83845285,"openfl.display.DisplayObject.__renderCanvas","openfl/display/DisplayObject.hx",1142,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1144)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1144)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1144)
		if ((tmp1)){
			HX_STACK_LINE(1146)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvasMask",0x388fe611,"openfl.display.DisplayObject.__renderCanvasMask","openfl/display/DisplayObject.hx",1153,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1155)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1155)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1155)
		if ((tmp1)){
			HX_STACK_LINE(1157)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1157)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1157)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvasMask,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderDOM",0xd2568ab5,"openfl.display.DisplayObject.__renderDOM","openfl/display/DisplayObject.hx",1164,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1166)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1166)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1166)
		if ((tmp1)){
			HX_STACK_LINE(1168)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderGL",0xe0ccbd32,"openfl.display.DisplayObject.__renderGL","openfl/display/DisplayObject.hx",1175,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1177)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1177)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1177)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1177)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1177)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1177)
		if ((tmp3)){
			HX_STACK_LINE(1177)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1177)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1177)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(1177)
			tmp4 = true;
		}
		HX_STACK_LINE(1177)
		if ((tmp4)){
			HX_STACK_LINE(1177)
			return null();
		}
		HX_STACK_LINE(1179)
		::openfl::display::Graphics tmp5 = this->__graphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1179)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1179)
		if ((tmp6)){
			HX_STACK_LINE(1181)
			::openfl::display::Graphics tmp7 = this->__graphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1181)
			bool tmp8 = tmp7->__hardware;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1181)
			if ((tmp8)){
				HX_STACK_LINE(1183)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1183)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp9);
			}
			else{
				HX_STACK_LINE(1190)
				::openfl::display::Graphics tmp9 = this->__graphics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1190)
				::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1190)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp9,tmp10);
				HX_STACK_LINE(1193)
				::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1193)
				::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",1202,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1204)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1204)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1204)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1204)
		if ((tmp2)){
			HX_STACK_LINE(1206)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1206)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1206)
			if ((tmp4)){
				HX_STACK_LINE(1208)
				::String tmp5 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1208)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1208)
				this->dispatchEvent(tmp6);
			}
			HX_STACK_LINE(1212)
			this->stage = stage;
			HX_STACK_LINE(1214)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1214)
			if ((tmp5)){
				HX_STACK_LINE(1216)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1216)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1216)
				this->dispatchEvent(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",1225,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1227)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1227)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1227)
		if ((tmp1)){
			HX_STACK_LINE(1229)
			this->__renderDirty = true;
			HX_STACK_LINE(1230)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",1237,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1239)
		bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1239)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1239)
		if ((tmp1)){
			HX_STACK_LINE(1241)
			this->__transformDirty = true;
			HX_STACK_LINE(1242)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",1249,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1251)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1251)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1251)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1251)
		if ((tmp1)){
			HX_STACK_LINE(1251)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1251)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1251)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1251)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(1251)
			tmp2 = false;
		}
		HX_STACK_LINE(1251)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1251)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1251)
		if ((tmp3)){
			HX_STACK_LINE(1251)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1251)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1251)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1251)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(1251)
			tmp4 = false;
		}
		HX_STACK_LINE(1251)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1251)
		if ((tmp4)){
			HX_STACK_LINE(1251)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1251)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1251)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1251)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1251)
			tmp5 = false;
		}
		HX_STACK_LINE(1251)
		this->__renderable = tmp5;
		HX_STACK_LINE(1254)
		Float tmp6 = this->get_rotation();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1254)
		Float tmp7 = this->__rotationCache;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1254)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1254)
		if ((tmp8)){
			HX_STACK_LINE(1256)
			Float tmp9 = this->get_rotation();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1256)
			this->__rotationCache = tmp9;
			HX_STACK_LINE(1257)
			Float tmp10 = this->get_rotation();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1257)
			Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1257)
			Float tmp12 = (Float(tmp11) / Float((int)180));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1257)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1257)
			Float radians = tmp13;		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(1258)
			Float tmp14 = radians;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1258)
			Float tmp15 = ::Math_obj::sin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1258)
			this->__rotationSine = tmp15;
			HX_STACK_LINE(1259)
			Float tmp16 = radians;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1259)
			Float tmp17 = ::Math_obj::cos(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1259)
			this->__rotationCosine = tmp17;
		}
		HX_STACK_LINE(1263)
		::openfl::geom::Rectangle tmp9 = this->get_scrollRect();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1263)
		::openfl::geom::Rectangle sr = tmp9;		HX_STACK_VAR(sr,"sr");
		HX_STACK_LINE(1265)
		::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1265)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1265)
		if ((tmp11)){
			HX_STACK_LINE(1267)
			::openfl::display::DisplayObjectContainer tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1267)
			::openfl::geom::Matrix parentTransform = tmp12->__worldTransform;		HX_STACK_VAR(parentTransform,"parentTransform");
			HX_STACK_LINE(1269)
			Float tmp13 = this->__rotationCosine;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1269)
			Float tmp14 = this->get_scaleX();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1269)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1269)
			Float a00 = tmp15;		HX_STACK_VAR(a00,"a00");
			HX_STACK_LINE(1270)
			Float tmp16 = this->__rotationSine;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1270)
			Float tmp17 = this->get_scaleX();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1270)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1270)
			Float a01 = tmp18;		HX_STACK_VAR(a01,"a01");
			HX_STACK_LINE(1271)
			Float tmp19 = this->__rotationSine;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1271)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1271)
			Float tmp21 = this->get_scaleY();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1271)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1271)
			Float a10 = tmp22;		HX_STACK_VAR(a10,"a10");
			HX_STACK_LINE(1272)
			Float tmp23 = this->__rotationCosine;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1272)
			Float tmp24 = this->get_scaleY();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1272)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1272)
			Float a11 = tmp25;		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(1273)
			Float b00 = parentTransform->a;		HX_STACK_VAR(b00,"b00");
			HX_STACK_LINE(1274)
			Float b01 = parentTransform->b;		HX_STACK_VAR(b01,"b01");
			HX_STACK_LINE(1275)
			Float b10 = parentTransform->c;		HX_STACK_VAR(b10,"b10");
			HX_STACK_LINE(1276)
			Float b11 = parentTransform->d;		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(1278)
			::openfl::geom::Matrix tmp26 = this->__worldTransform;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1278)
			bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1278)
			if ((tmp27)){
				HX_STACK_LINE(1278)
				::openfl::geom::Matrix tmp28 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1278)
				this->__worldTransform = tmp28;
			}
			HX_STACK_LINE(1280)
			Float tmp28 = (a00 * b00);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1280)
			Float tmp29 = (a01 * b10);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1280)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1280)
			::openfl::geom::Matrix tmp31 = this->__worldTransform;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1280)
			tmp31->a = tmp30;
			HX_STACK_LINE(1281)
			Float tmp32 = (a00 * b01);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1281)
			Float tmp33 = (a01 * b11);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1281)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1281)
			::openfl::geom::Matrix tmp35 = this->__worldTransform;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1281)
			tmp35->b = tmp34;
			HX_STACK_LINE(1282)
			Float tmp36 = (a10 * b00);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1282)
			Float tmp37 = (a11 * b10);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1282)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1282)
			::openfl::geom::Matrix tmp39 = this->__worldTransform;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1282)
			tmp39->c = tmp38;
			HX_STACK_LINE(1283)
			Float tmp40 = (a10 * b01);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1283)
			Float tmp41 = (a11 * b11);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1283)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1283)
			::openfl::geom::Matrix tmp43 = this->__worldTransform;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1283)
			tmp43->d = tmp42;
			HX_STACK_LINE(1284)
			Float tmp44 = this->get_x();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1284)
			Float tmp45 = b00;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1284)
			Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1284)
			Float tmp47 = this->get_y();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1284)
			Float tmp48 = b10;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1284)
			Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1284)
			Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1284)
			Float tmp51 = parentTransform->tx;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1284)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1284)
			::openfl::geom::Matrix tmp53 = this->__worldTransform;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1284)
			tmp53->tx = tmp52;
			HX_STACK_LINE(1285)
			Float tmp54 = this->get_x();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1285)
			Float tmp55 = b01;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1285)
			Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1285)
			Float tmp57 = this->get_y();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1285)
			Float tmp58 = b11;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1285)
			Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1285)
			Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1285)
			Float tmp61 = parentTransform->ty;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1285)
			Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1285)
			::openfl::geom::Matrix tmp63 = this->__worldTransform;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1285)
			tmp63->ty = tmp62;
			HX_STACK_LINE(1287)
			bool tmp64 = (sr != null());		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1287)
			if ((tmp64)){
				HX_STACK_LINE(1288)
				::openfl::geom::Matrix tmp65 = this->__worldTransform;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1288)
				Float tmp66 = tmp65->a;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1288)
				bool tmp67 = (tmp66 != (int)1);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1288)
				bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1288)
				bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1288)
				bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1288)
				if ((tmp69)){
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp71 = this->__worldTransform;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(1288)
					Float tmp74 = tmp73->b;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1288)
					tmp70 = (tmp74 != (int)0);
				}
				else{
					HX_STACK_LINE(1288)
					tmp70 = true;
				}
				HX_STACK_LINE(1288)
				bool tmp71 = !(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1288)
				bool tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1288)
				bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1288)
				if ((tmp72)){
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp74 = this->__worldTransform;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1288)
					Float tmp77 = tmp76->c;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1288)
					tmp73 = (tmp77 != (int)0);
				}
				else{
					HX_STACK_LINE(1288)
					tmp73 = true;
				}
				HX_STACK_LINE(1288)
				bool tmp74 = !(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1288)
				bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1288)
				if ((tmp74)){
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp76 = this->__worldTransform;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1288)
					::openfl::geom::Matrix tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1288)
					Float tmp78 = tmp77->d;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(1288)
					tmp75 = (tmp78 != (int)1);
				}
				else{
					HX_STACK_LINE(1288)
					tmp75 = true;
				}
				HX_STACK_LINE(1288)
				if ((tmp75)){
					HX_STACK_LINE(1289)
					::openfl::geom::Matrix tmp76 = this->__worldTransform;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1289)
					::openfl::geom::Rectangle tmp77 = sr->transform(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1289)
					sr = tmp77;
				}
				HX_STACK_LINE(1291)
				Float tmp76 = this->get_x();		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1291)
				Float tmp77 = sr->x;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(1291)
				Float tmp78 = (tmp76 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(1291)
				Float tmp79 = b00;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(1291)
				Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1291)
				Float tmp81 = this->get_y();		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(1291)
				Float tmp82 = sr->y;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(1291)
				Float tmp83 = (tmp81 - tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(1291)
				Float tmp84 = b10;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(1291)
				Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(1291)
				Float tmp86 = (tmp80 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(1291)
				Float tmp87 = parentTransform->tx;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(1291)
				Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(1291)
				::openfl::geom::Matrix tmp89 = this->__worldTransform;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(1291)
				tmp89->tx = tmp88;
				HX_STACK_LINE(1292)
				Float tmp90 = this->get_x();		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(1292)
				Float tmp91 = sr->x;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(1292)
				Float tmp92 = (tmp90 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(1292)
				Float tmp93 = b01;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(1292)
				Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(1292)
				Float tmp95 = this->get_y();		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(1292)
				Float tmp96 = sr->y;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(1292)
				Float tmp97 = (tmp95 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(1292)
				Float tmp98 = b11;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(1292)
				Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(1292)
				Float tmp100 = (tmp94 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1292)
				Float tmp101 = parentTransform->ty;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1292)
				Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1292)
				::openfl::geom::Matrix tmp103 = this->__worldTransform;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1292)
				tmp103->ty = tmp102;
			}
			HX_STACK_LINE(1295)
			bool tmp65 = this->__isMask;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1295)
			if ((tmp65)){
				HX_STACK_LINE(1295)
				this->__maskCached = false;
			}
		}
		else{
			HX_STACK_LINE(1299)
			Float tmp12 = this->__rotationCosine;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1299)
			Float tmp13 = this->get_scaleX();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1299)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1299)
			::openfl::geom::Matrix tmp15 = this->__worldTransform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1299)
			tmp15->a = tmp14;
			HX_STACK_LINE(1300)
			Float tmp16 = this->__rotationSine;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1300)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1300)
			Float tmp18 = this->get_scaleY();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1300)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1300)
			::openfl::geom::Matrix tmp20 = this->__worldTransform;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1300)
			tmp20->c = tmp19;
			HX_STACK_LINE(1301)
			Float tmp21 = this->__rotationSine;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1301)
			Float tmp22 = this->get_scaleX();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1301)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1301)
			::openfl::geom::Matrix tmp24 = this->__worldTransform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1301)
			tmp24->b = tmp23;
			HX_STACK_LINE(1302)
			Float tmp25 = this->__rotationCosine;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1302)
			Float tmp26 = this->get_scaleY();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1302)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1302)
			::openfl::geom::Matrix tmp28 = this->__worldTransform;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1302)
			tmp28->d = tmp27;
			HX_STACK_LINE(1303)
			Float tmp29 = this->get_x();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1303)
			::openfl::geom::Matrix tmp30 = this->__worldTransform;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1303)
			tmp30->tx = tmp29;
			HX_STACK_LINE(1304)
			Float tmp31 = this->get_y();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1304)
			::openfl::geom::Matrix tmp32 = this->__worldTransform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1304)
			tmp32->ty = tmp31;
			HX_STACK_LINE(1306)
			bool tmp33 = (sr != null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1306)
			if ((tmp33)){
				HX_STACK_LINE(1307)
				::openfl::geom::Matrix tmp34 = this->__worldTransform;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1307)
				Float tmp35 = tmp34->a;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1307)
				bool tmp36 = (tmp35 != (int)1);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1307)
				bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1307)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1307)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1307)
				if ((tmp38)){
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp40 = this->__worldTransform;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1307)
					Float tmp43 = tmp42->b;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1307)
					tmp39 = (tmp43 != (int)0);
				}
				else{
					HX_STACK_LINE(1307)
					tmp39 = true;
				}
				HX_STACK_LINE(1307)
				bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1307)
				bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1307)
				bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1307)
				if ((tmp41)){
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp43 = this->__worldTransform;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1307)
					Float tmp46 = tmp45->c;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1307)
					tmp42 = (tmp46 != (int)0);
				}
				else{
					HX_STACK_LINE(1307)
					tmp42 = true;
				}
				HX_STACK_LINE(1307)
				bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1307)
				bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1307)
				if ((tmp43)){
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp45 = this->__worldTransform;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1307)
					::openfl::geom::Matrix tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1307)
					Float tmp47 = tmp46->d;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1307)
					tmp44 = (tmp47 != (int)1);
				}
				else{
					HX_STACK_LINE(1307)
					tmp44 = true;
				}
				HX_STACK_LINE(1307)
				if ((tmp44)){
					HX_STACK_LINE(1308)
					::openfl::geom::Matrix tmp45 = this->__worldTransform;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1308)
					::openfl::geom::Rectangle tmp46 = sr->transform(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1308)
					sr = tmp46;
				}
				HX_STACK_LINE(1310)
				Float tmp45 = this->get_x();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1310)
				::openfl::geom::Rectangle tmp46 = this->get_scrollRect();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1310)
				Float tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1310)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1310)
				::openfl::geom::Matrix tmp49 = this->__worldTransform;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1310)
				tmp49->tx = tmp48;
				HX_STACK_LINE(1311)
				Float tmp50 = this->get_y();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1311)
				::openfl::geom::Rectangle tmp51 = this->get_scrollRect();		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1311)
				Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1311)
				Float tmp53 = (tmp50 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1311)
				::openfl::geom::Matrix tmp54 = this->__worldTransform;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1311)
				tmp54->ty = tmp53;
			}
		}
		HX_STACK_LINE(1316)
		bool tmp12 = updateChildren;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1316)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1316)
		if ((tmp12)){
			HX_STACK_LINE(1316)
			tmp13 = this->__transformDirty;
		}
		else{
			HX_STACK_LINE(1316)
			tmp13 = false;
		}
		HX_STACK_LINE(1316)
		if ((tmp13)){
			HX_STACK_LINE(1318)
			this->__transformDirty = false;
			HX_STACK_LINE(1319)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
		HX_STACK_LINE(1323)
		bool tmp14 = transformOnly;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1323)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1323)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1323)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1323)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1323)
		if ((tmp17)){
			HX_STACK_LINE(1323)
			::openfl::display::DisplayObject tmp19 = this->__mask;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1323)
			::openfl::display::DisplayObject tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1323)
			::openfl::display::DisplayObject tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1323)
			tmp18 = (tmp21 != null());
		}
		else{
			HX_STACK_LINE(1323)
			tmp18 = false;
		}
		HX_STACK_LINE(1323)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1323)
		if ((tmp18)){
			HX_STACK_LINE(1323)
			::openfl::display::DisplayObject tmp20 = this->__mask;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1323)
			::openfl::display::DisplayObject tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1323)
			bool tmp22 = tmp21->__maskCached;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1323)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1323)
			tmp19 = !(tmp23);
		}
		else{
			HX_STACK_LINE(1323)
			tmp19 = false;
		}
		HX_STACK_LINE(1323)
		if ((tmp19)){
			HX_STACK_LINE(1325)
			::openfl::display::Graphics tmp20 = this->__maskGraphics;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1325)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1325)
			if ((tmp21)){
				HX_STACK_LINE(1326)
				::openfl::display::Graphics tmp22 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1326)
				this->__maskGraphics = tmp22;
			}
			HX_STACK_LINE(1329)
			::openfl::display::Graphics tmp22 = this->__maskGraphics;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1329)
			tmp22->clear();
			HX_STACK_LINE(1331)
			::openfl::display::DisplayObject tmp23 = this->__mask;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1331)
			::openfl::display::Graphics tmp24 = this->__maskGraphics;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1331)
			tmp23->__update(true,true,tmp24);
			HX_STACK_LINE(1332)
			::openfl::display::DisplayObject tmp25 = this->__mask;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1332)
			tmp25->__maskCached = true;
		}
		HX_STACK_LINE(1336)
		bool tmp20 = (maskGraphics != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1336)
		if ((tmp20)){
			HX_STACK_LINE(1338)
			::openfl::display::Graphics tmp21 = maskGraphics;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1338)
			this->__updateMask(tmp21);
		}
		HX_STACK_LINE(1343)
		bool tmp21 = transformOnly;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1343)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1343)
		if ((tmp22)){
			HX_STACK_LINE(1352)
			::openfl::geom::ColorTransform tmp23 = this->__worldColorTransform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1352)
			::openfl::geom::Transform tmp24 = this->get_transform();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1352)
			::openfl::geom::ColorTransform tmp25 = tmp24->get_colorTransform();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1352)
			bool tmp26 = tmp23->__equals(tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1352)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1352)
			if ((tmp27)){
				HX_STACK_LINE(1353)
				::openfl::geom::Transform tmp28 = this->get_transform();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1353)
				::openfl::geom::ColorTransform tmp29 = tmp28->get_colorTransform();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1353)
				::openfl::geom::ColorTransform tmp30 = tmp29->__clone();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1353)
				this->__worldColorTransform = tmp30;
			}
			HX_STACK_LINE(1356)
			::openfl::display::DisplayObjectContainer tmp28 = this->parent;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1356)
			bool tmp29 = (tmp28 != null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1356)
			if ((tmp29)){
				HX_STACK_LINE(1360)
				Float tmp30 = this->get_alpha();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1360)
				::openfl::display::DisplayObjectContainer tmp31 = this->parent;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1360)
				Float tmp32 = tmp31->__worldAlpha;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1360)
				Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1360)
				this->__worldAlpha = tmp33;
				HX_STACK_LINE(1361)
				::openfl::geom::ColorTransform tmp34 = this->__worldColorTransform;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1361)
				::openfl::display::DisplayObjectContainer tmp35 = this->parent;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1361)
				::openfl::geom::ColorTransform tmp36 = tmp35->__worldColorTransform;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1361)
				tmp34->__combine(tmp36);
				HX_STACK_LINE(1363)
				::openfl::display::BlendMode tmp37 = this->blendMode;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1363)
				bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1363)
				bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1363)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1363)
				if ((tmp39)){
					HX_STACK_LINE(1363)
					::openfl::display::BlendMode tmp41 = this->blendMode;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1363)
					::openfl::display::BlendMode tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1363)
					tmp40 = (tmp42 == ::openfl::display::BlendMode_obj::NORMAL);
				}
				else{
					HX_STACK_LINE(1363)
					tmp40 = true;
				}
				HX_STACK_LINE(1363)
				if ((tmp40)){
					HX_STACK_LINE(1365)
					::openfl::display::DisplayObjectContainer tmp41 = this->parent;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1365)
					this->__blendMode = tmp41->__blendMode;
				}
			}
			else{
				HX_STACK_LINE(1403)
				Float tmp30 = this->get_alpha();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1403)
				this->__worldAlpha = tmp30;
			}
			HX_STACK_LINE(1427)
			bool tmp30 = updateChildren;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1427)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1427)
			if ((tmp30)){
				HX_STACK_LINE(1427)
				tmp31 = this->__renderDirty;
			}
			else{
				HX_STACK_LINE(1427)
				tmp31 = false;
			}
			HX_STACK_LINE(1427)
			if ((tmp31)){
				HX_STACK_LINE(1429)
				this->__renderDirty = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateChildren",0xcfbb21df,"openfl.display.DisplayObject.__updateChildren","openfl/display/DisplayObject.hx",1438,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1440)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1440)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1440)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1440)
		if ((tmp1)){
			HX_STACK_LINE(1440)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1440)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1440)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1440)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(1440)
			tmp2 = false;
		}
		HX_STACK_LINE(1440)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1440)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1440)
		if ((tmp3)){
			HX_STACK_LINE(1440)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1440)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1440)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1440)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(1440)
			tmp4 = false;
		}
		HX_STACK_LINE(1440)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1440)
		if ((tmp4)){
			HX_STACK_LINE(1440)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1440)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1440)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1440)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1440)
			tmp5 = false;
		}
		HX_STACK_LINE(1440)
		this->__renderable = tmp5;
		HX_STACK_LINE(1441)
		bool tmp6 = this->__renderable;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1441)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1441)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1441)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1441)
		if ((tmp8)){
			HX_STACK_LINE(1441)
			bool tmp10 = this->__isMask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1441)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1441)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1441)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(1441)
			tmp9 = false;
		}
		HX_STACK_LINE(1441)
		if ((tmp9)){
			HX_STACK_LINE(1441)
			return null();
		}
		HX_STACK_LINE(1442)
		Float tmp10 = this->get_alpha();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1442)
		this->__worldAlpha = tmp10;
		HX_STACK_LINE(1444)
		bool tmp11 = this->__transformDirty;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1444)
		if ((tmp11)){
			HX_STACK_LINE(1446)
			this->__transformDirty = false;
			HX_STACK_LINE(1447)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateMask",0x5b0e798c,"openfl.display.DisplayObject.__updateMask","openfl/display/DisplayObject.hx",1454,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1456)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1456)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1456)
		if ((tmp1)){
			HX_STACK_LINE(1458)
			::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1458)
			::openfl::display::DrawCommand tmp3 = ::openfl::display::DrawCommand_obj::OverrideMatrix(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1458)
			maskGraphics->__commands->push(tmp3);
			HX_STACK_LINE(1459)
			::openfl::display::Graphics tmp4 = this->__graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1459)
			maskGraphics->__commands = maskGraphics->__commands->concat(tmp4->__commands);
			HX_STACK_LINE(1460)
			maskGraphics->set___dirty(true);
			HX_STACK_LINE(1461)
			maskGraphics->__visible = true;
			HX_STACK_LINE(1463)
			bool tmp5 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1463)
			if ((tmp5)){
				HX_STACK_LINE(1465)
				::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1465)
				maskGraphics->__bounds = tmp6;
			}
			HX_STACK_LINE(1469)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1469)
			::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1469)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1469)
			tmp6->__getBounds(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",1483,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1485)
	Float tmp = this->__alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1485)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",1490,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1492)
	bool tmp = (value > ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1492)
	if ((tmp)){
		HX_STACK_LINE(1492)
		value = ((Float)1.0);
	}
	HX_STACK_LINE(1493)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1493)
	Float tmp2 = this->__alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1493)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1493)
	if ((tmp3)){
		HX_STACK_LINE(1493)
		bool tmp4 = this->__renderDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1493)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1493)
		if ((tmp5)){
			HX_STACK_LINE(1493)
			this->__renderDirty = true;
			HX_STACK_LINE(1493)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1494)
	Float tmp4 = this->__alpha = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1494)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

::openfl::display::BlendMode DisplayObject_obj::set_blendMode( ::openfl::display::BlendMode value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_blendMode",0x330a4380,"openfl.display.DisplayObject.set_blendMode","openfl/display/DisplayObject.hx",1499,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1501)
	this->__blendMode = value;
	HX_STACK_LINE(1502)
	::openfl::display::BlendMode tmp = this->blendMode = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1502)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",1507,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1509)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1509)
	if ((tmp)){
		HX_STACK_LINE(1511)
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(1515)
		return this->__filters->copy();
	}
	HX_STACK_LINE(1509)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",1526,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1526)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",1531,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1533)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1533)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1534)
	{
		HX_STACK_LINE(1534)
		this->__getTransform();
		HX_STACK_LINE(1534)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1534)
		::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1534)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1536)
	Float tmp1 = bounds->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1536)
	Float tmp2 = this->get_scaleY();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1536)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1536)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",1541,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1543)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1543)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1544)
	{
		HX_STACK_LINE(1544)
		this->__getTransform();
		HX_STACK_LINE(1544)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1544)
		::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1544)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1546)
	bool tmp1 = (value != bounds->height);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1546)
	if ((tmp1)){
		HX_STACK_LINE(1548)
		Float tmp2 = (Float(value) / Float(bounds->height));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1548)
		this->set_scaleY(tmp2);
	}
	else{
		HX_STACK_LINE(1552)
		this->set_scaleY((int)1);
	}
	HX_STACK_LINE(1556)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1556)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",1561,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1563)
	::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1563)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",1568,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1570)
	::openfl::display::DisplayObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1570)
	::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1570)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1570)
	if ((tmp2)){
		HX_STACK_LINE(1571)
		{
			HX_STACK_LINE(1571)
			bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1571)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1571)
			if ((tmp4)){
				HX_STACK_LINE(1571)
				this->__transformDirty = true;
				HX_STACK_LINE(1571)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1572)
		{
			HX_STACK_LINE(1572)
			bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1572)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1572)
			if ((tmp4)){
				HX_STACK_LINE(1572)
				this->__renderDirty = true;
				HX_STACK_LINE(1572)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(1574)
	::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1574)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1574)
	if ((tmp4)){
		HX_STACK_LINE(1575)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1575)
		tmp5->__isMask = false;
		HX_STACK_LINE(1576)
		::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1576)
		tmp6->__maskCached = false;
		HX_STACK_LINE(1577)
		{
			HX_STACK_LINE(1577)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1577)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1577)
			bool tmp8 = _this->__transformDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1577)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1577)
			if ((tmp9)){
				HX_STACK_LINE(1577)
				_this->__transformDirty = true;
				HX_STACK_LINE(1577)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1578)
		{
			HX_STACK_LINE(1578)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1578)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1578)
			bool tmp8 = _this->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1578)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1578)
			if ((tmp9)){
				HX_STACK_LINE(1578)
				_this->__renderDirty = true;
				HX_STACK_LINE(1578)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(1579)
		this->__maskGraphics = null();
	}
	HX_STACK_LINE(1581)
	bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1581)
	if ((tmp5)){
		HX_STACK_LINE(1581)
		value->__isMask = true;
	}
	HX_STACK_LINE(1582)
	::openfl::display::DisplayObject tmp6 = this->__mask = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1582)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",1587,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1589)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1589)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1589)
	if ((tmp1)){
		HX_STACK_LINE(1591)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1591)
		Float tmp3 = tmp2->__mouseX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1591)
		::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(tmp3,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1591)
		::openfl::geom::Point tmp5 = this->globalToLocal(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1591)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1591)
		return tmp6;
	}
	HX_STACK_LINE(1595)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",1600,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1602)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1602)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1602)
	if ((tmp1)){
		HX_STACK_LINE(1604)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1604)
		Float tmp3 = tmp2->__mouseY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1604)
		::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1604)
		::openfl::geom::Point tmp5 = this->globalToLocal(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1604)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1604)
		return tmp6;
	}
	HX_STACK_LINE(1608)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",1613,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1615)
	::String tmp = this->__name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1615)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",1620,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1622)
	::String tmp = this->__name = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1622)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",1627,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1629)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1629)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1629)
	if ((tmp1)){
		HX_STACK_LINE(1631)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1631)
		return tmp2;
	}
	HX_STACK_LINE(1635)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",1640,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1642)
	Float tmp = this->__rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1642)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",1647,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1649)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1649)
	Float tmp1 = this->__rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1649)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1649)
	if ((tmp2)){
		HX_STACK_LINE(1649)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1649)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1649)
		if ((tmp4)){
			HX_STACK_LINE(1649)
			this->__transformDirty = true;
			HX_STACK_LINE(1649)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1650)
	Float tmp3 = this->__rotation = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1650)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",1655,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1657)
	Float tmp = this->__scaleX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1657)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",1662,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1664)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1664)
	Float tmp1 = this->__scaleX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1664)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1664)
	if ((tmp2)){
		HX_STACK_LINE(1664)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1664)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1664)
		if ((tmp4)){
			HX_STACK_LINE(1664)
			this->__transformDirty = true;
			HX_STACK_LINE(1664)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1665)
	Float tmp3 = this->__scaleX = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1665)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",1670,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1672)
	Float tmp = this->__scaleY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1672)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",1677,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1679)
	Float tmp = this->__scaleY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1679)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1679)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1679)
	if ((tmp2)){
		HX_STACK_LINE(1679)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1679)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1679)
		if ((tmp4)){
			HX_STACK_LINE(1679)
			this->__transformDirty = true;
			HX_STACK_LINE(1679)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1680)
	Float tmp3 = this->__scaleY = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1680)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",1685,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1687)
	::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1687)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1687)
	if ((tmp1)){
		HX_STACK_LINE(1687)
		return null();
	}
	HX_STACK_LINE(1689)
	::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1689)
	::openfl::geom::Rectangle tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1689)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",1694,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1696)
	::openfl::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1696)
	::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1696)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1696)
	if ((tmp2)){
		HX_STACK_LINE(1698)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1698)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1698)
		if ((tmp4)){
			HX_STACK_LINE(1698)
			this->__transformDirty = true;
			HX_STACK_LINE(1698)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1703)
	::openfl::geom::Rectangle tmp3 = this->__scrollRect = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1703)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",1708,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1710)
	::openfl::geom::Transform tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1710)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1710)
	if ((tmp1)){
		HX_STACK_LINE(1712)
		::openfl::geom::Transform tmp2 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1712)
		this->__transform = tmp2;
	}
	HX_STACK_LINE(1716)
	::openfl::geom::Transform tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1716)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",1721,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1723)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1723)
	if ((tmp)){
		HX_STACK_LINE(1725)
		::openfl::errors::TypeError tmp1 = ::openfl::errors::TypeError_obj::__new(HX_HCSTRING("Parameter transform must be non-null.","\x56","\x12","\xfe","\x6e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1725)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(1729)
	::openfl::geom::Transform tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1729)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1729)
	if ((tmp2)){
		HX_STACK_LINE(1731)
		::openfl::geom::Transform tmp3 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1731)
		this->__transform = tmp3;
	}
	HX_STACK_LINE(1735)
	{
		HX_STACK_LINE(1735)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1735)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1735)
		if ((tmp4)){
			HX_STACK_LINE(1735)
			this->__transformDirty = true;
			HX_STACK_LINE(1735)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1736)
	::openfl::geom::Transform tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1736)
	::openfl::geom::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1736)
	{
		HX_STACK_LINE(1736)
		::openfl::geom::Matrix tmp5 = value->get_matrix();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1736)
		::openfl::geom::Matrix _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1736)
		tmp4 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
	}
	HX_STACK_LINE(1736)
	tmp3->set_matrix(tmp4);
	HX_STACK_LINE(1737)
	::openfl::geom::Transform tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1737)
	::openfl::geom::ColorTransform tmp6 = value->get_colorTransform();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1737)
	::openfl::geom::ColorTransform tmp7 = tmp6->__clone();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1737)
	tmp5->set_colorTransform(tmp7);
	HX_STACK_LINE(1739)
	::openfl::geom::Transform tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1739)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",1744,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1746)
	bool tmp = this->__visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1746)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",1751,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1753)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1753)
	bool tmp1 = this->__visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1753)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1753)
	if ((tmp2)){
		HX_STACK_LINE(1753)
		bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1753)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1753)
		if ((tmp4)){
			HX_STACK_LINE(1753)
			this->__renderDirty = true;
			HX_STACK_LINE(1753)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1754)
	bool tmp3 = this->__visible = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1754)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",1759,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1761)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1761)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1762)
	{
		HX_STACK_LINE(1762)
		this->__getTransform();
		HX_STACK_LINE(1762)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1762)
		::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1762)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1764)
	Float tmp1 = bounds->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1764)
	Float tmp2 = this->get_scaleX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1764)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1764)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",1769,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1771)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1771)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1772)
	{
		HX_STACK_LINE(1772)
		this->__getTransform();
		HX_STACK_LINE(1772)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1772)
		::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1772)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1774)
	bool tmp1 = (value != bounds->width);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1774)
	if ((tmp1)){
		HX_STACK_LINE(1776)
		Float tmp2 = (Float(value) / Float(bounds->width));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1776)
		this->set_scaleX(tmp2);
	}
	else{
		HX_STACK_LINE(1780)
		this->set_scaleX((int)1);
	}
	HX_STACK_LINE(1784)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1784)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",1789,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1791)
	Float tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1791)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",1796,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1798)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1798)
	Float tmp1 = this->__x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1798)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1798)
	if ((tmp2)){
		HX_STACK_LINE(1798)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1798)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1798)
		if ((tmp4)){
			HX_STACK_LINE(1798)
			this->__transformDirty = true;
			HX_STACK_LINE(1798)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1799)
	Float tmp3 = this->__x = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1799)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",1804,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1806)
	Float tmp = this->__y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1806)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",1811,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1813)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1813)
	Float tmp1 = this->__y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1813)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1813)
	if ((tmp2)){
		HX_STACK_LINE(1813)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1813)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1813)
		if ((tmp4)){
			HX_STACK_LINE(1813)
			this->__transformDirty = true;
			HX_STACK_LINE(1813)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1814)
	Float tmp3 = this->__y = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1814)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

int DisplayObject_obj::__instanceCount;

int DisplayObject_obj::__worldRenderDirty;

int DisplayObject_obj::__worldTransformDirty;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_MARK_MEMBER_NAME(__maskCached,"__maskCached");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCache,"__rotationCache");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(__scaleY,"__scaleY");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_MARK_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_MEMBER_NAME(__y,"__y");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_VISIT_MEMBER_NAME(__maskCached,"__maskCached");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCache,"__rotationCache");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(__scaleY,"__scaleY");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_VISIT_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	HX_VISIT_MEMBER_NAME(__x,"__x");
	HX_VISIT_MEMBER_NAME(__y,"__y");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		if (HX_FIELD_EQ(inName,"__y") ) { return __y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp == hx::paccAlways ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return __scaleX; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return __scaleY; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { return __maskCached; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { return __maskGraphics; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__getTransform") ) { return __getTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__rotationCache") ) { return __rotationCache; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { return __worldTransformCache; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { return __worldTransformChanged; }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = __instanceCount; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { outValue = __worldRenderDirty; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { outValue = __worldTransformDirty; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { __y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { __scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { __scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue);blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { __maskCached=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { __maskGraphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__rotationCache") ) { __rotationCache=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { __worldTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { __worldTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { __worldRenderDirty=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { __worldTransformDirty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"));
	outFields->push(HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"));
	outFields->push(HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"));
	outFields->push(HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"));
	outFields->push(HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"));
	outFields->push(HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCache","\x04","\x45","\xd1","\x3c"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4"));
	outFields->push(HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"));
	outFields->push(HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"));
	outFields->push(HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"));
	outFields->push(HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"));
	outFields->push(HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"));
	outFields->push(HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"));
	outFields->push(HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"));
	outFields->push(HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"));
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__y","\x59","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,cacheAsBitmap),HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__maskGraphics),HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__maskCached),HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCache),HX_HCSTRING("__rotationCache","\x04","\x45","\xd1","\x3c")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__scaleX),HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__scaleY),HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransformCache),HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldTransformChanged),HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__y),HX_HCSTRING("__y","\x59","\x69","\x48","\x00")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(DisplayObject_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DisplayObject_obj::__instanceCount,HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldRenderDirty,HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldTransformDirty,HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"),
	HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"),
	HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"),
	HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"),
	HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"),
	HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCache","\x04","\x45","\xd1","\x3c"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4"),
	HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"),
	HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"),
	HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"),
	HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"),
	HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"),
	HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"),
	HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"),
	HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"),
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("__y","\x59","\x69","\x48","\x00"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__getLocalBounds","\x6a","\x04","\x36","\xdf"),
	HX_HCSTRING("__getTransform","\x16","\x4d","\xaa","\x75"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setRenderDirty","\x7a","\x43","\x7f","\x81"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f"),
	HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2"),
	HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObject","\xf7","\x4b","\x6f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
	__instanceCount= (int)0;
	__worldRenderDirty= (int)0;
	__worldTransformDirty= (int)0;
}

} // end namespace openfl
} // end namespace display
