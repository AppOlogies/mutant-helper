#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void BlendModeManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","new",0x5ae5c54c,"openfl._internal.renderer.opengl.utils.BlendModeManager.new","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",16,0x974feaa1)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(18)
	this->gl = gl;
	HX_STACK_LINE(19)
	this->currentBlendMode = null();
	HX_STACK_LINE(21)
	::haxe::ds::EnumValueMap tmp = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(23)
		::haxe::ds::EnumValueMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			::haxe::ds::EnumValueMap tmp3 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::haxe::ds::EnumValueMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(23)
		::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes = tmp2;
		HX_STACK_LINE(25)
		::haxe::ds::EnumValueMap tmp3 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",25,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(25)
		Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		tmp3->set(::openfl::display::BlendMode_obj::NORMAL,tmp4);
		HX_STACK_LINE(26)
		::haxe::ds::EnumValueMap tmp5 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",26,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)1,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		Dynamic tmp6 = _Function_2_2::Block();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		tmp5->set(::openfl::display::BlendMode_obj::ADD,tmp6);
		HX_STACK_LINE(27)
		::haxe::ds::EnumValueMap tmp7 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_2_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",27,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)774,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(27)
		Dynamic tmp8 = _Function_2_3::Block();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		tmp7->set(::openfl::display::BlendMode_obj::MULTIPLY,tmp8);
		HX_STACK_LINE(28)
		::haxe::ds::EnumValueMap tmp9 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",28,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)769,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		Dynamic tmp10 = _Function_2_4::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(28)
		tmp9->set(::openfl::display::BlendMode_obj::SCREEN,tmp10);
		HX_STACK_LINE(29)
		::haxe::ds::EnumValueMap tmp11 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_2_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",29,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)1,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32779,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		Dynamic tmp12 = _Function_2_5::Block();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		tmp11->set(::openfl::display::BlendMode_obj::SUBTRACT,tmp12);
		HX_STACK_LINE(32)
		::haxe::ds::EnumValueMap tmp13 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_2_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",32,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		Dynamic tmp14 = _Function_2_6::Block();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(32)
		tmp13->set(::openfl::display::BlendMode_obj::LAYER,tmp14);
		HX_STACK_LINE(34)
		::haxe::ds::EnumValueMap tmp15 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_2_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",34,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		Dynamic tmp16 = _Function_2_7::Block();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		tmp15->set(::openfl::display::BlendMode_obj::DARKEN,tmp16);
		HX_STACK_LINE(36)
		::haxe::ds::EnumValueMap tmp17 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp17,"tmp17");
		struct _Function_2_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",36,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		Dynamic tmp18 = _Function_2_8::Block();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(36)
		tmp17->set(::openfl::display::BlendMode_obj::LIGHTEN,tmp18);
		HX_STACK_LINE(38)
		::haxe::ds::EnumValueMap tmp19 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_2_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",38,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		Dynamic tmp20 = _Function_2_9::Block();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(38)
		tmp19->set(::openfl::display::BlendMode_obj::ERASE,tmp20);
		HX_STACK_LINE(40)
		::haxe::ds::EnumValueMap tmp21 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_2_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",40,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		Dynamic tmp22 = _Function_2_10::Block();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(40)
		tmp21->set(::openfl::display::BlendMode_obj::ALPHA,tmp22);
		HX_STACK_LINE(43)
		::haxe::ds::EnumValueMap tmp23 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_2_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",43,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		Dynamic tmp24 = _Function_2_11::Block();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		tmp23->set(::openfl::display::BlendMode_obj::INVERT,tmp24);
		HX_STACK_LINE(44)
		::haxe::ds::EnumValueMap tmp25 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_2_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",44,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		Dynamic tmp26 = _Function_2_12::Block();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(44)
		tmp25->set(::openfl::display::BlendMode_obj::DIFFERENCE,tmp26);
		HX_STACK_LINE(45)
		::haxe::ds::EnumValueMap tmp27 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_2_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",45,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp28 = _Function_2_13::Block();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(45)
		tmp27->set(::openfl::display::BlendMode_obj::HARDLIGHT,tmp28);
		HX_STACK_LINE(46)
		::haxe::ds::EnumValueMap tmp29 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp29,"tmp29");
		struct _Function_2_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",46,0x974feaa1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , (int)1,false);
					__result->Add(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42") , (int)771,false);
					__result->Add(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43") , (int)32774,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp30 = _Function_2_14::Block();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(46)
		tmp29->set(::openfl::display::BlendMode_obj::OVERLAY,tmp30);
	}
}
;
	return null();
}

//BlendModeManager_obj::~BlendModeManager_obj() { }

Dynamic BlendModeManager_obj::__CreateEmpty() { return  new BlendModeManager_obj; }
hx::ObjectPtr< BlendModeManager_obj > BlendModeManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< BlendModeManager_obj > _result_ = new BlendModeManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic BlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendModeManager_obj > _result_ = new BlendModeManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BlendModeManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","destroy",0x43b307e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.destroy","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",55,0x974feaa1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BlendModeManager_obj,destroy,(void))

bool BlendModeManager_obj::setBlendMode( ::openfl::display::BlendMode blendMode,Dynamic __o_force){
Dynamic force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","setBlendMode",0xbabdb1e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.setBlendMode","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",60,0x974feaa1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(62)
		bool tmp = (blendMode == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(64)
			blendMode = ::openfl::display::BlendMode_obj::NORMAL;
			HX_STACK_LINE(65)
			force = true;
		}
		HX_STACK_LINE(69)
		Dynamic tmp1 = force;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		if ((tmp3)){
			HX_STACK_LINE(69)
			::openfl::display::BlendMode tmp5 = this->currentBlendMode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::openfl::display::BlendMode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			::openfl::display::BlendMode tmp7 = blendMode;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			tmp4 = (tmp6 == tmp7);
		}
		else{
			HX_STACK_LINE(69)
			tmp4 = false;
		}
		HX_STACK_LINE(69)
		if ((tmp4)){
			HX_STACK_LINE(71)
			return false;
		}
		HX_STACK_LINE(75)
		this->currentBlendMode = blendMode;
		HX_STACK_LINE(77)
		::haxe::ds::EnumValueMap tmp5 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::glBlendModes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		::openfl::display::BlendMode tmp6 = this->currentBlendMode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		Dynamic glBlend = tmp7;		HX_STACK_VAR(glBlend,"glBlend");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int tmp8 = glBlend->__Field(HX_HCSTRING("func","\x44","\xeb","\xc4","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			::lime::graphics::opengl::GL_obj::lime_gl_blend_equation(tmp8);
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int tmp8 = glBlend->__Field(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			int tmp9 = glBlend->__Field(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(79)
			::lime::graphics::opengl::GL_obj::lime_gl_blend_func(tmp8,tmp9);
		}
		HX_STACK_LINE(82)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BlendModeManager_obj,setBlendMode,return )

::haxe::ds::EnumValueMap BlendModeManager_obj::glBlendModes;


BlendModeManager_obj::BlendModeManager_obj()
{
}

void BlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void BlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic BlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

bool BlendModeManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"glBlendModes") ) { outValue = glBlendModes; return true;  }
	}
	return false;
}

Dynamic BlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BlendModeManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"glBlendModes") ) { glBlendModes=ioValue.Cast< ::haxe::ds::EnumValueMap >(); return true; }
	}
	return false;
}

void BlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(BlendModeManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(void *) &BlendModeManager_obj::glBlendModes,HX_HCSTRING("glBlendModes","\x24","\x44","\x3b","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendModeManager_obj::glBlendModes,"glBlendModes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendModeManager_obj::glBlendModes,"glBlendModes");
};

#endif

hx::Class BlendModeManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("glBlendModes","\x24","\x44","\x3b","\x6d"),
	::String(null()) };

void BlendModeManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.BlendModeManager","\x5a","\x6f","\xb6","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlendModeManager_obj::__GetStatic;
	__mClass->mSetStaticField = &BlendModeManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlendModeManager_obj >;
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

void BlendModeManager_obj::__boot()
{
	glBlendModes= null();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
