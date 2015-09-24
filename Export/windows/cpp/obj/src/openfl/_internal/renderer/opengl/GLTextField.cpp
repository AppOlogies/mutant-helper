#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_TextFieldGraphics
#include <openfl/_internal/renderer/TextFieldGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLTextField
#include <openfl/_internal/renderer/opengl/GLTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLTextField_obj::__construct()
{
	return null();
}

//GLTextField_obj::~GLTextField_obj() { }

Dynamic GLTextField_obj::__CreateEmpty() { return  new GLTextField_obj; }
hx::ObjectPtr< GLTextField_obj > GLTextField_obj::__new()
{  hx::ObjectPtr< GLTextField_obj > _result_ = new GLTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTextField_obj > _result_ = new GLTextField_obj();
	_result_->__construct();
	return _result_;}

Void GLTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLTextField","render",0x31a77300,"openfl._internal.renderer.opengl.GLTextField.render","openfl/_internal/renderer/opengl/GLTextField.hx",14,0x30c8ae9c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(16)
		bool tmp = textField->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		if ((tmp3)){
			HX_STACK_LINE(16)
			tmp4 = (textField->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(16)
			tmp4 = true;
		}
		HX_STACK_LINE(16)
		if ((tmp4)){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(18)
		::openfl::text::TextField tmp5 = textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		::openfl::_internal::renderer::TextFieldGraphics_obj::render(tmp5);
		HX_STACK_LINE(20)
		::openfl::text::TextField tmp6 = textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLTextField_obj,render,(void))


GLTextField_obj::GLTextField_obj()
{
}

bool GLTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class GLTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLTextField","\x84","\x07","\x5f","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLTextField_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
