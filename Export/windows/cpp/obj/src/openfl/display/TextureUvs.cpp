#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
namespace openfl{
namespace display{

Void TextureUvs_obj::__construct()
{
HX_STACK_FRAME("openfl.display.TextureUvs","new",0xe69f4b33,"openfl.display.TextureUvs.new","openfl/display/BitmapData.hx",2066,0xdd12d5b9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2076)
	this->y3 = ((Float)0);
	HX_STACK_LINE(2075)
	this->y2 = ((Float)0);
	HX_STACK_LINE(2074)
	this->y1 = ((Float)0);
	HX_STACK_LINE(2073)
	this->y0 = ((Float)0);
	HX_STACK_LINE(2072)
	this->x3 = ((Float)0);
	HX_STACK_LINE(2071)
	this->x2 = ((Float)0);
	HX_STACK_LINE(2070)
	this->x1 = ((Float)0);
	HX_STACK_LINE(2069)
	this->x0 = ((Float)0);
}
;
	return null();
}

//TextureUvs_obj::~TextureUvs_obj() { }

Dynamic TextureUvs_obj::__CreateEmpty() { return  new TextureUvs_obj; }
hx::ObjectPtr< TextureUvs_obj > TextureUvs_obj::__new()
{  hx::ObjectPtr< TextureUvs_obj > _result_ = new TextureUvs_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureUvs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureUvs_obj > _result_ = new TextureUvs_obj();
	_result_->__construct();
	return _result_;}


TextureUvs_obj::TextureUvs_obj()
{
}

Dynamic TextureUvs_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"x2") ) { return x2; }
		if (HX_FIELD_EQ(inName,"x3") ) { return x3; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		if (HX_FIELD_EQ(inName,"y2") ) { return y2; }
		if (HX_FIELD_EQ(inName,"y3") ) { return y3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureUvs_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x2") ) { x2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x3") ) { x3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y2") ) { y2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y3") ) { y3=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureUvs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureUvs_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x2","\xba","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x3","\xbb","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y2","\x99","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y3","\x9a","\x69","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x2),HX_HCSTRING("x2","\xba","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x3),HX_HCSTRING("x3","\xbb","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y2),HX_HCSTRING("y2","\x99","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y3),HX_HCSTRING("y3","\x9a","\x69","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("x2","\xba","\x68","\x00","\x00"),
	HX_HCSTRING("x3","\xbb","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("y2","\x99","\x69","\x00","\x00"),
	HX_HCSTRING("y3","\x9a","\x69","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUvs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUvs_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureUvs_obj::__mClass;

void TextureUvs_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.TextureUvs","\xc1","\x35","\x4f","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextureUvs_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureUvs_obj >;
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

} // end namespace openfl
} // end namespace display
