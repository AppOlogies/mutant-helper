#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace _system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

::String System_obj::fontsDirectory;

::String System_obj::userDirectory;

::haxe::ds::StringMap System_obj::__moduleNames;

Void System_obj::exit( int code){
{
		HX_STACK_FRAME("lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",110,0x6434b429)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(114)
		int tmp = code;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::Sys_obj::exit(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

::String System_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("lime.system.System","findHaxeLib",0x4637f12d,"lime.system.System.findHaxeLib","lime/system/System.hx",120,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(124)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(126)
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(library));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		::sys::io::Process proc = tmp;		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(128)
		bool tmp1 = (proc != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		if ((tmp1)){
			HX_STACK_LINE(130)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(132)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(134)
				while((true)){
					HX_STACK_LINE(136)
					::String tmp2 = stream->readLine();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(136)
					::String s = tmp2;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(138)
					::String tmp3 = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(138)
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(138)
					if ((tmp4)){
						HX_STACK_LINE(140)
						stream->close();
						HX_STACK_LINE(141)
						proc->close();
						HX_STACK_LINE(142)
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(142)
						::lime::_system::System_obj::loaderTrace(tmp5);
						HX_STACK_LINE(143)
						::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(143)
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(151)
			stream->close();
			HX_STACK_LINE(152)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(160)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,findHaxeLib,return )

int System_obj::getTimer( ){
	HX_STACK_FRAME("lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",165,0x6434b429)
	HX_STACK_LINE(172)
	int tmp = ::lime::_system::System_obj::lime_system_get_timer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",184,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(194)
		bool tmp = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		if ((tmp)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Dynamic run(cpp::ArrayBase __){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/system/System.hx",196,0x6434b429)
				HX_STACK_ARG(__,"__")
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/System.hx",196,0x6434b429)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(196)
					Dynamic tmp1 = _Function_3_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(196)
					return tmp1;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(196)
			Dynamic tmp1 = ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			return tmp1;
		}
		HX_STACK_LINE(200)
		Dynamic result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(205)
		::haxe::ds::StringMap tmp1 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		if ((tmp2)){
			HX_STACK_LINE(205)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(205)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(205)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(205)
			::lime::_system::System_obj::__moduleNames = tmp3;
		}
		HX_STACK_LINE(207)
		bool tmp3 = lazy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		if ((tmp3)){
			HX_STACK_LINE(209)
			::haxe::ds::StringMap tmp4 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			::String tmp5 = library;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			::String tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			tmp4->set(tmp5,tmp6);
			HX_STACK_LINE(211)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(216)
				bool tmp7 = (library == HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(216)
				if ((tmp7)){
					HX_STACK_LINE(216)
					return null();
				}
				HX_STACK_LINE(222)
				::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(222)
				::String tmp9 = method;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(222)
				int tmp10 = args;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				Dynamic tmp11 = ::cpp::Lib_obj::loadLazy(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(222)
				result = tmp11;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
		else{
			HX_STACK_LINE(234)
			::haxe::ds::StringMap tmp4 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			::String tmp5 = library;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			if ((tmp6)){
				HX_STACK_LINE(237)
				::haxe::ds::StringMap tmp7 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(237)
				::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				::String tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				::String tmp11 = method;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(237)
				int tmp12 = args;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				Dynamic tmp13 = ::cpp::Lib_obj::load(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(237)
				return tmp13;
			}
			HX_STACK_LINE(262)
			::haxe::ds::StringMap tmp7 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(262)
			::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(262)
			::String tmp9 = library;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(262)
			tmp7->set(tmp8,tmp9);
			HX_STACK_LINE(264)
			::String tmp10 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			::String tmp11 = library;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(264)
			::String tmp12 = method;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(264)
			int tmp13 = args;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(264)
			Dynamic tmp14 = ::lime::_system::System_obj::tryLoad(tmp10,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(264)
			result = tmp14;
			HX_STACK_LINE(266)
			bool tmp15 = (result == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(266)
			if ((tmp15)){
				HX_STACK_LINE(268)
				::String tmp16 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(268)
				::String tmp17 = library;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(268)
				::String tmp18 = method;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(268)
				int tmp19 = args;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(268)
				Dynamic tmp20 = ::lime::_system::System_obj::tryLoad(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(268)
				result = tmp20;
			}
			HX_STACK_LINE(272)
			bool tmp16 = (result == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(272)
			if ((tmp16)){
				HX_STACK_LINE(274)
				::String tmp17 = library;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(274)
				::String tmp18 = library;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(274)
				::String tmp19 = method;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(274)
				int tmp20 = args;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(274)
				Dynamic tmp21 = ::lime::_system::System_obj::tryLoad(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(274)
				result = tmp21;
			}
			HX_STACK_LINE(278)
			bool tmp17 = (result == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(278)
			if ((tmp17)){
				HX_STACK_LINE(280)
				::String tmp18 = ::lime::_system::System_obj::sysName();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(280)
				::String tmp19 = tmp18.substr((int)7,null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(280)
				::String tmp20 = tmp19.toLowerCase();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(280)
				bool tmp21 = (tmp20 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(280)
				::String tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(280)
				if ((tmp21)){
					HX_STACK_LINE(280)
					tmp22 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(280)
					tmp22 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
				}
				HX_STACK_LINE(280)
				::String slash = tmp22;		HX_STACK_VAR(slash,"slash");
				HX_STACK_LINE(281)
				::String tmp23 = ::lime::_system::System_obj::findHaxeLib(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(281)
				::String haxelib = tmp23;		HX_STACK_VAR(haxelib,"haxelib");
				HX_STACK_LINE(283)
				bool tmp24 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(283)
				if ((tmp24)){
					HX_STACK_LINE(285)
					::String tmp25 = (haxelib + slash);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(285)
					::String tmp26 = (tmp25 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(285)
					::String tmp27 = slash;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(285)
					::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(285)
					::String tmp29 = ::lime::_system::System_obj::sysName();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(285)
					::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(285)
					::String tmp31 = slash;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(285)
					::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(285)
					::String tmp33 = library;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(285)
					::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(285)
					::String tmp35 = library;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(285)
					::String tmp36 = method;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(285)
					int tmp37 = args;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(285)
					Dynamic tmp38 = ::lime::_system::System_obj::tryLoad(tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(285)
					result = tmp38;
					HX_STACK_LINE(287)
					bool tmp39 = (result == null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(287)
					if ((tmp39)){
						HX_STACK_LINE(289)
						::String tmp40 = (haxelib + slash);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(289)
						::String tmp41 = (tmp40 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(289)
						::String tmp42 = slash;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(289)
						::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(289)
						::String tmp44 = ::lime::_system::System_obj::sysName();		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(289)
						::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(289)
						::String tmp46 = (tmp45 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(289)
						::String tmp47 = slash;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(289)
						::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(289)
						::String tmp49 = library;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(289)
						::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(289)
						::String tmp51 = library;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(289)
						::String tmp52 = method;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(289)
						int tmp53 = args;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(289)
						Dynamic tmp54 = ::lime::_system::System_obj::tryLoad(tmp50,tmp51,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(289)
						result = tmp54;
					}
				}
			}
			HX_STACK_LINE(297)
			Dynamic tmp18 = result;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(297)
			::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(297)
			::String tmp20 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(297)
			::lime::_system::System_obj::loaderTrace(tmp20);
		}
		HX_STACK_LINE(316)
		Dynamic tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

::String System_obj::sysName( ){
	HX_STACK_FRAME("lime.system.System","sysName",0x424b781f,"lime.system.System.sysName","lime/system/System.hx",321,0x6434b429)
	HX_STACK_LINE(327)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Dynamic sys_string = tmp;		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(328)
	::String tmp1 = sys_string().Cast< ::String >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,sysName,return )

Dynamic System_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("lime.system.System","tryLoad",0x12810b28,"lime.system.System.tryLoad","lime/system/System.hx",345,0x6434b429)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(349)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(352)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(361)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		if ((tmp4)){
			HX_STACK_LINE(363)
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			::lime::_system::System_obj::loaderTrace(tmp5);
			HX_STACK_LINE(364)
			::haxe::ds::StringMap tmp6 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(364)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(364)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(364)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(365)
			Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(365)
			return tmp9;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(371)
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + name);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(371)
				::lime::_system::System_obj::loaderTrace(tmp);
			}
		}
	}
	HX_STACK_LINE(377)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,tryLoad,return )

Void System_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("lime.system.System","loaderTrace",0xe7255319,"lime.system.System.loaderTrace","lime/system/System.hx",382,0x6434b429)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(388)
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		Dynamic get_env = tmp;		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(389)
		Dynamic tmp1 = get_env(HX_HCSTRING("OPENFL_LOAD_DEBUG","\xa9","\x1b","\xff","\x9b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		bool debug = tmp2;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(397)
		bool tmp3 = debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		if ((tmp3)){
			HX_STACK_LINE(399)
			::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			::Sys_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loaderTrace,(void))

::String System_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",458,0x6434b429)
	HX_STACK_LINE(461)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",469,0x6434b429)
	HX_STACK_LINE(471)
	::String company = HX_HCSTRING("MyCompany","\x11","\xc3","\x2e","\xcc");		HX_STACK_VAR(company,"company");
	HX_STACK_LINE(472)
	::String file = HX_HCSTRING("MyApplication","\x24","\xd3","\xd1","\x1c");		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(475)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(475)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(475)
	if ((tmp1)){
		HX_STACK_LINE(475)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(475)
		::lime::app::Application tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(475)
		Dynamic tmp5 = tmp4->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(475)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(475)
		tmp2 = false;
	}
	HX_STACK_LINE(475)
	if ((tmp2)){
		HX_STACK_LINE(477)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(477)
		::String tmp4 = tmp3->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(477)
		if ((tmp5)){
			HX_STACK_LINE(479)
			::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(479)
			::String tmp7 = tmp6->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(479)
			company = tmp7;
		}
		HX_STACK_LINE(483)
		::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(483)
		::String tmp7 = tmp6->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(483)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(483)
		if ((tmp8)){
			HX_STACK_LINE(485)
			::lime::app::Application tmp9 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(485)
			::String tmp10 = tmp9->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(485)
			file = tmp10;
		}
	}
	HX_STACK_LINE(493)
	::String tmp3 = company;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(493)
	::String tmp4 = file;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(493)
	::String tmp5 = ::lime::_system::System_obj::lime_system_get_directory((int)1,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(493)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",501,0x6434b429)
	HX_STACK_LINE(504)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)2,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",512,0x6434b429)
	HX_STACK_LINE(515)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)3,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(515)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",523,0x6434b429)
	HX_STACK_LINE(526)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)4,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(526)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

::String System_obj::get_userDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",534,0x6434b429)
	HX_STACK_LINE(537)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)5,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

Dynamic System_obj::lime_system_get_directory;

Dynamic System_obj::lime_system_get_timer;


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sysName") ) { outValue = sysName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { outValue = tryLoad_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = disableCFFI; return true;  }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { outValue = findHaxeLib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { outValue = loaderTrace_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = __moduleNames; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_fontsDirectory() : fontsDirectory; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { outValue = lime_system_get_timer; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { outValue = lime_system_get_directory; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &System_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsString,(void *) &System_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsString,(void *) &System_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsBool,(void *) &System_obj::disableCFFI,HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11")},
	{hx::fsString,(void *) &System_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsString,(void *) &System_obj::fontsDirectory,HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88")},
	{hx::fsString,(void *) &System_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &System_obj::__moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_system_get_directory,HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_system_get_timer,HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("findHaxeLib","\x86","\x2f","\x53","\x08"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("sysName","\xf8","\x55","\x40","\x7a"),
	HX_HCSTRING("tryLoad","\x01","\xe9","\x75","\x4a"),
	HX_HCSTRING("loaderTrace","\x72","\x91","\x40","\xa9"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_fontsDirectory","\xd2","\xe2","\xb4","\x23"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),
	HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.System","\x95","\x83","\xbd","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	__moduleNames= null();
	lime_system_get_directory= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),(int)3,null());
	lime_system_get_timer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),(int)0,null());
}

} // end namespace lime
} // end namespace system
