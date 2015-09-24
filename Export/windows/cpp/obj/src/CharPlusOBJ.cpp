#include <hxcpp.h>

#ifndef INCLUDED_CharPlusOBJ
#include <CharPlusOBJ.h>
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

Void CharPlusOBJ_obj::__construct(int index)
{
HX_STACK_FRAME("CharPlusOBJ","new",0x3b6d68d9,"CharPlusOBJ.new","CharPlusOBJ.hx",20,0x452534b7)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->plusSprite = tmp;
	HX_STACK_LINE(23)
	::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/plus.png","\xe1","\x77","\x74","\x5c"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->plus = tmp2;
	HX_STACK_LINE(24)
	this->id = index;
	HX_STACK_LINE(25)
	::openfl::display::Sprite tmp3 = this->plusSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->addChild(tmp3);
	HX_STACK_LINE(26)
	::openfl::display::Sprite tmp4 = this->plusSprite;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::openfl::display::Bitmap tmp5 = this->plus;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	tmp4->addChild(tmp5);
}
;
	return null();
}

//CharPlusOBJ_obj::~CharPlusOBJ_obj() { }

Dynamic CharPlusOBJ_obj::__CreateEmpty() { return  new CharPlusOBJ_obj; }
hx::ObjectPtr< CharPlusOBJ_obj > CharPlusOBJ_obj::__new(int index)
{  hx::ObjectPtr< CharPlusOBJ_obj > _result_ = new CharPlusOBJ_obj();
	_result_->__construct(index);
	return _result_;}

Dynamic CharPlusOBJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CharPlusOBJ_obj > _result_ = new CharPlusOBJ_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


CharPlusOBJ_obj::CharPlusOBJ_obj()
{
}

void CharPlusOBJ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharPlusOBJ);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(plusSprite,"plusSprite");
	HX_MARK_MEMBER_NAME(plus,"plus");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharPlusOBJ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(plusSprite,"plusSprite");
	HX_VISIT_MEMBER_NAME(plus,"plus");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CharPlusOBJ_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plus") ) { return plus; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"plusSprite") ) { return plusSprite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CharPlusOBJ_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plus") ) { plus=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"plusSprite") ) { plusSprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CharPlusOBJ_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CharPlusOBJ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("plusSprite","\xff","\x8e","\xc9","\xe8"));
	outFields->push(HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CharPlusOBJ_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(CharPlusOBJ_obj,plusSprite),HX_HCSTRING("plusSprite","\xff","\x8e","\xc9","\xe8")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(CharPlusOBJ_obj,plus),HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("plusSprite","\xff","\x8e","\xc9","\xe8"),
	HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharPlusOBJ_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharPlusOBJ_obj::__mClass,"__mClass");
};

#endif

hx::Class CharPlusOBJ_obj::__mClass;

void CharPlusOBJ_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CharPlusOBJ","\x67","\x08","\xc8","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CharPlusOBJ_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CharPlusOBJ_obj >;
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

