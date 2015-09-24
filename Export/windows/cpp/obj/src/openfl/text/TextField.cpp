#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatRange
#include <openfl/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",603,0xccf02094)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(605)
	super::__construct();
	HX_STACK_LINE(607)
	this->__width = (int)100;
	HX_STACK_LINE(608)
	this->__height = (int)100;
	HX_STACK_LINE(609)
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(610)
	this->__dirtyBounds = true;
	HX_STACK_LINE(611)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	this->__bounds = tmp;
	HX_STACK_LINE(612)
	::openfl::display::Graphics tmp1 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(612)
	this->__graphics = tmp1;
	HX_STACK_LINE(614)
	this->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
	HX_STACK_LINE(615)
	this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(616)
	this->displayAsPassword = false;
	HX_STACK_LINE(617)
	this->embedFonts = false;
	HX_STACK_LINE(618)
	this->set_selectable(true);
	HX_STACK_LINE(619)
	this->set_borderColor((int)0);
	HX_STACK_LINE(620)
	this->set_border(false);
	HX_STACK_LINE(621)
	this->set_backgroundColor((int)16777215);
	HX_STACK_LINE(622)
	this->set_background(false);
	HX_STACK_LINE(623)
	this->gridFitType = ::openfl::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(624)
	this->maxChars = (int)0;
	HX_STACK_LINE(625)
	this->multiline = false;
	HX_STACK_LINE(626)
	this->sharpness = (int)0;
	HX_STACK_LINE(627)
	this->scrollH = (int)0;
	HX_STACK_LINE(628)
	this->scrollV = (int)1;
	HX_STACK_LINE(629)
	this->set_wordWrap(false);
	HX_STACK_LINE(631)
	::openfl::text::TextFormat tmp2 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(631)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(631)
	if ((tmp3)){
		HX_STACK_LINE(633)
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Times New Roman","\x03","\x86","\x44","\xc3"),(int)12,(int)0,false,false,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(633)
		::openfl::text::TextField_obj::__defaultTextFormat = tmp4;
		HX_STACK_LINE(634)
		::openfl::text::TextFormat tmp5 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		tmp5->blockIndent = (int)0;
		HX_STACK_LINE(635)
		::openfl::text::TextFormat tmp6 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(635)
		tmp6->bullet = false;
		HX_STACK_LINE(636)
		::openfl::text::TextFormat tmp7 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(636)
		tmp7->letterSpacing = (int)0;
		HX_STACK_LINE(637)
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(637)
		tmp8->kerning = false;
	}
	HX_STACK_LINE(641)
	::openfl::text::TextFormat tmp4 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(641)
	::openfl::text::TextFormat tmp5 = tmp4->clone();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(641)
	this->__textFormat = tmp5;
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",657,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(657)
		::openfl::text::TextField _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(657)
		::String tmp = _g->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(657)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(657)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(657)
		_g->set_text(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int a){
	HX_STACK_FRAME("openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",671,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(673)
	::openfl::Lib_obj::notImplemented(HX_HCSTRING("TextField.getCharBoundaries","\x73","\x25","\x12","\x18"));
	HX_STACK_LINE(675)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",690,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(692)
	::openfl::Lib_obj::notImplemented(HX_HCSTRING("TextField.getCharIndexAtPoint","\xd6","\xcb","\x74","\xac"));
	HX_STACK_LINE(694)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",709,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(711)
	::openfl::Lib_obj::notImplemented(HX_HCSTRING("TextField.getLineIndexAtPoint","\xf4","\xb9","\x28","\x9a"));
	HX_STACK_LINE(713)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",725,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(737)
	int tmp = lineIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(737)
	Float tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(737)
	Float lineWidth = tmp1;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(738)
	int tmp2 = lineIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(738)
	Float tmp3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(hx::ObjectPtr<OBJ_>(this),tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(738)
	Float ascender = tmp3;		HX_STACK_VAR(ascender,"ascender");
	HX_STACK_LINE(739)
	int tmp4 = lineIndex;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(739)
	Float tmp5 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(hx::ObjectPtr<OBJ_>(this),tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(739)
	Float descender = tmp5;		HX_STACK_VAR(descender,"descender");
	HX_STACK_LINE(740)
	int tmp6 = lineIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(740)
	Float tmp7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(hx::ObjectPtr<OBJ_>(this),tmp6,(int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(740)
	Float leading = tmp7;		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(741)
	Float tmp8 = (ascender + descender);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(741)
	Float tmp9 = leading;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(741)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(741)
	Float lineHeight = tmp10;		HX_STACK_VAR(lineHeight,"lineHeight");
	HX_STACK_LINE(745)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(745)
	{
		HX_STACK_LINE(745)
		::openfl::text::TextFormat tmp12 = this->__textFormat;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(745)
		::openfl::text::TextFormatAlign _g = tmp12->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(745)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)2: {
				HX_STACK_LINE(747)
				tmp11 = (int)2;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(748)
				Float tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(748)
				Float tmp14 = lineWidth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(748)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(748)
				tmp11 = (tmp15 - (int)2);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(749)
				Float tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(749)
				Float tmp14 = lineWidth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(749)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(749)
				tmp11 = (Float(tmp15) / Float((int)2));
			}
			;break;
		}
	}
	HX_STACK_LINE(745)
	Float margin = tmp11;		HX_STACK_VAR(margin,"margin");
	HX_STACK_LINE(753)
	::openfl::text::TextLineMetrics tmp12 = ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(753)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",767,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(769)
	::openfl::Lib_obj::notImplemented(HX_HCSTRING("TextField.getLineOffset","\x5c","\xe3","\x5c","\x0f"));
	HX_STACK_LINE(771)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",785,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(787)
	::openfl::Lib_obj::notImplemented(HX_HCSTRING("TextField.getLineText","\x36","\x64","\xdb","\x8e"));
	HX_STACK_LINE(789)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",812,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(814)
		::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(814)
		::openfl::text::TextFormat tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",834,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(834)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("TextField.setSelection","\xab","\x18","\x9c","\xbf"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",884,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(886)
		bool tmp = (format->font != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(886)
		if ((tmp)){
			HX_STACK_LINE(886)
			::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(886)
			tmp1->font = format->font;
		}
		HX_STACK_LINE(887)
		bool tmp1 = (format->size != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(887)
		if ((tmp1)){
			HX_STACK_LINE(887)
			::openfl::text::TextFormat tmp2 = this->__textFormat;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(887)
			tmp2->size = format->size;
		}
		HX_STACK_LINE(888)
		bool tmp2 = (format->color != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(888)
		if ((tmp2)){
			HX_STACK_LINE(888)
			::openfl::text::TextFormat tmp3 = this->__textFormat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(888)
			tmp3->color = format->color;
		}
		HX_STACK_LINE(889)
		bool tmp3 = (format->bold != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(889)
		if ((tmp3)){
			HX_STACK_LINE(889)
			::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(889)
			tmp4->bold = format->bold;
		}
		HX_STACK_LINE(890)
		bool tmp4 = (format->italic != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(890)
		if ((tmp4)){
			HX_STACK_LINE(890)
			::openfl::text::TextFormat tmp5 = this->__textFormat;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			tmp5->italic = format->italic;
		}
		HX_STACK_LINE(891)
		bool tmp5 = (format->underline != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(891)
		if ((tmp5)){
			HX_STACK_LINE(891)
			::openfl::text::TextFormat tmp6 = this->__textFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(891)
			tmp6->underline = format->underline;
		}
		HX_STACK_LINE(892)
		bool tmp6 = (format->url != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(892)
		if ((tmp6)){
			HX_STACK_LINE(892)
			::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(892)
			tmp7->url = format->url;
		}
		HX_STACK_LINE(893)
		bool tmp7 = (format->target != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(893)
		if ((tmp7)){
			HX_STACK_LINE(893)
			::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(893)
			tmp8->target = format->target;
		}
		HX_STACK_LINE(894)
		bool tmp8 = (format->align != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(894)
		if ((tmp8)){
			HX_STACK_LINE(894)
			::openfl::text::TextFormat tmp9 = this->__textFormat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(894)
			tmp9->align = format->align;
		}
		HX_STACK_LINE(895)
		bool tmp9 = (format->leftMargin != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(895)
		if ((tmp9)){
			HX_STACK_LINE(895)
			::openfl::text::TextFormat tmp10 = this->__textFormat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(895)
			tmp10->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(896)
		bool tmp10 = (format->rightMargin != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(896)
		if ((tmp10)){
			HX_STACK_LINE(896)
			::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(896)
			tmp11->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(897)
		bool tmp11 = (format->indent != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(897)
		if ((tmp11)){
			HX_STACK_LINE(897)
			::openfl::text::TextFormat tmp12 = this->__textFormat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(897)
			tmp12->indent = format->indent;
		}
		HX_STACK_LINE(898)
		bool tmp12 = (format->leading != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(898)
		if ((tmp12)){
			HX_STACK_LINE(898)
			::openfl::text::TextFormat tmp13 = this->__textFormat;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(898)
			tmp13->leading = format->leading;
		}
		HX_STACK_LINE(899)
		bool tmp13 = (format->blockIndent != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(899)
		if ((tmp13)){
			HX_STACK_LINE(899)
			::openfl::text::TextFormat tmp14 = this->__textFormat;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(899)
			tmp14->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(900)
		bool tmp14 = (format->bullet != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(900)
		if ((tmp14)){
			HX_STACK_LINE(900)
			::openfl::text::TextFormat tmp15 = this->__textFormat;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(900)
			tmp15->bullet = format->bullet;
		}
		HX_STACK_LINE(901)
		bool tmp15 = (format->kerning != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(901)
		if ((tmp15)){
			HX_STACK_LINE(901)
			::openfl::text::TextFormat tmp16 = this->__textFormat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(901)
			tmp16->kerning = format->kerning;
		}
		HX_STACK_LINE(902)
		bool tmp16 = (format->letterSpacing != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(902)
		if ((tmp16)){
			HX_STACK_LINE(902)
			::openfl::text::TextFormat tmp17 = this->__textFormat;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(902)
			tmp17->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(903)
		bool tmp17 = (format->tabStops != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(903)
		if ((tmp17)){
			HX_STACK_LINE(903)
			::openfl::text::TextFormat tmp18 = this->__textFormat;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(903)
			tmp18->tabStops = format->tabStops;
		}
		HX_STACK_LINE(905)
		this->__dirty = true;
		HX_STACK_LINE(906)
		this->__dirtyBounds = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",912,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(914)
		::openfl::geom::Rectangle tmp = this->get_bounds();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(914)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(914)
		::openfl::geom::Rectangle tmp2 = tmp->transform(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(914)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(915)
		Float tmp3 = bounds->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		Float tmp4 = bounds->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(915)
		Float tmp5 = bounds->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(915)
		Float tmp6 = bounds->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(915)
		rect->__expand(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",920,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	::openfl::text::TextFieldType tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	bool tmp1 = (tmp == ::openfl::text::TextFieldType_obj::INPUT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(922)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(922)
	if ((tmp1)){
		HX_STACK_LINE(922)
		tmp2 = this->selectable;
	}
	else{
		HX_STACK_LINE(922)
		tmp2 = false;
	}
	HX_STACK_LINE(922)
	::lime::ui::MouseCursor tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(922)
	if ((tmp2)){
		HX_STACK_LINE(922)
		tmp3 = ::lime::ui::MouseCursor_obj::TEXT;
	}
	else{
		HX_STACK_LINE(922)
		tmp3 = null();
	}
	HX_STACK_LINE(922)
	return tmp3;
}


int TextField_obj::__getPosition( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",927,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(929)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	if ((tmp)){
		HX_STACK_LINE(929)
		return (int)0;
	}
	HX_STACK_LINE(931)
	::String tmp1 = this->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(931)
	::String value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(932)
	::String text = value;		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(933)
	Float totalW = (int)2;		HX_STACK_VAR(totalW,"totalW");
	HX_STACK_LINE(934)
	int pos = text.length;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(939)
	Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(939)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(939)
	Float tmp4 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getTextWidth(hx::ObjectPtr<OBJ_>(this),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(939)
	Float tmp5 = (tmp4 + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(939)
	bool tmp6 = (tmp2 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(939)
	if ((tmp6)){
		HX_STACK_LINE(942)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(942)
		int _g = text.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(942)
		while((true)){
			HX_STACK_LINE(942)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(942)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(942)
			if ((tmp8)){
				HX_STACK_LINE(942)
				break;
			}
			HX_STACK_LINE(942)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(942)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(947)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(947)
			::String tmp11 = text.charAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(947)
			Float tmp12 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getTextWidth(hx::ObjectPtr<OBJ_>(this),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(947)
			hx::AddEq(totalW,tmp12);
			HX_STACK_LINE(950)
			bool tmp13 = (totalW >= x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(950)
			if ((tmp13)){
				HX_STACK_LINE(952)
				pos = i;
				HX_STACK_LINE(953)
				break;
			}
		}
	}
	HX_STACK_LINE(961)
	int tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(961)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",966,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(968)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(968)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(968)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(968)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(968)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(968)
	if ((tmp3)){
		HX_STACK_LINE(968)
		bool tmp5 = interactiveOnly;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(968)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(968)
		if ((tmp6)){
			HX_STACK_LINE(968)
			bool tmp7 = this->mouseEnabled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(968)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(968)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(968)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(968)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(968)
			tmp4 = !(tmp11);
		}
		else{
			HX_STACK_LINE(968)
			tmp4 = false;
		}
	}
	else{
		HX_STACK_LINE(968)
		tmp4 = true;
	}
	HX_STACK_LINE(968)
	if ((tmp4)){
		HX_STACK_LINE(968)
		return false;
	}
	HX_STACK_LINE(970)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(970)
	::openfl::geom::Point tmp6 = this->globalToLocal(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(970)
	::openfl::geom::Point point = tmp6;		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(972)
	::openfl::geom::Rectangle tmp7 = this->get_bounds();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(972)
	::openfl::geom::Point tmp8 = point;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(972)
	bool tmp9 = tmp7->containsPoint(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(972)
	if ((tmp9)){
		HX_STACK_LINE(974)
		bool tmp10 = (stack != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(974)
		if ((tmp10)){
			HX_STACK_LINE(976)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(980)
		return true;
	}
	HX_STACK_LINE(984)
	return false;
}


Void TextField_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCairo",0x1a5f4f8e,"openfl.text.TextField.__renderCairo","openfl/text/TextField.hx",989,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(991)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(991)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp);
		HX_STACK_LINE(992)
		::openfl::_internal::renderer::RenderSession tmp1 = renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(992)
		this->super::__renderCairo(tmp1);
	}
return null();
}


Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCanvas",0xfc575b12,"openfl.text.TextField.__renderCanvas","openfl/text/TextField.hx",997,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1000)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1000)
		this->super::__renderCanvas(tmp);
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderDOM",0x037e5808,"openfl.text.TextField.__renderDOM","openfl/text/TextField.hx",1007,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1007)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderGL",0xa5533b3f,"openfl.text.TextField.__renderGL","openfl/text/TextField.hx",1012,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1017)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1017)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp);
		HX_STACK_LINE(1022)
		::openfl::_internal::renderer::RenderSession tmp1 = renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1022)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp1);
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",1033,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1035)
		Dynamic tmp = this->__startCursorTimer_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1035)
		::haxe::Timer tmp1 = ::haxe::Timer_obj::delay(tmp,(int)500);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1035)
		this->__cursorTimer = tmp1;
		HX_STACK_LINE(1036)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1036)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1036)
		this->__showCursor = tmp3;
		HX_STACK_LINE(1037)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",1042,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1044)
		::haxe::Timer tmp = this->__cursorTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1044)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		if ((tmp1)){
			HX_STACK_LINE(1046)
			::haxe::Timer tmp2 = this->__cursorTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1046)
			tmp2->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

::openfl::text::TextFieldAutoSize TextField_obj::set_autoSize( ::openfl::text::TextFieldAutoSize value){
	HX_STACK_FRAME("openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",1266,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1268)
	::openfl::text::TextFieldAutoSize tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1268)
	::openfl::text::TextFieldAutoSize tmp1 = this->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1268)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1268)
	if ((tmp2)){
		HX_STACK_LINE(1270)
		this->__dirty = true;
		HX_STACK_LINE(1271)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1275)
	::openfl::text::TextFieldAutoSize tmp3 = this->autoSize = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1275)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",1280,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1282)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1282)
	bool tmp1 = this->background;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1282)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1282)
	if ((tmp2)){
		HX_STACK_LINE(1284)
		this->__dirty = true;
	}
	HX_STACK_LINE(1288)
	bool tmp3 = this->background = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1288)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",1293,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1295)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1295)
	int tmp1 = this->backgroundColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1295)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1295)
	if ((tmp2)){
		HX_STACK_LINE(1295)
		this->__dirty = true;
	}
	HX_STACK_LINE(1296)
	int tmp3 = this->backgroundColor = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1296)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",1301,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1303)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1303)
	bool tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1303)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1303)
	if ((tmp2)){
		HX_STACK_LINE(1305)
		this->__dirty = true;
		HX_STACK_LINE(1306)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1310)
	bool tmp3 = this->border = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1310)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",1315,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1317)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1317)
	int tmp1 = this->borderColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1317)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1317)
	if ((tmp2)){
		HX_STACK_LINE(1317)
		this->__dirty = true;
	}
	HX_STACK_LINE(1318)
	int tmp3 = this->borderColor = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1318)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",1323,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1327)
	int tmp = this->get_numLines();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1327)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

::openfl::geom::Rectangle TextField_obj::get_bounds( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bounds",0xa5e41362,"openfl.text.TextField.get_bounds","openfl/text/TextField.hx",1332,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1334)
	bool tmp = this->__dirtyBounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1334)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1334)
	if ((tmp1)){
		HX_STACK_LINE(1336)
		::openfl::geom::Rectangle tmp2 = this->__bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1336)
		return tmp2;
	}
	HX_STACK_LINE(1340)
	::openfl::text::TextFieldAutoSize tmp2 = this->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1340)
	bool tmp3 = (tmp2 != ::openfl::text::TextFieldAutoSize_obj::NONE);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1340)
	if ((tmp3)){
		HX_STACK_LINE(1342)
		Float tmp4 = this->get_textWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1342)
		Float tmp5 = (tmp4 + (int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1342)
		bool tmp6 = this->border;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1342)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1342)
		if ((tmp6)){
			HX_STACK_LINE(1342)
			tmp7 = (int)1;
		}
		else{
			HX_STACK_LINE(1342)
			tmp7 = (int)0;
		}
		HX_STACK_LINE(1342)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1342)
		::openfl::geom::Rectangle tmp9 = this->__bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1342)
		tmp9->width = tmp8;
		HX_STACK_LINE(1343)
		Float tmp10 = this->get_textHeight();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1343)
		Float tmp11 = (tmp10 + (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1343)
		bool tmp12 = this->border;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1343)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1343)
		if ((tmp12)){
			HX_STACK_LINE(1343)
			tmp13 = (int)1;
		}
		else{
			HX_STACK_LINE(1343)
			tmp13 = (int)0;
		}
		HX_STACK_LINE(1343)
		Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1343)
		::openfl::geom::Rectangle tmp15 = this->__bounds;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1343)
		tmp15->height = tmp14;
	}
	else{
		HX_STACK_LINE(1347)
		Float tmp4 = this->__width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1347)
		::openfl::geom::Rectangle tmp5 = this->__bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1347)
		tmp5->width = tmp4;
		HX_STACK_LINE(1348)
		Float tmp6 = this->__height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1348)
		::openfl::geom::Rectangle tmp7 = this->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1348)
		tmp7->height = tmp6;
	}
	HX_STACK_LINE(1352)
	this->__dirtyBounds = false;
	HX_STACK_LINE(1354)
	::openfl::geom::Rectangle tmp4 = this->__bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1354)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bounds,return )

int TextField_obj::get_caretPos( ){
	HX_STACK_FRAME("openfl.text.TextField","get_caretPos",0x916b11fe,"openfl.text.TextField.get_caretPos","openfl/text/TextField.hx",1361,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1361)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretPos,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",1366,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1368)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1368)
	::openfl::text::TextFormat tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1368)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",1373,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1376)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1376)
	::openfl::text::TextFormat tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1376)
	tmp->__merge(tmp1);
	HX_STACK_LINE(1377)
	::openfl::text::TextFormat tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1377)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

Float TextField_obj::get_height( ){
	HX_STACK_FRAME("openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",1382,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1384)
	::openfl::geom::Rectangle tmp = this->get_bounds();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1384)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1384)
	return tmp1;
}


Float TextField_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",1389,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1391)
	Float tmp = this->get_scaleY();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1391)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1391)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1391)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1391)
	if ((tmp2)){
		HX_STACK_LINE(1391)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1391)
		Float tmp5 = this->__height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1391)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1391)
		tmp3 = (tmp4 != tmp6);
	}
	else{
		HX_STACK_LINE(1391)
		tmp3 = true;
	}
	HX_STACK_LINE(1391)
	if ((tmp3)){
		HX_STACK_LINE(1393)
		{
			HX_STACK_LINE(1393)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1393)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1393)
			if ((tmp5)){
				HX_STACK_LINE(1393)
				this->__transformDirty = true;
				HX_STACK_LINE(1393)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1394)
		this->__dirty = true;
		HX_STACK_LINE(1395)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1399)
	this->set_scaleY((int)1);
	HX_STACK_LINE(1400)
	Float tmp4 = this->__height = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1400)
	return tmp4;
}


::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",1405,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1407)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1407)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",1414,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1416)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1416)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1416)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1416)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1416)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1416)
	if ((tmp3)){
		HX_STACK_LINE(1416)
		::String tmp5 = this->__text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1416)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1416)
		::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1416)
		tmp4 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(1416)
		tmp4 = true;
	}
	HX_STACK_LINE(1416)
	if ((tmp4)){
		HX_STACK_LINE(1418)
		this->__dirty = true;
		HX_STACK_LINE(1419)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1423)
	this->__ranges = null();
	HX_STACK_LINE(1424)
	this->__isHTML = true;
	HX_STACK_LINE(1426)
	{
		HX_STACK_LINE(1428)
		::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1428)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1428)
		::String tmp7 = tmp5->replace(tmp6,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1428)
		value = tmp7;
		HX_STACK_LINE(1429)
		::EReg tmp8 = ::EReg_obj::__new(HX_HCSTRING("<br/>","\x3b","\x61","\x28","\xcd"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1429)
		::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1429)
		::String tmp10 = tmp8->replace(tmp9,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1429)
		value = tmp10;
		HX_STACK_LINE(1433)
		Array< ::String > segments = value.split(HX_HCSTRING("<font","\x0b","\x2c","\xcb","\xcf"));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(1435)
		bool tmp11 = (segments->length == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1435)
		if ((tmp11)){
			HX_STACK_LINE(1437)
			::EReg tmp12 = ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1437)
			::String tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1437)
			::String tmp14 = tmp12->replace(tmp13,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1437)
			value = tmp14;
			HX_STACK_LINE(1449)
			::String tmp15 = this->__text = value;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1449)
			return tmp15;
		}
		else{
			HX_STACK_LINE(1453)
			value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(1454)
			this->__ranges = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1458)
			{
				HX_STACK_LINE(1458)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1458)
				while((true)){
					HX_STACK_LINE(1458)
					bool tmp12 = (_g < segments->length);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1458)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1458)
					if ((tmp13)){
						HX_STACK_LINE(1458)
						break;
					}
					HX_STACK_LINE(1458)
					::String tmp14 = segments->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1458)
					::String segment = tmp14;		HX_STACK_VAR(segment,"segment");
					HX_STACK_LINE(1458)
					++(_g);
					HX_STACK_LINE(1460)
					bool tmp15 = (segment == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1460)
					if ((tmp15)){
						HX_STACK_LINE(1460)
						continue;
					}
					HX_STACK_LINE(1462)
					int tmp16 = segment.indexOf(HX_HCSTRING("</font>","\x3c","\x82","\x5f","\x8e"),null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1462)
					int closeFontIndex = tmp16;		HX_STACK_VAR(closeFontIndex,"closeFontIndex");
					HX_STACK_LINE(1464)
					bool tmp17 = (closeFontIndex > (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1464)
					if ((tmp17)){
						HX_STACK_LINE(1466)
						int tmp18 = segment.indexOf(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1466)
						int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1466)
						int start = tmp19;		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(1467)
						int end = closeFontIndex;		HX_STACK_VAR(end,"end");
						HX_STACK_LINE(1468)
						::openfl::text::TextFormat tmp20 = this->__textFormat;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1468)
						::openfl::text::TextFormat tmp21 = tmp20->clone();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1468)
						::openfl::text::TextFormat format = tmp21;		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(1470)
						int tmp22 = segment.indexOf(HX_HCSTRING("face=","\x00","\x55","\x48","\xfb"),null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1470)
						int faceIndex = tmp22;		HX_STACK_VAR(faceIndex,"faceIndex");
						HX_STACK_LINE(1471)
						int tmp23 = segment.indexOf(HX_HCSTRING("color=","\x7a","\xc5","\x86","\xc6"),null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1471)
						int colorIndex = tmp23;		HX_STACK_VAR(colorIndex,"colorIndex");
						HX_STACK_LINE(1472)
						int tmp24 = segment.indexOf(HX_HCSTRING("size=","\x5c","\x08","\xd9","\x7c"),null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1472)
						int sizeIndex = tmp24;		HX_STACK_VAR(sizeIndex,"sizeIndex");
						HX_STACK_LINE(1474)
						int tmp25 = faceIndex;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1474)
						int tmp26 = (int)-1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1474)
						bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1474)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1474)
						if ((tmp27)){
							HX_STACK_LINE(1474)
							tmp28 = (faceIndex < start);
						}
						else{
							HX_STACK_LINE(1474)
							tmp28 = false;
						}
						HX_STACK_LINE(1474)
						if ((tmp28)){
							HX_STACK_LINE(1476)
							int tmp29 = (faceIndex + (int)6);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1476)
							int tmp30 = faceIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1476)
							int tmp31 = segment.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1476)
							::String tmp32 = segment.substr(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1476)
							format->font = tmp32;
						}
						HX_STACK_LINE(1480)
						int tmp29 = colorIndex;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1480)
						int tmp30 = (int)-1;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1480)
						bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1480)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1480)
						if ((tmp31)){
							HX_STACK_LINE(1480)
							tmp32 = (colorIndex < start);
						}
						else{
							HX_STACK_LINE(1480)
							tmp32 = false;
						}
						HX_STACK_LINE(1480)
						if ((tmp32)){
							HX_STACK_LINE(1482)
							int tmp33 = (colorIndex + (int)8);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1482)
							::String tmp34 = segment.substr(tmp33,(int)6);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1482)
							::String tmp35 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1482)
							Dynamic tmp36 = ::Std_obj::parseInt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1482)
							format->color = tmp36;
						}
						HX_STACK_LINE(1486)
						int tmp33 = sizeIndex;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1486)
						int tmp34 = (int)-1;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1486)
						bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1486)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1486)
						if ((tmp35)){
							HX_STACK_LINE(1486)
							tmp36 = (sizeIndex < start);
						}
						else{
							HX_STACK_LINE(1486)
							tmp36 = false;
						}
						HX_STACK_LINE(1486)
						if ((tmp36)){
							HX_STACK_LINE(1488)
							int tmp37 = (sizeIndex + (int)6);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1488)
							int tmp38 = sizeIndex;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1488)
							int tmp39 = segment.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1488)
							::String tmp40 = segment.substr(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1488)
							Dynamic tmp41 = ::Std_obj::parseInt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1488)
							format->size = tmp41;
						}
						HX_STACK_LINE(1492)
						int tmp37 = start;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1492)
						int tmp38 = end;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1492)
						::String tmp39 = segment.substring(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1492)
						::String sub = tmp39;		HX_STACK_VAR(sub,"sub");
						HX_STACK_LINE(1493)
						::EReg tmp40 = ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1493)
						::String tmp41 = sub;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1493)
						::String tmp42 = tmp40->replace(tmp41,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1493)
						sub = tmp42;
						HX_STACK_LINE(1495)
						::openfl::text::TextFormat tmp43 = format;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1495)
						int tmp44 = value.length;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1495)
						int tmp45 = (value.length + sub.length);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1495)
						::openfl::text::TextFormatRange tmp46 = ::openfl::text::TextFormatRange_obj::__new(tmp43,tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1495)
						this->__ranges->push(tmp46);
						HX_STACK_LINE(1496)
						hx::AddEq(value,sub);
						HX_STACK_LINE(1498)
						int tmp47 = (closeFontIndex + (int)7);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1498)
						int tmp48 = segment.length;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1498)
						bool tmp49 = (tmp47 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1498)
						if ((tmp49)){
							HX_STACK_LINE(1500)
							int tmp50 = (closeFontIndex + (int)7);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1500)
							::String tmp51 = segment.substr(tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1500)
							sub = tmp51;
							HX_STACK_LINE(1501)
							::openfl::text::TextFormat tmp52 = this->__textFormat;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1501)
							int tmp53 = value.length;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1501)
							int tmp54 = (value.length + sub.length);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1501)
							::openfl::text::TextFormatRange tmp55 = ::openfl::text::TextFormatRange_obj::__new(tmp52,tmp53,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1501)
							this->__ranges->push(tmp55);
							HX_STACK_LINE(1502)
							hx::AddEq(value,sub);
						}
					}
					else{
						HX_STACK_LINE(1508)
						::openfl::text::TextFormat tmp18 = this->__textFormat;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1508)
						int tmp19 = value.length;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1508)
						int tmp20 = (value.length + segment.length);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1508)
						::openfl::text::TextFormatRange tmp21 = ::openfl::text::TextFormatRange_obj::__new(tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1508)
						this->__ranges->push(tmp21);
						HX_STACK_LINE(1509)
						hx::AddEq(value,segment);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1530)
	::String tmp5 = this->__text = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1530)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",1535,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1535)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",1536,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1536)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",1539,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1541)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1541)
	bool tmp1 = (tmp != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1541)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1541)
	if ((tmp1)){
		HX_STACK_LINE(1541)
		::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1541)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1541)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(1541)
		tmp2 = false;
	}
	HX_STACK_LINE(1541)
	if ((tmp2)){
		HX_STACK_LINE(1543)
		::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1543)
		int tmp4 = tmp3.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"))->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1543)
		int count = tmp4;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(1545)
		bool tmp5 = this->__isHTML;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1545)
		if ((tmp5)){
			HX_STACK_LINE(1547)
			::String tmp6 = this->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1547)
			int tmp7 = tmp6.split(HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27"))->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1547)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1547)
			hx::AddEq(count,tmp8);
		}
		HX_STACK_LINE(1551)
		int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1551)
		return tmp6;
	}
	HX_STACK_LINE(1555)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",1560,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1570)
	bool tmp = this->selectable = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1570)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",1575,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1577)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1577)
	if ((tmp)){
	}
	HX_STACK_LINE(1583)
	::String tmp1 = this->__text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1583)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",1588,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1602)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1602)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1602)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1602)
	if ((tmp1)){
		HX_STACK_LINE(1602)
		::String tmp3 = this->__text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1602)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1602)
		::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1602)
		tmp2 = (tmp4 != tmp5);
	}
	else{
		HX_STACK_LINE(1602)
		tmp2 = true;
	}
	HX_STACK_LINE(1602)
	if ((tmp2)){
		HX_STACK_LINE(1604)
		this->__dirty = true;
		HX_STACK_LINE(1605)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1609)
	this->__ranges = null();
	HX_STACK_LINE(1610)
	this->__isHTML = false;
	HX_STACK_LINE(1612)
	::String tmp3 = this->__text = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1612)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",1617,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1619)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1619)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1619)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",1624,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1626)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1626)
	::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1626)
	Dynamic tmp2 = tmp1->color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1626)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1626)
	if ((tmp3)){
		HX_STACK_LINE(1626)
		this->__dirty = true;
	}
	HX_STACK_LINE(1628)
	bool tmp4 = (this->__ranges != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1628)
	if ((tmp4)){
		HX_STACK_LINE(1630)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1630)
		Array< ::Dynamic > _g1 = this->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1630)
		while((true)){
			HX_STACK_LINE(1630)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1630)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1630)
			if ((tmp6)){
				HX_STACK_LINE(1630)
				break;
			}
			HX_STACK_LINE(1630)
			::openfl::text::TextFormatRange tmp7 = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1630)
			::openfl::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1630)
			++(_g);
			HX_STACK_LINE(1632)
			range->format->color = value;
		}
	}
	HX_STACK_LINE(1638)
	::openfl::text::TextFormat tmp5 = this->__textFormat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1638)
	Dynamic tmp6 = tmp5->color = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1638)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",1642,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1650)
	Float tmp = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(hx::ObjectPtr<OBJ_>(this),(int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1650)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",1656,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1679)
	Float tmp = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getTextHeight(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1679)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

::openfl::text::TextFieldType TextField_obj::set_type( ::openfl::text::TextFieldType value){
	HX_STACK_FRAME("openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",1685,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1687)
	::openfl::text::TextFieldType tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1687)
	::openfl::text::TextFieldType tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1687)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1687)
	if ((tmp2)){
		HX_STACK_LINE(1690)
		bool tmp3 = (value == ::openfl::text::TextFieldType_obj::INPUT);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1690)
		if ((tmp3)){
			HX_STACK_LINE(1692)
			::openfl::_internal::renderer::canvas::CanvasTextField_obj::enableInputMode(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1696)
			::openfl::_internal::renderer::canvas::CanvasTextField_obj::disableInputMode(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1701)
		this->__dirty = true;
	}
	HX_STACK_LINE(1705)
	::openfl::text::TextFieldType tmp3 = this->type = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1705)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	HX_STACK_FRAME("openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",1710,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1712)
	::openfl::geom::Rectangle tmp = this->get_bounds();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1712)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1712)
	return tmp1;
}


Float TextField_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",1716,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1718)
	Float tmp = this->get_scaleX();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1718)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1718)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1718)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1718)
	if ((tmp2)){
		HX_STACK_LINE(1718)
		Float tmp4 = this->__width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1718)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1718)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1718)
		tmp3 = (tmp5 != tmp6);
	}
	else{
		HX_STACK_LINE(1718)
		tmp3 = true;
	}
	HX_STACK_LINE(1718)
	if ((tmp3)){
		HX_STACK_LINE(1720)
		{
			HX_STACK_LINE(1720)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1720)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1720)
			if ((tmp5)){
				HX_STACK_LINE(1720)
				this->__transformDirty = true;
				HX_STACK_LINE(1720)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1721)
		this->__dirty = true;
		HX_STACK_LINE(1722)
		this->__dirtyBounds = true;
	}
	HX_STACK_LINE(1726)
	this->set_scaleX((int)1);
	HX_STACK_LINE(1727)
	Float tmp4 = this->__width = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1727)
	return tmp4;
}


bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",1732,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1734)
	bool tmp = this->wordWrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1734)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",1739,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1742)
	bool tmp = this->wordWrap = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1742)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(caretPos,"caretPos");
	HX_MARK_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_MARK_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__dirtyBounds,"__dirtyBounds");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__ranges,"__ranges");
	HX_MARK_MEMBER_NAME(__selectable,"__selectable");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__tileData,"__tileData");
	HX_MARK_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_MARK_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(caretPos,"caretPos");
	HX_VISIT_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_VISIT_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__dirtyBounds,"__dirtyBounds");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__ranges,"__ranges");
	HX_VISIT_MEMBER_NAME(__selectable,"__selectable");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__tileData,"__tileData");
	HX_VISIT_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_VISIT_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return inCallProp == hx::paccAlways ? get_bounds() : bounds; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"caretPos") ) { return inCallProp == hx::paccAlways ? get_caretPos() : caretPos; }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp == hx::paccAlways ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return inCallProp == hx::paccAlways ? get_wordWrap() : wordWrap; }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"__ranges") ) { return __ranges; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp == hx::paccAlways ? get_textWidth() : textWidth; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp == hx::paccAlways ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp == hx::paccAlways ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp == hx::paccAlways ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { return __tileData; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__selectable") ) { return __selectable; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { return __tilesheets; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretPos") ) { return get_caretPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp == hx::paccAlways ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"__dirtyBounds") ) { return __dirtyBounds; }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { return __tileDataLength; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return displayAsPassword; }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { return selectionEndIndex; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { return selectionBeginIndex; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = __defaultTextFormat; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue);type=inValue.Cast< ::openfl::text::TextFieldType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue);border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue);autoSize=inValue.Cast< ::openfl::text::TextFieldAutoSize >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretPos") ) { caretPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ranges") ) { __ranges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue);background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue);selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { __tileData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::openfl::text::GridFitType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< ::lime::graphics::cairo::CairoFont >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__selectable") ) { __selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { __tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::openfl::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirtyBounds") ) { __dirtyBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { __tileDataLength=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { selectionEndIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { selectionBeginIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=ioValue.Cast< ::openfl::text::TextFormat >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("caretPos","\xd1","\xaf","\x35","\xe9"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"));
	outFields->push(HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__dirtyBounds","\x07","\xe5","\x98","\x9a"));
	outFields->push(HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"));
	outFields->push(HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"));
	outFields->push(HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"));
	outFields->push(HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"));
	outFields->push(HX_HCSTRING("__ranges","\x36","\xcb","\xc0","\x5f"));
	outFields->push(HX_HCSTRING("__selectable","\xb6","\x31","\xbe","\xfc"));
	outFields->push(HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	outFields->push(HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f"));
	outFields->push(HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c"));
	outFields->push(HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::AntiAliasType*/ ,(int)offsetof(TextField_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsObject /*::openfl::text::TextFieldAutoSize*/ ,(int)offsetof(TextField_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsBool,(int)offsetof(TextField_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(TextField_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(TextField_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(TextField_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretPos),HX_HCSTRING("caretPos","\xd1","\xaf","\x35","\xe9")},
	{hx::fsBool,(int)offsetof(TextField_obj,displayAsPassword),HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea")},
	{hx::fsBool,(int)offsetof(TextField_obj,embedFonts),HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e")},
	{hx::fsObject /*::openfl::text::GridFitType*/ ,(int)offsetof(TextField_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsInt,(int)offsetof(TextField_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxChars),HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsBool,(int)offsetof(TextField_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsString,(int)offsetof(TextField_obj,restrict),HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1")},
	{hx::fsInt,(int)offsetof(TextField_obj,scrollH),HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30")},
	{hx::fsInt,(int)offsetof(TextField_obj,scrollV),HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(TextField_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionBeginIndex),HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionEndIndex),HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b")},
	{hx::fsFloat,(int)offsetof(TextField_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*::openfl::text::TextFieldType*/ ,(int)offsetof(TextField_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(TextField_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsInt,(int)offsetof(TextField_obj,__cursorPosition),HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirtyBounds),HX_HCSTRING("__dirtyBounds","\x07","\xe5","\x98","\x9a")},
	{hx::fsBool,(int)offsetof(TextField_obj,__hasFocus),HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isKeyDown),HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce")},
	{hx::fsInt,(int)offsetof(TextField_obj,__measuredHeight),HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42")},
	{hx::fsInt,(int)offsetof(TextField_obj,__measuredWidth),HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextField_obj,__ranges),HX_HCSTRING("__ranges","\x36","\xcb","\xc0","\x5f")},
	{hx::fsBool,(int)offsetof(TextField_obj,__selectable),HX_HCSTRING("__selectable","\xb6","\x31","\xbe","\xfc")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionStart),HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsString,(int)offsetof(TextField_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextField_obj,__textLayout),HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextField_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tileData),HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tileDataLength),HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextField_obj,__tilesheets),HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88")},
	{hx::fsFloat,(int)offsetof(TextField_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::CairoFont*/ ,(int)offsetof(TextField_obj,__cairoFont),HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(void *) &TextField_obj::__defaultTextFormat,HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("caretPos","\xd1","\xaf","\x35","\xe9"),
	HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"),
	HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"),
	HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"),
	HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__dirtyBounds","\x07","\xe5","\x98","\x9a"),
	HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"),
	HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"),
	HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"),
	HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"),
	HX_HCSTRING("__ranges","\x36","\xcb","\xc0","\x5f"),
	HX_HCSTRING("__selectable","\xb6","\x31","\xbe","\xfc"),
	HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f"),
	HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c"),
	HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getCharBoundaries","\x74","\x85","\xa1","\x8b"),
	HX_HCSTRING("getCharIndexAtPoint","\x17","\xee","\x9c","\xaa"),
	HX_HCSTRING("getLineIndexAtPoint","\x35","\xdc","\x50","\x98"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getPosition","\x3f","\xa4","\x66","\x39"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__startCursorTimer","\xed","\x46","\xa3","\x83"),
	HX_HCSTRING("__stopCursorTimer","\x0d","\xcd","\x6c","\x26"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("get_caretPos","\xda","\x63","\x4f","\x9e"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextField","\xca","\xa8","\xd5","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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
} // end namespace text
