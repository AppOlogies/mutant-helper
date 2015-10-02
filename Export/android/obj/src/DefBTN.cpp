#include <hxcpp.h>

#ifndef INCLUDED_DefBTN
#include <DefBTN.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif

Void DefBTN_obj::__construct()
{
HX_STACK_FRAME("DefBTN","new",0x6d9f8a29,"DefBTN.new","DefBTN.hx",18,0x1f7cad67)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->plusSprite = _g;
	HX_STACK_LINE(21)
	::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/plusknapp.png"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(21)
	this->plusBTN = _g2;
	HX_STACK_LINE(22)
	this->addChild(this->plusSprite);
	HX_STACK_LINE(23)
	this->plusSprite->addChild(this->plusBTN);
	HX_STACK_LINE(25)
	::openfl::_v2::display::Sprite _g3 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(25)
	this->randomSprite = _g3;
	HX_STACK_LINE(26)
	::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/slumpknapp.png"),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(26)
	::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(26)
	this->randBTN = _g5;
	HX_STACK_LINE(27)
	this->randBTN->set_x((int)200);
	HX_STACK_LINE(28)
	this->addChild(this->randomSprite);
	HX_STACK_LINE(29)
	this->randomSprite->addChild(this->randBTN);
}
;
	return null();
}

//DefBTN_obj::~DefBTN_obj() { }

Dynamic DefBTN_obj::__CreateEmpty() { return  new DefBTN_obj; }
hx::ObjectPtr< DefBTN_obj > DefBTN_obj::__new()
{  hx::ObjectPtr< DefBTN_obj > result = new DefBTN_obj();
	result->__construct();
	return result;}

Dynamic DefBTN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefBTN_obj > result = new DefBTN_obj();
	result->__construct();
	return result;}


DefBTN_obj::DefBTN_obj()
{
}

void DefBTN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefBTN);
	HX_MARK_MEMBER_NAME(plusSprite,"plusSprite");
	HX_MARK_MEMBER_NAME(randomSprite,"randomSprite");
	HX_MARK_MEMBER_NAME(plusBTN,"plusBTN");
	HX_MARK_MEMBER_NAME(randBTN,"randBTN");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefBTN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(plusSprite,"plusSprite");
	HX_VISIT_MEMBER_NAME(randomSprite,"randomSprite");
	HX_VISIT_MEMBER_NAME(plusBTN,"plusBTN");
	HX_VISIT_MEMBER_NAME(randBTN,"randBTN");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefBTN_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { return plusBTN; }
		if (HX_FIELD_EQ(inName,"randBTN") ) { return randBTN; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"plusSprite") ) { return plusSprite; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomSprite") ) { return randomSprite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefBTN_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { plusBTN=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randBTN") ) { randBTN=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"plusSprite") ) { plusSprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomSprite") ) { randomSprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefBTN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("plusSprite"));
	outFields->push(HX_CSTRING("randomSprite"));
	outFields->push(HX_CSTRING("plusBTN"));
	outFields->push(HX_CSTRING("randBTN"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(DefBTN_obj,plusSprite),HX_CSTRING("plusSprite")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(DefBTN_obj,randomSprite),HX_CSTRING("randomSprite")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(DefBTN_obj,plusBTN),HX_CSTRING("plusBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(DefBTN_obj,randBTN),HX_CSTRING("randBTN")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("plusSprite"),
	HX_CSTRING("randomSprite"),
	HX_CSTRING("plusBTN"),
	HX_CSTRING("randBTN"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefBTN_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefBTN_obj::__mClass,"__mClass");
};

#endif

Class DefBTN_obj::__mClass;

void DefBTN_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DefBTN"), hx::TCanCast< DefBTN_obj> ,sStaticFields,sMemberFields,
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

void DefBTN_obj::__boot()
{
}

