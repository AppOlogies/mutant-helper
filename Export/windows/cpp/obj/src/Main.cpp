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
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",11,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->offset = (int)0;
	HX_STACK_LINE(16)
	this->canLength = (int)0;
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)-2000,(int)0,(int)5000);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->bounds = _g;
	HX_STACK_LINE(27)
	::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/bakgrund.png"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	this->BG = _g2;
	HX_STACK_LINE(28)
	this->addChild(this->BG);
	HX_STACK_LINE(30)
	::CanvasOBJ _g3 = ::CanvasOBJ_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(30)
	this->canvas = _g3;
	HX_STACK_LINE(31)
	this->addChild(this->canvas);
	HX_STACK_LINE(33)
	this->canvas->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->dragSTART_dyn(),null(),null(),null());
	HX_STACK_LINE(34)
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
		HX_STACK_FRAME("Main","dragSTART",0xb1aae379,"Main.dragSTART","Main.hx",40,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(41)
		this->canLength = this->canvas->canvasLength;
		HX_STACK_LINE(42)
		if (((this->canLength > (int)200))){
			HX_STACK_LINE(42)
			this->offset = (int)480;
		}
		else{
			HX_STACK_LINE(43)
			this->offset = (int)0;
		}
		HX_STACK_LINE(45)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(-(this->canLength) + this->offset),(int)0,(this->canLength - this->offset));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->bounds = _g;
		HX_STACK_LINE(46)
		this->canvas->startDrag(false,this->bounds);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,dragSTART,(void))

Void Main_obj::dragEND( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("Main","dragEND",0x556acb32,"Main.dragEND","Main.hx",52,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(52)
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
		if (HX_FIELD_EQ(inName,"dragEND") ) { return dragEND_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canLength") ) { return canLength; }
		if (HX_FIELD_EQ(inName,"dragSTART") ) { return dragSTART_dyn(); }
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
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canLength") ) { canLength=inValue.Cast< int >(); return inValue; }
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
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(Main_obj,BG),HX_CSTRING("BG")},
	{hx::fsObject /*::CanvasOBJ*/ ,(int)offsetof(Main_obj,canvas),HX_CSTRING("canvas")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(Main_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsInt,(int)offsetof(Main_obj,canLength),HX_CSTRING("canLength")},
	{hx::fsInt,(int)offsetof(Main_obj,offset),HX_CSTRING("offset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BG"),
	HX_CSTRING("canvas"),
	HX_CSTRING("bounds"),
	HX_CSTRING("canLength"),
	HX_CSTRING("offset"),
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

