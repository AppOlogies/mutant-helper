#ifndef INCLUDED_CharOBJ
#define INCLUDED_CharOBJ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(CharOBJ)
HX_DECLARE_CLASS0(CharPlusOBJ)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)


class HXCPP_CLASS_ATTRIBUTES  CharOBJ_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef CharOBJ_obj OBJ_;
		CharOBJ_obj();
		Void __construct(int index);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="CharOBJ")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CharOBJ_obj > __new(int index);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CharOBJ_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CharOBJ","\xa1","\x5e","\xb0","\x9c"); }

		::openfl::display::Bitmap ram;
		::CharPlusOBJ plus;
		int plusXcord;
		int numbersXcord;
		int i;
		Array< ::Dynamic > plusArray;
		::openfl::text::TextField styrkaField;
		::openfl::text::TextField kylaField;
		::openfl::text::TextField skarpaField;
		::openfl::text::TextField kanslaField;
		::CharPlusOBJ plusBTN;
		::openfl::text::TextFormat textFormat;
		::CharPlusOBJ tempObj;
		int styrka;
		int kyla;
		virtual Void addValue( ::openfl::events::MouseEvent e);
		Dynamic addValue_dyn();

};


#endif /* INCLUDED_CharOBJ */ 
