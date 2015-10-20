#ifndef INCLUDED_CharOBJ
#define INCLUDED_CharOBJ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(CharOBJ)
HX_DECLARE_CLASS0(CharOBJOperator)
HX_DECLARE_CLASS0(NameInput)
HX_DECLARE_CLASS3(openfl,_v2,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)


class HXCPP_CLASS_ATTRIBUTES  CharOBJ_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef CharOBJ_obj OBJ_;
		CharOBJ_obj();
		Void __construct(int index,bool rand);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CharOBJ_obj > __new(int index,bool rand);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CharOBJ_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CharOBJ"); }

		::openfl::_v2::display::Bitmap ram;
		::openfl::_v2::display::Bitmap nameBG;
		::CharOBJOperator plus;
		::CharOBJOperator minus;
		int plusXcord;
		int minusXcord;
		int i;
		Array< ::Dynamic > plusArray;
		Array< ::Dynamic > minusArray;
		int styrka;
		int kyla;
		int skarpa;
		int kansla;
		::openfl::_v2::text::TextField styrkaField;
		::openfl::_v2::text::TextField kylaField;
		::openfl::_v2::text::TextField skarpaField;
		::openfl::_v2::text::TextField kanslaField;
		::openfl::_v2::text::TextField nameField;
		::String nameString;
		::NameInput nameinput;
		::openfl::_v2::display::Sprite nameinputClose;
		::CharOBJOperator plusBTN;
		::CharOBJOperator minusBTN;
		::openfl::_v2::text::TextFormat textFormat;
		::openfl::_v2::display::Sprite textButton;
		int gubbIndex;
		::openfl::_v2::display::Sprite closeBTN;
		::openfl::_v2::display::Bitmap closeBitmap;
		::openfl::_v2::display::Bitmap closeBitmap2;
		::openfl::_v2::display::Sprite skadaBTN;
		::openfl::_v2::display::Bitmap skadaBitmap;
		::openfl::_v2::display::Sprite stressBTN;
		::openfl::_v2::display::Bitmap stressBitmap;
		::openfl::_v2::display::Sprite forvirringBTN;
		::openfl::_v2::display::Bitmap forvirringBitmap;
		::openfl::_v2::display::Sprite tvivelBTN;
		::openfl::_v2::display::Bitmap tvivelBitmap;
		virtual Void skadeknapp( ::openfl::_v2::events::MouseEvent e);
		Dynamic skadeknapp_dyn();

		virtual Void changeValue( ::openfl::_v2::events::MouseEvent e);
		Dynamic changeValue_dyn();

		virtual Void breakChar( );
		Dynamic breakChar_dyn();

		virtual Void unbreakChar( ::openfl::_v2::events::MouseEvent e);
		Dynamic unbreakChar_dyn();

		virtual ::openfl::_v2::display::Sprite getTextButton( ::String label);
		Dynamic getTextButton_dyn();

		virtual Void removeME( ::openfl::_v2::events::MouseEvent e);
		Dynamic removeME_dyn();

		virtual Void nameinputfunction( ::openfl::_v2::events::MouseEvent e);
		Dynamic nameinputfunction_dyn();

		virtual Void getnamestring( ::openfl::_v2::events::MouseEvent e);
		Dynamic getnamestring_dyn();

};


#endif /* INCLUDED_CharOBJ */ 
