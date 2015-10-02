#ifndef INCLUDED_CanvasOBJ
#define INCLUDED_CanvasOBJ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(CanvasOBJ)
HX_DECLARE_CLASS0(CharOBJ)
HX_DECLARE_CLASS0(DefBTN)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  CanvasOBJ_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef CanvasOBJ_obj OBJ_;
		CanvasOBJ_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CanvasOBJ_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasOBJ_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CanvasOBJ"); }

		::DefBTN defBTN;
		::CharOBJ _char;
		::CharOBJ tempchar;
		Array< ::Dynamic > gubbArray;
		int gubbIndex;
		int i;
		int n;
		int gubbPos;
		int canvasLength;
		virtual Void nyGubbe( ::openfl::_v2::events::MouseEvent e);
		Dynamic nyGubbe_dyn();

		virtual Void gubbPosition( );
		Dynamic gubbPosition_dyn();

		virtual Void removeGubbe( ::openfl::_v2::events::Event e);
		Dynamic removeGubbe_dyn();

		virtual Void random( ::openfl::_v2::events::MouseEvent e);
		Dynamic random_dyn();

};


#endif /* INCLUDED_CanvasOBJ */ 
