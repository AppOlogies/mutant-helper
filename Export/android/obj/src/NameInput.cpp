#include <hxcpp.h>

#ifndef INCLUDED_NameInput
#include <NameInput.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif

Void NameInput_obj::__construct(::String namestring)
{
HX_STACK_FRAME("NameInput","new",0x8323ce11,"NameInput.new","NameInput.hx",15,0x95d35e7f)
HX_STACK_THIS(this)
HX_STACK_ARG(namestring,"namestring")
{
	HX_STACK_LINE(20)
	this->nameField2 = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(30)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->textFormat = _g;
	HX_STACK_LINE(31)
	this->textFormat->font = HX_CSTRING("assets/Nootype.otf");
	HX_STACK_LINE(32)
	this->textFormat->size = (int)60;
	HX_STACK_LINE(33)
	this->textFormat->color = (int)0;
	HX_STACK_LINE(36)
	::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/nameClass_BG.png"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(36)
	::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(36)
	this->nameinputBG = _g2;
	HX_STACK_LINE(37)
	this->addChild(this->nameinputBG);
	HX_STACK_LINE(39)
	this->nameField2->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(40)
	this->nameField2->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(41)
	this->nameField2->set_text(namestring);
	HX_STACK_LINE(42)
	this->nameField2->set_width((int)350);
	HX_STACK_LINE(43)
	this->nameField2->set_height((int)70);
	HX_STACK_LINE(44)
	this->nameField2->set_x((int)70);
	HX_STACK_LINE(45)
	this->nameField2->set_y((int)65);
	HX_STACK_LINE(46)
	this->nameField2->set_selectable(true);
	HX_STACK_LINE(47)
	this->nameField2->set_type(::openfl::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(48)
	this->nameField2->set_maxChars((int)7);
	HX_STACK_LINE(49)
	this->nameField2->addEventListener(::openfl::_v2::events::Event_obj::ADDED,this->added_dyn(),null(),null(),null());
	HX_STACK_LINE(50)
	this->nameField2->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->textclick_dyn(),null(),null(),null());
	HX_STACK_LINE(52)
	this->nameField2->requestSoftKeyboard_dyn();
	HX_STACK_LINE(53)
	this->addChild(this->nameField2);
}
;
	return null();
}

//NameInput_obj::~NameInput_obj() { }

Dynamic NameInput_obj::__CreateEmpty() { return  new NameInput_obj; }
hx::ObjectPtr< NameInput_obj > NameInput_obj::__new(::String namestring)
{  hx::ObjectPtr< NameInput_obj > result = new NameInput_obj();
	result->__construct(namestring);
	return result;}

Dynamic NameInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NameInput_obj > result = new NameInput_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NameInput_obj::added( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("NameInput","added",0xf15360b1,"NameInput.added","NameInput.hx",63,0x95d35e7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(65)
		::String _g = this->nameField2->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		if (((_g == HX_CSTRING("Namn")))){
			HX_STACK_LINE(67)
			this->nameField2->set_text(HX_CSTRING("          "));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NameInput_obj,added,(void))

Void NameInput_obj::textclick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("NameInput","textclick",0xcce174ec,"NameInput.textclick","NameInput.hx",74,0x95d35e7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(75)
		::String _g = this->nameField2->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		if (((_g == HX_CSTRING("          ")))){
			HX_STACK_LINE(77)
			this->nameField2->set_text(HX_CSTRING(""));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NameInput_obj,textclick,(void))


NameInput_obj::NameInput_obj()
{
}

void NameInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NameInput);
	HX_MARK_MEMBER_NAME(nameinputBG,"nameinputBG");
	HX_MARK_MEMBER_NAME(nameField2,"nameField2");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NameInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nameinputBG,"nameinputBG");
	HX_VISIT_MEMBER_NAME(nameField2,"nameField2");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NameInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textclick") ) { return textclick_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameField2") ) { return nameField2; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameinputBG") ) { return nameinputBG; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NameInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nameField2") ) { nameField2=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameinputBG") ) { nameinputBG=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NameInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nameinputBG"));
	outFields->push(HX_CSTRING("nameField2"));
	outFields->push(HX_CSTRING("textFormat"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(NameInput_obj,nameinputBG),HX_CSTRING("nameinputBG")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(NameInput_obj,nameField2),HX_CSTRING("nameField2")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(NameInput_obj,textFormat),HX_CSTRING("textFormat")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nameinputBG"),
	HX_CSTRING("nameField2"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("added"),
	HX_CSTRING("textclick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NameInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NameInput_obj::__mClass,"__mClass");
};

#endif

Class NameInput_obj::__mClass;

void NameInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("NameInput"), hx::TCanCast< NameInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void NameInput_obj::__boot()
{
}

