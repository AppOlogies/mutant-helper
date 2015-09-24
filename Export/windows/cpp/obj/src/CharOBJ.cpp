#include <hxcpp.h>

#ifndef INCLUDED_CharOBJ
#include <CharOBJ.h>
#endif
#ifndef INCLUDED_CharPlusOBJ
#include <CharPlusOBJ.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif

Void CharOBJ_obj::__construct(int index)
{
HX_STACK_FRAME("CharOBJ","new",0x31766413,"CharOBJ.new","CharOBJ.hx",15,0xfdecfebd)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
{
	HX_STACK_LINE(33)
	this->kyla = (int)0;
	HX_STACK_LINE(32)
	this->styrka = (int)0;
	HX_STACK_LINE(20)
	this->numbersXcord = (int)0;
	HX_STACK_LINE(19)
	this->plusXcord = (int)0;
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(38)
	::openfl::text::TextFormat tmp = ::openfl::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->textFormat = tmp;
	HX_STACK_LINE(39)
	::openfl::text::TextFormat tmp1 = this->textFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	tmp1->font = HX_HCSTRING("assets/Nootype.otf","\x0f","\x18","\xde","\x66");
	HX_STACK_LINE(40)
	::openfl::text::TextFormat tmp2 = this->textFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	tmp2->size = (int)60;
	HX_STACK_LINE(41)
	::openfl::text::TextFormat tmp3 = this->textFormat;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	tmp3->color = (int)1244694;
	HX_STACK_LINE(43)
	::openfl::display::BitmapData tmp4 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/ram.png","\x4d","\x41","\xee","\x0c"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	::openfl::display::Bitmap tmp5 = ::openfl::display::Bitmap_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	this->ram = tmp5;
	HX_STACK_LINE(44)
	::openfl::display::Bitmap tmp6 = this->ram;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	this->addChild(tmp6);
	HX_STACK_LINE(45)
	this->plusArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(47)
	::openfl::text::TextField tmp7 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(47)
	::openfl::text::TextField styrkaField = tmp7;		HX_STACK_VAR(styrkaField,"styrkaField");
	HX_STACK_LINE(48)
	::openfl::text::TextFormat tmp8 = this->textFormat;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	styrkaField->set_defaultTextFormat(tmp8);
	HX_STACK_LINE(49)
	styrkaField->set_x((int)75);
	HX_STACK_LINE(50)
	styrkaField->set_y((int)150);
	HX_STACK_LINE(51)
	int tmp9 = this->styrka;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(51)
	styrkaField->set_text(tmp10);
	HX_STACK_LINE(52)
	::openfl::text::TextField tmp11 = styrkaField;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(52)
	this->addChild(tmp11);
	HX_STACK_LINE(54)
	::openfl::text::TextField tmp12 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	::openfl::text::TextField kylaField = tmp12;		HX_STACK_VAR(kylaField,"kylaField");
	HX_STACK_LINE(55)
	::openfl::text::TextFormat tmp13 = this->textFormat;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(55)
	kylaField->set_defaultTextFormat(tmp13);
	HX_STACK_LINE(56)
	kylaField->set_x((int)150);
	HX_STACK_LINE(57)
	kylaField->set_y((int)150);
	HX_STACK_LINE(58)
	int tmp14 = this->styrka;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(58)
	::String tmp15 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(58)
	kylaField->set_text(tmp15);
	HX_STACK_LINE(59)
	::openfl::text::TextField tmp16 = kylaField;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(59)
	this->addChild(tmp16);
	HX_STACK_LINE(61)
	::openfl::text::TextField tmp17 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(61)
	::openfl::text::TextField skarpaField = tmp17;		HX_STACK_VAR(skarpaField,"skarpaField");
	HX_STACK_LINE(62)
	::openfl::text::TextFormat tmp18 = this->textFormat;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(62)
	skarpaField->set_defaultTextFormat(tmp18);
	HX_STACK_LINE(63)
	skarpaField->set_x((int)225);
	HX_STACK_LINE(64)
	skarpaField->set_y((int)150);
	HX_STACK_LINE(65)
	int tmp19 = this->styrka;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(65)
	::String tmp20 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(65)
	skarpaField->set_text(tmp20);
	HX_STACK_LINE(66)
	::openfl::text::TextField tmp21 = skarpaField;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(66)
	this->addChild(tmp21);
	HX_STACK_LINE(68)
	::openfl::text::TextField tmp22 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(68)
	::openfl::text::TextField kanslaField = tmp22;		HX_STACK_VAR(kanslaField,"kanslaField");
	HX_STACK_LINE(69)
	::openfl::text::TextFormat tmp23 = this->textFormat;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(69)
	kanslaField->set_defaultTextFormat(tmp23);
	HX_STACK_LINE(70)
	kanslaField->set_x((int)300);
	HX_STACK_LINE(71)
	kanslaField->set_y((int)150);
	HX_STACK_LINE(72)
	int tmp24 = this->styrka;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(72)
	::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(72)
	kanslaField->set_text(tmp25);
	HX_STACK_LINE(73)
	::openfl::text::TextField tmp26 = kanslaField;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(73)
	this->addChild(tmp26);
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			bool tmp27 = (_g < (int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(75)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(75)
			if ((tmp28)){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			int tmp29 = (_g)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(75)
			int i = tmp29;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(77)
			::CharPlusOBJ tmp30 = ::CharPlusOBJ_obj::__new(i);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(77)
			this->plus = tmp30;
			HX_STACK_LINE(78)
			::CharPlusOBJ tmp31 = this->plus;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(78)
			int tmp32 = this->plusXcord;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(78)
			int tmp33 = (tmp32 + (int)70);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(78)
			tmp31->set_x(tmp33);
			HX_STACK_LINE(79)
			hx::AddEq(this->plusXcord,(int)155);
			HX_STACK_LINE(80)
			::CharPlusOBJ tmp34 = this->plus;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(80)
			tmp34->set_y((int)100);
			HX_STACK_LINE(81)
			int tmp35 = i;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(81)
			::CharPlusOBJ tmp36 = this->plus;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(81)
			this->plusArray->insert(tmp35,tmp36);
			HX_STACK_LINE(82)
			::CharPlusOBJ tmp37 = this->plus;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(82)
			this->addChild(tmp37);
		}
	}
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp27 = (_g < (int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(84)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(84)
			if ((tmp28)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			int tmp29 = (_g)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(84)
			int i = tmp29;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(86)
			::CharPlusOBJ tmp30 = this->plusArray->__get(i).StaticCast< ::CharPlusOBJ >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(86)
			this->plusBTN = tmp30;
			HX_STACK_LINE(87)
			::CharPlusOBJ tmp31 = this->plusBTN;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(87)
			::String tmp32 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(87)
			Dynamic tmp33 = this->addValue_dyn();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(87)
			tmp31->addEventListener(tmp32,tmp33,null(),null(),null());
		}
	}
}
;
	return null();
}

//CharOBJ_obj::~CharOBJ_obj() { }

Dynamic CharOBJ_obj::__CreateEmpty() { return  new CharOBJ_obj; }
hx::ObjectPtr< CharOBJ_obj > CharOBJ_obj::__new(int index)
{  hx::ObjectPtr< CharOBJ_obj > _result_ = new CharOBJ_obj();
	_result_->__construct(index);
	return _result_;}

Dynamic CharOBJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CharOBJ_obj > _result_ = new CharOBJ_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CharOBJ_obj::addValue( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","addValue",0x269fc8fd,"CharOBJ.addValue","CharOBJ.hx",93,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(94)
		int id = e->currentTarget->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(95)
		int tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("CharOBJ.hx","\xbd","\xfe","\xec","\xfd"),95,HX_HCSTRING("CharOBJ","\xa1","\x5e","\xb0","\x9c"),HX_HCSTRING("addValue","\x90","\xa5","\x15","\xab"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(96)
		(this->styrka)++;
		HX_STACK_LINE(97)
		int tmp2 = this->styrka;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("CharOBJ.hx","\xbd","\xfe","\xec","\xfd"),97,HX_HCSTRING("CharOBJ","\xa1","\x5e","\xb0","\x9c"),HX_HCSTRING("addValue","\x90","\xa5","\x15","\xab"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(98)
		::openfl::text::TextField tmp4 = this->styrkaField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		int tmp5 = this->styrka;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		tmp4->set_text(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,addValue,(void))


CharOBJ_obj::CharOBJ_obj()
{
}

void CharOBJ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharOBJ);
	HX_MARK_MEMBER_NAME(ram,"ram");
	HX_MARK_MEMBER_NAME(plus,"plus");
	HX_MARK_MEMBER_NAME(plusXcord,"plusXcord");
	HX_MARK_MEMBER_NAME(numbersXcord,"numbersXcord");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(plusArray,"plusArray");
	HX_MARK_MEMBER_NAME(styrkaField,"styrkaField");
	HX_MARK_MEMBER_NAME(kylaField,"kylaField");
	HX_MARK_MEMBER_NAME(skarpaField,"skarpaField");
	HX_MARK_MEMBER_NAME(kanslaField,"kanslaField");
	HX_MARK_MEMBER_NAME(plusBTN,"plusBTN");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(tempObj,"tempObj");
	HX_MARK_MEMBER_NAME(styrka,"styrka");
	HX_MARK_MEMBER_NAME(kyla,"kyla");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharOBJ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ram,"ram");
	HX_VISIT_MEMBER_NAME(plus,"plus");
	HX_VISIT_MEMBER_NAME(plusXcord,"plusXcord");
	HX_VISIT_MEMBER_NAME(numbersXcord,"numbersXcord");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(plusArray,"plusArray");
	HX_VISIT_MEMBER_NAME(styrkaField,"styrkaField");
	HX_VISIT_MEMBER_NAME(kylaField,"kylaField");
	HX_VISIT_MEMBER_NAME(skarpaField,"skarpaField");
	HX_VISIT_MEMBER_NAME(kanslaField,"kanslaField");
	HX_VISIT_MEMBER_NAME(plusBTN,"plusBTN");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(tempObj,"tempObj");
	HX_VISIT_MEMBER_NAME(styrka,"styrka");
	HX_VISIT_MEMBER_NAME(kyla,"kyla");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CharOBJ_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ram") ) { return ram; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plus") ) { return plus; }
		if (HX_FIELD_EQ(inName,"kyla") ) { return kyla; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"styrka") ) { return styrka; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { return plusBTN; }
		if (HX_FIELD_EQ(inName,"tempObj") ) { return tempObj; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addValue") ) { return addValue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"plusXcord") ) { return plusXcord; }
		if (HX_FIELD_EQ(inName,"plusArray") ) { return plusArray; }
		if (HX_FIELD_EQ(inName,"kylaField") ) { return kylaField; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styrkaField") ) { return styrkaField; }
		if (HX_FIELD_EQ(inName,"skarpaField") ) { return skarpaField; }
		if (HX_FIELD_EQ(inName,"kanslaField") ) { return kanslaField; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numbersXcord") ) { return numbersXcord; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CharOBJ_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ram") ) { ram=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plus") ) { plus=inValue.Cast< ::CharPlusOBJ >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kyla") ) { kyla=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"styrka") ) { styrka=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { plusBTN=inValue.Cast< ::CharPlusOBJ >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempObj") ) { tempObj=inValue.Cast< ::CharPlusOBJ >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"plusXcord") ) { plusXcord=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plusArray") ) { plusArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kylaField") ) { kylaField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styrkaField") ) { styrkaField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skarpaField") ) { skarpaField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kanslaField") ) { kanslaField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numbersXcord") ) { numbersXcord=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CharOBJ_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CharOBJ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ram","\xde","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"));
	outFields->push(HX_HCSTRING("plusXcord","\x1c","\xa4","\x47","\x54"));
	outFields->push(HX_HCSTRING("numbersXcord","\xec","\x8b","\x8f","\xc3"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("plusArray","\xdf","\xb7","\xfc","\x1f"));
	outFields->push(HX_HCSTRING("styrkaField","\xca","\x99","\x11","\xf0"));
	outFields->push(HX_HCSTRING("kylaField","\x17","\xf2","\x2b","\x1b"));
	outFields->push(HX_HCSTRING("skarpaField","\xa0","\xdc","\xbc","\x36"));
	outFields->push(HX_HCSTRING("kanslaField","\x0a","\xc0","\xff","\xf5"));
	outFields->push(HX_HCSTRING("plusBTN","\x22","\xb3","\x06","\x0a"));
	outFields->push(HX_HCSTRING("textFormat","\xc4","\x0f","\x7f","\x34"));
	outFields->push(HX_HCSTRING("tempObj","\x43","\xa9","\xb6","\x46"));
	outFields->push(HX_HCSTRING("styrka","\xd0","\x78","\xd7","\x15"));
	outFields->push(HX_HCSTRING("kyla","\xa3","\x03","\x16","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,ram),HX_HCSTRING("ram","\xde","\xd5","\x56","\x00")},
	{hx::fsObject /*::CharPlusOBJ*/ ,(int)offsetof(CharOBJ_obj,plus),HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,plusXcord),HX_HCSTRING("plusXcord","\x1c","\xa4","\x47","\x54")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,numbersXcord),HX_HCSTRING("numbersXcord","\xec","\x8b","\x8f","\xc3")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CharOBJ_obj,plusArray),HX_HCSTRING("plusArray","\xdf","\xb7","\xfc","\x1f")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(CharOBJ_obj,styrkaField),HX_HCSTRING("styrkaField","\xca","\x99","\x11","\xf0")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(CharOBJ_obj,kylaField),HX_HCSTRING("kylaField","\x17","\xf2","\x2b","\x1b")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(CharOBJ_obj,skarpaField),HX_HCSTRING("skarpaField","\xa0","\xdc","\xbc","\x36")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(CharOBJ_obj,kanslaField),HX_HCSTRING("kanslaField","\x0a","\xc0","\xff","\xf5")},
	{hx::fsObject /*::CharPlusOBJ*/ ,(int)offsetof(CharOBJ_obj,plusBTN),HX_HCSTRING("plusBTN","\x22","\xb3","\x06","\x0a")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(CharOBJ_obj,textFormat),HX_HCSTRING("textFormat","\xc4","\x0f","\x7f","\x34")},
	{hx::fsObject /*::CharPlusOBJ*/ ,(int)offsetof(CharOBJ_obj,tempObj),HX_HCSTRING("tempObj","\x43","\xa9","\xb6","\x46")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,styrka),HX_HCSTRING("styrka","\xd0","\x78","\xd7","\x15")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,kyla),HX_HCSTRING("kyla","\xa3","\x03","\x16","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ram","\xde","\xd5","\x56","\x00"),
	HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"),
	HX_HCSTRING("plusXcord","\x1c","\xa4","\x47","\x54"),
	HX_HCSTRING("numbersXcord","\xec","\x8b","\x8f","\xc3"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("plusArray","\xdf","\xb7","\xfc","\x1f"),
	HX_HCSTRING("styrkaField","\xca","\x99","\x11","\xf0"),
	HX_HCSTRING("kylaField","\x17","\xf2","\x2b","\x1b"),
	HX_HCSTRING("skarpaField","\xa0","\xdc","\xbc","\x36"),
	HX_HCSTRING("kanslaField","\x0a","\xc0","\xff","\xf5"),
	HX_HCSTRING("plusBTN","\x22","\xb3","\x06","\x0a"),
	HX_HCSTRING("textFormat","\xc4","\x0f","\x7f","\x34"),
	HX_HCSTRING("tempObj","\x43","\xa9","\xb6","\x46"),
	HX_HCSTRING("styrka","\xd0","\x78","\xd7","\x15"),
	HX_HCSTRING("kyla","\xa3","\x03","\x16","\x47"),
	HX_HCSTRING("addValue","\x90","\xa5","\x15","\xab"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharOBJ_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharOBJ_obj::__mClass,"__mClass");
};

#endif

hx::Class CharOBJ_obj::__mClass;

void CharOBJ_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CharOBJ","\xa1","\x5e","\xb0","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CharOBJ_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CharOBJ_obj >;
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

