#include <hxcpp.h>

#ifndef INCLUDED_CanvasOBJ
#include <CanvasOBJ.h>
#endif
#ifndef INCLUDED_CharOBJ
#include <CharOBJ.h>
#endif
#ifndef INCLUDED_DefBTN
#include <DefBTN.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void CanvasOBJ_obj::__construct()
{
HX_STACK_FRAME("CanvasOBJ","new",0xbf00ca51,"CanvasOBJ.new","CanvasOBJ.hx",10,0x0698aa3f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->canvasLength = (int)0;
	HX_STACK_LINE(19)
	this->gubbPos = (int)0;
	HX_STACK_LINE(18)
	this->n = (int)0;
	HX_STACK_LINE(17)
	this->i = (int)0;
	HX_STACK_LINE(16)
	this->gubbIndex = (int)0;
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(27)
	::DefBTN _g = ::DefBTN_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->defBTN = _g;
	HX_STACK_LINE(28)
	this->defBTN->plusSprite->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->nyGubbe_dyn(),null(),null(),null());
	HX_STACK_LINE(29)
	this->defBTN->randomSprite->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->random_dyn(),null(),null(),null());
	HX_STACK_LINE(30)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	this->gubbArray = _g1;
	HX_STACK_LINE(31)
	this->addChild(this->defBTN);
}
;
	return null();
}

//CanvasOBJ_obj::~CanvasOBJ_obj() { }

Dynamic CanvasOBJ_obj::__CreateEmpty() { return  new CanvasOBJ_obj; }
hx::ObjectPtr< CanvasOBJ_obj > CanvasOBJ_obj::__new()
{  hx::ObjectPtr< CanvasOBJ_obj > result = new CanvasOBJ_obj();
	result->__construct();
	return result;}

Dynamic CanvasOBJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasOBJ_obj > result = new CanvasOBJ_obj();
	result->__construct();
	return result;}

Void CanvasOBJ_obj::nyGubbe( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CanvasOBJ","nyGubbe",0x7d2acf5d,"CanvasOBJ.nyGubbe","CanvasOBJ.hx",35,0x0698aa3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(36)
		::CharOBJ _g = ::CharOBJ_obj::__new(this->gubbIndex);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		this->_char = _g;
		HX_STACK_LINE(37)
		this->gubbArray->push(this->_char);
		HX_STACK_LINE(38)
		this->addChild(this->_char);
		HX_STACK_LINE(39)
		(this->gubbIndex)++;
		HX_STACK_LINE(41)
		this->gubbPosition();
		HX_STACK_LINE(43)
		this->_char->addEventListener(::openfl::_v2::events::Event_obj::REMOVED,this->removeGubbe_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasOBJ_obj,nyGubbe,(void))

Void CanvasOBJ_obj::gubbPosition( ){
{
		HX_STACK_FRAME("CanvasOBJ","gubbPosition",0xdbcb5226,"CanvasOBJ.gubbPosition","CanvasOBJ.hx",46,0x0698aa3f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->gubbPos = (int)0;
		HX_STACK_LINE(48)
		this->n = (int)0;
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			Array< ::Dynamic > _g1 = this->gubbArray;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				::CharOBJ i = _g1->__get(_g).StaticCast< ::CharOBJ >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(50)
				++(_g);
				HX_STACK_LINE(52)
				this->tempchar = this->gubbArray->__get(this->n).StaticCast< ::CharOBJ >();
				HX_STACK_LINE(53)
				this->tempchar->set_y(this->gubbPos);
				HX_STACK_LINE(54)
				hx::AddEq(this->gubbPos,(int)480);
				HX_STACK_LINE(55)
				this->defBTN->set_y((this->gubbPos + (int)20));
				HX_STACK_LINE(56)
				this->tempchar->gubbIndex = this->n;
				HX_STACK_LINE(57)
				(this->n)++;
			}
		}
		HX_STACK_LINE(60)
		if (((this->gubbArray->length == (int)0))){
			HX_STACK_LINE(62)
			this->defBTN->set_y((int)0);
		}
		HX_STACK_LINE(65)
		this->canvasLength = this->gubbPos;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasOBJ_obj,gubbPosition,(void))

Void CanvasOBJ_obj::removeGubbe( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("CanvasOBJ","removeGubbe",0x492c1944,"CanvasOBJ.removeGubbe","CanvasOBJ.hx",70,0x0698aa3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(71)
		Dynamic _g = e->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		this->gubbArray->remove(_g);
		HX_STACK_LINE(72)
		this->gubbPosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasOBJ_obj,removeGubbe,(void))

Void CanvasOBJ_obj::random( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CanvasOBJ","random",0xa1d034b2,"CanvasOBJ.random","CanvasOBJ.hx",77,0x0698aa3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(77)
		::haxe::Log_obj::trace(HX_CSTRING("Random pressed"),hx::SourceInfo(HX_CSTRING("CanvasOBJ.hx"),77,HX_CSTRING("CanvasOBJ"),HX_CSTRING("random")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasOBJ_obj,random,(void))


CanvasOBJ_obj::CanvasOBJ_obj()
{
}

void CanvasOBJ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasOBJ);
	HX_MARK_MEMBER_NAME(defBTN,"defBTN");
	HX_MARK_MEMBER_NAME(_char,"char");
	HX_MARK_MEMBER_NAME(tempchar,"tempchar");
	HX_MARK_MEMBER_NAME(gubbArray,"gubbArray");
	HX_MARK_MEMBER_NAME(gubbIndex,"gubbIndex");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(gubbPos,"gubbPos");
	HX_MARK_MEMBER_NAME(canvasLength,"canvasLength");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasOBJ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defBTN,"defBTN");
	HX_VISIT_MEMBER_NAME(_char,"char");
	HX_VISIT_MEMBER_NAME(tempchar,"tempchar");
	HX_VISIT_MEMBER_NAME(gubbArray,"gubbArray");
	HX_VISIT_MEMBER_NAME(gubbIndex,"gubbIndex");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(gubbPos,"gubbPos");
	HX_VISIT_MEMBER_NAME(canvasLength,"canvasLength");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasOBJ_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return _char; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defBTN") ) { return defBTN; }
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gubbPos") ) { return gubbPos; }
		if (HX_FIELD_EQ(inName,"nyGubbe") ) { return nyGubbe_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempchar") ) { return tempchar; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gubbArray") ) { return gubbArray; }
		if (HX_FIELD_EQ(inName,"gubbIndex") ) { return gubbIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeGubbe") ) { return removeGubbe_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canvasLength") ) { return canvasLength; }
		if (HX_FIELD_EQ(inName,"gubbPosition") ) { return gubbPosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasOBJ_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _char=inValue.Cast< ::CharOBJ >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defBTN") ) { defBTN=inValue.Cast< ::DefBTN >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gubbPos") ) { gubbPos=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tempchar") ) { tempchar=inValue.Cast< ::CharOBJ >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gubbArray") ) { gubbArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gubbIndex") ) { gubbIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canvasLength") ) { canvasLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasOBJ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defBTN"));
	outFields->push(HX_CSTRING("char"));
	outFields->push(HX_CSTRING("tempchar"));
	outFields->push(HX_CSTRING("gubbArray"));
	outFields->push(HX_CSTRING("gubbIndex"));
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("n"));
	outFields->push(HX_CSTRING("gubbPos"));
	outFields->push(HX_CSTRING("canvasLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::DefBTN*/ ,(int)offsetof(CanvasOBJ_obj,defBTN),HX_CSTRING("defBTN")},
	{hx::fsObject /*::CharOBJ*/ ,(int)offsetof(CanvasOBJ_obj,_char),HX_CSTRING("char")},
	{hx::fsObject /*::CharOBJ*/ ,(int)offsetof(CanvasOBJ_obj,tempchar),HX_CSTRING("tempchar")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CanvasOBJ_obj,gubbArray),HX_CSTRING("gubbArray")},
	{hx::fsInt,(int)offsetof(CanvasOBJ_obj,gubbIndex),HX_CSTRING("gubbIndex")},
	{hx::fsInt,(int)offsetof(CanvasOBJ_obj,i),HX_CSTRING("i")},
	{hx::fsInt,(int)offsetof(CanvasOBJ_obj,n),HX_CSTRING("n")},
	{hx::fsInt,(int)offsetof(CanvasOBJ_obj,gubbPos),HX_CSTRING("gubbPos")},
	{hx::fsInt,(int)offsetof(CanvasOBJ_obj,canvasLength),HX_CSTRING("canvasLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("defBTN"),
	HX_CSTRING("char"),
	HX_CSTRING("tempchar"),
	HX_CSTRING("gubbArray"),
	HX_CSTRING("gubbIndex"),
	HX_CSTRING("i"),
	HX_CSTRING("n"),
	HX_CSTRING("gubbPos"),
	HX_CSTRING("canvasLength"),
	HX_CSTRING("nyGubbe"),
	HX_CSTRING("gubbPosition"),
	HX_CSTRING("removeGubbe"),
	HX_CSTRING("random"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasOBJ_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasOBJ_obj::__mClass,"__mClass");
};

#endif

Class CanvasOBJ_obj::__mClass;

void CanvasOBJ_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CanvasOBJ"), hx::TCanCast< CanvasOBJ_obj> ,sStaticFields,sMemberFields,
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

void CanvasOBJ_obj::__boot()
{
}

