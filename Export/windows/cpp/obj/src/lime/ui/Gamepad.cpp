#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
namespace lime{
namespace ui{

Void Gamepad_obj::__construct(int id)
{
HX_STACK_FRAME("lime.ui.Gamepad","new",0xd780a212,"lime.ui.Gamepad.new","lime/ui/Gamepad.hx",18,0x36bc843e)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(20)
	this->id = id;
	HX_STACK_LINE(21)
	this->connected = true;
}
;
	return null();
}

//Gamepad_obj::~Gamepad_obj() { }

Dynamic Gamepad_obj::__CreateEmpty() { return  new Gamepad_obj; }
hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(int id)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Gamepad_obj::get_guid( ){
	HX_STACK_FRAME("lime.ui.Gamepad","get_guid",0x2f6ca220,"lime.ui.Gamepad.get_guid","lime/ui/Gamepad.hx",42,0x36bc843e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::String tmp1 = ::lime::ui::Gamepad_obj::lime_gamepad_get_device_guid(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name( ){
	HX_STACK_FRAME("lime.ui.Gamepad","get_name",0x33fdf6e2,"lime.ui.Gamepad.get_name","lime/ui/Gamepad.hx",53,0x36bc843e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = ::lime::ui::Gamepad_obj::lime_gamepad_get_device_name(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

::haxe::ds::IntMap Gamepad_obj::devices;

Void Gamepad_obj::addMappings( Array< ::String > mappings){
{
		HX_STACK_FRAME("lime.ui.Gamepad","addMappings",0x7dce3c98,"lime.ui.Gamepad.addMappings","lime/ui/Gamepad.hx",29,0x36bc843e)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_LINE(29)
		::lime::ui::Gamepad_obj::lime_gamepad_add_mappings(mappings);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,addMappings,(void))

Dynamic Gamepad_obj::lime_gamepad_add_mappings;

Dynamic Gamepad_obj::lime_gamepad_get_device_guid;

Dynamic Gamepad_obj::lime_gamepad_get_device_name;


Gamepad_obj::Gamepad_obj()
{
}

Dynamic Gamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMappings") ) { outValue = addMappings_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gamepad_add_mappings") ) { outValue = lime_gamepad_add_mappings; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { outValue = lime_gamepad_get_device_guid; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { outValue = lime_gamepad_get_device_name; return true;  }
	}
	return false;
}

Dynamic Gamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gamepad_add_mappings") ) { lime_gamepad_add_mappings=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { lime_gamepad_get_device_guid=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { lime_gamepad_get_device_name=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Gamepad_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Gamepad_obj::lime_gamepad_add_mappings,HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Gamepad_obj::lime_gamepad_get_device_guid,HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Gamepad_obj::lime_gamepad_get_device_name,HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::lime_gamepad_add_mappings,"lime_gamepad_add_mappings");
	HX_MARK_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_guid,"lime_gamepad_get_device_guid");
	HX_MARK_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_name,"lime_gamepad_get_device_name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::lime_gamepad_add_mappings,"lime_gamepad_add_mappings");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_guid,"lime_gamepad_get_device_guid");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_name,"lime_gamepad_get_device_name");
};

#endif

hx::Class Gamepad_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("addMappings","\xe6","\x68","\x0d","\xd8"),
	HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),
	HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),
	HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),
	::String(null()) };

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Gamepad","\x20","\xf1","\xa5","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gamepad_obj >;
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

void Gamepad_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/ui/Gamepad.hx",10,0x36bc843e)
		{
			HX_STACK_LINE(10)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10)
			return tmp1;
		}
		return null();
	}
};
	devices= _Function_0_1::Block();
	lime_gamepad_add_mappings= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),(int)1,null());
	lime_gamepad_get_device_guid= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),(int)1,null());
	lime_gamepad_get_device_name= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),(int)1,null());
}

} // end namespace lime
} // end namespace ui
