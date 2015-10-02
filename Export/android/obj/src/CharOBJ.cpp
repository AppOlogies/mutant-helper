#include <hxcpp.h>

#ifndef INCLUDED_CharOBJ
#include <CharOBJ.h>
#endif
#ifndef INCLUDED_CharOBJOperator
#include <CharOBJOperator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void CharOBJ_obj::__construct(int index)
{
HX_STACK_FRAME("CharOBJ","new",0x31766413,"CharOBJ.new","CharOBJ.hx",17,0xfdecfebd)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
{
	HX_STACK_LINE(44)
	this->textButton = ::openfl::_v2::display::Sprite_obj::__new();
	HX_STACK_LINE(36)
	this->nameField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(35)
	this->kanslaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(34)
	this->skarpaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(33)
	this->kylaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(32)
	this->styrkaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(30)
	this->kansla = (int)0;
	HX_STACK_LINE(29)
	this->skarpa = (int)0;
	HX_STACK_LINE(28)
	this->kyla = (int)0;
	HX_STACK_LINE(27)
	this->styrka = (int)0;
	HX_STACK_LINE(23)
	this->minusXcord = (int)0;
	HX_STACK_LINE(22)
	this->plusXcord = (int)0;
	HX_STACK_LINE(52)
	super::__construct();
	HX_STACK_LINE(53)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	this->textFormat = _g;
	HX_STACK_LINE(54)
	this->textFormat->font = HX_CSTRING("assets/Nootype.otf");
	HX_STACK_LINE(55)
	this->textFormat->size = (int)60;
	HX_STACK_LINE(56)
	this->textFormat->color = (int)1244694;
	HX_STACK_LINE(58)
	this->gubbIndex = index;
	HX_STACK_LINE(60)
	::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/ram.png"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(60)
	::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(60)
	this->ram = _g2;
	HX_STACK_LINE(61)
	this->addChild(this->ram);
	HX_STACK_LINE(63)
	::openfl::_v2::display::Sprite _g3 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(63)
	this->closeBTN = _g3;
	HX_STACK_LINE(64)
	this->addChild(this->closeBTN);
	HX_STACK_LINE(65)
	::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/close_btn.png"),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(65)
	::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(65)
	this->closeBitmap = _g5;
	HX_STACK_LINE(66)
	this->closeBitmap->set_x((int)600);
	HX_STACK_LINE(67)
	this->closeBitmap->set_y((int)15);
	HX_STACK_LINE(68)
	this->closeBTN->addChild(this->closeBitmap);
	HX_STACK_LINE(70)
	this->closeBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->removeME_dyn(),null(),null(),null());
	HX_STACK_LINE(73)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(73)
	this->plusArray = _g6;
	HX_STACK_LINE(74)
	Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(74)
	this->minusArray = _g7;
	HX_STACK_LINE(76)
	this->styrkaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(77)
	this->styrkaField->set_x((int)70);
	HX_STACK_LINE(78)
	this->styrkaField->set_y((int)170);
	HX_STACK_LINE(79)
	this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
	HX_STACK_LINE(80)
	this->addChild(this->styrkaField);
	HX_STACK_LINE(82)
	this->kylaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(83)
	this->kylaField->set_x((int)230);
	HX_STACK_LINE(84)
	this->kylaField->set_y((int)170);
	HX_STACK_LINE(85)
	this->kylaField->set_text((HX_CSTRING("") + this->kyla));
	HX_STACK_LINE(86)
	this->addChild(this->kylaField);
	HX_STACK_LINE(88)
	this->skarpaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(89)
	this->skarpaField->set_x((int)380);
	HX_STACK_LINE(90)
	this->skarpaField->set_y((int)170);
	HX_STACK_LINE(91)
	this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
	HX_STACK_LINE(92)
	this->addChild(this->skarpaField);
	HX_STACK_LINE(94)
	this->kanslaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(95)
	this->kanslaField->set_x((int)530);
	HX_STACK_LINE(96)
	this->kanslaField->set_y((int)170);
	HX_STACK_LINE(97)
	this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
	HX_STACK_LINE(98)
	this->addChild(this->kanslaField);
	HX_STACK_LINE(100)
	this->nameField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(101)
	this->nameField->set_textColor((int)0);
	HX_STACK_LINE(102)
	this->nameField->set_autoSize(::openfl::text::TextFieldAutoSize_obj::CENTER);
	HX_STACK_LINE(103)
	this->nameField->set_text(HX_CSTRING("Namn"));
	HX_STACK_LINE(104)
	Float _g8 = this->nameField->get_width();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(104)
	Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(104)
	Float _g10 = ((int)330 - _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(104)
	this->nameField->set_x(_g10);
	HX_STACK_LINE(105)
	this->nameField->set_y((int)400);
	HX_STACK_LINE(106)
	this->nameField->set_selectable(true);
	HX_STACK_LINE(107)
	this->nameField->set_type(::openfl::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(108)
	this->addChild(this->nameField);
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			if ((!(((_g11 < (int)4))))){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(113)
			::CharOBJOperator _g111 = ::CharOBJOperator_obj::__new(i);		HX_STACK_VAR(_g111,"_g111");
			HX_STACK_LINE(113)
			this->plus = _g111;
			HX_STACK_LINE(114)
			this->plus->set_x((this->plusXcord + (int)70));
			HX_STACK_LINE(115)
			hx::AddEq(this->plusXcord,(int)155);
			HX_STACK_LINE(116)
			this->plus->set_y((int)100);
			HX_STACK_LINE(117)
			this->plusArray->insert(i,this->plus);
			HX_STACK_LINE(118)
			this->addChild(this->plus);
		}
	}
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			if ((!(((_g11 < (int)4))))){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(122)
			this->plusBTN = this->plusArray->__get(i).StaticCast< ::CharOBJOperator >();
			HX_STACK_LINE(123)
			this->plusBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->changeValue_dyn(),null(),null(),null());
		}
	}
	HX_STACK_LINE(125)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g11 = (int)4;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			if ((!(((_g11 < (int)8))))){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(128)
			::haxe::Log_obj::trace((HX_CSTRING("creating minus object: ") + i),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),128,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(129)
			::CharOBJOperator _g12 = ::CharOBJOperator_obj::__new(i);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(129)
			this->minus = _g12;
			HX_STACK_LINE(130)
			this->minus->set_x((this->minusXcord + (int)70));
			HX_STACK_LINE(131)
			hx::AddEq(this->minusXcord,(int)155);
			HX_STACK_LINE(132)
			this->minus->set_y((int)250);
			HX_STACK_LINE(133)
			::haxe::Log_obj::trace((HX_CSTRING("adding minus to array: ") + j),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),133,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(134)
			this->minusArray->insert(j,this->minus);
			HX_STACK_LINE(135)
			::haxe::Log_obj::trace(HX_CSTRING("added"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),135,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(136)
			this->addChild(this->minus);
			HX_STACK_LINE(137)
			(j)++;
			HX_STACK_LINE(138)
			::haxe::Log_obj::trace(HX_CSTRING("reached end of function"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),138,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
		}
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g11 < (int)4))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(142)
			::haxe::Log_obj::trace((HX_CSTRING("adding minus to array: ") + i),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),142,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(143)
			this->minusBTN = this->minusArray->__get(i).StaticCast< ::CharOBJOperator >();
			HX_STACK_LINE(144)
			this->minusBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->changeValue_dyn(),null(),null(),null());
		}
	}
}
;
	return null();
}

//CharOBJ_obj::~CharOBJ_obj() { }

Dynamic CharOBJ_obj::__CreateEmpty() { return  new CharOBJ_obj; }
hx::ObjectPtr< CharOBJ_obj > CharOBJ_obj::__new(int index)
{  hx::ObjectPtr< CharOBJ_obj > result = new CharOBJ_obj();
	result->__construct(index);
	return result;}

Dynamic CharOBJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CharOBJ_obj > result = new CharOBJ_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CharOBJ_obj::changeValue( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","changeValue",0x98b82694,"CharOBJ.changeValue","CharOBJ.hx",149,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(150)
		int id = e->get_currentTarget()->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(151)
		::haxe::Log_obj::trace(HX_CSTRING("button"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),151,HX_CSTRING("CharOBJ"),HX_CSTRING("changeValue")));
		HX_STACK_LINE(152)
		::haxe::Log_obj::trace(id,hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),152,HX_CSTRING("CharOBJ"),HX_CSTRING("changeValue")));
		HX_STACK_LINE(153)
		if (((bool((id == (int)0)) && bool((this->styrka < (int)10))))){
			HX_STACK_LINE(154)
			(this->styrka)++;
		}
		HX_STACK_LINE(155)
		this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
		HX_STACK_LINE(156)
		if (((bool((id == (int)1)) && bool((this->kyla < (int)10))))){
			HX_STACK_LINE(157)
			(this->kyla)++;
		}
		HX_STACK_LINE(158)
		this->kylaField->set_text((HX_CSTRING("") + this->kyla));
		HX_STACK_LINE(159)
		if (((bool((id == (int)2)) && bool((this->skarpa < (int)10))))){
			HX_STACK_LINE(160)
			(this->skarpa)++;
		}
		HX_STACK_LINE(161)
		this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
		HX_STACK_LINE(162)
		if (((bool((id == (int)3)) && bool((this->kansla < (int)10))))){
			HX_STACK_LINE(163)
			(this->kansla)++;
		}
		HX_STACK_LINE(164)
		this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
		HX_STACK_LINE(165)
		if (((bool((id == (int)4)) && bool((this->styrka > (int)0))))){
			HX_STACK_LINE(167)
			(this->styrka)--;
			HX_STACK_LINE(168)
			this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
			HX_STACK_LINE(169)
			if (((this->styrka == (int)0))){
				HX_STACK_LINE(171)
				this->breakChar();
			}
		}
		HX_STACK_LINE(174)
		if (((bool((id == (int)5)) && bool((this->kyla > (int)0))))){
			HX_STACK_LINE(176)
			(this->kyla)--;
			HX_STACK_LINE(177)
			this->kylaField->set_text((HX_CSTRING("") + this->kyla));
			HX_STACK_LINE(178)
			if (((this->kyla == (int)0))){
				HX_STACK_LINE(180)
				this->breakChar();
			}
		}
		HX_STACK_LINE(183)
		if (((bool((id == (int)6)) && bool((this->skarpa > (int)0))))){
			HX_STACK_LINE(185)
			(this->skarpa)--;
			HX_STACK_LINE(186)
			this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
			HX_STACK_LINE(187)
			if (((this->skarpa == (int)0))){
				HX_STACK_LINE(189)
				this->breakChar();
			}
		}
		HX_STACK_LINE(192)
		if (((bool((id == (int)7)) && bool((this->kansla > (int)0))))){
			HX_STACK_LINE(194)
			(this->kansla)--;
			HX_STACK_LINE(195)
			this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
			HX_STACK_LINE(196)
			if (((this->kansla == (int)0))){
				HX_STACK_LINE(198)
				this->breakChar();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,changeValue,(void))

Void CharOBJ_obj::breakChar( ){
{
		HX_STACK_FRAME("CharOBJ","breakChar",0xcf445728,"CharOBJ.breakChar","CharOBJ.hx",204,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->removeChild(this->styrkaField);
		HX_STACK_LINE(206)
		this->removeChild(this->kylaField);
		HX_STACK_LINE(207)
		this->removeChild(this->skarpaField);
		HX_STACK_LINE(208)
		this->removeChild(this->kanslaField);
		HX_STACK_LINE(209)
		::openfl::_v2::display::Sprite _g = this->getTextButton(HX_CSTRING("BRUTEN!"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		this->textButton = _g;
		HX_STACK_LINE(210)
		this->addChild(this->textButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CharOBJ_obj,breakChar,(void))

Void CharOBJ_obj::unbreakChar( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","unbreakChar",0xf8d0006f,"CharOBJ.unbreakChar","CharOBJ.hx",214,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(215)
		::haxe::Log_obj::trace(HX_CSTRING("unbreaking"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),215,HX_CSTRING("CharOBJ"),HX_CSTRING("unbreakChar")));
		HX_STACK_LINE(216)
		this->removeChild(this->textButton);
		HX_STACK_LINE(217)
		this->addChild(this->styrkaField);
		HX_STACK_LINE(218)
		this->addChild(this->kylaField);
		HX_STACK_LINE(219)
		this->addChild(this->skarpaField);
		HX_STACK_LINE(220)
		this->addChild(this->kanslaField);
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(221)
				this->addChild(this->minusArray->__get(i).StaticCast< ::CharOBJOperator >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,unbreakChar,(void))

::openfl::_v2::display::Sprite CharOBJ_obj::getTextButton( ::String label){
	HX_STACK_FRAME("CharOBJ","getTextButton",0xf0009028,"CharOBJ.getTextButton","CharOBJ.hx",225,0xfdecfebd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(label,"label")
	HX_STACK_LINE(226)
	::openfl::_v2::text::TextField txt = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(227)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("assets/Nootype.otf"),(int)120,(int)14881812,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(227)
	txt->set_defaultTextFormat(_g);
	HX_STACK_LINE(228)
	txt->set_text(label);
	HX_STACK_LINE(229)
	txt->set_x((int)65);
	HX_STACK_LINE(230)
	txt->set_y((int)150);
	HX_STACK_LINE(231)
	txt->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(232)
	::openfl::_v2::display::Sprite btn = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(btn,"btn");
	HX_STACK_LINE(233)
	btn->set_mouseChildren(false);
	HX_STACK_LINE(234)
	btn->addChild(txt);
	HX_STACK_LINE(235)
	btn->buttonMode = true;
	HX_STACK_LINE(236)
	btn->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->unbreakChar_dyn(),null(),null(),null());
	HX_STACK_LINE(237)
	return btn;
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,getTextButton,return )

Void CharOBJ_obj::removeME( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","removeME",0x28a59c09,"CharOBJ.removeME","CharOBJ.hx",243,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(243)
		this->get_parent()->removeChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,removeME,(void))


CharOBJ_obj::CharOBJ_obj()
{
}

void CharOBJ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharOBJ);
	HX_MARK_MEMBER_NAME(ram,"ram");
	HX_MARK_MEMBER_NAME(plus,"plus");
	HX_MARK_MEMBER_NAME(minus,"minus");
	HX_MARK_MEMBER_NAME(plusXcord,"plusXcord");
	HX_MARK_MEMBER_NAME(minusXcord,"minusXcord");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(plusArray,"plusArray");
	HX_MARK_MEMBER_NAME(minusArray,"minusArray");
	HX_MARK_MEMBER_NAME(styrka,"styrka");
	HX_MARK_MEMBER_NAME(kyla,"kyla");
	HX_MARK_MEMBER_NAME(skarpa,"skarpa");
	HX_MARK_MEMBER_NAME(kansla,"kansla");
	HX_MARK_MEMBER_NAME(styrkaField,"styrkaField");
	HX_MARK_MEMBER_NAME(kylaField,"kylaField");
	HX_MARK_MEMBER_NAME(skarpaField,"skarpaField");
	HX_MARK_MEMBER_NAME(kanslaField,"kanslaField");
	HX_MARK_MEMBER_NAME(nameField,"nameField");
	HX_MARK_MEMBER_NAME(plusBTN,"plusBTN");
	HX_MARK_MEMBER_NAME(minusBTN,"minusBTN");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(textButton,"textButton");
	HX_MARK_MEMBER_NAME(gubbIndex,"gubbIndex");
	HX_MARK_MEMBER_NAME(closeBTN,"closeBTN");
	HX_MARK_MEMBER_NAME(closeBitmap,"closeBitmap");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharOBJ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ram,"ram");
	HX_VISIT_MEMBER_NAME(plus,"plus");
	HX_VISIT_MEMBER_NAME(minus,"minus");
	HX_VISIT_MEMBER_NAME(plusXcord,"plusXcord");
	HX_VISIT_MEMBER_NAME(minusXcord,"minusXcord");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(plusArray,"plusArray");
	HX_VISIT_MEMBER_NAME(minusArray,"minusArray");
	HX_VISIT_MEMBER_NAME(styrka,"styrka");
	HX_VISIT_MEMBER_NAME(kyla,"kyla");
	HX_VISIT_MEMBER_NAME(skarpa,"skarpa");
	HX_VISIT_MEMBER_NAME(kansla,"kansla");
	HX_VISIT_MEMBER_NAME(styrkaField,"styrkaField");
	HX_VISIT_MEMBER_NAME(kylaField,"kylaField");
	HX_VISIT_MEMBER_NAME(skarpaField,"skarpaField");
	HX_VISIT_MEMBER_NAME(kanslaField,"kanslaField");
	HX_VISIT_MEMBER_NAME(nameField,"nameField");
	HX_VISIT_MEMBER_NAME(plusBTN,"plusBTN");
	HX_VISIT_MEMBER_NAME(minusBTN,"minusBTN");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(textButton,"textButton");
	HX_VISIT_MEMBER_NAME(gubbIndex,"gubbIndex");
	HX_VISIT_MEMBER_NAME(closeBTN,"closeBTN");
	HX_VISIT_MEMBER_NAME(closeBitmap,"closeBitmap");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CharOBJ_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 5:
		if (HX_FIELD_EQ(inName,"minus") ) { return minus; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"styrka") ) { return styrka; }
		if (HX_FIELD_EQ(inName,"skarpa") ) { return skarpa; }
		if (HX_FIELD_EQ(inName,"kansla") ) { return kansla; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { return plusBTN; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minusBTN") ) { return minusBTN; }
		if (HX_FIELD_EQ(inName,"closeBTN") ) { return closeBTN; }
		if (HX_FIELD_EQ(inName,"removeME") ) { return removeME_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"plusXcord") ) { return plusXcord; }
		if (HX_FIELD_EQ(inName,"plusArray") ) { return plusArray; }
		if (HX_FIELD_EQ(inName,"kylaField") ) { return kylaField; }
		if (HX_FIELD_EQ(inName,"nameField") ) { return nameField; }
		if (HX_FIELD_EQ(inName,"gubbIndex") ) { return gubbIndex; }
		if (HX_FIELD_EQ(inName,"breakChar") ) { return breakChar_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minusXcord") ) { return minusXcord; }
		if (HX_FIELD_EQ(inName,"minusArray") ) { return minusArray; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
		if (HX_FIELD_EQ(inName,"textButton") ) { return textButton; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styrkaField") ) { return styrkaField; }
		if (HX_FIELD_EQ(inName,"skarpaField") ) { return skarpaField; }
		if (HX_FIELD_EQ(inName,"kanslaField") ) { return kanslaField; }
		if (HX_FIELD_EQ(inName,"closeBitmap") ) { return closeBitmap; }
		if (HX_FIELD_EQ(inName,"changeValue") ) { return changeValue_dyn(); }
		if (HX_FIELD_EQ(inName,"unbreakChar") ) { return unbreakChar_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTextButton") ) { return getTextButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CharOBJ_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ram") ) { ram=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plus") ) { plus=inValue.Cast< ::CharOBJOperator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kyla") ) { kyla=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"minus") ) { minus=inValue.Cast< ::CharOBJOperator >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"styrka") ) { styrka=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skarpa") ) { skarpa=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kansla") ) { kansla=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"plusBTN") ) { plusBTN=inValue.Cast< ::CharOBJOperator >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minusBTN") ) { minusBTN=inValue.Cast< ::CharOBJOperator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeBTN") ) { closeBTN=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"plusXcord") ) { plusXcord=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plusArray") ) { plusArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kylaField") ) { kylaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameField") ) { nameField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gubbIndex") ) { gubbIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minusXcord") ) { minusXcord=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minusArray") ) { minusArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textButton") ) { textButton=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styrkaField") ) { styrkaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skarpaField") ) { skarpaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kanslaField") ) { kanslaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeBitmap") ) { closeBitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharOBJ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ram"));
	outFields->push(HX_CSTRING("plus"));
	outFields->push(HX_CSTRING("minus"));
	outFields->push(HX_CSTRING("plusXcord"));
	outFields->push(HX_CSTRING("minusXcord"));
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("plusArray"));
	outFields->push(HX_CSTRING("minusArray"));
	outFields->push(HX_CSTRING("styrka"));
	outFields->push(HX_CSTRING("kyla"));
	outFields->push(HX_CSTRING("skarpa"));
	outFields->push(HX_CSTRING("kansla"));
	outFields->push(HX_CSTRING("styrkaField"));
	outFields->push(HX_CSTRING("kylaField"));
	outFields->push(HX_CSTRING("skarpaField"));
	outFields->push(HX_CSTRING("kanslaField"));
	outFields->push(HX_CSTRING("nameField"));
	outFields->push(HX_CSTRING("plusBTN"));
	outFields->push(HX_CSTRING("minusBTN"));
	outFields->push(HX_CSTRING("textFormat"));
	outFields->push(HX_CSTRING("textButton"));
	outFields->push(HX_CSTRING("gubbIndex"));
	outFields->push(HX_CSTRING("closeBTN"));
	outFields->push(HX_CSTRING("closeBitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,ram),HX_CSTRING("ram")},
	{hx::fsObject /*::CharOBJOperator*/ ,(int)offsetof(CharOBJ_obj,plus),HX_CSTRING("plus")},
	{hx::fsObject /*::CharOBJOperator*/ ,(int)offsetof(CharOBJ_obj,minus),HX_CSTRING("minus")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,plusXcord),HX_CSTRING("plusXcord")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,minusXcord),HX_CSTRING("minusXcord")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,i),HX_CSTRING("i")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CharOBJ_obj,plusArray),HX_CSTRING("plusArray")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CharOBJ_obj,minusArray),HX_CSTRING("minusArray")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,styrka),HX_CSTRING("styrka")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,kyla),HX_CSTRING("kyla")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,skarpa),HX_CSTRING("skarpa")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,kansla),HX_CSTRING("kansla")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CharOBJ_obj,styrkaField),HX_CSTRING("styrkaField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CharOBJ_obj,kylaField),HX_CSTRING("kylaField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CharOBJ_obj,skarpaField),HX_CSTRING("skarpaField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CharOBJ_obj,kanslaField),HX_CSTRING("kanslaField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CharOBJ_obj,nameField),HX_CSTRING("nameField")},
	{hx::fsObject /*::CharOBJOperator*/ ,(int)offsetof(CharOBJ_obj,plusBTN),HX_CSTRING("plusBTN")},
	{hx::fsObject /*::CharOBJOperator*/ ,(int)offsetof(CharOBJ_obj,minusBTN),HX_CSTRING("minusBTN")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CharOBJ_obj,textFormat),HX_CSTRING("textFormat")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,textButton),HX_CSTRING("textButton")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,gubbIndex),HX_CSTRING("gubbIndex")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,closeBTN),HX_CSTRING("closeBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,closeBitmap),HX_CSTRING("closeBitmap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ram"),
	HX_CSTRING("plus"),
	HX_CSTRING("minus"),
	HX_CSTRING("plusXcord"),
	HX_CSTRING("minusXcord"),
	HX_CSTRING("i"),
	HX_CSTRING("plusArray"),
	HX_CSTRING("minusArray"),
	HX_CSTRING("styrka"),
	HX_CSTRING("kyla"),
	HX_CSTRING("skarpa"),
	HX_CSTRING("kansla"),
	HX_CSTRING("styrkaField"),
	HX_CSTRING("kylaField"),
	HX_CSTRING("skarpaField"),
	HX_CSTRING("kanslaField"),
	HX_CSTRING("nameField"),
	HX_CSTRING("plusBTN"),
	HX_CSTRING("minusBTN"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("textButton"),
	HX_CSTRING("gubbIndex"),
	HX_CSTRING("closeBTN"),
	HX_CSTRING("closeBitmap"),
	HX_CSTRING("changeValue"),
	HX_CSTRING("breakChar"),
	HX_CSTRING("unbreakChar"),
	HX_CSTRING("getTextButton"),
	HX_CSTRING("removeME"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CharOBJ_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CharOBJ_obj::__mClass,"__mClass");
};

#endif

Class CharOBJ_obj::__mClass;

void CharOBJ_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CharOBJ"), hx::TCanCast< CharOBJ_obj> ,sStaticFields,sMemberFields,
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

void CharOBJ_obj::__boot()
{
}

