#ifndef INCLUDED_CharPlusOBJ
#define INCLUDED_CharPlusOBJ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(CharPlusOBJ)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  CharPlusOBJ_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef CharPlusOBJ_obj OBJ_;
		CharPlusOBJ_obj();
		Void __construct(int index);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="CharPlusOBJ")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CharPlusOBJ_obj > __new(int index);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CharPlusOBJ_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CharPlusOBJ","\x67","\x08","\xc8","\x15"); }

		int id;
		::openfl::display::Sprite plusSprite;
		::openfl::display::Bitmap plus;
};


#endif /* INCLUDED_CharPlusOBJ */ 
