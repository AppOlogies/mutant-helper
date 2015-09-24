#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#define INCLUDED_lime_math_color__RGBA_RGBA_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <hxMath.h>
HX_DECLARE_CLASS0(Std)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,math,color,_RGBA,RGBA_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(lime,utils,_ArrayBufferView,TAError)
namespace lime{
namespace math{
namespace color{
namespace _RGBA{


class HXCPP_CLASS_ATTRIBUTES  RGBA_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RGBA_Impl__obj OBJ_;
		RGBA_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.math.color._RGBA.RGBA_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RGBA_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RGBA_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("RGBA_Impl_","\x54","\x54","\x4c","\xb3"); }

		static ::lime::utils::ArrayBufferView __alpha16;
		static ::lime::utils::ArrayBufferView __clamp;
		static int a16;
		static Float unmult;
		static int _new( hx::Null< int >  rgba);
		static Dynamic _new_dyn();

		static int create( int r,int g,int b,int a);
		static Dynamic create_dyn();

		static Void multiplyAlpha( int this1);
		static Dynamic multiplyAlpha_dyn();

		static Void readUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  format,hx::Null< bool >  premultiplied);
		static Dynamic readUInt8_dyn();

		static Void set( int this1,int r,int g,int b,int a);
		static Dynamic set_dyn();

		static Void unmultiplyAlpha( int this1);
		static Dynamic unmultiplyAlpha_dyn();

		static Void writeUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  format,hx::Null< bool >  premultiplied);
		static Dynamic writeUInt8_dyn();

		static int __fromARGB( int argb);
		static Dynamic __fromARGB_dyn();

		static int __fromBGRA( int bgra);
		static Dynamic __fromBGRA_dyn();

		static int get_a( int this1);
		static Dynamic get_a_dyn();

		static int set_a( int this1,int value);
		static Dynamic set_a_dyn();

		static int get_b( int this1);
		static Dynamic get_b_dyn();

		static int set_b( int this1,int value);
		static Dynamic set_b_dyn();

		static int get_g( int this1);
		static Dynamic get_g_dyn();

		static int set_g( int this1,int value);
		static Dynamic set_g_dyn();

		static int get_r( int this1);
		static Dynamic get_r_dyn();

		static int set_r( int this1,int value);
		static Dynamic set_r_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace color
} // end namespace _RGBA

#endif /* INCLUDED_lime_math_color__RGBA_RGBA_Impl_ */ 
