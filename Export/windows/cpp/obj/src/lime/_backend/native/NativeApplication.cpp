#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo
#include <lime/_backend/native/_NativeApplication/UpdateEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
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
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeApplication_obj::__construct(::lime::app::Application parent)
{
HX_STACK_FRAME("lime._backend.native.NativeApplication","new",0xf81a1e94,"lime._backend.native.NativeApplication.new","lime/_backend/native/NativeApplication.hx",24,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(34)
	this->windowEventInfo = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(33)
	this->updateEventInfo = ::lime::_backend::native::_NativeApplication::UpdateEventInfo_obj::__new(null(),null());
	HX_STACK_LINE(32)
	this->touchEventInfo = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(31)
	this->textEventInfo = ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(30)
	this->renderEventInfo = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(29)
	this->mouseEventInfo = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(28)
	this->keyEventInfo = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(null(),null(),null());
	HX_STACK_LINE(27)
	this->gamepadEventInfo = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(44)
	this->parent = parent;
	HX_STACK_LINE(45)
	this->frameRate = (int)60;
	HX_STACK_LINE(47)
	::lime::audio::AudioManager_obj::init(null());
}
;
	return null();
}

//NativeApplication_obj::~NativeApplication_obj() { }

Dynamic NativeApplication_obj::__CreateEmpty() { return  new NativeApplication_obj; }
hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new(::lime::app::Application parent)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeApplication_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","create",0xd50cf148,"lime._backend.native.NativeApplication.create","lime/_backend/native/NativeApplication.hx",52,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(54)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		tmp->config = config;
		HX_STACK_LINE(56)
		Dynamic tmp1 = ::lime::_backend::native::NativeApplication_obj::lime_application_create(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		this->handle = tmp1;
		HX_STACK_LINE(58)
		bool tmp2 = (config != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(60)
			Dynamic tmp3 = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			this->setFrameRate(tmp3);
			HX_STACK_LINE(61)
			::lime::ui::Window tmp4 = ::lime::ui::Window_obj::__new(config);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			::lime::ui::Window window = tmp4;		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(62)
			::lime::graphics::Renderer tmp5 = ::lime::graphics::Renderer_obj::__new(window);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			::lime::graphics::Renderer renderer = tmp5;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(63)
			::lime::app::Application tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			::lime::ui::Window tmp7 = window;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			tmp6->addWindow(tmp7);
			HX_STACK_LINE(64)
			::lime::app::Application tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			::lime::graphics::Renderer tmp9 = renderer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			tmp8->addRenderer(tmp9);
			HX_STACK_LINE(65)
			::lime::app::Application tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			::lime::graphics::RenderContext tmp11 = renderer->context;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			tmp10->init(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,create,(void))

int NativeApplication_obj::exec( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","exec",0x18dc12dd,"lime._backend.native.NativeApplication.exec","lime/_backend/native/NativeApplication.hx",72,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Dynamic tmp = this->handleGamepadEvent_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp1 = this->gamepadEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::lime::_backend::native::NativeApplication_obj::lime_gamepad_event_manager_register(tmp,tmp1);
	HX_STACK_LINE(75)
	Dynamic tmp2 = this->handleKeyEvent_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	::lime::_backend::native::_NativeApplication::KeyEventInfo tmp3 = this->keyEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	::lime::_backend::native::NativeApplication_obj::lime_key_event_manager_register(tmp2,tmp3);
	HX_STACK_LINE(76)
	Dynamic tmp4 = this->handleMouseEvent_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	::lime::_backend::native::_NativeApplication::MouseEventInfo tmp5 = this->mouseEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	::lime::_backend::native::NativeApplication_obj::lime_mouse_event_manager_register(tmp4,tmp5);
	HX_STACK_LINE(77)
	Dynamic tmp6 = this->handleRenderEvent_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	::lime::_backend::native::_NativeApplication::RenderEventInfo tmp7 = this->renderEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(77)
	::lime::_backend::native::NativeApplication_obj::lime_render_event_manager_register(tmp6,tmp7);
	HX_STACK_LINE(78)
	Dynamic tmp8 = this->handleTextEvent_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	::lime::_backend::native::_NativeApplication::TextEventInfo tmp9 = this->textEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(78)
	::lime::_backend::native::NativeApplication_obj::lime_text_event_manager_register(tmp8,tmp9);
	HX_STACK_LINE(79)
	Dynamic tmp10 = this->handleTouchEvent_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(79)
	::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(79)
	::lime::_backend::native::NativeApplication_obj::lime_touch_event_manager_register(tmp10,tmp11);
	HX_STACK_LINE(80)
	Dynamic tmp12 = this->handleUpdateEvent_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(80)
	::lime::_backend::native::_NativeApplication::UpdateEventInfo tmp13 = this->updateEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(80)
	::lime::_backend::native::NativeApplication_obj::lime_update_event_manager_register(tmp12,tmp13);
	HX_STACK_LINE(81)
	Dynamic tmp14 = this->handleWindowEvent_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(81)
	::lime::_backend::native::_NativeApplication::WindowEventInfo tmp15 = this->windowEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(81)
	::lime::_backend::native::NativeApplication_obj::lime_window_event_manager_register(tmp14,tmp15);
	HX_STACK_LINE(108)
	Dynamic tmp16 = this->handle;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(108)
	int tmp17 = ::lime::_backend::native::NativeApplication_obj::lime_application_exec(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(108)
	int result = tmp17;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(109)
	this->__cleanup();
	HX_STACK_LINE(110)
	int tmp18 = result;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(110)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exec,return )

Float NativeApplication_obj::getFrameRate( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","getFrameRate",0xe79bf983,"lime._backend.native.NativeApplication.getFrameRate","lime/_backend/native/NativeApplication.hx",121,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Float tmp = this->frameRate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,getFrameRate,return )

Void NativeApplication_obj::handleGamepadEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleGamepadEvent",0x54f9e7cd,"lime._backend.native.NativeApplication.handleGamepadEvent","lime/_backend/native/NativeApplication.hx",128,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		::lime::ui::Window tmp1 = tmp->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		if ((tmp2)){
			HX_STACK_LINE(132)
			::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			int _g = tmp3->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(136)
					::haxe::ds::IntMap tmp5 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(136)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp6 = this->gamepadEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(136)
					int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(136)
					::lime::ui::Gamepad tmp8 = tmp5->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(136)
					::lime::ui::Gamepad gamepad = tmp8;		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(137)
					bool tmp9 = (gamepad != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					if ((tmp9)){
						HX_STACK_LINE(137)
						::lime::app::Application tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(137)
						::lime::ui::Window tmp11 = tmp10->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp11->onGamepadAxisMove->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(137)
						::lime::app::Application tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(137)
						::lime::ui::Window tmp13 = tmp12->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp13->onGamepadAxisMove->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp14 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							if ((tmp15)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(137)
							::lime::ui::Gamepad tmp17 = gamepad;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(137)
							::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp18 = this->gamepadEventInfo;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(137)
							int tmp19 = tmp18->axis;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(137)
							::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp20 = this->gamepadEventInfo;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(137)
							Float tmp21 = tmp20->value;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(58)
							tmp16(tmp17,tmp19,tmp21).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp22 = repeat->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(60)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(60)
							if ((tmp23)){
								HX_STACK_LINE(137)
								::lime::app::Application tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(137)
								::lime::ui::Window tmp25 = tmp24->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								Dynamic tmp26 = listeners->__GetItem(i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								tmp25->onGamepadAxisMove->remove(tmp26);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(141)
					::haxe::ds::IntMap tmp5 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp6 = this->gamepadEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					::lime::ui::Gamepad tmp8 = tmp5->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					::lime::ui::Gamepad gamepad = tmp8;		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(142)
					bool tmp9 = (gamepad != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					if ((tmp9)){
						HX_STACK_LINE(142)
						::lime::app::Application tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						::lime::ui::Window tmp11 = tmp10->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp11->onGamepadButtonDown->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(142)
						::lime::app::Application tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(142)
						::lime::ui::Window tmp13 = tmp12->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp13->onGamepadButtonDown->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp14 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							if ((tmp15)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(142)
							::lime::ui::Gamepad tmp17 = gamepad;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(142)
							::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp18 = this->gamepadEventInfo;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(142)
							int tmp19 = tmp18->button;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(58)
							tmp16(tmp17,tmp19).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp20 = repeat->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(60)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(60)
							if ((tmp21)){
								HX_STACK_LINE(142)
								::lime::app::Application tmp22 = this->parent;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(142)
								::lime::ui::Window tmp23 = tmp22->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(62)
								Dynamic tmp24 = listeners->__GetItem(i);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(62)
								tmp23->onGamepadButtonDown->remove(tmp24);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(146)
					::haxe::ds::IntMap tmp5 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(146)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp6 = this->gamepadEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(146)
					int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(146)
					::lime::ui::Gamepad tmp8 = tmp5->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(146)
					::lime::ui::Gamepad gamepad = tmp8;		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(147)
					bool tmp9 = (gamepad != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					if ((tmp9)){
						HX_STACK_LINE(147)
						::lime::app::Application tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(147)
						::lime::ui::Window tmp11 = tmp10->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp11->onGamepadButtonUp->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(147)
						::lime::app::Application tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(147)
						::lime::ui::Window tmp13 = tmp12->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp13->onGamepadButtonUp->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp14 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							if ((tmp15)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							::lime::ui::Gamepad tmp17 = gamepad;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(147)
							::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp18 = this->gamepadEventInfo;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(147)
							int tmp19 = tmp18->button;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(58)
							tmp16(tmp17,tmp19).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp20 = repeat->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(60)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(60)
							if ((tmp21)){
								HX_STACK_LINE(147)
								::lime::app::Application tmp22 = this->parent;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(147)
								::lime::ui::Window tmp23 = tmp22->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(62)
								Dynamic tmp24 = listeners->__GetItem(i);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(62)
								tmp23->onGamepadButtonUp->remove(tmp24);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(151)
					::haxe::ds::IntMap tmp5 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(151)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp6 = this->gamepadEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(151)
					int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(151)
					bool tmp8 = tmp5->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(151)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(151)
					if ((tmp9)){
						HX_STACK_LINE(153)
						::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp10 = this->gamepadEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(153)
						int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(153)
						::lime::ui::Gamepad tmp12 = ::lime::ui::Gamepad_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(153)
						::lime::ui::Gamepad gamepad = tmp12;		HX_STACK_VAR(gamepad,"gamepad");
						HX_STACK_LINE(154)
						::haxe::ds::IntMap tmp13 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(154)
						::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp14 = this->gamepadEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(154)
						int tmp15 = tmp14->id;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(154)
						::lime::ui::Gamepad tmp16 = gamepad;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(154)
						tmp13->set(tmp15,tmp16);
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(155)
							::lime::app::Application tmp17 = this->parent;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(155)
							::lime::ui::Window tmp18 = tmp17->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(52)
							cpp::ArrayBase listeners = tmp18->onGamepadConnect->listeners;		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(155)
							::lime::app::Application tmp19 = this->parent;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(155)
							::lime::ui::Window tmp20 = tmp19->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(53)
							Array< bool > repeat = tmp20->onGamepadConnect->repeat;		HX_STACK_VAR(repeat,"repeat");
							HX_STACK_LINE(54)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(56)
							while((true)){
								HX_STACK_LINE(56)
								bool tmp21 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(56)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(56)
								if ((tmp22)){
									HX_STACK_LINE(56)
									break;
								}
								HX_STACK_LINE(58)
								Dynamic tmp23 = listeners->__GetItem(i);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(155)
								::lime::ui::Gamepad tmp24 = gamepad;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(58)
								tmp23(tmp24).Cast< Void >();
								HX_STACK_LINE(60)
								bool tmp25 = repeat->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(60)
								bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(60)
								if ((tmp26)){
									HX_STACK_LINE(155)
									::lime::app::Application tmp27 = this->parent;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(155)
									::lime::ui::Window tmp28 = tmp27->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(62)
									Dynamic tmp29 = listeners->__GetItem(i);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(62)
									tmp28->onGamepadConnect->remove(tmp29);
								}
								else{
									HX_STACK_LINE(66)
									(i)++;
								}
							}
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(161)
					::haxe::ds::IntMap tmp5 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(161)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp6 = this->gamepadEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(161)
					int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(161)
					::lime::ui::Gamepad tmp8 = tmp5->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(161)
					::lime::ui::Gamepad gamepad = tmp8;		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(162)
					bool tmp9 = (gamepad != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					if ((tmp9)){
						HX_STACK_LINE(162)
						gamepad->connected = false;
					}
					HX_STACK_LINE(163)
					::haxe::ds::IntMap tmp10 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(163)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp11 = this->gamepadEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(163)
					int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(163)
					tmp10->remove(tmp12);
					HX_STACK_LINE(164)
					bool tmp13 = (gamepad != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(164)
					if ((tmp13)){
						HX_STACK_LINE(164)
						::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(164)
						::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp15->onGamepadDisconnect->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(164)
						::lime::app::Application tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(164)
						::lime::ui::Window tmp17 = tmp16->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp17->onGamepadDisconnect->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp18 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(56)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(56)
							if ((tmp19)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(164)
							::lime::ui::Gamepad tmp21 = gamepad;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(58)
							tmp20(tmp21).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp22 = repeat->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(60)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(60)
							if ((tmp23)){
								HX_STACK_LINE(164)
								::lime::app::Application tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(164)
								::lime::ui::Window tmp25 = tmp24->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								Dynamic tmp26 = listeners->__GetItem(i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								tmp25->onGamepadDisconnect->remove(tmp26);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleGamepadEvent,(void))

Void NativeApplication_obj::handleKeyEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleKeyEvent",0xe8484c0f,"lime._backend.native.NativeApplication.handleKeyEvent","lime/_backend/native/NativeApplication.hx",173,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		::lime::ui::Window tmp1 = tmp->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		if ((tmp2)){
			HX_STACK_LINE(177)
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp3 = this->keyEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			int _g = tmp3->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(177)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(181)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(181)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onKeyDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(181)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(181)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onKeyDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(181)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp12 = this->keyEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(181)
						int tmp13 = tmp12->keyCode;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp14 = this->keyEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(181)
						int tmp15 = tmp14->modifier;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						if ((tmp17)){
							HX_STACK_LINE(181)
							::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(181)
							::lime::ui::Window tmp19 = tmp18->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(62)
							Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(62)
							tmp19->onKeyDown->remove(tmp20);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(185)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(185)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onKeyUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(185)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(185)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onKeyUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp12 = this->keyEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						int tmp13 = tmp12->keyCode;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(185)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp14 = this->keyEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(185)
						int tmp15 = tmp14->modifier;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						if ((tmp17)){
							HX_STACK_LINE(185)
							::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(185)
							::lime::ui::Window tmp19 = tmp18->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(62)
							Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(62)
							tmp19->onKeyUp->remove(tmp20);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleKeyEvent,(void))

Void NativeApplication_obj::handleMouseEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleMouseEvent",0xe26e46c9,"lime._backend.native.NativeApplication.handleMouseEvent","lime/_backend/native/NativeApplication.hx",194,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::lime::ui::Window tmp1 = tmp->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		if ((tmp2)){
			HX_STACK_LINE(198)
			::lime::_backend::native::_NativeApplication::MouseEventInfo tmp3 = this->mouseEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			int _g = tmp3->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(202)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(202)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onMouseDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(202)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(202)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onMouseDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(202)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(202)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(202)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(202)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(202)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp16 = this->mouseEventInfo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(202)
						int tmp17 = tmp16->button;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15,tmp17).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(60)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						if ((tmp19)){
							HX_STACK_LINE(202)
							::lime::app::Application tmp20 = this->parent;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(202)
							::lime::ui::Window tmp21 = tmp20->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(62)
							Dynamic tmp22 = listeners->__GetItem(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(62)
							tmp21->onMouseDown->remove(tmp22);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(206)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(206)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onMouseUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(206)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(206)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onMouseUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(206)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(206)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(206)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(206)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp16 = this->mouseEventInfo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						int tmp17 = tmp16->button;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15,tmp17).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(60)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						if ((tmp19)){
							HX_STACK_LINE(206)
							::lime::app::Application tmp20 = this->parent;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(206)
							::lime::ui::Window tmp21 = tmp20->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(62)
							Dynamic tmp22 = listeners->__GetItem(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(62)
							tmp21->onMouseUp->remove(tmp22);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(210)
						::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(210)
						::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp6->onMouseMove->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(210)
						::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(210)
						::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp8->onMouseMove->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							if ((tmp10)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(210)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(210)
							Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(210)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(210)
							Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(58)
							tmp11(tmp13,tmp15).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(60)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(60)
							if ((tmp17)){
								HX_STACK_LINE(210)
								::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(210)
								::lime::ui::Window tmp19 = tmp18->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(62)
								Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								tmp19->onMouseMove->remove(tmp20);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(211)
						::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(211)
						::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp6->onMouseMoveRelative->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(211)
						::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(211)
						::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp8->onMouseMoveRelative->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							if ((tmp10)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(211)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(211)
							Float tmp13 = tmp12->movementX;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(211)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(211)
							Float tmp15 = tmp14->movementY;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(58)
							tmp11(tmp13,tmp15).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(60)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(60)
							if ((tmp17)){
								HX_STACK_LINE(211)
								::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(211)
								::lime::ui::Window tmp19 = tmp18->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(62)
								Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								tmp19->onMouseMoveRelative->remove(tmp20);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(215)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(215)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onMouseWheel->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(215)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(215)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onMouseWheel->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(215)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(215)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(215)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(215)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						if ((tmp17)){
							HX_STACK_LINE(215)
							::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(215)
							::lime::ui::Window tmp19 = tmp18->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(62)
							Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(62)
							tmp19->onMouseWheel->remove(tmp20);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleMouseEvent,(void))

Void NativeApplication_obj::handleRenderEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleRenderEvent",0xf3931b50,"lime._backend.native.NativeApplication.handleRenderEvent","lime/_backend/native/NativeApplication.hx",226,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		::lime::graphics::Renderer tmp1 = tmp->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		if ((tmp2)){
			HX_STACK_LINE(230)
			::lime::_backend::native::_NativeApplication::RenderEventInfo tmp3 = this->renderEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			int _g = tmp3->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(230)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(234)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(234)
					tmp6->render();
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(235)
						::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(235)
						::lime::graphics::Renderer tmp8 = tmp7->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp8->onRender->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(235)
						::lime::app::Application tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(235)
						::lime::graphics::Renderer tmp10 = tmp9->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp10->onRender->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp11 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(56)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(56)
							if ((tmp12)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp13 = listeners->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(235)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(235)
							::lime::graphics::Renderer tmp15 = tmp14->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(235)
							::lime::graphics::RenderContext tmp16 = tmp15->context;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(58)
							tmp13(tmp16).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp17 = repeat->__get(i);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(60)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(60)
							if ((tmp18)){
								HX_STACK_LINE(235)
								::lime::app::Application tmp19 = this->parent;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(235)
								::lime::graphics::Renderer tmp20 = tmp19->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								Dynamic tmp21 = listeners->__GetItem(i);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(62)
								tmp20->onRender->remove(tmp21);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
					HX_STACK_LINE(236)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(236)
					::lime::graphics::Renderer tmp8 = tmp7->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(236)
					tmp8->flip();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(240)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(240)
					::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(240)
					bool tmp7 = tmp6->backend->useHardware;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(240)
					if ((tmp7)){
						HX_STACK_LINE(242)
						::lime::app::Application tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(242)
						::lime::graphics::Renderer tmp9 = tmp8->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(242)
						tmp9->context = null();
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(243)
							::lime::app::Application tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(243)
							::lime::graphics::Renderer tmp11 = tmp10->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(52)
							cpp::ArrayBase listeners = tmp11->onRenderContextLost->listeners;		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(243)
							::lime::app::Application tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(243)
							::lime::graphics::Renderer tmp13 = tmp12->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(53)
							Array< bool > repeat = tmp13->onRenderContextLost->repeat;		HX_STACK_VAR(repeat,"repeat");
							HX_STACK_LINE(54)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(56)
							while((true)){
								HX_STACK_LINE(56)
								bool tmp14 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(56)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(56)
								if ((tmp15)){
									HX_STACK_LINE(56)
									break;
								}
								HX_STACK_LINE(58)
								Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(58)
								tmp16().Cast< Void >();
								HX_STACK_LINE(60)
								bool tmp17 = repeat->__get(i);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(60)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(60)
								if ((tmp18)){
									HX_STACK_LINE(243)
									::lime::app::Application tmp19 = this->parent;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(243)
									::lime::graphics::Renderer tmp20 = tmp19->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(62)
									Dynamic tmp21 = listeners->__GetItem(i);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(62)
									tmp20->onRenderContextLost->remove(tmp21);
								}
								else{
									HX_STACK_LINE(66)
									(i)++;
								}
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(249)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(249)
					bool tmp7 = tmp6->backend->useHardware;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(249)
					if ((tmp7)){
						HX_STACK_LINE(254)
						::lime::graphics::GLRenderContext tmp8 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(254)
						::lime::graphics::RenderContext tmp9 = ::lime::graphics::RenderContext_obj::OPENGL(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(254)
						::lime::app::Application tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(254)
						::lime::graphics::Renderer tmp11 = tmp10->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(254)
						tmp11->context = tmp9;
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(257)
							::lime::app::Application tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(257)
							::lime::graphics::Renderer tmp13 = tmp12->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(52)
							cpp::ArrayBase listeners = tmp13->onRenderContextRestored->listeners;		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(257)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(257)
							::lime::graphics::Renderer tmp15 = tmp14->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(53)
							Array< bool > repeat = tmp15->onRenderContextRestored->repeat;		HX_STACK_VAR(repeat,"repeat");
							HX_STACK_LINE(54)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(56)
							while((true)){
								HX_STACK_LINE(56)
								bool tmp16 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(56)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(56)
								if ((tmp17)){
									HX_STACK_LINE(56)
									break;
								}
								HX_STACK_LINE(58)
								Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(257)
								::lime::app::Application tmp19 = this->parent;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(257)
								::lime::graphics::Renderer tmp20 = tmp19->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(257)
								::lime::graphics::RenderContext tmp21 = tmp20->context;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(58)
								tmp18(tmp21).Cast< Void >();
								HX_STACK_LINE(60)
								bool tmp22 = repeat->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(60)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(60)
								if ((tmp23)){
									HX_STACK_LINE(257)
									::lime::app::Application tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(257)
									::lime::graphics::Renderer tmp25 = tmp24->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(62)
									Dynamic tmp26 = listeners->__GetItem(i);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(62)
									tmp25->onRenderContextRestored->remove(tmp26);
								}
								else{
									HX_STACK_LINE(66)
									(i)++;
								}
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleRenderEvent,(void))

Void NativeApplication_obj::handleTextEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTextEvent",0x373acb99,"lime._backend.native.NativeApplication.handleTextEvent","lime/_backend/native/NativeApplication.hx",270,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		::lime::_backend::native::_NativeApplication::TextEventInfo tmp = this->textEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(274)
				::lime::app::Application tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(274)
				::lime::ui::Window tmp3 = tmp2->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				cpp::ArrayBase listeners = tmp3->onTextInput->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(274)
				::lime::app::Application tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				::lime::ui::Window tmp5 = tmp4->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Array< bool > repeat = tmp5->onTextInput->repeat;		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(54)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				while((true)){
					HX_STACK_LINE(56)
					bool tmp6 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(56)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					if ((tmp7)){
						HX_STACK_LINE(56)
						break;
					}
					HX_STACK_LINE(58)
					Dynamic tmp8 = listeners->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(274)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp9 = this->textEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(274)
					::String tmp10 = tmp9->text;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(58)
					tmp8(tmp10).Cast< Void >();
					HX_STACK_LINE(60)
					bool tmp11 = repeat->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(60)
					if ((tmp12)){
						HX_STACK_LINE(274)
						::lime::app::Application tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(274)
						::lime::ui::Window tmp14 = tmp13->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(62)
						Dynamic tmp15 = listeners->__GetItem(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(62)
						tmp14->onTextInput->remove(tmp15);
					}
					else{
						HX_STACK_LINE(66)
						(i)++;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(278)
				::lime::app::Application tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(278)
				::lime::ui::Window tmp3 = tmp2->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				cpp::ArrayBase listeners = tmp3->onTextEdit->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(278)
				::lime::app::Application tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(278)
				::lime::ui::Window tmp5 = tmp4->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Array< bool > repeat = tmp5->onTextEdit->repeat;		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(54)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				while((true)){
					HX_STACK_LINE(56)
					bool tmp6 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(56)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					if ((tmp7)){
						HX_STACK_LINE(56)
						break;
					}
					HX_STACK_LINE(58)
					Dynamic tmp8 = listeners->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(278)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp9 = this->textEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(278)
					::String tmp10 = tmp9->text;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(278)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp11 = this->textEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(278)
					int tmp12 = tmp11->start;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(278)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp13 = this->textEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(278)
					int tmp14 = tmp13->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(58)
					tmp8(tmp10,tmp12,tmp14).Cast< Void >();
					HX_STACK_LINE(60)
					bool tmp15 = repeat->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(60)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(60)
					if ((tmp16)){
						HX_STACK_LINE(278)
						::lime::app::Application tmp17 = this->parent;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(278)
						::lime::ui::Window tmp18 = tmp17->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(62)
						Dynamic tmp19 = listeners->__GetItem(i);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(62)
						tmp18->onTextEdit->remove(tmp19);
					}
					else{
						HX_STACK_LINE(66)
						(i)++;
					}
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTextEvent,(void))

Void NativeApplication_obj::handleTouchEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTouchEvent",0xbe3236ef,"lime._backend.native.NativeApplication.handleTouchEvent","lime/_backend/native/NativeApplication.hx",287,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		::lime::ui::Window tmp1 = tmp->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		if ((tmp2)){
			HX_STACK_LINE(291)
			::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			int _g = tmp3->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(295)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(295)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onTouchStart->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(295)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(295)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onTouchStart->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(295)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp12 = this->touchEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(295)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(295)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp14 = this->touchEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(295)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(295)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp16 = this->touchEventInfo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(295)
						int tmp17 = tmp16->id;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15,tmp17).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(60)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						if ((tmp19)){
							HX_STACK_LINE(295)
							::lime::app::Application tmp20 = this->parent;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(295)
							::lime::ui::Window tmp21 = tmp20->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(62)
							Dynamic tmp22 = listeners->__GetItem(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(62)
							tmp21->onTouchStart->remove(tmp22);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(299)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(299)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onTouchEnd->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(299)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(299)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onTouchEnd->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(299)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp12 = this->touchEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(299)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(299)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp14 = this->touchEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(299)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(299)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp16 = this->touchEventInfo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(299)
						int tmp17 = tmp16->id;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15,tmp17).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(60)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						if ((tmp19)){
							HX_STACK_LINE(299)
							::lime::app::Application tmp20 = this->parent;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(299)
							::lime::ui::Window tmp21 = tmp20->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(62)
							Dynamic tmp22 = listeners->__GetItem(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(62)
							tmp21->onTouchEnd->remove(tmp22);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(303)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(303)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onTouchMove->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(303)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(303)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onTouchMove->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(303)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp12 = this->touchEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(303)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(303)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp14 = this->touchEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(303)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(303)
						::lime::_backend::native::_NativeApplication::TouchEventInfo tmp16 = this->touchEventInfo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(303)
						int tmp17 = tmp16->id;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(58)
						tmp11(tmp13,tmp15,tmp17).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(60)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						if ((tmp19)){
							HX_STACK_LINE(303)
							::lime::app::Application tmp20 = this->parent;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(303)
							::lime::ui::Window tmp21 = tmp20->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(62)
							Dynamic tmp22 = listeners->__GetItem(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(62)
							tmp21->onTouchMove->remove(tmp22);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTouchEvent,(void))

Void NativeApplication_obj::handleUpdateEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleUpdateEvent",0x0d7a57bd,"lime._backend.native.NativeApplication.handleUpdateEvent","lime/_backend/native/NativeApplication.hx",314,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(316)
		this->updateTimer();
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(317)
			::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			cpp::ArrayBase listeners = tmp->onUpdate->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(317)
			::lime::app::Application tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			Array< bool > repeat = tmp1->onUpdate->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp2 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(56)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(56)
				if ((tmp3)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(58)
				Dynamic tmp4 = listeners->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(317)
				::lime::_backend::native::_NativeApplication::UpdateEventInfo tmp5 = this->updateEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(317)
				int tmp6 = tmp5->deltaTime;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				tmp4(tmp6).Cast< Void >();
				HX_STACK_LINE(60)
				bool tmp7 = repeat->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				if ((tmp8)){
					HX_STACK_LINE(317)
					::lime::app::Application tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					Dynamic tmp10 = listeners->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					tmp9->onUpdate->remove(tmp10);
				}
				else{
					HX_STACK_LINE(66)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleUpdateEvent,(void))

Void NativeApplication_obj::handleWindowEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleWindowEvent",0x18b48476,"lime._backend.native.NativeApplication.handleWindowEvent","lime/_backend/native/NativeApplication.hx",322,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		::lime::ui::Window tmp1 = tmp->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		if ((tmp2)){
			HX_STACK_LINE(326)
			::lime::_backend::native::_NativeApplication::WindowEventInfo tmp3 = this->windowEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(326)
			int _g = tmp3->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(326)
			switch( (int)(tmp4)){
				case (int)0: {
					HX_STACK_LINE(330)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowActivate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(330)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(330)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowActivate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(330)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(330)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowActivate->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(334)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(334)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowClose->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(334)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(334)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowClose->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(334)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(334)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowClose->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(338)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(338)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowDeactivate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(338)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(338)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowDeactivate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(338)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(338)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowDeactivate->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(342)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(342)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowEnter->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(342)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(342)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowEnter->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(342)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(342)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowEnter->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(346)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(346)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowFocusIn->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(346)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(346)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowFocusIn->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(346)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(346)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowFocusIn->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(350)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(350)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowFocusOut->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(350)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(350)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowFocusOut->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(350)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(350)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowFocusOut->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(354)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(354)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp6->onWindowLeave->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(354)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(354)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp8->onWindowLeave->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						if ((tmp10)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp11().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(354)
							::lime::app::Application tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(354)
							::lime::ui::Window tmp15 = tmp14->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							tmp15->onWindowLeave->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(358)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(358)
					tmp6->__minimized = true;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(359)
						::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(359)
						::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp8->onWindowMinimize->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(359)
						::lime::app::Application tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(359)
						::lime::ui::Window tmp10 = tmp9->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp10->onWindowMinimize->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp11 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(56)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(56)
							if ((tmp12)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp13 = listeners->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(58)
							tmp13().Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(60)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(60)
							if ((tmp15)){
								HX_STACK_LINE(359)
								::lime::app::Application tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(359)
								::lime::ui::Window tmp17 = tmp16->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(62)
								Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(62)
								tmp17->onWindowMinimize->remove(tmp18);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(363)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp5 = this->windowEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(363)
					::lime::app::Application tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(363)
					::lime::ui::Window tmp7 = tmp6->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(363)
					tmp7->__x = tmp5->x;
					HX_STACK_LINE(364)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(364)
					::lime::app::Application tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(364)
					::lime::ui::Window tmp10 = tmp9->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(364)
					tmp10->__y = tmp8->y;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(365)
						::lime::app::Application tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(365)
						::lime::ui::Window tmp12 = tmp11->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp12->onWindowMove->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(365)
						::lime::app::Application tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(365)
						::lime::ui::Window tmp14 = tmp13->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp14->onWindowMove->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp15 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(56)
							if ((tmp16)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp17 = listeners->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(365)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp18 = this->windowEventInfo;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(365)
							int tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(365)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp20 = this->windowEventInfo;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(365)
							int tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(58)
							tmp17(tmp19,tmp21).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp22 = repeat->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(60)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(60)
							if ((tmp23)){
								HX_STACK_LINE(365)
								::lime::app::Application tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(365)
								::lime::ui::Window tmp25 = tmp24->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								Dynamic tmp26 = listeners->__GetItem(i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								tmp25->onWindowMove->remove(tmp26);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(369)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp5 = this->windowEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(369)
					::lime::app::Application tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(369)
					::lime::ui::Window tmp7 = tmp6->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(369)
					tmp7->__width = tmp5->width;
					HX_STACK_LINE(370)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(370)
					::lime::app::Application tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(370)
					::lime::ui::Window tmp10 = tmp9->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(370)
					tmp10->__height = tmp8->height;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(371)
						::lime::app::Application tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(371)
						::lime::ui::Window tmp12 = tmp11->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp12->onWindowResize->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(371)
						::lime::app::Application tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(371)
						::lime::ui::Window tmp14 = tmp13->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp14->onWindowResize->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp15 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(56)
							if ((tmp16)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp17 = listeners->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(371)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp18 = this->windowEventInfo;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(371)
							int tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(371)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp20 = this->windowEventInfo;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(371)
							int tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(58)
							tmp17(tmp19,tmp21).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp22 = repeat->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(60)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(60)
							if ((tmp23)){
								HX_STACK_LINE(371)
								::lime::app::Application tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(371)
								::lime::ui::Window tmp25 = tmp24->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								Dynamic tmp26 = listeners->__GetItem(i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								tmp25->onWindowResize->remove(tmp26);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(375)
					::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(375)
					::lime::ui::Window tmp6 = tmp5->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(375)
					tmp6->__fullscreen = false;
					HX_STACK_LINE(376)
					::lime::app::Application tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(376)
					::lime::ui::Window tmp8 = tmp7->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(376)
					tmp8->__minimized = false;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(377)
						::lime::app::Application tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(377)
						::lime::ui::Window tmp10 = tmp9->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp10->onWindowRestore->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(377)
						::lime::app::Application tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(377)
						::lime::ui::Window tmp12 = tmp11->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp12->onWindowRestore->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp13 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(56)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							if ((tmp14)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp15 = listeners->__GetItem(i);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(58)
							tmp15().Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(60)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(60)
							if ((tmp17)){
								HX_STACK_LINE(377)
								::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(377)
								::lime::ui::Window tmp19 = tmp18->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(62)
								Dynamic tmp20 = listeners->__GetItem(i);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								tmp19->onWindowRestore->remove(tmp20);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleWindowEvent,(void))

Float NativeApplication_obj::setFrameRate( Float value){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","setFrameRate",0xfc951cf7,"lime._backend.native.NativeApplication.setFrameRate","lime/_backend/native/NativeApplication.hx",386,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(388)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	::lime::_backend::native::NativeApplication_obj::lime_application_set_frame_rate(tmp,tmp1);
	HX_STACK_LINE(389)
	Float tmp2 = this->frameRate = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,setFrameRate,return )

Void NativeApplication_obj::updateTimer( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","updateTimer",0x8a9bcb30,"lime._backend.native.NativeApplication.updateTimer","lime/_backend/native/NativeApplication.hx",394,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		int tmp = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		if ((tmp1)){
			HX_STACK_LINE(398)
			int tmp2 = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(398)
			int currentTime = tmp2;		HX_STACK_VAR(currentTime,"currentTime");
			HX_STACK_LINE(399)
			bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
			HX_STACK_LINE(400)
			::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(402)
			{
				HX_STACK_LINE(402)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(402)
				int tmp3 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(402)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(402)
				while((true)){
					HX_STACK_LINE(402)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(402)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(402)
					if ((tmp5)){
						HX_STACK_LINE(402)
						break;
					}
					HX_STACK_LINE(402)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(402)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(404)
					::haxe::Timer tmp7 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(404)
					timer = tmp7;
					HX_STACK_LINE(406)
					bool tmp8 = (timer != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(406)
					if ((tmp8)){
						HX_STACK_LINE(408)
						bool tmp9 = (currentTime >= timer->mFireAt);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(408)
						if ((tmp9)){
							HX_STACK_LINE(410)
							hx::AddEq(timer->mFireAt,timer->mTime);
							HX_STACK_LINE(411)
							timer->run();
						}
					}
					else{
						HX_STACK_LINE(417)
						foundNull = true;
					}
				}
			}
			HX_STACK_LINE(423)
			bool tmp3 = foundNull;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			if ((tmp3)){

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 1; }
				bool run(::haxe::Timer val){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/_backend/native/NativeApplication.hx",425,0xb13849fd)
					HX_STACK_ARG(val,"val")
					{
						HX_STACK_LINE(425)
						bool tmp4 = (val != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(425)
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(425)
				::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_3_1()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,updateTimer,(void))

Void NativeApplication_obj::__cleanup( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","__cleanup",0x39614a38,"lime._backend.native.NativeApplication.__cleanup","lime/_backend/native/NativeApplication.hx",436,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		::lime::audio::AudioManager_obj::shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,__cleanup,(void))

Dynamic NativeApplication_obj::lime_application_create;

Dynamic NativeApplication_obj::lime_application_exec;

Dynamic NativeApplication_obj::lime_application_init;

Dynamic NativeApplication_obj::lime_application_set_frame_rate;

Dynamic NativeApplication_obj::lime_application_update;

Dynamic NativeApplication_obj::lime_application_quit;

Dynamic NativeApplication_obj::lime_gamepad_event_manager_register;

Dynamic NativeApplication_obj::lime_key_event_manager_register;

Dynamic NativeApplication_obj::lime_mouse_event_manager_register;

Dynamic NativeApplication_obj::lime_render_event_manager_register;

Dynamic NativeApplication_obj::lime_text_event_manager_register;

Dynamic NativeApplication_obj::lime_touch_event_manager_register;

Dynamic NativeApplication_obj::lime_update_event_manager_register;

Dynamic NativeApplication_obj::lime_window_event_manager_register;


NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_MARK_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_MARK_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_MARK_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_MARK_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_MARK_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_MARK_MEMBER_NAME(updateEventInfo,"updateEventInfo");
	HX_MARK_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_VISIT_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_VISIT_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_VISIT_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_VISIT_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_VISIT_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_VISIT_MEMBER_NAME(updateEventInfo,"updateEventInfo");
	HX_VISIT_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTimer") ) { return updateTimer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { return keyEventInfo; }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { return textEventInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { return mouseEventInfo; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { return touchEventInfo; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { return renderEventInfo; }
		if (HX_FIELD_EQ(inName,"updateEventInfo") ) { return updateEventInfo; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { return windowEventInfo; }
		if (HX_FIELD_EQ(inName,"handleTextEvent") ) { return handleTextEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { return gamepadEventInfo; }
		if (HX_FIELD_EQ(inName,"handleMouseEvent") ) { return handleMouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouchEvent") ) { return handleTouchEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleRenderEvent") ) { return handleRenderEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleUpdateEvent") ) { return handleUpdateEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleWindowEvent") ) { return handleWindowEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleGamepadEvent") ) { return handleGamepadEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeApplication_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { outValue = lime_application_exec; return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { outValue = lime_application_init; return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { outValue = lime_application_quit; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { outValue = lime_application_create; return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { outValue = lime_application_update; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { outValue = lime_application_set_frame_rate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { outValue = lime_key_event_manager_register; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { outValue = lime_text_event_manager_register; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { outValue = lime_mouse_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { outValue = lime_touch_event_manager_register; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { outValue = lime_render_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"lime_update_event_manager_register") ) { outValue = lime_update_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { outValue = lime_window_event_manager_register; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { outValue = lime_gamepad_event_manager_register; return true;  }
	}
	return false;
}

Dynamic NativeApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { keyEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::KeyEventInfo >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { textEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TextEventInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { mouseEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::MouseEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { touchEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TouchEventInfo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { renderEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::RenderEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateEventInfo") ) { updateEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::UpdateEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { windowEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::WindowEventInfo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { gamepadEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::GamepadEventInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { lime_application_exec=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { lime_application_init=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { lime_application_quit=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { lime_application_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { lime_application_update=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { lime_application_set_frame_rate=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { lime_key_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { lime_text_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { lime_mouse_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { lime_touch_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { lime_render_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_update_event_manager_register") ) { lime_update_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { lime_window_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { lime_gamepad_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"));
	outFields->push(HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"));
	outFields->push(HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"));
	outFields->push(HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"));
	outFields->push(HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"));
	outFields->push(HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"));
	outFields->push(HX_HCSTRING("updateEventInfo","\x5f","\x12","\x53","\x44"));
	outFields->push(HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::GamepadEventInfo*/ ,(int)offsetof(NativeApplication_obj,gamepadEventInfo),HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::KeyEventInfo*/ ,(int)offsetof(NativeApplication_obj,keyEventInfo),HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::MouseEventInfo*/ ,(int)offsetof(NativeApplication_obj,mouseEventInfo),HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::RenderEventInfo*/ ,(int)offsetof(NativeApplication_obj,renderEventInfo),HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TextEventInfo*/ ,(int)offsetof(NativeApplication_obj,textEventInfo),HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TouchEventInfo*/ ,(int)offsetof(NativeApplication_obj,touchEventInfo),HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::UpdateEventInfo*/ ,(int)offsetof(NativeApplication_obj,updateEventInfo),HX_HCSTRING("updateEventInfo","\x5f","\x12","\x53","\x44")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::WindowEventInfo*/ ,(int)offsetof(NativeApplication_obj,windowEventInfo),HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeApplication_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsFloat,(int)offsetof(NativeApplication_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(NativeApplication_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_create,HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_exec,HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_init,HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_set_frame_rate,HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_update,HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_quit,HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_gamepad_event_manager_register,HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_key_event_manager_register,HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_mouse_event_manager_register,HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_render_event_manager_register,HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_text_event_manager_register,HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_touch_event_manager_register,HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_update_event_manager_register,HX_HCSTRING("lime_update_event_manager_register","\x86","\x47","\xe5","\xc5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_window_event_manager_register,HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"),
	HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"),
	HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"),
	HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"),
	HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"),
	HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"),
	HX_HCSTRING("updateEventInfo","\x5f","\x12","\x53","\x44"),
	HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("getFrameRate","\x37","\xae","\x7b","\x48"),
	HX_HCSTRING("handleGamepadEvent","\x81","\x1b","\xb0","\x7b"),
	HX_HCSTRING("handleKeyEvent","\xc3","\x95","\x05","\x08"),
	HX_HCSTRING("handleMouseEvent","\x7d","\x65","\x58","\x63"),
	HX_HCSTRING("handleRenderEvent","\x1c","\xda","\x83","\x3f"),
	HX_HCSTRING("handleTextEvent","\x65","\xff","\x1d","\xdd"),
	HX_HCSTRING("handleTouchEvent","\xa3","\x55","\x1c","\x3f"),
	HX_HCSTRING("handleUpdateEvent","\x89","\x16","\x6b","\x59"),
	HX_HCSTRING("handleWindowEvent","\x42","\x43","\xa5","\x64"),
	HX_HCSTRING("setFrameRate","\xab","\xd1","\x74","\x5d"),
	HX_HCSTRING("updateTimer","\xfc","\x28","\xce","\xf5"),
	HX_HCSTRING("__cleanup","\x04","\x5d","\x90","\x2c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_create,"lime_application_create");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_exec,"lime_application_exec");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_init,"lime_application_init");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_set_frame_rate,"lime_application_set_frame_rate");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_update,"lime_application_update");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_quit,"lime_application_quit");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_gamepad_event_manager_register,"lime_gamepad_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_text_event_manager_register,"lime_text_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_update_event_manager_register,"lime_update_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_create,"lime_application_create");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_exec,"lime_application_exec");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_init,"lime_application_init");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_set_frame_rate,"lime_application_set_frame_rate");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_update,"lime_application_update");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_quit,"lime_application_quit");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_gamepad_event_manager_register,"lime_gamepad_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_text_event_manager_register,"lime_text_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_update_event_manager_register,"lime_update_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
};

#endif

hx::Class NativeApplication_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),
	HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),
	HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),
	HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),
	HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),
	HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),
	HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),
	HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),
	HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),
	HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),
	HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),
	HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),
	HX_HCSTRING("lime_update_event_manager_register","\x86","\x47","\xe5","\xc5"),
	HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),
	::String(null()) };

void NativeApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeApplication","\xa2","\x84","\xe2","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeApplication_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeApplication_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeApplication_obj >;
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

void NativeApplication_obj::__boot()
{
	lime_application_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),(int)1,null());
	lime_application_exec= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),(int)1,null());
	lime_application_init= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),(int)1,null());
	lime_application_set_frame_rate= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),(int)2,null());
	lime_application_update= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),(int)1,null());
	lime_application_quit= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),(int)1,null());
	lime_gamepad_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),(int)2,null());
	lime_key_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),(int)2,null());
	lime_mouse_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),(int)2,null());
	lime_render_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),(int)2,null());
	lime_text_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),(int)2,null());
	lime_touch_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),(int)2,null());
	lime_update_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_update_event_manager_register","\x86","\x47","\xe5","\xc5"),(int)2,null());
	lime_window_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),(int)2,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
