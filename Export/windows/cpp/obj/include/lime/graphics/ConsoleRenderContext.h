#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#define INCLUDED_lime_graphics_ConsoleRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ConsoleRenderContext)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  ConsoleRenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleRenderContext_obj OBJ_;
		ConsoleRenderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.ConsoleRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleRenderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleRenderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConsoleRenderContext","\x82","\x4f","\x3b","\x1b"); }

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void clearColor( Float r,Float g,Float b,Float a);
		Dynamic clearColor_dyn();

		virtual Void clearDepth( Float depth);
		Dynamic clearDepth_dyn();

		virtual Void clearStencil( int stencil);
		Dynamic clearStencil_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ConsoleRenderContext */ 
