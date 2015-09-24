#ifndef INCLUDED_lime_text__TextDirection_TextDirection_Impl_
#define INCLUDED_lime_text__TextDirection_TextDirection_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,_TextDirection,TextDirection_Impl_)
namespace lime{
namespace text{
namespace _TextDirection{


class HXCPP_CLASS_ATTRIBUTES  TextDirection_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextDirection_Impl__obj OBJ_;
		TextDirection_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.text._TextDirection.TextDirection_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextDirection_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextDirection_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextDirection_Impl_","\xd2","\x55","\x68","\x6e"); }

		static void __boot();
		static int INVALID;
		static int LEFT_TO_RIGHT;
		static int RIGHT_TO_LEFT;
		static int TOP_TO_BOTTOM;
		static int BOTTOM_TO_TOP;
		static Void reverse( int this1);
		static Dynamic reverse_dyn();

		static ::String toString( int this1);
		static Dynamic toString_dyn();

		static bool get_backward( int this1);
		static Dynamic get_backward_dyn();

		static bool get_forward( int this1);
		static Dynamic get_forward_dyn();

		static bool get_horizontal( int this1);
		static Dynamic get_horizontal_dyn();

		static bool get_vertical( int this1);
		static Dynamic get_vertical_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace _TextDirection

#endif /* INCLUDED_lime_text__TextDirection_TextDirection_Impl_ */ 
