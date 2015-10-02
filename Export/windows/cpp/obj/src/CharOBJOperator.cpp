#include <hxcpp.h>

#ifndef INCLUDED_CharOBJOperator
#include <CharOBJOperator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void CharOBJOperator_obj::__construct(int index)
{
HX_STACK_FRAME("CharOBJOperator","new",0x90f5f6d7,"CharOBJOperator.new","CharOBJOperator.hx",20,0xd3e0f079)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->id = index;
	HX_STACK_LINE(23)
	::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	this->operatorSprite = _g;
	HX_STACK_LINE(24)
	if (((index < (int)4))){
		HX_STACK_LINE(24)
		::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/plus.png"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(24)
		::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(24)
		this->_operator = _g2;
	}
	HX_STACK_LINE(25)
	::haxe::Log_obj::trace((HX_CSTRING("object id: ") + this->id),hx::SourceInfo(HX_CSTRING("CharOBJOperator.hx"),25,HX_CSTRING("CharOBJOperator"),HX_CSTRING("new")));
	HX_STACK_LINE(26)
	if (((index > (int)3))){
		HX_STACK_LINE(26)
		::openfl::_v2::display::BitmapData _g3 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/minus.png"),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(26)
		::openfl::_v2::display::Bitmap _g4 = ::openfl::_v2::display::Bitmap_obj::__new(_g3,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(26)
		this->_operator = _g4;
	}
	HX_STACK_LINE(27)
	this->addChild(this->operatorSprite);
	HX_STACK_LINE(28)
	this->operatorSprite->addChild(this->_operator);
}
;
	return null();
}

//CharOBJOperator_obj::~CharOBJOperator_obj() { }

Dynamic CharOBJOperator_obj::__CreateEmpty() { return  new CharOBJOperator_obj; }
hx::ObjectPtr< CharOBJOperator_obj > CharOBJOperator_obj::__new(int index)
{  hx::ObjectPtr< CharOBJOperator_obj > result = new CharOBJOperator_obj();
	result->__construct(index);
	return result;}

Dynamic CharOBJOperator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CharOBJOperator_obj > result = new CharOBJOperator_obj();
	result->__construct(inArgs[0]);
	return result;}


CharOBJOperator_obj::CharOBJOperator_obj()
{
}

void CharOBJOperator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharOBJOperator);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(operatorSprite,"operatorSprite");
	HX_MARK_MEMBER_NAME(_operator,"operator");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharOBJOperator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(operatorSprite,"operatorSprite");
	HX_VISIT_MEMBER_NAME(_operator,"operator");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CharOBJOperator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"operator") ) { return _operator; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"operatorSprite") ) { return operatorSprite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CharOBJOperator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"operator") ) { _operator=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"operatorSprite") ) { operatorSprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharOBJOperator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("operatorSprite"));
	outFields->push(HX_CSTRING("operator"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CharOBJOperator_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJOperator_obj,operatorSprite),HX_CSTRING("operatorSprite")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJOperator_obj,_operator),HX_CSTRING("operator")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("operatorSprite"),
	HX_CSTRING("operator"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharOBJOperator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharOBJOperator_obj::__mClass,"__mClass");
};

#endif

Class CharOBJOperator_obj::__mClass;

void CharOBJOperator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CharOBJOperator"), hx::TCanCast< CharOBJOperator_obj> ,sStaticFields,sMemberFields,
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

void CharOBJOperator_obj::__boot()
{
}

