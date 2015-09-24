#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  IModule_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IModule_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( ::lime::graphics::RenderContext context)=0;
		virtual Dynamic init_dyn()=0;
		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value)=0;
		virtual Dynamic onGamepadAxisMove_dyn()=0;
		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button)=0;
		virtual Dynamic onGamepadButtonDown_dyn()=0;
		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button)=0;
		virtual Dynamic onGamepadButtonUp_dyn()=0;
		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad)=0;
		virtual Dynamic onGamepadConnect_dyn()=0;
		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad)=0;
		virtual Dynamic onGamepadDisconnect_dyn()=0;
		virtual Void onKeyDown( int keyCode,int modifier)=0;
		virtual Dynamic onKeyDown_dyn()=0;
		virtual Void onKeyUp( int keyCode,int modifier)=0;
		virtual Dynamic onKeyUp_dyn()=0;
		virtual Void onMouseDown( Float x,Float y,int button)=0;
		virtual Dynamic onMouseDown_dyn()=0;
		virtual Void onMouseMove( Float x,Float y)=0;
		virtual Dynamic onMouseMove_dyn()=0;
		virtual Void onMouseMoveRelative( Float x,Float y)=0;
		virtual Dynamic onMouseMoveRelative_dyn()=0;
		virtual Void onMouseUp( Float x,Float y,int button)=0;
		virtual Dynamic onMouseUp_dyn()=0;
		virtual Void onMouseWheel( Float deltaX,Float deltaY)=0;
		virtual Dynamic onMouseWheel_dyn()=0;
		virtual Void onRenderContextLost( )=0;
		virtual Dynamic onRenderContextLost_dyn()=0;
		virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context)=0;
		virtual Dynamic onRenderContextRestored_dyn()=0;
		virtual Void onTextEdit( ::String text,int start,int length)=0;
		virtual Dynamic onTextEdit_dyn()=0;
		virtual Void onTextInput( ::String text)=0;
		virtual Dynamic onTextInput_dyn()=0;
		virtual Void onTouchEnd( Float x,Float y,int id)=0;
		virtual Dynamic onTouchEnd_dyn()=0;
		virtual Void onTouchMove( Float x,Float y,int id)=0;
		virtual Dynamic onTouchMove_dyn()=0;
		virtual Void onTouchStart( Float x,Float y,int id)=0;
		virtual Dynamic onTouchStart_dyn()=0;
		virtual Void onWindowActivate( )=0;
		virtual Dynamic onWindowActivate_dyn()=0;
		virtual Void onWindowClose( )=0;
		virtual Dynamic onWindowClose_dyn()=0;
		virtual Void onWindowDeactivate( )=0;
		virtual Dynamic onWindowDeactivate_dyn()=0;
		virtual Void onWindowEnter( )=0;
		virtual Dynamic onWindowEnter_dyn()=0;
		virtual Void onWindowFocusIn( )=0;
		virtual Dynamic onWindowFocusIn_dyn()=0;
		virtual Void onWindowFocusOut( )=0;
		virtual Dynamic onWindowFocusOut_dyn()=0;
		virtual Void onWindowFullscreen( )=0;
		virtual Dynamic onWindowFullscreen_dyn()=0;
		virtual Void onWindowLeave( )=0;
		virtual Dynamic onWindowLeave_dyn()=0;
		virtual Void onWindowMove( Float x,Float y)=0;
		virtual Dynamic onWindowMove_dyn()=0;
		virtual Void onWindowMinimize( )=0;
		virtual Dynamic onWindowMinimize_dyn()=0;
		virtual Void onWindowResize( int width,int height)=0;
		virtual Dynamic onWindowResize_dyn()=0;
		virtual Void onWindowRestore( )=0;
		virtual Dynamic onWindowRestore_dyn()=0;
		virtual Void render( ::lime::graphics::RenderContext context)=0;
		virtual Dynamic render_dyn()=0;
		virtual Void update( int deltaTime)=0;
		virtual Dynamic update_dyn()=0;
};

#define DELEGATE_lime_app_IModule \
virtual Void init( ::lime::graphics::RenderContext context) { return mDelegate->init(context);}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value) { return mDelegate->onGamepadAxisMove(gamepad,axis,value);}  \
virtual Dynamic onGamepadAxisMove_dyn() { return mDelegate->onGamepadAxisMove_dyn();}  \
virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button) { return mDelegate->onGamepadButtonDown(gamepad,button);}  \
virtual Dynamic onGamepadButtonDown_dyn() { return mDelegate->onGamepadButtonDown_dyn();}  \
virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button) { return mDelegate->onGamepadButtonUp(gamepad,button);}  \
virtual Dynamic onGamepadButtonUp_dyn() { return mDelegate->onGamepadButtonUp_dyn();}  \
virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad) { return mDelegate->onGamepadConnect(gamepad);}  \
virtual Dynamic onGamepadConnect_dyn() { return mDelegate->onGamepadConnect_dyn();}  \
virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad) { return mDelegate->onGamepadDisconnect(gamepad);}  \
virtual Dynamic onGamepadDisconnect_dyn() { return mDelegate->onGamepadDisconnect_dyn();}  \
virtual Void onKeyDown( int keyCode,int modifier) { return mDelegate->onKeyDown(keyCode,modifier);}  \
virtual Dynamic onKeyDown_dyn() { return mDelegate->onKeyDown_dyn();}  \
virtual Void onKeyUp( int keyCode,int modifier) { return mDelegate->onKeyUp(keyCode,modifier);}  \
virtual Dynamic onKeyUp_dyn() { return mDelegate->onKeyUp_dyn();}  \
virtual Void onMouseDown( Float x,Float y,int button) { return mDelegate->onMouseDown(x,y,button);}  \
virtual Dynamic onMouseDown_dyn() { return mDelegate->onMouseDown_dyn();}  \
virtual Void onMouseMove( Float x,Float y) { return mDelegate->onMouseMove(x,y);}  \
virtual Dynamic onMouseMove_dyn() { return mDelegate->onMouseMove_dyn();}  \
virtual Void onMouseMoveRelative( Float x,Float y) { return mDelegate->onMouseMoveRelative(x,y);}  \
virtual Dynamic onMouseMoveRelative_dyn() { return mDelegate->onMouseMoveRelative_dyn();}  \
virtual Void onMouseUp( Float x,Float y,int button) { return mDelegate->onMouseUp(x,y,button);}  \
virtual Dynamic onMouseUp_dyn() { return mDelegate->onMouseUp_dyn();}  \
virtual Void onMouseWheel( Float deltaX,Float deltaY) { return mDelegate->onMouseWheel(deltaX,deltaY);}  \
virtual Dynamic onMouseWheel_dyn() { return mDelegate->onMouseWheel_dyn();}  \
virtual Void onRenderContextLost( ) { return mDelegate->onRenderContextLost();}  \
virtual Dynamic onRenderContextLost_dyn() { return mDelegate->onRenderContextLost_dyn();}  \
virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context) { return mDelegate->onRenderContextRestored(context);}  \
virtual Dynamic onRenderContextRestored_dyn() { return mDelegate->onRenderContextRestored_dyn();}  \
virtual Void onTextEdit( ::String text,int start,int length) { return mDelegate->onTextEdit(text,start,length);}  \
virtual Dynamic onTextEdit_dyn() { return mDelegate->onTextEdit_dyn();}  \
virtual Void onTextInput( ::String text) { return mDelegate->onTextInput(text);}  \
virtual Dynamic onTextInput_dyn() { return mDelegate->onTextInput_dyn();}  \
virtual Void onTouchEnd( Float x,Float y,int id) { return mDelegate->onTouchEnd(x,y,id);}  \
virtual Dynamic onTouchEnd_dyn() { return mDelegate->onTouchEnd_dyn();}  \
virtual Void onTouchMove( Float x,Float y,int id) { return mDelegate->onTouchMove(x,y,id);}  \
virtual Dynamic onTouchMove_dyn() { return mDelegate->onTouchMove_dyn();}  \
virtual Void onTouchStart( Float x,Float y,int id) { return mDelegate->onTouchStart(x,y,id);}  \
virtual Dynamic onTouchStart_dyn() { return mDelegate->onTouchStart_dyn();}  \
virtual Void onWindowActivate( ) { return mDelegate->onWindowActivate();}  \
virtual Dynamic onWindowActivate_dyn() { return mDelegate->onWindowActivate_dyn();}  \
virtual Void onWindowClose( ) { return mDelegate->onWindowClose();}  \
virtual Dynamic onWindowClose_dyn() { return mDelegate->onWindowClose_dyn();}  \
virtual Void onWindowDeactivate( ) { return mDelegate->onWindowDeactivate();}  \
virtual Dynamic onWindowDeactivate_dyn() { return mDelegate->onWindowDeactivate_dyn();}  \
virtual Void onWindowEnter( ) { return mDelegate->onWindowEnter();}  \
virtual Dynamic onWindowEnter_dyn() { return mDelegate->onWindowEnter_dyn();}  \
virtual Void onWindowFocusIn( ) { return mDelegate->onWindowFocusIn();}  \
virtual Dynamic onWindowFocusIn_dyn() { return mDelegate->onWindowFocusIn_dyn();}  \
virtual Void onWindowFocusOut( ) { return mDelegate->onWindowFocusOut();}  \
virtual Dynamic onWindowFocusOut_dyn() { return mDelegate->onWindowFocusOut_dyn();}  \
virtual Void onWindowFullscreen( ) { return mDelegate->onWindowFullscreen();}  \
virtual Dynamic onWindowFullscreen_dyn() { return mDelegate->onWindowFullscreen_dyn();}  \
virtual Void onWindowLeave( ) { return mDelegate->onWindowLeave();}  \
virtual Dynamic onWindowLeave_dyn() { return mDelegate->onWindowLeave_dyn();}  \
virtual Void onWindowMove( Float x,Float y) { return mDelegate->onWindowMove(x,y);}  \
virtual Dynamic onWindowMove_dyn() { return mDelegate->onWindowMove_dyn();}  \
virtual Void onWindowMinimize( ) { return mDelegate->onWindowMinimize();}  \
virtual Dynamic onWindowMinimize_dyn() { return mDelegate->onWindowMinimize_dyn();}  \
virtual Void onWindowResize( int width,int height) { return mDelegate->onWindowResize(width,height);}  \
virtual Dynamic onWindowResize_dyn() { return mDelegate->onWindowResize_dyn();}  \
virtual Void onWindowRestore( ) { return mDelegate->onWindowRestore();}  \
virtual Dynamic onWindowRestore_dyn() { return mDelegate->onWindowRestore_dyn();}  \
virtual Void render( ::lime::graphics::RenderContext context) { return mDelegate->render(context);}  \
virtual Dynamic render_dyn() { return mDelegate->render_dyn();}  \
virtual Void update( int deltaTime) { return mDelegate->update(deltaTime);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class IModule_delegate_ : public IModule_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IModule_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_lime_app_IModule
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 
