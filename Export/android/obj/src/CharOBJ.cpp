#include <hxcpp.h>

#ifndef INCLUDED_CharOBJ
#include <CharOBJ.h>
#endif
#ifndef INCLUDED_CharOBJOperator
#include <CharOBJOperator.h>
#endif
#ifndef INCLUDED_NameInput
#include <NameInput.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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

Void CharOBJ_obj::__construct(int index,bool rand)
{
HX_STACK_FRAME("CharOBJ","new",0x31766413,"CharOBJ.new","CharOBJ.hx",17,0xfdecfebd)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
HX_STACK_ARG(rand,"rand")
{
	HX_STACK_LINE(48)
	this->textButton = ::openfl::_v2::display::Sprite_obj::__new();
	HX_STACK_LINE(38)
	this->nameString = HX_CSTRING("Namn");
	HX_STACK_LINE(37)
	this->nameField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(36)
	this->kanslaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(35)
	this->skarpaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(34)
	this->kylaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(33)
	this->styrkaField = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(31)
	this->kansla = (int)0;
	HX_STACK_LINE(30)
	this->skarpa = (int)0;
	HX_STACK_LINE(29)
	this->kyla = (int)0;
	HX_STACK_LINE(28)
	this->styrka = (int)0;
	HX_STACK_LINE(24)
	this->minusXcord = (int)0;
	HX_STACK_LINE(23)
	this->plusXcord = (int)0;
	HX_STACK_LINE(69)
	super::__construct();
	HX_STACK_LINE(71)
	if ((rand)){
		HX_STACK_LINE(73)
		int _g = ::Std_obj::random((int)6);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->styrka = _g;
		HX_STACK_LINE(74)
		int _g1 = ::Std_obj::random((int)6);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		this->kyla = _g1;
		HX_STACK_LINE(75)
		int _g2 = ::Std_obj::random((int)6);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(75)
		this->skarpa = _g2;
		HX_STACK_LINE(76)
		int _g3 = ::Std_obj::random((int)6);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(76)
		this->kansla = _g3;
		HX_STACK_LINE(78)
		if (((this->styrka == (int)0))){
			HX_STACK_LINE(79)
			this->styrka = (int)1;
		}
		HX_STACK_LINE(81)
		if (((this->kyla == (int)0))){
			HX_STACK_LINE(82)
			this->kyla = (int)1;
		}
		HX_STACK_LINE(84)
		if (((this->skarpa == (int)0))){
			HX_STACK_LINE(85)
			this->skarpa = (int)1;
		}
		HX_STACK_LINE(87)
		if (((this->kansla == (int)0))){
			HX_STACK_LINE(88)
			this->kansla = (int)1;
		}
	}
	HX_STACK_LINE(92)
	::openfl::_v2::text::TextFormat _g4 = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(92)
	this->textFormat = _g4;
	HX_STACK_LINE(93)
	this->textFormat->font = HX_CSTRING("assets/Nootype.otf");
	HX_STACK_LINE(94)
	this->textFormat->size = (int)60;
	HX_STACK_LINE(95)
	this->textFormat->color = (int)1244694;
	HX_STACK_LINE(97)
	this->gubbIndex = index;
	HX_STACK_LINE(99)
	::openfl::_v2::display::BitmapData _g5 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/ram.png"),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(99)
	::openfl::_v2::display::Bitmap _g6 = ::openfl::_v2::display::Bitmap_obj::__new(_g5,null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(99)
	this->ram = _g6;
	HX_STACK_LINE(100)
	this->addChild(this->ram);
	HX_STACK_LINE(102)
	::openfl::_v2::display::Sprite _g7 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(102)
	this->closeBTN = _g7;
	HX_STACK_LINE(103)
	this->addChild(this->closeBTN);
	HX_STACK_LINE(104)
	::openfl::_v2::display::BitmapData _g8 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/close_btn.png"),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(104)
	::openfl::_v2::display::Bitmap _g9 = ::openfl::_v2::display::Bitmap_obj::__new(_g8,null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(104)
	this->closeBitmap = _g9;
	HX_STACK_LINE(105)
	this->closeBitmap->set_x((int)600);
	HX_STACK_LINE(106)
	this->closeBitmap->set_y((int)15);
	HX_STACK_LINE(107)
	this->closeBTN->addChild(this->closeBitmap);
	HX_STACK_LINE(109)
	this->closeBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->removeME_dyn(),null(),null(),null());
	HX_STACK_LINE(112)
	Array< ::Dynamic > _g10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(112)
	this->plusArray = _g10;
	HX_STACK_LINE(113)
	Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(113)
	this->minusArray = _g11;
	HX_STACK_LINE(115)
	this->styrkaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(116)
	this->styrkaField->set_x((int)70);
	HX_STACK_LINE(117)
	this->styrkaField->set_y((int)170);
	HX_STACK_LINE(118)
	this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
	HX_STACK_LINE(119)
	this->styrkaField->set_selectable(false);
	HX_STACK_LINE(120)
	this->addChild(this->styrkaField);
	HX_STACK_LINE(122)
	this->kylaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(123)
	this->kylaField->set_x((int)230);
	HX_STACK_LINE(124)
	this->kylaField->set_y((int)170);
	HX_STACK_LINE(125)
	this->kylaField->set_text((HX_CSTRING("") + this->kyla));
	HX_STACK_LINE(126)
	this->kylaField->set_selectable(false);
	HX_STACK_LINE(127)
	this->addChild(this->kylaField);
	HX_STACK_LINE(129)
	this->skarpaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(130)
	this->skarpaField->set_x((int)380);
	HX_STACK_LINE(131)
	this->skarpaField->set_y((int)170);
	HX_STACK_LINE(132)
	this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
	HX_STACK_LINE(133)
	this->skarpaField->set_selectable(false);
	HX_STACK_LINE(134)
	this->addChild(this->skarpaField);
	HX_STACK_LINE(136)
	this->kanslaField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(137)
	this->kanslaField->set_x((int)530);
	HX_STACK_LINE(138)
	this->kanslaField->set_y((int)170);
	HX_STACK_LINE(139)
	this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
	HX_STACK_LINE(140)
	this->kanslaField->set_selectable(false);
	HX_STACK_LINE(141)
	this->addChild(this->kanslaField);
	HX_STACK_LINE(143)
	::openfl::_v2::display::BitmapData _g12 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/namebg.png"),null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(143)
	::openfl::_v2::display::Bitmap _g13 = ::openfl::_v2::display::Bitmap_obj::__new(_g12,null(),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(143)
	this->nameBG = _g13;
	HX_STACK_LINE(144)
	Float _g14 = this->nameBG->get_width();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(144)
	Float _g15 = (Float(_g14) / Float((int)2));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(144)
	Float _g16 = ((int)330 - _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(144)
	this->nameBG->set_x(_g16);
	HX_STACK_LINE(145)
	this->nameBG->set_y((int)-30);
	HX_STACK_LINE(146)
	this->nameBG->addEventListener(::openfl::_v2::events::MouseEvent_obj::DOUBLE_CLICK,this->nameinputfunction_dyn(),null(),null(),null());
	HX_STACK_LINE(147)
	this->addChild(this->nameBG);
	HX_STACK_LINE(150)
	this->nameField->set_defaultTextFormat(this->textFormat);
	HX_STACK_LINE(152)
	this->nameField->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(153)
	this->nameField->set_text(this->nameString);
	HX_STACK_LINE(154)
	this->nameField->set_width((int)350);
	HX_STACK_LINE(155)
	this->nameField->set_height((int)70);
	HX_STACK_LINE(156)
	this->nameField->set_x((int)210);
	HX_STACK_LINE(157)
	this->nameField->set_y((int)-17);
	HX_STACK_LINE(158)
	this->nameField->set_selectable(false);
	HX_STACK_LINE(159)
	this->nameField->doubleClickEnabled = true;
	HX_STACK_LINE(160)
	this->nameField->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
	HX_STACK_LINE(161)
	this->nameField->set_maxChars((int)10);
	HX_STACK_LINE(162)
	this->nameField->addEventListener(::openfl::_v2::events::MouseEvent_obj::DOUBLE_CLICK,this->nameinputfunction_dyn(),null(),null(),null());
	HX_STACK_LINE(163)
	this->addChild(this->nameField);
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(169)
			::CharOBJOperator _g17 = ::CharOBJOperator_obj::__new(i);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(169)
			this->plus = _g17;
			HX_STACK_LINE(170)
			this->plus->set_x((this->plusXcord + (int)70));
			HX_STACK_LINE(171)
			hx::AddEq(this->plusXcord,(int)155);
			HX_STACK_LINE(172)
			this->plus->set_y((int)100);
			HX_STACK_LINE(173)
			this->plusArray->insert(i,this->plus);
			HX_STACK_LINE(174)
			this->addChild(this->plus);
		}
	}
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(178)
			this->plusBTN = this->plusArray->__get(i).StaticCast< ::CharOBJOperator >();
			HX_STACK_LINE(179)
			this->plusBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->changeValue_dyn(),null(),null(),null());
		}
	}
	HX_STACK_LINE(181)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		int _g = (int)4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		while((true)){
			HX_STACK_LINE(182)
			if ((!(((_g < (int)8))))){
				HX_STACK_LINE(182)
				break;
			}
			HX_STACK_LINE(182)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(184)
			::haxe::Log_obj::trace((HX_CSTRING("creating minus object: ") + i),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),184,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(185)
			::CharOBJOperator _g18 = ::CharOBJOperator_obj::__new(i);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(185)
			this->minus = _g18;
			HX_STACK_LINE(186)
			this->minus->set_x((this->minusXcord + (int)70));
			HX_STACK_LINE(187)
			hx::AddEq(this->minusXcord,(int)155);
			HX_STACK_LINE(188)
			this->minus->set_y((int)250);
			HX_STACK_LINE(189)
			::haxe::Log_obj::trace((HX_CSTRING("adding minus to array: ") + j),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),189,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(190)
			this->minusArray->insert(j,this->minus);
			HX_STACK_LINE(191)
			::haxe::Log_obj::trace(HX_CSTRING("added"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),191,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(192)
			this->addChild(this->minus);
			HX_STACK_LINE(193)
			(j)++;
			HX_STACK_LINE(194)
			::haxe::Log_obj::trace(HX_CSTRING("reached end of function"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),194,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
		}
	}
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(196)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(198)
			::haxe::Log_obj::trace((HX_CSTRING("adding minus to array: ") + i),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),198,HX_CSTRING("CharOBJ"),HX_CSTRING("new")));
			HX_STACK_LINE(199)
			this->minusBTN = this->minusArray->__get(i).StaticCast< ::CharOBJOperator >();
			HX_STACK_LINE(200)
			this->minusBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->changeValue_dyn(),null(),null(),null());
		}
	}
	HX_STACK_LINE(206)
	::openfl::_v2::display::Sprite _g19 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(206)
	this->skadaBTN = _g19;
	HX_STACK_LINE(207)
	::openfl::_v2::display::BitmapData _g20 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/skada.png"),null());		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(207)
	::openfl::_v2::display::Bitmap _g21 = ::openfl::_v2::display::Bitmap_obj::__new(_g20,null(),null());		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(207)
	this->skadaBitmap = _g21;
	HX_STACK_LINE(208)
	this->skadaBTN->addChild(this->skadaBitmap);
	HX_STACK_LINE(209)
	this->skadaBTN->set_x((int)20);
	HX_STACK_LINE(210)
	this->skadaBTN->set_y((int)330);
	HX_STACK_LINE(211)
	this->skadaBTN->doubleClickEnabled = true;
	HX_STACK_LINE(212)
	this->skadaBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::DOUBLE_CLICK,this->skadeknapp_dyn(),null(),null(),null());
	HX_STACK_LINE(213)
	this->addChild(this->skadaBTN);
	HX_STACK_LINE(215)
	::openfl::_v2::display::Sprite _g22 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(215)
	this->stressBTN = _g22;
	HX_STACK_LINE(216)
	::openfl::_v2::display::BitmapData _g23 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/stress.png"),null());		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(216)
	::openfl::_v2::display::Bitmap _g24 = ::openfl::_v2::display::Bitmap_obj::__new(_g23,null(),null());		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(216)
	this->stressBitmap = _g24;
	HX_STACK_LINE(217)
	this->stressBTN->addChild(this->stressBitmap);
	HX_STACK_LINE(218)
	this->stressBTN->set_x((int)350);
	HX_STACK_LINE(219)
	this->stressBTN->set_y((int)330);
	HX_STACK_LINE(220)
	this->stressBTN->doubleClickEnabled = true;
	HX_STACK_LINE(221)
	this->stressBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::DOUBLE_CLICK,this->skadeknapp_dyn(),null(),null(),null());
	HX_STACK_LINE(222)
	this->addChild(this->stressBTN);
	HX_STACK_LINE(224)
	::openfl::_v2::display::Sprite _g25 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(224)
	this->forvirringBTN = _g25;
	HX_STACK_LINE(225)
	::openfl::_v2::display::BitmapData _g26 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/forvirring.png"),null());		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(225)
	::openfl::_v2::display::Bitmap _g27 = ::openfl::_v2::display::Bitmap_obj::__new(_g26,null(),null());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(225)
	this->forvirringBitmap = _g27;
	HX_STACK_LINE(226)
	this->forvirringBTN->addChild(this->forvirringBitmap);
	HX_STACK_LINE(227)
	this->forvirringBTN->set_x((int)20);
	HX_STACK_LINE(228)
	this->forvirringBTN->set_y((int)395);
	HX_STACK_LINE(229)
	this->forvirringBTN->doubleClickEnabled = true;
	HX_STACK_LINE(230)
	this->forvirringBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::DOUBLE_CLICK,this->skadeknapp_dyn(),null(),null(),null());
	HX_STACK_LINE(231)
	this->addChild(this->forvirringBTN);
	HX_STACK_LINE(233)
	::openfl::_v2::display::Sprite _g28 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(233)
	this->tvivelBTN = _g28;
	HX_STACK_LINE(234)
	::openfl::_v2::display::BitmapData _g29 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/tvivel.png"),null());		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(234)
	::openfl::_v2::display::Bitmap _g30 = ::openfl::_v2::display::Bitmap_obj::__new(_g29,null(),null());		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(234)
	this->tvivelBitmap = _g30;
	HX_STACK_LINE(235)
	this->tvivelBTN->addChild(this->tvivelBitmap);
	HX_STACK_LINE(236)
	this->tvivelBTN->set_x((int)350);
	HX_STACK_LINE(237)
	this->tvivelBTN->set_y((int)395);
	HX_STACK_LINE(238)
	this->tvivelBTN->doubleClickEnabled = true;
	HX_STACK_LINE(239)
	this->tvivelBTN->addEventListener(::openfl::_v2::events::MouseEvent_obj::DOUBLE_CLICK,this->skadeknapp_dyn(),null(),null(),null());
	HX_STACK_LINE(240)
	this->addChild(this->tvivelBTN);
}
;
	return null();
}

//CharOBJ_obj::~CharOBJ_obj() { }

Dynamic CharOBJ_obj::__CreateEmpty() { return  new CharOBJ_obj; }
hx::ObjectPtr< CharOBJ_obj > CharOBJ_obj::__new(int index,bool rand)
{  hx::ObjectPtr< CharOBJ_obj > result = new CharOBJ_obj();
	result->__construct(index,rand);
	return result;}

Dynamic CharOBJ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CharOBJ_obj > result = new CharOBJ_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void CharOBJ_obj::skadeknapp( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","skadeknapp",0xcab0eec1,"CharOBJ.skadeknapp","CharOBJ.hx",256,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(258)
		Dynamic _g = e->get_target();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		if (((_g == this->skadaBTN))){
			HX_STACK_LINE(259)
			(this->styrka)--;
			HX_STACK_LINE(260)
			this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
			HX_STACK_LINE(261)
			if (((bool((this->styrka == (int)0)) || bool((this->styrka < (int)0))))){
				HX_STACK_LINE(263)
				this->breakChar();
			}
		}
		HX_STACK_LINE(267)
		Dynamic _g1 = e->get_target();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(267)
		if (((_g1 == this->stressBTN))){
			HX_STACK_LINE(268)
			(this->kyla)--;
			HX_STACK_LINE(269)
			this->kylaField->set_text((HX_CSTRING("") + this->kyla));
			HX_STACK_LINE(270)
			if (((bool((this->kyla == (int)0)) || bool((this->kyla < (int)0))))){
				HX_STACK_LINE(272)
				this->breakChar();
			}
		}
		HX_STACK_LINE(277)
		Dynamic _g2 = e->get_target();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(277)
		if (((_g2 == this->forvirringBTN))){
			HX_STACK_LINE(278)
			(this->skarpa)--;
			HX_STACK_LINE(279)
			this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
			HX_STACK_LINE(280)
			if (((bool((this->skarpa == (int)0)) || bool((this->skarpa < (int)0))))){
				HX_STACK_LINE(282)
				this->breakChar();
			}
		}
		HX_STACK_LINE(287)
		Dynamic _g3 = e->get_target();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(287)
		if (((_g3 == this->tvivelBTN))){
			HX_STACK_LINE(288)
			(this->kansla)--;
			HX_STACK_LINE(289)
			this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
			HX_STACK_LINE(290)
			if (((bool((this->kansla == (int)0)) || bool((this->kansla < (int)0))))){
				HX_STACK_LINE(292)
				this->breakChar();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,skadeknapp,(void))

Void CharOBJ_obj::changeValue( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","changeValue",0x98b82694,"CharOBJ.changeValue","CharOBJ.hx",301,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(302)
		int id = e->get_currentTarget()->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(303)
		::haxe::Log_obj::trace(HX_CSTRING("button"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),303,HX_CSTRING("CharOBJ"),HX_CSTRING("changeValue")));
		HX_STACK_LINE(304)
		::haxe::Log_obj::trace(id,hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),304,HX_CSTRING("CharOBJ"),HX_CSTRING("changeValue")));
		HX_STACK_LINE(305)
		if (((bool((id == (int)0)) && bool((this->styrka < (int)10))))){
			HX_STACK_LINE(306)
			(this->styrka)++;
		}
		HX_STACK_LINE(307)
		this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
		HX_STACK_LINE(308)
		if (((bool((id == (int)1)) && bool((this->kyla < (int)10))))){
			HX_STACK_LINE(309)
			(this->kyla)++;
		}
		HX_STACK_LINE(310)
		this->kylaField->set_text((HX_CSTRING("") + this->kyla));
		HX_STACK_LINE(311)
		if (((bool((id == (int)2)) && bool((this->skarpa < (int)10))))){
			HX_STACK_LINE(312)
			(this->skarpa)++;
		}
		HX_STACK_LINE(313)
		this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
		HX_STACK_LINE(314)
		if (((bool((id == (int)3)) && bool((this->kansla < (int)10))))){
			HX_STACK_LINE(315)
			(this->kansla)++;
		}
		HX_STACK_LINE(316)
		this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
		HX_STACK_LINE(317)
		if (((bool((id == (int)4)) && bool((this->styrka > (int)0))))){
			HX_STACK_LINE(319)
			(this->styrka)--;
			HX_STACK_LINE(320)
			this->styrkaField->set_text((HX_CSTRING("") + this->styrka));
			HX_STACK_LINE(321)
			if (((this->styrka == (int)0))){
				HX_STACK_LINE(323)
				this->breakChar();
			}
		}
		HX_STACK_LINE(326)
		if (((bool((id == (int)5)) && bool((this->kyla > (int)0))))){
			HX_STACK_LINE(328)
			(this->kyla)--;
			HX_STACK_LINE(329)
			this->kylaField->set_text((HX_CSTRING("") + this->kyla));
			HX_STACK_LINE(330)
			if (((this->kyla == (int)0))){
				HX_STACK_LINE(332)
				this->breakChar();
			}
		}
		HX_STACK_LINE(335)
		if (((bool((id == (int)6)) && bool((this->skarpa > (int)0))))){
			HX_STACK_LINE(337)
			(this->skarpa)--;
			HX_STACK_LINE(338)
			this->skarpaField->set_text((HX_CSTRING("") + this->skarpa));
			HX_STACK_LINE(339)
			if (((this->skarpa == (int)0))){
				HX_STACK_LINE(341)
				this->breakChar();
			}
		}
		HX_STACK_LINE(344)
		if (((bool((id == (int)7)) && bool((this->kansla > (int)0))))){
			HX_STACK_LINE(346)
			(this->kansla)--;
			HX_STACK_LINE(347)
			this->kanslaField->set_text((HX_CSTRING("") + this->kansla));
			HX_STACK_LINE(348)
			if (((this->kansla == (int)0))){
				HX_STACK_LINE(350)
				this->breakChar();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,changeValue,(void))

Void CharOBJ_obj::breakChar( ){
{
		HX_STACK_FRAME("CharOBJ","breakChar",0xcf445728,"CharOBJ.breakChar","CharOBJ.hx",356,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		this->removeChild(this->styrkaField);
		HX_STACK_LINE(358)
		this->removeChild(this->kylaField);
		HX_STACK_LINE(359)
		this->removeChild(this->skarpaField);
		HX_STACK_LINE(360)
		this->removeChild(this->kanslaField);
		HX_STACK_LINE(361)
		::openfl::_v2::display::Sprite _g = this->getTextButton(HX_CSTRING("BRUTEN!"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
		this->textButton = _g;
		HX_STACK_LINE(362)
		this->addChild(this->textButton);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CharOBJ_obj,breakChar,(void))

Void CharOBJ_obj::unbreakChar( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","unbreakChar",0xf8d0006f,"CharOBJ.unbreakChar","CharOBJ.hx",366,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(367)
		::haxe::Log_obj::trace(HX_CSTRING("unbreaking"),hx::SourceInfo(HX_CSTRING("CharOBJ.hx"),367,HX_CSTRING("CharOBJ"),HX_CSTRING("unbreakChar")));
		HX_STACK_LINE(368)
		this->removeChild(this->textButton);
		HX_STACK_LINE(369)
		this->addChild(this->styrkaField);
		HX_STACK_LINE(370)
		this->addChild(this->kylaField);
		HX_STACK_LINE(371)
		this->addChild(this->skarpaField);
		HX_STACK_LINE(372)
		this->addChild(this->kanslaField);
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			while((true)){
				HX_STACK_LINE(373)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(373)
					break;
				}
				HX_STACK_LINE(373)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(373)
				this->addChild(this->minusArray->__get(i).StaticCast< ::CharOBJOperator >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,unbreakChar,(void))

::openfl::_v2::display::Sprite CharOBJ_obj::getTextButton( ::String label){
	HX_STACK_FRAME("CharOBJ","getTextButton",0xf0009028,"CharOBJ.getTextButton","CharOBJ.hx",377,0xfdecfebd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(label,"label")
	HX_STACK_LINE(378)
	::openfl::_v2::text::TextField txt = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(379)
	::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("assets/Nootype.otf"),(int)120,(int)14881812,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(379)
	txt->set_defaultTextFormat(_g);
	HX_STACK_LINE(380)
	txt->set_text(label);
	HX_STACK_LINE(381)
	txt->set_x((int)65);
	HX_STACK_LINE(382)
	txt->set_y((int)150);
	HX_STACK_LINE(383)
	txt->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(384)
	::openfl::_v2::display::Sprite btn = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(btn,"btn");
	HX_STACK_LINE(385)
	btn->set_mouseChildren(false);
	HX_STACK_LINE(386)
	btn->addChild(txt);
	HX_STACK_LINE(387)
	btn->buttonMode = true;
	HX_STACK_LINE(388)
	btn->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->unbreakChar_dyn(),null(),null(),null());
	HX_STACK_LINE(389)
	return btn;
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,getTextButton,return )

Void CharOBJ_obj::removeME( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","removeME",0x28a59c09,"CharOBJ.removeME","CharOBJ.hx",395,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(395)
		this->get_parent()->removeChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,removeME,(void))

Void CharOBJ_obj::nameinputfunction( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","nameinputfunction",0x9619caea,"CharOBJ.nameinputfunction","CharOBJ.hx",401,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(403)
		::NameInput _g = ::NameInput_obj::__new(this->nameString);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		this->nameinput = _g;
		HX_STACK_LINE(404)
		this->nameinput->set_x((int)125);
		HX_STACK_LINE(405)
		this->nameinput->set_y((int)-60);
		HX_STACK_LINE(406)
		this->addChild(this->nameinput);
		HX_STACK_LINE(408)
		::openfl::_v2::display::Sprite _g1 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(408)
		this->nameinputClose = _g1;
		HX_STACK_LINE(409)
		::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("assets/close_btn.png"),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(409)
		::openfl::_v2::display::Bitmap _g3 = ::openfl::_v2::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(409)
		this->closeBitmap2 = _g3;
		HX_STACK_LINE(410)
		this->nameinputClose->addChild(this->closeBitmap2);
		HX_STACK_LINE(411)
		this->nameinputClose->set_x((int)445);
		HX_STACK_LINE(412)
		this->nameinputClose->set_y((int)-20);
		HX_STACK_LINE(413)
		this->addChild(this->nameinputClose);
		HX_STACK_LINE(414)
		this->nameinputClose->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->getnamestring_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,nameinputfunction,(void))

Void CharOBJ_obj::getnamestring( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CharOBJ","getnamestring",0x49998ee5,"CharOBJ.getnamestring","CharOBJ.hx",420,0xfdecfebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(422)
		::String _g = this->nameinput->nameField2->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		this->nameString = _g;
		HX_STACK_LINE(425)
		if (((this->nameString == HX_CSTRING("")))){
			HX_STACK_LINE(426)
			this->nameString = HX_CSTRING("Namn");
		}
		HX_STACK_LINE(428)
		if (((this->nameString == HX_CSTRING("          ")))){
			HX_STACK_LINE(429)
			this->nameString = HX_CSTRING("Namn");
		}
		HX_STACK_LINE(432)
		this->nameField->set_text(this->nameString);
		HX_STACK_LINE(434)
		this->removeChild(this->nameinputClose);
		HX_STACK_LINE(435)
		this->removeChild(this->nameinput);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CharOBJ_obj,getnamestring,(void))


CharOBJ_obj::CharOBJ_obj()
{
}

void CharOBJ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CharOBJ);
	HX_MARK_MEMBER_NAME(ram,"ram");
	HX_MARK_MEMBER_NAME(nameBG,"nameBG");
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
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(nameinput,"nameinput");
	HX_MARK_MEMBER_NAME(nameinputClose,"nameinputClose");
	HX_MARK_MEMBER_NAME(plusBTN,"plusBTN");
	HX_MARK_MEMBER_NAME(minusBTN,"minusBTN");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(textButton,"textButton");
	HX_MARK_MEMBER_NAME(gubbIndex,"gubbIndex");
	HX_MARK_MEMBER_NAME(closeBTN,"closeBTN");
	HX_MARK_MEMBER_NAME(closeBitmap,"closeBitmap");
	HX_MARK_MEMBER_NAME(closeBitmap2,"closeBitmap2");
	HX_MARK_MEMBER_NAME(skadaBTN,"skadaBTN");
	HX_MARK_MEMBER_NAME(skadaBitmap,"skadaBitmap");
	HX_MARK_MEMBER_NAME(stressBTN,"stressBTN");
	HX_MARK_MEMBER_NAME(stressBitmap,"stressBitmap");
	HX_MARK_MEMBER_NAME(forvirringBTN,"forvirringBTN");
	HX_MARK_MEMBER_NAME(forvirringBitmap,"forvirringBitmap");
	HX_MARK_MEMBER_NAME(tvivelBTN,"tvivelBTN");
	HX_MARK_MEMBER_NAME(tvivelBitmap,"tvivelBitmap");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CharOBJ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ram,"ram");
	HX_VISIT_MEMBER_NAME(nameBG,"nameBG");
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
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(nameinput,"nameinput");
	HX_VISIT_MEMBER_NAME(nameinputClose,"nameinputClose");
	HX_VISIT_MEMBER_NAME(plusBTN,"plusBTN");
	HX_VISIT_MEMBER_NAME(minusBTN,"minusBTN");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(textButton,"textButton");
	HX_VISIT_MEMBER_NAME(gubbIndex,"gubbIndex");
	HX_VISIT_MEMBER_NAME(closeBTN,"closeBTN");
	HX_VISIT_MEMBER_NAME(closeBitmap,"closeBitmap");
	HX_VISIT_MEMBER_NAME(closeBitmap2,"closeBitmap2");
	HX_VISIT_MEMBER_NAME(skadaBTN,"skadaBTN");
	HX_VISIT_MEMBER_NAME(skadaBitmap,"skadaBitmap");
	HX_VISIT_MEMBER_NAME(stressBTN,"stressBTN");
	HX_VISIT_MEMBER_NAME(stressBitmap,"stressBitmap");
	HX_VISIT_MEMBER_NAME(forvirringBTN,"forvirringBTN");
	HX_VISIT_MEMBER_NAME(forvirringBitmap,"forvirringBitmap");
	HX_VISIT_MEMBER_NAME(tvivelBTN,"tvivelBTN");
	HX_VISIT_MEMBER_NAME(tvivelBitmap,"tvivelBitmap");
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
		if (HX_FIELD_EQ(inName,"nameBG") ) { return nameBG; }
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
		if (HX_FIELD_EQ(inName,"skadaBTN") ) { return skadaBTN; }
		if (HX_FIELD_EQ(inName,"removeME") ) { return removeME_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"plusXcord") ) { return plusXcord; }
		if (HX_FIELD_EQ(inName,"plusArray") ) { return plusArray; }
		if (HX_FIELD_EQ(inName,"kylaField") ) { return kylaField; }
		if (HX_FIELD_EQ(inName,"nameField") ) { return nameField; }
		if (HX_FIELD_EQ(inName,"nameinput") ) { return nameinput; }
		if (HX_FIELD_EQ(inName,"gubbIndex") ) { return gubbIndex; }
		if (HX_FIELD_EQ(inName,"stressBTN") ) { return stressBTN; }
		if (HX_FIELD_EQ(inName,"tvivelBTN") ) { return tvivelBTN; }
		if (HX_FIELD_EQ(inName,"breakChar") ) { return breakChar_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minusXcord") ) { return minusXcord; }
		if (HX_FIELD_EQ(inName,"minusArray") ) { return minusArray; }
		if (HX_FIELD_EQ(inName,"nameString") ) { return nameString; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
		if (HX_FIELD_EQ(inName,"textButton") ) { return textButton; }
		if (HX_FIELD_EQ(inName,"skadeknapp") ) { return skadeknapp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styrkaField") ) { return styrkaField; }
		if (HX_FIELD_EQ(inName,"skarpaField") ) { return skarpaField; }
		if (HX_FIELD_EQ(inName,"kanslaField") ) { return kanslaField; }
		if (HX_FIELD_EQ(inName,"closeBitmap") ) { return closeBitmap; }
		if (HX_FIELD_EQ(inName,"skadaBitmap") ) { return skadaBitmap; }
		if (HX_FIELD_EQ(inName,"changeValue") ) { return changeValue_dyn(); }
		if (HX_FIELD_EQ(inName,"unbreakChar") ) { return unbreakChar_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"closeBitmap2") ) { return closeBitmap2; }
		if (HX_FIELD_EQ(inName,"stressBitmap") ) { return stressBitmap; }
		if (HX_FIELD_EQ(inName,"tvivelBitmap") ) { return tvivelBitmap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"forvirringBTN") ) { return forvirringBTN; }
		if (HX_FIELD_EQ(inName,"getTextButton") ) { return getTextButton_dyn(); }
		if (HX_FIELD_EQ(inName,"getnamestring") ) { return getnamestring_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nameinputClose") ) { return nameinputClose; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forvirringBitmap") ) { return forvirringBitmap; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nameinputfunction") ) { return nameinputfunction_dyn(); }
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
		if (HX_FIELD_EQ(inName,"nameBG") ) { nameBG=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"skadaBTN") ) { skadaBTN=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"plusXcord") ) { plusXcord=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plusArray") ) { plusArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kylaField") ) { kylaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameField") ) { nameField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameinput") ) { nameinput=inValue.Cast< ::NameInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gubbIndex") ) { gubbIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stressBTN") ) { stressBTN=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tvivelBTN") ) { tvivelBTN=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minusXcord") ) { minusXcord=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minusArray") ) { minusArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameString") ) { nameString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textButton") ) { textButton=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styrkaField") ) { styrkaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skarpaField") ) { skarpaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kanslaField") ) { kanslaField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeBitmap") ) { closeBitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skadaBitmap") ) { skadaBitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"closeBitmap2") ) { closeBitmap2=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stressBitmap") ) { stressBitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tvivelBitmap") ) { tvivelBitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"forvirringBTN") ) { forvirringBTN=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nameinputClose") ) { nameinputClose=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forvirringBitmap") ) { forvirringBitmap=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharOBJ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ram"));
	outFields->push(HX_CSTRING("nameBG"));
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
	outFields->push(HX_CSTRING("nameString"));
	outFields->push(HX_CSTRING("nameinput"));
	outFields->push(HX_CSTRING("nameinputClose"));
	outFields->push(HX_CSTRING("plusBTN"));
	outFields->push(HX_CSTRING("minusBTN"));
	outFields->push(HX_CSTRING("textFormat"));
	outFields->push(HX_CSTRING("textButton"));
	outFields->push(HX_CSTRING("gubbIndex"));
	outFields->push(HX_CSTRING("closeBTN"));
	outFields->push(HX_CSTRING("closeBitmap"));
	outFields->push(HX_CSTRING("closeBitmap2"));
	outFields->push(HX_CSTRING("skadaBTN"));
	outFields->push(HX_CSTRING("skadaBitmap"));
	outFields->push(HX_CSTRING("stressBTN"));
	outFields->push(HX_CSTRING("stressBitmap"));
	outFields->push(HX_CSTRING("forvirringBTN"));
	outFields->push(HX_CSTRING("forvirringBitmap"));
	outFields->push(HX_CSTRING("tvivelBTN"));
	outFields->push(HX_CSTRING("tvivelBitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,ram),HX_CSTRING("ram")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,nameBG),HX_CSTRING("nameBG")},
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
	{hx::fsString,(int)offsetof(CharOBJ_obj,nameString),HX_CSTRING("nameString")},
	{hx::fsObject /*::NameInput*/ ,(int)offsetof(CharOBJ_obj,nameinput),HX_CSTRING("nameinput")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,nameinputClose),HX_CSTRING("nameinputClose")},
	{hx::fsObject /*::CharOBJOperator*/ ,(int)offsetof(CharOBJ_obj,plusBTN),HX_CSTRING("plusBTN")},
	{hx::fsObject /*::CharOBJOperator*/ ,(int)offsetof(CharOBJ_obj,minusBTN),HX_CSTRING("minusBTN")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CharOBJ_obj,textFormat),HX_CSTRING("textFormat")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,textButton),HX_CSTRING("textButton")},
	{hx::fsInt,(int)offsetof(CharOBJ_obj,gubbIndex),HX_CSTRING("gubbIndex")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,closeBTN),HX_CSTRING("closeBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,closeBitmap),HX_CSTRING("closeBitmap")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,closeBitmap2),HX_CSTRING("closeBitmap2")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,skadaBTN),HX_CSTRING("skadaBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,skadaBitmap),HX_CSTRING("skadaBitmap")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,stressBTN),HX_CSTRING("stressBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,stressBitmap),HX_CSTRING("stressBitmap")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,forvirringBTN),HX_CSTRING("forvirringBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,forvirringBitmap),HX_CSTRING("forvirringBitmap")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CharOBJ_obj,tvivelBTN),HX_CSTRING("tvivelBTN")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CharOBJ_obj,tvivelBitmap),HX_CSTRING("tvivelBitmap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ram"),
	HX_CSTRING("nameBG"),
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
	HX_CSTRING("nameString"),
	HX_CSTRING("nameinput"),
	HX_CSTRING("nameinputClose"),
	HX_CSTRING("plusBTN"),
	HX_CSTRING("minusBTN"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("textButton"),
	HX_CSTRING("gubbIndex"),
	HX_CSTRING("closeBTN"),
	HX_CSTRING("closeBitmap"),
	HX_CSTRING("closeBitmap2"),
	HX_CSTRING("skadaBTN"),
	HX_CSTRING("skadaBitmap"),
	HX_CSTRING("stressBTN"),
	HX_CSTRING("stressBitmap"),
	HX_CSTRING("forvirringBTN"),
	HX_CSTRING("forvirringBitmap"),
	HX_CSTRING("tvivelBTN"),
	HX_CSTRING("tvivelBitmap"),
	HX_CSTRING("skadeknapp"),
	HX_CSTRING("changeValue"),
	HX_CSTRING("breakChar"),
	HX_CSTRING("unbreakChar"),
	HX_CSTRING("getTextButton"),
	HX_CSTRING("removeME"),
	HX_CSTRING("nameinputfunction"),
	HX_CSTRING("getnamestring"),
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

