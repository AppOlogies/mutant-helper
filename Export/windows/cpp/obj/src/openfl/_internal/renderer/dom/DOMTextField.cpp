#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMTextField
#include <openfl/_internal/renderer/dom/DOMTextField.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

Void DOMTextField_obj::__construct()
{
	return null();
}

//DOMTextField_obj::~DOMTextField_obj() { }

Dynamic DOMTextField_obj::__CreateEmpty() { return  new DOMTextField_obj; }
hx::ObjectPtr< DOMTextField_obj > DOMTextField_obj::__new()
{  hx::ObjectPtr< DOMTextField_obj > _result_ = new DOMTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic DOMTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMTextField_obj > _result_ = new DOMTextField_obj();
	_result_->__construct();
	return _result_;}

::String DOMTextField_obj::getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","getFont",0xffe7bbe9,"openfl._internal.renderer.dom.DOMTextField.getFont","openfl/_internal/renderer/dom/DOMTextField.hx",21,0xc9b27f2c)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(23)
	Dynamic tmp = format->italic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(23)
		tmp1 = HX_HCSTRING("italic ","\x30","\xe3","\x44","\x91");
	}
	else{
		HX_STACK_LINE(23)
		tmp1 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(23)
	::String font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(24)
	hx::AddEq(font,HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b"));
	HX_STACK_LINE(25)
	Dynamic tmp2 = format->bold;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	if ((tmp2)){
		HX_STACK_LINE(25)
		tmp3 = HX_HCSTRING("bold ","\xfb","\xd2","\xf5","\xb6");
	}
	else{
		HX_STACK_LINE(25)
		tmp3 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(25)
	hx::AddEq(font,tmp3);
	HX_STACK_LINE(26)
	::String tmp4 = (format->size + HX_HCSTRING("px","\x08","\x62","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	hx::AddEq(font,tmp4);
	HX_STACK_LINE(27)
	int tmp5 = (format->size + format->leading);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	int tmp6 = (tmp5 + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	::String tmp7 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	::String tmp8 = (tmp7 + HX_HCSTRING("px ","\x18","\x65","\x55","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	hx::AddEq(font,tmp8);
	HX_STACK_LINE(29)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::String _g = format->font;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		::String _switch_1 = (tmp10);
		if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
			HX_STACK_LINE(31)
			tmp9 = HX_HCSTRING("sans-serif","\xc3","\x60","\xfb","\x08");
		}
		else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			HX_STACK_LINE(32)
			tmp9 = HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a");
		}
		else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
			HX_STACK_LINE(33)
			tmp9 = HX_HCSTRING("monospace","\xc3","\xd1","\xe5","\x5e");
		}
		else  {
			HX_STACK_LINE(34)
			::String tmp11 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + format->font);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			tmp9 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
;
;
	}
	HX_STACK_LINE(29)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	hx::AddEq(font,tmp10);
	HX_STACK_LINE(38)
	::String tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(38)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,getFont,return )

Void DOMTextField_obj::measureText( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","measureText",0x2926ab8f,"openfl._internal.renderer.dom.DOMTextField.measureText","openfl/_internal/renderer/dom/DOMTextField.hx",43,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,measureText,(void))

Void DOMTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","render",0xcba99572,"openfl._internal.renderer.dom.DOMTextField.render","openfl/_internal/renderer/dom/DOMTextField.hx",85,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,render,(void))


DOMTextField_obj::DOMTextField_obj()
{
}

bool DOMTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void DOMTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMTextField","\xd2","\x0a","\x72","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMTextField_obj >;
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
} // end namespace dom
