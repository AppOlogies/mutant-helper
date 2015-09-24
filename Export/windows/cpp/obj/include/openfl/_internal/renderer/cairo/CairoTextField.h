#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#define INCLUDED_openfl__internal_renderer_cairo_CairoTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoTextField)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoTextField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoTextField_obj OBJ_;
		CairoTextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.cairo.CairoTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoTextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoTextField","\x45","\x17","\x7a","\x57"); }

		static void __boot();
		static ::haxe::ds::StringMap __defaultFonts;
		static int __utf8_endline_code;
		static ::openfl::text::Font findFont( ::String name);
		static Dynamic findFont_dyn();

		static ::openfl::text::Font getFontInstance( ::openfl::text::TextFormat format);
		static Dynamic getFontInstance_dyn();

		static int getLineBreaks( ::openfl::text::TextField textField);
		static Dynamic getLineBreaks_dyn();

		static Array< int > getLineBreakIndices( ::openfl::text::TextField textField);
		static Dynamic getLineBreakIndices_dyn();

		static int getLineBreaksInRange( ::openfl::text::TextField textField,int i);
		static Dynamic getLineBreaksInRange_dyn();

		static Array< int > getLineIndices( ::openfl::text::TextField textField,int line);
		static Dynamic getLineIndices_dyn();

		static Float getLineMetric( ::openfl::text::TextField textField,int line,int metric);
		static Dynamic getLineMetric_dyn();

		static Float getLineMetricSubRangesNotNull( ::openfl::text::TextField textField,int specificLine,int metric);
		static Dynamic getLineMetricSubRangesNotNull_dyn();

		static Float getLineMetricSubRangesNull( ::openfl::text::TextField textField,hx::Null< bool >  singleLine,int metric);
		static Dynamic getLineMetricSubRangesNull_dyn();

		static Float getLineWidth( ::openfl::text::TextField textField,int line);
		static Dynamic getLineWidth_dyn();

		static Float getTextHeight( ::openfl::text::TextField textField);
		static Dynamic getTextHeight_dyn();

		static Float getTextWidth( ::openfl::text::TextField textField,::String text);
		static Dynamic getTextWidth_dyn();

		static Array< Float > measureText( ::openfl::text::TextField textField,hx::Null< bool >  condense);
		static Dynamic measureText_dyn();

		static Array< Float > measureTextSub( ::openfl::text::TextField textField,bool condense);
		static Dynamic measureTextSub_dyn();

		static Array< Float > measureTextSubRangesNotNull( ::openfl::text::TextField textField,bool condense);
		static Dynamic measureTextSubRangesNotNull_dyn();

		static Array< Float > measureTextSubRangesNull( ::openfl::text::TextField textField,bool condense);
		static Dynamic measureTextSubRangesNull_dyn();

		static Void render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

		static Void renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds);
		static Dynamic renderText_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoTextField */ 
