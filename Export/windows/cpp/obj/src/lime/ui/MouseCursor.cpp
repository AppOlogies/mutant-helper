#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
namespace lime{
namespace ui{

::lime::ui::MouseCursor MouseCursor_obj::ARROW;

::lime::ui::MouseCursor MouseCursor_obj::CROSSHAIR;

::lime::ui::MouseCursor MouseCursor_obj::CUSTOM;

::lime::ui::MouseCursor MouseCursor_obj::DEFAULT;

::lime::ui::MouseCursor MouseCursor_obj::MOVE;

::lime::ui::MouseCursor MouseCursor_obj::POINTER;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NESW;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NS;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NWSE;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_WE;

::lime::ui::MouseCursor MouseCursor_obj::TEXT;

::lime::ui::MouseCursor MouseCursor_obj::WAIT;

::lime::ui::MouseCursor MouseCursor_obj::WAIT_ARROW;

HX_DEFINE_CREATE_ENUM(MouseCursor_obj)

int MouseCursor_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ARROW","\xa9","\xb1","\x7d","\xa3")) return 0;
	if (inName==HX_HCSTRING("CROSSHAIR","\x82","\xb6","\x20","\x86")) return 1;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 12;
	if (inName==HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b")) return 2;
	if (inName==HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33")) return 3;
	if (inName==HX_HCSTRING("POINTER","\x9d","\x94","\xf5","\xd0")) return 4;
	if (inName==HX_HCSTRING("RESIZE_NESW","\x06","\x4a","\xf8","\xea")) return 5;
	if (inName==HX_HCSTRING("RESIZE_NS","\xf0","\x84","\x63","\xa7")) return 6;
	if (inName==HX_HCSTRING("RESIZE_NWSE","\x86","\xf2","\x05","\xeb")) return 7;
	if (inName==HX_HCSTRING("RESIZE_WE","\xb9","\x8c","\x63","\xa7")) return 8;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return 9;
	if (inName==HX_HCSTRING("WAIT","\x75","\x22","\xb3","\x39")) return 10;
	if (inName==HX_HCSTRING("WAIT_ARROW","\x1f","\xe1","\x6c","\x7c")) return 11;
	return super::__FindIndex(inName);
}

int MouseCursor_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ARROW","\xa9","\xb1","\x7d","\xa3")) return 0;
	if (inName==HX_HCSTRING("CROSSHAIR","\x82","\xb6","\x20","\x86")) return 0;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 0;
	if (inName==HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b")) return 0;
	if (inName==HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33")) return 0;
	if (inName==HX_HCSTRING("POINTER","\x9d","\x94","\xf5","\xd0")) return 0;
	if (inName==HX_HCSTRING("RESIZE_NESW","\x06","\x4a","\xf8","\xea")) return 0;
	if (inName==HX_HCSTRING("RESIZE_NS","\xf0","\x84","\x63","\xa7")) return 0;
	if (inName==HX_HCSTRING("RESIZE_NWSE","\x86","\xf2","\x05","\xeb")) return 0;
	if (inName==HX_HCSTRING("RESIZE_WE","\xb9","\x8c","\x63","\xa7")) return 0;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return 0;
	if (inName==HX_HCSTRING("WAIT","\x75","\x22","\xb3","\x39")) return 0;
	if (inName==HX_HCSTRING("WAIT_ARROW","\x1f","\xe1","\x6c","\x7c")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MouseCursor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ARROW","\xa9","\xb1","\x7d","\xa3")) return ARROW;
	if (inName==HX_HCSTRING("CROSSHAIR","\x82","\xb6","\x20","\x86")) return CROSSHAIR;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return CUSTOM;
	if (inName==HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b")) return DEFAULT;
	if (inName==HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33")) return MOVE;
	if (inName==HX_HCSTRING("POINTER","\x9d","\x94","\xf5","\xd0")) return POINTER;
	if (inName==HX_HCSTRING("RESIZE_NESW","\x06","\x4a","\xf8","\xea")) return RESIZE_NESW;
	if (inName==HX_HCSTRING("RESIZE_NS","\xf0","\x84","\x63","\xa7")) return RESIZE_NS;
	if (inName==HX_HCSTRING("RESIZE_NWSE","\x86","\xf2","\x05","\xeb")) return RESIZE_NWSE;
	if (inName==HX_HCSTRING("RESIZE_WE","\xb9","\x8c","\x63","\xa7")) return RESIZE_WE;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return TEXT;
	if (inName==HX_HCSTRING("WAIT","\x75","\x22","\xb3","\x39")) return WAIT;
	if (inName==HX_HCSTRING("WAIT_ARROW","\x1f","\xe1","\x6c","\x7c")) return WAIT_ARROW;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ARROW","\xa9","\xb1","\x7d","\xa3"),
	HX_HCSTRING("CROSSHAIR","\x82","\xb6","\x20","\x86"),
	HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b"),
	HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33"),
	HX_HCSTRING("POINTER","\x9d","\x94","\xf5","\xd0"),
	HX_HCSTRING("RESIZE_NESW","\x06","\x4a","\xf8","\xea"),
	HX_HCSTRING("RESIZE_NS","\xf0","\x84","\x63","\xa7"),
	HX_HCSTRING("RESIZE_NWSE","\x86","\xf2","\x05","\xeb"),
	HX_HCSTRING("RESIZE_WE","\xb9","\x8c","\x63","\xa7"),
	HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),
	HX_HCSTRING("WAIT","\x75","\x22","\xb3","\x39"),
	HX_HCSTRING("WAIT_ARROW","\x1f","\xe1","\x6c","\x7c"),
	HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseCursor_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::CROSSHAIR,"CROSSHAIR");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::CUSTOM,"CUSTOM");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::POINTER,"POINTER");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NESW,"RESIZE_NESW");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NS,"RESIZE_NS");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_WE,"RESIZE_WE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::WAIT,"WAIT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::WAIT_ARROW,"WAIT_ARROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::CROSSHAIR,"CROSSHAIR");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::CUSTOM,"CUSTOM");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::POINTER,"POINTER");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NESW,"RESIZE_NESW");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NS,"RESIZE_NS");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_WE,"RESIZE_WE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::WAIT,"WAIT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::WAIT_ARROW,"WAIT_ARROW");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class MouseCursor_obj::__mClass;

Dynamic __Create_MouseCursor_obj() { return new MouseCursor_obj; }

void MouseCursor_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.ui.MouseCursor","\xda","\x7e","\xbc","\x47"), hx::TCanCast< MouseCursor_obj >,sStaticFields,sMemberFields,
	&__Create_MouseCursor_obj, &__Create,
	&super::__SGetClass(), &CreateMouseCursor_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MouseCursor_obj::__boot()
{
hx::Static(ARROW) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("ARROW","\xa9","\xb1","\x7d","\xa3"),0);
hx::Static(CROSSHAIR) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("CROSSHAIR","\x82","\xb6","\x20","\x86"),1);
hx::Static(CUSTOM) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),12);
hx::Static(DEFAULT) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b"),2);
hx::Static(MOVE) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33"),3);
hx::Static(POINTER) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("POINTER","\x9d","\x94","\xf5","\xd0"),4);
hx::Static(RESIZE_NESW) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_NESW","\x06","\x4a","\xf8","\xea"),5);
hx::Static(RESIZE_NS) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_NS","\xf0","\x84","\x63","\xa7"),6);
hx::Static(RESIZE_NWSE) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_NWSE","\x86","\xf2","\x05","\xeb"),7);
hx::Static(RESIZE_WE) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_WE","\xb9","\x8c","\x63","\xa7"),8);
hx::Static(TEXT) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),9);
hx::Static(WAIT) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("WAIT","\x75","\x22","\xb3","\x39"),10);
hx::Static(WAIT_ARROW) = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("WAIT_ARROW","\x1f","\xe1","\x6c","\x7c"),11);
}


} // end namespace lime
} // end namespace ui
