#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
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
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap CairoTextField_obj::__defaultFonts;

int CairoTextField_obj::__utf8_endline_code;

::openfl::text::Font CairoTextField_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","findFont",0x0ba252d0,"openfl._internal.renderer.cairo.CairoTextField.findFont","openfl/_internal/renderer/cairo/CairoTextField.hx",34,0xfadfb778)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		while((true)){
			HX_STACK_LINE(38)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(38)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			if ((tmp1)){
				HX_STACK_LINE(38)
				break;
			}
			HX_STACK_LINE(38)
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			::openfl::text::Font registeredFont = tmp2;		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(38)
			++(_g);
			HX_STACK_LINE(40)
			bool tmp3 = (registeredFont == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			if ((tmp3)){
				HX_STACK_LINE(40)
				continue;
			}
			HX_STACK_LINE(42)
			bool tmp4 = (registeredFont->name == name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			if ((tmp5)){
				HX_STACK_LINE(42)
				bool tmp7 = (registeredFont->__fontPath != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(42)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(42)
				if ((tmp9)){
					HX_STACK_LINE(42)
					bool tmp10 = (registeredFont->__fontPath == name);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(42)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(42)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(42)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(42)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(42)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(42)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(42)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(42)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(42)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(42)
					if ((tmp19)){
						HX_STACK_LINE(42)
						::String tmp20 = registeredFont->__fontPath;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(42)
						::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(42)
						::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(42)
						::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(42)
						::String tmp24 = ::haxe::io::Path_obj::withoutDirectory(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(42)
						::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(42)
						::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(42)
						::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(42)
						::String tmp28 = name;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(42)
						tmp6 = (tmp27 == tmp28);
					}
					else{
						HX_STACK_LINE(42)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(42)
					tmp6 = false;
				}
			}
			else{
				HX_STACK_LINE(42)
				tmp6 = true;
			}
			HX_STACK_LINE(42)
			if ((tmp6)){
				HX_STACK_LINE(44)
				::openfl::text::Font tmp7 = registeredFont;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(44)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(50)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(52)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp2)){
		HX_STACK_LINE(54)
		::openfl::text::Font tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		HX_STACK_LINE(55)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		return tmp4;
	}
	HX_STACK_LINE(61)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,findFont,return )

::openfl::text::Font CairoTextField_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getFontInstance",0xc4376312,"openfl._internal.renderer.cairo.CairoTextField.getFontInstance","openfl/_internal/renderer/cairo/CairoTextField.hx",66,0xfadfb778)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(70)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(71)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(73)
	bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	if ((tmp)){
		HX_STACK_LINE(73)
		tmp1 = (format->font != null());
	}
	else{
		HX_STACK_LINE(73)
		tmp1 = false;
	}
	HX_STACK_LINE(73)
	if ((tmp1)){
		HX_STACK_LINE(75)
		::haxe::ds::StringMap tmp2 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__defaultFonts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		::String tmp3 = format->font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(77)
			::haxe::ds::StringMap tmp5 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__defaultFonts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			::String tmp6 = format->font;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			::openfl::text::Font tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::openfl::text::Font tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			return tmp8;
		}
		HX_STACK_LINE(81)
		::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		::openfl::text::Font tmp6 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		instance = tmp6;
		HX_STACK_LINE(82)
		bool tmp7 = (instance != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		if ((tmp7)){
			HX_STACK_LINE(82)
			::openfl::text::Font tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			return tmp8;
		}
		HX_STACK_LINE(84)
		::String tmp8 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		::String systemFontDirectory = tmp8;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::String _g = format->font;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			::String tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			::String _switch_1 = (tmp9);
			if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				HX_STACK_LINE(91)
				Dynamic tmp10 = format->bold;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(91)
				if ((tmp10)){
					HX_STACK_LINE(93)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(93)
					if ((tmp11)){
						HX_STACK_LINE(95)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arialbi.ttf","\x73","\x0e","\x91","\x06"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(95)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(99)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arialbd.ttf","\xee","\x27","\x90","\x25"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(99)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
				else{
					HX_STACK_LINE(105)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(105)
					if ((tmp11)){
						HX_STACK_LINE(107)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/ariali.ttf","\x2d","\xc9","\x3e","\x6e"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(107)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(111)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arial.ttf","\x2c","\x34","\x8e","\xd8"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(111)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				HX_STACK_LINE(133)
				Dynamic tmp10 = format->bold;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(133)
				if ((tmp10)){
					HX_STACK_LINE(135)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(135)
					if ((tmp11)){
						HX_STACK_LINE(137)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/courbi.ttf","\x77","\x1e","\xb8","\xe7"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(137)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(141)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/courbd.ttf","\xf2","\x37","\xb7","\x06"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(141)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
				else{
					HX_STACK_LINE(147)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(147)
					if ((tmp11)){
						HX_STACK_LINE(149)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/couri.ttf","\xa9","\xa5","\xb8","\xd7"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(149)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(153)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/cour.ttf","\x30","\x7b","\xd2","\x6a"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(153)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
			}
			else  {
				HX_STACK_LINE(170)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(170)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				fontList = Array_obj< ::String >::__new().Add(tmp12);
			}
;
;
		}
		HX_STACK_LINE(174)
		bool tmp9 = (fontList != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		if ((tmp9)){
			HX_STACK_LINE(176)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				bool tmp10 = (_g < fontList->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				if ((tmp11)){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				::String tmp12 = fontList->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				::String font = tmp12;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(176)
				++(_g);
				HX_STACK_LINE(178)
				::String tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(178)
				::openfl::text::Font tmp14 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(178)
				instance = tmp14;
				HX_STACK_LINE(180)
				bool tmp15 = (instance != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(180)
				if ((tmp15)){
					HX_STACK_LINE(182)
					::haxe::ds::StringMap tmp16 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__defaultFonts;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(182)
					::String tmp17 = format->font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(182)
					::openfl::text::Font tmp18 = instance;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					tmp16->set(tmp17,tmp18);
					HX_STACK_LINE(183)
					::openfl::text::Font tmp19 = instance;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(183)
					return tmp19;
				}
			}
		}
		HX_STACK_LINE(191)
		::openfl::text::Font tmp10 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(191)
		instance = tmp10;
		HX_STACK_LINE(192)
		bool tmp11 = (instance != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		if ((tmp11)){
			HX_STACK_LINE(192)
			::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(192)
			return tmp12;
		}
	}
	HX_STACK_LINE(196)
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	::String systemFontDirectory = tmp2;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(199)
	Dynamic tmp3 = format->bold;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	if ((tmp3)){
		HX_STACK_LINE(201)
		Dynamic tmp4 = format->italic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		if ((tmp4)){
			HX_STACK_LINE(203)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/georgiaz.ttf","\x03","\xd3","\xc1","\xa1"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
		else{
			HX_STACK_LINE(207)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/georgiab.ttf","\xeb","\xe6","\x23","\xd0"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
	}
	else{
		HX_STACK_LINE(213)
		Dynamic tmp4 = format->italic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		if ((tmp4)){
			HX_STACK_LINE(215)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/geogiai.ttf","\xc4","\xdd","\xba","\xad"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
		else{
			HX_STACK_LINE(219)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/georgia.ttf","\x87","\x16","\x61","\x67"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
	}
	HX_STACK_LINE(236)
	{
		HX_STACK_LINE(236)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			bool tmp4 = (_g < fontList->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			if ((tmp5)){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(236)
			::String tmp6 = fontList->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			::String font = tmp6;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(236)
			++(_g);
			HX_STACK_LINE(238)
			::String tmp7 = font;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			::openfl::text::Font tmp8 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			instance = tmp8;
			HX_STACK_LINE(240)
			bool tmp9 = (instance != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			if ((tmp9)){
				HX_STACK_LINE(242)
				::haxe::ds::StringMap tmp10 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__defaultFonts;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(242)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(242)
				::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(242)
				tmp10->set(tmp11,tmp12);
				HX_STACK_LINE(243)
				::openfl::text::Font tmp13 = instance;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(243)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(249)
	::haxe::ds::StringMap tmp4 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__defaultFonts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(249)
	tmp4->set(tmp5,null());
	HX_STACK_LINE(253)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getFontInstance,return )

int CairoTextField_obj::getLineBreaks( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreaks",0x445de0f6,"openfl._internal.renderer.cairo.CairoTextField.getLineBreaks","openfl/_internal/renderer/cairo/CairoTextField.hx",258,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(262)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(264)
		::String tmp = textField->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		int tmp1 = ::haxe::Utf8_obj::length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(264)
		while((true)){
			HX_STACK_LINE(264)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(264)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(264)
			if ((tmp3)){
				HX_STACK_LINE(264)
				break;
			}
			HX_STACK_LINE(264)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(264)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(266)
			::String tmp5 = textField->get_text();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			int tmp7 = ::haxe::Utf8_obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			int _char = tmp7;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(268)
			int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(268)
			int tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(268)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(268)
			if ((tmp10)){
				HX_STACK_LINE(270)
				(lines)++;
			}
		}
	}
	HX_STACK_LINE(276)
	int tmp = lines;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getLineBreaks,return )

Array< int > CairoTextField_obj::getLineBreakIndices( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreakIndices",0x282713ca,"openfl._internal.renderer.cairo.CairoTextField.getLineBreakIndices","openfl/_internal/renderer/cairo/CairoTextField.hx",281,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(285)
	Array< int > breaks = Array_obj< int >::__new();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(287)
	{
		HX_STACK_LINE(287)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		::String tmp = textField->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		int tmp1 = ::haxe::Utf8_obj::length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			if ((tmp3)){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(287)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(291)
				::String tmp5 = textField->get_text();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				int tmp7 = ::haxe::Utf8_obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(291)
				int _char = tmp7;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(293)
				int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				int tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(293)
				if ((tmp10)){
					HX_STACK_LINE(295)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(295)
					breaks->push(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(303)
	return breaks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getLineBreakIndices,return )

int CairoTextField_obj::getLineBreaksInRange( ::openfl::text::TextField textField,int i){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreaksInRange",0x19c56d42,"openfl._internal.renderer.cairo.CairoTextField.getLineBreaksInRange","openfl/_internal/renderer/cairo/CairoTextField.hx",308,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(312)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(314)
	int tmp = textField->__ranges->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(314)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(314)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(314)
	if ((tmp2)){
		HX_STACK_LINE(314)
		tmp3 = (i >= (int)0);
	}
	else{
		HX_STACK_LINE(314)
		tmp3 = false;
	}
	HX_STACK_LINE(314)
	if ((tmp3)){
		HX_STACK_LINE(316)
		::openfl::text::TextFormatRange tmp4 = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		::openfl::text::TextFormatRange range = tmp4;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(320)
		bool tmp5 = (range->start > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(320)
		if ((tmp5)){
			HX_STACK_LINE(320)
			int tmp7 = range->end;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			::String tmp8 = textField->get_text();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(320)
			tmp6 = (tmp7 < tmp10);
		}
		else{
			HX_STACK_LINE(320)
			tmp6 = false;
		}
		HX_STACK_LINE(320)
		if ((tmp6)){
			HX_STACK_LINE(322)
			int _g1 = range->start;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			int tmp7 = (range->end + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(322)
			int _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			while((true)){
				HX_STACK_LINE(322)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(322)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(322)
				if ((tmp9)){
					HX_STACK_LINE(322)
					break;
				}
				HX_STACK_LINE(322)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(322)
				int j = tmp10;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(324)
				::String tmp11 = textField->get_text();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(324)
				int tmp13 = ::haxe::Utf8_obj::charCodeAt(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(324)
				int _char = tmp13;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(326)
				int tmp14 = _char;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(326)
				int tmp15 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(326)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(326)
				if ((tmp16)){
					HX_STACK_LINE(328)
					(lines)++;
				}
			}
		}
	}
	HX_STACK_LINE(338)
	int tmp4 = lines;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(338)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineBreaksInRange,return )

Array< int > CairoTextField_obj::getLineIndices( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineIndices",0x894cc6c5,"openfl._internal.renderer.cairo.CairoTextField.getLineIndices","openfl/_internal/renderer/cairo/CairoTextField.hx",343,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(347)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	Array< int > breaks = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineBreakIndices(tmp);		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(348)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(349)
	int first_char = (int)0;		HX_STACK_VAR(first_char,"first_char");
	HX_STACK_LINE(350)
	::String tmp1 = textField->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	int tmp2 = tmp1.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	int last_char = tmp3;		HX_STACK_VAR(last_char,"last_char");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			bool tmp4 = (_g < breaks->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			if ((tmp5)){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(352)
			int tmp6 = breaks->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			int br = tmp6;		HX_STACK_VAR(br,"br");
			HX_STACK_LINE(352)
			++(_g);
			HX_STACK_LINE(356)
			bool tmp7 = (i == line);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(356)
			if ((tmp7)){
				HX_STACK_LINE(360)
				int tmp8 = (br + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(360)
				first_char = tmp8;
				HX_STACK_LINE(364)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(364)
				int tmp10 = (breaks->length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(364)
				if ((tmp11)){
					HX_STACK_LINE(369)
					int tmp12 = (i + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(369)
					int tmp13 = breaks->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(369)
					int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(369)
					last_char = tmp14;
				}
			}
			HX_STACK_LINE(375)
			(i)++;
		}
	}
	HX_STACK_LINE(379)
	return Array_obj< int >::__new().Add(first_char).Add(last_char);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineIndices,return )

Float CairoTextField_obj::getLineMetric( ::openfl::text::TextField textField,int line,int metric){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetric",0x380c6652,"openfl._internal.renderer.cairo.CairoTextField.getLineMetric","openfl/_internal/renderer/cairo/CairoTextField.hx",384,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(386)
	bool tmp = (textField->__ranges == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	if ((tmp)){
		HX_STACK_LINE(388)
		::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		int tmp2 = metric;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		Float tmp3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp1,true,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		return tmp3;
	}
	else{
		HX_STACK_LINE(392)
		::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		int tmp2 = line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		int tmp3 = metric;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(392)
		Float tmp4 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		return tmp4;
	}
	HX_STACK_LINE(386)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetric,return )

Float CairoTextField_obj::getLineMetricSubRangesNotNull( ::openfl::text::TextField textField,int specificLine,int metric){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetricSubRangesNotNull",0x4ef3fc96,"openfl._internal.renderer.cairo.CairoTextField.getLineMetricSubRangesNotNull","openfl/_internal/renderer/cairo/CairoTextField.hx",399,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(specificLine,"specificLine")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(404)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	int tmp1 = specificLine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	Array< int > lineChars = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineIndices(tmp,tmp1);		HX_STACK_VAR(lineChars,"lineChars");
	HX_STACK_LINE(406)
	Float m = ((Float)0.0);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(407)
	Float best_m = ((Float)0.0);		HX_STACK_VAR(best_m,"best_m");
	HX_STACK_LINE(409)
	{
		HX_STACK_LINE(409)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(409)
		Array< ::Dynamic > _g1 = textField->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(409)
		while((true)){
			HX_STACK_LINE(409)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(409)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(409)
			if ((tmp3)){
				HX_STACK_LINE(409)
				break;
			}
			HX_STACK_LINE(409)
			::openfl::text::TextFormatRange tmp4 = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(409)
			::openfl::text::TextFormatRange range = tmp4;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(409)
			++(_g);
			HX_STACK_LINE(411)
			int tmp5 = range->start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(411)
			int tmp6 = lineChars->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(411)
			bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(411)
			if ((tmp7)){
				HX_STACK_LINE(413)
				::openfl::text::TextFormat tmp8 = range->format;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(413)
				::openfl::text::Font tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(413)
				::openfl::text::Font font = tmp9;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(415)
				bool tmp10 = (font != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(415)
				if ((tmp10)){
					HX_STACK_LINE(417)
					int tmp11 = metric;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(417)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(417)
					switch( (int)(tmp11)){
						case (int)2: {
							HX_STACK_LINE(419)
							::openfl::text::TextField tmp13 = textField;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(419)
							int tmp14 = specificLine;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(419)
							Float tmp15 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp13,tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(419)
							::openfl::text::TextField tmp16 = textField;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(419)
							int tmp17 = specificLine;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(419)
							Float tmp18 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp16,tmp17,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(419)
							Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(419)
							::openfl::text::TextField tmp20 = textField;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(419)
							int tmp21 = specificLine;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(419)
							Float tmp22 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp20,tmp21,(int)3);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(419)
							tmp12 = (tmp19 + tmp22);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(420)
							int tmp13 = font->get_ascender();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(420)
							int tmp14 = font->get_unitsPerEM();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(420)
							Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(420)
							Dynamic tmp16 = textField->__textFormat->size;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(420)
							tmp12 = (tmp15 * tmp16);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(421)
							int tmp13 = font->get_descender();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(421)
							int tmp14 = font->get_unitsPerEM();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(421)
							Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							Dynamic tmp16 = textField->__textFormat->size;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							tmp12 = ::Math_obj::abs(tmp17);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(422)
							Dynamic tmp13 = textField->__textFormat->leading;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(422)
							tmp12 = (tmp13 + (int)4);
						}
						;break;
						default: {
							HX_STACK_LINE(423)
							tmp12 = (int)0;
						}
					}
					HX_STACK_LINE(417)
					m = tmp12;
				}
			}
			HX_STACK_LINE(431)
			bool tmp8 = (m > best_m);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(431)
			if ((tmp8)){
				HX_STACK_LINE(433)
				best_m = m;
			}
			HX_STACK_LINE(437)
			m = (int)0;
		}
	}
	HX_STACK_LINE(441)
	Float tmp2 = best_m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetricSubRangesNotNull,return )

Float CairoTextField_obj::getLineMetricSubRangesNull( ::openfl::text::TextField textField,hx::Null< bool >  __o_singleLine,int metric){
bool singleLine = __o_singleLine.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetricSubRangesNull",0xbb6659ab,"openfl._internal.renderer.cairo.CairoTextField.getLineMetricSubRangesNull","openfl/_internal/renderer/cairo/CairoTextField.hx",446,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(singleLine,"singleLine")
	HX_STACK_ARG(metric,"metric")
{
		HX_STACK_LINE(450)
		::openfl::text::TextFormat tmp = textField->__textFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(452)
		bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		if ((tmp2)){
			HX_STACK_LINE(454)
			int tmp3 = metric;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(454)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(454)
			switch( (int)(tmp3)){
				case (int)2: {
					HX_STACK_LINE(456)
					::openfl::text::TextField tmp5 = textField;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(456)
					bool tmp6 = singleLine;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(456)
					Float tmp7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp5,tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(456)
					::openfl::text::TextField tmp8 = textField;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(456)
					bool tmp9 = singleLine;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(456)
					Float tmp10 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp8,tmp9,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(456)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(456)
					::openfl::text::TextField tmp12 = textField;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(456)
					bool tmp13 = singleLine;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(456)
					Float tmp14 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp12,tmp13,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(456)
					tmp4 = (tmp11 + tmp14);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(457)
					int tmp5 = font->get_ascender();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(457)
					int tmp6 = font->get_unitsPerEM();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(457)
					Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(457)
					Dynamic tmp8 = textField->__textFormat->size;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(457)
					tmp4 = (tmp7 * tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(458)
					int tmp5 = font->get_descender();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					int tmp6 = font->get_unitsPerEM();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(458)
					Dynamic tmp8 = textField->__textFormat->size;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(458)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(458)
					tmp4 = ::Math_obj::abs(tmp9);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(459)
					Dynamic tmp5 = textField->__textFormat->leading;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(459)
					tmp4 = (tmp5 + (int)4);
				}
				;break;
				default: {
					HX_STACK_LINE(460)
					tmp4 = (int)0;
				}
			}
			HX_STACK_LINE(454)
			return tmp4;
		}
		HX_STACK_LINE(466)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetricSubRangesNull,return )

Float CairoTextField_obj::getLineWidth( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineWidth",0xbf1d7224,"openfl._internal.renderer.cairo.CairoTextField.getLineWidth","openfl/_internal/renderer/cairo/CairoTextField.hx",471,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(477)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(477)
	Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSub(tmp,false);		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(479)
	Float currWidth = ((Float)0.0);		HX_STACK_VAR(currWidth,"currWidth");
	HX_STACK_LINE(480)
	Float bestWidth = ((Float)0.0);		HX_STACK_VAR(bestWidth,"bestWidth");
	HX_STACK_LINE(482)
	::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	Array< int > linebreaks = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineBreakIndices(tmp1);		HX_STACK_VAR(linebreaks,"linebreaks");
	HX_STACK_LINE(483)
	int currLine = (int)0;		HX_STACK_VAR(currLine,"currLine");
	HX_STACK_LINE(485)
	{
		HX_STACK_LINE(485)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(485)
		int _g = measurements->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(485)
		while((true)){
			HX_STACK_LINE(485)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(485)
			if ((tmp3)){
				HX_STACK_LINE(485)
				break;
			}
			HX_STACK_LINE(485)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(485)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(487)
			Float tmp5 = measurements->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(487)
			Float measure = tmp5;		HX_STACK_VAR(measure,"measure");
			HX_STACK_LINE(489)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(489)
			int tmp7 = linebreaks->indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(489)
			bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(489)
			if ((tmp8)){
				HX_STACK_LINE(491)
				bool tmp9 = (currLine == line);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(491)
				if ((tmp9)){
					HX_STACK_LINE(493)
					Float tmp10 = currWidth;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(493)
					return tmp10;
				}
				else{
					HX_STACK_LINE(495)
					int tmp10 = line;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(495)
					int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(495)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(495)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(495)
					if ((tmp12)){
						HX_STACK_LINE(495)
						tmp13 = (currWidth > bestWidth);
					}
					else{
						HX_STACK_LINE(495)
						tmp13 = false;
					}
					HX_STACK_LINE(495)
					if ((tmp13)){
						HX_STACK_LINE(497)
						bestWidth = currWidth;
					}
				}
				HX_STACK_LINE(501)
				currWidth = (int)0;
				HX_STACK_LINE(502)
				(currLine)++;
			}
			else{
				HX_STACK_LINE(506)
				Float tmp9 = measurements->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(506)
				hx::AddEq(currWidth,tmp9);
			}
		}
	}
	HX_STACK_LINE(512)
	bool tmp2 = (currLine == line);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(512)
	if ((tmp2)){
		HX_STACK_LINE(514)
		bestWidth = currWidth;
	}
	else{
		HX_STACK_LINE(516)
		int tmp3 = line;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(516)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(516)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(516)
		if ((tmp5)){
			HX_STACK_LINE(516)
			tmp6 = (currWidth > bestWidth);
		}
		else{
			HX_STACK_LINE(516)
			tmp6 = false;
		}
		HX_STACK_LINE(516)
		if ((tmp6)){
			HX_STACK_LINE(518)
			bestWidth = currWidth;
		}
	}
	HX_STACK_LINE(522)
	Float tmp3 = bestWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(522)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineWidth,return )

Float CairoTextField_obj::getTextHeight( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getTextHeight",0x933e6b82,"openfl._internal.renderer.cairo.CairoTextField.getTextHeight","openfl/_internal/renderer/cairo/CairoTextField.hx",533,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(538)
	Float th = ((Float)0.0);		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(540)
		int tmp = textField->get_numLines();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		while((true)){
			HX_STACK_LINE(540)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(540)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(540)
			if ((tmp2)){
				HX_STACK_LINE(540)
				break;
			}
			HX_STACK_LINE(540)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(542)
			::openfl::text::TextField tmp4 = textField;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(542)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(542)
			Float tmp6 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(tmp4,tmp5,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(542)
			::openfl::text::TextField tmp7 = textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(542)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(542)
			Float tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(tmp7,tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(542)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(542)
			hx::AddEq(th,tmp10);
			HX_STACK_LINE(544)
			int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			int tmp12 = textField->get_numLines();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(544)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(544)
			bool tmp14 = (tmp11 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(544)
			if ((tmp14)){
				HX_STACK_LINE(546)
				::openfl::text::TextField tmp15 = textField;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(546)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(546)
				Float tmp17 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(tmp15,tmp16,(int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(546)
				hx::AddEq(th,tmp17);
			}
		}
	}
	HX_STACK_LINE(552)
	Float tmp = th;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getTextHeight,return )

Float CairoTextField_obj::getTextWidth( ::openfl::text::TextField textField,::String text){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getTextWidth",0x110ffecb,"openfl._internal.renderer.cairo.CairoTextField.getTextWidth","openfl/_internal/renderer/cairo/CairoTextField.hx",559,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(559)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getTextWidth,return )

Array< Float > CairoTextField_obj::measureText( ::openfl::text::TextField textField,hx::Null< bool >  __o_condense){
bool condense = __o_condense.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureText",0xdd449c03,"openfl._internal.renderer.cairo.CairoTextField.measureText","openfl/_internal/renderer/cairo/CairoTextField.hx",564,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
{
		HX_STACK_LINE(569)
		::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		bool tmp1 = condense;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSub(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureText,return )

Array< Float > CairoTextField_obj::measureTextSub( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSub",0xe4bfe93d,"openfl._internal.renderer.cairo.CairoTextField.measureTextSub","openfl/_internal/renderer/cairo/CairoTextField.hx",574,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(578)
	bool tmp = (textField->__textLayout == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	if ((tmp)){
		HX_STACK_LINE(580)
		::lime::text::TextLayout tmp1 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		textField->__textLayout = tmp1;
	}
	HX_STACK_LINE(584)
	bool tmp1 = (textField->__ranges == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	if ((tmp1)){
		HX_STACK_LINE(586)
		::openfl::text::TextField tmp2 = textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(586)
		bool tmp3 = condense;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(586)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSubRangesNull(tmp2,tmp3);
	}
	else{
		HX_STACK_LINE(590)
		::openfl::text::TextField tmp2 = textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		bool tmp3 = condense;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(590)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSubRangesNotNull(tmp2,tmp3);
	}
	HX_STACK_LINE(594)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSub,return )

Array< Float > CairoTextField_obj::measureTextSubRangesNotNull( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSubRangesNotNull",0xe93a6447,"openfl._internal.renderer.cairo.CairoTextField.measureTextSubRangesNotNull","openfl/_internal/renderer/cairo/CairoTextField.hx",599,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(603)
	Array< Float > measurements = Array_obj< Float >::__new();		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(604)
	::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
	HX_STACK_LINE(606)
	{
		HX_STACK_LINE(606)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(606)
		Array< ::Dynamic > _g1 = textField->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(606)
		while((true)){
			HX_STACK_LINE(606)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(606)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(606)
			if ((tmp1)){
				HX_STACK_LINE(606)
				break;
			}
			HX_STACK_LINE(606)
			::openfl::text::TextFormatRange tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			::openfl::text::TextFormatRange range = tmp2;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(606)
			++(_g);
			HX_STACK_LINE(608)
			::openfl::text::TextFormat tmp3 = range->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(608)
			::openfl::text::Font tmp4 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(608)
			::openfl::text::Font font = tmp4;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(609)
			Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(611)
			bool tmp5 = (font != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(611)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(611)
			if ((tmp5)){
				HX_STACK_LINE(611)
				Dynamic tmp7 = range->format->size;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(611)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(611)
				tmp6 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(611)
				tmp6 = false;
			}
			HX_STACK_LINE(611)
			if ((tmp6)){
				HX_STACK_LINE(613)
				textLayout->set_text(null());
				HX_STACK_LINE(614)
				::openfl::text::Font tmp7 = font;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				textLayout->set_font(tmp7);
				HX_STACK_LINE(615)
				Dynamic tmp8 = range->format->size;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(615)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(615)
				textLayout->set_size(tmp9);
				HX_STACK_LINE(616)
				::String tmp10 = textField->get_text();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(616)
				int tmp11 = range->start;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(616)
				int tmp12 = range->end;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(616)
				::String tmp13 = tmp10.substring(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(616)
				textLayout->set_text(tmp13);
				HX_STACK_LINE(618)
				{
					HX_STACK_LINE(618)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(618)
					Array< ::Dynamic > _g3 = textLayout->get_positions();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(618)
					while((true)){
						HX_STACK_LINE(618)
						bool tmp14 = (_g2 < _g3->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(618)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(618)
						if ((tmp15)){
							HX_STACK_LINE(618)
							break;
						}
						HX_STACK_LINE(618)
						::lime::text::GlyphPosition tmp16 = _g3->__get(_g2).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(618)
						::lime::text::GlyphPosition position = tmp16;		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(618)
						++(_g2);
						HX_STACK_LINE(620)
						bool tmp17 = condense;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(620)
						if ((tmp17)){
							HX_STACK_LINE(622)
							Float tmp18 = position->advance->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(622)
							hx::AddEq(width,tmp18);
						}
						else{
							HX_STACK_LINE(626)
							Float tmp18 = position->advance->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(626)
							measurements->push(tmp18);
						}
					}
				}
			}
			HX_STACK_LINE(634)
			bool tmp7 = condense;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(634)
			if ((tmp7)){
				HX_STACK_LINE(636)
				Float tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(636)
				measurements->push(tmp8);
			}
		}
	}
	HX_STACK_LINE(642)
	return measurements;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSubRangesNotNull,return )

Array< Float > CairoTextField_obj::measureTextSubRangesNull( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSubRangesNull",0xaf47a95a,"openfl._internal.renderer.cairo.CairoTextField.measureTextSubRangesNull","openfl/_internal/renderer/cairo/CairoTextField.hx",647,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(651)
	::openfl::text::TextFormat tmp = textField->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(652)
	Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(653)
	Array< Float > widths = Array_obj< Float >::__new();		HX_STACK_VAR(widths,"widths");
	HX_STACK_LINE(654)
	::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
	HX_STACK_LINE(656)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	if ((tmp2)){
		HX_STACK_LINE(656)
		Dynamic tmp4 = textField->__textFormat->size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(656)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(656)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(656)
		tmp3 = false;
	}
	HX_STACK_LINE(656)
	if ((tmp3)){
		HX_STACK_LINE(658)
		textLayout->set_text(null());
		HX_STACK_LINE(659)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(659)
		textLayout->set_font(tmp4);
		HX_STACK_LINE(660)
		Dynamic tmp5 = textField->__textFormat->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(660)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(660)
		textLayout->set_size(tmp6);
		HX_STACK_LINE(661)
		::String tmp7 = textField->__text;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		textLayout->set_text(tmp7);
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(663)
			Array< ::Dynamic > _g1 = textLayout->get_positions();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(663)
			while((true)){
				HX_STACK_LINE(663)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(663)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(663)
				if ((tmp9)){
					HX_STACK_LINE(663)
					break;
				}
				HX_STACK_LINE(663)
				::lime::text::GlyphPosition tmp10 = _g1->__get(_g).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(663)
				::lime::text::GlyphPosition position = tmp10;		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(663)
				++(_g);
				HX_STACK_LINE(665)
				bool tmp11 = condense;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(665)
				if ((tmp11)){
					HX_STACK_LINE(667)
					Float tmp12 = position->advance->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(667)
					hx::AddEq(width,tmp12);
				}
				else{
					HX_STACK_LINE(671)
					Float tmp12 = position->advance->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(671)
					widths->push(tmp12);
				}
			}
		}
	}
	HX_STACK_LINE(679)
	bool tmp4 = condense;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(679)
	if ((tmp4)){
		HX_STACK_LINE(681)
		Float tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(681)
		widths->push(tmp5);
	}
	HX_STACK_LINE(685)
	return widths;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSubRangesNull,return )

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",690,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(693)
		bool tmp = textField->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(693)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(693)
		if ((tmp1)){
			HX_STACK_LINE(693)
			return null();
		}
		HX_STACK_LINE(695)
		::openfl::geom::Rectangle tmp2 = textField->get_bounds();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(696)
		::openfl::text::TextFormat tmp3 = textField->getTextFormat(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(696)
		::openfl::text::TextFormat format = tmp3;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(698)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(699)
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(701)
		bool tmp4 = (cairo != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		if ((tmp4)){
			HX_STACK_LINE(703)
			Dynamic tmp5 = cairo->get_target();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			Dynamic surface = tmp5;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(705)
			Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(705)
			int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(705)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			int tmp9 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(705)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(705)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(705)
			if ((tmp11)){
				HX_STACK_LINE(705)
				Float tmp13 = bounds->height;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(705)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(705)
				int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(705)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(705)
				Dynamic tmp17 = surface;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(705)
				Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(705)
				int tmp19 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(705)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(705)
				tmp12 = (tmp16 != tmp20);
			}
			else{
				HX_STACK_LINE(705)
				tmp12 = true;
			}
			HX_STACK_LINE(705)
			if ((tmp12)){
				HX_STACK_LINE(707)
				cairo->destroy();
				HX_STACK_LINE(708)
				cairo = null();
			}
		}
		HX_STACK_LINE(714)
		bool tmp5 = (cairo == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(714)
		if ((tmp5)){
			HX_STACK_LINE(716)
			Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(716)
			int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(716)
			Float tmp8 = bounds->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(716)
			int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(716)
			::openfl::display::BitmapData tmp10 = ::openfl::display::BitmapData_obj::__new(tmp7,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(716)
			::openfl::display::BitmapData bitmap = tmp10;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(717)
			Dynamic tmp11 = bitmap->getSurface();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(717)
			Dynamic surface = tmp11;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(718)
			::lime::graphics::cairo::Cairo tmp12 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(718)
			graphics->__cairo = tmp12;
			HX_STACK_LINE(719)
			Dynamic tmp13 = surface;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(719)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp13);
			HX_STACK_LINE(721)
			graphics->__bitmap = bitmap;
			HX_STACK_LINE(722)
			::openfl::geom::Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__new(bounds->x,bounds->y,bounds->width,bounds->height);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(722)
			graphics->__bounds = tmp14;
			HX_STACK_LINE(724)
			cairo = graphics->__cairo;
			HX_STACK_LINE(726)
			::lime::graphics::cairo::CairoFontOptions tmp15 = ::lime::graphics::cairo::CairoFontOptions_obj::__new(null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(726)
			::lime::graphics::cairo::CairoFontOptions options = tmp15;		HX_STACK_VAR(options,"options");
			HX_STACK_LINE(727)
			options->set_hintStyle((int)4);
			HX_STACK_LINE(728)
			options->set_hintMetrics((int)2);
			HX_STACK_LINE(729)
			options->set_antialias((int)5);
			HX_STACK_LINE(730)
			::lime::graphics::cairo::CairoFontOptions tmp16 = options;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(730)
			cairo->setFontOptions(tmp16);
		}
		HX_STACK_LINE(734)
		::openfl::text::TextFormat tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(734)
		::openfl::text::Font tmp7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(734)
		::openfl::text::Font font = tmp7;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(736)
		bool tmp8 = (textField->__cairoFont != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(736)
		if ((tmp8)){
			HX_STACK_LINE(738)
			::lime::text::Font tmp9 = textField->__cairoFont->font;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(738)
			::openfl::text::Font tmp10 = font;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(738)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(738)
			if ((tmp11)){
				HX_STACK_LINE(740)
				textField->__cairoFont->destroy();
				HX_STACK_LINE(741)
				textField->__cairoFont = null();
			}
		}
		HX_STACK_LINE(747)
		bool tmp9 = (textField->__cairoFont == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(747)
		if ((tmp9)){
			HX_STACK_LINE(749)
			::lime::graphics::cairo::CairoFont tmp10 = ::lime::graphics::cairo::CairoFont_obj::__new(font);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(749)
			textField->__cairoFont = tmp10;
		}
		HX_STACK_LINE(753)
		::lime::graphics::cairo::CairoFont tmp10 = textField->__cairoFont;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(753)
		cairo->setFontFace(tmp10);
		HX_STACK_LINE(754)
		Float tmp11 = textField->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(754)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(754)
		int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(754)
		Float tmp14 = textField->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(754)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(754)
		int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(754)
		cairo->rectangle(((Float)0.5),((Float)0.5),tmp13,tmp16);
		HX_STACK_LINE(756)
		bool tmp17 = textField->background;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(756)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(756)
		if ((tmp18)){
			HX_STACK_LINE(758)
			cairo->set_operator((int)1);
			HX_STACK_LINE(759)
			cairo->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(760)
			cairo->paint();
			HX_STACK_LINE(761)
			cairo->set_operator((int)2);
		}
		else{
			HX_STACK_LINE(765)
			int color = textField->backgroundColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(766)
			int tmp19 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(766)
			int tmp20 = hx::UShr(tmp19,(int)16);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(766)
			Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(766)
			Float r = tmp21;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(767)
			int tmp22 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(767)
			int tmp23 = hx::UShr(tmp22,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(767)
			Float tmp24 = (Float(tmp23) / Float((int)255));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(767)
			Float g = tmp24;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(768)
			int tmp25 = (int(color) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(768)
			Float tmp26 = (Float(tmp25) / Float((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(768)
			Float b = tmp26;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(770)
			Float tmp27 = r;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(770)
			Float tmp28 = g;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(770)
			Float tmp29 = b;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(770)
			cairo->setSourceRGB(tmp27,tmp28,tmp29);
			HX_STACK_LINE(771)
			cairo->fillPreserve();
		}
		HX_STACK_LINE(775)
		bool tmp19 = textField->border;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(775)
		if ((tmp19)){
			HX_STACK_LINE(777)
			int color = textField->borderColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(778)
			int tmp20 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(778)
			int tmp21 = hx::UShr(tmp20,(int)16);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(778)
			Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(778)
			Float r = tmp22;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(779)
			int tmp23 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(779)
			int tmp24 = hx::UShr(tmp23,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(779)
			Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(779)
			Float g = tmp25;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(780)
			int tmp26 = (int(color) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(780)
			Float tmp27 = (Float(tmp26) / Float((int)255));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(780)
			Float b = tmp27;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(782)
			Float tmp28 = r;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(782)
			Float tmp29 = g;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(782)
			Float tmp30 = b;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(782)
			cairo->setSourceRGB(tmp28,tmp29,tmp30);
			HX_STACK_LINE(783)
			cairo->set_lineWidth((int)1);
			HX_STACK_LINE(784)
			cairo->stroke();
		}
		HX_STACK_LINE(788)
		bool tmp20 = (textField->__text != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(788)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(788)
		if ((tmp20)){
			HX_STACK_LINE(788)
			tmp21 = (textField->__text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(788)
			tmp21 = false;
		}
		HX_STACK_LINE(788)
		if ((tmp21)){
			HX_STACK_LINE(790)
			::String tmp22 = textField->get_text();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(790)
			::String text = tmp22;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(792)
			bool tmp23 = textField->displayAsPassword;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(792)
			if ((tmp23)){
				HX_STACK_LINE(794)
				int length = text.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(795)
				::String mask = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(mask,"mask");
				HX_STACK_LINE(797)
				{
					HX_STACK_LINE(797)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(797)
					while((true)){
						HX_STACK_LINE(797)
						bool tmp24 = (_g < length);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(797)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(797)
						if ((tmp25)){
							HX_STACK_LINE(797)
							break;
						}
						HX_STACK_LINE(797)
						int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(797)
						int i = tmp26;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(799)
						hx::AddEq(mask,HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));
					}
				}
				HX_STACK_LINE(803)
				text = mask;
			}
			HX_STACK_LINE(807)
			::openfl::text::TextField tmp24 = textField;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(807)
			Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureText(tmp24,null());		HX_STACK_VAR(measurements,"measurements");
			HX_STACK_LINE(809)
			bool tmp25 = (textField->__ranges == null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(809)
			if ((tmp25)){
				HX_STACK_LINE(811)
				::openfl::text::TextField tmp26 = textField;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(811)
				::String tmp27 = text;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(811)
				::openfl::text::TextFormat tmp28 = textField->__textFormat;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(811)
				::openfl::geom::Rectangle tmp29 = bounds;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(811)
				::openfl::_internal::renderer::cairo::CairoTextField_obj::renderText(tmp26,tmp27,tmp28,(int)2,tmp29);
			}
			else{
				HX_STACK_LINE(815)
				int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
				HX_STACK_LINE(816)
				::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(817)
				Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(819)
				{
					HX_STACK_LINE(819)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(819)
					int tmp26 = textField->__ranges->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(819)
					int _g = tmp26;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(819)
					while((true)){
						HX_STACK_LINE(819)
						bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(819)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(819)
						if ((tmp28)){
							HX_STACK_LINE(819)
							break;
						}
						HX_STACK_LINE(819)
						int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(819)
						int i = tmp29;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(821)
						::openfl::text::TextFormatRange tmp30 = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(821)
						range = tmp30;
						HX_STACK_LINE(823)
						::openfl::text::TextField tmp31 = textField;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(823)
						int tmp32 = range->start;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(823)
						int tmp33 = range->end;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(823)
						::String tmp34 = text.substring(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(823)
						::openfl::text::TextFormat tmp35 = range->format;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(823)
						Float tmp36 = offsetX;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(823)
						::openfl::geom::Rectangle tmp37 = bounds;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(823)
						::openfl::_internal::renderer::cairo::CairoTextField_obj::renderText(tmp31,tmp34,tmp35,tmp36,tmp37);
						HX_STACK_LINE(824)
						Float tmp38 = measurements->__get(i);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(824)
						hx::AddEq(offsetX,tmp38);
					}
				}
			}
		}
		HX_STACK_LINE(832)
		::lime::graphics::Image tmp22 = graphics->__bitmap->__image;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(832)
		tmp22->dirty = true;
		HX_STACK_LINE(833)
		textField->__dirty = false;
		HX_STACK_LINE(834)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,render,(void))

Void CairoTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","renderText",0xbcba094b,"openfl._internal.renderer.cairo.CairoTextField.renderText","openfl/_internal/renderer/cairo/CairoTextField.hx",841,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(844)
		::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(844)
		::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(844)
		::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(846)
		bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(846)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(846)
		if ((tmp2)){
			HX_STACK_LINE(846)
			tmp3 = (format->size != null());
		}
		else{
			HX_STACK_LINE(846)
			tmp3 = false;
		}
		HX_STACK_LINE(846)
		if ((tmp3)){
			HX_STACK_LINE(848)
			::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
			HX_STACK_LINE(849)
			::openfl::text::TextLineMetrics tmp4 = textField->getLineMetrics((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(849)
			::openfl::text::TextLineMetrics tlm = tmp4;		HX_STACK_VAR(tlm,"tlm");
			HX_STACK_LINE(851)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(852)
			Float tmp5 = ((int)2 + tlm->ascent);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(852)
			Float y = tmp5;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(853)
			Dynamic tmp6 = format->size;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(853)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(853)
			int size = tmp7;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(855)
			Array< ::String > lines = text.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(857)
			int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
			HX_STACK_LINE(858)
			Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
			HX_STACK_LINE(860)
			::lime::graphics::cairo::Cairo tmp8 = textField->__graphics->__cairo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(860)
			::lime::graphics::cairo::Cairo cairo = tmp8;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(861)
			int tmp9 = size;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(861)
			cairo->setFontSize(tmp9);
			HX_STACK_LINE(863)
			Dynamic color = format->color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(864)
			int tmp10 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(864)
			int tmp11 = hx::UShr(tmp10,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(864)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(864)
			Float r = tmp12;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(865)
			int tmp13 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(865)
			int tmp14 = hx::UShr(tmp13,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(865)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(865)
			Float g = tmp15;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(866)
			int tmp16 = (int(color) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(866)
			Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(866)
			Float b = tmp17;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(868)
			Float tmp18 = r;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(868)
			Float tmp19 = g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(868)
			Float tmp20 = b;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(868)
			cairo->setSourceRGB(tmp18,tmp19,tmp20);
			HX_STACK_LINE(870)
			{
				HX_STACK_LINE(870)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(870)
				while((true)){
					HX_STACK_LINE(870)
					bool tmp21 = (_g < lines->length);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(870)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(870)
					if ((tmp22)){
						HX_STACK_LINE(870)
						break;
					}
					HX_STACK_LINE(870)
					::String tmp23 = lines->__get(_g);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(870)
					::String line = tmp23;		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(870)
					++(_g);
					HX_STACK_LINE(872)
					int tmp24 = line_i;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(872)
					::openfl::text::TextLineMetrics tmp25 = textField->getLineMetrics(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(872)
					tlm = tmp25;
					HX_STACK_LINE(873)
					x = oldX;
					HX_STACK_LINE(877)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(877)
					{
						HX_STACK_LINE(877)
						::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(877)
						switch( (int)(_g1->__Index())){
							case (int)0: case (int)2: {
								HX_STACK_LINE(879)
								tmp26 = (int)0;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(880)
								Float tmp27 = textField->get_width();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(880)
								Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(880)
								::openfl::text::TextField tmp29 = textField;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(880)
								int tmp30 = line_i;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(880)
								Float tmp31 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(880)
								Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(880)
								tmp26 = (Float(tmp32) / Float((int)2));
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(881)
								Float tmp27 = textField->get_width();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(881)
								Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(881)
								::openfl::text::TextField tmp29 = textField;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(881)
								int tmp30 = line_i;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(881)
								Float tmp31 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(881)
								tmp26 = (tmp28 - tmp31);
							}
							;break;
						}
					}
					HX_STACK_LINE(877)
					hx::AddEq(x,tmp26);
					HX_STACK_LINE(885)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(885)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(885)
					cairo->moveTo(tmp27,tmp28);
					HX_STACK_LINE(886)
					::String tmp29 = line;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(886)
					cairo->showText(tmp29);
					HX_STACK_LINE(888)
					Float tmp30 = tlm->height;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(888)
					int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(888)
					hx::AddEq(y,tmp31);
					HX_STACK_LINE(889)
					(line_i)++;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoTextField_obj,renderText,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
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
	case 13:
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { outValue = getLineBreaks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getLineMetric") ) { outValue = getLineMetric_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTextHeight") ) { outValue = getTextHeight_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = __defaultFonts; return true;  }
		if (HX_FIELD_EQ(inName,"getLineIndices") ) { outValue = getLineIndices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"measureTextSub") ) { outValue = measureTextSub_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { outValue = __utf8_endline_code; return true;  }
		if (HX_FIELD_EQ(inName,"getLineBreakIndices") ) { outValue = getLineBreakIndices_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getLineBreaksInRange") ) { outValue = getLineBreaksInRange_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"measureTextSubRangesNull") ) { outValue = measureTextSubRangesNull_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getLineMetricSubRangesNull") ) { outValue = getLineMetricSubRangesNull_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"measureTextSubRangesNotNull") ) { outValue = measureTextSubRangesNotNull_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getLineMetricSubRangesNotNull") ) { outValue = getLineMetricSubRangesNotNull_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &CairoTextField_obj::__defaultFonts,HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda")},
	{hx::fsInt,(void *) &CairoTextField_obj::__utf8_endline_code,HX_HCSTRING("__utf8_endline_code","\x4b","\xc5","\x9e","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__defaultFonts,"__defaultFonts");
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__defaultFonts,"__defaultFonts");
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda"),
	HX_HCSTRING("__utf8_endline_code","\x4b","\xc5","\x9e","\xb8"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	HX_HCSTRING("getLineBreaks","\x1e","\x5a","\xce","\x46"),
	HX_HCSTRING("getLineBreakIndices","\xf2","\xda","\x12","\xc3"),
	HX_HCSTRING("getLineBreaksInRange","\x1a","\xe9","\x27","\x0d"),
	HX_HCSTRING("getLineIndices","\x9d","\x50","\x46","\xa9"),
	HX_HCSTRING("getLineMetric","\x7a","\xdf","\x7c","\x3a"),
	HX_HCSTRING("getLineMetricSubRangesNotNull","\xbe","\x45","\xbf","\xe5"),
	HX_HCSTRING("getLineMetricSubRangesNull","\x83","\x47","\x73","\x4a"),
	HX_HCSTRING("getLineWidth","\xfc","\x55","\xb4","\x20"),
	HX_HCSTRING("getTextHeight","\xaa","\xe4","\xae","\x95"),
	HX_HCSTRING("getTextWidth","\xa3","\xe2","\xa6","\x72"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("measureTextSub","\x15","\x73","\xb9","\x04"),
	HX_HCSTRING("measureTextSubRangesNotNull","\x6f","\x93","\x7d","\x85"),
	HX_HCSTRING("measureTextSubRangesNull","\x32","\xf1","\x90","\xa3"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderText","\x23","\xc7","\x03","\xea"),
	::String(null()) };

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
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

void CairoTextField_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoTextField.hx",30,0xfadfb778)
		{
			HX_STACK_LINE(30)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			return tmp1;
		}
		return null();
	}
};
	__defaultFonts= _Function_0_1::Block();
	__utf8_endline_code= (int)10;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
