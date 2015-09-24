#ifndef INCLUDED_openfl__internal_renderer_TextFieldGraphics
#define INCLUDED_openfl__internal_renderer_TextFieldGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(openfl,_internal,renderer,TextFieldGraphics)
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


class HXCPP_CLASS_ATTRIBUTES  TextFieldGraphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFieldGraphics_obj OBJ_;
		TextFieldGraphics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.TextFieldGraphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextFieldGraphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFieldGraphics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextFieldGraphics","\x98","\xae","\x35","\xee"); }

		static void __boot();
		static ::haxe::ds::ObjectMap bitmapData;
		static ::haxe::ds::ObjectMap glyphs;
		static ::haxe::ds::ObjectMap tilesheets;
		static ::haxe::ds::ObjectMap tileIDs;
		static Void render( ::openfl::text::TextField textField);
		static Dynamic render_dyn();

		static Void renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds);
		static Dynamic renderText_dyn();

		static bool update( ::openfl::text::TextField textField,::openfl::geom::Rectangle bounds);
		static Dynamic update_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_TextFieldGraphics */ 
