#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace ui{

Void Window_obj::__construct(Dynamic config)
{
HX_STACK_FRAME("lime.ui.Window","new",0xbff4f5c3,"lime.ui.Window.new","lime/ui/Window.hx",11,0x6ac7286d)
HX_STACK_THIS(this)
HX_STACK_ARG(config,"config")
{
	HX_STACK_LINE(48)
	this->onWindowRestore = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(47)
	this->onWindowResize = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(46)
	this->onWindowMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(45)
	this->onWindowMinimize = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(44)
	this->onWindowLeave = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(43)
	this->onWindowFullscreen = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(42)
	this->onWindowFocusOut = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(41)
	this->onWindowFocusIn = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(40)
	this->onWindowEnter = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(39)
	this->onWindowDeactivate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(38)
	this->onWindowClose = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(37)
	this->onWindowActivate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(36)
	this->onTouchStart = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(35)
	this->onTouchMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(34)
	this->onTouchEnd = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(33)
	this->onTextInput = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(32)
	this->onTextEdit = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(31)
	this->onMouseWheel = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(30)
	this->onMouseUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(29)
	this->onMouseMoveRelative = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(28)
	this->onMouseMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(27)
	this->onMouseDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(26)
	this->onKeyUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(25)
	this->onKeyDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(24)
	this->onGamepadDisconnect = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(23)
	this->onGamepadConnect = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(22)
	this->onGamepadButtonUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(21)
	this->onGamepadButtonDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(20)
	this->onGamepadAxisMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(64)
	this->config = config;
	HX_STACK_LINE(66)
	this->__width = (int)0;
	HX_STACK_LINE(67)
	this->__height = (int)0;
	HX_STACK_LINE(68)
	this->__fullscreen = false;
	HX_STACK_LINE(69)
	this->__x = (int)0;
	HX_STACK_LINE(70)
	this->__y = (int)0;
	HX_STACK_LINE(72)
	bool tmp = (config != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(76)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(76)
			this->__width = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		}
		HX_STACK_LINE(77)
		Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		if ((tmp4)){
			HX_STACK_LINE(77)
			this->__height = config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		}
		HX_STACK_LINE(78)
		Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		if ((tmp6)){
			HX_STACK_LINE(78)
			this->__fullscreen = config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(82)
	::lime::_backend::native::NativeWindow tmp1 = ::lime::_backend::native::NativeWindow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	this->backend = tmp1;
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic config)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(config);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Window_obj::close( ){
{
		HX_STACK_FRAME("lime.ui.Window","close",0x0ea29bdb,"lime.ui.Window.close","lime/ui/Window.hx",87,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime.ui.Window","create",0x2d638179,"lime.ui.Window.create","lime/ui/Window.hx",94,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(96)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::lime::app::Application tmp1 = application;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		tmp->create(tmp1);
		HX_STACK_LINE(100)
		Array< ::String > mappings = Array_obj< ::String >::__new().Add(HX_HCSTRING("8f0e1200000000000000504944564944,Acme,platform:Windows,x:b2,a:b0,b:b1,y:b3,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b5,rightshoulder:b6,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a3,righty:a2","\xed","\x81","\xeb","\x0e")).Add(HX_HCSTRING("341a3608000000000000504944564944,Afterglow PS3 Controller,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b12,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b0,y:b3,platform:Windows","\x47","\xbe","\x1b","\x97")).Add(HX_HCSTRING("ffff0000000000000000504944564944,GameStop Gamepad,a:b0,b:b1,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b2,y:b3,platform:Windows","\x88","\x0e","\xd0","\x59")).Add(HX_HCSTRING("6d0416c2000000000000504944564944,Generic DirectInput Controller,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b0,y:b3,platform:Windows","\x97","\xeb","\xaf","\xec")).Add(HX_HCSTRING("6d0419c2000000000000504944564944,Logitech F710 Gamepad,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b0,y:b3,platform:Windows","\xec","\xfa","\x73","\x9a")).Add(HX_HCSTRING("88880803000000000000504944564944,PS3 Controller,a:b2,b:b1,back:b8,dpdown:h0.8,dpleft:h0.4,dpright:h0.2,dpup:h0.1,guide:b12,leftshoulder:b4,leftstick:b9,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b10,righttrigger:b7,rightx:a3,righty:a4,start:b11,x:b0,y:b3,platform:Windows","\xd1","\xe7","\x43","\xf6")).Add(HX_HCSTRING("4c056802000000000000504944564944,PS3 Controller,a:b14,b:b13,back:b0,dpdown:b6,dpleft:b7,dpright:b5,dpup:b4,guide:b16,leftshoulder:b10,leftstick:b1,lefttrigger:b8,leftx:a0,lefty:a1,rightshoulder:b11,rightstick:b2,righttrigger:b9,rightx:a2,righty:a3,start:b3,x:b15,y:b12,platform:Windows","\xe3","\x59","\x65","\x63")).Add(HX_HCSTRING("25090500000000000000504944564944,PS3 DualShock,a:b2,b:b1,back:b9,dpdown:h0.8,dpleft:h0.4,dpright:h0.2,dpup:h0.1,guide:,leftshoulder:b6,leftstick:b10,lefttrigger:b4,leftx:a0,lefty:a1,rightshoulder:b7,rightstick:b11,righttrigger:b5,rightx:a2,righty:a3,start:b8,x:b0,y:b3,platform:Windows","\xfa","\xa8","\xe3","\x31")).Add(HX_HCSTRING("4c05c405000000000000504944564944,PS4 Controller,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b12,leftshoulder:b4,leftstick:b10,lefttrigger:a3,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:a4,rightx:a2,righty:a5,start:b9,x:b0,y:b3,platform:Windows","\x5f","\x38","\x1f","\x08")).Add(HX_HCSTRING("6d0418c2000000000000504944564944,Logitech RumblePad 2 USB,platform:Windows,x:b0,a:b1,b:b2,y:b3,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b6,rightshoulder:b5,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a2,righty:a3","\xc2","\x6f","\x63","\xa2")).Add(HX_HCSTRING("36280100000000000000504944564944,OUYA Controller,platform:Windows,a:b0,b:b3,y:b2,x:b1,start:b14,guide:b15,leftstick:b6,rightstick:b7,leftshoulder:b4,rightshoulder:b5,dpup:b8,dpleft:b10,dpdown:b9,dpright:b11,leftx:a0,lefty:a1,rightx:a3,righty:a4,lefttrigger:b12,righttrigger:b13","\x09","\xf1","\x71","\x18")).Add(HX_HCSTRING("4f0400b3000000000000504944564944,Thrustmaster Firestorm Dual Power,a:b0,b:b2,y:b3,x:b1,start:b10,guide:b8,back:b9,leftstick:b11,rightstick:b12,leftshoulder:b4,rightshoulder:b6,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b5,righttrigger:b7,platform:Windows","\x07","\x24","\xed","\x25")).Add(HX_HCSTRING("00f00300000000000000504944564944,RetroUSB.com RetroPad,a:b1,b:b5,x:b0,y:b4,back:b2,start:b3,leftshoulder:b6,rightshoulder:b7,leftx:a0,lefty:a1,platform:Windows","\x79","\xf3","\xbd","\x51")).Add(HX_HCSTRING("00f0f100000000000000504944564944,RetroUSB.com Super RetroPort,a:b1,b:b5,x:b0,y:b4,back:b2,start:b3,leftshoulder:b6,rightshoulder:b7,leftx:a0,lefty:a1,platform:Windows","\xd8","\xa7","\x57","\x6a")).Add(HX_HCSTRING("28040140000000000000504944564944,GamePad Pro USB,platform:Windows,a:b1,b:b2,x:b0,y:b3,back:b8,start:b9,leftshoulder:b4,rightshoulder:b5,leftx:a0,lefty:a1,lefttrigger:b6,righttrigger:b7","\x33","\x16","\xde","\x47")).Add(HX_HCSTRING("ff113133000000000000504944564944,SVEN X-PAD,platform:Windows,a:b2,b:b3,y:b1,x:b0,start:b5,back:b4,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a4,lefttrigger:b8,righttrigger:b9","\x82","\x51","\x40","\x68")).Add(HX_HCSTRING("8f0e0300000000000000504944564944,Piranha xtreme,platform:Windows,x:b3,a:b2,b:b1,y:b0,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b6,lefttrigger:b4,rightshoulder:b7,righttrigger:b5,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a3,righty:a2","\x59","\x24","\xe0","\x70")).Add(HX_HCSTRING("8f0e0d31000000000000504944564944,Multilaser JS071 USB,platform:Windows,a:b1,b:b2,y:b3,x:b0,start:b9,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7","\x4f","\xad","\x07","\x7a")).Add(HX_HCSTRING("10080300000000000000504944564944,PS2 USB,platform:Windows,a:b2,b:b1,y:b0,x:b3,start:b9,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a4,righty:a2,lefttrigger:b4,righttrigger:b5","\x15","\xdb","\xc4","\xaf")).Add(HX_HCSTRING("79000600000000000000504944564944,G-Shark GS-GP702,a:b2,b:b1,x:b3,y:b0,back:b8,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a4,lefttrigger:b6,righttrigger:b7,platform:Windows","\x9e","\xd8","\x8a","\x03")).Add(HX_HCSTRING("4b12014d000000000000504944564944,NYKO AIRFLO,a:b0,b:b1,x:b2,y:b3,back:b8,guide:b10,start:b9,leftstick:a0,rightstick:a2,leftshoulder:a3,rightshoulder:b5,dpup:h0.1,dpdown:h0.0,dpleft:h0.8,dpright:h0.2,leftx:h0.6,lefty:h0.12,rightx:h0.9,righty:h0.4,lefttrigger:b6,righttrigger:b7,platform:Windows","\x45","\xf0","\x44","\x29")).Add(HX_HCSTRING("d6206dca000000000000504944564944,PowerA Pro Ex,a:b1,b:b2,x:b0,y:b3,back:b8,guide:b12,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.0,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows","\x94","\x81","\x92","\x90")).Add(HX_HCSTRING("a3060cff000000000000504944564944,Saitek P2500,a:b2,b:b3,y:b1,x:b0,start:b4,guide:b10,back:b5,leftstick:b8,rightstick:b9,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,platform:Windows","\x27","\xa3","\xa1","\x9d")).Add(HX_HCSTRING("8f0e0300000000000000504944564944,Trust GTX 28,a:b2,b:b1,y:b0,x:b3,start:b9,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows","\xe0","\xa8","\x2e","\xb7")).Add(HX_HCSTRING("4f0415b3000000000000504944564944,Thrustmaster Dual Analog 3.2,platform:Windows,x:b1,a:b0,b:b2,y:b3,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b5,rightshoulder:b6,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a2,righty:a3","\x71","\x89","\x82","\x8d"));		HX_STACK_VAR(mappings,"mappings");
		HX_STACK_LINE(130)
		::lime::ui::Gamepad_obj::addMappings(mappings);
		HX_STACK_LINE(213)
		::lime::graphics::Renderer tmp2 = this->currentRenderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		if ((tmp3)){
			HX_STACK_LINE(215)
			::lime::graphics::Renderer tmp4 = this->currentRenderer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			tmp4->create();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,create,(void))

Void Window_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime.ui.Window","move",0x35c0744e,"lime.ui.Window.move","lime/ui/Window.hx",222,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(224)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		tmp->move(tmp1,tmp2);
		HX_STACK_LINE(226)
		this->__x = x;
		HX_STACK_LINE(227)
		this->__y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,move,(void))

Void Window_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime.ui.Window","resize",0xb9cf7471,"lime.ui.Window.resize","lime/ui/Window.hx",232,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(234)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		tmp->resize(tmp1,tmp2);
		HX_STACK_LINE(236)
		this->__width = width;
		HX_STACK_LINE(237)
		this->__height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::setIcon( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.ui.Window","setIcon",0x837a3b1e,"lime.ui.Window.setIcon","lime/ui/Window.hx",242,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(244)
		bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		if ((tmp)){
			HX_STACK_LINE(246)
			return null();
		}
		HX_STACK_LINE(250)
		::lime::_backend::native::NativeWindow tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		tmp1->setIcon(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setIcon,(void))

bool Window_obj::get_enableTextEvents( ){
	HX_STACK_FRAME("lime.ui.Window","get_enableTextEvents",0xb1dee44f,"lime.ui.Window.get_enableTextEvents","lime/ui/Window.hx",262,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	bool tmp1 = tmp->getEnableTextEvents();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_enableTextEvents,return )

bool Window_obj::set_enableTextEvents( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_enableTextEvents",0x7e969bc3,"lime.ui.Window.set_enableTextEvents","lime/ui/Window.hx",269,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(271)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2 = tmp->setEnableTextEvents(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_enableTextEvents,return )

bool Window_obj::get_fullscreen( ){
	HX_STACK_FRAME("lime.ui.Window","get_fullscreen",0x19882201,"lime.ui.Window.get_fullscreen","lime/ui/Window.hx",276,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	bool tmp = this->__fullscreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_fullscreen",0x39a80a75,"lime.ui.Window.set_fullscreen","lime/ui/Window.hx",283,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	bool tmp2 = tmp->setFullscreen(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	bool tmp3 = this->__fullscreen = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(285)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

int Window_obj::get_height( ){
	HX_STACK_FRAME("lime.ui.Window","get_height",0x425314ad,"lime.ui.Window.get_height","lime/ui/Window.hx",290,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	int tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

int Window_obj::set_height( int value){
	HX_STACK_FRAME("lime.ui.Window","set_height",0x45d0b321,"lime.ui.Window.set_height","lime/ui/Window.hx",297,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	this->resize(tmp,tmp1);
	HX_STACK_LINE(300)
	int tmp2 = this->__height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

bool Window_obj::get_minimized( ){
	HX_STACK_FRAME("lime.ui.Window","get_minimized",0xd866ae80,"lime.ui.Window.get_minimized","lime/ui/Window.hx",305,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	bool tmp = this->__minimized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_minimized,return )

bool Window_obj::set_minimized( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_minimized",0x1d6c908c,"lime.ui.Window.set_minimized","lime/ui/Window.hx",312,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(314)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(314)
	bool tmp2 = tmp->setMinimized(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(314)
	bool tmp3 = this->__minimized = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(314)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_minimized,return )

int Window_obj::get_width( ){
	HX_STACK_FRAME("lime.ui.Window","get_width",0x6b63e400,"lime.ui.Window.get_width","lime/ui/Window.hx",319,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

int Window_obj::set_width( int value){
	HX_STACK_FRAME("lime.ui.Window","set_width",0x4eb4d00c,"lime.ui.Window.set_width","lime/ui/Window.hx",326,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(328)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	int tmp1 = this->__height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	this->resize(tmp,tmp1);
	HX_STACK_LINE(329)
	int tmp2 = this->__width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::get_x( ){
	HX_STACK_FRAME("lime.ui.Window","get_x",0x57a02972,"lime.ui.Window.get_x","lime/ui/Window.hx",334,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(336)
	int tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_x,return )

int Window_obj::set_x( int value){
	HX_STACK_FRAME("lime.ui.Window","set_x",0x406f1f7e,"lime.ui.Window.set_x","lime/ui/Window.hx",341,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(343)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	int tmp1 = this->__y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	this->move(tmp,tmp1);
	HX_STACK_LINE(344)
	int tmp2 = this->__x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::get_y( ){
	HX_STACK_FRAME("lime.ui.Window","get_y",0x57a02973,"lime.ui.Window.get_y","lime/ui/Window.hx",349,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	int tmp = this->__y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_y,return )

int Window_obj::set_y( int value){
	HX_STACK_FRAME("lime.ui.Window","set_y",0x406f1f7f,"lime.ui.Window.set_y","lime/ui/Window.hx",356,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(358)
	int tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	this->move(tmp,tmp1);
	HX_STACK_LINE(359)
	int tmp2 = this->__y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(359)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(onGamepadAxisMove,"onGamepadAxisMove");
	HX_MARK_MEMBER_NAME(onGamepadButtonDown,"onGamepadButtonDown");
	HX_MARK_MEMBER_NAME(onGamepadButtonUp,"onGamepadButtonUp");
	HX_MARK_MEMBER_NAME(onGamepadConnect,"onGamepadConnect");
	HX_MARK_MEMBER_NAME(onGamepadDisconnect,"onGamepadDisconnect");
	HX_MARK_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_MARK_MEMBER_NAME(onTextInput,"onTextInput");
	HX_MARK_MEMBER_NAME(onTouchEnd,"onTouchEnd");
	HX_MARK_MEMBER_NAME(onTouchMove,"onTouchMove");
	HX_MARK_MEMBER_NAME(onTouchStart,"onTouchStart");
	HX_MARK_MEMBER_NAME(onWindowActivate,"onWindowActivate");
	HX_MARK_MEMBER_NAME(onWindowClose,"onWindowClose");
	HX_MARK_MEMBER_NAME(onWindowDeactivate,"onWindowDeactivate");
	HX_MARK_MEMBER_NAME(onWindowEnter,"onWindowEnter");
	HX_MARK_MEMBER_NAME(onWindowFocusIn,"onWindowFocusIn");
	HX_MARK_MEMBER_NAME(onWindowFocusOut,"onWindowFocusOut");
	HX_MARK_MEMBER_NAME(onWindowFullscreen,"onWindowFullscreen");
	HX_MARK_MEMBER_NAME(onWindowLeave,"onWindowLeave");
	HX_MARK_MEMBER_NAME(onWindowMinimize,"onWindowMinimize");
	HX_MARK_MEMBER_NAME(onWindowMove,"onWindowMove");
	HX_MARK_MEMBER_NAME(onWindowResize,"onWindowResize");
	HX_MARK_MEMBER_NAME(onWindowRestore,"onWindowRestore");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__minimized,"__minimized");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_MEMBER_NAME(__y,"__y");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(onGamepadAxisMove,"onGamepadAxisMove");
	HX_VISIT_MEMBER_NAME(onGamepadButtonDown,"onGamepadButtonDown");
	HX_VISIT_MEMBER_NAME(onGamepadButtonUp,"onGamepadButtonUp");
	HX_VISIT_MEMBER_NAME(onGamepadConnect,"onGamepadConnect");
	HX_VISIT_MEMBER_NAME(onGamepadDisconnect,"onGamepadDisconnect");
	HX_VISIT_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_VISIT_MEMBER_NAME(onTextInput,"onTextInput");
	HX_VISIT_MEMBER_NAME(onTouchEnd,"onTouchEnd");
	HX_VISIT_MEMBER_NAME(onTouchMove,"onTouchMove");
	HX_VISIT_MEMBER_NAME(onTouchStart,"onTouchStart");
	HX_VISIT_MEMBER_NAME(onWindowActivate,"onWindowActivate");
	HX_VISIT_MEMBER_NAME(onWindowClose,"onWindowClose");
	HX_VISIT_MEMBER_NAME(onWindowDeactivate,"onWindowDeactivate");
	HX_VISIT_MEMBER_NAME(onWindowEnter,"onWindowEnter");
	HX_VISIT_MEMBER_NAME(onWindowFocusIn,"onWindowFocusIn");
	HX_VISIT_MEMBER_NAME(onWindowFocusOut,"onWindowFocusOut");
	HX_VISIT_MEMBER_NAME(onWindowFullscreen,"onWindowFullscreen");
	HX_VISIT_MEMBER_NAME(onWindowLeave,"onWindowLeave");
	HX_VISIT_MEMBER_NAME(onWindowMinimize,"onWindowMinimize");
	HX_VISIT_MEMBER_NAME(onWindowMove,"onWindowMove");
	HX_VISIT_MEMBER_NAME(onWindowResize,"onWindowResize");
	HX_VISIT_MEMBER_NAME(onWindowRestore,"onWindowRestore");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__minimized,"__minimized");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__x,"__x");
	HX_VISIT_MEMBER_NAME(__y,"__y");
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		if (HX_FIELD_EQ(inName,"__y") ) { return __y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == hx::paccAlways) return get_minimized(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit; }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { return __minimized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel; }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart; }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose; }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter; }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave; }
		if (HX_FIELD_EQ(inName,"get_minimized") ) { return get_minimized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimized") ) { return set_minimized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize; }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { return currentRenderer; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn; }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enableTextEvents") ) { if (inCallProp == hx::paccAlways) return get_enableTextEvents(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect; }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut; }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate; }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown; }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect; }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_enableTextEvents") ) { return get_enableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enableTextEvents") ) { return set_enableTextEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { __y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeWindow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == hx::paccAlways) return set_minimized(inValue); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { onTextEdit=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { onTouchEnd=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { onTextInput=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { onTouchMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { __minimized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { onTouchStart=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { onWindowMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { onWindowClose=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { onWindowEnter=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { onWindowLeave=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { onWindowResize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { currentRenderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { onWindowFocusIn=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { onWindowRestore=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enableTextEvents") ) { if (inCallProp == hx::paccAlways) return set_enableTextEvents(inValue); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { onGamepadConnect=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { onWindowActivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { onWindowFocusOut=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { onWindowMinimize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { onGamepadAxisMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { onGamepadButtonUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { onWindowDeactivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { onWindowFullscreen=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { onGamepadButtonDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { onGamepadDisconnect=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { onMouseMoveRelative=inValue.Cast< ::lime::app::Event >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentRenderer","\x9c","\x7e","\x2d","\x87"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("enableTextEvents","\x09","\xe4","\x09","\x6a"));
	outFields->push(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"));
	outFields->push(HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"));
	outFields->push(HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"));
	outFields->push(HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"));
	outFields->push(HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"));
	outFields->push(HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"));
	outFields->push(HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"));
	outFields->push(HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"));
	outFields->push(HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"));
	outFields->push(HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"));
	outFields->push(HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"));
	outFields->push(HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"));
	outFields->push(HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"));
	outFields->push(HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"));
	outFields->push(HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"));
	outFields->push(HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"));
	outFields->push(HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"));
	outFields->push(HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"));
	outFields->push(HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"));
	outFields->push(HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"));
	outFields->push(HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"));
	outFields->push(HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"));
	outFields->push(HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"));
	outFields->push(HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"));
	outFields->push(HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"));
	outFields->push(HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"));
	outFields->push(HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"));
	outFields->push(HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"));
	outFields->push(HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"));
	outFields->push(HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__y","\x59","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Window_obj,currentRenderer),HX_HCSTRING("currentRenderer","\x9c","\x7e","\x2d","\x87")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadAxisMove),HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadButtonDown),HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadButtonUp),HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadConnect),HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadDisconnect),HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onKeyDown),HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onKeyUp),HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseDown),HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseMove),HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseMoveRelative),HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseUp),HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseWheel),HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTextEdit),HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTextInput),HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchEnd),HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchMove),HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchStart),HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowActivate),HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowClose),HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowDeactivate),HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowEnter),HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFocusIn),HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFocusOut),HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFullscreen),HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowLeave),HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowMinimize),HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowMove),HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowResize),HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowRestore),HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad")},
	{hx::fsObject /*::lime::_backend::native::NativeWindow*/ ,(int)offsetof(Window_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsBool,(int)offsetof(Window_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsInt,(int)offsetof(Window_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(Window_obj,__minimized),HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56")},
	{hx::fsInt,(int)offsetof(Window_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsInt,(int)offsetof(Window_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,__y),HX_HCSTRING("__y","\x59","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentRenderer","\x9c","\x7e","\x2d","\x87"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("__y","\x59","\x69","\x48","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("get_enableTextEvents","\x12","\x49","\x74","\x88"),
	HX_HCSTRING("set_enableTextEvents","\x86","\x00","\x2c","\x55"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_minimized","\x5d","\xcf","\x01","\xea"),
	HX_HCSTRING("set_minimized","\x69","\xb1","\x07","\x2f"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Window","\x51","\x58","\xb8","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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

} // end namespace lime
} // end namespace ui
