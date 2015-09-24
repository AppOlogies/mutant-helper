#include <hxcpp.h>

#ifndef INCLUDED___ASSET__OPENFL__assets_nootype_otf
#include <__ASSET__OPENFL__assets_nootype_otf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

Void __ASSET__OPENFL__assets_nootype_otf_obj::__construct()
{
HX_STACK_FRAME("__ASSET__OPENFL__assets_nootype_otf","new",0xda2762e0,"__ASSET__OPENFL__assets_nootype_otf.new","DefaultAssetLibrary.hx",844,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(844)
	this->__fontPath = HX_HCSTRING("assets/Nootype.otf","\x0f","\x18","\xde","\x66");
	HX_STACK_LINE(844)
	this->name = HX_HCSTRING("Radikal","\x82","\xf9","\x48","\xf4");
	HX_STACK_LINE(844)
	super::__construct(null());
}
;
	return null();
}

//__ASSET__OPENFL__assets_nootype_otf_obj::~__ASSET__OPENFL__assets_nootype_otf_obj() { }

Dynamic __ASSET__OPENFL__assets_nootype_otf_obj::__CreateEmpty() { return  new __ASSET__OPENFL__assets_nootype_otf_obj; }
hx::ObjectPtr< __ASSET__OPENFL__assets_nootype_otf_obj > __ASSET__OPENFL__assets_nootype_otf_obj::__new()
{  hx::ObjectPtr< __ASSET__OPENFL__assets_nootype_otf_obj > _result_ = new __ASSET__OPENFL__assets_nootype_otf_obj();
	_result_->__construct();
	return _result_;}

Dynamic __ASSET__OPENFL__assets_nootype_otf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__OPENFL__assets_nootype_otf_obj > _result_ = new __ASSET__OPENFL__assets_nootype_otf_obj();
	_result_->__construct();
	return _result_;}


__ASSET__OPENFL__assets_nootype_otf_obj::__ASSET__OPENFL__assets_nootype_otf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__OPENFL__assets_nootype_otf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__OPENFL__assets_nootype_otf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__OPENFL__assets_nootype_otf_obj::__mClass;

void __ASSET__OPENFL__assets_nootype_otf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__OPENFL__assets_nootype_otf","\xee","\xb2","\xcc","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__OPENFL__assets_nootype_otf_obj >;
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

