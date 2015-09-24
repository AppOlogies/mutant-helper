#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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
namespace canvas{

Void CanvasTextField_obj::__construct()
{
	return null();
}

//CanvasTextField_obj::~CanvasTextField_obj() { }

Dynamic CanvasTextField_obj::__CreateEmpty() { return  new CanvasTextField_obj; }
hx::ObjectPtr< CanvasTextField_obj > CanvasTextField_obj::__new()
{  hx::ObjectPtr< CanvasTextField_obj > _result_ = new CanvasTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasTextField_obj > _result_ = new CanvasTextField_obj();
	_result_->__construct();
	return _result_;}

int CanvasTextField_obj::__utf8_endline_code;

::String CanvasTextField_obj::clipText( ::openfl::text::TextField textField,::String value){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","clipText",0x6531abd1,"openfl._internal.renderer.canvas.CanvasTextField.clipText","openfl/_internal/renderer/canvas/CanvasTextField.hx",38,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(40)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Float tmp2 = ::openfl::_internal::renderer::canvas::CanvasTextField_obj::getTextWidth(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Float textWidth = tmp2;		HX_STACK_VAR(textWidth,"textWidth");
	HX_STACK_LINE(41)
	Float tmp3 = (Float(textWidth) / Float(textField->__width));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Float fillPer = tmp3;		HX_STACK_VAR(fillPer,"fillPer");
	HX_STACK_LINE(42)
	bool tmp4 = (fillPer > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	if ((tmp4)){
		HX_STACK_LINE(42)
		::String tmp6 = textField->get_text();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		int tmp7 = (int)-1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		::String tmp8 = textField->get_text();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		Float tmp10 = fillPer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		int tmp13 = (tmp7 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		tmp5 = tmp6.substr(tmp13,null());
	}
	else{
		HX_STACK_LINE(42)
		tmp5 = textField->get_text();
	}
	HX_STACK_LINE(42)
	textField->set_text(tmp5);
	HX_STACK_LINE(43)
	::String tmp6 = textField->get_text();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	::String tmp7 = (tmp6 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,clipText,return )

Void CanvasTextField_obj::disableInputMode( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","disableInputMode",0x782779b9,"openfl._internal.renderer.canvas.CanvasTextField.disableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",48,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,disableInputMode,(void))

Void CanvasTextField_obj::enableInputMode( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","enableInputMode",0x5a626bd6,"openfl._internal.renderer.canvas.CanvasTextField.enableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",57,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,enableInputMode,(void))

Array< int > CanvasTextField_obj::getLineBreakIndices( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","getLineBreakIndices",0x45ce033e,"openfl._internal.renderer.canvas.CanvasTextField.getLineBreakIndices","openfl/_internal/renderer/canvas/CanvasTextField.hx",120,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(124)
	Array< int > breaks = Array_obj< int >::__new();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		::String tmp = textField->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		int tmp1 = ::haxe::Utf8_obj::length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(130)
				::String tmp5 = textField->get_text();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(130)
				int tmp7 = ::haxe::Utf8_obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(130)
				int _char = tmp7;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(132)
				int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(132)
				int tmp9 = ::openfl::_internal::renderer::canvas::CanvasTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(132)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(132)
				if ((tmp10)){
					HX_STACK_LINE(134)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(134)
					breaks->push(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(142)
	return breaks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,getLineBreakIndices,return )

Float CanvasTextField_obj::getLineWidth( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","getLineWidth",0x697d1c30,"openfl._internal.renderer.canvas.CanvasTextField.getLineWidth","openfl/_internal/renderer/canvas/CanvasTextField.hx",185,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(185)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,getLineWidth,return )

Float CanvasTextField_obj::getTextWidth( ::openfl::text::TextField textField,::String text){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","getTextWidth",0xbb6fa8d7,"openfl._internal.renderer.canvas.CanvasTextField.getTextWidth","openfl/_internal/renderer/canvas/CanvasTextField.hx",210,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(210)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,getTextWidth,return )

Array< Float > CanvasTextField_obj::measureText( ::openfl::text::TextField textField,hx::Null< bool >  __o_condense){
bool condense = __o_condense.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","measureText",0x2534f777,"openfl._internal.renderer.canvas.CanvasTextField.measureText","openfl/_internal/renderer/canvas/CanvasTextField.hx",250,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
{
		HX_STACK_LINE(250)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,measureText,return )

Void CanvasTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","render",0xbf0ed28a,"openfl._internal.renderer.canvas.CanvasTextField.render","openfl/_internal/renderer/canvas/CanvasTextField.hx",257,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,render,(void))

Void CanvasTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","renderText",0x30fed857,"openfl._internal.renderer.canvas.CanvasTextField.renderText","openfl/_internal/renderer/canvas/CanvasTextField.hx",428,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CanvasTextField_obj,renderText,(void))


CanvasTextField_obj::CanvasTextField_obj()
{
}

bool CanvasTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipText") ) { outValue = clipText_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { outValue = renderText_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getLineWidth") ) { outValue = getLineWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { outValue = getTextWidth_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableInputMode") ) { outValue = enableInputMode_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableInputMode") ) { outValue = disableInputMode_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { outValue = __utf8_endline_code; return true;  }
		if (HX_FIELD_EQ(inName,"getLineBreakIndices") ) { outValue = getLineBreakIndices_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CanvasTextField_obj::__utf8_endline_code,HX_HCSTRING("__utf8_endline_code","\x4b","\xc5","\x9e","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#endif

hx::Class CanvasTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__utf8_endline_code","\x4b","\xc5","\x9e","\xb8"),
	HX_HCSTRING("clipText","\x9d","\x0f","\xbd","\x59"),
	HX_HCSTRING("disableInputMode","\x85","\x89","\xad","\xe3"),
	HX_HCSTRING("enableInputMode","\x8a","\x59","\x8c","\xf3"),
	HX_HCSTRING("getLineBreakIndices","\xf2","\xda","\x12","\xc3"),
	HX_HCSTRING("getLineWidth","\xfc","\x55","\xb4","\x20"),
	HX_HCSTRING("getTextWidth","\xa3","\xe2","\xa6","\x72"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderText","\x23","\xc7","\x03","\xea"),
	::String(null()) };

void CanvasTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasTextField","\xba","\x1a","\xb4","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasTextField_obj >;
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

void CanvasTextField_obj::__boot()
{
	__utf8_endline_code= (int)10;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
