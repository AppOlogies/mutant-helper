#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PathBuiler_obj::__construct()
{
	return null();
}

//PathBuiler_obj::~PathBuiler_obj() { }

Dynamic PathBuiler_obj::__CreateEmpty() { return  new PathBuiler_obj; }
hx::ObjectPtr< PathBuiler_obj > PathBuiler_obj::__new()
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic PathBuiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::opengl::utils::DrawPath PathBuiler_obj::__currentPath;

int PathBuiler_obj::__currentWinding;

Array< ::Dynamic > PathBuiler_obj::__drawPaths;

::openfl::_internal::renderer::opengl::utils::LineStyle PathBuiler_obj::__line;

::openfl::_internal::renderer::opengl::utils::FillType PathBuiler_obj::__fill;

int PathBuiler_obj::__fillIndex;

Void PathBuiler_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","closePath",0x65da1ed8,"openfl._internal.renderer.opengl.utils.PathBuiler.closePath","openfl/_internal/renderer/opengl/utils/DrawPath.hx",76,0xf0fd7951)
		HX_STACK_LINE(77)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		int tmp1 = tmp->points->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(78)
		bool tmp2 = (l <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		if ((tmp2)){
			HX_STACK_LINE(78)
			return null();
		}
		HX_STACK_LINE(80)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::openfl::_internal::renderer::opengl::utils::GraphicType tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = (tmp4 == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		if ((tmp5)){
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::FillType tmp9 = tmp8->fill;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			tmp6 = (tmp9 != ::openfl::_internal::renderer::opengl::utils::FillType_obj::None);
		}
		else{
			HX_STACK_LINE(80)
			tmp6 = false;
		}
		HX_STACK_LINE(80)
		if ((tmp6)){
			HX_STACK_LINE(81)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			Float tmp8 = tmp7->points->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			Float sx = tmp8;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(82)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			Float tmp10 = tmp9->points->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float sy = tmp10;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(83)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			int tmp12 = (l - (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			Float tmp13 = tmp11->points->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			Float ex = tmp13;		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp14 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			int tmp15 = (l - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = tmp14->points->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			Float ey = tmp16;		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(86)
			bool tmp17 = (sx == ex);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(86)
			if ((tmp17)){
				HX_STACK_LINE(86)
				tmp18 = (sy == ey);
			}
			else{
				HX_STACK_LINE(86)
				tmp18 = false;
			}
			HX_STACK_LINE(86)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(86)
			if ((tmp19)){
				HX_STACK_LINE(87)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp20 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(87)
				Array< Float > points = tmp20->points;		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(87)
				bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
				HX_STACK_LINE(87)
				bool tmp21 = (points->length > (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(87)
				if ((tmp21)){
					HX_STACK_LINE(87)
					int tmp22 = (points->length - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(87)
					Float tmp23 = points->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(87)
					Float lastX = tmp23;		HX_STACK_VAR(lastX,"lastX");
					HX_STACK_LINE(87)
					int tmp24 = (points->length - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(87)
					Float tmp25 = points->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(87)
					Float lastY = tmp25;		HX_STACK_VAR(lastY,"lastY");
					HX_STACK_LINE(87)
					bool tmp26 = (lastX == sx);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(87)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(87)
					if ((tmp26)){
						HX_STACK_LINE(87)
						tmp27 = (lastY == sy);
					}
					else{
						HX_STACK_LINE(87)
						tmp27 = false;
					}
					HX_STACK_LINE(87)
					if ((tmp27)){
						HX_STACK_LINE(87)
						push_point = false;
					}
				}
				HX_STACK_LINE(87)
				bool tmp22 = (push_point == true);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(87)
				if ((tmp22)){
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp23 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(87)
					Float tmp24 = sx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(87)
					tmp23->points->push(tmp24);
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(87)
					Float tmp26 = sy;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(87)
					tmp25->points->push(tmp26);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,closePath,(void))

Void PathBuiler_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","endFill",0xe6a5a499,"openfl._internal.renderer.opengl.utils.PathBuiler.endFill","openfl/_internal/renderer/opengl/utils/DrawPath.hx",92,0xf0fd7951)
		HX_STACK_LINE(94)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
		HX_STACK_LINE(95)
		(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,endFill,(void))

Void PathBuiler_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","moveTo",0x360182b1,"openfl._internal.renderer.opengl.utils.PathBuiler.moveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",99,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			if ((tmp1)){
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				int tmp5 = tmp4->points->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				tmp2 = (tmp6 == (int)0);
			}
			else{
				HX_STACK_LINE(101)
				tmp2 = false;
			}
			HX_STACK_LINE(101)
			if ((tmp2)){
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
			}
			else{
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
			}
		}
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp1 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp2 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::FillType tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		int tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		int tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		tmp1->update(tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(104)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		tmp6->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
		HX_STACK_LINE(105)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		tmp7->points->push(tmp8);
		HX_STACK_LINE(106)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		tmp9->points->push(tmp10);
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,moveTo,(void))

Void PathBuiler_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","lineTo",0x55f4f654,"openfl._internal.renderer.opengl.utils.PathBuiler.lineTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",112,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(113)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		Array< Float > points = tmp->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(114)
		bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
		HX_STACK_LINE(117)
		bool tmp1 = (points->length > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(118)
			int tmp2 = (points->length - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			Float lastX = tmp3;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(119)
			int tmp4 = (points->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			Float lastY = tmp5;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(120)
			bool tmp6 = (lastX == x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			if ((tmp6)){
				HX_STACK_LINE(120)
				tmp7 = (lastY == y);
			}
			else{
				HX_STACK_LINE(120)
				tmp7 = false;
			}
			HX_STACK_LINE(120)
			if ((tmp7)){
				HX_STACK_LINE(121)
				push_point = false;
			}
		}
		HX_STACK_LINE(125)
		bool tmp2 = (push_point == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(126)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			tmp3->points->push(tmp4);
			HX_STACK_LINE(127)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			tmp5->points->push(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,lineTo,(void))

Void PathBuiler_obj::curveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","curveTo",0x8f4d7ca5,"openfl._internal.renderer.opengl.utils.PathBuiler.curveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",131,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(132)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		int tmp1 = tmp->points->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		if ((tmp2)){
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(134)
				bool tmp4 = tmp3->isRemovable;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				if ((tmp4)){
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(134)
					int tmp8 = tmp7->points->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(134)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(134)
					tmp5 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(134)
					tmp5 = false;
				}
				HX_STACK_LINE(134)
				if ((tmp5)){
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp3;
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::FillType tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			int tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			tmp4->update(tmp5,tmp6,tmp7,tmp8);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			tmp9->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			tmp10->points->push((int)0);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			tmp11->points->push((int)0);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp12);
		}
		HX_STACK_LINE(138)
		Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
		HX_STACK_LINE(139)
		Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
		HX_STACK_LINE(140)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(142)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		Array< Float > points = tmp3->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(143)
		int tmp4 = (points->length - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Float fromX = tmp5;		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(144)
		int tmp6 = (points->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		Float tmp7 = points->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		Float fromY = tmp7;		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(146)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(147)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(149)
		Float tmp8 = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			int tmp9 = (n + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(151)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(151)
				if ((tmp11)){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(151)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(153)
				Float tmp13 = (Float(i) / Float(n));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(153)
				tmp8 = tmp13;
				HX_STACK_LINE(155)
				Float tmp14 = fromX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(155)
				Float tmp15 = (cx - fromX);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(155)
				Float tmp16 = tmp8;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(155)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(155)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(155)
				xa = tmp18;
				HX_STACK_LINE(156)
				Float tmp19 = fromY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(156)
				Float tmp20 = (cy - fromY);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(156)
				Float tmp21 = tmp8;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(156)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(156)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(156)
				ya = tmp23;
				HX_STACK_LINE(158)
				Float tmp24 = xa;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(158)
				Float tmp25 = cx;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(158)
				Float tmp26 = (x - cx);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(158)
				Float tmp27 = tmp8;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(158)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(158)
				Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(158)
				Float tmp30 = xa;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(158)
				Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(158)
				Float tmp32 = tmp8;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(158)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(158)
				Float tmp34 = (tmp24 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(158)
				px = tmp34;
				HX_STACK_LINE(159)
				Float tmp35 = ya;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(159)
				Float tmp36 = cy;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(159)
				Float tmp37 = (y - cy);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(159)
				Float tmp38 = tmp8;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(159)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(159)
				Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(159)
				Float tmp41 = ya;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(159)
				Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(159)
				Float tmp43 = tmp8;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(159)
				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(159)
				Float tmp45 = (tmp35 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(159)
				py = tmp45;
				HX_STACK_LINE(161)
				Float tmp46 = px;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(161)
				points->push(tmp46);
				HX_STACK_LINE(162)
				Float tmp47 = py;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(162)
				points->push(tmp47);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PathBuiler_obj,curveTo,(void))

Void PathBuiler_obj::cubicCurveTo( Float cx,Float cy,Float cx2,Float cy2,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","cubicCurveTo",0x7b165965,"openfl._internal.renderer.opengl.utils.PathBuiler.cubicCurveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",167,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(cx2,"cx2")
		HX_STACK_ARG(cy2,"cy2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(168)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		int tmp1 = tmp->points->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(170)
				bool tmp4 = tmp3->isRemovable;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(170)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(170)
				if ((tmp4)){
					HX_STACK_LINE(170)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(170)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(170)
					int tmp8 = tmp7->points->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(170)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(170)
					tmp5 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(170)
					tmp5 = false;
				}
				HX_STACK_LINE(170)
				if ((tmp5)){
					HX_STACK_LINE(170)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(170)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp3;
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::FillType tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			int tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			tmp4->update(tmp5,tmp6,tmp7,tmp8);
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			tmp9->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			tmp10->points->push((int)0);
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			tmp11->points->push((int)0);
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(170)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp12);
		}
		HX_STACK_LINE(174)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(175)
		Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(176)
		Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
		HX_STACK_LINE(177)
		Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
		HX_STACK_LINE(178)
		Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(179)
		Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
		HX_STACK_LINE(181)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		Array< Float > points = tmp3->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(182)
		int tmp4 = (points->length - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		Float fromX = tmp5;		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(183)
		int tmp6 = (points->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		Float tmp7 = points->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		Float fromY = tmp7;		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(185)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(186)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(188)
		Float tmp8 = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(190)
			int tmp9 = (n + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(190)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(190)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(192)
				Float tmp13 = (Float(i) / Float(n));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(192)
				tmp8 = tmp13;
				HX_STACK_LINE(194)
				Float tmp14 = ((int)1 - tmp8);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(194)
				dt = tmp14;
				HX_STACK_LINE(195)
				Float tmp15 = (dt * dt);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(195)
				dt2 = tmp15;
				HX_STACK_LINE(196)
				Float tmp16 = (dt2 * dt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(196)
				dt3 = tmp16;
				HX_STACK_LINE(198)
				Float tmp17 = (tmp8 * tmp8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(198)
				t2 = tmp17;
				HX_STACK_LINE(199)
				Float tmp18 = (t2 * tmp8);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(199)
				t3 = tmp18;
				HX_STACK_LINE(201)
				Float tmp19 = (dt3 * fromX);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(201)
				Float tmp20 = ((int)3 * dt2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(201)
				Float tmp21 = tmp8;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(201)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(201)
				Float tmp23 = cx;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(201)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(201)
				Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(201)
				Float tmp26 = ((int)3 * dt);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(201)
				Float tmp27 = t2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(201)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(201)
				Float tmp29 = cx2;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(201)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(201)
				Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(201)
				Float tmp32 = (t3 * x);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(201)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(201)
				px = tmp33;
				HX_STACK_LINE(202)
				Float tmp34 = (dt3 * fromY);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(202)
				Float tmp35 = ((int)3 * dt2);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(202)
				Float tmp36 = tmp8;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(202)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(202)
				Float tmp38 = cy;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(202)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(202)
				Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(202)
				Float tmp41 = ((int)3 * dt);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(202)
				Float tmp42 = t2;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(202)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(202)
				Float tmp44 = cy2;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(202)
				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(202)
				Float tmp46 = (tmp40 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(202)
				Float tmp47 = (t3 * y);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(202)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(202)
				py = tmp48;
				HX_STACK_LINE(204)
				Float tmp49 = px;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(204)
				points->push(tmp49);
				HX_STACK_LINE(205)
				Float tmp50 = py;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(205)
				points->push(tmp50);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(PathBuiler_obj,cubicCurveTo,(void))

Void PathBuiler_obj::graphicDataPop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","graphicDataPop",0x871be484,"openfl._internal.renderer.opengl.utils.PathBuiler.graphicDataPop","openfl/_internal/renderer/opengl/utils/DrawPath.hx",210,0xf0fd7951)
		HX_STACK_LINE(212)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		if ((tmp1)){
			HX_STACK_LINE(212)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			int tmp5 = tmp4->points->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			tmp2 = (tmp6 == (int)0);
		}
		else{
			HX_STACK_LINE(212)
			tmp2 = false;
		}
		HX_STACK_LINE(212)
		if ((tmp2)){
			HX_STACK_LINE(213)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
		}
		else{
			HX_STACK_LINE(215)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,graphicDataPop,(void))

::openfl::_internal::renderer::opengl::utils::GLStack PathBuiler_obj::build( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","build",0xe0200b09,"openfl._internal.renderer.opengl.utils.PathBuiler.build","openfl/_internal/renderer/opengl/utils/DrawPath.hx",220,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(222)
	::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
	HX_STACK_LINE(223)
	::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(225)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(226)
	::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
	HX_STACK_LINE(227)
	::openfl::_internal::renderer::opengl::utils::LineStyle tmp1 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp1;
	HX_STACK_LINE(228)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
	HX_STACK_LINE(229)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex = (int)0;
	HX_STACK_LINE(231)
	int tmp2 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp3 = graphics->__glStack->__get(tmp2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	glStack = tmp3;
	HX_STACK_LINE(233)
	bool tmp4 = (glStack == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(233)
	if ((tmp4)){
		HX_STACK_LINE(235)
		int tmp5 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = ::openfl::_internal::renderer::opengl::utils::GLStack_obj::__new(gl);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp7 = graphics->__glStack[tmp5] = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		glStack = tmp7;
	}
	HX_STACK_LINE(239)
	bool tmp5 = graphics->__visible;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(239)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(239)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(239)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(239)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(239)
	if ((tmp9)){
		HX_STACK_LINE(239)
		int tmp11 = graphics->__commands->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(239)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(239)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(239)
		tmp10 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(239)
		tmp10 = true;
	}
	HX_STACK_LINE(239)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(239)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(239)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(239)
	if ((tmp12)){
		HX_STACK_LINE(239)
		tmp13 = (bounds == null());
	}
	else{
		HX_STACK_LINE(239)
		tmp13 = true;
	}
	HX_STACK_LINE(239)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(239)
	bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(239)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(239)
	if ((tmp15)){
		HX_STACK_LINE(239)
		tmp16 = (bounds->width == (int)0);
	}
	else{
		HX_STACK_LINE(239)
		tmp16 = true;
	}
	HX_STACK_LINE(239)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(239)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(239)
	if ((tmp17)){
		HX_STACK_LINE(239)
		tmp18 = (bounds->height == (int)0);
	}
	else{
		HX_STACK_LINE(239)
		tmp18 = true;
	}
	HX_STACK_LINE(239)
	if ((tmp18)){
	}
	else{
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(245)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				if ((tmp20)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::openfl::display::DrawCommand tmp21 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::openfl::display::DrawCommand command = tmp21;		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(245)
				++(_g);
				HX_STACK_LINE(247)
				switch( (int)(command->__Index())){
					case (int)0: {
						HX_STACK_LINE(247)
						bool tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						bool smooth = tmp22;		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(247)
						bool tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						bool repeat = tmp23;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(247)
						::openfl::geom::Matrix tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						::openfl::geom::Matrix matrix = tmp24;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(247)
						::openfl::display::BitmapData tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						::openfl::display::BitmapData bitmap = tmp25;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(249)
						{
							HX_STACK_LINE(251)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
							HX_STACK_LINE(252)
							bool tmp26 = (bitmap != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(252)
							::openfl::_internal::renderer::opengl::utils::FillType tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(252)
							if ((tmp26)){
								HX_STACK_LINE(252)
								::openfl::display::BitmapData tmp28 = bitmap;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(252)
								::openfl::geom::Matrix tmp29 = matrix;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(252)
								bool tmp30 = repeat;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(252)
								bool tmp31 = smooth;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(252)
								tmp27 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Texture(tmp28,tmp29,tmp30,tmp31);
							}
							else{
								HX_STACK_LINE(252)
								tmp27 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
							}
							HX_STACK_LINE(252)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp27;
							HX_STACK_LINE(254)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(254)
							int tmp29 = tmp28->points->length;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(254)
							bool tmp30 = (tmp29 == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(254)
							if ((tmp30)){
								HX_STACK_LINE(255)
								{
									HX_STACK_LINE(255)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(255)
									bool tmp32 = tmp31->isRemovable;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(255)
									bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(255)
									if ((tmp32)){
										HX_STACK_LINE(255)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(255)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(255)
										int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(255)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(255)
										tmp33 = (tmp37 == (int)0);
									}
									else{
										HX_STACK_LINE(255)
										tmp33 = false;
									}
									HX_STACK_LINE(255)
									if ((tmp33)){
										HX_STACK_LINE(255)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(255)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(256)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(256)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp31;
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::FillType tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(257)
								int tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(257)
								int tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(257)
								tmp32->update(tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(258)
								tmp37->points = Array_obj< Float >::__new();
								HX_STACK_LINE(259)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(259)
								tmp38->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(260)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(260)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp39);
							}
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float alpha = tmp22;		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(247)
						int tmp23 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						int rgb = tmp23;		HX_STACK_VAR(rgb,"rgb");
						HX_STACK_LINE(263)
						{
							HX_STACK_LINE(265)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
							HX_STACK_LINE(266)
							bool tmp24 = (alpha > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(266)
							::openfl::_internal::renderer::opengl::utils::FillType tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(266)
							if ((tmp24)){
								HX_STACK_LINE(266)
								int tmp26 = (int(rgb) & int((int)16777215));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(266)
								Float tmp27 = alpha;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(266)
								tmp25 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Color(tmp26,tmp27);
							}
							else{
								HX_STACK_LINE(266)
								tmp25 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
							}
							HX_STACK_LINE(266)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp25;
							HX_STACK_LINE(268)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(268)
							int tmp27 = tmp26->points->length;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(268)
							bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(268)
							if ((tmp28)){
								HX_STACK_LINE(269)
								{
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(269)
									bool tmp30 = tmp29->isRemovable;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(269)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(269)
									if ((tmp30)){
										HX_STACK_LINE(269)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(269)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(269)
										int tmp34 = tmp33->points->length;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(269)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(269)
										tmp31 = (tmp35 == (int)0);
									}
									else{
										HX_STACK_LINE(269)
										tmp31 = false;
									}
									HX_STACK_LINE(269)
									if ((tmp31)){
										HX_STACK_LINE(269)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(269)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp29;
								HX_STACK_LINE(271)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(271)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(271)
								::openfl::_internal::renderer::opengl::utils::FillType tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(271)
								int tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(271)
								int tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(271)
								tmp30->update(tmp31,tmp32,tmp33,tmp34);
								HX_STACK_LINE(272)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(272)
								tmp35->points = Array_obj< Float >::__new();
								HX_STACK_LINE(273)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(273)
								tmp36->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(274)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(274)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp37);
							}
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(247)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Float cy2 = tmp24;		HX_STACK_VAR(cy2,"cy2");
						HX_STACK_LINE(247)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						Float cx2 = tmp25;		HX_STACK_VAR(cx2,"cx2");
						HX_STACK_LINE(247)
						Float tmp26 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(247)
						Float cy = tmp26;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(247)
						Float tmp27 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(247)
						Float cx = tmp27;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(279)
							int tmp29 = tmp28->points->length;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(279)
							bool tmp30 = (tmp29 == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(279)
							if ((tmp30)){
								HX_STACK_LINE(279)
								{
									HX_STACK_LINE(279)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(279)
									bool tmp32 = tmp31->isRemovable;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(279)
									bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(279)
									if ((tmp32)){
										HX_STACK_LINE(279)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(279)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(279)
										int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(279)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(279)
										tmp33 = (tmp37 == (int)0);
									}
									else{
										HX_STACK_LINE(279)
										tmp33 = false;
									}
									HX_STACK_LINE(279)
									if ((tmp33)){
										HX_STACK_LINE(279)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(279)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp31;
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::FillType tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(279)
								int tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(279)
								int tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(279)
								tmp32->update(tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(279)
								tmp37->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(279)
								tmp38->points->push((int)0);
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(279)
								tmp39->points->push((int)0);
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(279)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp40);
							}
							HX_STACK_LINE(279)
							int n = (int)20;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(279)
							Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(279)
							Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
							HX_STACK_LINE(279)
							Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
							HX_STACK_LINE(279)
							Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(279)
							Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
							HX_STACK_LINE(279)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(279)
							Array< Float > points = tmp31->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(279)
							int tmp32 = (points->length - (int)2);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(279)
							Float tmp33 = points->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(279)
							Float fromX = tmp33;		HX_STACK_VAR(fromX,"fromX");
							HX_STACK_LINE(279)
							int tmp34 = (points->length - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(279)
							Float tmp35 = points->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(279)
							Float fromY = tmp35;		HX_STACK_VAR(fromY,"fromY");
							HX_STACK_LINE(279)
							Float px = (int)0;		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(279)
							Float py = (int)0;		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(279)
							Float tmp36 = (int)0;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(279)
								int tmp37 = (n + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(279)
								int _g2 = tmp37;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(279)
								while((true)){
									HX_STACK_LINE(279)
									bool tmp38 = (_g11 < _g2);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(279)
									bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(279)
									if ((tmp39)){
										HX_STACK_LINE(279)
										break;
									}
									HX_STACK_LINE(279)
									int tmp40 = (_g11)++;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(279)
									int i = tmp40;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(279)
									Float tmp41 = (Float(i) / Float(n));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(279)
									tmp36 = tmp41;
									HX_STACK_LINE(279)
									Float tmp42 = ((int)1 - tmp36);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(279)
									dt = tmp42;
									HX_STACK_LINE(279)
									Float tmp43 = (dt * dt);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(279)
									dt2 = tmp43;
									HX_STACK_LINE(279)
									Float tmp44 = (dt2 * dt);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(279)
									dt3 = tmp44;
									HX_STACK_LINE(279)
									Float tmp45 = (tmp36 * tmp36);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(279)
									t2 = tmp45;
									HX_STACK_LINE(279)
									Float tmp46 = (t2 * tmp36);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(279)
									t3 = tmp46;
									HX_STACK_LINE(279)
									Float tmp47 = (dt3 * fromX);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(279)
									Float tmp48 = ((int)3 * dt2);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(279)
									Float tmp49 = tmp36;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(279)
									Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(279)
									Float tmp51 = cx;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(279)
									Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(279)
									Float tmp53 = (tmp47 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(279)
									Float tmp54 = ((int)3 * dt);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(279)
									Float tmp55 = t2;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(279)
									Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(279)
									Float tmp57 = cx2;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(279)
									Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(279)
									Float tmp59 = (tmp53 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(279)
									Float tmp60 = (t3 * x);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(279)
									Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(279)
									px = tmp61;
									HX_STACK_LINE(279)
									Float tmp62 = (dt3 * fromY);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(279)
									Float tmp63 = ((int)3 * dt2);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(279)
									Float tmp64 = tmp36;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(279)
									Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(279)
									Float tmp66 = cy;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(279)
									Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(279)
									Float tmp68 = (tmp62 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(279)
									Float tmp69 = ((int)3 * dt);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(279)
									Float tmp70 = t2;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(279)
									Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(279)
									Float tmp72 = cy2;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(279)
									Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(279)
									Float tmp74 = (tmp68 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(279)
									Float tmp75 = (t3 * y);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(279)
									Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(279)
									py = tmp76;
									HX_STACK_LINE(279)
									Float tmp77 = px;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(279)
									points->push(tmp77);
									HX_STACK_LINE(279)
									Float tmp78 = py;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(279)
									points->push(tmp78);
								}
							}
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(247)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Float cy = tmp24;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(247)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						Float cx = tmp25;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(283)
						{
							HX_STACK_LINE(283)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(283)
							int tmp27 = tmp26->points->length;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(283)
							bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(283)
							if ((tmp28)){
								HX_STACK_LINE(283)
								{
									HX_STACK_LINE(283)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(283)
									bool tmp30 = tmp29->isRemovable;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(283)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(283)
									if ((tmp30)){
										HX_STACK_LINE(283)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(283)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(283)
										int tmp34 = tmp33->points->length;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(283)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(283)
										tmp31 = (tmp35 == (int)0);
									}
									else{
										HX_STACK_LINE(283)
										tmp31 = false;
									}
									HX_STACK_LINE(283)
									if ((tmp31)){
										HX_STACK_LINE(283)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(283)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp29;
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::FillType tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(283)
								int tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(283)
								int tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(283)
								tmp30->update(tmp31,tmp32,tmp33,tmp34);
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(283)
								tmp35->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(283)
								tmp36->points->push((int)0);
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(283)
								tmp37->points->push((int)0);
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(283)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp38);
							}
							HX_STACK_LINE(283)
							Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
							HX_STACK_LINE(283)
							Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
							HX_STACK_LINE(283)
							int n = (int)20;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(283)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(283)
							Array< Float > points = tmp29->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(283)
							int tmp30 = (points->length - (int)2);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(283)
							Float tmp31 = points->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(283)
							Float fromX = tmp31;		HX_STACK_VAR(fromX,"fromX");
							HX_STACK_LINE(283)
							int tmp32 = (points->length - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(283)
							Float tmp33 = points->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(283)
							Float fromY = tmp33;		HX_STACK_VAR(fromY,"fromY");
							HX_STACK_LINE(283)
							Float px = (int)0;		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(283)
							Float py = (int)0;		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(283)
							Float tmp34 = (int)0;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(283)
								int tmp35 = (n + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(283)
								int _g2 = tmp35;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(283)
								while((true)){
									HX_STACK_LINE(283)
									bool tmp36 = (_g11 < _g2);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(283)
									bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(283)
									if ((tmp37)){
										HX_STACK_LINE(283)
										break;
									}
									HX_STACK_LINE(283)
									int tmp38 = (_g11)++;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(283)
									int i = tmp38;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(283)
									Float tmp39 = (Float(i) / Float(n));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(283)
									tmp34 = tmp39;
									HX_STACK_LINE(283)
									Float tmp40 = fromX;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(283)
									Float tmp41 = (cx - fromX);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(283)
									Float tmp42 = tmp34;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(283)
									Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(283)
									Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(283)
									xa = tmp44;
									HX_STACK_LINE(283)
									Float tmp45 = fromY;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(283)
									Float tmp46 = (cy - fromY);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(283)
									Float tmp47 = tmp34;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(283)
									Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(283)
									Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(283)
									ya = tmp49;
									HX_STACK_LINE(283)
									Float tmp50 = xa;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(283)
									Float tmp51 = cx;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(283)
									Float tmp52 = (x - cx);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(283)
									Float tmp53 = tmp34;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(283)
									Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(283)
									Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(283)
									Float tmp56 = xa;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(283)
									Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(283)
									Float tmp58 = tmp34;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(283)
									Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(283)
									Float tmp60 = (tmp50 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(283)
									px = tmp60;
									HX_STACK_LINE(283)
									Float tmp61 = ya;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(283)
									Float tmp62 = cy;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(283)
									Float tmp63 = (y - cy);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(283)
									Float tmp64 = tmp34;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(283)
									Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(283)
									Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(283)
									Float tmp67 = ya;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(283)
									Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(283)
									Float tmp69 = tmp34;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(283)
									Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(283)
									Float tmp71 = (tmp61 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(283)
									py = tmp71;
									HX_STACK_LINE(283)
									Float tmp72 = px;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(283)
									points->push(tmp72);
									HX_STACK_LINE(283)
									Float tmp73 = py;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(283)
									points->push(tmp73);
								}
							}
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float radius = tmp22;		HX_STACK_VAR(radius,"radius");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float y = tmp23;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Float x = tmp24;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(287)
							{
								HX_STACK_LINE(287)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(287)
								bool tmp26 = tmp25->isRemovable;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(287)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(287)
								if ((tmp26)){
									HX_STACK_LINE(287)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(287)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(287)
									int tmp30 = tmp29->points->length;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(287)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(287)
									tmp27 = (tmp31 == (int)0);
								}
								else{
									HX_STACK_LINE(287)
									tmp27 = false;
								}
								HX_STACK_LINE(287)
								if ((tmp27)){
									HX_STACK_LINE(287)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(287)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(289)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(289)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp25;
							HX_STACK_LINE(290)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(290)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(290)
							::openfl::_internal::renderer::opengl::utils::FillType tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(290)
							int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(290)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(290)
							tmp26->update(tmp27,tmp28,tmp29,tmp30);
							HX_STACK_LINE(291)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(291)
							tmp31->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Circle;
							HX_STACK_LINE(292)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(292)
							tmp32->points = Array_obj< Float >::__new().Add(x).Add(y).Add(radius);
							HX_STACK_LINE(294)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(294)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp33);
						}
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float height = tmp22;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float width = tmp23;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(247)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Float y = tmp24;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						Float x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(296)
						{
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(298)
								bool tmp27 = tmp26->isRemovable;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(298)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(298)
								if ((tmp27)){
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(298)
									int tmp31 = tmp30->points->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(298)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(298)
									tmp28 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(298)
									tmp28 = false;
								}
								HX_STACK_LINE(298)
								if ((tmp28)){
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(300)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(300)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp26;
							HX_STACK_LINE(301)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(301)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(301)
							::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(301)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(301)
							int tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(301)
							tmp27->update(tmp28,tmp29,tmp30,tmp31);
							HX_STACK_LINE(302)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(302)
							tmp32->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse;
							HX_STACK_LINE(303)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(303)
							tmp33->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height);
							HX_STACK_LINE(305)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(305)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp34);
						}
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float height = tmp22;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float width = tmp23;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(247)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Float y = tmp24;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						Float x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(307)
						{
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(309)
								bool tmp27 = tmp26->isRemovable;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(309)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(309)
								if ((tmp27)){
									HX_STACK_LINE(309)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(309)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(309)
									int tmp31 = tmp30->points->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(309)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(309)
									tmp28 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(309)
									tmp28 = false;
								}
								HX_STACK_LINE(309)
								if ((tmp28)){
									HX_STACK_LINE(309)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(309)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(311)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(311)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp26;
							HX_STACK_LINE(312)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(312)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(312)
							::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(312)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(312)
							int tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(312)
							tmp27->update(tmp28,tmp29,tmp30,tmp31);
							HX_STACK_LINE(313)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp32 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(false);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(313)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(313)
							tmp33->type = tmp32;
							HX_STACK_LINE(314)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(314)
							tmp34->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height);
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp35);
						}
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float ry = tmp22;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float rx = tmp23;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(247)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Float height = tmp24;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(247)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						Float width = tmp25;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(247)
						Float tmp26 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(247)
						Float y = tmp26;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp27 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(247)
						Float x = tmp27;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(318)
						{
							HX_STACK_LINE(320)
							bool tmp28 = (ry == (int)-1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(320)
							if ((tmp28)){
								HX_STACK_LINE(320)
								ry = rx;
							}
							HX_STACK_LINE(322)
							hx::MultEq(rx,((Float)0.5));
							HX_STACK_LINE(323)
							hx::MultEq(ry,((Float)0.5));
							HX_STACK_LINE(325)
							Float tmp29 = rx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(325)
							Float tmp30 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(325)
							bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(325)
							if ((tmp31)){
								HX_STACK_LINE(325)
								Float tmp32 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(325)
								rx = tmp32;
							}
							HX_STACK_LINE(326)
							Float tmp32 = ry;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(326)
							Float tmp33 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(326)
							bool tmp34 = (tmp32 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(326)
							if ((tmp34)){
								HX_STACK_LINE(326)
								Float tmp35 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(326)
								ry = tmp35;
							}
							HX_STACK_LINE(328)
							{
								HX_STACK_LINE(328)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(328)
								bool tmp36 = tmp35->isRemovable;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(328)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(328)
								if ((tmp36)){
									HX_STACK_LINE(328)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(328)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(328)
									int tmp40 = tmp39->points->length;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(328)
									int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(328)
									tmp37 = (tmp41 == (int)0);
								}
								else{
									HX_STACK_LINE(328)
									tmp37 = false;
								}
								HX_STACK_LINE(328)
								if ((tmp37)){
									HX_STACK_LINE(328)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(328)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp35;
							HX_STACK_LINE(331)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(331)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(331)
							::openfl::_internal::renderer::opengl::utils::FillType tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(331)
							int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(331)
							int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(331)
							tmp36->update(tmp37,tmp38,tmp39,tmp40);
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp41 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(true);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(332)
							tmp42->type = tmp41;
							HX_STACK_LINE(333)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(333)
							tmp43->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry);
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp44);
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(339)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(247)
						Dynamic tmp22 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Dynamic miterLimit = tmp22;		HX_STACK_VAR(miterLimit,"miterLimit");
						HX_STACK_LINE(247)
						::openfl::display::JointStyle tmp23 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						::openfl::display::JointStyle joints = tmp23;		HX_STACK_VAR(joints,"joints");
						HX_STACK_LINE(247)
						::openfl::display::CapsStyle tmp24 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						::openfl::display::CapsStyle caps = tmp24;		HX_STACK_VAR(caps,"caps");
						HX_STACK_LINE(247)
						::openfl::display::LineScaleMode tmp25 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						::openfl::display::LineScaleMode scaleMode = tmp25;		HX_STACK_VAR(scaleMode,"scaleMode");
						HX_STACK_LINE(247)
						Dynamic tmp26 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(247)
						Dynamic pixelHinting = tmp26;		HX_STACK_VAR(pixelHinting,"pixelHinting");
						HX_STACK_LINE(247)
						Dynamic tmp27 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(247)
						Dynamic alpha = tmp27;		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(247)
						Dynamic tmp28 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(247)
						Dynamic color = tmp28;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(247)
						Dynamic tmp29 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(247)
						Dynamic thickness = tmp29;		HX_STACK_VAR(thickness,"thickness");
						HX_STACK_LINE(341)
						{
							HX_STACK_LINE(343)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp30 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(343)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp30;
							HX_STACK_LINE(345)
							bool tmp31 = (thickness == null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(345)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(345)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(345)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(345)
							if ((tmp33)){
								HX_STACK_LINE(345)
								Dynamic tmp35 = thickness;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(345)
								Dynamic tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(345)
								Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(345)
								tmp34 = ::Math_obj::isNaN(tmp37);
							}
							else{
								HX_STACK_LINE(345)
								tmp34 = true;
							}
							HX_STACK_LINE(345)
							bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(345)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(345)
							if ((tmp35)){
								HX_STACK_LINE(345)
								tmp36 = (thickness < (int)0);
							}
							else{
								HX_STACK_LINE(345)
								tmp36 = true;
							}
							HX_STACK_LINE(345)
							if ((tmp36)){
								HX_STACK_LINE(347)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(347)
								tmp37->width = (int)0;
							}
							else{
								HX_STACK_LINE(349)
								bool tmp37 = (thickness == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(349)
								if ((tmp37)){
									HX_STACK_LINE(351)
									::openfl::_internal::renderer::opengl::utils::LineStyle tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(351)
									tmp38->width = (int)1;
								}
								else{
									HX_STACK_LINE(355)
									::openfl::_internal::renderer::opengl::utils::LineStyle tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(355)
									tmp38->width = thickness;
								}
							}
							HX_STACK_LINE(359)
							{
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(359)
								bool tmp38 = tmp37->isRemovable;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(359)
								bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(359)
								if ((tmp38)){
									HX_STACK_LINE(359)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(359)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(359)
									int tmp42 = tmp41->points->length;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(359)
									int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(359)
									tmp39 = (tmp43 == (int)0);
								}
								else{
									HX_STACK_LINE(359)
									tmp39 = false;
								}
								HX_STACK_LINE(359)
								if ((tmp39)){
									HX_STACK_LINE(359)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(359)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(361)
							bool tmp37 = (color == null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(361)
							int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(361)
							if ((tmp37)){
								HX_STACK_LINE(361)
								tmp38 = (int)0;
							}
							else{
								HX_STACK_LINE(361)
								tmp38 = color;
							}
							HX_STACK_LINE(361)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(361)
							tmp39->color = tmp38;
							HX_STACK_LINE(362)
							bool tmp40 = (alpha == null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(362)
							Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(362)
							if ((tmp40)){
								HX_STACK_LINE(362)
								tmp41 = (int)1;
							}
							else{
								HX_STACK_LINE(362)
								tmp41 = alpha;
							}
							HX_STACK_LINE(362)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(362)
							tmp42->alpha = tmp41;
							HX_STACK_LINE(363)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(363)
							tmp43->scaleMode = scaleMode;
							HX_STACK_LINE(364)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(364)
							tmp44->caps = caps;
							HX_STACK_LINE(365)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(365)
							tmp45->joints = joints;
							HX_STACK_LINE(366)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(366)
							tmp46->miterLimit = miterLimit;
							HX_STACK_LINE(368)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(368)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp47;
							HX_STACK_LINE(369)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(369)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(369)
							::openfl::_internal::renderer::opengl::utils::FillType tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(369)
							int tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(369)
							int tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(369)
							tmp48->update(tmp49,tmp50,tmp51,tmp52);
							HX_STACK_LINE(370)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(370)
							tmp53->points = Array_obj< Float >::__new();
							HX_STACK_LINE(371)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(371)
							tmp54->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(373)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(373)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp55);
						}
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(377)
							Array< Float > points = tmp24->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(377)
							bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
							HX_STACK_LINE(377)
							bool tmp25 = (points->length > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(377)
							if ((tmp25)){
								HX_STACK_LINE(377)
								int tmp26 = (points->length - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(377)
								Float tmp27 = points->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(377)
								Float lastX = tmp27;		HX_STACK_VAR(lastX,"lastX");
								HX_STACK_LINE(377)
								int tmp28 = (points->length - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(377)
								Float tmp29 = points->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(377)
								Float lastY = tmp29;		HX_STACK_VAR(lastY,"lastY");
								HX_STACK_LINE(377)
								bool tmp30 = (lastX == x);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(377)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(377)
								if ((tmp30)){
									HX_STACK_LINE(377)
									tmp31 = (lastY == y);
								}
								else{
									HX_STACK_LINE(377)
									tmp31 = false;
								}
								HX_STACK_LINE(377)
								if ((tmp31)){
									HX_STACK_LINE(377)
									push_point = false;
								}
							}
							HX_STACK_LINE(377)
							bool tmp26 = (push_point == true);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(377)
							if ((tmp26)){
								HX_STACK_LINE(377)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(377)
								Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(377)
								tmp27->points->push(tmp28);
								HX_STACK_LINE(377)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(377)
								Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(377)
								tmp29->points->push(tmp30);
							}
						}
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(247)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(247)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(381)
						{
							HX_STACK_LINE(381)
							{
								HX_STACK_LINE(381)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(381)
								bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(381)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(381)
								if ((tmp25)){
									HX_STACK_LINE(381)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(381)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(381)
									int tmp29 = tmp28->points->length;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(381)
									int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(381)
									tmp26 = (tmp30 == (int)0);
								}
								else{
									HX_STACK_LINE(381)
									tmp26 = false;
								}
								HX_STACK_LINE(381)
								if ((tmp26)){
									HX_STACK_LINE(381)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(381)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(381)
							int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(381)
							int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(381)
							tmp25->update(tmp26,tmp27,tmp28,tmp29);
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(381)
							tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(381)
							Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(381)
							tmp31->points->push(tmp32);
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(381)
							Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(381)
							tmp33->points->push(tmp34);
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(381)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp35);
						}
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(247)
						int tmp22 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						int blendMode = tmp22;		HX_STACK_VAR(blendMode,"blendMode");
						HX_STACK_LINE(247)
						Array< int > tmp23 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Array< int > colors = tmp23;		HX_STACK_VAR(colors,"colors");
						HX_STACK_LINE(247)
						::openfl::display::TriangleCulling tmp24 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						::openfl::display::TriangleCulling culling = tmp24;		HX_STACK_VAR(culling,"culling");
						HX_STACK_LINE(247)
						Array< Float > tmp25 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						Array< Float > uvtData = tmp25;		HX_STACK_VAR(uvtData,"uvtData");
						HX_STACK_LINE(247)
						Array< int > tmp26 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(247)
						Array< int > indices = tmp26;		HX_STACK_VAR(indices,"indices");
						HX_STACK_LINE(247)
						Array< Float > tmp27 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(247)
						Array< Float > vertices = tmp27;		HX_STACK_VAR(vertices,"vertices");
						HX_STACK_LINE(383)
						{
							HX_STACK_LINE(385)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(385)
								::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp29;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(385)
								switch( (int)(_g2->__Index())){
									case (int)1: {
										HX_STACK_LINE(385)
										tmp28 = true;
									}
									;break;
									default: {
										HX_STACK_LINE(385)
										tmp28 = false;
									}
								}
							}
							HX_STACK_LINE(385)
							bool isColor = tmp28;		HX_STACK_VAR(isColor,"isColor");
							HX_STACK_LINE(386)
							bool tmp29 = isColor;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(386)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(386)
							if ((tmp29)){
								HX_STACK_LINE(386)
								tmp30 = (uvtData != null());
							}
							else{
								HX_STACK_LINE(386)
								tmp30 = false;
							}
							HX_STACK_LINE(386)
							if ((tmp30)){
								HX_STACK_LINE(388)
								continue;
							}
							HX_STACK_LINE(391)
							{
								HX_STACK_LINE(391)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(391)
								bool tmp32 = tmp31->isRemovable;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(391)
								bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(391)
								if ((tmp32)){
									HX_STACK_LINE(391)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(391)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(391)
									int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(391)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(391)
									tmp33 = (tmp37 == (int)0);
								}
								else{
									HX_STACK_LINE(391)
									tmp33 = false;
								}
								HX_STACK_LINE(391)
								if ((tmp33)){
									HX_STACK_LINE(391)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(391)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(393)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(393)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp31;
							HX_STACK_LINE(394)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(394)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(394)
							::openfl::_internal::renderer::opengl::utils::FillType tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(394)
							int tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(394)
							int tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(394)
							tmp32->update(tmp33,tmp34,tmp35,tmp36);
							HX_STACK_LINE(395)
							bool tmp37 = (uvtData == null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(395)
							if ((tmp37)){
								HX_STACK_LINE(396)
								Array< Float > tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(396)
								{
									HX_STACK_LINE(396)
									Array< Float > this1;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(396)
									this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
									HX_STACK_LINE(396)
									tmp38 = this1;
								}
								HX_STACK_LINE(396)
								uvtData = tmp38;
								HX_STACK_LINE(397)
								{
									HX_STACK_LINE(397)
									::openfl::_internal::renderer::opengl::utils::FillType tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(397)
									::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp39;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(397)
									switch( (int)(_g2->__Index())){
										case (int)2: {
											HX_STACK_LINE(397)
											::openfl::display::BitmapData tmp40 = (::openfl::_internal::renderer::opengl::utils::FillType(_g2))->__Param(0);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(397)
											::openfl::display::BitmapData b = tmp40;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(399)
											{
												HX_STACK_LINE(399)
												int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(399)
												int tmp41 = vertices->length;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(399)
												Float tmp42 = (Float(tmp41) / Float((int)2));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(399)
												int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(399)
												int _g3 = tmp43;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(399)
												while((true)){
													HX_STACK_LINE(399)
													bool tmp44 = (_g4 < _g3);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(399)
													bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(399)
													if ((tmp45)){
														HX_STACK_LINE(399)
														break;
													}
													HX_STACK_LINE(399)
													int tmp46 = (_g4)++;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(399)
													int i = tmp46;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(400)
													int tmp47 = (i * (int)2);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(400)
													Float tmp48 = vertices->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(400)
													Dynamic tmp49 = ((Dynamic)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(400)
													int tmp50 = b->width;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(400)
													Float tmp51 = (Float(tmp49) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(400)
													uvtData->push(tmp51);
													HX_STACK_LINE(401)
													int tmp52 = (i * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(401)
													int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(401)
													Float tmp54 = vertices->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(401)
													Dynamic tmp55 = ((Dynamic)(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(401)
													int tmp56 = b->height;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(401)
													Float tmp57 = (Float(tmp55) / Float(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(401)
													uvtData->push(tmp57);
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							HX_STACK_LINE(406)
							Array< Float > tmp38 = vertices;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(406)
							Array< int > tmp39 = indices;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(406)
							Array< Float > tmp40 = uvtData;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(406)
							::openfl::display::TriangleCulling tmp41 = culling;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(406)
							Array< int > tmp42 = colors;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(406)
							int tmp43 = blendMode;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(406)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp44 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTriangles(tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(406)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(406)
							tmp45->type = tmp44;
							HX_STACK_LINE(407)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(407)
							tmp46->isRemovable = false;
							HX_STACK_LINE(408)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(408)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp47);
						}
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(247)
						int tmp22 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						int count = tmp22;		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(247)
						int tmp23 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						int flags = tmp23;		HX_STACK_VAR(flags,"flags");
						HX_STACK_LINE(247)
						bool tmp24 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						bool smooth = tmp24;		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(247)
						Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(247)
						::openfl::display::Tilesheet tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						::openfl::display::Tilesheet sheet = tmp25;		HX_STACK_VAR(sheet,"sheet");
						HX_STACK_LINE(410)
						{
							HX_STACK_LINE(411)
							{
								HX_STACK_LINE(411)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(411)
								bool tmp27 = tmp26->isRemovable;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(411)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(411)
								if ((tmp27)){
									HX_STACK_LINE(411)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(411)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(411)
									int tmp31 = tmp30->points->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(411)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(411)
									tmp28 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(411)
									tmp28 = false;
								}
								HX_STACK_LINE(411)
								if ((tmp28)){
									HX_STACK_LINE(411)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(411)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(413)
							(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
							HX_STACK_LINE(414)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(414)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp26;
							HX_STACK_LINE(415)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(415)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(415)
							::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(415)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(415)
							int tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(415)
							tmp27->update(tmp28,tmp29,tmp30,tmp31);
							HX_STACK_LINE(416)
							::openfl::display::Tilesheet tmp32 = sheet;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							bool tmp33 = smooth;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							int tmp34 = flags;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(416)
							int tmp35 = count;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(416)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp36 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTiles(tmp32,tileData,tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(416)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(416)
							tmp37->type = tmp36;
							HX_STACK_LINE(417)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(417)
							tmp38->isRemovable = false;
							HX_STACK_LINE(418)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(418)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp39);
						}
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(247)
						::openfl::display::GraphicsPathWinding tmp22 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						::openfl::display::GraphicsPathWinding winding = tmp22;		HX_STACK_VAR(winding,"winding");
						HX_STACK_LINE(247)
						Array< Float > tmp23 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Array< Float > data = tmp23;		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(247)
						Array< int > tmp24 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						Array< int > commands = tmp24;		HX_STACK_VAR(commands,"commands");
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(422)
								bool tmp26 = tmp25->isRemovable;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(422)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(422)
								if ((tmp26)){
									HX_STACK_LINE(422)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(422)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(422)
									int tmp30 = tmp29->points->length;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(422)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(422)
									tmp27 = (tmp31 == (int)0);
								}
								else{
									HX_STACK_LINE(422)
									tmp27 = false;
								}
								HX_STACK_LINE(422)
								if ((tmp27)){
									HX_STACK_LINE(422)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(422)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(424)
							::openfl::display::GraphicsPathWinding tmp25 = winding;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(424)
							::openfl::display::GraphicsPathWinding _switch_1 = (tmp25);
							if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::EVEN_ODD)){
								HX_STACK_LINE(426)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
							}
							else if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::NON_ZERO)){
								HX_STACK_LINE(428)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)1;
							}
							else  {
								HX_STACK_LINE(430)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
							}
;
;
							HX_STACK_LINE(433)
							int command1;		HX_STACK_VAR(command1,"command1");
							HX_STACK_LINE(434)
							Float cx;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(434)
							Float cy;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(435)
							Float cx2;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(435)
							Float cy2;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(436)
							Float ax;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(436)
							Float ay;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(437)
							int idx = (int)0;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(438)
							{
								HX_STACK_LINE(438)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(438)
								int tmp26 = commands->length;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(438)
								int _g2 = tmp26;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(438)
								while((true)){
									HX_STACK_LINE(438)
									bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(438)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(438)
									if ((tmp28)){
										HX_STACK_LINE(438)
										break;
									}
									HX_STACK_LINE(438)
									int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(438)
									int i = tmp29;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(439)
									int tmp30 = commands->__get(i);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(439)
									command1 = ((Dynamic)(tmp30));
									HX_STACK_LINE(440)
									int tmp31 = command1;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(440)
									switch( (int)(tmp31)){
										case (int)1: {
											HX_STACK_LINE(442)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(442)
											ax = ((Dynamic)(tmp32));
											HX_STACK_LINE(443)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(443)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(443)
											ay = ((Dynamic)(tmp34));
											HX_STACK_LINE(444)
											hx::AddEq(idx,(int)2);
											HX_STACK_LINE(445)
											{
												HX_STACK_LINE(445)
												{
													HX_STACK_LINE(445)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(445)
													bool tmp36 = tmp35->isRemovable;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(445)
													bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(445)
													if ((tmp36)){
														HX_STACK_LINE(445)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(445)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(445)
														int tmp40 = tmp39->points->length;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(445)
														int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(445)
														tmp37 = (tmp41 == (int)0);
													}
													else{
														HX_STACK_LINE(445)
														tmp37 = false;
													}
													HX_STACK_LINE(445)
													if ((tmp37)){
														HX_STACK_LINE(445)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(445)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp35;
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::FillType tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(445)
												int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(445)
												int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(445)
												tmp36->update(tmp37,tmp38,tmp39,tmp40);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(445)
												tmp41->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(445)
												Float tmp43 = ax;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(445)
												tmp42->points->push(tmp43);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(445)
												Float tmp45 = ay;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(445)
												tmp44->points->push(tmp45);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp46);
											}
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(447)
											int tmp32 = (idx + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(447)
											Float tmp33 = data->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(447)
											ax = ((Dynamic)(tmp33));
											HX_STACK_LINE(448)
											int tmp34 = (idx + (int)3);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(448)
											Float tmp35 = data->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(448)
											ay = ((Dynamic)(tmp35));
											HX_STACK_LINE(449)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(450)
											{
												HX_STACK_LINE(450)
												{
													HX_STACK_LINE(450)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(450)
													bool tmp37 = tmp36->isRemovable;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(450)
													bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(450)
													if ((tmp37)){
														HX_STACK_LINE(450)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(450)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(450)
														int tmp41 = tmp40->points->length;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(450)
														int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(450)
														tmp38 = (tmp42 == (int)0);
													}
													else{
														HX_STACK_LINE(450)
														tmp38 = false;
													}
													HX_STACK_LINE(450)
													if ((tmp38)){
														HX_STACK_LINE(450)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(450)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp36;
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::FillType tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(450)
												int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(450)
												int tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(450)
												tmp37->update(tmp38,tmp39,tmp40,tmp41);
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(450)
												tmp42->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(450)
												Float tmp44 = ax;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(450)
												tmp43->points->push(tmp44);
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(450)
												Float tmp46 = ay;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(450)
												tmp45->points->push(tmp46);
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(450)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp47);
											}
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(452)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(452)
											ax = ((Dynamic)(tmp32));
											HX_STACK_LINE(453)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(453)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(453)
											ay = ((Dynamic)(tmp34));
											HX_STACK_LINE(454)
											hx::AddEq(idx,(int)2);
											HX_STACK_LINE(455)
											{
												HX_STACK_LINE(455)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(455)
												Array< Float > points = tmp35->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(455)
												bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
												HX_STACK_LINE(455)
												bool tmp36 = (points->length > (int)1);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(455)
												if ((tmp36)){
													HX_STACK_LINE(455)
													int tmp37 = (points->length - (int)2);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(455)
													Float tmp38 = points->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(455)
													Float lastX = tmp38;		HX_STACK_VAR(lastX,"lastX");
													HX_STACK_LINE(455)
													int tmp39 = (points->length - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(455)
													Float tmp40 = points->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(455)
													Float lastY = tmp40;		HX_STACK_VAR(lastY,"lastY");
													HX_STACK_LINE(455)
													bool tmp41 = (lastX == ax);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(455)
													bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(455)
													if ((tmp41)){
														HX_STACK_LINE(455)
														tmp42 = (lastY == ay);
													}
													else{
														HX_STACK_LINE(455)
														tmp42 = false;
													}
													HX_STACK_LINE(455)
													if ((tmp42)){
														HX_STACK_LINE(455)
														push_point = false;
													}
												}
												HX_STACK_LINE(455)
												bool tmp37 = (push_point == true);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(455)
												if ((tmp37)){
													HX_STACK_LINE(455)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(455)
													Float tmp39 = ax;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(455)
													tmp38->points->push(tmp39);
													HX_STACK_LINE(455)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(455)
													Float tmp41 = ay;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(455)
													tmp40->points->push(tmp41);
												}
											}
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(457)
											int tmp32 = (idx + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(457)
											Float tmp33 = data->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(457)
											ax = ((Dynamic)(tmp33));
											HX_STACK_LINE(458)
											int tmp34 = (idx + (int)3);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(458)
											Float tmp35 = data->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(458)
											ay = ((Dynamic)(tmp35));
											HX_STACK_LINE(459)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(460)
											{
												HX_STACK_LINE(460)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(460)
												Array< Float > points = tmp36->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(460)
												bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
												HX_STACK_LINE(460)
												bool tmp37 = (points->length > (int)1);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(460)
												if ((tmp37)){
													HX_STACK_LINE(460)
													int tmp38 = (points->length - (int)2);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(460)
													Float tmp39 = points->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(460)
													Float lastX = tmp39;		HX_STACK_VAR(lastX,"lastX");
													HX_STACK_LINE(460)
													int tmp40 = (points->length - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(460)
													Float tmp41 = points->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(460)
													Float lastY = tmp41;		HX_STACK_VAR(lastY,"lastY");
													HX_STACK_LINE(460)
													bool tmp42 = (lastX == ax);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(460)
													bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(460)
													if ((tmp42)){
														HX_STACK_LINE(460)
														tmp43 = (lastY == ay);
													}
													else{
														HX_STACK_LINE(460)
														tmp43 = false;
													}
													HX_STACK_LINE(460)
													if ((tmp43)){
														HX_STACK_LINE(460)
														push_point = false;
													}
												}
												HX_STACK_LINE(460)
												bool tmp38 = (push_point == true);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(460)
												if ((tmp38)){
													HX_STACK_LINE(460)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(460)
													Float tmp40 = ax;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(460)
													tmp39->points->push(tmp40);
													HX_STACK_LINE(460)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(460)
													Float tmp42 = ay;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(460)
													tmp41->points->push(tmp42);
												}
											}
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(462)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(462)
											cx = ((Dynamic)(tmp32));
											HX_STACK_LINE(463)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(463)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(463)
											cy = ((Dynamic)(tmp34));
											HX_STACK_LINE(464)
											int tmp35 = (idx + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(464)
											Float tmp36 = data->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(464)
											ax = ((Dynamic)(tmp36));
											HX_STACK_LINE(465)
											int tmp37 = (idx + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(465)
											Float tmp38 = data->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(465)
											ay = ((Dynamic)(tmp38));
											HX_STACK_LINE(466)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(467)
											{
												HX_STACK_LINE(467)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(467)
												int tmp40 = tmp39->points->length;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(467)
												bool tmp41 = (tmp40 == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(467)
												if ((tmp41)){
													HX_STACK_LINE(467)
													{
														HX_STACK_LINE(467)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(467)
														bool tmp43 = tmp42->isRemovable;		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(467)
														bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(467)
														if ((tmp43)){
															HX_STACK_LINE(467)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(467)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(467)
															int tmp47 = tmp46->points->length;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(467)
															int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(467)
															tmp44 = (tmp48 == (int)0);
														}
														else{
															HX_STACK_LINE(467)
															tmp44 = false;
														}
														HX_STACK_LINE(467)
														if ((tmp44)){
															HX_STACK_LINE(467)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
														}
														else{
															HX_STACK_LINE(467)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
														}
													}
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp42;
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::LineStyle tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::FillType tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(467)
													int tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(467)
													int tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(467)
													tmp43->update(tmp44,tmp45,tmp46,tmp47);
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(467)
													tmp48->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(467)
													tmp49->points->push((int)0);
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(467)
													tmp50->points->push((int)0);
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(467)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp51);
												}
												HX_STACK_LINE(467)
												Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
												HX_STACK_LINE(467)
												Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
												HX_STACK_LINE(467)
												int n = (int)20;		HX_STACK_VAR(n,"n");
												HX_STACK_LINE(467)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(467)
												Array< Float > points = tmp42->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(467)
												int tmp43 = (points->length - (int)2);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(467)
												Float tmp44 = points->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(467)
												Float fromX = tmp44;		HX_STACK_VAR(fromX,"fromX");
												HX_STACK_LINE(467)
												int tmp45 = (points->length - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(467)
												Float tmp46 = points->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(467)
												Float fromY = tmp46;		HX_STACK_VAR(fromY,"fromY");
												HX_STACK_LINE(467)
												Float px = (int)0;		HX_STACK_VAR(px,"px");
												HX_STACK_LINE(467)
												Float py = (int)0;		HX_STACK_VAR(py,"py");
												HX_STACK_LINE(467)
												Float tmp47 = (int)0;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(467)
												{
													HX_STACK_LINE(467)
													int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(467)
													int tmp48 = (n + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(467)
													int _g4 = tmp48;		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(467)
													while((true)){
														HX_STACK_LINE(467)
														bool tmp49 = (_g11 < _g4);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(467)
														bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(467)
														if ((tmp50)){
															HX_STACK_LINE(467)
															break;
														}
														HX_STACK_LINE(467)
														int tmp51 = (_g11)++;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(467)
														int i1 = tmp51;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(467)
														Float tmp52 = (Float(i1) / Float(n));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(467)
														tmp47 = tmp52;
														HX_STACK_LINE(467)
														Float tmp53 = fromX;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(467)
														Float tmp54 = (cx - fromX);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(467)
														Float tmp55 = tmp47;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(467)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(467)
														Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(467)
														xa = tmp57;
														HX_STACK_LINE(467)
														Float tmp58 = fromY;		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(467)
														Float tmp59 = (cy - fromY);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(467)
														Float tmp60 = tmp47;		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(467)
														Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(467)
														Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(467)
														ya = tmp62;
														HX_STACK_LINE(467)
														Float tmp63 = xa;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(467)
														Float tmp64 = cx;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(467)
														Float tmp65 = (ax - cx);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(467)
														Float tmp66 = tmp47;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(467)
														Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(467)
														Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(467)
														Float tmp69 = xa;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(467)
														Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(467)
														Float tmp71 = tmp47;		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(467)
														Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(467)
														Float tmp73 = (tmp63 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(467)
														px = tmp73;
														HX_STACK_LINE(467)
														Float tmp74 = ya;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(467)
														Float tmp75 = cy;		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(467)
														Float tmp76 = (ay - cy);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(467)
														Float tmp77 = tmp47;		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(467)
														Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(467)
														Float tmp79 = (tmp75 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(467)
														Float tmp80 = ya;		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(467)
														Float tmp81 = (tmp79 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(467)
														Float tmp82 = tmp47;		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(467)
														Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(467)
														Float tmp84 = (tmp74 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(467)
														py = tmp84;
														HX_STACK_LINE(467)
														Float tmp85 = px;		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(467)
														points->push(tmp85);
														HX_STACK_LINE(467)
														Float tmp86 = py;		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(467)
														points->push(tmp86);
													}
												}
											}
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(469)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(469)
											cx = ((Dynamic)(tmp32));
											HX_STACK_LINE(470)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(470)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(470)
											cy = ((Dynamic)(tmp34));
											HX_STACK_LINE(471)
											int tmp35 = (idx + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(471)
											Float tmp36 = data->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(471)
											cx2 = ((Dynamic)(tmp36));
											HX_STACK_LINE(472)
											int tmp37 = (idx + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(472)
											Float tmp38 = data->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(472)
											cy2 = ((Dynamic)(tmp38));
											HX_STACK_LINE(473)
											int tmp39 = (idx + (int)4);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(473)
											Float tmp40 = data->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(473)
											ax = ((Dynamic)(tmp40));
											HX_STACK_LINE(474)
											int tmp41 = (idx + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(474)
											Float tmp42 = data->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(474)
											ay = ((Dynamic)(tmp42));
											HX_STACK_LINE(475)
											hx::AddEq(idx,(int)6);
											HX_STACK_LINE(476)
											{
												HX_STACK_LINE(476)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(476)
												int tmp44 = tmp43->points->length;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(476)
												bool tmp45 = (tmp44 == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(476)
												if ((tmp45)){
													HX_STACK_LINE(476)
													{
														HX_STACK_LINE(476)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(476)
														bool tmp47 = tmp46->isRemovable;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(476)
														bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(476)
														if ((tmp47)){
															HX_STACK_LINE(476)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(476)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(476)
															int tmp51 = tmp50->points->length;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(476)
															int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(476)
															tmp48 = (tmp52 == (int)0);
														}
														else{
															HX_STACK_LINE(476)
															tmp48 = false;
														}
														HX_STACK_LINE(476)
														if ((tmp48)){
															HX_STACK_LINE(476)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
														}
														else{
															HX_STACK_LINE(476)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
														}
													}
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp46;
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::LineStyle tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::FillType tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(476)
													int tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(476)
													int tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(476)
													tmp47->update(tmp48,tmp49,tmp50,tmp51);
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(476)
													tmp52->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(476)
													tmp53->points->push((int)0);
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(476)
													tmp54->points->push((int)0);
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(476)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp55);
												}
												HX_STACK_LINE(476)
												int n = (int)20;		HX_STACK_VAR(n,"n");
												HX_STACK_LINE(476)
												Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
												HX_STACK_LINE(476)
												Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
												HX_STACK_LINE(476)
												Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
												HX_STACK_LINE(476)
												Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(476)
												Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(476)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(476)
												Array< Float > points = tmp46->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(476)
												int tmp47 = (points->length - (int)2);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(476)
												Float tmp48 = points->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(476)
												Float fromX = tmp48;		HX_STACK_VAR(fromX,"fromX");
												HX_STACK_LINE(476)
												int tmp49 = (points->length - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(476)
												Float tmp50 = points->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(476)
												Float fromY = tmp50;		HX_STACK_VAR(fromY,"fromY");
												HX_STACK_LINE(476)
												Float px = (int)0;		HX_STACK_VAR(px,"px");
												HX_STACK_LINE(476)
												Float py = (int)0;		HX_STACK_VAR(py,"py");
												HX_STACK_LINE(476)
												Float tmp51 = (int)0;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(476)
												{
													HX_STACK_LINE(476)
													int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(476)
													int tmp52 = (n + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(476)
													int _g4 = tmp52;		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(476)
													while((true)){
														HX_STACK_LINE(476)
														bool tmp53 = (_g11 < _g4);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(476)
														bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(476)
														if ((tmp54)){
															HX_STACK_LINE(476)
															break;
														}
														HX_STACK_LINE(476)
														int tmp55 = (_g11)++;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(476)
														int i1 = tmp55;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(476)
														Float tmp56 = (Float(i1) / Float(n));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(476)
														tmp51 = tmp56;
														HX_STACK_LINE(476)
														Float tmp57 = ((int)1 - tmp51);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(476)
														dt = tmp57;
														HX_STACK_LINE(476)
														Float tmp58 = (dt * dt);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(476)
														dt2 = tmp58;
														HX_STACK_LINE(476)
														Float tmp59 = (dt2 * dt);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(476)
														dt3 = tmp59;
														HX_STACK_LINE(476)
														Float tmp60 = (tmp51 * tmp51);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(476)
														t2 = tmp60;
														HX_STACK_LINE(476)
														Float tmp61 = (t2 * tmp51);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(476)
														t3 = tmp61;
														HX_STACK_LINE(476)
														Float tmp62 = (dt3 * fromX);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(476)
														Float tmp63 = ((int)3 * dt2);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(476)
														Float tmp64 = tmp51;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(476)
														Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(476)
														Float tmp66 = cx;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(476)
														Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(476)
														Float tmp68 = (tmp62 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(476)
														Float tmp69 = ((int)3 * dt);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(476)
														Float tmp70 = t2;		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(476)
														Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(476)
														Float tmp72 = cx2;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(476)
														Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(476)
														Float tmp74 = (tmp68 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(476)
														Float tmp75 = (t3 * ax);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(476)
														Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(476)
														px = tmp76;
														HX_STACK_LINE(476)
														Float tmp77 = (dt3 * fromY);		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(476)
														Float tmp78 = ((int)3 * dt2);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(476)
														Float tmp79 = tmp51;		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(476)
														Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(476)
														Float tmp81 = cy;		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(476)
														Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(476)
														Float tmp83 = (tmp77 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(476)
														Float tmp84 = ((int)3 * dt);		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(476)
														Float tmp85 = t2;		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(476)
														Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(476)
														Float tmp87 = cy2;		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(476)
														Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(476)
														Float tmp89 = (tmp83 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(476)
														Float tmp90 = (t3 * ay);		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(476)
														Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(476)
														py = tmp91;
														HX_STACK_LINE(476)
														Float tmp92 = px;		HX_STACK_VAR(tmp92,"tmp92");
														HX_STACK_LINE(476)
														points->push(tmp92);
														HX_STACK_LINE(476)
														Float tmp93 = py;		HX_STACK_VAR(tmp93,"tmp93");
														HX_STACK_LINE(476)
														points->push(tmp93);
													}
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							HX_STACK_LINE(482)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
					}
					;break;
					case (int)18: {
						HX_STACK_LINE(247)
						::openfl::geom::Matrix tmp22 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						::openfl::geom::Matrix m = tmp22;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(485)
							{
								HX_STACK_LINE(485)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp23 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(485)
								bool tmp24 = tmp23->isRemovable;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(485)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(485)
								if ((tmp24)){
									HX_STACK_LINE(485)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(485)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(485)
									int tmp28 = tmp27->points->length;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(485)
									int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(485)
									tmp25 = (tmp29 == (int)0);
								}
								else{
									HX_STACK_LINE(485)
									tmp25 = false;
								}
								HX_STACK_LINE(485)
								if ((tmp25)){
									HX_STACK_LINE(485)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(485)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(487)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp23 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(487)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp23;
							HX_STACK_LINE(488)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(488)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(488)
							::openfl::_internal::renderer::opengl::utils::FillType tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(488)
							int tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(488)
							int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(488)
							tmp24->update(tmp25,tmp26,tmp27,tmp28);
							HX_STACK_LINE(489)
							::openfl::geom::Matrix tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(489)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp30 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::OverrideMatrix(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(489)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(489)
							tmp31->type = tmp30;
							HX_STACK_LINE(490)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(490)
							tmp32->isRemovable = false;
							HX_STACK_LINE(491)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(491)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp33);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
		HX_STACK_LINE(498)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
	}
	HX_STACK_LINE(502)
	graphics->__drawPaths = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths;
	HX_STACK_LINE(504)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp19 = glStack;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(504)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,build,return )


PathBuiler_obj::PathBuiler_obj()
{
}

bool PathBuiler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { outValue = __line; return true;  }
		if (HX_FIELD_EQ(inName,"__fill") ) { outValue = __fill; return true;  }
		if (HX_FIELD_EQ(inName,"moveTo") ) { outValue = moveTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineTo") ) { outValue = lineTo_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"curveTo") ) { outValue = curveTo_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { outValue = __drawPaths; return true;  }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { outValue = __fillIndex; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { outValue = cubicCurveTo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { outValue = __currentPath; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicDataPop") ) { outValue = graphicDataPop_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { outValue = __currentWinding; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::DrawPath*/ ,(void *) &PathBuiler_obj::__currentPath,HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb")},
	{hx::fsInt,(void *) &PathBuiler_obj::__currentWinding,HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &PathBuiler_obj::__drawPaths,HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(void *) &PathBuiler_obj::__line,HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(void *) &PathBuiler_obj::__fill,HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2")},
	{hx::fsInt,(void *) &PathBuiler_obj::__fillIndex,HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#endif

hx::Class PathBuiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb"),
	HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a"),
	HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"),
	HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6"),
	HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2"),
	HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("graphicDataPop","\xbf","\x67","\x3a","\x4f"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	::String(null()) };

void PathBuiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PathBuiler","\x09","\xea","\x3d","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PathBuiler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PathBuiler_obj >;
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

void PathBuiler_obj::__boot()
{
	__currentWinding= (int)0;
	__fillIndex= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
