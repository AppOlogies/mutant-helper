#ifndef INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,UpdateEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  UpdateEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UpdateEventInfo_obj OBJ_;
		UpdateEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_deltaTime);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.UpdateEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UpdateEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_deltaTime);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpdateEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UpdateEventInfo","\x3f","\x1a","\xdf","\xa4"); }

		int deltaTime;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::UpdateEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo */ 
