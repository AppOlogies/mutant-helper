#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Sprite_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Sprite","new",0x3ff0c061,"openfl.display.Sprite.new","openfl/display/Sprite.hx",103,0xd5438ced)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(105)
	super::__construct();
	HX_STACK_LINE(107)
	this->buttonMode = false;
	HX_STACK_LINE(108)
	this->useHandCursor = true;
	HX_STACK_LINE(109)
	::openfl::display::LoaderInfo tmp = ::openfl::display::LoaderInfo_obj::create(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	this->loaderInfo = tmp;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new()
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Void Sprite_obj::startDrag( hx::Null< bool >  __o_lockCenter,::openfl::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("openfl.display.Sprite","startDrag",0x20ea0c37,"openfl.display.Sprite.startDrag","openfl/display/Sprite.hx",134,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
		HX_STACK_LINE(136)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		if ((tmp1)){
			HX_STACK_LINE(138)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			bool tmp3 = lockCenter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			tmp2->__startDrag(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

Void Sprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("openfl.display.Sprite","stopDrag",0x4d02dd75,"openfl.display.Sprite.stopDrag","openfl/display/Sprite.hx",152,0xd5438ced)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(156)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			tmp2->__stopDrag(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

::lime::ui::MouseCursor Sprite_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.Sprite","__getCursor",0x4a69b9ed,"openfl.display.Sprite.__getCursor","openfl/display/Sprite.hx",163,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	bool tmp = this->buttonMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	if ((tmp)){
		HX_STACK_LINE(165)
		tmp1 = this->useHandCursor;
	}
	else{
		HX_STACK_LINE(165)
		tmp1 = false;
	}
	HX_STACK_LINE(165)
	::lime::ui::MouseCursor tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	if ((tmp1)){
		HX_STACK_LINE(165)
		tmp2 = ::lime::ui::MouseCursor_obj::POINTER;
	}
	else{
		HX_STACK_LINE(165)
		tmp2 = null();
	}
	HX_STACK_LINE(165)
	return tmp2;
}


bool Sprite_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.Sprite","__hitTest",0x895417e6,"openfl.display.Sprite.__hitTest","openfl/display/Sprite.hx",170,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(172)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	if ((tmp3)){
		HX_STACK_LINE(172)
		bool tmp5 = interactiveOnly;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		if ((tmp6)){
			HX_STACK_LINE(172)
			bool tmp7 = this->mouseEnabled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			tmp4 = !(tmp11);
		}
		else{
			HX_STACK_LINE(172)
			tmp4 = false;
		}
	}
	else{
		HX_STACK_LINE(172)
		tmp4 = true;
	}
	HX_STACK_LINE(172)
	if ((tmp4)){
		HX_STACK_LINE(172)
		return false;
	}
	HX_STACK_LINE(174)
	int length = (int)0;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(176)
	bool tmp5 = (stack != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(176)
	if ((tmp5)){
		HX_STACK_LINE(178)
		length = stack->length;
	}
	HX_STACK_LINE(182)
	Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(182)
	Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	bool tmp8 = shapeFlag;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(182)
	bool tmp9 = interactiveOnly;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(182)
	bool tmp10 = this->super::__hitTest(tmp6,tmp7,tmp8,stack,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(182)
	if ((tmp10)){
		HX_STACK_LINE(184)
		bool tmp11 = interactiveOnly;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(184)
		return tmp11;
	}
	else{
		HX_STACK_LINE(186)
		::openfl::display::Graphics tmp11 = this->__graphics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		if ((tmp12)){
			HX_STACK_LINE(186)
			::openfl::display::Graphics tmp14 = this->__graphics;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(186)
			::openfl::display::Graphics tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(186)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(186)
			Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(186)
			bool tmp18 = shapeFlag;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(186)
			::openfl::geom::Matrix tmp19 = this->__getTransform();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(186)
			::openfl::geom::Matrix tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			Float tmp21 = tmp16;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(186)
			Float tmp22 = tmp17;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(186)
			bool tmp23 = tmp18;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(186)
			::openfl::geom::Matrix tmp24 = tmp20;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(186)
			tmp13 = tmp15->__hitTest(tmp21,tmp22,tmp23,tmp24);
		}
		else{
			HX_STACK_LINE(186)
			tmp13 = false;
		}
		HX_STACK_LINE(186)
		if ((tmp13)){
			HX_STACK_LINE(188)
			bool tmp14 = (stack != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(188)
			if ((tmp14)){
				HX_STACK_LINE(190)
				stack->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(194)
			return true;
		}
	}
	HX_STACK_LINE(198)
	return false;
}


::openfl::display::Graphics Sprite_obj::get_graphics( ){
	HX_STACK_FRAME("openfl.display.Sprite","get_graphics",0x451134b3,"openfl.display.Sprite.get_graphics","openfl/display/Sprite.hx",210,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	if ((tmp1)){
		HX_STACK_LINE(214)
		::openfl::display::Graphics tmp2 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		this->__graphics = tmp2;
		HX_STACK_LINE(215)
		::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		tmp3->__owner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(219)
	::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(buttonMode,"buttonMode");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonMode,"buttonMode");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp == hx::paccAlways ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(Sprite_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Sprite","\xef","\xfb","\xd6","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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

} // end namespace openfl
} // end namespace display
