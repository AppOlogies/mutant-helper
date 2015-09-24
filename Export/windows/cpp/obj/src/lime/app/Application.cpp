#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
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
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
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
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",20,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->onUpdate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(47)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(49)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(53)
	this->modules = Array_obj< ::lime::app::IModule >::__new();
	HX_STACK_LINE(54)
	this->renderers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(55)
	this->windows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(56)
	::lime::_backend::native::NativeApplication tmp2 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	this->backend = tmp2;
	HX_STACK_LINE(58)
	::lime::app::Event tmp3 = this->onUpdate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	Dynamic tmp4 = this->update_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	tmp3->add(tmp4,null(),null());
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",67,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(69)
		::lime::app::IModule tmp = module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		this->modules->push(tmp);
		HX_STACK_LINE(71)
		bool tmp1 = this->initialized;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(71)
			::lime::graphics::Renderer tmp3 = this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			::lime::graphics::Renderer tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(71)
			tmp2 = false;
		}
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			::lime::graphics::Renderer tmp3 = this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			::lime::graphics::RenderContext tmp4 = tmp3->context;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			module->init(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",85,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(87)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		renderer->onRender->add(tmp,null(),null());
		HX_STACK_LINE(88)
		Dynamic tmp1 = this->onRenderContextLost_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		renderer->onRenderContextLost->add(tmp1,null(),null());
		HX_STACK_LINE(89)
		Dynamic tmp2 = this->onRenderContextRestored_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		renderer->onRenderContextRestored->add(tmp2,null(),null());
		HX_STACK_LINE(91)
		::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->renderers->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addRenderer,(void))

Void Application_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","addWindow",0xf8ebb80d,"lime.app.Application.addWindow","lime/app/Application.hx",101,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(103)
		::lime::ui::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		this->windows->push(tmp);
		HX_STACK_LINE(105)
		Dynamic tmp1 = this->onGamepadAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		window->onGamepadAxisMove->add(tmp1,null(),null());
		HX_STACK_LINE(106)
		Dynamic tmp2 = this->onGamepadButtonDown_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		window->onGamepadButtonDown->add(tmp2,null(),null());
		HX_STACK_LINE(107)
		Dynamic tmp3 = this->onGamepadButtonUp_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		window->onGamepadButtonUp->add(tmp3,null(),null());
		HX_STACK_LINE(108)
		Dynamic tmp4 = this->onGamepadConnect_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		window->onGamepadConnect->add(tmp4,null(),null());
		HX_STACK_LINE(109)
		Dynamic tmp5 = this->onGamepadDisconnect_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		window->onGamepadDisconnect->add(tmp5,null(),null());
		HX_STACK_LINE(110)
		Dynamic tmp6 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		window->onKeyDown->add(tmp6,null(),null());
		HX_STACK_LINE(111)
		Dynamic tmp7 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		window->onKeyUp->add(tmp7,null(),null());
		HX_STACK_LINE(112)
		Dynamic tmp8 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		window->onMouseDown->add(tmp8,null(),null());
		HX_STACK_LINE(113)
		Dynamic tmp9 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(113)
		window->onMouseMove->add(tmp9,null(),null());
		HX_STACK_LINE(114)
		Dynamic tmp10 = this->onMouseMoveRelative_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(114)
		window->onMouseMoveRelative->add(tmp10,null(),null());
		HX_STACK_LINE(115)
		Dynamic tmp11 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(115)
		window->onMouseUp->add(tmp11,null(),null());
		HX_STACK_LINE(116)
		Dynamic tmp12 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(116)
		window->onMouseWheel->add(tmp12,null(),null());
		HX_STACK_LINE(117)
		Dynamic tmp13 = this->onTextEdit_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(117)
		window->onTextEdit->add(tmp13,null(),null());
		HX_STACK_LINE(118)
		Dynamic tmp14 = this->onTextInput_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		window->onTextInput->add(tmp14,null(),null());
		HX_STACK_LINE(119)
		Dynamic tmp15 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(119)
		window->onTouchStart->add(tmp15,null(),null());
		HX_STACK_LINE(120)
		Dynamic tmp16 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(120)
		window->onTouchMove->add(tmp16,null(),null());
		HX_STACK_LINE(121)
		Dynamic tmp17 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(121)
		window->onTouchEnd->add(tmp17,null(),null());
		HX_STACK_LINE(122)
		Dynamic tmp18 = this->onWindowActivate_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(122)
		window->onWindowActivate->add(tmp18,null(),null());
		HX_STACK_LINE(123)
		Dynamic tmp19 = this->onWindowClose_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(123)
		window->onWindowClose->add(tmp19,null(),null());
		HX_STACK_LINE(124)
		Dynamic tmp20 = this->onWindowDeactivate_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(124)
		window->onWindowDeactivate->add(tmp20,null(),null());
		HX_STACK_LINE(125)
		Dynamic tmp21 = this->onWindowEnter_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(125)
		window->onWindowEnter->add(tmp21,null(),null());
		HX_STACK_LINE(126)
		Dynamic tmp22 = this->onWindowFocusIn_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(126)
		window->onWindowFocusIn->add(tmp22,null(),null());
		HX_STACK_LINE(127)
		Dynamic tmp23 = this->onWindowFocusOut_dyn();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(127)
		window->onWindowFocusOut->add(tmp23,null(),null());
		HX_STACK_LINE(128)
		Dynamic tmp24 = this->onWindowFullscreen_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(128)
		window->onWindowFullscreen->add(tmp24,null(),null());
		HX_STACK_LINE(129)
		Dynamic tmp25 = this->onWindowLeave_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(129)
		window->onWindowLeave->add(tmp25,null(),null());
		HX_STACK_LINE(130)
		Dynamic tmp26 = this->onWindowMinimize_dyn();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(130)
		window->onWindowMinimize->add(tmp26,null(),null());
		HX_STACK_LINE(131)
		Dynamic tmp27 = this->onWindowMove_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(131)
		window->onWindowMove->add(tmp27,null(),null());
		HX_STACK_LINE(132)
		Dynamic tmp28 = this->onWindowResize_dyn();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(132)
		window->onWindowResize->add(tmp28,null(),null());
		HX_STACK_LINE(133)
		Dynamic tmp29 = this->onWindowRestore_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(133)
		window->onWindowRestore->add(tmp29,null(),null());
		HX_STACK_LINE(135)
		window->create(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addWindow,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",146,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(148)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		tmp->create(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",159,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(163)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	int tmp1 = tmp->exec();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","init",0x531ea174,"lime.app.Application.init","lime/app/Application.hx",168,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			while((true)){
				HX_STACK_LINE(170)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(170)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(170)
				if ((tmp1)){
					HX_STACK_LINE(170)
					break;
				}
				HX_STACK_LINE(170)
				::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(170)
				::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(170)
				++(_g);
				HX_STACK_LINE(172)
				::lime::graphics::RenderContext tmp3 = context;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(172)
				module->init(tmp3);
			}
		}
		HX_STACK_LINE(176)
		this->initialized = true;
	}
return null();
}


Void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",183,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(183)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(183)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			if ((tmp1)){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(183)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(183)
			++(_g);
			HX_STACK_LINE(185)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			module->onGamepadAxisMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",194,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(194)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(194)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			if ((tmp1)){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(194)
			++(_g);
			HX_STACK_LINE(196)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			module->onGamepadButtonDown(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",205,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(205)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		while((true)){
			HX_STACK_LINE(205)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(205)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(205)
			if ((tmp1)){
				HX_STACK_LINE(205)
				break;
			}
			HX_STACK_LINE(205)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(205)
			++(_g);
			HX_STACK_LINE(207)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			module->onGamepadButtonUp(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",216,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(216)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(216)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			if ((tmp1)){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(216)
			++(_g);
			HX_STACK_LINE(218)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			module->onGamepadConnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",227,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(227)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			if ((tmp1)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(227)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(227)
			++(_g);
			HX_STACK_LINE(229)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			module->onGamepadDisconnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",238,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(238)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(238)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			if ((tmp1)){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(238)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(238)
			++(_g);
			HX_STACK_LINE(240)
			int tmp3 = keyCode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			int tmp4 = modifier;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			module->onKeyDown(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",249,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(249)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(249)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			if ((tmp1)){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(249)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(249)
			++(_g);
			HX_STACK_LINE(251)
			int tmp3 = keyCode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			int tmp4 = modifier;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			module->onKeyUp(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",260,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(260)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(260)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(260)
			if ((tmp1)){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(260)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(260)
			++(_g);
			HX_STACK_LINE(262)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(262)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			int tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			module->onMouseDown(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onMouseMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",271,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(271)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(271)
		while((true)){
			HX_STACK_LINE(271)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(271)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(271)
			if ((tmp1)){
				HX_STACK_LINE(271)
				break;
			}
			HX_STACK_LINE(271)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(271)
			++(_g);
			HX_STACK_LINE(273)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			module->onMouseMove(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onMouseMoveRelative( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMoveRelative",0xf3ee70bf,"lime.app.Application.onMouseMoveRelative","lime/app/Application.hx",282,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(282)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(282)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(282)
		while((true)){
			HX_STACK_LINE(282)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(282)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(282)
			if ((tmp1)){
				HX_STACK_LINE(282)
				break;
			}
			HX_STACK_LINE(282)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(282)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(282)
			++(_g);
			HX_STACK_LINE(284)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			module->onMouseMoveRelative(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",293,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(293)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(293)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(293)
		while((true)){
			HX_STACK_LINE(293)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(293)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(293)
			if ((tmp1)){
				HX_STACK_LINE(293)
				break;
			}
			HX_STACK_LINE(293)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(293)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(293)
			++(_g);
			HX_STACK_LINE(295)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(295)
			int tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(295)
			module->onMouseUp(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",304,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(304)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(304)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(304)
			if ((tmp1)){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(304)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(304)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(304)
			++(_g);
			HX_STACK_LINE(306)
			Float tmp3 = deltaX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(306)
			Float tmp4 = deltaY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			module->onMouseWheel(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",315,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(315)
		while((true)){
			HX_STACK_LINE(315)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(315)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(315)
			if ((tmp1)){
				HX_STACK_LINE(315)
				break;
			}
			HX_STACK_LINE(315)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(315)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(315)
			++(_g);
			HX_STACK_LINE(317)
			module->onRenderContextLost();
		}
	}
return null();
}


Void Application_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",326,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(326)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(326)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(326)
		while((true)){
			HX_STACK_LINE(326)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(326)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(326)
			if ((tmp1)){
				HX_STACK_LINE(326)
				break;
			}
			HX_STACK_LINE(326)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(326)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(326)
			++(_g);
			HX_STACK_LINE(328)
			::lime::graphics::RenderContext tmp3 = context;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			module->onRenderContextRestored(tmp3);
		}
	}
return null();
}


Void Application_obj::onTextEdit( ::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Application","onTextEdit",0xa9173afa,"lime.app.Application.onTextEdit","lime/app/Application.hx",337,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(337)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(337)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(337)
		while((true)){
			HX_STACK_LINE(337)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(337)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(337)
			if ((tmp1)){
				HX_STACK_LINE(337)
				break;
			}
			HX_STACK_LINE(337)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(337)
			++(_g);
			HX_STACK_LINE(339)
			::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			int tmp4 = start;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			int tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(339)
			module->onTextEdit(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onTextInput( ::String text){
{
		HX_STACK_FRAME("lime.app.Application","onTextInput",0x9f78251a,"lime.app.Application.onTextInput","lime/app/Application.hx",348,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(348)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(348)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(348)
			if ((tmp1)){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(348)
			++(_g);
			HX_STACK_LINE(350)
			::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			module->onTextInput(tmp3);
		}
	}
return null();
}


Void Application_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",359,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(359)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			if ((tmp1)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(359)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(359)
			++(_g);
			HX_STACK_LINE(361)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(361)
			int tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(361)
			module->onTouchEnd(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",370,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(370)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(370)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(370)
			if ((tmp1)){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(370)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(370)
			++(_g);
			HX_STACK_LINE(372)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			int tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(372)
			module->onTouchMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",381,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(381)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		while((true)){
			HX_STACK_LINE(381)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(381)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			if ((tmp1)){
				HX_STACK_LINE(381)
				break;
			}
			HX_STACK_LINE(381)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(381)
			++(_g);
			HX_STACK_LINE(383)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(383)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			int tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			module->onTouchStart(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",392,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		while((true)){
			HX_STACK_LINE(392)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(392)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(392)
			if ((tmp1)){
				HX_STACK_LINE(392)
				break;
			}
			HX_STACK_LINE(392)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(392)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(392)
			++(_g);
			HX_STACK_LINE(394)
			module->onWindowActivate();
		}
	}
return null();
}


Void Application_obj::onWindowClose( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",403,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(403)
		while((true)){
			HX_STACK_LINE(403)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(403)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(403)
			if ((tmp1)){
				HX_STACK_LINE(403)
				break;
			}
			HX_STACK_LINE(403)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(403)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(403)
			++(_g);
			HX_STACK_LINE(405)
			module->onWindowClose();
		}
	}
return null();
}


Void Application_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",414,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(414)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(414)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(414)
		while((true)){
			HX_STACK_LINE(414)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(414)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(414)
			if ((tmp1)){
				HX_STACK_LINE(414)
				break;
			}
			HX_STACK_LINE(414)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(414)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(414)
			++(_g);
			HX_STACK_LINE(416)
			module->onWindowDeactivate();
		}
	}
return null();
}


Void Application_obj::onWindowEnter( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowEnter",0x3b59cd45,"lime.app.Application.onWindowEnter","lime/app/Application.hx",425,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(425)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(425)
		while((true)){
			HX_STACK_LINE(425)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(425)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(425)
			if ((tmp1)){
				HX_STACK_LINE(425)
				break;
			}
			HX_STACK_LINE(425)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(425)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(425)
			++(_g);
			HX_STACK_LINE(427)
			module->onWindowEnter();
		}
	}
return null();
}


Void Application_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",436,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(436)
		while((true)){
			HX_STACK_LINE(436)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(436)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(436)
			if ((tmp1)){
				HX_STACK_LINE(436)
				break;
			}
			HX_STACK_LINE(436)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(436)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(436)
			++(_g);
			HX_STACK_LINE(438)
			module->onWindowFocusIn();
		}
	}
return null();
}


Void Application_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",447,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(447)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(447)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(447)
		while((true)){
			HX_STACK_LINE(447)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(447)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(447)
			if ((tmp1)){
				HX_STACK_LINE(447)
				break;
			}
			HX_STACK_LINE(447)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(447)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(447)
			++(_g);
			HX_STACK_LINE(449)
			module->onWindowFocusOut();
		}
	}
return null();
}


Void Application_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",458,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(458)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(458)
		while((true)){
			HX_STACK_LINE(458)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(458)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			if ((tmp1)){
				HX_STACK_LINE(458)
				break;
			}
			HX_STACK_LINE(458)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(458)
			++(_g);
			HX_STACK_LINE(460)
			module->onWindowFullscreen();
		}
	}
return null();
}


Void Application_obj::onWindowLeave( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowLeave",0x3d269524,"lime.app.Application.onWindowLeave","lime/app/Application.hx",469,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(469)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(469)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(469)
		while((true)){
			HX_STACK_LINE(469)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(469)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(469)
			if ((tmp1)){
				HX_STACK_LINE(469)
				break;
			}
			HX_STACK_LINE(469)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(469)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(469)
			++(_g);
			HX_STACK_LINE(471)
			module->onWindowLeave();
		}
	}
return null();
}


Void Application_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",480,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(480)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(480)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(480)
		while((true)){
			HX_STACK_LINE(480)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(480)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(480)
			if ((tmp1)){
				HX_STACK_LINE(480)
				break;
			}
			HX_STACK_LINE(480)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(480)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(480)
			++(_g);
			HX_STACK_LINE(482)
			module->onWindowMinimize();
		}
	}
return null();
}


Void Application_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",491,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(491)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(491)
		while((true)){
			HX_STACK_LINE(491)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(491)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(491)
			if ((tmp1)){
				HX_STACK_LINE(491)
				break;
			}
			HX_STACK_LINE(491)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(491)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(491)
			++(_g);
			HX_STACK_LINE(493)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(493)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(493)
			module->onWindowMove(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",502,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(502)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(502)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(502)
		while((true)){
			HX_STACK_LINE(502)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(502)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(502)
			if ((tmp1)){
				HX_STACK_LINE(502)
				break;
			}
			HX_STACK_LINE(502)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(502)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(502)
			++(_g);
			HX_STACK_LINE(504)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(504)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(504)
			module->onWindowResize(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",513,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(513)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(513)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			if ((tmp1)){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(513)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(513)
			++(_g);
			HX_STACK_LINE(515)
			module->onWindowRestore();
		}
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",526,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(528)
		::lime::app::IModule tmp = module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(528)
		this->modules->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","removeRenderer",0x39f2cd0b,"lime.app.Application.removeRenderer","lime/app/Application.hx",537,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(539)
		bool tmp = (renderer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		if ((tmp)){
			HX_STACK_LINE(539)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(539)
			::lime::graphics::Renderer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(539)
			int tmp4 = this->renderers->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(539)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(539)
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			HX_STACK_LINE(539)
			tmp1 = false;
		}
		HX_STACK_LINE(539)
		if ((tmp1)){
			HX_STACK_LINE(541)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(541)
			this->renderers->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeRenderer,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",552,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(554)
		bool tmp = (window != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		if ((tmp)){
			HX_STACK_LINE(554)
			::lime::ui::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(554)
			::lime::ui::Window tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(554)
			int tmp4 = this->windows->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(554)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(554)
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			HX_STACK_LINE(554)
			tmp1 = false;
		}
		HX_STACK_LINE(554)
		if ((tmp1)){
			HX_STACK_LINE(556)
			window->close();
			HX_STACK_LINE(557)
			::lime::ui::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(557)
			this->windows->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeWindow,(void))

Void Application_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",566,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(566)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(566)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(566)
		while((true)){
			HX_STACK_LINE(566)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(566)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(566)
			if ((tmp1)){
				HX_STACK_LINE(566)
				break;
			}
			HX_STACK_LINE(566)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(566)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(566)
			++(_g);
			HX_STACK_LINE(568)
			::lime::graphics::RenderContext tmp3 = context;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(568)
			module->render(tmp3);
		}
	}
return null();
}


Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",577,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(577)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(577)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(577)
		while((true)){
			HX_STACK_LINE(577)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(577)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(577)
			if ((tmp1)){
				HX_STACK_LINE(577)
				break;
			}
			HX_STACK_LINE(577)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(577)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(577)
			++(_g);
			HX_STACK_LINE(579)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			module->update(tmp3);
		}
	}
return null();
}


Float Application_obj::get_frameRate( ){
	HX_STACK_FRAME("lime.app.Application","get_frameRate",0x719f92a0,"lime.app.Application.get_frameRate","lime/app/Application.hx",593,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	Float tmp1 = tmp->getFrameRate();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(595)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_frameRate,return )

Float Application_obj::set_frameRate( Float value){
	HX_STACK_FRAME("lime.app.Application","set_frameRate",0xb6a574ac,"lime.app.Application.set_frameRate","lime/app/Application.hx",600,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(602)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	Float tmp2 = tmp->setFrameRate(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(602)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_frameRate,return )

::lime::graphics::Renderer Application_obj::get_renderer( ){
	HX_STACK_FRAME("lime.app.Application","get_renderer",0xa67be3b0,"lime.app.Application.get_renderer","lime/app/Application.hx",607,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	::lime::graphics::Renderer tmp = this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",614,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(616)
	::lime::ui::Window tmp = this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp == hx::paccAlways ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp == hx::paccAlways ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"renderers") ) { return renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::lime::app::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"));
	outFields->push(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Application_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_HCSTRING("windows","\x83","\xde","\x74","\xe8")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsBool,(int)offsetof(Application_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::Application*/ ,(void *) &Application_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("addModule","\xad","\x69","\xf7","\x78"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
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
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
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
	HX_HCSTRING("removeModule","\x10","\xd0","\x00","\x30"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_renderer","\x4c","\x79","\xf5","\x67"),
	HX_HCSTRING("get_window","\xb9","\x03","\x14","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

hx::Class Application_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	::String(null()) };

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Application","\x8a","\x94","\x72","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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
} // end namespace app
