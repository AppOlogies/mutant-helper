#include <hxcpp.h>

#ifndef INCLUDED_CanvasOBJ
#include <CanvasOBJ.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",12,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->scaledH = (int)0;
	HX_STACK_LINE(22)
	this->scaledW = (int)0;
	HX_STACK_LINE(21)
	this->stageHeight = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();
	HX_STACK_LINE(20)
	this->stageWidth = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();
	HX_STACK_LINE(18)
	this->offset = (int)0;
	HX_STACK_LINE(17)
	this->canLength = (int)0;
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	this->scaledW = (Float(this->stageWidth) / Float((int)660));
	HX_STACK_LINE(31)
	this->scaledH = (Float(this->stageHeight) / Float((int)1000));
	HX_STACK_LINE(35)
	::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	this->bounds = _g;
	HX_STACK_LINE(37)
	::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/bakgrund.png"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(37)
	this->BG = _g2;
	HX_STACK_LINE(38)
	this->BG->set_width(this->stageWidth);
	HX_STACK_LINE(39)
	this->BG->set_height(this->stageHeight);
	HX_STACK_LINE(40)
	this->addChild(this->BG);
	HX_STACK_LINE(43)
	::CanvasOBJ _g3 = ::CanvasOBJ_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(43)
	this->canvas = _g3;
	HX_STACK_LINE(44)
	this->canvas->set_scaleX(this->scaledW);
	HX_STACK_LINE(45)
	this->canvas->set_scaleY(this->scaledH);
	HX_STACK_LINE(46)
	this->addChild(this->canvas);
	HX_STACK_LINE(48)
	this->canvas->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->dragSTART_dyn(),null(),null(),null());
	HX_STACK_LINE(49)
	this->canvas->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_UP,this->dragEND_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::dragSTART( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("Main","dragSTART",0xb1aae379,"Main.dragSTART","Main.hx",55,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(56)
		this->canLength = (this->canvas->canvasLength * this->scaledH);
		HX_STACK_LINE(57)
		if (((this->canLength > (int)200))){
			HX_STACK_LINE(57)
			this->offset = ((int)480 * this->scaledH);
		}
		else{
			HX_STACK_LINE(58)
			this->offset = (int)0;
		}
		HX_STACK_LINE(60)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(-(this->canLength) + this->offset),(int)0,(this->canLength - this->offset));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		this->bounds = _g;
		HX_STACK_LINE(61)
		this->canvas->startDrag(false,this->bounds);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,dragSTART,(void))

Void Main_obj::dragEND( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("Main","dragEND",0x556acb32,"Main.dragEND","Main.hx",67,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(67)
		this->canvas->stopDrag();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,dragEND,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(BG,"BG");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(canLength,"canLength");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(scaledW,"scaledW");
	HX_MARK_MEMBER_NAME(scaledH,"scaledH");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(BG,"BG");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(canLength,"canLength");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(scaledW,"scaledW");
	HX_VISIT_MEMBER_NAME(scaledH,"scaledH");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { return BG; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaledW") ) { return scaledW; }
		if (HX_FIELD_EQ(inName,"scaledH") ) { return scaledH; }
		if (HX_FIELD_EQ(inName,"dragEND") ) { return dragEND_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canLength") ) { return canLength; }
		if (HX_FIELD_EQ(inName,"dragSTART") ) { return dragSTART_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { BG=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::CanvasOBJ >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaledW") ) { scaledW=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaledH") ) { scaledH=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canLength") ) { canLength=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BG"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("canLength"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("stageWidth"));
	outFields->push(HX_CSTRING("stageHeight"));
	outFields->push(HX_CSTRING("scaledW"));
	outFields->push(HX_CSTRING("scaledH"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(Main_obj,BG),HX_CSTRING("BG")},
	{hx::fsObject /*::CanvasOBJ*/ ,(int)offsetof(Main_obj,canvas),HX_CSTRING("canvas")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Main_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsFloat,(int)offsetof(Main_obj,canLength),HX_CSTRING("canLength")},
	{hx::fsFloat,(int)offsetof(Main_obj,offset),HX_CSTRING("offset")},
	{hx::fsInt,(int)offsetof(Main_obj,stageWidth),HX_CSTRING("stageWidth")},
	{hx::fsInt,(int)offsetof(Main_obj,stageHeight),HX_CSTRING("stageHeight")},
	{hx::fsFloat,(int)offsetof(Main_obj,scaledW),HX_CSTRING("scaledW")},
	{hx::fsFloat,(int)offsetof(Main_obj,scaledH),HX_CSTRING("scaledH")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BG"),
	HX_CSTRING("canvas"),
	HX_CSTRING("bounds"),
	HX_CSTRING("canLength"),
	HX_CSTRING("offset"),
	HX_CSTRING("stageWidth"),
	HX_CSTRING("stageHeight"),
	HX_CSTRING("scaledW"),
	HX_CSTRING("scaledH"),
	HX_CSTRING("dragSTART"),
	HX_CSTRING("dragEND"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
}

