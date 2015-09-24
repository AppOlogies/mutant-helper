#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_TextFieldGraphics
#include <openfl/_internal/renderer/TextFieldGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
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

Void TextFieldGraphics_obj::__construct()
{
	return null();
}

//TextFieldGraphics_obj::~TextFieldGraphics_obj() { }

Dynamic TextFieldGraphics_obj::__CreateEmpty() { return  new TextFieldGraphics_obj; }
hx::ObjectPtr< TextFieldGraphics_obj > TextFieldGraphics_obj::__new()
{  hx::ObjectPtr< TextFieldGraphics_obj > _result_ = new TextFieldGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFieldGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldGraphics_obj > _result_ = new TextFieldGraphics_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::ObjectMap TextFieldGraphics_obj::bitmapData;

::haxe::ds::ObjectMap TextFieldGraphics_obj::glyphs;

::haxe::ds::ObjectMap TextFieldGraphics_obj::tilesheets;

::haxe::ds::ObjectMap TextFieldGraphics_obj::tileIDs;

Void TextFieldGraphics_obj::render( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","render",0xa6aa48c7,"openfl._internal.renderer.TextFieldGraphics.render","openfl/_internal/renderer/TextFieldGraphics.hx",32,0xf0946200)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_LINE(34)
		::openfl::geom::Rectangle tmp = textField->getBounds(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(36)
		::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::TextFieldGraphics_obj::update(tmp1,tmp2);
		HX_STACK_LINE(38)
		bool tmp3 = (textField->__graphics == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		if ((tmp3)){
			HX_STACK_LINE(40)
			::openfl::display::Graphics tmp4 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			textField->__graphics = tmp4;
		}
		HX_STACK_LINE(44)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(45)
		graphics->clear();
		HX_STACK_LINE(47)
		bool tmp4 = textField->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		if ((tmp5)){
			HX_STACK_LINE(47)
			tmp6 = textField->background;
		}
		else{
			HX_STACK_LINE(47)
			tmp6 = true;
		}
		HX_STACK_LINE(47)
		if ((tmp6)){
			HX_STACK_LINE(49)
			bool tmp7 = textField->border;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			if ((tmp7)){
				HX_STACK_LINE(51)
				int tmp8 = textField->borderColor;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				graphics->lineStyle((int)1,tmp8,null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(55)
			bool tmp8 = textField->background;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			if ((tmp8)){
				HX_STACK_LINE(57)
				int tmp9 = textField->backgroundColor;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				graphics->beginFill(tmp9,null());
			}
			HX_STACK_LINE(61)
			Float tmp9 = (bounds->x + ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			Float tmp10 = (bounds->y + ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			Float tmp11 = (bounds->width - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			Float tmp12 = (bounds->height - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			graphics->drawRect(tmp9,tmp10,tmp11,tmp12);
		}
		HX_STACK_LINE(65)
		bool tmp7 = (textField->__tileData != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		if ((tmp7)){
			HX_STACK_LINE(67)
			Dynamic tmp8 = textField->__tilesheets->keys();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			for(::cpp::FastIterator_obj< ::openfl::display::Tilesheet > *__it = ::cpp::CreateFastIterator< ::openfl::display::Tilesheet >(tmp8);  __it->hasNext(); ){
				::openfl::display::Tilesheet tilesheet = __it->next();
				{
					HX_STACK_LINE(69)
					::openfl::display::Tilesheet tmp9 = tilesheet;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					::openfl::display::Tilesheet tmp10 = tilesheet;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					::openfl::display::Tilesheet tmp11 = tilesheet;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					Dynamic tmp12 = textField->__tileDataLength->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					graphics->drawTiles(tmp9,((Array< Float >)(textField->__tileData->get(tmp10))),true,(int)4,tmp13);
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldGraphics_obj,render,(void))

Void TextFieldGraphics_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","renderText",0xe9feb114,"openfl._internal.renderer.TextFieldGraphics.renderText","openfl/_internal/renderer/TextFieldGraphics.hx",78,0xf0946200)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(80)
		::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(82)
		bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp2)){
			HX_STACK_LINE(82)
			tmp3 = (format->size != null());
		}
		else{
			HX_STACK_LINE(82)
			tmp3 = false;
		}
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(84)
			::haxe::ds::ObjectMap tmp4 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::openfl::text::Font tmp5 = font;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			if ((tmp7)){
				HX_STACK_LINE(86)
				::haxe::ds::IntMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::haxe::ds::IntMap tmp9 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(86)
					::haxe::ds::IntMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(86)
				::haxe::ds::IntMap value = tmp8;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(86)
				::haxe::ds::ObjectMap tmp9 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(86)
				::openfl::text::Font tmp10 = font;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(86)
				::haxe::ds::IntMap tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(86)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(90)
			Dynamic tmp8 = format->size;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			int size = tmp9;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(91)
			::haxe::ds::ObjectMap tmp10 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::openfl::text::Font tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(91)
			::haxe::ds::IntMap tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(91)
			::haxe::ds::IntMap fontGlyphs = tmp12;		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
			HX_STACK_LINE(93)
			int tmp13 = size;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(93)
			bool tmp14 = fontGlyphs->exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(93)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			if ((tmp15)){
				HX_STACK_LINE(95)
				int tmp16 = size;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(95)
				::haxe::ds::IntMap tmp17 = font->renderGlyphs(font->getGlyphs(null()),tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(95)
				::haxe::ds::IntMap value = tmp17;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(95)
				int tmp18 = size;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(95)
				::haxe::ds::IntMap tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				fontGlyphs->set(tmp18,tmp19);
			}
			HX_STACK_LINE(99)
			int tmp16 = size;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(99)
			::haxe::ds::IntMap tmp17 = fontGlyphs->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(99)
			::haxe::ds::IntMap images = tmp17;		HX_STACK_VAR(images,"images");
			HX_STACK_LINE(101)
			::haxe::ds::ObjectMap tmp18 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(101)
			::openfl::text::Font tmp19 = font;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(101)
			bool tmp20 = tmp18->exists(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			if ((tmp21)){
				HX_STACK_LINE(103)
				::haxe::ds::IntMap tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(103)
				{
					HX_STACK_LINE(103)
					::haxe::ds::IntMap tmp23 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(103)
					::haxe::ds::IntMap tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(103)
					tmp22 = tmp24;
				}
				HX_STACK_LINE(103)
				::haxe::ds::IntMap value = tmp22;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(103)
				::haxe::ds::ObjectMap tmp23 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(103)
				::openfl::text::Font tmp24 = font;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(103)
				::haxe::ds::IntMap tmp25 = value;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(103)
				tmp23->set(tmp24,tmp25);
			}
			HX_STACK_LINE(107)
			::haxe::ds::ObjectMap tmp22 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(107)
			::openfl::text::Font tmp23 = font;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(107)
			::haxe::ds::IntMap tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(107)
			::haxe::ds::IntMap fontBitmapData = tmp24;		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
			HX_STACK_LINE(109)
			int tmp25 = size;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(109)
			bool tmp26 = fontBitmapData->exists(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(109)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(109)
			if ((tmp27)){
				HX_STACK_LINE(111)
				int width;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(111)
				int height;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(111)
				::lime::utils::ArrayBufferView data;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(113)
				Dynamic tmp28 = images->iterator();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(113)
				for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(tmp28);  __it->hasNext(); ){
					::lime::graphics::Image image = __it->next();
					{
						HX_STACK_LINE(115)
						int tmp29 = image->buffer->width;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(115)
						width = tmp29;
						HX_STACK_LINE(116)
						int tmp30 = image->buffer->height;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(116)
						height = tmp30;
						HX_STACK_LINE(117)
						::lime::utils::ArrayBufferView tmp31 = image->get_data();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(117)
						data = tmp31;
						HX_STACK_LINE(118)
						break;
					}
;
				}
				HX_STACK_LINE(122)
				::openfl::display::BitmapData tmp29 = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(122)
				::openfl::display::BitmapData bitmapData = tmp29;		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(124)
					while((true)){
						HX_STACK_LINE(124)
						bool tmp30 = (_g < width);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(124)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(124)
						if ((tmp31)){
							HX_STACK_LINE(124)
							break;
						}
						HX_STACK_LINE(124)
						int tmp32 = (_g)++;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(124)
						int x = tmp32;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(126)
							while((true)){
								HX_STACK_LINE(126)
								bool tmp33 = (_g1 < height);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(126)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(126)
								if ((tmp34)){
									HX_STACK_LINE(126)
									break;
								}
								HX_STACK_LINE(126)
								int tmp35 = (_g1)++;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(126)
								int y = tmp35;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(128)
								int tmp36 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (((y * width) + x))));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(128)
								Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(128)
								Dynamic alpha = tmp37;		HX_STACK_VAR(alpha,"alpha");
								HX_STACK_LINE(129)
								int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(129)
								{
									HX_STACK_LINE(129)
									int a = alpha;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(129)
									tmp38 = (int(a) << int((int)24));
								}
								HX_STACK_LINE(129)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(129)
								int tmp40 = (int(tmp39) | int((int)16711680));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(129)
								int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(129)
								int tmp42 = (int(tmp41) | int((int)65280));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(129)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(129)
								int tmp44 = (int(tmp43) | int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(129)
								int color = tmp44;		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(130)
								int tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(130)
								int tmp46 = y;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(130)
								int tmp47 = color;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(130)
								bitmapData->setPixel32(tmp45,tmp46,tmp47);
							}
						}
					}
				}
				HX_STACK_LINE(136)
				int tmp30 = size;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(136)
				::openfl::display::BitmapData tmp31 = bitmapData;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(136)
				fontBitmapData->set(tmp30,tmp31);
			}
			HX_STACK_LINE(140)
			int tmp28 = size;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(140)
			::openfl::display::BitmapData tmp29 = fontBitmapData->get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(140)
			::openfl::display::BitmapData bitmapData = tmp29;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(142)
			::haxe::ds::ObjectMap tmp30 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(142)
			::openfl::display::BitmapData tmp31 = bitmapData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(142)
			bool tmp32 = tmp30->exists(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(142)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(142)
			if ((tmp33)){
				HX_STACK_LINE(144)
				::openfl::display::Tilesheet tmp34 = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(144)
				::openfl::display::Tilesheet tilesheet = tmp34;		HX_STACK_VAR(tilesheet,"tilesheet");
				HX_STACK_LINE(145)
				::haxe::ds::IntMap tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(145)
				{
					HX_STACK_LINE(145)
					::haxe::ds::IntMap tmp36 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(145)
					::haxe::ds::IntMap tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(145)
					tmp35 = tmp37;
				}
				HX_STACK_LINE(145)
				::haxe::ds::IntMap tileID = tmp35;		HX_STACK_VAR(tileID,"tileID");
				HX_STACK_LINE(147)
				::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(147)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(149)
				Dynamic tmp36 = images->keys();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(149)
				Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(149)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp37);  __it->hasNext(); ){
					int key = __it->next();
					{
						HX_STACK_LINE(151)
						int tmp38 = key;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(151)
						::lime::graphics::Image tmp39 = images->get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(151)
						image = tmp39;
						HX_STACK_LINE(152)
						::openfl::geom::Rectangle tmp40 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(152)
						int tmp41 = tilesheet->addTileRect(tmp40,null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(152)
						index = tmp41;
						HX_STACK_LINE(154)
						int tmp42 = key;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(154)
						int tmp43 = index;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(154)
						tileID->set(tmp42,tmp43);
					}
;
				}
				HX_STACK_LINE(157)
				::haxe::ds::ObjectMap tmp38 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(157)
				::openfl::display::BitmapData tmp39 = bitmapData;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(157)
				::haxe::ds::IntMap tmp40 = tileID;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(157)
				tmp38->set(tmp39,tmp40);
				HX_STACK_LINE(158)
				::haxe::ds::ObjectMap tmp41 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(158)
				::openfl::display::BitmapData tmp42 = bitmapData;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(158)
				::openfl::display::Tilesheet tmp43 = tilesheet;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(158)
				tmp41->set(tmp42,tmp43);
			}
			HX_STACK_LINE(162)
			::haxe::ds::ObjectMap tmp34 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(162)
			::openfl::display::BitmapData tmp35 = bitmapData;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(162)
			::openfl::display::Tilesheet tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(162)
			::openfl::display::Tilesheet tilesheet = tmp36;		HX_STACK_VAR(tilesheet,"tilesheet");
			HX_STACK_LINE(163)
			::haxe::ds::ObjectMap tmp37 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(163)
			::openfl::display::BitmapData tmp38 = bitmapData;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(163)
			::haxe::ds::IntMap tmp39 = tmp37->get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(163)
			::haxe::ds::IntMap tileID = tmp39;		HX_STACK_VAR(tileID,"tileID");
			HX_STACK_LINE(165)
			int tmp40 = (int(format->color) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(165)
			int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(165)
			Float tmp42 = (Float(tmp41) / Float((int)255));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(165)
			Float r = tmp42;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(166)
			int tmp43 = (int(format->color) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(166)
			int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(166)
			Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(166)
			Float g = tmp45;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(167)
			int tmp46 = (int(format->color) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(167)
			Float tmp47 = (Float(tmp46) / Float((int)255));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(167)
			Float b = tmp47;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(169)
			::openfl::text::TextLineMetrics tmp48 = textField->getLineMetrics((int)0);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(169)
			::openfl::text::TextLineMetrics tlm = tmp48;		HX_STACK_VAR(tlm,"tlm");
			HX_STACK_LINE(171)
			::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(172)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(173)
			Float tmp49 = ((int)2 + tlm->ascent);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(173)
			Float y = tmp49;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(178)
			Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
			HX_STACK_LINE(180)
			::openfl::display::Tilesheet tmp50 = tilesheet;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(180)
			textField->__tilesheets->set(tmp50,true);
			HX_STACK_LINE(182)
			::openfl::display::Tilesheet tmp51 = tilesheet;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(182)
			bool tmp52 = textField->__tileData->exists(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(182)
			bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(182)
			if ((tmp53)){
				HX_STACK_LINE(184)
				tileData = Array_obj< Float >::__new();
				HX_STACK_LINE(185)
				::openfl::display::Tilesheet tmp54 = tilesheet;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(185)
				textField->__tileData->set(tmp54,tileData);
				HX_STACK_LINE(186)
				::openfl::display::Tilesheet tmp55 = tilesheet;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(186)
				textField->__tileDataLength->set(tmp55,(int)0);
			}
			HX_STACK_LINE(190)
			::openfl::display::Tilesheet tmp54 = tilesheet;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(190)
			tileData = ((Array< Float >)(textField->__tileData->get(tmp54)));
			HX_STACK_LINE(192)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(193)
			Array< ::String > lines = text.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(195)
			bool tmp55 = (textField->__textLayout == null());		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(195)
			if ((tmp55)){
				HX_STACK_LINE(197)
				::lime::text::TextLayout tmp56 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(197)
				textField->__textLayout = tmp56;
			}
			HX_STACK_LINE(201)
			::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
			HX_STACK_LINE(202)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(204)
			int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
			HX_STACK_LINE(205)
			Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(207)
				while((true)){
					HX_STACK_LINE(207)
					bool tmp56 = (_g < lines->length);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(207)
					bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(207)
					if ((tmp57)){
						HX_STACK_LINE(207)
						break;
					}
					HX_STACK_LINE(207)
					::String tmp58 = lines->__get(_g);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(207)
					::String line = tmp58;		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(207)
					++(_g);
					HX_STACK_LINE(209)
					int tmp59 = line_i;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(209)
					::openfl::text::TextLineMetrics tmp60 = textField->getLineMetrics(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(209)
					tlm = tmp60;
					HX_STACK_LINE(212)
					x = oldX;
					HX_STACK_LINE(214)
					Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(214)
						::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(214)
						switch( (int)(_g1->__Index())){
							case (int)0: case (int)2: {
								HX_STACK_LINE(216)
								tmp61 = (int)0;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(217)
								Float tmp62 = (textField->__width - (int)4);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(217)
								Float tmp63 = tlm->width;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(217)
								Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(217)
								tmp61 = (Float(tmp64) / Float((int)2));
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(218)
								Float tmp62 = (textField->__width - (int)4);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(218)
								Float tmp63 = tlm->width;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(218)
								tmp61 = (tmp62 - tmp63);
							}
							;break;
						}
					}
					HX_STACK_LINE(214)
					hx::AddEq(x,tmp61);
					HX_STACK_LINE(222)
					textLayout->set_text(null());
					HX_STACK_LINE(223)
					::openfl::text::Font tmp62 = font;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(223)
					textLayout->set_font(tmp62);
					HX_STACK_LINE(224)
					int tmp63 = size;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(224)
					textLayout->set_size(tmp63);
					HX_STACK_LINE(225)
					::String tmp64 = line;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(225)
					textLayout->set_text(tmp64);
					HX_STACK_LINE(227)
					{
						HX_STACK_LINE(227)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(227)
						Array< ::Dynamic > _g2 = textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(227)
						while((true)){
							HX_STACK_LINE(227)
							bool tmp65 = (_g1 < _g2->length);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(227)
							bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(227)
							if ((tmp66)){
								HX_STACK_LINE(227)
								break;
							}
							HX_STACK_LINE(227)
							::lime::text::GlyphPosition tmp67 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(227)
							::lime::text::GlyphPosition position = tmp67;		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(227)
							++(_g1);
							HX_STACK_LINE(229)
							int tmp68 = position->glyph;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(229)
							::lime::graphics::Image tmp69 = images->get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(229)
							image = tmp69;
							HX_STACK_LINE(231)
							bool tmp70 = (image != null());		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(231)
							if ((tmp70)){
								HX_STACK_LINE(233)
								bool tmp71 = (length >= tileData->length);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(233)
								if ((tmp71)){
									HX_STACK_LINE(235)
									Float tmp72 = x;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(235)
									Float tmp73 = position->offset->x;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(235)
									Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(235)
									Float tmp75 = image->x;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(235)
									Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(235)
									tileData->push(tmp76);
									HX_STACK_LINE(236)
									Float tmp77 = y;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(236)
									Float tmp78 = position->offset->y;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(236)
									Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(236)
									Float tmp80 = image->y;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(236)
									Float tmp81 = (tmp79 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(236)
									tileData->push(tmp81);
									HX_STACK_LINE(237)
									int tmp82 = position->glyph;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(237)
									Dynamic tmp83 = tileID->get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(237)
									Dynamic tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(237)
									tileData->push(tmp84);
									HX_STACK_LINE(238)
									Float tmp85 = r;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(238)
									tileData->push(tmp85);
									HX_STACK_LINE(239)
									Float tmp86 = g;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(239)
									tileData->push(tmp86);
									HX_STACK_LINE(240)
									Float tmp87 = b;		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(240)
									tileData->push(tmp87);
								}
								else{
									HX_STACK_LINE(244)
									Float tmp72 = x;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(244)
									Float tmp73 = position->offset->x;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(244)
									Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(244)
									Float tmp75 = image->x;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(244)
									Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(244)
									tileData[length] = tmp76;
									HX_STACK_LINE(245)
									int tmp77 = (length + (int)1);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(245)
									Float tmp78 = y;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(245)
									Float tmp79 = position->offset->y;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(245)
									Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(245)
									Float tmp81 = image->y;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(245)
									Float tmp82 = (tmp80 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(245)
									tileData[tmp77] = tmp82;
									HX_STACK_LINE(246)
									int tmp83 = (length + (int)2);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(246)
									int tmp84 = position->glyph;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(246)
									Dynamic tmp85 = tileID->get(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(246)
									Dynamic tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(246)
									tileData[tmp83] = tmp86;
									HX_STACK_LINE(247)
									int tmp87 = (length + (int)3);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(247)
									Float tmp88 = r;		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(247)
									tileData[tmp87] = tmp88;
									HX_STACK_LINE(248)
									int tmp89 = (length + (int)4);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(248)
									Float tmp90 = g;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(248)
									tileData[tmp89] = tmp90;
									HX_STACK_LINE(249)
									int tmp91 = (length + (int)5);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(249)
									Float tmp92 = b;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(249)
									tileData[tmp91] = tmp92;
								}
								HX_STACK_LINE(253)
								hx::AddEq(length,(int)6);
							}
							HX_STACK_LINE(257)
							Float tmp71 = position->advance->x;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(257)
							hx::AddEq(x,tmp71);
							HX_STACK_LINE(258)
							Float tmp72 = position->advance->y;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(258)
							hx::SubEq(y,tmp72);
						}
					}
					HX_STACK_LINE(262)
					hx::AddEq(y,tlm->height);
					HX_STACK_LINE(263)
					(line_i)++;
				}
			}
			HX_STACK_LINE(267)
			::openfl::display::Tilesheet tmp56 = tilesheet;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(267)
			int tmp57 = length;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(267)
			textField->__tileDataLength->set(tmp56,tmp57);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextFieldGraphics_obj,renderText,(void))

bool TextFieldGraphics_obj::update( ::openfl::text::TextField textField,::openfl::geom::Rectangle bounds){
	HX_STACK_FRAME("openfl._internal.renderer.TextFieldGraphics","update",0x2886637a,"openfl._internal.renderer.TextFieldGraphics.update","openfl/_internal/renderer/TextFieldGraphics.hx",274,0xf0946200)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_LINE(276)
	bool tmp = textField->__dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	if ((tmp)){
		HX_STACK_LINE(278)
		bool tmp1 = (textField->__text == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		if ((tmp3)){
			HX_STACK_LINE(278)
			tmp4 = (textField->__text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(278)
			tmp4 = true;
		}
		HX_STACK_LINE(278)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		if ((tmp5)){
			HX_STACK_LINE(278)
			bool tmp7 = textField->background;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(278)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(278)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(278)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(278)
			tmp6 = false;
		}
		HX_STACK_LINE(278)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(278)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		if ((tmp7)){
			HX_STACK_LINE(278)
			bool tmp9 = textField->border;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(278)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(278)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(278)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(278)
			tmp8 = false;
		}
		HX_STACK_LINE(278)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(278)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		if ((tmp9)){
			HX_STACK_LINE(278)
			Float tmp11 = textField->get_width();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(278)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(278)
			bool tmp13 = (tmp12 <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(278)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(278)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(278)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(278)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(278)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(278)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(278)
			bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(278)
			if ((tmp20)){
				HX_STACK_LINE(278)
				Float tmp21 = textField->get_height();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(278)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(278)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(278)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(278)
				bool tmp25 = (tmp24 <= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(278)
				tmp19 = tmp25;
			}
			else{
				HX_STACK_LINE(278)
				tmp19 = true;
			}
			HX_STACK_LINE(278)
			bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(278)
			if ((tmp21)){
				HX_STACK_LINE(278)
				tmp10 = (textField->autoSize != ::openfl::text::TextFieldAutoSize_obj::LEFT);
			}
			else{
				HX_STACK_LINE(278)
				tmp10 = false;
			}
		}
		else{
			HX_STACK_LINE(278)
			tmp10 = true;
		}
		HX_STACK_LINE(278)
		if ((tmp10)){
			HX_STACK_LINE(280)
			textField->__tilesheets = null();
			HX_STACK_LINE(281)
			textField->__tileData = null();
			HX_STACK_LINE(282)
			textField->__tileDataLength = null();
			HX_STACK_LINE(283)
			textField->__dirty = false;
		}
		else{
			HX_STACK_LINE(287)
			::haxe::ds::ObjectMap tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::haxe::ds::ObjectMap tmp12 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(287)
				::haxe::ds::ObjectMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(287)
				tmp11 = tmp13;
			}
			HX_STACK_LINE(287)
			textField->__tilesheets = tmp11;
			HX_STACK_LINE(289)
			bool tmp12 = (textField->__tileData == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(289)
			if ((tmp12)){
				HX_STACK_LINE(291)
				::haxe::ds::ObjectMap tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					::haxe::ds::ObjectMap tmp14 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(291)
					::haxe::ds::ObjectMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(291)
					tmp13 = tmp15;
				}
				HX_STACK_LINE(291)
				textField->__tileData = tmp13;
				HX_STACK_LINE(292)
				::haxe::ds::ObjectMap tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					::haxe::ds::ObjectMap tmp15 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(292)
					::haxe::ds::ObjectMap tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(292)
					tmp14 = tmp16;
				}
				HX_STACK_LINE(292)
				textField->__tileDataLength = tmp14;
			}
			HX_STACK_LINE(296)
			bool tmp13 = (textField->__text != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(296)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(296)
			if ((tmp13)){
				HX_STACK_LINE(296)
				tmp14 = (textField->__text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(296)
				tmp14 = false;
			}
			HX_STACK_LINE(296)
			if ((tmp14)){
				HX_STACK_LINE(298)
				::String tmp15 = textField->get_text();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(298)
				::String text = tmp15;		HX_STACK_VAR(text,"text");
				HX_STACK_LINE(300)
				bool tmp16 = textField->displayAsPassword;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(300)
				if ((tmp16)){
					HX_STACK_LINE(302)
					int length = text.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(303)
					::String mask = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(mask,"mask");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							bool tmp17 = (_g < length);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(305)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(305)
							if ((tmp18)){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							int tmp19 = (_g)++;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(305)
							int i = tmp19;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(307)
							hx::AddEq(mask,HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));
						}
					}
					HX_STACK_LINE(311)
					text = mask;
				}
				HX_STACK_LINE(315)
				::openfl::text::TextField tmp17 = textField;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureText(tmp17,null());		HX_STACK_VAR(measurements,"measurements");
				HX_STACK_LINE(317)
				bool tmp18 = (textField->__ranges == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(317)
				if ((tmp18)){
					HX_STACK_LINE(319)
					::openfl::text::TextFormat format = textField->__textFormat;		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(319)
					::openfl::text::TextFormat tmp19 = format;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(319)
					::openfl::text::Font tmp20 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(319)
					::openfl::text::Font font = tmp20;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(319)
					bool tmp21 = (font != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(319)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(319)
					if ((tmp21)){
						HX_STACK_LINE(319)
						tmp22 = (format->size != null());
					}
					else{
						HX_STACK_LINE(319)
						tmp22 = false;
					}
					HX_STACK_LINE(319)
					if ((tmp22)){
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp23 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(319)
						::openfl::text::Font tmp24 = font;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(319)
						bool tmp25 = tmp23->exists(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(319)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(319)
						if ((tmp26)){
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								::haxe::ds::IntMap tmp28 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(319)
								::haxe::ds::IntMap tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(319)
								tmp27 = tmp29;
							}
							HX_STACK_LINE(319)
							::haxe::ds::IntMap value = tmp27;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							::haxe::ds::ObjectMap tmp28 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(319)
							::openfl::text::Font tmp29 = font;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp30 = value;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(319)
							tmp28->set(tmp29,tmp30);
						}
						HX_STACK_LINE(319)
						Dynamic tmp27 = format->size;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(319)
						int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(319)
						int size = tmp28;		HX_STACK_VAR(size,"size");
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp29 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(319)
						::openfl::text::Font tmp30 = font;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap tmp31 = tmp29->get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap fontGlyphs = tmp31;		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
						HX_STACK_LINE(319)
						int tmp32 = size;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(319)
						bool tmp33 = fontGlyphs->exists(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(319)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(319)
						if ((tmp34)){
							HX_STACK_LINE(319)
							int tmp35 = size;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp36 = font->renderGlyphs(font->getGlyphs(null()),tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap value = tmp36;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							int tmp37 = size;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp38 = value;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(319)
							fontGlyphs->set(tmp37,tmp38);
						}
						HX_STACK_LINE(319)
						int tmp35 = size;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap tmp36 = fontGlyphs->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap images = tmp36;		HX_STACK_VAR(images,"images");
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp37 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(319)
						::openfl::text::Font tmp38 = font;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(319)
						bool tmp39 = tmp37->exists(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(319)
						bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(319)
						if ((tmp40)){
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								::haxe::ds::IntMap tmp42 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(319)
								::haxe::ds::IntMap tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(319)
								tmp41 = tmp43;
							}
							HX_STACK_LINE(319)
							::haxe::ds::IntMap value = tmp41;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							::haxe::ds::ObjectMap tmp42 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(319)
							::openfl::text::Font tmp43 = font;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp44 = value;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(319)
							tmp42->set(tmp43,tmp44);
						}
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp41 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(319)
						::openfl::text::Font tmp42 = font;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap tmp43 = tmp41->get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap fontBitmapData = tmp43;		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
						HX_STACK_LINE(319)
						int tmp44 = size;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(319)
						bool tmp45 = fontBitmapData->exists(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(319)
						bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(319)
						if ((tmp46)){
							HX_STACK_LINE(319)
							int width;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(319)
							int height;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(319)
							::lime::utils::ArrayBufferView data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(319)
							Dynamic tmp47 = images->iterator();		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(319)
							for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(tmp47);  __it->hasNext(); ){
								::lime::graphics::Image image = __it->next();
								{
									HX_STACK_LINE(319)
									int tmp48 = image->buffer->width;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(319)
									width = tmp48;
									HX_STACK_LINE(319)
									int tmp49 = image->buffer->height;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(319)
									height = tmp49;
									HX_STACK_LINE(319)
									::lime::utils::ArrayBufferView tmp50 = image->get_data();		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(319)
									data = tmp50;
									HX_STACK_LINE(319)
									break;
								}
;
							}
							HX_STACK_LINE(319)
							::openfl::display::BitmapData tmp48 = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(319)
							::openfl::display::BitmapData bitmapData = tmp48;		HX_STACK_VAR(bitmapData,"bitmapData");
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(319)
								while((true)){
									HX_STACK_LINE(319)
									bool tmp49 = (_g < width);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(319)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(319)
									if ((tmp50)){
										HX_STACK_LINE(319)
										break;
									}
									HX_STACK_LINE(319)
									int tmp51 = (_g)++;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(319)
									int x = tmp51;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(319)
									{
										HX_STACK_LINE(319)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(319)
										while((true)){
											HX_STACK_LINE(319)
											bool tmp52 = (_g1 < height);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(319)
											bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(319)
											if ((tmp53)){
												HX_STACK_LINE(319)
												break;
											}
											HX_STACK_LINE(319)
											int tmp54 = (_g1)++;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(319)
											int y = tmp54;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(319)
											int tmp55 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (((y * width) + x))));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(319)
											Dynamic tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(319)
											Dynamic alpha = tmp56;		HX_STACK_VAR(alpha,"alpha");
											HX_STACK_LINE(319)
											int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(319)
											{
												HX_STACK_LINE(319)
												int a = alpha;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(319)
												tmp57 = (int(a) << int((int)24));
											}
											HX_STACK_LINE(319)
											int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(319)
											int tmp59 = (int(tmp58) | int((int)16711680));		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(319)
											int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(319)
											int tmp61 = (int(tmp60) | int((int)65280));		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(319)
											int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(319)
											int tmp63 = (int(tmp62) | int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(319)
											int color = tmp63;		HX_STACK_VAR(color,"color");
											HX_STACK_LINE(319)
											int tmp64 = x;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(319)
											int tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(319)
											int tmp66 = color;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(319)
											bitmapData->setPixel32(tmp64,tmp65,tmp66);
										}
									}
								}
							}
							HX_STACK_LINE(319)
							int tmp49 = size;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(319)
							::openfl::display::BitmapData tmp50 = bitmapData;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(319)
							fontBitmapData->set(tmp49,tmp50);
						}
						HX_STACK_LINE(319)
						int tmp47 = size;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(319)
						::openfl::display::BitmapData tmp48 = fontBitmapData->get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(319)
						::openfl::display::BitmapData bitmapData = tmp48;		HX_STACK_VAR(bitmapData,"bitmapData");
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp49 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(319)
						::openfl::display::BitmapData tmp50 = bitmapData;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(319)
						bool tmp51 = tmp49->exists(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(319)
						bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(319)
						if ((tmp52)){
							HX_STACK_LINE(319)
							::openfl::display::Tilesheet tmp53 = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(319)
							::openfl::display::Tilesheet tilesheet = tmp53;		HX_STACK_VAR(tilesheet,"tilesheet");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								::haxe::ds::IntMap tmp55 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(319)
								::haxe::ds::IntMap tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(319)
								tmp54 = tmp56;
							}
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tileID = tmp54;		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(319)
							::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
							HX_STACK_LINE(319)
							int index;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(319)
							Dynamic tmp55 = images->keys();		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(319)
							Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(319)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp56);  __it->hasNext(); ){
								int key = __it->next();
								{
									HX_STACK_LINE(319)
									int tmp57 = key;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(319)
									::lime::graphics::Image tmp58 = images->get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(319)
									image = tmp58;
									HX_STACK_LINE(319)
									::openfl::geom::Rectangle tmp59 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(319)
									int tmp60 = tilesheet->addTileRect(tmp59,null());		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(319)
									index = tmp60;
									HX_STACK_LINE(319)
									int tmp61 = key;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(319)
									int tmp62 = index;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(319)
									tileID->set(tmp61,tmp62);
								}
;
							}
							HX_STACK_LINE(319)
							::haxe::ds::ObjectMap tmp57 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(319)
							::openfl::display::BitmapData tmp58 = bitmapData;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(319)
							::haxe::ds::IntMap tmp59 = tileID;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(319)
							tmp57->set(tmp58,tmp59);
							HX_STACK_LINE(319)
							::haxe::ds::ObjectMap tmp60 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(319)
							::openfl::display::BitmapData tmp61 = bitmapData;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(319)
							::openfl::display::Tilesheet tmp62 = tilesheet;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(319)
							tmp60->set(tmp61,tmp62);
						}
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp53 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(319)
						::openfl::display::BitmapData tmp54 = bitmapData;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tmp55 = tmp53->get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tilesheet = tmp55;		HX_STACK_VAR(tilesheet,"tilesheet");
						HX_STACK_LINE(319)
						::haxe::ds::ObjectMap tmp56 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(319)
						::openfl::display::BitmapData tmp57 = bitmapData;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap tmp58 = tmp56->get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(319)
						::haxe::ds::IntMap tileID = tmp58;		HX_STACK_VAR(tileID,"tileID");
						HX_STACK_LINE(319)
						int tmp59 = (int(format->color) >> int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(319)
						int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(319)
						Float tmp61 = (Float(tmp60) / Float((int)255));		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(319)
						Float r = tmp61;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(319)
						int tmp62 = (int(format->color) >> int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(319)
						int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(319)
						Float tmp64 = (Float(tmp63) / Float((int)255));		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(319)
						Float g = tmp64;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(319)
						int tmp65 = (int(format->color) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(319)
						Float tmp66 = (Float(tmp65) / Float((int)255));		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(319)
						Float b = tmp66;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(319)
						::openfl::text::TextLineMetrics tmp67 = textField->getLineMetrics((int)0);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(319)
						::openfl::text::TextLineMetrics tlm = tmp67;		HX_STACK_VAR(tlm,"tlm");
						HX_STACK_LINE(319)
						::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(319)
						Float x = (int)2;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(319)
						Float tmp68 = ((int)2 + tlm->ascent);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(319)
						Float y = tmp68;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(319)
						Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tmp69 = tilesheet;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(319)
						textField->__tilesheets->set(tmp69,true);
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tmp70 = tilesheet;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(319)
						bool tmp71 = textField->__tileData->exists(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(319)
						bool tmp72 = !(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(319)
						if ((tmp72)){
							HX_STACK_LINE(319)
							tileData = Array_obj< Float >::__new();
							HX_STACK_LINE(319)
							::openfl::display::Tilesheet tmp73 = tilesheet;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(319)
							textField->__tileData->set(tmp73,tileData);
							HX_STACK_LINE(319)
							::openfl::display::Tilesheet tmp74 = tilesheet;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(319)
							textField->__tileDataLength->set(tmp74,(int)0);
						}
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tmp73 = tilesheet;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(319)
						tileData = ((Array< Float >)(textField->__tileData->get(tmp73)));
						HX_STACK_LINE(319)
						int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
						HX_STACK_LINE(319)
						Array< ::String > lines = text.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
						HX_STACK_LINE(319)
						bool tmp74 = (textField->__textLayout == null());		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(319)
						if ((tmp74)){
							HX_STACK_LINE(319)
							::lime::text::TextLayout tmp75 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(319)
							textField->__textLayout = tmp75;
						}
						HX_STACK_LINE(319)
						::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
						HX_STACK_LINE(319)
						int length = (int)0;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(319)
						int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
						HX_STACK_LINE(319)
						Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(319)
							while((true)){
								HX_STACK_LINE(319)
								bool tmp75 = (_g < lines->length);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(319)
								bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(319)
								if ((tmp76)){
									HX_STACK_LINE(319)
									break;
								}
								HX_STACK_LINE(319)
								::String tmp77 = lines->__get(_g);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(319)
								::String line = tmp77;		HX_STACK_VAR(line,"line");
								HX_STACK_LINE(319)
								++(_g);
								HX_STACK_LINE(319)
								int tmp78 = line_i;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(319)
								::openfl::text::TextLineMetrics tmp79 = textField->getLineMetrics(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(319)
								tlm = tmp79;
								HX_STACK_LINE(319)
								x = oldX;
								HX_STACK_LINE(319)
								Float tmp80;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(319)
								{
									HX_STACK_LINE(319)
									::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(319)
									switch( (int)(_g1->__Index())){
										case (int)0: case (int)2: {
											HX_STACK_LINE(319)
											tmp80 = (int)0;
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(319)
											Float tmp81 = (textField->__width - (int)4);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(319)
											Float tmp82 = tlm->width;		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(319)
											Float tmp83 = (tmp81 - tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(319)
											tmp80 = (Float(tmp83) / Float((int)2));
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(319)
											Float tmp81 = (textField->__width - (int)4);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(319)
											Float tmp82 = tlm->width;		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(319)
											tmp80 = (tmp81 - tmp82);
										}
										;break;
									}
								}
								HX_STACK_LINE(319)
								hx::AddEq(x,tmp80);
								HX_STACK_LINE(319)
								textLayout->set_text(null());
								HX_STACK_LINE(319)
								::openfl::text::Font tmp81 = font;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(319)
								textLayout->set_font(tmp81);
								HX_STACK_LINE(319)
								int tmp82 = size;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(319)
								textLayout->set_size(tmp82);
								HX_STACK_LINE(319)
								::String tmp83 = line;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(319)
								textLayout->set_text(tmp83);
								HX_STACK_LINE(319)
								{
									HX_STACK_LINE(319)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(319)
									Array< ::Dynamic > _g2 = textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(319)
									while((true)){
										HX_STACK_LINE(319)
										bool tmp84 = (_g1 < _g2->length);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(319)
										bool tmp85 = !(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(319)
										if ((tmp85)){
											HX_STACK_LINE(319)
											break;
										}
										HX_STACK_LINE(319)
										::lime::text::GlyphPosition tmp86 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(319)
										::lime::text::GlyphPosition position = tmp86;		HX_STACK_VAR(position,"position");
										HX_STACK_LINE(319)
										++(_g1);
										HX_STACK_LINE(319)
										int tmp87 = position->glyph;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(319)
										::lime::graphics::Image tmp88 = images->get(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(319)
										image = tmp88;
										HX_STACK_LINE(319)
										bool tmp89 = (image != null());		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(319)
										if ((tmp89)){
											HX_STACK_LINE(319)
											bool tmp90 = (length >= tileData->length);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(319)
											if ((tmp90)){
												HX_STACK_LINE(319)
												Float tmp91 = x;		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(319)
												Float tmp92 = position->offset->x;		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(319)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(319)
												Float tmp94 = image->x;		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(319)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(319)
												tileData->push(tmp95);
												HX_STACK_LINE(319)
												Float tmp96 = y;		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(319)
												Float tmp97 = position->offset->y;		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(319)
												Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(319)
												Float tmp99 = image->y;		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(319)
												Float tmp100 = (tmp98 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(319)
												tileData->push(tmp100);
												HX_STACK_LINE(319)
												int tmp101 = position->glyph;		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(319)
												Dynamic tmp102 = tileID->get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(319)
												Dynamic tmp103 = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(319)
												tileData->push(tmp103);
												HX_STACK_LINE(319)
												Float tmp104 = r;		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(319)
												tileData->push(tmp104);
												HX_STACK_LINE(319)
												Float tmp105 = g;		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(319)
												tileData->push(tmp105);
												HX_STACK_LINE(319)
												Float tmp106 = b;		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(319)
												tileData->push(tmp106);
											}
											else{
												HX_STACK_LINE(319)
												Float tmp91 = x;		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(319)
												Float tmp92 = position->offset->x;		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(319)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(319)
												Float tmp94 = image->x;		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(319)
												Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(319)
												tileData[length] = tmp95;
												HX_STACK_LINE(319)
												int tmp96 = (length + (int)1);		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(319)
												Float tmp97 = y;		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(319)
												Float tmp98 = position->offset->y;		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(319)
												Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(319)
												Float tmp100 = image->y;		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(319)
												Float tmp101 = (tmp99 - tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(319)
												tileData[tmp96] = tmp101;
												HX_STACK_LINE(319)
												int tmp102 = (length + (int)2);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(319)
												int tmp103 = position->glyph;		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(319)
												Dynamic tmp104 = tileID->get(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(319)
												Dynamic tmp105 = tmp104;		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(319)
												tileData[tmp102] = tmp105;
												HX_STACK_LINE(319)
												int tmp106 = (length + (int)3);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(319)
												Float tmp107 = r;		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(319)
												tileData[tmp106] = tmp107;
												HX_STACK_LINE(319)
												int tmp108 = (length + (int)4);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(319)
												Float tmp109 = g;		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(319)
												tileData[tmp108] = tmp109;
												HX_STACK_LINE(319)
												int tmp110 = (length + (int)5);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(319)
												Float tmp111 = b;		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(319)
												tileData[tmp110] = tmp111;
											}
											HX_STACK_LINE(319)
											hx::AddEq(length,(int)6);
										}
										HX_STACK_LINE(319)
										Float tmp90 = position->advance->x;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(319)
										hx::AddEq(x,tmp90);
										HX_STACK_LINE(319)
										Float tmp91 = position->advance->y;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(319)
										hx::SubEq(y,tmp91);
									}
								}
								HX_STACK_LINE(319)
								hx::AddEq(y,tlm->height);
								HX_STACK_LINE(319)
								(line_i)++;
							}
						}
						HX_STACK_LINE(319)
						::openfl::display::Tilesheet tmp75 = tilesheet;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(319)
						int tmp76 = length;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(319)
						textField->__tileDataLength->set(tmp75,tmp76);
					}
				}
				else{
					HX_STACK_LINE(323)
					int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
					HX_STACK_LINE(324)
					::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
					HX_STACK_LINE(325)
					Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
					HX_STACK_LINE(327)
					{
						HX_STACK_LINE(327)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(327)
						int tmp19 = textField->__ranges->length;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(327)
						int _g = tmp19;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(327)
						while((true)){
							HX_STACK_LINE(327)
							bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(327)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(327)
							if ((tmp21)){
								HX_STACK_LINE(327)
								break;
							}
							HX_STACK_LINE(327)
							int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(327)
							int i = tmp22;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(329)
							::openfl::text::TextFormatRange tmp23 = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(329)
							range = tmp23;
							HX_STACK_LINE(331)
							{
								HX_STACK_LINE(331)
								int tmp24 = range->start;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(331)
								int tmp25 = range->end;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(331)
								::String tmp26 = text.substring(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(331)
								::String text1 = tmp26;		HX_STACK_VAR(text1,"text1");
								HX_STACK_LINE(331)
								::openfl::text::TextFormat format = range->format;		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(331)
								::openfl::text::TextFormat tmp27 = format;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(331)
								::openfl::text::Font tmp28 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(331)
								::openfl::text::Font font = tmp28;		HX_STACK_VAR(font,"font");
								HX_STACK_LINE(331)
								bool tmp29 = (font != null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(331)
								bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(331)
								if ((tmp29)){
									HX_STACK_LINE(331)
									tmp30 = (format->size != null());
								}
								else{
									HX_STACK_LINE(331)
									tmp30 = false;
								}
								HX_STACK_LINE(331)
								if ((tmp30)){
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp31 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(331)
									::openfl::text::Font tmp32 = font;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(331)
									bool tmp33 = tmp31->exists(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(331)
									bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(331)
									if ((tmp34)){
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::haxe::ds::IntMap tmp36 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(331)
											::haxe::ds::IntMap tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(331)
											tmp35 = tmp37;
										}
										HX_STACK_LINE(331)
										::haxe::ds::IntMap value = tmp35;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										::haxe::ds::ObjectMap tmp36 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(331)
										::openfl::text::Font tmp37 = font;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp38 = value;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(331)
										tmp36->set(tmp37,tmp38);
									}
									HX_STACK_LINE(331)
									Dynamic tmp35 = format->size;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(331)
									int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(331)
									int size = tmp36;		HX_STACK_VAR(size,"size");
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp37 = ::openfl::_internal::renderer::TextFieldGraphics_obj::glyphs;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(331)
									::openfl::text::Font tmp38 = font;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap tmp39 = tmp37->get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap fontGlyphs = tmp39;		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
									HX_STACK_LINE(331)
									int tmp40 = size;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(331)
									bool tmp41 = fontGlyphs->exists(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(331)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(331)
									if ((tmp42)){
										HX_STACK_LINE(331)
										int tmp43 = size;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp44 = font->renderGlyphs(font->getGlyphs(null()),tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap value = tmp44;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										int tmp45 = size;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp46 = value;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(331)
										fontGlyphs->set(tmp45,tmp46);
									}
									HX_STACK_LINE(331)
									int tmp43 = size;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap tmp44 = fontGlyphs->get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap images = tmp44;		HX_STACK_VAR(images,"images");
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp45 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(331)
									::openfl::text::Font tmp46 = font;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(331)
									bool tmp47 = tmp45->exists(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(331)
									bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(331)
									if ((tmp48)){
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::haxe::ds::IntMap tmp50 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(331)
											::haxe::ds::IntMap tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(331)
											tmp49 = tmp51;
										}
										HX_STACK_LINE(331)
										::haxe::ds::IntMap value = tmp49;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										::haxe::ds::ObjectMap tmp50 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(331)
										::openfl::text::Font tmp51 = font;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp52 = value;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(331)
										tmp50->set(tmp51,tmp52);
									}
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp49 = ::openfl::_internal::renderer::TextFieldGraphics_obj::bitmapData;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(331)
									::openfl::text::Font tmp50 = font;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap tmp51 = tmp49->get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap fontBitmapData = tmp51;		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
									HX_STACK_LINE(331)
									int tmp52 = size;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(331)
									bool tmp53 = fontBitmapData->exists(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(331)
									bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(331)
									if ((tmp54)){
										HX_STACK_LINE(331)
										int width;		HX_STACK_VAR(width,"width");
										HX_STACK_LINE(331)
										int height;		HX_STACK_VAR(height,"height");
										HX_STACK_LINE(331)
										::lime::utils::ArrayBufferView data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(331)
										Dynamic tmp55 = images->iterator();		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(331)
										for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(tmp55);  __it->hasNext(); ){
											::lime::graphics::Image image = __it->next();
											{
												HX_STACK_LINE(331)
												int tmp56 = image->buffer->width;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(331)
												width = tmp56;
												HX_STACK_LINE(331)
												int tmp57 = image->buffer->height;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(331)
												height = tmp57;
												HX_STACK_LINE(331)
												::lime::utils::ArrayBufferView tmp58 = image->get_data();		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(331)
												data = tmp58;
												HX_STACK_LINE(331)
												break;
											}
;
										}
										HX_STACK_LINE(331)
										::openfl::display::BitmapData tmp56 = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(331)
										::openfl::display::BitmapData bitmapData = tmp56;		HX_STACK_VAR(bitmapData,"bitmapData");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(331)
											while((true)){
												HX_STACK_LINE(331)
												bool tmp57 = (_g2 < width);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(331)
												bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(331)
												if ((tmp58)){
													HX_STACK_LINE(331)
													break;
												}
												HX_STACK_LINE(331)
												int tmp59 = (_g2)++;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(331)
												int x = tmp59;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(331)
												{
													HX_STACK_LINE(331)
													int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(331)
													while((true)){
														HX_STACK_LINE(331)
														bool tmp60 = (_g11 < height);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(331)
														bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(331)
														if ((tmp61)){
															HX_STACK_LINE(331)
															break;
														}
														HX_STACK_LINE(331)
														int tmp62 = (_g11)++;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(331)
														int y = tmp62;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(331)
														int tmp63 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (((y * width) + x))));		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(331)
														Dynamic tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(331)
														Dynamic alpha = tmp64;		HX_STACK_VAR(alpha,"alpha");
														HX_STACK_LINE(331)
														int tmp65;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(331)
														{
															HX_STACK_LINE(331)
															int a = alpha;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(331)
															tmp65 = (int(a) << int((int)24));
														}
														HX_STACK_LINE(331)
														int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(331)
														int tmp67 = (int(tmp66) | int((int)16711680));		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(331)
														int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(331)
														int tmp69 = (int(tmp68) | int((int)65280));		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(331)
														int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(331)
														int tmp71 = (int(tmp70) | int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(331)
														int color = tmp71;		HX_STACK_VAR(color,"color");
														HX_STACK_LINE(331)
														int tmp72 = x;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(331)
														int tmp73 = y;		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(331)
														int tmp74 = color;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(331)
														bitmapData->setPixel32(tmp72,tmp73,tmp74);
													}
												}
											}
										}
										HX_STACK_LINE(331)
										int tmp57 = size;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(331)
										::openfl::display::BitmapData tmp58 = bitmapData;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(331)
										fontBitmapData->set(tmp57,tmp58);
									}
									HX_STACK_LINE(331)
									int tmp55 = size;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(331)
									::openfl::display::BitmapData tmp56 = fontBitmapData->get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(331)
									::openfl::display::BitmapData bitmapData = tmp56;		HX_STACK_VAR(bitmapData,"bitmapData");
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp57 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(331)
									::openfl::display::BitmapData tmp58 = bitmapData;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(331)
									bool tmp59 = tmp57->exists(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(331)
									bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(331)
									if ((tmp60)){
										HX_STACK_LINE(331)
										::openfl::display::Tilesheet tmp61 = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(331)
										::openfl::display::Tilesheet tilesheet = tmp61;		HX_STACK_VAR(tilesheet,"tilesheet");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp62;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(331)
										{
											HX_STACK_LINE(331)
											::haxe::ds::IntMap tmp63 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(331)
											::haxe::ds::IntMap tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(331)
											tmp62 = tmp64;
										}
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tileID = tmp62;		HX_STACK_VAR(tileID,"tileID");
										HX_STACK_LINE(331)
										::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
										HX_STACK_LINE(331)
										int index;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(331)
										Dynamic tmp63 = images->keys();		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(331)
										Dynamic tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(331)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp64);  __it->hasNext(); ){
											int key = __it->next();
											{
												HX_STACK_LINE(331)
												int tmp65 = key;		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(331)
												::lime::graphics::Image tmp66 = images->get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(331)
												image = tmp66;
												HX_STACK_LINE(331)
												::openfl::geom::Rectangle tmp67 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(331)
												int tmp68 = tilesheet->addTileRect(tmp67,null());		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(331)
												index = tmp68;
												HX_STACK_LINE(331)
												int tmp69 = key;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(331)
												int tmp70 = index;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(331)
												tileID->set(tmp69,tmp70);
											}
;
										}
										HX_STACK_LINE(331)
										::haxe::ds::ObjectMap tmp65 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(331)
										::openfl::display::BitmapData tmp66 = bitmapData;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(331)
										::haxe::ds::IntMap tmp67 = tileID;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(331)
										tmp65->set(tmp66,tmp67);
										HX_STACK_LINE(331)
										::haxe::ds::ObjectMap tmp68 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(331)
										::openfl::display::BitmapData tmp69 = bitmapData;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(331)
										::openfl::display::Tilesheet tmp70 = tilesheet;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(331)
										tmp68->set(tmp69,tmp70);
									}
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp61 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tilesheets;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(331)
									::openfl::display::BitmapData tmp62 = bitmapData;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tmp63 = tmp61->get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tilesheet = tmp63;		HX_STACK_VAR(tilesheet,"tilesheet");
									HX_STACK_LINE(331)
									::haxe::ds::ObjectMap tmp64 = ::openfl::_internal::renderer::TextFieldGraphics_obj::tileIDs;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(331)
									::openfl::display::BitmapData tmp65 = bitmapData;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap tmp66 = tmp64->get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(331)
									::haxe::ds::IntMap tileID = tmp66;		HX_STACK_VAR(tileID,"tileID");
									HX_STACK_LINE(331)
									int tmp67 = (int(format->color) >> int((int)16));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(331)
									int tmp68 = (int(tmp67) & int((int)255));		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(331)
									Float tmp69 = (Float(tmp68) / Float((int)255));		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(331)
									Float r = tmp69;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(331)
									int tmp70 = (int(format->color) >> int((int)8));		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(331)
									int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(331)
									Float tmp72 = (Float(tmp71) / Float((int)255));		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(331)
									Float g = tmp72;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(331)
									int tmp73 = (int(format->color) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(331)
									Float tmp74 = (Float(tmp73) / Float((int)255));		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(331)
									Float b = tmp74;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(331)
									::openfl::text::TextLineMetrics tmp75 = textField->getLineMetrics((int)0);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(331)
									::openfl::text::TextLineMetrics tlm = tmp75;		HX_STACK_VAR(tlm,"tlm");
									HX_STACK_LINE(331)
									::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
									HX_STACK_LINE(331)
									Float x = offsetX;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(331)
									Float tmp76 = ((int)2 + tlm->ascent);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(331)
									Float y = tmp76;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(331)
									Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tmp77 = tilesheet;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(331)
									textField->__tilesheets->set(tmp77,true);
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tmp78 = tilesheet;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(331)
									bool tmp79 = textField->__tileData->exists(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(331)
									bool tmp80 = !(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(331)
									if ((tmp80)){
										HX_STACK_LINE(331)
										tileData = Array_obj< Float >::__new();
										HX_STACK_LINE(331)
										::openfl::display::Tilesheet tmp81 = tilesheet;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(331)
										textField->__tileData->set(tmp81,tileData);
										HX_STACK_LINE(331)
										::openfl::display::Tilesheet tmp82 = tilesheet;		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(331)
										textField->__tileDataLength->set(tmp82,(int)0);
									}
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tmp81 = tilesheet;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(331)
									tileData = ((Array< Float >)(textField->__tileData->get(tmp81)));
									HX_STACK_LINE(331)
									int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
									HX_STACK_LINE(331)
									Array< ::String > lines = text1.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
									HX_STACK_LINE(331)
									bool tmp82 = (textField->__textLayout == null());		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(331)
									if ((tmp82)){
										HX_STACK_LINE(331)
										::lime::text::TextLayout tmp83 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(331)
										textField->__textLayout = tmp83;
									}
									HX_STACK_LINE(331)
									::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
									HX_STACK_LINE(331)
									int length = (int)0;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(331)
									int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
									HX_STACK_LINE(331)
									Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(331)
										while((true)){
											HX_STACK_LINE(331)
											bool tmp83 = (_g2 < lines->length);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(331)
											bool tmp84 = !(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(331)
											if ((tmp84)){
												HX_STACK_LINE(331)
												break;
											}
											HX_STACK_LINE(331)
											::String tmp85 = lines->__get(_g2);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(331)
											::String line = tmp85;		HX_STACK_VAR(line,"line");
											HX_STACK_LINE(331)
											++(_g2);
											HX_STACK_LINE(331)
											int tmp86 = line_i;		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(331)
											::openfl::text::TextLineMetrics tmp87 = textField->getLineMetrics(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(331)
											tlm = tmp87;
											HX_STACK_LINE(331)
											x = oldX;
											HX_STACK_LINE(331)
											Float tmp88;		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												::openfl::text::TextFormatAlign _g11 = format->align;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(331)
												switch( (int)(_g11->__Index())){
													case (int)0: case (int)2: {
														HX_STACK_LINE(331)
														tmp88 = (int)0;
													}
													;break;
													case (int)3: {
														HX_STACK_LINE(331)
														Float tmp89 = (textField->__width - (int)4);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(331)
														Float tmp90 = tlm->width;		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(331)
														Float tmp91 = (tmp89 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(331)
														tmp88 = (Float(tmp91) / Float((int)2));
													}
													;break;
													case (int)1: {
														HX_STACK_LINE(331)
														Float tmp89 = (textField->__width - (int)4);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(331)
														Float tmp90 = tlm->width;		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(331)
														tmp88 = (tmp89 - tmp90);
													}
													;break;
												}
											}
											HX_STACK_LINE(331)
											hx::AddEq(x,tmp88);
											HX_STACK_LINE(331)
											textLayout->set_text(null());
											HX_STACK_LINE(331)
											::openfl::text::Font tmp89 = font;		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(331)
											textLayout->set_font(tmp89);
											HX_STACK_LINE(331)
											int tmp90 = size;		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(331)
											textLayout->set_size(tmp90);
											HX_STACK_LINE(331)
											::String tmp91 = line;		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(331)
											textLayout->set_text(tmp91);
											HX_STACK_LINE(331)
											{
												HX_STACK_LINE(331)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(331)
												Array< ::Dynamic > _g21 = textLayout->get_positions();		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(331)
												while((true)){
													HX_STACK_LINE(331)
													bool tmp92 = (_g11 < _g21->length);		HX_STACK_VAR(tmp92,"tmp92");
													HX_STACK_LINE(331)
													bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
													HX_STACK_LINE(331)
													if ((tmp93)){
														HX_STACK_LINE(331)
														break;
													}
													HX_STACK_LINE(331)
													::lime::text::GlyphPosition tmp94 = _g21->__get(_g11).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp94,"tmp94");
													HX_STACK_LINE(331)
													::lime::text::GlyphPosition position = tmp94;		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(331)
													++(_g11);
													HX_STACK_LINE(331)
													int tmp95 = position->glyph;		HX_STACK_VAR(tmp95,"tmp95");
													HX_STACK_LINE(331)
													::lime::graphics::Image tmp96 = images->get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
													HX_STACK_LINE(331)
													image = tmp96;
													HX_STACK_LINE(331)
													bool tmp97 = (image != null());		HX_STACK_VAR(tmp97,"tmp97");
													HX_STACK_LINE(331)
													if ((tmp97)){
														HX_STACK_LINE(331)
														bool tmp98 = (length >= tileData->length);		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(331)
														if ((tmp98)){
															HX_STACK_LINE(331)
															Float tmp99 = x;		HX_STACK_VAR(tmp99,"tmp99");
															HX_STACK_LINE(331)
															Float tmp100 = position->offset->x;		HX_STACK_VAR(tmp100,"tmp100");
															HX_STACK_LINE(331)
															Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
															HX_STACK_LINE(331)
															Float tmp102 = image->x;		HX_STACK_VAR(tmp102,"tmp102");
															HX_STACK_LINE(331)
															Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
															HX_STACK_LINE(331)
															tileData->push(tmp103);
															HX_STACK_LINE(331)
															Float tmp104 = y;		HX_STACK_VAR(tmp104,"tmp104");
															HX_STACK_LINE(331)
															Float tmp105 = position->offset->y;		HX_STACK_VAR(tmp105,"tmp105");
															HX_STACK_LINE(331)
															Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
															HX_STACK_LINE(331)
															Float tmp107 = image->y;		HX_STACK_VAR(tmp107,"tmp107");
															HX_STACK_LINE(331)
															Float tmp108 = (tmp106 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
															HX_STACK_LINE(331)
															tileData->push(tmp108);
															HX_STACK_LINE(331)
															int tmp109 = position->glyph;		HX_STACK_VAR(tmp109,"tmp109");
															HX_STACK_LINE(331)
															Dynamic tmp110 = tileID->get(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
															HX_STACK_LINE(331)
															Dynamic tmp111 = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
															HX_STACK_LINE(331)
															tileData->push(tmp111);
															HX_STACK_LINE(331)
															Float tmp112 = r;		HX_STACK_VAR(tmp112,"tmp112");
															HX_STACK_LINE(331)
															tileData->push(tmp112);
															HX_STACK_LINE(331)
															Float tmp113 = g;		HX_STACK_VAR(tmp113,"tmp113");
															HX_STACK_LINE(331)
															tileData->push(tmp113);
															HX_STACK_LINE(331)
															Float tmp114 = b;		HX_STACK_VAR(tmp114,"tmp114");
															HX_STACK_LINE(331)
															tileData->push(tmp114);
														}
														else{
															HX_STACK_LINE(331)
															Float tmp99 = x;		HX_STACK_VAR(tmp99,"tmp99");
															HX_STACK_LINE(331)
															Float tmp100 = position->offset->x;		HX_STACK_VAR(tmp100,"tmp100");
															HX_STACK_LINE(331)
															Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
															HX_STACK_LINE(331)
															Float tmp102 = image->x;		HX_STACK_VAR(tmp102,"tmp102");
															HX_STACK_LINE(331)
															Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
															HX_STACK_LINE(331)
															tileData[length] = tmp103;
															HX_STACK_LINE(331)
															int tmp104 = (length + (int)1);		HX_STACK_VAR(tmp104,"tmp104");
															HX_STACK_LINE(331)
															Float tmp105 = y;		HX_STACK_VAR(tmp105,"tmp105");
															HX_STACK_LINE(331)
															Float tmp106 = position->offset->y;		HX_STACK_VAR(tmp106,"tmp106");
															HX_STACK_LINE(331)
															Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
															HX_STACK_LINE(331)
															Float tmp108 = image->y;		HX_STACK_VAR(tmp108,"tmp108");
															HX_STACK_LINE(331)
															Float tmp109 = (tmp107 - tmp108);		HX_STACK_VAR(tmp109,"tmp109");
															HX_STACK_LINE(331)
															tileData[tmp104] = tmp109;
															HX_STACK_LINE(331)
															int tmp110 = (length + (int)2);		HX_STACK_VAR(tmp110,"tmp110");
															HX_STACK_LINE(331)
															int tmp111 = position->glyph;		HX_STACK_VAR(tmp111,"tmp111");
															HX_STACK_LINE(331)
															Dynamic tmp112 = tileID->get(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
															HX_STACK_LINE(331)
															Dynamic tmp113 = tmp112;		HX_STACK_VAR(tmp113,"tmp113");
															HX_STACK_LINE(331)
															tileData[tmp110] = tmp113;
															HX_STACK_LINE(331)
															int tmp114 = (length + (int)3);		HX_STACK_VAR(tmp114,"tmp114");
															HX_STACK_LINE(331)
															Float tmp115 = r;		HX_STACK_VAR(tmp115,"tmp115");
															HX_STACK_LINE(331)
															tileData[tmp114] = tmp115;
															HX_STACK_LINE(331)
															int tmp116 = (length + (int)4);		HX_STACK_VAR(tmp116,"tmp116");
															HX_STACK_LINE(331)
															Float tmp117 = g;		HX_STACK_VAR(tmp117,"tmp117");
															HX_STACK_LINE(331)
															tileData[tmp116] = tmp117;
															HX_STACK_LINE(331)
															int tmp118 = (length + (int)5);		HX_STACK_VAR(tmp118,"tmp118");
															HX_STACK_LINE(331)
															Float tmp119 = b;		HX_STACK_VAR(tmp119,"tmp119");
															HX_STACK_LINE(331)
															tileData[tmp118] = tmp119;
														}
														HX_STACK_LINE(331)
														hx::AddEq(length,(int)6);
													}
													HX_STACK_LINE(331)
													Float tmp98 = position->advance->x;		HX_STACK_VAR(tmp98,"tmp98");
													HX_STACK_LINE(331)
													hx::AddEq(x,tmp98);
													HX_STACK_LINE(331)
													Float tmp99 = position->advance->y;		HX_STACK_VAR(tmp99,"tmp99");
													HX_STACK_LINE(331)
													hx::SubEq(y,tmp99);
												}
											}
											HX_STACK_LINE(331)
											hx::AddEq(y,tlm->height);
											HX_STACK_LINE(331)
											(line_i)++;
										}
									}
									HX_STACK_LINE(331)
									::openfl::display::Tilesheet tmp83 = tilesheet;		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(331)
									int tmp84 = length;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(331)
									textField->__tileDataLength->set(tmp83,tmp84);
								}
							}
							HX_STACK_LINE(332)
							Float tmp24 = measurements->__get(i);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(332)
							hx::AddEq(offsetX,tmp24);
						}
					}
				}
			}
			HX_STACK_LINE(340)
			Dynamic tmp15 = textField->__tileData->keys();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(340)
			for(::cpp::FastIterator_obj< ::openfl::display::Tilesheet > *__it = ::cpp::CreateFastIterator< ::openfl::display::Tilesheet >(tmp15);  __it->hasNext(); ){
				::openfl::display::Tilesheet key = __it->next();
				{
					HX_STACK_LINE(342)
					::openfl::display::Tilesheet tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(342)
					bool tmp17 = textField->__tilesheets->exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(342)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(342)
					if ((tmp18)){
						HX_STACK_LINE(344)
						::openfl::display::Tilesheet tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(344)
						textField->__tileData->remove(tmp19);
						HX_STACK_LINE(345)
						::openfl::display::Tilesheet tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(345)
						textField->__tileDataLength->remove(tmp20);
					}
				}
;
			}
			HX_STACK_LINE(351)
			textField->__dirty = false;
			HX_STACK_LINE(352)
			return true;
		}
	}
	HX_STACK_LINE(358)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextFieldGraphics_obj,update,return )


TextFieldGraphics_obj::TextFieldGraphics_obj()
{
}

bool TextFieldGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { outValue = glyphs; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { outValue = tileIDs; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { outValue = bitmapData; return true;  }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { outValue = tilesheets; return true;  }
		if (HX_FIELD_EQ(inName,"renderText") ) { outValue = renderText_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &TextFieldGraphics_obj::bitmapData,HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &TextFieldGraphics_obj::glyphs,HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &TextFieldGraphics_obj::tilesheets,HX_HCSTRING("tilesheets","\xa2","\xca","\xc8","\x4f")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &TextFieldGraphics_obj::tileIDs,HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::tilesheets,"tilesheets");
	HX_MARK_MEMBER_NAME(TextFieldGraphics_obj::tileIDs,"tileIDs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::tilesheets,"tilesheets");
	HX_VISIT_MEMBER_NAME(TextFieldGraphics_obj::tileIDs,"tileIDs");
};

#endif

hx::Class TextFieldGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("tilesheets","\xa2","\xca","\xc8","\x4f"),
	HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderText","\x23","\xc7","\x03","\xea"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

void TextFieldGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.TextFieldGraphics","\xdd","\xbe","\xda","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFieldGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFieldGraphics_obj >;
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

void TextFieldGraphics_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",26,0xf0946200)
		{
			HX_STACK_LINE(26)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(26)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			return tmp1;
		}
		return null();
	}
};
	bitmapData= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",27,0xf0946200)
		{
			HX_STACK_LINE(27)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(27)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			return tmp1;
		}
		return null();
	}
};
	glyphs= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",28,0xf0946200)
		{
			HX_STACK_LINE(28)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			return tmp1;
		}
		return null();
	}
};
	tilesheets= _Function_0_3::Block();
struct _Function_0_4{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/TextFieldGraphics.hx",29,0xf0946200)
		{
			HX_STACK_LINE(29)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(29)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			return tmp1;
		}
		return null();
	}
};
	tileIDs= _Function_0_4::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
