#include <hxcpp.h>

#ifndef INCLUDED_CanvasOBJ
#include <CanvasOBJ.h>
#endif
#ifndef INCLUDED_CharOBJ
#include <CharOBJ.h>
#endif
#ifndef INCLUDED_DefBTN
#include <DefBTN.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void CanvasOBJ_obj::__construct()
{
HX_STACK_FRAME("CanvasOBJ","new",0xbf00ca51,"CanvasOBJ.new","CanvasOBJ.hx",9,0x0698aa3f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->Gubbindex = (int)0;
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	::DefBTN tmp = ::DefBTN_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->defBTN = tmp;
	HX_STACK_LINE(20)
	::DefBTN tmp1 = this->defBTN;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::String tmp2 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	Dynamic tmp3 = this->nyGubbe_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	tmp1->plusSprite->addEventListener(tmp2,tmp3,null(),null(),null());
	HX_STACK_LINE(21)
	::DefBTN tmp4 = this->defBTN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	::String tmp5 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(21)
	Dynamic tmp6 = this->random_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(21)
	tmp4->randomSprite->addEventListener(tmp5,tmp6,null(),null(),null());
	HX_STACK_LINE(22)
	::DefBTN tmp7 = this->defBTN;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	this->addChild(tmp7);
}
;
	return null();
}

//CanvasOBJ_obj::~CanvasOBJ_obj() { }

Dynamic CanvasOBJ_obj::__CreateEmpty() { return  new CanvasOBJ_obj; }
hx::ObjectPtr< CanvasOBJ_obj > CanvasOBJ_obj::__new()
{  hx::ObjectPtr< CanvasOBJ_obj > _result_ = new CanvasOBJ_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasOBJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasOBJ_obj > _result_ = new CanvasOBJ_obj();
	_result_->__construct();
	return _result_;}

Void CanvasOBJ_obj::nyGubbe( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("CanvasOBJ","nyGubbe",0x7d2acf5d,"CanvasOBJ.nyGubbe","CanvasOBJ.hx",26,0x0698aa3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(27)
		int tmp = this->Gubbindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::CharOBJ tmp1 = ::CharOBJ_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		this->_char = tmp1;
		HX_STACK_LINE(28)
		::CharOBJ tmp2 = this->_char;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		this->addChild(tmp2);
		HX_STACK_LINE(29)
		(this->Gubbindex)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasOBJ_obj,nyGubbe,(void))

Void CanvasOBJ_obj::random( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("CanvasOBJ","random",0xa1d034b2,"CanvasOBJ.random","CanvasOBJ.hx",33,0x0698aa3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(34)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("CanvasOBJ.hx","\x3f","\xaa","\x98","\x06"),34,HX_HCSTRING("CanvasOBJ","\xdf","\x4d","\xbf","\x13"),HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::haxe::Log_obj::trace(HX_HCSTRING("Random pressed","\xa5","\x07","\xe0","\xf1"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasOBJ_obj,random,(void))


CanvasOBJ_obj::CanvasOBJ_obj()
{
}

void CanvasOBJ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasOBJ);
	HX_MARK_MEMBER_NAME(defBTN,"defBTN");
	HX_MARK_MEMBER_NAME(Gubbindex,"Gubbindex");
	HX_MARK_MEMBER_NAME(_char,"char");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasOBJ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defBTN,"defBTN");
	HX_VISIT_MEMBER_NAME(Gubbindex,"Gubbindex");
	HX_VISIT_MEMBER_NAME(_char,"char");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasOBJ_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return _char; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defBTN") ) { return defBTN; }
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nyGubbe") ) { return nyGubbe_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Gubbindex") ) { return Gubbindex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasOBJ_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _char=inValue.Cast< ::CharOBJ >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defBTN") ) { defBTN=inValue.Cast< ::DefBTN >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Gubbindex") ) { Gubbindex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CanvasOBJ_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CanvasOBJ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("defBTN","\x97","\xcd","\xc6","\x66"));
	outFields->push(HX_HCSTRING("Gubbindex","\xc4","\xb4","\x47","\x7d"));
	outFields->push(HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::DefBTN*/ ,(int)offsetof(CanvasOBJ_obj,defBTN),HX_HCSTRING("defBTN","\x97","\xcd","\xc6","\x66")},
	{hx::fsInt,(int)offsetof(CanvasOBJ_obj,Gubbindex),HX_HCSTRING("Gubbindex","\xc4","\xb4","\x47","\x7d")},
	{hx::fsObject /*::CharOBJ*/ ,(int)offsetof(CanvasOBJ_obj,_char),HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("defBTN","\x97","\xcd","\xc6","\x66"),
	HX_HCSTRING("Gubbindex","\xc4","\xb4","\x47","\x7d"),
	HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"),
	HX_HCSTRING("nyGubbe","\xec","\x88","\x7b","\x6e"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasOBJ_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasOBJ_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasOBJ_obj::__mClass;

void CanvasOBJ_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CanvasOBJ","\xdf","\x4d","\xbf","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CanvasOBJ_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasOBJ_obj >;
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

