#ifndef INCLUDED_sys_io_File
#define INCLUDED_sys_io_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,io,File)
HX_DECLARE_CLASS2(sys,io,FileOutput)
namespace sys{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  File_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef File_obj OBJ_;
		File_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.io.File")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< File_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e"); }

		static void __boot();
		static Void saveBytes( ::String path,::haxe::io::Bytes bytes);
		static Dynamic saveBytes_dyn();

		static ::sys::io::FileOutput write( ::String path,hx::Null< bool >  binary);
		static Dynamic write_dyn();

		static Dynamic file_open;
		static Dynamic &file_open_dyn() { return file_open;}
};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_File */ 
