#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_IAssetCache
#include <openfl/IAssetCache.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
namespace openfl{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::openfl::IAssetCache Assets_obj::cache;

::openfl::events::EventDispatcher Assets_obj::dispatcher;

Void Assets_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.Assets","addEventListener",0x08307d1a,"openfl.Assets.addEventListener","openfl/Assets.hx",50,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(52)
		::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		bool tmp3 = useCapture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		int tmp4 = priority;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		bool tmp5 = useWeakReference;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		tmp->addEventListener(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.Assets","dispatchEvent",0xff6e3393,"openfl.Assets.dispatchEvent","openfl/Assets.hx",57,0x989d477c)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(59)
	::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = tmp->dispatchEvent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("openfl.Assets","exists",0xd3fc5ce9,"openfl.Assets.exists","openfl/Assets.hx",69,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(71)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = ::lime::Assets_obj::exists(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::openfl::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getBitmapData",0xc93c7e82,"openfl.Assets.getBitmapData","openfl/Assets.hx",83,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(87)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(87)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(87)
			tmp2 = false;
		}
		HX_STACK_LINE(87)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		if ((tmp2)){
			HX_STACK_LINE(87)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			tmp3 = tmp5->hasBitmapData(tmp7);
		}
		else{
			HX_STACK_LINE(87)
			tmp3 = false;
		}
		HX_STACK_LINE(87)
		if ((tmp3)){
			HX_STACK_LINE(89)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			::openfl::display::BitmapData tmp6 = tmp4->getBitmapData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::openfl::display::BitmapData bitmapData = tmp6;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(91)
			::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			bool tmp8 = ::openfl::Assets_obj::isValidBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			if ((tmp8)){
				HX_STACK_LINE(93)
				::openfl::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				return tmp9;
			}
		}
		HX_STACK_LINE(99)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		::lime::graphics::Image tmp5 = ::lime::Assets_obj::getImage(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		::lime::graphics::Image image = tmp5;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(101)
		bool tmp6 = (image != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		if ((tmp6)){
			HX_STACK_LINE(106)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::fromImage(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			::openfl::display::BitmapData bitmapData = tmp8;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(109)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			if ((tmp9)){
				HX_STACK_LINE(109)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(109)
				tmp10 = false;
			}
			HX_STACK_LINE(109)
			if ((tmp10)){
				HX_STACK_LINE(111)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(111)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				::openfl::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(111)
				tmp11->setBitmapData(tmp12,tmp13);
			}
			HX_STACK_LINE(115)
			::openfl::display::BitmapData tmp11 = bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			return tmp11;
		}
		HX_STACK_LINE(121)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::lime::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl.Assets","getBytes",0xa062f442,"openfl.Assets.getBytes","openfl/Assets.hx",132,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(134)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::lime::utils::ByteArray tmp1 = ::lime::Assets_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::openfl::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getFont",0x9addf9d8,"openfl.Assets.getFont","openfl/Assets.hx",145,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(149)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		if ((tmp1)){
			HX_STACK_LINE(149)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(149)
			tmp2 = false;
		}
		HX_STACK_LINE(149)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp2)){
			HX_STACK_LINE(149)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			tmp3 = tmp5->hasFont(tmp7);
		}
		else{
			HX_STACK_LINE(149)
			tmp3 = false;
		}
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(151)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			::openfl::text::Font tmp6 = tmp4->getFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			return tmp6;
		}
		HX_STACK_LINE(155)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		::lime::text::Font tmp5 = ::lime::Assets_obj::getFont(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		::lime::text::Font limeFont = tmp5;		HX_STACK_VAR(limeFont,"limeFont");
		HX_STACK_LINE(157)
		bool tmp6 = (limeFont != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		if ((tmp6)){
			HX_STACK_LINE(162)
			::lime::text::Font tmp7 = limeFont;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			::openfl::text::Font tmp8 = ::openfl::text::Font_obj::__fromLimeFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(162)
			::openfl::text::Font font = tmp8;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(165)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			if ((tmp9)){
				HX_STACK_LINE(165)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(165)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(165)
				tmp10 = false;
			}
			HX_STACK_LINE(165)
			if ((tmp10)){
				HX_STACK_LINE(167)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(167)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(167)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(167)
				tmp11->setFont(tmp12,tmp13);
			}
			HX_STACK_LINE(171)
			::openfl::text::Font tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			return tmp11;
		}
		HX_STACK_LINE(177)
		::openfl::text::Font tmp7 = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("openfl.Assets","getLibrary",0x9baef692,"openfl.Assets.getLibrary","openfl/Assets.hx",182,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(184)
	bool tmp = (name == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	if ((tmp1)){
		HX_STACK_LINE(184)
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(184)
		tmp2 = true;
	}
	HX_STACK_LINE(184)
	if ((tmp2)){
		HX_STACK_LINE(186)
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	HX_STACK_LINE(192)
	::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(192)
	::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(192)
	::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::openfl::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.Assets","getMovieClip",0x1d5e25f7,"openfl.Assets.getMovieClip","openfl/Assets.hx",203,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(207)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(208)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(209)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	::lime::AssetLibrary tmp6 = ::openfl::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	::openfl::AssetLibrary library = ((::openfl::AssetLibrary)(tmp6));		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(211)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(211)
	if ((tmp7)){
		HX_STACK_LINE(213)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(213)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(213)
		if ((tmp9)){
			HX_STACK_LINE(215)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(215)
			if ((tmp11)){
				HX_STACK_LINE(217)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				::openfl::display::MovieClip tmp13 = library->getMovieClip(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(217)
				return tmp13;
			}
			else{
				HX_STACK_LINE(221)
				::String tmp12 = (HX_HCSTRING("[openfl.Assets] MovieClip asset \"","\x09","\x87","\xab","\x4e") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(221)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),221,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(227)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"","\x47","\x50","\x6c","\x1a") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),227,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(233)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(233)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),233,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(233)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(239)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::openfl::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getMusic",0xf325bc7c,"openfl.Assets.getMusic","openfl/Assets.hx",250,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(257)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		::lime::audio::AudioBuffer tmp2 = ::lime::Assets_obj::getAudioBuffer(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		::openfl::media::Sound tmp3 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl.Assets","getPath",0xa16f81ae,"openfl.Assets.getPath","openfl/Assets.hx",280,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(282)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::String tmp1 = ::lime::Assets_obj::getPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::openfl::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getSound",0x639778a6,"openfl.Assets.getSound","openfl/Assets.hx",293,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(297)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		if ((tmp1)){
			HX_STACK_LINE(297)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(297)
			tmp2 = false;
		}
		HX_STACK_LINE(297)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		if ((tmp2)){
			HX_STACK_LINE(297)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			tmp3 = tmp5->hasSound(tmp7);
		}
		else{
			HX_STACK_LINE(297)
			tmp3 = false;
		}
		HX_STACK_LINE(297)
		if ((tmp3)){
			HX_STACK_LINE(299)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(299)
			::openfl::media::Sound tmp6 = tmp4->getSound(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			::openfl::media::Sound sound = tmp6;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(301)
			::openfl::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			bool tmp8 = ::openfl::Assets_obj::isValidSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			if ((tmp8)){
				HX_STACK_LINE(303)
				::openfl::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				return tmp9;
			}
		}
		HX_STACK_LINE(310)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		::lime::audio::AudioBuffer tmp5 = ::lime::Assets_obj::getAudioBuffer(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		::lime::audio::AudioBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(312)
		bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(312)
		if ((tmp6)){
			HX_STACK_LINE(317)
			::lime::audio::AudioBuffer tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(317)
			::openfl::media::Sound tmp8 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(317)
			::openfl::media::Sound sound = tmp8;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(320)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(320)
			if ((tmp9)){
				HX_STACK_LINE(320)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(320)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(320)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(320)
				tmp10 = false;
			}
			HX_STACK_LINE(320)
			if ((tmp10)){
				HX_STACK_LINE(322)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(322)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(322)
				::openfl::media::Sound tmp13 = sound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(322)
				tmp11->setSound(tmp12,tmp13);
			}
			HX_STACK_LINE(326)
			::openfl::media::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(326)
			return tmp11;
		}
		HX_STACK_LINE(341)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("openfl.Assets","getText",0xa41768b6,"openfl.Assets.getText","openfl/Assets.hx",352,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(354)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	::String tmp1 = ::lime::Assets_obj::getText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl.Assets","hasEventListener",0x23b6a041,"openfl.Assets.hasEventListener","openfl/Assets.hx",359,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(361)
	::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	bool tmp2 = tmp->hasEventListener(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","isLocal",0x9a115974,"openfl.Assets.isLocal","openfl/Assets.hx",372,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(376)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		if ((tmp)){
			HX_STACK_LINE(376)
			::openfl::IAssetCache tmp2 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			::openfl::IAssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			tmp1 = tmp3->get_enabled();
		}
		else{
			HX_STACK_LINE(376)
			tmp1 = false;
		}
		HX_STACK_LINE(376)
		if ((tmp1)){
			HX_STACK_LINE(378)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(378)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(378)
			if ((tmp3)){
				HX_STACK_LINE(378)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(378)
				tmp4 = true;
			}
			HX_STACK_LINE(378)
			if ((tmp4)){
				HX_STACK_LINE(380)
				::openfl::IAssetCache tmp5 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(380)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				bool tmp7 = tmp5->hasBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(380)
				if ((tmp7)){
					HX_STACK_LINE(380)
					return true;
				}
			}
			HX_STACK_LINE(384)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(384)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(384)
			if ((tmp6)){
				HX_STACK_LINE(384)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(384)
				tmp7 = true;
			}
			HX_STACK_LINE(384)
			if ((tmp7)){
				HX_STACK_LINE(386)
				::openfl::IAssetCache tmp8 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(386)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(386)
				bool tmp10 = tmp8->hasFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(386)
				if ((tmp10)){
					HX_STACK_LINE(386)
					return true;
				}
			}
			HX_STACK_LINE(390)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(390)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(390)
			if ((tmp10)){
				HX_STACK_LINE(390)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(390)
				tmp11 = true;
			}
			HX_STACK_LINE(390)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(390)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			if ((tmp12)){
				HX_STACK_LINE(390)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(390)
				tmp13 = true;
			}
			HX_STACK_LINE(390)
			if ((tmp13)){
				HX_STACK_LINE(392)
				::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(392)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(392)
				bool tmp16 = tmp14->hasSound(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(392)
				if ((tmp16)){
					HX_STACK_LINE(392)
					return true;
				}
			}
		}
		HX_STACK_LINE(398)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(399)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(400)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(400)
		::lime::AssetLibrary tmp8 = ::openfl::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(400)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(402)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(402)
		if ((tmp9)){
			HX_STACK_LINE(404)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(404)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(404)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(404)
			return tmp12;
		}
		HX_STACK_LINE(410)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl.Assets","isValidBitmapData",0xc2fb171e,"openfl.Assets.isValidBitmapData","openfl/Assets.hx",415,0x989d477c)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(432)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(432)
	if ((tmp)){
		HX_STACK_LINE(432)
		tmp1 = (bitmapData->__image != null());
	}
	else{
		HX_STACK_LINE(432)
		tmp1 = false;
	}
	HX_STACK_LINE(432)
	return tmp1;
	HX_STACK_LINE(437)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
	HX_STACK_FRAME("openfl.Assets","isValidSound",0x9717a58a,"openfl.Assets.isValidSound","openfl/Assets.hx",442,0x989d477c)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(447)
	return true;
	HX_STACK_LINE(453)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("openfl.Assets","list",0xb0f58e2b,"openfl.Assets.list","openfl/Assets.hx",462,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(464)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(464)
	return ::lime::Assets_obj::list(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

Void Assets_obj::loadBitmapData( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadBitmapData",0x79a7538c,"openfl.Assets.loadBitmapData","openfl/Assets.hx",477,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(481)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		if ((tmp1)){
			HX_STACK_LINE(481)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(481)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(481)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(481)
			tmp2 = false;
		}
		HX_STACK_LINE(481)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		if ((tmp2)){
			HX_STACK_LINE(481)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(481)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(481)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(481)
			tmp3 = tmp5->hasBitmapData(tmp7);
		}
		else{
			HX_STACK_LINE(481)
			tmp3 = false;
		}
		HX_STACK_LINE(481)
		if ((tmp3)){
			HX_STACK_LINE(483)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(483)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(483)
			::openfl::display::BitmapData tmp6 = tmp4->getBitmapData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(483)
			::openfl::display::BitmapData bitmapData = tmp6;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(485)
			::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(485)
			bool tmp8 = ::openfl::Assets_obj::isValidBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(485)
			if ((tmp8)){
				HX_STACK_LINE(487)
				::openfl::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(487)
				handler(tmp9).Cast< Void >();
				HX_STACK_LINE(488)
				return null();
			}
		}
		HX_STACK_LINE(494)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,bool,useCache,Dynamic,handler,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",494,0x989d477c)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(496)
				bool tmp5 = (image != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(496)
				if ((tmp5)){
					HX_STACK_LINE(501)
					::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(501)
					::openfl::display::BitmapData tmp7 = ::openfl::display::BitmapData_obj::fromImage(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(501)
					::openfl::display::BitmapData bitmapData = tmp7;		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(504)
					bool tmp8 = useCache;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(504)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(504)
					if ((tmp8)){
						HX_STACK_LINE(504)
						::openfl::IAssetCache tmp10 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(504)
						::openfl::IAssetCache tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(504)
						tmp9 = tmp11->get_enabled();
					}
					else{
						HX_STACK_LINE(504)
						tmp9 = false;
					}
					HX_STACK_LINE(504)
					if ((tmp9)){
						HX_STACK_LINE(506)
						::openfl::IAssetCache tmp10 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(506)
						::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(506)
						::openfl::display::BitmapData tmp12 = bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(506)
						tmp10->setBitmapData(tmp11,tmp12);
					}
					HX_STACK_LINE(510)
					::openfl::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(510)
					handler(tmp10).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(494)
		::lime::Assets_obj::loadImage(tmp4, Dynamic(new _Function_1_1(useCache,handler,id)),false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",529,0x989d477c)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(533)
		int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(534)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(534)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(535)
		::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		::lime::AssetLibrary tmp6 = ::openfl::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(535)
		::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(537)
		bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		if ((tmp7)){
			HX_STACK_LINE(539)
			::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(539)
			bool tmp9 = library->exists(tmp8,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(539)
			if ((tmp9)){
				HX_STACK_LINE(541)
				::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(541)
				Dynamic tmp11 = handler;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(541)
				library->loadBytes(tmp10,tmp11);
				HX_STACK_LINE(542)
				return null();
			}
			else{
				HX_STACK_LINE(546)
				::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"","\x2a","\x8b","\x28","\xa6") + id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(546)
				::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(546)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),546,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(546)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
		}
		else{
			HX_STACK_LINE(552)
			::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(552)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),552,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
		HX_STACK_LINE(558)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadFont( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadFont",0x37540b62,"openfl.Assets.loadFont","openfl/Assets.hx",570,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(574)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(574)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(574)
		if ((tmp1)){
			HX_STACK_LINE(574)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(574)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(574)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(574)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(574)
			tmp2 = false;
		}
		HX_STACK_LINE(574)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(574)
		if ((tmp2)){
			HX_STACK_LINE(574)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(574)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(574)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(574)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(574)
			tmp3 = tmp5->hasFont(tmp7);
		}
		else{
			HX_STACK_LINE(574)
			tmp3 = false;
		}
		HX_STACK_LINE(574)
		if ((tmp3)){
			HX_STACK_LINE(576)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(576)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(576)
			::openfl::text::Font tmp6 = tmp4->getFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(576)
			handler(tmp6).Cast< Void >();
			HX_STACK_LINE(577)
			return null();
		}
		HX_STACK_LINE(581)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(582)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(582)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(582)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(582)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(583)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(583)
		::lime::AssetLibrary tmp10 = ::openfl::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(583)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(585)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(585)
		if ((tmp11)){
			HX_STACK_LINE(587)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(587)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(587)
			if ((tmp13)){
				HX_STACK_LINE(589)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");

				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_1,bool,useCache,Dynamic,handler,::String,id)
				int __ArgCount() const { return 1; }
				Void run(::lime::text::Font limeFont){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/Assets.hx",589,0x989d477c)
					HX_STACK_ARG(limeFont,"limeFont")
					{
						HX_STACK_LINE(594)
						::lime::text::Font tmp15 = limeFont;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(594)
						::openfl::text::Font tmp16 = ::openfl::text::Font_obj::__fromLimeFont(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(594)
						::openfl::text::Font font = tmp16;		HX_STACK_VAR(font,"font");
						HX_STACK_LINE(597)
						bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(597)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(597)
						if ((tmp17)){
							HX_STACK_LINE(597)
							::openfl::IAssetCache tmp19 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(597)
							::openfl::IAssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(597)
							tmp18 = tmp20->get_enabled();
						}
						else{
							HX_STACK_LINE(597)
							tmp18 = false;
						}
						HX_STACK_LINE(597)
						if ((tmp18)){
							HX_STACK_LINE(599)
							::openfl::IAssetCache tmp19 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(599)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(599)
							::openfl::text::Font tmp21 = font;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(599)
							tmp19->setFont(tmp20,tmp21);
						}
						HX_STACK_LINE(603)
						::openfl::text::Font tmp19 = font;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(603)
						handler(tmp19).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(589)
				library->loadFont(tmp14, Dynamic(new _Function_3_1(useCache,handler,id)));
				HX_STACK_LINE(607)
				return null();
			}
			else{
				HX_STACK_LINE(611)
				::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no Font asset with an ID of \"","\xd2","\xd9","\x10","\x87") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(611)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(611)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),611,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(611)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(617)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(617)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(617)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),617,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(617)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(623)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadLibrary",0x44d0f748,"openfl.Assets.loadLibrary","openfl/Assets.hx",632,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(634)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		Dynamic tmp1 = handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(634)
		::lime::Assets_obj::loadLibrary(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadMusic( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadMusic",0x3dff03b2,"openfl.Assets.loadMusic","openfl/Assets.hx",647,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(650)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(::lime::audio::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",650,0x989d477c)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(652)
				bool tmp2 = (buffer != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(652)
				if ((tmp2)){
					HX_STACK_LINE(657)
					::lime::audio::AudioBuffer tmp3 = buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(657)
					::openfl::media::Sound tmp4 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(657)
					handler(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(650)
		::lime::Assets_obj::loadAudioBuffer(tmp, Dynamic(new _Function_1_1(handler)),tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,(void))

Void Assets_obj::loadMovieClip( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadMovieClip",0xd38a402d,"openfl.Assets.loadMovieClip","openfl/Assets.hx",678,0x989d477c)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(682)
		int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(682)
		::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(682)
		::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(683)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(683)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(683)
		::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(683)
		::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(684)
		::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(684)
		::lime::AssetLibrary tmp6 = ::openfl::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(684)
		::openfl::AssetLibrary library = ((::openfl::AssetLibrary)(tmp6));		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(686)
		bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(686)
		if ((tmp7)){
			HX_STACK_LINE(688)
			::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(688)
			bool tmp9 = library->exists(tmp8,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(688)
			if ((tmp9)){
				HX_STACK_LINE(690)
				::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(690)
				Dynamic tmp11 = handler;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(690)
				library->loadMovieClip(tmp10,tmp11);
				HX_STACK_LINE(691)
				return null();
			}
			else{
				HX_STACK_LINE(695)
				::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"","\x47","\x50","\x6c","\x1a") + id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(695)
				::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(695)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),695,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(695)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
		}
		else{
			HX_STACK_LINE(701)
			::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(701)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(701)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),701,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(701)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
		HX_STACK_LINE(707)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,(void))

Void Assets_obj::loadSound( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadSound",0xae70bfdc,"openfl.Assets.loadSound","openfl/Assets.hx",721,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(724)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(736)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(::lime::audio::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",724,0x989d477c)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(726)
				bool tmp2 = (buffer != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(726)
				if ((tmp2)){
					HX_STACK_LINE(731)
					::lime::audio::AudioBuffer tmp3 = buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(731)
					::openfl::media::Sound tmp4 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(731)
					handler(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(724)
		::lime::Assets_obj::loadAudioBuffer(tmp, Dynamic(new _Function_1_1(handler)),tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadText",0x408d7a40,"openfl.Assets.loadText","openfl/Assets.hx",753,0x989d477c)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(755)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		Dynamic tmp1 = handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		::lime::Assets_obj::loadText(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::openfl::AssetLibrary library){
{
		HX_STACK_FRAME("openfl.Assets","registerLibrary",0x9230822b,"openfl.Assets.registerLibrary","openfl/Assets.hx",764,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(766)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(766)
		::openfl::AssetLibrary tmp1 = library;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(766)
		::lime::Assets_obj::registerLibrary(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl.Assets","removeEventListener",0x6a2b249d,"openfl.Assets.removeEventListener","openfl/Assets.hx",771,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(773)
		::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(773)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(773)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(773)
		bool tmp3 = capture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(773)
		tmp->removeEventListener(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveClass",0x76ca4479,"openfl.Assets.resolveClass","openfl/Assets.hx",778,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(780)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(780)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(780)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveEnum",0x1314a1e0,"openfl.Assets.resolveEnum","openfl/Assets.hx",785,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(787)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(787)
	::Enum tmp1 = ::Type_obj::resolveEnum(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(787)
	::Enum value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(799)
	::Enum tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(799)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("openfl.Assets","unloadLibrary",0x6a51c84f,"openfl.Assets.unloadLibrary","openfl/Assets.hx",804,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(806)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(806)
		::lime::Assets_obj::unloadLibrary(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onEvent( ::openfl::AssetLibrary library,::String type){
{
		HX_STACK_FRAME("openfl.Assets","library_onEvent",0xbd1ed14a,"openfl.Assets.library_onEvent","openfl/Assets.hx",818,0x989d477c)
		HX_STACK_ARG(library,"library")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(820)
		bool tmp = (type == HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		if ((tmp)){
			HX_STACK_LINE(822)
			::openfl::IAssetCache tmp1 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(822)
			tmp1->clear(null());
			HX_STACK_LINE(823)
			::String tmp2 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(823)
			::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(823)
			::openfl::Assets_obj::dispatchEvent(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,library_onEvent,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true;  }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"library_onEvent") ) { outValue = library_onEvent_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::IAssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(void *) &Assets_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidBitmapData","\x0b","\x65","\xe4","\xe6"),
	HX_HCSTRING("isValidSound","\xbd","\x1e","\x2b","\xa1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("library_onEvent","\xf7","\xd9","\x72","\x1d"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
struct _Function_0_1{
	inline static ::openfl::IAssetCache Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/Assets.hx",45,0x989d477c)
		{
			HX_STACK_LINE(45)
			::openfl::AssetCache tmp = ::openfl::AssetCache_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			return ((::openfl::IAssetCache)(tmp));
		}
		return null();
	}
};
	cache= _Function_0_1::Block();
	dispatcher= ::openfl::events::EventDispatcher_obj::__new(null());
}

} // end namespace openfl
