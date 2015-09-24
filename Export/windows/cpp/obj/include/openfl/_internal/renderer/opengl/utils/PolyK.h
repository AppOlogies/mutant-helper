#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#define INCLUDED_openfl__internal_renderer_opengl_utils_PolyK

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,PolyK)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  PolyK_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PolyK_obj OBJ_;
		PolyK_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.opengl.utils.PolyK")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PolyK_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PolyK_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PolyK","\x5f","\x74","\xbf","\x59"); }

		static Array< int > triangulate( Array< Float > p);
		static Dynamic triangulate_dyn();

		static bool _PointInTriangle( Float px,Float py,Float ax,Float ay,Float bx,Float by,Float cx,Float cy);
		static Dynamic _PointInTriangle_dyn();

		static bool _convex( Float ax,Float ay,Float bx,Float by,Float cx,Float cy,bool sign);
		static Dynamic _convex_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_PolyK */ 
