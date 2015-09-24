#include <hxcpp.h>

#ifndef INCLUDED_DefBTN
#include <DefBTN.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void DefBTN_obj::__construct()
{
HX_STACK_FRAME("DefBTN","new",0x6d9f8a29,"DefBTN.new","DefBTN.hx",18,0x1f7cad67)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->plusSprite = tmp;
	HX_STACK_LINE(21)
	::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/plusknapp.png","\xb3","\xd6","\xa6","\x56"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	this->plusBTN = tmp2;
	HX_STACK_LINE(22)
	::openfl::display::Sprite tmp3 = this->plusSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->addChild(tmp3);
	HX_STACK_LINE(23)
	::openfl::display::Sprite tmp4 = this->plusSprite;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::openfl::display::Bitmap tmp5 = this->plusBTN;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	tmp4->addChild(tmp5);
	HX_STACK_LINE(25)
	::openfl::display::Sprite tmp6 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	this->randomSprite = tmp6;
	HX_STACK_LINE(26)
	::openfl::display::BitmapData tmp7 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/slumpknapp.png","\x66","\x2e","\x68","\x53"),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	::openfl::display::Bitmap tmp8 = ::openfl::display::Bitmap_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	this->randBTN = tmp8;
	HX_STACK_LINE(27)
	::openfl::display::Bitmap tmp9 = this->randBTN;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	tmp9->set_x((int)200);
	HX_STACK_LINE(28)
	::openfl::display::Sprite tmp10 = this->randomSprite;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(28)
	this->addChild(tmp10);
	HX_STACK_LINE(29)
	::openfl::display::Sprite tmp11 = this->randomSprite;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	::openfl::display::Bitmap tmp12 = this->randBTN;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(29)
	tmp11->addChild(tmp12);
}
;
	return null();
}

//DefBTN_obj::~DefBTN_obj() { }

Dynamic DefBTN_obj::__CreateEmpty() { return  new DefBTN_obj; }
hx::ObjectPtr< DefBTN_obj > DefBTN_obj::__new()
{  hx::ObjectPtr< DefBTN_obj > _result_ = new DefBTN_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefBTN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefBTN_obj > _result_ = new DefBTN_obj();
	_result_->__construct();
	return _result_;}


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
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefBTN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(plusSprite,"plusSprite");
	HX_VISIT_MEMBER_NAME(randomSprite,"randomSprite");
	HX_VISIT_MEMBER_NAME(plusBTN,"plusBTN");
	HX_VISIT_MEMBER_NAME(randBTN,"randBTN");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefBTN_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic DefBTN_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { plusBTN=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randBTN") ) { randBTN=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"plusSprite") ) { plusSprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomSprite") ) { randomSprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefBTN_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DefBTN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("plusSprite","\xff","\x8e","\xc9","\xe8"));
	outFields->push(HX_HCSTRING("randomSprite","\x68","\x56","\x7f","\x9b"));
	outFields->push(HX_HCSTRING("plusBTN","\x22","\xb3","\x06","\x0a"));
	outFields->push(HX_HCSTRING("randBTN","\xb7","\x65","\x8c","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefBTN_obj,plusSprite),HX_HCSTRING("plusSprite","\xff","\x8e","\xc9","\xe8")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefBTN_obj,randomSprite),HX_HCSTRING("randomSprite","\x68","\x56","\x7f","\x9b")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(DefBTN_obj,plusBTN),HX_HCSTRING("plusBTN","\x22","\xb3","\x06","\x0a")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(DefBTN_obj,randBTN),HX_HCSTRING("randBTN","\xb7","\x65","\x8c","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("plusSprite","\xff","\x8e","\xc9","\xe8"),
	HX_HCSTRING("randomSprite","\x68","\x56","\x7f","\x9b"),
	HX_HCSTRING("plusBTN","\x22","\xb3","\x06","\x0a"),
	HX_HCSTRING("randBTN","\xb7","\x65","\x8c","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefBTN_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefBTN_obj::__mClass,"__mClass");
};

#endif

hx::Class DefBTN_obj::__mClass;

void DefBTN_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DefBTN","\xb7","\x41","\x5b","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DefBTN_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefBTN_obj >;
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

