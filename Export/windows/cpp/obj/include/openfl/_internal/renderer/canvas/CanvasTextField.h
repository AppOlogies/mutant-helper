#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#define INCLUDED_openfl__internal_renderer_canvas_CanvasTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasTextField)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES  CanvasTextField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CanvasTextField_obj OBJ_;
		CanvasTextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.canvas.CanvasTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CanvasTextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CanvasTextField","\xb5","\x5c","\x88","\x79"); }

		static void __boot();
		static int __utf8_endline_code;
		static ::String clipText( ::openfl::text::TextField textField,::String value);
		static Dynamic clipText_dyn();

		static Void disableInputMode( ::openfl::text::TextField textField);
		static Dynamic disableInputMode_dyn();

		static Void enableInputMode( ::openfl::text::TextField textField);
		static Dynamic enableInputMode_dyn();

		static Array< int > getLineBreakIndices( ::openfl::text::TextField textField);
		static Dynamic getLineBreakIndices_dyn();

		static Float getLineWidth( ::openfl::text::TextField textField,int line);
		static Dynamic getLineWidth_dyn();

		static Float getTextWidth( ::openfl::text::TextField textField,::String text);
		static Dynamic getTextWidth_dyn();

		static Array< Float > measureText( ::openfl::text::TextField textField,hx::Null< bool >  condense);
		static Dynamic measureText_dyn();

		static Void render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

		static Void renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds);
		static Dynamic renderText_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasTextField */ 
