#include <hxcpp.h>

#ifndef INCLUDED_CanvasOBJ
#include <CanvasOBJ.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",19,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(23)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)-2000,(int)0,(int)5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->bounds = tmp;
	HX_STACK_LINE(25)
	::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/bakgrund.png","\xdb","\x58","\x3f","\xc0"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	this->BG = tmp2;
	HX_STACK_LINE(26)
	::openfl::display::Bitmap tmp3 = this->BG;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	this->addChild(tmp3);
	HX_STACK_LINE(28)
	::CanvasOBJ tmp4 = ::CanvasOBJ_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	this->canvas = tmp4;
	HX_STACK_LINE(29)
	::CanvasOBJ tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	this->addChild(tmp5);
	HX_STACK_LINE(31)
	::CanvasOBJ tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	::String tmp7 = ::openfl::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	Dynamic tmp8 = this->dragSTART_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
	HX_STACK_LINE(32)
	::CanvasOBJ tmp9 = this->canvas;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	::String tmp10 = ::openfl::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(32)
	Dynamic tmp11 = this->dragEND_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(32)
	tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::dragSTART( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("Main","dragSTART",0xb1aae379,"Main.dragSTART","Main.hx",38,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(40)
		::CanvasOBJ tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::openfl::geom::Rectangle tmp1 = this->bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		tmp->startDrag(false,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,dragSTART,(void))

Void Main_obj::dragEND( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("Main","dragEND",0x556acb32,"Main.dragEND","Main.hx",44,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(46)
		::CanvasOBJ tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		tmp->stopDrag();
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
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(BG,"BG");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { return BG; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dragEND") ) { return dragEND_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragSTART") ) { return dragSTART_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { BG=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::CanvasOBJ >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BG","\xc5","\x39","\x00","\x00"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Main_obj,BG),HX_HCSTRING("BG","\xc5","\x39","\x00","\x00")},
	{hx::fsObject /*::CanvasOBJ*/ ,(int)offsetof(Main_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Main_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BG","\xc5","\x39","\x00","\x00"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("dragSTART","\xce","\xab","\x21","\xd1"),
	HX_HCSTRING("dragEND","\x47","\x64","\x39","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

