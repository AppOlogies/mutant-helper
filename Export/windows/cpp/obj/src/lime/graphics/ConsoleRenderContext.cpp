#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void ConsoleRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","new",0x37aa2dde,"lime.graphics.ConsoleRenderContext.new","lime/graphics/ConsoleRenderContext.hx",74,0x16233b72)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ConsoleRenderContext_obj::~ConsoleRenderContext_obj() { }

Dynamic ConsoleRenderContext_obj::__CreateEmpty() { return  new ConsoleRenderContext_obj; }
hx::ObjectPtr< ConsoleRenderContext_obj > ConsoleRenderContext_obj::__new()
{  hx::ObjectPtr< ConsoleRenderContext_obj > _result_ = new ConsoleRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConsoleRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleRenderContext_obj > _result_ = new ConsoleRenderContext_obj();
	_result_->__construct();
	return _result_;}

Void ConsoleRenderContext_obj::clear( ){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clear",0xc822aa8b,"lime.graphics.ConsoleRenderContext.clear","lime/graphics/ConsoleRenderContext.hx",81,0x16233b72)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleRenderContext_obj,clear,(void))

Void ConsoleRenderContext_obj::clearColor( Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clearColor",0x991a1ed8,"lime.graphics.ConsoleRenderContext.clearColor","lime/graphics/ConsoleRenderContext.hx",82,0x16233b72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ConsoleRenderContext_obj,clearColor,(void))

Void ConsoleRenderContext_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clearDepth",0x25e79e78,"lime.graphics.ConsoleRenderContext.clearDepth","lime/graphics/ConsoleRenderContext.hx",83,0x16233b72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depth,"depth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,clearDepth,(void))

Void ConsoleRenderContext_obj::clearStencil( int stencil){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clearStencil",0x3b9f72b1,"lime.graphics.ConsoleRenderContext.clearStencil","lime/graphics/ConsoleRenderContext.hx",84,0x16233b72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stencil,"stencil")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,clearStencil,(void))


ConsoleRenderContext_obj::ConsoleRenderContext_obj()
{
}

Dynamic ConsoleRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearColor","\x96","\xb0","\x66","\x1f"),
	HX_HCSTRING("clearDepth","\x36","\x30","\x34","\xac"),
	HX_HCSTRING("clearStencil","\xef","\x6f","\x82","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleRenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleRenderContext_obj::__mClass;

void ConsoleRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.ConsoleRenderContext","\xec","\xa6","\x12","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleRenderContext_obj >;
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

} // end namespace lime
} // end namespace graphics
