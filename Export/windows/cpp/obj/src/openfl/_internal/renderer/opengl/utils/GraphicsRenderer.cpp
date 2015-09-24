#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__ArrayBufferView_TAError
#include <lime/utils/_ArrayBufferView/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PrimitiveShader
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GraphicsRenderer_obj::__construct()
{
	return null();
}

//GraphicsRenderer_obj::~GraphicsRenderer_obj() { }

Dynamic GraphicsRenderer_obj::__CreateEmpty() { return  new GraphicsRenderer_obj; }
hx::ObjectPtr< GraphicsRenderer_obj > GraphicsRenderer_obj::__new()
{  hx::ObjectPtr< GraphicsRenderer_obj > _result_ = new GraphicsRenderer_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsRenderer_obj > _result_ = new GraphicsRenderer_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > GraphicsRenderer_obj::fillVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::drawTrianglesVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::primitiveVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::graphicsDataPool;

Array< ::Dynamic > GraphicsRenderer_obj::bucketPool;

Float GraphicsRenderer_obj::SIN45;

Float GraphicsRenderer_obj::TAN22;

::openfl::geom::Point GraphicsRenderer_obj::objectPosition;

::openfl::geom::Rectangle GraphicsRenderer_obj::objectBounds;

::lime::graphics::opengl::GLBuffer GraphicsRenderer_obj::lastVertsBuffer;

::openfl::_internal::renderer::opengl::utils::BucketMode GraphicsRenderer_obj::lastBucketMode;

::lime::graphics::opengl::GLTexture GraphicsRenderer_obj::lastTexture;

bool GraphicsRenderer_obj::lastTextureRepeat;

bool GraphicsRenderer_obj::lastTextureSmooth;

::openfl::geom::Matrix GraphicsRenderer_obj::overrideMatrix;

Void GraphicsRenderer_obj::buildCircle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildCircle",0x5396c8ff,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildCircle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",78,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(79)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(81)
		Float tmp = rectData->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(82)
		Float tmp1 = rectData->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(83)
		Float tmp2 = rectData->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Float width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(84)
		bool tmp3 = (rectData->length == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(84)
			tmp4 = width;
		}
		else{
			HX_STACK_LINE(84)
			tmp4 = rectData->__get((int)3);
		}
		HX_STACK_LINE(84)
		Float height = tmp4;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(86)
		bool tmp5 = (path->type == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp5)){
			HX_STACK_LINE(87)
			hx::DivEq(width,(int)2);
			HX_STACK_LINE(88)
			hx::DivEq(height,(int)2);
			HX_STACK_LINE(89)
			hx::AddEq(x,width);
			HX_STACK_LINE(90)
			hx::AddEq(y,height);
		}
		HX_STACK_LINE(93)
		bool tmp6 = localCoords;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		if ((tmp6)){
			HX_STACK_LINE(94)
			::openfl::geom::Rectangle tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			hx::SubEq(x,tmp7->x);
			HX_STACK_LINE(95)
			::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			hx::SubEq(y,tmp8->y);
		}
		HX_STACK_LINE(98)
		int totalSegs = (int)40;		HX_STACK_VAR(totalSegs,"totalSegs");
		HX_STACK_LINE(99)
		Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		int tmp9 = totalSegs;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		Float seg = tmp10;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = path;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp12 = glStack;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp13 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp13;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp14 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp14;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(104)
		bool tmp15 = (fill != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(104)
		if ((tmp15)){
			HX_STACK_LINE(105)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(106)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(108)
			Float tmp16 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(108)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(108)
			int vertPos = tmp17;		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(110)
			int tmp18 = vertPos;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(110)
			indices->push(tmp18);
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(112)
				int tmp19 = (totalSegs + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(112)
				int _g = tmp19;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(112)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(112)
					if ((tmp21)){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(112)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(114)
					Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(114)
					verts->push(tmp23);
					HX_STACK_LINE(115)
					Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(115)
					verts->push(tmp24);
					HX_STACK_LINE(117)
					Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(117)
					Float tmp26 = (seg * i);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(117)
					Float tmp27 = ::Math_obj::sin(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(117)
					Float tmp28 = width;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(117)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(117)
					Float tmp30 = (tmp25 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(117)
					verts->push(tmp30);
					HX_STACK_LINE(118)
					Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(118)
					Float tmp32 = (seg * i);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(118)
					Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(118)
					Float tmp34 = height;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(118)
					Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(118)
					Float tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(118)
					verts->push(tmp36);
					HX_STACK_LINE(120)
					int tmp37 = (vertPos)++;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(120)
					indices->push(tmp37);
					HX_STACK_LINE(121)
					int tmp38 = (vertPos)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(121)
					indices->push(tmp38);
				}
			}
			HX_STACK_LINE(125)
			int tmp19 = (vertPos - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(125)
			indices->push(tmp19);
		}
		HX_STACK_LINE(130)
		Float tmp16 = path->line->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(130)
		bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(130)
		if ((tmp17)){
			HX_STACK_LINE(132)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(133)
			path->points = Array_obj< Float >::__new();
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(135)
				int tmp18 = (totalSegs + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(135)
				int _g = tmp18;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(135)
				while((true)){
					HX_STACK_LINE(135)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(135)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(135)
					if ((tmp20)){
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(135)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(135)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(137)
					Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(137)
					Float tmp23 = (seg * i);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(137)
					Float tmp24 = ::Math_obj::sin(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(137)
					Float tmp25 = width;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(137)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(137)
					Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(137)
					path->points->push(tmp27);
					HX_STACK_LINE(138)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(138)
					Float tmp29 = (seg * i);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(138)
					Float tmp30 = ::Math_obj::cos(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(138)
					Float tmp31 = height;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(138)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(138)
					Float tmp33 = (tmp28 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(138)
					path->points->push(tmp33);
				}
			}
			HX_STACK_LINE(142)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp18 = path;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(142)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp19 = bucket;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(142)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp18,tmp19,null());
			HX_STACK_LINE(143)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildCircle,(void))

Void GraphicsRenderer_obj::buildComplexPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildComplexPoly",0xd9b80f4d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildComplexPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",149,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(151)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(153)
		int tmp = path->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = (tmp >= (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		if ((tmp1)){
			HX_STACK_LINE(154)
			Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(156)
			bool tmp2 = localCoords;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			if ((tmp2)){
				HX_STACK_LINE(157)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				Float tmp3 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(157)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(157)
					if ((tmp6)){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(157)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(158)
					int tmp8 = (i * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					::openfl::geom::Rectangle tmp9 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(158)
					Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(158)
					hx::SubEq(points[tmp8],tmp10);
					HX_STACK_LINE(159)
					int tmp11 = (i * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(159)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(159)
					::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(159)
					Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(159)
					hx::SubEq(points[tmp12],tmp14);
				}
			}
			HX_STACK_LINE(164)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			::openfl::_internal::renderer::opengl::utils::GLStack tmp4 = glStack;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp5 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			bucket = tmp5;
			HX_STACK_LINE(165)
			::openfl::_internal::renderer::opengl::utils::GLBucketData tmp6 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp6;		HX_STACK_VAR(fill,"fill");
			HX_STACK_LINE(166)
			int tmp7 = glStack->gl->TRIANGLE_FAN;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			fill->drawMode = tmp7;
			HX_STACK_LINE(167)
			fill->verts = points;
			HX_STACK_LINE(169)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(170)
			Float tmp8 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			int length = tmp9;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(171)
				while((true)){
					HX_STACK_LINE(171)
					bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(171)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(171)
					if ((tmp11)){
						HX_STACK_LINE(171)
						break;
					}
					HX_STACK_LINE(171)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(171)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(173)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					indices->push(tmp13);
				}
			}
		}
		HX_STACK_LINE(178)
		Float tmp2 = path->line->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		if ((tmp3)){
			HX_STACK_LINE(180)
			bool tmp4 = (bucket == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			if ((tmp4)){
				HX_STACK_LINE(181)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = glStack;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(181)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(181)
				bucket = tmp7;
			}
			HX_STACK_LINE(183)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp6 = bucket;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			bool tmp7 = localCoords;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(183)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp5,tmp6,tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildComplexPoly,(void))

Void GraphicsRenderer_obj::buildLine( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLBucket bucket,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildLine",0xe6638523,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildLine","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",188,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(190)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(191)
		bool tmp = (points->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		if ((tmp)){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(193)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp1 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Line);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		::openfl::_internal::renderer::opengl::utils::GLBucketData line = tmp1;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(195)
		bool tmp2 = localCoords;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		if ((tmp2)){
			HX_STACK_LINE(196)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(196)
			Float tmp3 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(196)
			while((true)){
				HX_STACK_LINE(196)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				if ((tmp6)){
					HX_STACK_LINE(196)
					break;
				}
				HX_STACK_LINE(196)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(197)
				int tmp8 = (i * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(197)
				::openfl::geom::Rectangle tmp9 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(197)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(197)
				hx::SubEq(points[tmp8],tmp10);
				HX_STACK_LINE(198)
				int tmp11 = (i * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(198)
				int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(198)
				::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(198)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(198)
				hx::SubEq(points[tmp12],tmp14);
			}
		}
		HX_STACK_LINE(215)
		Float tmp3 = points->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		Float tmp4 = points->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		::openfl::geom::Point firstPoint = tmp5;		HX_STACK_VAR(firstPoint,"firstPoint");
		HX_STACK_LINE(216)
		int tmp6 = (points->length - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		Float tmp8 = points->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(216)
		int tmp9 = (points->length - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(216)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(216)
		Float tmp11 = points->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new(tmp8,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		::openfl::geom::Point lastPoint = tmp12;		HX_STACK_VAR(lastPoint,"lastPoint");
		HX_STACK_LINE(218)
		bool tmp13 = (firstPoint->x == lastPoint->x);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(218)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(218)
		if ((tmp13)){
			HX_STACK_LINE(218)
			tmp14 = (firstPoint->y == lastPoint->y);
		}
		else{
			HX_STACK_LINE(218)
			tmp14 = false;
		}
		HX_STACK_LINE(218)
		if ((tmp14)){
			HX_STACK_LINE(220)
			points = points->copy();
			HX_STACK_LINE(222)
			points->pop();
			HX_STACK_LINE(223)
			points->pop();
			HX_STACK_LINE(225)
			int tmp15 = (points->length - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(225)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(225)
			Float tmp17 = points->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(225)
			int tmp18 = (points->length - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(225)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(225)
			Float tmp20 = points->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(225)
			::openfl::geom::Point tmp21 = ::openfl::geom::Point_obj::__new(tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(225)
			lastPoint = tmp21;
			HX_STACK_LINE(227)
			Float tmp22 = lastPoint->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(227)
			Float tmp23 = (firstPoint->x - lastPoint->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(227)
			Float tmp24 = (tmp23 * ((Float)0.5));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(227)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(227)
			Float midPointX = tmp25;		HX_STACK_VAR(midPointX,"midPointX");
			HX_STACK_LINE(228)
			Float tmp26 = lastPoint->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(228)
			Float tmp27 = (firstPoint->y - lastPoint->y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(228)
			Float tmp28 = (tmp27 * ((Float)0.5));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(228)
			Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(228)
			Float midPointY = tmp29;		HX_STACK_VAR(midPointY,"midPointY");
			HX_STACK_LINE(230)
			Float tmp30 = midPointY;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(230)
			points->unshift(tmp30);
			HX_STACK_LINE(231)
			Float tmp31 = midPointX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(231)
			points->unshift(tmp31);
			HX_STACK_LINE(232)
			Float tmp32 = midPointX;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(232)
			points->push(tmp32);
			HX_STACK_LINE(233)
			Float tmp33 = midPointY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(233)
			points->push(tmp33);
		}
		HX_STACK_LINE(237)
		Array< Float > verts = line->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(238)
		Array< int > indices = line->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(239)
		Float tmp15 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(239)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(239)
		int length = tmp16;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(240)
		int indexCount = points->length;		HX_STACK_VAR(indexCount,"indexCount");
		HX_STACK_LINE(241)
		Float tmp17 = (Float(verts->length) / Float((int)6));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(241)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(241)
		int indexStart = tmp18;		HX_STACK_VAR(indexStart,"indexStart");
		HX_STACK_LINE(243)
		Float tmp19 = path->line->width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(243)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(243)
		Float width = tmp20;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(245)
		Array< Float > color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			int tmp21 = path->line->color;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(245)
			Dynamic hex = tmp21;		HX_STACK_VAR(hex,"hex");
			HX_STACK_LINE(245)
			bool tmp22 = (hex == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(245)
			if ((tmp22)){
				HX_STACK_LINE(245)
				color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
			}
			else{
				HX_STACK_LINE(245)
				int tmp23 = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(245)
				int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(245)
				Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(245)
				int tmp26 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(245)
				int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(245)
				Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(245)
				int tmp29 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(245)
				Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(245)
				color = Array_obj< Float >::__new().Add(tmp25).Add(tmp28).Add(tmp30);
			}
		}
		HX_STACK_LINE(246)
		Dynamic tmp21 = path->line->alpha;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(246)
		Dynamic alpha = tmp21;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(247)
		Float tmp22 = color->__get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(247)
		Float r = tmp22;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(248)
		Float tmp23 = color->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(248)
		Float g = tmp23;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(249)
		Float tmp24 = color->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(249)
		Float b = tmp24;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(251)
		Float px;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(251)
		Float py;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(251)
		Float p1x;		HX_STACK_VAR(p1x,"p1x");
		HX_STACK_LINE(251)
		Float p1y;		HX_STACK_VAR(p1y,"p1y");
		HX_STACK_LINE(251)
		Float p2x;		HX_STACK_VAR(p2x,"p2x");
		HX_STACK_LINE(251)
		Float p2y;		HX_STACK_VAR(p2y,"p2y");
		HX_STACK_LINE(251)
		Float p3x;		HX_STACK_VAR(p3x,"p3x");
		HX_STACK_LINE(251)
		Float p3y;		HX_STACK_VAR(p3y,"p3y");
		HX_STACK_LINE(252)
		Float perpx;		HX_STACK_VAR(perpx,"perpx");
		HX_STACK_LINE(252)
		Float perpy;		HX_STACK_VAR(perpy,"perpy");
		HX_STACK_LINE(252)
		Float perp2x;		HX_STACK_VAR(perp2x,"perp2x");
		HX_STACK_LINE(252)
		Float perp2y;		HX_STACK_VAR(perp2y,"perp2y");
		HX_STACK_LINE(252)
		Float perp3x;		HX_STACK_VAR(perp3x,"perp3x");
		HX_STACK_LINE(252)
		Float perp3y;		HX_STACK_VAR(perp3y,"perp3y");
		HX_STACK_LINE(253)
		Float a1;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(253)
		Float b1;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(253)
		Float c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(253)
		Float a2;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(253)
		Float b2;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(253)
		Float c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(254)
		Float denom;		HX_STACK_VAR(denom,"denom");
		HX_STACK_LINE(254)
		Float pdist;		HX_STACK_VAR(pdist,"pdist");
		HX_STACK_LINE(254)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(256)
		Float tmp25 = points->__get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(256)
		p1x = tmp25;
		HX_STACK_LINE(257)
		Float tmp26 = points->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(257)
		p1y = tmp26;
		HX_STACK_LINE(259)
		Float tmp27 = points->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(259)
		p2x = tmp27;
		HX_STACK_LINE(260)
		Float tmp28 = points->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(260)
		p2y = tmp28;
		HX_STACK_LINE(262)
		Float tmp29 = (p1y - p2y);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(262)
		Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(262)
		perpx = tmp30;
		HX_STACK_LINE(263)
		Float tmp31 = (p1x - p2x);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(263)
		perpy = tmp31;
		HX_STACK_LINE(265)
		Float tmp32 = (perpx * perpx);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(265)
		Float tmp33 = (perpy * perpy);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(265)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(265)
		Float tmp35 = ::Math_obj::abs(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(265)
		Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(265)
		dist = tmp36;
		HX_STACK_LINE(267)
		Float tmp37 = (Float(perpx) / Float(dist));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(267)
		perpx = tmp37;
		HX_STACK_LINE(268)
		Float tmp38 = (Float(perpy) / Float(dist));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(268)
		perpy = tmp38;
		HX_STACK_LINE(269)
		Float tmp39 = (perpx * width);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(269)
		perpx = tmp39;
		HX_STACK_LINE(270)
		Float tmp40 = (perpy * width);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(270)
		perpy = tmp40;
		HX_STACK_LINE(272)
		Float tmp41 = (p1x - perpx);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(272)
		verts->push(tmp41);
		HX_STACK_LINE(273)
		Float tmp42 = (p1y - perpy);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(273)
		verts->push(tmp42);
		HX_STACK_LINE(274)
		Float tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(274)
		verts->push(tmp43);
		HX_STACK_LINE(275)
		Float tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(275)
		verts->push(tmp44);
		HX_STACK_LINE(276)
		Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(276)
		verts->push(tmp45);
		HX_STACK_LINE(277)
		Dynamic tmp46 = alpha;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(277)
		verts->push(tmp46);
		HX_STACK_LINE(279)
		Float tmp47 = (p1x + perpx);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(279)
		verts->push(tmp47);
		HX_STACK_LINE(280)
		Float tmp48 = (p1y + perpy);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(280)
		verts->push(tmp48);
		HX_STACK_LINE(281)
		Float tmp49 = r;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(281)
		verts->push(tmp49);
		HX_STACK_LINE(282)
		Float tmp50 = g;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(282)
		verts->push(tmp50);
		HX_STACK_LINE(283)
		Float tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(283)
		verts->push(tmp51);
		HX_STACK_LINE(284)
		Dynamic tmp52 = alpha;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(284)
		verts->push(tmp52);
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(286)
			int tmp53 = (length - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(286)
			int _g = tmp53;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(286)
			while((true)){
				HX_STACK_LINE(286)
				bool tmp54 = (_g1 < _g);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(286)
				bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(286)
				if ((tmp55)){
					HX_STACK_LINE(286)
					break;
				}
				HX_STACK_LINE(286)
				int tmp56 = (_g1)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(286)
				int i = tmp56;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(288)
				int tmp57 = (i - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(288)
				int tmp58 = (tmp57 * (int)2);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(288)
				Float tmp59 = points->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(288)
				p1x = tmp59;
				HX_STACK_LINE(289)
				int tmp60 = (i - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(289)
				int tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(289)
				int tmp62 = (tmp61 + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(289)
				Float tmp63 = points->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(289)
				p1y = tmp63;
				HX_STACK_LINE(290)
				int tmp64 = (i * (int)2);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(290)
				Float tmp65 = points->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(290)
				p2x = tmp65;
				HX_STACK_LINE(291)
				int tmp66 = (i * (int)2);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(291)
				int tmp67 = (tmp66 + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(291)
				Float tmp68 = points->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(291)
				p2y = tmp68;
				HX_STACK_LINE(292)
				int tmp69 = (i + (int)1);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(292)
				int tmp70 = (tmp69 * (int)2);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(292)
				Float tmp71 = points->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(292)
				p3x = tmp71;
				HX_STACK_LINE(293)
				int tmp72 = (i + (int)1);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(293)
				int tmp73 = (tmp72 * (int)2);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(293)
				int tmp74 = (tmp73 + (int)1);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(293)
				Float tmp75 = points->__get(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(293)
				p3y = tmp75;
				HX_STACK_LINE(295)
				Float tmp76 = (p1y - p2y);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(295)
				Float tmp77 = -(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(295)
				perpx = tmp77;
				HX_STACK_LINE(296)
				Float tmp78 = (p1x - p2x);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(296)
				perpy = tmp78;
				HX_STACK_LINE(298)
				Float tmp79 = (perpx * perpx);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(298)
				Float tmp80 = (perpy * perpy);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(298)
				Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(298)
				Float tmp82 = ::Math_obj::abs(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(298)
				Float tmp83 = ::Math_obj::sqrt(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(298)
				dist = tmp83;
				HX_STACK_LINE(299)
				Float tmp84 = (Float(perpx) / Float(dist));		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(299)
				perpx = tmp84;
				HX_STACK_LINE(300)
				Float tmp85 = (Float(perpy) / Float(dist));		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(300)
				perpy = tmp85;
				HX_STACK_LINE(301)
				Float tmp86 = (perpx * width);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(301)
				perpx = tmp86;
				HX_STACK_LINE(302)
				Float tmp87 = (perpy * width);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(302)
				perpy = tmp87;
				HX_STACK_LINE(304)
				Float tmp88 = (p2y - p3y);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(304)
				Float tmp89 = -(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(304)
				perp2x = tmp89;
				HX_STACK_LINE(305)
				Float tmp90 = (p2x - p3x);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(305)
				perp2y = tmp90;
				HX_STACK_LINE(307)
				Float tmp91 = (perp2x * perp2x);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(307)
				Float tmp92 = (perp2y * perp2y);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(307)
				Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(307)
				Float tmp94 = ::Math_obj::abs(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(307)
				Float tmp95 = ::Math_obj::sqrt(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(307)
				dist = tmp95;
				HX_STACK_LINE(308)
				Float tmp96 = (Float(perp2x) / Float(dist));		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(308)
				perp2x = tmp96;
				HX_STACK_LINE(309)
				Float tmp97 = (Float(perp2y) / Float(dist));		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(309)
				perp2y = tmp97;
				HX_STACK_LINE(310)
				Float tmp98 = (perp2x * width);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(310)
				perp2x = tmp98;
				HX_STACK_LINE(311)
				Float tmp99 = (perp2y * width);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(311)
				perp2y = tmp99;
				HX_STACK_LINE(313)
				Float tmp100 = perpy;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(313)
				Float tmp101 = -(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(313)
				Float tmp102 = p1y;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(313)
				Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(313)
				Float tmp104 = perpy;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(313)
				Float tmp105 = -(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(313)
				Float tmp106 = p2y;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(313)
				Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(313)
				Float tmp108 = (tmp103 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(313)
				a1 = tmp108;
				HX_STACK_LINE(314)
				Float tmp109 = perpx;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(314)
				Float tmp110 = -(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(314)
				Float tmp111 = p2x;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(314)
				Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(314)
				Float tmp113 = perpx;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(314)
				Float tmp114 = -(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(314)
				Float tmp115 = p1x;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(314)
				Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(314)
				Float tmp117 = (tmp112 - tmp116);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(314)
				b1 = tmp117;
				HX_STACK_LINE(315)
				Float tmp118 = perpx;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(315)
				Float tmp119 = -(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(315)
				Float tmp120 = p1x;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(315)
				Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(315)
				Float tmp122 = perpy;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(315)
				Float tmp123 = -(tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(315)
				Float tmp124 = p2y;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(315)
				Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(315)
				Float tmp126 = (tmp121 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(315)
				Float tmp127 = perpx;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(315)
				Float tmp128 = -(tmp127);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(315)
				Float tmp129 = p2x;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(315)
				Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(315)
				Float tmp131 = perpy;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(315)
				Float tmp132 = -(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(315)
				Float tmp133 = p1y;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(315)
				Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(315)
				Float tmp135 = (tmp130 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(315)
				Float tmp136 = (tmp126 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(315)
				c1 = tmp136;
				HX_STACK_LINE(316)
				Float tmp137 = perp2y;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(316)
				Float tmp138 = -(tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(316)
				Float tmp139 = p3y;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(316)
				Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(316)
				Float tmp141 = perp2y;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(316)
				Float tmp142 = -(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(316)
				Float tmp143 = p2y;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(316)
				Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(316)
				Float tmp145 = (tmp140 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(316)
				a2 = tmp145;
				HX_STACK_LINE(317)
				Float tmp146 = perp2x;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(317)
				Float tmp147 = -(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(317)
				Float tmp148 = p2x;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(317)
				Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(317)
				Float tmp150 = perp2x;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(317)
				Float tmp151 = -(tmp150);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(317)
				Float tmp152 = p3x;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(317)
				Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(317)
				Float tmp154 = (tmp149 - tmp153);		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(317)
				b2 = tmp154;
				HX_STACK_LINE(318)
				Float tmp155 = perp2x;		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(318)
				Float tmp156 = -(tmp155);		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(318)
				Float tmp157 = p3x;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(318)
				Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(318)
				Float tmp159 = perp2y;		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(318)
				Float tmp160 = -(tmp159);		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(318)
				Float tmp161 = p2y;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(318)
				Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(318)
				Float tmp163 = (tmp158 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(318)
				Float tmp164 = perp2x;		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(318)
				Float tmp165 = -(tmp164);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(318)
				Float tmp166 = p2x;		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(318)
				Float tmp167 = (tmp165 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(318)
				Float tmp168 = perp2y;		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(318)
				Float tmp169 = -(tmp168);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(318)
				Float tmp170 = p3y;		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(318)
				Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(318)
				Float tmp172 = (tmp167 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(318)
				Float tmp173 = (tmp163 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(318)
				c2 = tmp173;
				HX_STACK_LINE(320)
				Float tmp174 = (a1 * b2);		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(320)
				Float tmp175 = (a2 * b1);		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(320)
				Float tmp176 = (tmp174 - tmp175);		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(320)
				denom = tmp176;
				HX_STACK_LINE(322)
				Float tmp177 = denom;		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(322)
				Float tmp178 = ::Math_obj::abs(tmp177);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(322)
				bool tmp179 = (tmp178 < ((Float)0.1));		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(322)
				if ((tmp179)){
					HX_STACK_LINE(324)
					hx::AddEq(denom,((Float)10.1));
					HX_STACK_LINE(326)
					Float tmp180 = (p2x - perpx);		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(326)
					verts->push(tmp180);
					HX_STACK_LINE(327)
					Float tmp181 = (p2y - perpy);		HX_STACK_VAR(tmp181,"tmp181");
					HX_STACK_LINE(327)
					verts->push(tmp181);
					HX_STACK_LINE(328)
					Float tmp182 = r;		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(328)
					verts->push(tmp182);
					HX_STACK_LINE(329)
					Float tmp183 = g;		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(329)
					verts->push(tmp183);
					HX_STACK_LINE(330)
					Float tmp184 = b;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(330)
					verts->push(tmp184);
					HX_STACK_LINE(331)
					Dynamic tmp185 = alpha;		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(331)
					verts->push(tmp185);
					HX_STACK_LINE(333)
					Float tmp186 = (p2x + perpx);		HX_STACK_VAR(tmp186,"tmp186");
					HX_STACK_LINE(333)
					verts->push(tmp186);
					HX_STACK_LINE(334)
					Float tmp187 = (p2y + perpy);		HX_STACK_VAR(tmp187,"tmp187");
					HX_STACK_LINE(334)
					verts->push(tmp187);
					HX_STACK_LINE(335)
					Float tmp188 = r;		HX_STACK_VAR(tmp188,"tmp188");
					HX_STACK_LINE(335)
					verts->push(tmp188);
					HX_STACK_LINE(336)
					Float tmp189 = g;		HX_STACK_VAR(tmp189,"tmp189");
					HX_STACK_LINE(336)
					verts->push(tmp189);
					HX_STACK_LINE(337)
					Float tmp190 = b;		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(337)
					verts->push(tmp190);
					HX_STACK_LINE(338)
					Dynamic tmp191 = alpha;		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(338)
					verts->push(tmp191);
					HX_STACK_LINE(340)
					continue;
				}
				HX_STACK_LINE(344)
				Float tmp180 = (b1 * c2);		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(344)
				Float tmp181 = (b2 * c1);		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(344)
				Float tmp182 = (tmp180 - tmp181);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(344)
				Float tmp183 = denom;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(344)
				Float tmp184 = (Float(tmp182) / Float(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(344)
				px = tmp184;
				HX_STACK_LINE(345)
				Float tmp185 = (a2 * c1);		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(345)
				Float tmp186 = (a1 * c2);		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(345)
				Float tmp187 = (tmp185 - tmp186);		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(345)
				Float tmp188 = denom;		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(345)
				Float tmp189 = (Float(tmp187) / Float(tmp188));		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(345)
				py = tmp189;
				HX_STACK_LINE(347)
				Float tmp190 = (px - p2x);		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(347)
				Float tmp191 = (px - p2x);		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(347)
				Float tmp192 = (tmp190 * tmp191);		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(347)
				Float tmp193 = (py - p2y);		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(347)
				Float tmp194 = (tmp192 + tmp193);		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(347)
				Float tmp195 = (py - p2y);		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(347)
				Float tmp196 = (tmp194 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
				HX_STACK_LINE(347)
				pdist = tmp196;
				HX_STACK_LINE(349)
				Float tmp197 = pdist;		HX_STACK_VAR(tmp197,"tmp197");
				HX_STACK_LINE(349)
				int tmp198 = (int)19600;		HX_STACK_VAR(tmp198,"tmp198");
				HX_STACK_LINE(349)
				bool tmp199 = (tmp197 > tmp198);		HX_STACK_VAR(tmp199,"tmp199");
				HX_STACK_LINE(349)
				if ((tmp199)){
					HX_STACK_LINE(351)
					Float tmp200 = (perpx - perp2x);		HX_STACK_VAR(tmp200,"tmp200");
					HX_STACK_LINE(351)
					perp3x = tmp200;
					HX_STACK_LINE(352)
					Float tmp201 = (perpy - perp2y);		HX_STACK_VAR(tmp201,"tmp201");
					HX_STACK_LINE(352)
					perp3y = tmp201;
					HX_STACK_LINE(354)
					Float tmp202 = (perp3x * perp3x);		HX_STACK_VAR(tmp202,"tmp202");
					HX_STACK_LINE(354)
					Float tmp203 = (perp3y * perp3y);		HX_STACK_VAR(tmp203,"tmp203");
					HX_STACK_LINE(354)
					Float tmp204 = (tmp202 + tmp203);		HX_STACK_VAR(tmp204,"tmp204");
					HX_STACK_LINE(354)
					Float tmp205 = ::Math_obj::abs(tmp204);		HX_STACK_VAR(tmp205,"tmp205");
					HX_STACK_LINE(354)
					Float tmp206 = ::Math_obj::sqrt(tmp205);		HX_STACK_VAR(tmp206,"tmp206");
					HX_STACK_LINE(354)
					dist = tmp206;
					HX_STACK_LINE(355)
					Float tmp207 = (Float(perp3x) / Float(dist));		HX_STACK_VAR(tmp207,"tmp207");
					HX_STACK_LINE(355)
					perp3x = tmp207;
					HX_STACK_LINE(356)
					Float tmp208 = (Float(perp3y) / Float(dist));		HX_STACK_VAR(tmp208,"tmp208");
					HX_STACK_LINE(356)
					perp3y = tmp208;
					HX_STACK_LINE(357)
					Float tmp209 = (perp3x * width);		HX_STACK_VAR(tmp209,"tmp209");
					HX_STACK_LINE(357)
					perp3x = tmp209;
					HX_STACK_LINE(358)
					Float tmp210 = (perp3y * width);		HX_STACK_VAR(tmp210,"tmp210");
					HX_STACK_LINE(358)
					perp3y = tmp210;
					HX_STACK_LINE(360)
					Float tmp211 = (p2x - perp3x);		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(360)
					verts->push(tmp211);
					HX_STACK_LINE(361)
					Float tmp212 = (p2y - perp3y);		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(361)
					verts->push(tmp212);
					HX_STACK_LINE(362)
					Float tmp213 = r;		HX_STACK_VAR(tmp213,"tmp213");
					HX_STACK_LINE(362)
					verts->push(tmp213);
					HX_STACK_LINE(363)
					Float tmp214 = g;		HX_STACK_VAR(tmp214,"tmp214");
					HX_STACK_LINE(363)
					verts->push(tmp214);
					HX_STACK_LINE(364)
					Float tmp215 = b;		HX_STACK_VAR(tmp215,"tmp215");
					HX_STACK_LINE(364)
					verts->push(tmp215);
					HX_STACK_LINE(365)
					Dynamic tmp216 = alpha;		HX_STACK_VAR(tmp216,"tmp216");
					HX_STACK_LINE(365)
					verts->push(tmp216);
					HX_STACK_LINE(367)
					Float tmp217 = (p2x + perp3x);		HX_STACK_VAR(tmp217,"tmp217");
					HX_STACK_LINE(367)
					verts->push(tmp217);
					HX_STACK_LINE(368)
					Float tmp218 = (p2y + perp3y);		HX_STACK_VAR(tmp218,"tmp218");
					HX_STACK_LINE(368)
					verts->push(tmp218);
					HX_STACK_LINE(369)
					Float tmp219 = r;		HX_STACK_VAR(tmp219,"tmp219");
					HX_STACK_LINE(369)
					verts->push(tmp219);
					HX_STACK_LINE(370)
					Float tmp220 = g;		HX_STACK_VAR(tmp220,"tmp220");
					HX_STACK_LINE(370)
					verts->push(tmp220);
					HX_STACK_LINE(371)
					Float tmp221 = b;		HX_STACK_VAR(tmp221,"tmp221");
					HX_STACK_LINE(371)
					verts->push(tmp221);
					HX_STACK_LINE(372)
					Dynamic tmp222 = alpha;		HX_STACK_VAR(tmp222,"tmp222");
					HX_STACK_LINE(372)
					verts->push(tmp222);
					HX_STACK_LINE(374)
					Float tmp223 = (p2x - perp3x);		HX_STACK_VAR(tmp223,"tmp223");
					HX_STACK_LINE(374)
					verts->push(tmp223);
					HX_STACK_LINE(375)
					Float tmp224 = (p2y - perp3y);		HX_STACK_VAR(tmp224,"tmp224");
					HX_STACK_LINE(375)
					verts->push(tmp224);
					HX_STACK_LINE(376)
					Float tmp225 = r;		HX_STACK_VAR(tmp225,"tmp225");
					HX_STACK_LINE(376)
					verts->push(tmp225);
					HX_STACK_LINE(377)
					Float tmp226 = g;		HX_STACK_VAR(tmp226,"tmp226");
					HX_STACK_LINE(377)
					verts->push(tmp226);
					HX_STACK_LINE(378)
					Float tmp227 = b;		HX_STACK_VAR(tmp227,"tmp227");
					HX_STACK_LINE(378)
					verts->push(tmp227);
					HX_STACK_LINE(379)
					Dynamic tmp228 = alpha;		HX_STACK_VAR(tmp228,"tmp228");
					HX_STACK_LINE(379)
					verts->push(tmp228);
					HX_STACK_LINE(381)
					(indexCount)++;
				}
				else{
					HX_STACK_LINE(385)
					Float tmp200 = px;		HX_STACK_VAR(tmp200,"tmp200");
					HX_STACK_LINE(385)
					verts->push(tmp200);
					HX_STACK_LINE(386)
					Float tmp201 = py;		HX_STACK_VAR(tmp201,"tmp201");
					HX_STACK_LINE(386)
					verts->push(tmp201);
					HX_STACK_LINE(387)
					Float tmp202 = r;		HX_STACK_VAR(tmp202,"tmp202");
					HX_STACK_LINE(387)
					verts->push(tmp202);
					HX_STACK_LINE(388)
					Float tmp203 = g;		HX_STACK_VAR(tmp203,"tmp203");
					HX_STACK_LINE(388)
					verts->push(tmp203);
					HX_STACK_LINE(389)
					Float tmp204 = b;		HX_STACK_VAR(tmp204,"tmp204");
					HX_STACK_LINE(389)
					verts->push(tmp204);
					HX_STACK_LINE(390)
					Dynamic tmp205 = alpha;		HX_STACK_VAR(tmp205,"tmp205");
					HX_STACK_LINE(390)
					verts->push(tmp205);
					HX_STACK_LINE(392)
					Float tmp206 = p2x;		HX_STACK_VAR(tmp206,"tmp206");
					HX_STACK_LINE(392)
					Float tmp207 = (px - p2x);		HX_STACK_VAR(tmp207,"tmp207");
					HX_STACK_LINE(392)
					Float tmp208 = (tmp206 - tmp207);		HX_STACK_VAR(tmp208,"tmp208");
					HX_STACK_LINE(392)
					verts->push(tmp208);
					HX_STACK_LINE(393)
					Float tmp209 = p2y;		HX_STACK_VAR(tmp209,"tmp209");
					HX_STACK_LINE(393)
					Float tmp210 = (py - p2y);		HX_STACK_VAR(tmp210,"tmp210");
					HX_STACK_LINE(393)
					Float tmp211 = (tmp209 - tmp210);		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(393)
					verts->push(tmp211);
					HX_STACK_LINE(394)
					Float tmp212 = r;		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(394)
					verts->push(tmp212);
					HX_STACK_LINE(395)
					Float tmp213 = g;		HX_STACK_VAR(tmp213,"tmp213");
					HX_STACK_LINE(395)
					verts->push(tmp213);
					HX_STACK_LINE(396)
					Float tmp214 = b;		HX_STACK_VAR(tmp214,"tmp214");
					HX_STACK_LINE(396)
					verts->push(tmp214);
					HX_STACK_LINE(397)
					Dynamic tmp215 = alpha;		HX_STACK_VAR(tmp215,"tmp215");
					HX_STACK_LINE(397)
					verts->push(tmp215);
				}
			}
		}
		HX_STACK_LINE(403)
		int tmp53 = (length - (int)2);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(403)
		int tmp54 = (tmp53 * (int)2);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(403)
		Float tmp55 = points->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(403)
		p1x = tmp55;
		HX_STACK_LINE(404)
		int tmp56 = (length - (int)2);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(404)
		int tmp57 = (tmp56 * (int)2);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(404)
		int tmp58 = (tmp57 + (int)1);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(404)
		Float tmp59 = points->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(404)
		p1y = tmp59;
		HX_STACK_LINE(405)
		int tmp60 = (length - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(405)
		int tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(405)
		Float tmp62 = points->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(405)
		p2x = tmp62;
		HX_STACK_LINE(406)
		int tmp63 = (length - (int)1);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(406)
		int tmp64 = (tmp63 * (int)2);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(406)
		int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(406)
		Float tmp66 = points->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(406)
		p2y = tmp66;
		HX_STACK_LINE(407)
		Float tmp67 = (p1y - p2y);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(407)
		Float tmp68 = -(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(407)
		perpx = tmp68;
		HX_STACK_LINE(408)
		Float tmp69 = (p1x - p2x);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(408)
		perpy = tmp69;
		HX_STACK_LINE(410)
		Float tmp70 = (perpx * perpx);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(410)
		Float tmp71 = (perpy * perpy);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(410)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(410)
		Float tmp73 = ::Math_obj::abs(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(410)
		Float tmp74 = ::Math_obj::sqrt(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(410)
		dist = tmp74;
		HX_STACK_LINE(411)
		Float tmp75 = dist;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(411)
		bool tmp76 = ::Math_obj::isFinite(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(411)
		bool tmp77 = !(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(411)
		if ((tmp77)){
			HX_STACK_LINE(411)
			Float tmp78 = (perpx * perpx);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(411)
			Float tmp79 = (perpy * perpy);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(411)
			Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(411)
			Dynamic tmp81 = hx::SourceInfo(HX_HCSTRING("GraphicsRenderer.hx","\x30","\xee","\x00","\xcc"),411,HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer","\x0f","\x64","\xe5","\xd1"),HX_HCSTRING("buildLine","\x42","\x4e","\xef","\xe7"));		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(411)
			::haxe::Log_obj::trace(tmp80,tmp81);
		}
		HX_STACK_LINE(412)
		Float tmp78 = (Float(perpx) / Float(dist));		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(412)
		perpx = tmp78;
		HX_STACK_LINE(413)
		Float tmp79 = (Float(perpy) / Float(dist));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(413)
		perpy = tmp79;
		HX_STACK_LINE(414)
		Float tmp80 = (perpx * width);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(414)
		perpx = tmp80;
		HX_STACK_LINE(415)
		Float tmp81 = (perpy * width);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(415)
		perpy = tmp81;
		HX_STACK_LINE(417)
		Float tmp82 = (p2x - perpx);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(417)
		verts->push(tmp82);
		HX_STACK_LINE(418)
		Float tmp83 = (p2y - perpy);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(418)
		verts->push(tmp83);
		HX_STACK_LINE(419)
		Float tmp84 = r;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(419)
		verts->push(tmp84);
		HX_STACK_LINE(420)
		Float tmp85 = g;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(420)
		verts->push(tmp85);
		HX_STACK_LINE(421)
		Float tmp86 = b;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(421)
		verts->push(tmp86);
		HX_STACK_LINE(422)
		Dynamic tmp87 = alpha;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(422)
		verts->push(tmp87);
		HX_STACK_LINE(424)
		Float tmp88 = (p2x + perpx);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(424)
		verts->push(tmp88);
		HX_STACK_LINE(425)
		Float tmp89 = (p2y + perpy);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(425)
		verts->push(tmp89);
		HX_STACK_LINE(426)
		Float tmp90 = r;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(426)
		verts->push(tmp90);
		HX_STACK_LINE(427)
		Float tmp91 = g;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(427)
		verts->push(tmp91);
		HX_STACK_LINE(428)
		Float tmp92 = b;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(428)
		verts->push(tmp92);
		HX_STACK_LINE(429)
		Dynamic tmp93 = alpha;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(429)
		verts->push(tmp93);
		HX_STACK_LINE(431)
		int tmp94 = indexStart;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(431)
		indices->push(tmp94);
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			while((true)){
				HX_STACK_LINE(433)
				bool tmp95 = (_g < indexCount);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(433)
				bool tmp96 = !(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(433)
				if ((tmp96)){
					HX_STACK_LINE(433)
					break;
				}
				HX_STACK_LINE(433)
				int tmp97 = (_g)++;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(433)
				int i = tmp97;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(435)
				int tmp98 = (indexStart)++;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(435)
				indices->push(tmp98);
			}
		}
		HX_STACK_LINE(439)
		int tmp95 = (indexStart - (int)1);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(439)
		indices->push(tmp95);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildLine,(void))

Void GraphicsRenderer_obj::buildPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildPoly",0xe90ceb7b,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",442,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(443)
		int tmp = path->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		bool tmp1 = (tmp < (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		if ((tmp1)){
			HX_STACK_LINE(443)
			return null();
		}
		HX_STACK_LINE(444)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(446)
		int l = points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(447)
		Float tmp2 = points->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(447)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(447)
		Float tmp3 = points->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(447)
		Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(448)
		int tmp4 = (l - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(448)
		Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(448)
		Float ex = tmp5;		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(448)
		int tmp6 = (l - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(448)
		Float tmp7 = points->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(448)
		Float ey = tmp7;		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(450)
		bool tmp8 = (sx != ex);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(450)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(450)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(450)
		if ((tmp9)){
			HX_STACK_LINE(450)
			tmp10 = (sy != ey);
		}
		else{
			HX_STACK_LINE(450)
			tmp10 = true;
		}
		HX_STACK_LINE(450)
		if ((tmp10)){
			HX_STACK_LINE(451)
			Float tmp11 = sx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(451)
			points->push(tmp11);
			HX_STACK_LINE(452)
			Float tmp12 = sy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(452)
			points->push(tmp12);
		}
		HX_STACK_LINE(455)
		Float tmp11 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(455)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(455)
		int length = tmp12;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(457)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(457)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp14 = glStack;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(457)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp15 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(457)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp15;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(458)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp16 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(458)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp16;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(459)
		Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(460)
		Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(462)
		bool tmp17 = (fill != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(462)
		if ((tmp17)){
			HX_STACK_LINE(463)
			Array< int > triangles = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::triangulate(points);		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(464)
			Float tmp18 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(464)
			Float vertPos = tmp18;		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(466)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(467)
			while((true)){
				HX_STACK_LINE(467)
				bool tmp19 = (i < triangles->length);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(467)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(467)
				if ((tmp20)){
					HX_STACK_LINE(467)
					break;
				}
				HX_STACK_LINE(469)
				int tmp21 = triangles->__get(i);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(469)
				Float tmp22 = vertPos;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(469)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(469)
				int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(469)
				indices->push(tmp24);
				HX_STACK_LINE(470)
				int tmp25 = triangles->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(470)
				Float tmp26 = vertPos;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(470)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(470)
				int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(470)
				indices->push(tmp28);
				HX_STACK_LINE(471)
				int tmp29 = (i + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(471)
				int tmp30 = triangles->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(471)
				Float tmp31 = vertPos;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(471)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(471)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(471)
				indices->push(tmp33);
				HX_STACK_LINE(472)
				int tmp34 = (i + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(472)
				int tmp35 = triangles->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(472)
				Float tmp36 = vertPos;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(472)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(472)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(472)
				indices->push(tmp38);
				HX_STACK_LINE(473)
				int tmp39 = (i + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(473)
				int tmp40 = triangles->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(473)
				Float tmp41 = vertPos;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(473)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(473)
				int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(473)
				indices->push(tmp43);
				HX_STACK_LINE(474)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(478)
				while((true)){
					HX_STACK_LINE(478)
					bool tmp19 = (_g < length);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(478)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(478)
					if ((tmp20)){
						HX_STACK_LINE(478)
						break;
					}
					HX_STACK_LINE(478)
					int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(478)
					int i1 = tmp21;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(480)
					int tmp22 = (i1 * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(480)
					Float tmp23 = points->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(480)
					verts->push(tmp23);
					HX_STACK_LINE(481)
					int tmp24 = (i1 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(481)
					int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(481)
					Float tmp26 = points->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(481)
					verts->push(tmp26);
				}
			}
		}
		HX_STACK_LINE(486)
		Float tmp18 = path->line->width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(486)
		bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(486)
		if ((tmp19)){
			HX_STACK_LINE(488)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp20 = path;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(488)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp21 = bucket;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(488)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp20,tmp21,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildPoly,(void))

Void GraphicsRenderer_obj::buildRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRectangle",0xede73ca0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",493,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(494)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(495)
		Float tmp = rectData->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(496)
		Float tmp1 = rectData->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(497)
		Float tmp2 = rectData->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		Float width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(498)
		Float tmp3 = rectData->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		Float height = tmp3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(500)
		bool tmp4 = localCoords;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		if ((tmp4)){
			HX_STACK_LINE(501)
			::openfl::geom::Rectangle tmp5 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			hx::SubEq(x,tmp5->x);
			HX_STACK_LINE(502)
			::openfl::geom::Rectangle tmp6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(502)
			hx::SubEq(y,tmp6->y);
		}
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = glStack;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp7;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(506)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp8 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(506)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp8;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(508)
		bool tmp9 = (fill != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(508)
		if ((tmp9)){
			HX_STACK_LINE(509)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(510)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(512)
			Float tmp10 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(512)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(512)
			int vertPos = tmp11;		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(514)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(514)
			verts->push(tmp12);
			HX_STACK_LINE(515)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(515)
			verts->push(tmp13);
			HX_STACK_LINE(516)
			Float tmp14 = (x + width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(516)
			verts->push(tmp14);
			HX_STACK_LINE(517)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(517)
			verts->push(tmp15);
			HX_STACK_LINE(518)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(518)
			verts->push(tmp16);
			HX_STACK_LINE(519)
			Float tmp17 = (y + height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(519)
			verts->push(tmp17);
			HX_STACK_LINE(520)
			Float tmp18 = (x + width);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(520)
			verts->push(tmp18);
			HX_STACK_LINE(521)
			Float tmp19 = (y + height);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(521)
			verts->push(tmp19);
			HX_STACK_LINE(523)
			int tmp20 = vertPos;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(523)
			indices->push(tmp20);
			HX_STACK_LINE(524)
			int tmp21 = vertPos;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(524)
			indices->push(tmp21);
			HX_STACK_LINE(525)
			int tmp22 = (vertPos + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(525)
			indices->push(tmp22);
			HX_STACK_LINE(526)
			int tmp23 = (vertPos + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(526)
			indices->push(tmp23);
			HX_STACK_LINE(527)
			int tmp24 = (vertPos + (int)3);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(527)
			indices->push(tmp24);
			HX_STACK_LINE(528)
			int tmp25 = (vertPos + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(528)
			indices->push(tmp25);
		}
		HX_STACK_LINE(532)
		Float tmp10 = path->line->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(532)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(532)
		if ((tmp11)){
			HX_STACK_LINE(534)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(535)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(535)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(535)
			Float tmp14 = (x + width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(535)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(535)
			Float tmp16 = (x + width);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(535)
			Float tmp17 = (y + height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(535)
			Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(535)
			Float tmp19 = (y + height);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(535)
			Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(535)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(535)
			path->points = Array_obj< Float >::__new().Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15).Add(tmp16).Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20).Add(tmp21);
			HX_STACK_LINE(536)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp22 = path;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(536)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp23 = bucket;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(536)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp22,tmp23,null());
			HX_STACK_LINE(537)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRectangle,(void))

Void GraphicsRenderer_obj::buildRoundedRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRoundedRectangle",0x47de3df1,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRoundedRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",542,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(543)
		Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(544)
		Float tmp = points->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(544)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(545)
		Float tmp1 = points->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(545)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(546)
		Float tmp2 = points->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(546)
		Float width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(547)
		Float tmp3 = points->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(547)
		Float height = tmp3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(548)
		Float tmp4 = points->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		Float rx = tmp4;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(549)
		Float tmp5 = points->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		Float ry = tmp5;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(551)
		bool tmp6 = localCoords;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(551)
		if ((tmp6)){
			HX_STACK_LINE(552)
			::openfl::geom::Rectangle tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(552)
			hx::SubEq(x,tmp7->x);
			HX_STACK_LINE(553)
			::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(553)
			hx::SubEq(y,tmp8->y);
		}
		HX_STACK_LINE(556)
		Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(556)
		Float xe = tmp7;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(557)
		Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		Float ye = tmp8;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(558)
		Float tmp9 = rx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(558)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(558)
		Float tmp11 = rx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(558)
		Float tmp12 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::SIN45;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(558)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(558)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(558)
		Float cx1 = tmp14;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(559)
		Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(559)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(559)
		Float tmp17 = rx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(559)
		Float tmp18 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::TAN22;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(559)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(559)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(559)
		Float cx2 = tmp20;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(560)
		Float tmp21 = ry;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(560)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(560)
		Float tmp23 = ry;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(560)
		Float tmp24 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::SIN45;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(560)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(560)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(560)
		Float cy1 = tmp26;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(561)
		Float tmp27 = ry;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(561)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(561)
		Float tmp29 = ry;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(561)
		Float tmp30 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::TAN22;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(561)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(561)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(561)
		Float cy2 = tmp32;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(563)
		Array< Float > recPoints = Array_obj< Float >::__new();		HX_STACK_VAR(recPoints,"recPoints");
		HX_STACK_LINE(565)
		Float tmp33 = xe;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(565)
		recPoints->push(tmp33);
		HX_STACK_LINE(566)
		Float tmp34 = (ye - ry);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(566)
		recPoints->push(tmp34);
		HX_STACK_LINE(567)
		Float tmp35 = xe;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(567)
		Float tmp36 = (ye + cy2);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(567)
		Float tmp37 = (xe + cx1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(567)
		Float tmp38 = (ye + cy1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(567)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp35,tmp36,tmp37,tmp38);
		HX_STACK_LINE(568)
		Float tmp39 = (xe + cx2);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(568)
		Float tmp40 = ye;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(568)
		Float tmp41 = (xe - rx);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(568)
		Float tmp42 = ye;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(568)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp39,tmp40,tmp41,tmp42);
		HX_STACK_LINE(569)
		Float tmp43 = (x + rx);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(569)
		recPoints->push(tmp43);
		HX_STACK_LINE(570)
		Float tmp44 = ye;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(570)
		recPoints->push(tmp44);
		HX_STACK_LINE(571)
		Float tmp45 = (x - cx2);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(571)
		Float tmp46 = ye;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(571)
		Float tmp47 = (x - cx1);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(571)
		Float tmp48 = (ye + cy1);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(571)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp45,tmp46,tmp47,tmp48);
		HX_STACK_LINE(572)
		Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(572)
		Float tmp50 = (ye + cy2);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(572)
		Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(572)
		Float tmp52 = (ye - ry);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(572)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp49,tmp50,tmp51,tmp52);
		HX_STACK_LINE(573)
		Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(573)
		recPoints->push(tmp53);
		HX_STACK_LINE(574)
		Float tmp54 = (y + ry);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(574)
		recPoints->push(tmp54);
		HX_STACK_LINE(575)
		Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(575)
		Float tmp56 = (y - cy2);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(575)
		Float tmp57 = (x - cx1);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(575)
		Float tmp58 = (y - cy1);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(575)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp55,tmp56,tmp57,tmp58);
		HX_STACK_LINE(576)
		Float tmp59 = (x - cx2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(576)
		Float tmp60 = y;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(576)
		Float tmp61 = (x + rx);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(576)
		Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(576)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp59,tmp60,tmp61,tmp62);
		HX_STACK_LINE(577)
		Float tmp63 = (xe - rx);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(577)
		recPoints->push(tmp63);
		HX_STACK_LINE(578)
		Float tmp64 = y;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(578)
		recPoints->push(tmp64);
		HX_STACK_LINE(579)
		Float tmp65 = (xe + cx2);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(579)
		Float tmp66 = y;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(579)
		Float tmp67 = (xe + cx1);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(579)
		Float tmp68 = (y - cy1);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(579)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp65,tmp66,tmp67,tmp68);
		HX_STACK_LINE(580)
		Float tmp69 = xe;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(580)
		Float tmp70 = (y - cy2);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(580)
		Float tmp71 = xe;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(580)
		Float tmp72 = (y + ry);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(580)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::curveTo(recPoints,tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(581)
		Float tmp73 = xe;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(581)
		recPoints->push(tmp73);
		HX_STACK_LINE(582)
		Float tmp74 = (ye - ry);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(582)
		recPoints->push(tmp74);
		HX_STACK_LINE(584)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp75 = path;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(584)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp76 = glStack;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(584)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp77 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp75,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(584)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp77;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(585)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp78 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(585)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp78;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(587)
		bool tmp79 = (fill != null());		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(587)
		if ((tmp79)){
			HX_STACK_LINE(588)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(589)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(591)
			Float tmp80 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(591)
			Float vecPos = tmp80;		HX_STACK_VAR(vecPos,"vecPos");
			HX_STACK_LINE(593)
			Array< int > triangles = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::triangulate(recPoints);		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(595)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(596)
			while((true)){
				HX_STACK_LINE(596)
				bool tmp81 = (i < triangles->length);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(596)
				bool tmp82 = !(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(596)
				if ((tmp82)){
					HX_STACK_LINE(596)
					break;
				}
				HX_STACK_LINE(598)
				int tmp83 = triangles->__get(i);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(598)
				Float tmp84 = vecPos;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(598)
				Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(598)
				int tmp86 = ::Std_obj::_int(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(598)
				indices->push(tmp86);
				HX_STACK_LINE(599)
				int tmp87 = triangles->__get(i);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(599)
				Float tmp88 = vecPos;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(599)
				Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(599)
				int tmp90 = ::Std_obj::_int(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(599)
				indices->push(tmp90);
				HX_STACK_LINE(600)
				int tmp91 = (i + (int)1);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(600)
				int tmp92 = triangles->__get(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(600)
				Float tmp93 = vecPos;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(600)
				Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(600)
				int tmp95 = ::Std_obj::_int(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(600)
				indices->push(tmp95);
				HX_STACK_LINE(601)
				int tmp96 = (i + (int)2);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(601)
				int tmp97 = triangles->__get(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(601)
				Float tmp98 = vecPos;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(601)
				Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(601)
				int tmp100 = ::Std_obj::_int(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(601)
				indices->push(tmp100);
				HX_STACK_LINE(602)
				int tmp101 = (i + (int)2);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(602)
				int tmp102 = triangles->__get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(602)
				Float tmp103 = vecPos;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(602)
				Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(602)
				int tmp105 = ::Std_obj::_int(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(602)
				indices->push(tmp105);
				HX_STACK_LINE(603)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(607)
			i = (int)0;
			HX_STACK_LINE(608)
			while((true)){
				HX_STACK_LINE(608)
				bool tmp81 = (i < recPoints->length);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(608)
				bool tmp82 = !(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(608)
				if ((tmp82)){
					HX_STACK_LINE(608)
					break;
				}
				HX_STACK_LINE(610)
				Float tmp83 = recPoints->__get(i);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(610)
				verts->push(tmp83);
				HX_STACK_LINE(611)
				int tmp84 = ++(i);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(611)
				Float tmp85 = recPoints->__get(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(611)
				verts->push(tmp85);
				HX_STACK_LINE(612)
				(i)++;
			}
		}
		HX_STACK_LINE(616)
		Float tmp80 = path->line->width;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(616)
		bool tmp81 = (tmp80 > (int)0);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(616)
		if ((tmp81)){
			HX_STACK_LINE(618)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(619)
			path->points = recPoints;
			HX_STACK_LINE(620)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp82 = path;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(620)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp83 = bucket;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(620)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp82,tmp83,null());
			HX_STACK_LINE(621)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRoundedRectangle,(void))

Void GraphicsRenderer_obj::buildDrawTriangles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTriangles",0xec6e38f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",626,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(628)
		::openfl::_internal::renderer::opengl::utils::GraphicType tmp = path->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		cpp::ArrayBase args = ::Type_obj::enumParameters(tmp);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(630)
		Dynamic tmp1 = args->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(630)
		Array< Float > vertices = ((Array< Float >)(tmp1));		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(631)
		Dynamic tmp2 = args->__GetItem((int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(631)
		Array< int > indices = ((Array< int >)(tmp2));		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(632)
		Dynamic tmp3 = args->__GetItem((int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(632)
		Array< Float > uvtData = ((Array< Float >)(tmp3));		HX_STACK_VAR(uvtData,"uvtData");
		HX_STACK_LINE(633)
		Dynamic tmp4 = args->__GetItem((int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(633)
		::openfl::display::TriangleCulling culling = ((::openfl::display::TriangleCulling)(tmp4));		HX_STACK_VAR(culling,"culling");
		HX_STACK_LINE(634)
		Dynamic tmp5 = args->__GetItem((int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		Array< int > colors = ((Array< int >)(tmp5));		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(635)
		Dynamic tmp6 = args->__GetItem((int)5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(635)
		int blendMode = tmp6;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(637)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(637)
		Float b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(637)
		Float c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(637)
		Float d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(637)
		Float tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(637)
		Float ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(639)
		bool tmp7 = localCoords;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(639)
		if ((tmp7)){
			HX_STACK_LINE(640)
			a = ((Float)1.0);
			HX_STACK_LINE(641)
			b = ((Float)0.0);
			HX_STACK_LINE(642)
			c = ((Float)0.0);
			HX_STACK_LINE(643)
			d = ((Float)1.0);
			HX_STACK_LINE(644)
			tx = ((Float)0.0);
			HX_STACK_LINE(645)
			ty = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(647)
			Float tmp8 = object->__worldTransform->a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(647)
			a = tmp8;
			HX_STACK_LINE(648)
			Float tmp9 = object->__worldTransform->b;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(648)
			b = tmp9;
			HX_STACK_LINE(649)
			Float tmp10 = object->__worldTransform->c;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(649)
			c = tmp10;
			HX_STACK_LINE(650)
			Float tmp11 = object->__worldTransform->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(650)
			d = tmp11;
			HX_STACK_LINE(651)
			Float tmp12 = object->__worldTransform->tx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(651)
			tx = tmp12;
			HX_STACK_LINE(652)
			Float tmp13 = object->__worldTransform->ty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(652)
			ty = tmp13;
		}
		HX_STACK_LINE(655)
		bool tmp8 = (colors != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(655)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(655)
		if ((tmp8)){
			HX_STACK_LINE(655)
			int tmp10 = colors->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(655)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(655)
			tmp9 = (tmp11 > (int)0);
		}
		else{
			HX_STACK_LINE(655)
			tmp9 = false;
		}
		HX_STACK_LINE(655)
		bool hasColors = tmp9;		HX_STACK_VAR(hasColors,"hasColors");
		HX_STACK_LINE(657)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = path;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(657)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp11 = glStack;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(657)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp12 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(657)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp12;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(658)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp13 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(658)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp13;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(659)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp14 = fill->vertexArray->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(659)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute colorAttrib = tmp14;		HX_STACK_VAR(colorAttrib,"colorAttrib");
		HX_STACK_LINE(660)
		colorAttrib->enabled = hasColors;
		HX_STACK_LINE(661)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			cpp::ArrayBase array = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(661)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(661)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(661)
			if ((tmp16)){
				HX_STACK_LINE(661)
				::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(661)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(661)
				bool tmp17 = (array != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(661)
				if ((tmp17)){
					HX_STACK_LINE(661)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(661)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(661)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(661)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(661)
						int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(661)
						_this->byteLength = tmp20;
						HX_STACK_LINE(661)
						::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(661)
							int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(661)
							::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(661)
							this2 = tmp23;
							HX_STACK_LINE(661)
							tmp21 = this2;
						}
						HX_STACK_LINE(661)
						_this->buffer = tmp21;
						HX_STACK_LINE(661)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(661)
						tmp18 = _this;
					}
					HX_STACK_LINE(661)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(661)
					bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(661)
					if ((tmp18)){
						HX_STACK_LINE(661)
						::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(661)
							::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(661)
							::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(661)
							::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(661)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(661)
							int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(661)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(661)
							int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(661)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(661)
							int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(661)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(661)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(661)
							int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(661)
							bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(661)
							if ((tmp27)){
								HX_STACK_LINE(661)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(661)
								int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(661)
								int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(661)
								::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(661)
								{
									HX_STACK_LINE(661)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(661)
									int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(661)
									::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(661)
									this2 = tmp31;
									HX_STACK_LINE(661)
									tmp29 = this2;
								}
								HX_STACK_LINE(661)
								_this->buffer = tmp29;
								HX_STACK_LINE(661)
								::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(661)
								int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(661)
								int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(661)
								_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
							}
							else{
								HX_STACK_LINE(661)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(661)
							int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(661)
							_this->byteLength = tmp28;
							HX_STACK_LINE(661)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(661)
							_this->length = srcLength;
							HX_STACK_LINE(661)
							tmp19 = _this;
						}
						HX_STACK_LINE(661)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(661)
						bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(661)
						if ((tmp19)){
							HX_STACK_LINE(661)
							::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(661)
							{
								HX_STACK_LINE(661)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(661)
								::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(661)
								bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(661)
								if ((tmp22)){
									HX_STACK_LINE(661)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(661)
								int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(661)
								bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(661)
								if ((tmp24)){
									HX_STACK_LINE(661)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(661)
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(661)
								int bufferByteLength = tmp25;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(661)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(661)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(661)
								bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(661)
								if ((tmp26)){
									HX_STACK_LINE(661)
									int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(661)
									newByteLength = tmp27;
									HX_STACK_LINE(661)
									int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(661)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(661)
									if ((tmp29)){
										HX_STACK_LINE(661)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(661)
									bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(661)
									if ((tmp30)){
										HX_STACK_LINE(661)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(661)
									int tmp27 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(661)
									newByteLength = tmp27;
									HX_STACK_LINE(661)
									int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(661)
									int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(661)
									bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(661)
									if ((tmp29)){
										HX_STACK_LINE(661)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(661)
								_this->buffer = null();
								HX_STACK_LINE(661)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(661)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(661)
								Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(661)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(661)
								_this->length = tmp28;
								HX_STACK_LINE(661)
								tmp20 = _this;
							}
							HX_STACK_LINE(661)
							this1 = tmp20;
						}
						else{
							HX_STACK_LINE(661)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(661)
			tmp15 = this1;
		}
		HX_STACK_LINE(661)
		colorAttrib->defaultValue = tmp15;
		HX_STACK_LINE(663)
		fill->rawVerts = true;
		HX_STACK_LINE(664)
		int tmp16 = indices->length;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(664)
		fill->glLength = tmp16;
		HX_STACK_LINE(665)
		int tmp17 = fill->vertexArray->get_stride();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(665)
		Float tmp18 = (Float(tmp17) / Float((int)4));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(665)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(665)
		fill->stride = tmp19;
		HX_STACK_LINE(667)
		int tmp20 = (fill->glLength * fill->stride);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(667)
		int vertsLength = tmp20;		HX_STACK_VAR(vertsLength,"vertsLength");
		HX_STACK_LINE(668)
		::lime::utils::ArrayBufferView verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(670)
		bool tmp21 = (fill->glVerts == null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(670)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(670)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(670)
		if ((tmp22)){
			HX_STACK_LINE(670)
			int tmp24 = fill->glVerts->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(670)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(670)
			int tmp26 = vertsLength;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(670)
			tmp23 = (tmp25 < tmp26);
		}
		else{
			HX_STACK_LINE(670)
			tmp23 = true;
		}
		HX_STACK_LINE(670)
		if ((tmp23)){
			HX_STACK_LINE(671)
			::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(671)
			{
				HX_STACK_LINE(671)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(671)
				bool tmp25 = (vertsLength != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(671)
				if ((tmp25)){
					HX_STACK_LINE(671)
					::lime::utils::ArrayBufferView tmp26 = ::lime::utils::ArrayBufferView_obj::__new(vertsLength,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(671)
					this1 = tmp26;
				}
				else{
					HX_STACK_LINE(671)
					bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(671)
					if ((tmp26)){
						HX_STACK_LINE(671)
						::lime::utils::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							::lime::utils::ArrayBufferView tmp28 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(671)
							::lime::utils::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(671)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(671)
							int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(671)
							_this->length = tmp29;
							HX_STACK_LINE(671)
							int tmp30 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(671)
							_this->byteLength = tmp30;
							HX_STACK_LINE(671)
							::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(671)
								int tmp32 = _this->byteLength;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(671)
								::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(671)
								this2 = tmp33;
								HX_STACK_LINE(671)
								tmp31 = this2;
							}
							HX_STACK_LINE(671)
							_this->buffer = tmp31;
							HX_STACK_LINE(671)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(671)
							tmp27 = _this;
						}
						HX_STACK_LINE(671)
						this1 = tmp27;
					}
					else{
						HX_STACK_LINE(671)
						bool tmp27 = false;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(671)
						if ((tmp27)){
							HX_STACK_LINE(671)
							::lime::utils::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::lime::utils::ArrayBufferView tmp29 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(671)
								::lime::utils::ArrayBufferView _this = tmp29;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(671)
								::haxe::io::Bytes tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(671)
								::haxe::io::Bytes srcData = tmp30;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(671)
								int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(671)
								int srcLength = tmp31;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(671)
								int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(671)
								int srcByteOffset = tmp32;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(671)
								int tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(671)
								int srcElementSize = tmp33;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(671)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(671)
								int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(671)
								int tmp35 = _this->type;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(671)
								bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(671)
								if ((tmp36)){
									HX_STACK_LINE(671)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(671)
									int tmp37 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(671)
									int cloneLength = tmp37;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(671)
									::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(671)
									{
										HX_STACK_LINE(671)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(671)
										int tmp39 = cloneLength;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(671)
										::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(671)
										this2 = tmp40;
										HX_STACK_LINE(671)
										tmp38 = this2;
									}
									HX_STACK_LINE(671)
									_this->buffer = tmp38;
									HX_STACK_LINE(671)
									::haxe::io::Bytes tmp39 = srcData;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(671)
									int tmp40 = srcByteOffset;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(671)
									int tmp41 = cloneLength;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(671)
									_this->buffer->blit((int)0,tmp39,tmp40,tmp41);
								}
								else{
									HX_STACK_LINE(671)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(671)
								int tmp37 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(671)
								_this->byteLength = tmp37;
								HX_STACK_LINE(671)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(671)
								_this->length = srcLength;
								HX_STACK_LINE(671)
								tmp28 = _this;
							}
							HX_STACK_LINE(671)
							this1 = tmp28;
						}
						else{
							HX_STACK_LINE(671)
							bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(671)
							if ((tmp28)){
								HX_STACK_LINE(671)
								::lime::utils::ArrayBufferView tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(671)
								{
									HX_STACK_LINE(671)
									::lime::utils::ArrayBufferView tmp30 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(671)
									::lime::utils::ArrayBufferView _this = tmp30;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(671)
									bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(671)
									if ((tmp31)){
										HX_STACK_LINE(671)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(671)
									int tmp32 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(671)
									bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(671)
									if ((tmp33)){
										HX_STACK_LINE(671)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(671)
									int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(671)
									int bufferByteLength = tmp34;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(671)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(671)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(671)
									bool tmp35 = true;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(671)
									if ((tmp35)){
										HX_STACK_LINE(671)
										int tmp36 = bufferByteLength;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(671)
										newByteLength = tmp36;
										HX_STACK_LINE(671)
										int tmp37 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(671)
										bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(671)
										if ((tmp38)){
											HX_STACK_LINE(671)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(671)
										bool tmp39 = (newByteLength < (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(671)
										if ((tmp39)){
											HX_STACK_LINE(671)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(671)
										int tmp36 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(671)
										newByteLength = tmp36;
										HX_STACK_LINE(671)
										int tmp37 = newByteLength;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(671)
										int newRange = tmp37;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(671)
										bool tmp38 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(671)
										if ((tmp38)){
											HX_STACK_LINE(671)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(671)
									_this->buffer = null();
									HX_STACK_LINE(671)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(671)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(671)
									Float tmp36 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(671)
									int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(671)
									_this->length = tmp37;
									HX_STACK_LINE(671)
									tmp29 = _this;
								}
								HX_STACK_LINE(671)
								this1 = tmp29;
							}
							else{
								HX_STACK_LINE(671)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(671)
				tmp24 = this1;
			}
			HX_STACK_LINE(671)
			verts = tmp24;
			HX_STACK_LINE(672)
			fill->glVerts = verts;
		}
		else{
			HX_STACK_LINE(674)
			verts = fill->glVerts;
		}
		HX_STACK_LINE(677)
		::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			::haxe::io::Bytes buffer = verts->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(677)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(677)
			bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(677)
			if ((tmp25)){
				HX_STACK_LINE(677)
				::lime::utils::ArrayBufferView tmp26 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(677)
				this1 = tmp26;
			}
			else{
				HX_STACK_LINE(677)
				bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(677)
				if ((tmp26)){
					HX_STACK_LINE(677)
					::lime::utils::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(677)
					{
						HX_STACK_LINE(677)
						::lime::utils::ArrayBufferView tmp28 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(677)
						::lime::utils::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(677)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(677)
						int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(677)
						_this->length = tmp29;
						HX_STACK_LINE(677)
						int tmp30 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(677)
						_this->byteLength = tmp30;
						HX_STACK_LINE(677)
						::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(677)
							int tmp32 = _this->byteLength;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(677)
							::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(677)
							this2 = tmp33;
							HX_STACK_LINE(677)
							tmp31 = this2;
						}
						HX_STACK_LINE(677)
						_this->buffer = tmp31;
						HX_STACK_LINE(677)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(677)
						tmp27 = _this;
					}
					HX_STACK_LINE(677)
					this1 = tmp27;
				}
				else{
					HX_STACK_LINE(677)
					bool tmp27 = false;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(677)
					if ((tmp27)){
						HX_STACK_LINE(677)
						::lime::utils::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							::lime::utils::ArrayBufferView tmp29 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(677)
							::lime::utils::ArrayBufferView _this = tmp29;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(677)
							::haxe::io::Bytes tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(677)
							::haxe::io::Bytes srcData = tmp30;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(677)
							int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(677)
							int srcLength = tmp31;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(677)
							int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(677)
							int srcByteOffset = tmp32;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(677)
							int tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(677)
							int srcElementSize = tmp33;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(677)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(677)
							int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(677)
							int tmp35 = _this->type;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(677)
							bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(677)
							if ((tmp36)){
								HX_STACK_LINE(677)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(677)
								int tmp37 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(677)
								int cloneLength = tmp37;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(677)
								::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(677)
								{
									HX_STACK_LINE(677)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(677)
									int tmp39 = cloneLength;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(677)
									::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(677)
									this2 = tmp40;
									HX_STACK_LINE(677)
									tmp38 = this2;
								}
								HX_STACK_LINE(677)
								_this->buffer = tmp38;
								HX_STACK_LINE(677)
								::haxe::io::Bytes tmp39 = srcData;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(677)
								int tmp40 = srcByteOffset;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(677)
								int tmp41 = cloneLength;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(677)
								_this->buffer->blit((int)0,tmp39,tmp40,tmp41);
							}
							else{
								HX_STACK_LINE(677)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(677)
							int tmp37 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(677)
							_this->byteLength = tmp37;
							HX_STACK_LINE(677)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(677)
							_this->length = srcLength;
							HX_STACK_LINE(677)
							tmp28 = _this;
						}
						HX_STACK_LINE(677)
						this1 = tmp28;
					}
					else{
						HX_STACK_LINE(677)
						bool tmp28 = (buffer != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(677)
						if ((tmp28)){
							HX_STACK_LINE(677)
							::lime::utils::ArrayBufferView tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(677)
							{
								HX_STACK_LINE(677)
								::lime::utils::ArrayBufferView tmp30 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(677)
								::lime::utils::ArrayBufferView _this = tmp30;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(677)
								bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(677)
								if ((tmp31)){
									HX_STACK_LINE(677)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(677)
								int tmp32 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(677)
								bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(677)
								if ((tmp33)){
									HX_STACK_LINE(677)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(677)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(677)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(677)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(677)
								bool tmp34 = true;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(677)
								if ((tmp34)){
									HX_STACK_LINE(677)
									int tmp35 = bufferByteLength;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(677)
									newByteLength = tmp35;
									HX_STACK_LINE(677)
									int tmp36 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(677)
									bool tmp37 = (tmp36 != (int)0);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(677)
									if ((tmp37)){
										HX_STACK_LINE(677)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(677)
									bool tmp38 = (newByteLength < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(677)
									if ((tmp38)){
										HX_STACK_LINE(677)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(677)
									int tmp35 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(677)
									newByteLength = tmp35;
									HX_STACK_LINE(677)
									int tmp36 = newByteLength;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(677)
									int newRange = tmp36;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(677)
									bool tmp37 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(677)
									if ((tmp37)){
										HX_STACK_LINE(677)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(677)
								_this->buffer = buffer;
								HX_STACK_LINE(677)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(677)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(677)
								Float tmp35 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(677)
								int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(677)
								_this->length = tmp36;
								HX_STACK_LINE(677)
								tmp29 = _this;
							}
							HX_STACK_LINE(677)
							this1 = tmp29;
						}
						else{
							HX_STACK_LINE(677)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
						}
					}
				}
			}
			HX_STACK_LINE(677)
			tmp24 = this1;
		}
		HX_STACK_LINE(677)
		::lime::utils::ArrayBufferView glColors = tmp24;		HX_STACK_VAR(glColors,"glColors");
		HX_STACK_LINE(679)
		int v0 = (int)0;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(679)
		int v1 = (int)0;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(679)
		int v2 = (int)0;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(680)
		int i0 = (int)0;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(680)
		int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(680)
		int i2 = (int)0;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(682)
		Float x0 = ((Float)0.0);		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(682)
		Float y0 = ((Float)0.0);		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(683)
		Float x1 = ((Float)0.0);		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(683)
		Float y1 = ((Float)0.0);		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(684)
		Float x2 = ((Float)0.0);		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(684)
		Float y2 = ((Float)0.0);		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(686)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(687)
		{
			HX_STACK_LINE(687)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(687)
			int tmp25 = indices->length;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(687)
			Float tmp26 = (Float(tmp25) / Float((int)3));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(687)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(687)
			int _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(687)
			while((true)){
				HX_STACK_LINE(687)
				bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(687)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(687)
				if ((tmp29)){
					HX_STACK_LINE(687)
					break;
				}
				HX_STACK_LINE(687)
				int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(687)
				int i = tmp30;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(689)
				int tmp31 = (i * (int)3);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(689)
				int tmp32 = indices->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(689)
				i0 = ((Dynamic)(tmp32));
				HX_STACK_LINE(689)
				int tmp33 = (i * (int)3);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(689)
				int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(689)
				int tmp35 = indices->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(689)
				i1 = ((Dynamic)(tmp35));
				HX_STACK_LINE(689)
				int tmp36 = (i * (int)3);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(689)
				int tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(689)
				int tmp38 = indices->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(689)
				i2 = ((Dynamic)(tmp38));
				HX_STACK_LINE(690)
				int tmp39 = (i0 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(690)
				v0 = tmp39;
				HX_STACK_LINE(690)
				int tmp40 = (i1 * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(690)
				v1 = tmp40;
				HX_STACK_LINE(690)
				int tmp41 = (i2 * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(690)
				v2 = tmp41;
				HX_STACK_LINE(692)
				Float tmp42 = vertices->__get(v0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(692)
				x0 = ((Dynamic)(tmp42));
				HX_STACK_LINE(692)
				int tmp43 = (v0 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(692)
				Float tmp44 = vertices->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(692)
				y0 = ((Dynamic)(tmp44));
				HX_STACK_LINE(693)
				Float tmp45 = vertices->__get(v1);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(693)
				x1 = ((Dynamic)(tmp45));
				HX_STACK_LINE(693)
				int tmp46 = (v1 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(693)
				Float tmp47 = vertices->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(693)
				y1 = ((Dynamic)(tmp47));
				HX_STACK_LINE(694)
				Float tmp48 = vertices->__get(v2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(694)
				x2 = ((Dynamic)(tmp48));
				HX_STACK_LINE(694)
				int tmp49 = (v2 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(694)
				Float tmp50 = vertices->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(694)
				y2 = ((Dynamic)(tmp50));
				HX_STACK_LINE(696)
				bool tmp51 = localCoords;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(696)
				if ((tmp51)){
					HX_STACK_LINE(697)
					::openfl::geom::Rectangle tmp52 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(697)
					hx::SubEq(x0,tmp52->x);
					HX_STACK_LINE(698)
					::openfl::geom::Rectangle tmp53 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(698)
					hx::SubEq(y0,tmp53->y);
					HX_STACK_LINE(699)
					::openfl::geom::Rectangle tmp54 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(699)
					hx::SubEq(x1,tmp54->x);
					HX_STACK_LINE(700)
					::openfl::geom::Rectangle tmp55 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(700)
					hx::SubEq(y1,tmp55->y);
					HX_STACK_LINE(701)
					::openfl::geom::Rectangle tmp56 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(701)
					hx::SubEq(x2,tmp56->x);
					HX_STACK_LINE(702)
					::openfl::geom::Rectangle tmp57 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(702)
					hx::SubEq(y2,tmp57->y);
				}
				HX_STACK_LINE(705)
				switch( (int)(culling->__Index())){
					case (int)2: {
						HX_STACK_LINE(707)
						Float tmp52 = (x1 - x0);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(707)
						Float tmp53 = (y2 - y0);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(707)
						Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(707)
						Float tmp55 = (y1 - y0);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(707)
						Float tmp56 = (x2 - x0);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(707)
						Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(707)
						Float tmp58 = (tmp54 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(707)
						bool tmp59 = (tmp58 < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(707)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(707)
						if ((tmp60)){
							HX_STACK_LINE(707)
							continue;
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(709)
						Float tmp52 = (x1 - x0);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(709)
						Float tmp53 = (y2 - y0);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(709)
						Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(709)
						Float tmp55 = (y1 - y0);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(709)
						Float tmp56 = (x2 - x0);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(709)
						Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(709)
						Float tmp58 = (tmp54 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(709)
						bool tmp59 = (tmp58 < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(709)
						if ((tmp59)){
							HX_STACK_LINE(709)
							continue;
						}
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(713)
				{
					HX_STACK_LINE(713)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(713)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(713)
					Float tmp53 = (a * x0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(713)
					Float tmp54 = (c * y0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(713)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(713)
					Float tmp56 = tx;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(713)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(713)
					Float val = tmp57;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(713)
					{
						HX_STACK_LINE(713)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(713)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(713)
						val;
					}
				}
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(714)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(714)
					Float tmp53 = (b * x0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(714)
					Float tmp54 = (d * y0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(714)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(714)
					Float tmp56 = ty;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(714)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(714)
					Float val = tmp57;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(714)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(714)
						val;
					}
				}
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(715)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(715)
					Float tmp53 = uvtData->__get(v0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(715)
					Float val = ((Dynamic)(tmp53));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(715)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(715)
						val;
					}
				}
				HX_STACK_LINE(716)
				{
					HX_STACK_LINE(716)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(716)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(716)
					int tmp53 = (v0 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(716)
					Float tmp54 = uvtData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(716)
					Float val = ((Dynamic)(tmp54));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(716)
					{
						HX_STACK_LINE(716)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(716)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(716)
						val;
					}
				}
				HX_STACK_LINE(717)
				bool tmp52 = hasColors;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(717)
				if ((tmp52)){
					HX_STACK_LINE(718)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(718)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(718)
					int tmp54 = colors->__get(i0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(718)
					int val = ((Dynamic)(tmp54));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(718)
					{
						HX_STACK_LINE(718)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(718)
						::__hxcpp_memory_set_ui32(glColors->buffer->b,(glColors->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(718)
						val;
					}
				}
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(721)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(721)
					Float tmp54 = (a * x1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(721)
					Float tmp55 = (c * y1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(721)
					Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(721)
					Float tmp57 = tx;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(721)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(721)
					Float val = tmp58;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(721)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(721)
						val;
					}
				}
				HX_STACK_LINE(722)
				{
					HX_STACK_LINE(722)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(722)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(722)
					Float tmp54 = (b * x1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(722)
					Float tmp55 = (d * y1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(722)
					Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(722)
					Float tmp57 = ty;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(722)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(722)
					Float val = tmp58;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(722)
					{
						HX_STACK_LINE(722)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(722)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(722)
						val;
					}
				}
				HX_STACK_LINE(723)
				{
					HX_STACK_LINE(723)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(723)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(723)
					Float tmp54 = uvtData->__get(v1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(723)
					Float val = ((Dynamic)(tmp54));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(723)
					{
						HX_STACK_LINE(723)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(723)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(723)
						val;
					}
				}
				HX_STACK_LINE(724)
				{
					HX_STACK_LINE(724)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(724)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(724)
					int tmp54 = (v1 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(724)
					Float tmp55 = uvtData->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(724)
					Float val = ((Dynamic)(tmp55));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(724)
					{
						HX_STACK_LINE(724)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(724)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(724)
						val;
					}
				}
				HX_STACK_LINE(725)
				bool tmp53 = hasColors;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(725)
				if ((tmp53)){
					HX_STACK_LINE(726)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(726)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(726)
					int tmp55 = colors->__get(i1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(726)
					int val = ((Dynamic)(tmp55));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(726)
					{
						HX_STACK_LINE(726)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(726)
						::__hxcpp_memory_set_ui32(glColors->buffer->b,(glColors->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(726)
						val;
					}
				}
				HX_STACK_LINE(729)
				{
					HX_STACK_LINE(729)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(729)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(729)
					Float tmp55 = (a * x2);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(729)
					Float tmp56 = (c * y2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(729)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(729)
					Float tmp58 = tx;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(729)
					Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(729)
					Float val = tmp59;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(729)
					{
						HX_STACK_LINE(729)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(729)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(729)
						val;
					}
				}
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(730)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(730)
					Float tmp55 = (b * x2);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(730)
					Float tmp56 = (d * y2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(730)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(730)
					Float tmp58 = ty;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(730)
					Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(730)
					Float val = tmp59;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(730)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(730)
						val;
					}
				}
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(731)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(731)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(731)
					Float tmp55 = uvtData->__get(v2);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(731)
					Float val = ((Dynamic)(tmp55));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(731)
					{
						HX_STACK_LINE(731)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(731)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(731)
						val;
					}
				}
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(732)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(732)
					int tmp55 = (v2 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(732)
					Float tmp56 = uvtData->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(732)
					Float val = ((Dynamic)(tmp56));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(732)
					{
						HX_STACK_LINE(732)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(732)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(732)
						val;
					}
				}
				HX_STACK_LINE(733)
				bool tmp54 = hasColors;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(733)
				if ((tmp54)){
					HX_STACK_LINE(734)
					int tmp55 = (idx)++;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(734)
					int idx1 = tmp55;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(734)
					int tmp56 = colors->__get(i2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(734)
					int val = ((Dynamic)(tmp56));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(734)
					{
						HX_STACK_LINE(734)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(734)
						::__hxcpp_memory_set_ui32(glColors->buffer->b,(glColors->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(734)
						val;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,buildDrawTriangles,(void))

Void GraphicsRenderer_obj::buildDrawTiles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTiles",0xacaa9b52,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTiles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",741,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(742)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(742)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = glStack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(742)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildDrawTiles,(void))

Void GraphicsRenderer_obj::curveTo( Array< Float > points,Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","curveTo",0x7da76cab,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.curveTo","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",746,0xd295150c)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(748)
		Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
		HX_STACK_LINE(749)
		Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
		HX_STACK_LINE(750)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(752)
		int tmp = (points->length - (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		Float tmp1 = points->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		Float fromX = tmp1;		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(753)
		int tmp2 = (points->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(753)
		Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(753)
		Float fromY = tmp3;		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(755)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(756)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(758)
		Float tmp4 = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(760)
			int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(760)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(760)
			while((true)){
				HX_STACK_LINE(760)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(760)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(760)
				if ((tmp7)){
					HX_STACK_LINE(760)
					break;
				}
				HX_STACK_LINE(760)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(760)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(762)
				Float tmp9 = (Float(i) / Float(n));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(762)
				tmp4 = tmp9;
				HX_STACK_LINE(764)
				Float tmp10 = fromX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(764)
				Float tmp11 = (cx - fromX);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(764)
				Float tmp12 = tmp4;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(764)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(764)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(764)
				xa = tmp14;
				HX_STACK_LINE(765)
				Float tmp15 = fromY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(765)
				Float tmp16 = (cy - fromY);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(765)
				Float tmp17 = tmp4;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(765)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(765)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(765)
				ya = tmp19;
				HX_STACK_LINE(767)
				Float tmp20 = xa;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(767)
				Float tmp21 = cx;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(767)
				Float tmp22 = (x - cx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(767)
				Float tmp23 = tmp4;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(767)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(767)
				Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(767)
				Float tmp26 = xa;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(767)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(767)
				Float tmp28 = tmp4;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(767)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(767)
				Float tmp30 = (tmp20 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(767)
				px = tmp30;
				HX_STACK_LINE(768)
				Float tmp31 = ya;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(768)
				Float tmp32 = cy;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(768)
				Float tmp33 = (y - cy);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(768)
				Float tmp34 = tmp4;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(768)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(768)
				Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(768)
				Float tmp37 = ya;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(768)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(768)
				Float tmp39 = tmp4;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(768)
				Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(768)
				Float tmp41 = (tmp31 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(768)
				py = tmp41;
				HX_STACK_LINE(770)
				Float tmp42 = px;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(770)
				points->push(tmp42);
				HX_STACK_LINE(771)
				Float tmp43 = py;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(771)
				points->push(tmp43);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicsRenderer_obj,curveTo,(void))

Array< Float > GraphicsRenderer_obj::quadraticBezierCurve( Float fromX,Float fromY,Float cpX,Float cpY,Float toX,Float toY){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","quadraticBezierCurve",0x90de5ad7,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.quadraticBezierCurve","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",776,0xd295150c)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(cpX,"cpX")
	HX_STACK_ARG(cpY,"cpY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_LINE(778)
	Float xa;		HX_STACK_VAR(xa,"xa");
	HX_STACK_LINE(778)
	Float ya;		HX_STACK_VAR(ya,"ya");
	HX_STACK_LINE(778)
	Float xb;		HX_STACK_VAR(xb,"xb");
	HX_STACK_LINE(778)
	Float yb;		HX_STACK_VAR(yb,"yb");
	HX_STACK_LINE(778)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(778)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(779)
	int n = (int)20;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(780)
	Array< Float > points = Array_obj< Float >::__new();		HX_STACK_VAR(points,"points");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 3; }
	Float run(Float n1,Float n2,Float perc){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",782,0xd295150c)
		HX_STACK_ARG(n1,"n1")
		HX_STACK_ARG(n2,"n2")
		HX_STACK_ARG(perc,"perc")
		{
			HX_STACK_LINE(784)
			Float tmp = (n2 - n1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(784)
			Float diff = tmp;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(785)
			Float tmp1 = n1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(785)
			Float tmp2 = (diff * perc);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(785)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(785)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_STACK_LINE(782)
	Dynamic getPt =  Dynamic(new _Function_1_1());		HX_STACK_VAR(getPt,"getPt");
	HX_STACK_LINE(789)
	Float j = ((Float)0.0);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(790)
	{
		HX_STACK_LINE(790)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(790)
		int tmp = (n + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(790)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(790)
		while((true)){
			HX_STACK_LINE(790)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(790)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(790)
			if ((tmp2)){
				HX_STACK_LINE(790)
				break;
			}
			HX_STACK_LINE(790)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(790)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(792)
			Float tmp4 = (Float(i) / Float(n));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(792)
			j = tmp4;
			HX_STACK_LINE(794)
			Float tmp5 = fromX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(794)
			Float tmp6 = cpX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(794)
			Float tmp7 = j;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(794)
			Float tmp8 = getPt(tmp5,tmp6,tmp7).Cast< Float >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(794)
			xa = tmp8;
			HX_STACK_LINE(795)
			Float tmp9 = fromY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(795)
			Float tmp10 = cpY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(795)
			Float tmp11 = j;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(795)
			Float tmp12 = getPt(tmp9,tmp10,tmp11).Cast< Float >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(795)
			ya = tmp12;
			HX_STACK_LINE(796)
			Float tmp13 = cpX;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(796)
			Float tmp14 = toX;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(796)
			Float tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(796)
			Float tmp16 = getPt(tmp13,tmp14,tmp15).Cast< Float >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(796)
			xb = tmp16;
			HX_STACK_LINE(797)
			Float tmp17 = cpY;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(797)
			Float tmp18 = toY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(797)
			Float tmp19 = j;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(797)
			Float tmp20 = getPt(tmp17,tmp18,tmp19).Cast< Float >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(797)
			yb = tmp20;
			HX_STACK_LINE(799)
			Float tmp21 = xa;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(799)
			Float tmp22 = xb;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(799)
			Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(799)
			Float tmp24 = getPt(tmp21,tmp22,tmp23).Cast< Float >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(799)
			x = tmp24;
			HX_STACK_LINE(800)
			Float tmp25 = ya;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(800)
			Float tmp26 = yb;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(800)
			Float tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(800)
			Float tmp28 = getPt(tmp25,tmp26,tmp27).Cast< Float >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(800)
			y = tmp28;
			HX_STACK_LINE(802)
			Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(802)
			points->push(tmp29);
			HX_STACK_LINE(803)
			Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(803)
			points->push(tmp30);
		}
	}
	HX_STACK_LINE(807)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,quadraticBezierCurve,return )

Void GraphicsRenderer_obj::render( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","render",0xf1488dd5,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.render","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",811,0xd295150c)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(812)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(813)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(814)
		bool dirty = graphics->__dirty;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(815)
		int tmp = graphics->__commands->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(815)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(815)
		if ((tmp1)){
			HX_STACK_LINE(816)
			return null();
		}
		HX_STACK_LINE(819)
		bool tmp2 = dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(819)
		if ((tmp2)){
			HX_STACK_LINE(820)
			::openfl::display::DisplayObject tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			::openfl::display::Graphics tmp4 = object->__graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			::lime::graphics::GLRenderContext tmp5 = renderSession->gl;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			bool tmp6 = object->cacheAsBitmap;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::updateGraphics(tmp3,tmp4,tmp5,tmp6);
		}
		HX_STACK_LINE(862)
		::openfl::display::DisplayObject tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(862)
		::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderGraphics(tmp3,tmp4,false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,render,(void))

Void GraphicsRenderer_obj::renderGraphics( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderGraphics",0xdf139fc0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",866,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(867)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(868)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(870)
		int tmp = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(870)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = graphics->__glStack->__get(tmp).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(870)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = tmp1;		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(871)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(873)
		::openfl::geom::Matrix translationMatrix;		HX_STACK_VAR(translationMatrix,"translationMatrix");
		HX_STACK_LINE(874)
		Dynamic tmp2 = localCoords;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(874)
		if ((tmp2)){
			HX_STACK_LINE(875)
			::openfl::geom::Matrix tmp3 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(875)
			translationMatrix = tmp3;
		}
		else{
			HX_STACK_LINE(877)
			translationMatrix = object->__worldTransform;
		}
		HX_STACK_LINE(880)
		::openfl::geom::Rectangle tmp3 = renderSession->spriteBatch->clipRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(880)
		::openfl::geom::Rectangle clipRect = tmp3;		HX_STACK_VAR(clipRect,"clipRect");
		HX_STACK_LINE(881)
		bool tmp4 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(881)
		bool batchDrawing = tmp4;		HX_STACK_VAR(batchDrawing,"batchDrawing");
		HX_STACK_LINE(883)
		bool tmp5 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(883)
		batchDrawing = tmp5;
		HX_STACK_LINE(885)
		{
			HX_STACK_LINE(885)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(885)
			int tmp6 = glStack->buckets->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(885)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(885)
			while((true)){
				HX_STACK_LINE(885)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(885)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(885)
				if ((tmp8)){
					HX_STACK_LINE(885)
					break;
				}
				HX_STACK_LINE(885)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(885)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(886)
				bool tmp10 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(886)
				batchDrawing = tmp10;
				HX_STACK_LINE(888)
				bool tmp11 = batchDrawing;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(888)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(888)
				if ((tmp11)){
					HX_STACK_LINE(888)
					Dynamic tmp13 = localCoords;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(888)
					Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(888)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(888)
					tmp12 = false;
				}
				HX_STACK_LINE(888)
				if ((tmp12)){
					HX_STACK_LINE(889)
					renderSession->spriteBatch->finish();
				}
				HX_STACK_LINE(892)
				::openfl::display::BlendMode tmp13 = object->__blendMode;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(892)
				renderSession->blendModeManager->setBlendMode(tmp13,null());
				HX_STACK_LINE(894)
				bool tmp14 = (clipRect != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(894)
				if ((tmp14)){
					HX_STACK_LINE(895)
					{
						HX_STACK_LINE(895)
						int tmp15 = gl->SCISSOR_TEST;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(895)
						::lime::graphics::opengl::GL_obj::lime_gl_enable(tmp15);
					}
					HX_STACK_LINE(896)
					{
						HX_STACK_LINE(896)
						Float tmp15 = clipRect->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(896)
						int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(896)
						int x = tmp16;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(897)
						Float tmp17 = clipRect->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(897)
						int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(897)
						int y = tmp18;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(898)
						Float tmp19 = clipRect->width;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(898)
						int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(898)
						int width = tmp20;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(899)
						Float tmp21 = clipRect->height;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(899)
						int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(899)
						int height = tmp22;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(896)
						{
							HX_STACK_LINE(896)
							int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(896)
							int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(896)
							int tmp25 = width;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(896)
							int tmp26 = height;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(896)
							::lime::graphics::opengl::GL_obj::lime_gl_scissor(tmp23,tmp24,tmp25,tmp26);
						}
					}
				}
				HX_STACK_LINE(903)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp15 = glStack->buckets->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(903)
				bucket = tmp15;
				HX_STACK_LINE(905)
				{
					HX_STACK_LINE(905)
					::openfl::_internal::renderer::opengl::utils::BucketMode _g2 = bucket->mode;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(905)
					switch( (int)(_g2->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(907)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp16 = bucket;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(907)
							::openfl::_internal::renderer::RenderSession tmp17 = renderSession;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(907)
							::lime::utils::ArrayBufferView tmp18 = translationMatrix->toArray(true);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(907)
							renderSession->stencilManager->pushBucket(tmp16,tmp17,tmp18,null());
							HX_STACK_LINE(908)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp19 = bucket;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(908)
							::openfl::_internal::renderer::RenderSession tmp20 = renderSession;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(908)
							::openfl::display::DisplayObject tmp21 = object;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(908)
							::lime::utils::ArrayBufferView tmp22 = translationMatrix->toArray(true);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(908)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp23 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(tmp19,tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(908)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp23;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(909)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp24 = bucket;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(909)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp25 = shader;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(909)
							::openfl::_internal::renderer::RenderSession tmp26 = renderSession;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(909)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderFill(tmp24,tmp25,tmp26);
							HX_STACK_LINE(910)
							::openfl::display::DisplayObject tmp27 = object;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(910)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp28 = bucket;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(910)
							::openfl::_internal::renderer::RenderSession tmp29 = renderSession;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(910)
							renderSession->stencilManager->popBucket(tmp27,tmp28,tmp29);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(912)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp16 = bucket;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(912)
							::openfl::_internal::renderer::RenderSession tmp17 = renderSession;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(912)
							::openfl::display::DisplayObject tmp18 = object;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(912)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp19 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(tmp16,tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(912)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp19;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(913)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp20 = bucket;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(913)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp21 = shader;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(913)
							::openfl::_internal::renderer::RenderSession tmp22 = renderSession;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(913)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderDrawTriangles(tmp20,tmp21,tmp22);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(915)
							bool tmp16 = batchDrawing;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(915)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(915)
							if ((tmp17)){
								HX_STACK_LINE(916)
								::openfl::_internal::renderer::RenderSession tmp18 = renderSession;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(916)
								::openfl::geom::Rectangle tmp19 = clipRect;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(916)
								renderSession->spriteBatch->begin(tmp18,tmp19);
							}
							HX_STACK_LINE(918)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp18 = bucket->graphicType;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(918)
							cpp::ArrayBase args = ::Type_obj::enumParameters(tmp18);		HX_STACK_VAR(args,"args");
							HX_STACK_LINE(919)
							::openfl::display::DisplayObject tmp19 = object;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(919)
							Dynamic tmp20 = args->__GetItem((int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(919)
							::openfl::display::Tilesheet tmp21 = ((::openfl::display::Tilesheet)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(919)
							Dynamic tmp22 = args->__GetItem((int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(919)
							Dynamic tmp23 = args->__GetItem((int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(919)
							bool tmp24 = ((bool)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(919)
							Dynamic tmp25 = args->__GetItem((int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(919)
							int tmp26 = ((int)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(919)
							Dynamic tmp27 = args->__GetItem((int)4);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(919)
							int tmp28 = ((int)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(919)
							renderSession->spriteBatch->renderTiles(tmp19,tmp21,((Array< Float >)(tmp22)),tmp24,tmp26,tmp28);
							HX_STACK_LINE(921)
							renderSession->spriteBatch->finish();
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(925)
				::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
				HX_STACK_LINE(926)
				{
					HX_STACK_LINE(926)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(926)
					Array< ::Dynamic > _g3 = bucket->lines;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(926)
					while((true)){
						HX_STACK_LINE(926)
						bool tmp16 = (_g2 < _g3->length);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(926)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(926)
						if ((tmp17)){
							HX_STACK_LINE(926)
							break;
						}
						HX_STACK_LINE(926)
						::openfl::_internal::renderer::opengl::utils::GLBucketData tmp18 = _g3->__get(_g2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(926)
						::openfl::_internal::renderer::opengl::utils::GLBucketData line = tmp18;		HX_STACK_VAR(line,"line");
						HX_STACK_LINE(926)
						++(_g2);
						HX_STACK_LINE(927)
						bool tmp19 = (line != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(927)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(927)
						if ((tmp19)){
							HX_STACK_LINE(927)
							int tmp21 = line->verts->length;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(927)
							int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(927)
							tmp20 = (tmp22 > (int)0);
						}
						else{
							HX_STACK_LINE(927)
							tmp20 = false;
						}
						HX_STACK_LINE(927)
						if ((tmp20)){
							HX_STACK_LINE(928)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader tmp21 = renderSession->shaderManager->primitiveShader;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(928)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader shader = tmp21;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(930)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader tmp22 = shader;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(930)
							renderSession->shaderManager->setShader(tmp22,null());
							HX_STACK_LINE(932)
							{
								HX_STACK_LINE(932)
								int tmp23 = shader->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(932)
								int location = tmp23;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(932)
								::lime::utils::ArrayBufferView tmp24 = translationMatrix->toArray(true);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(932)
								::lime::utils::ArrayBufferView v = tmp24;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(932)
								{
									HX_STACK_LINE(932)
									int tmp25 = location;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(932)
									::haxe::io::Bytes tmp26 = v->buffer;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(932)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp25,false,tmp26,(int)3);
								}
							}
							HX_STACK_LINE(933)
							{
								HX_STACK_LINE(933)
								int tmp23 = shader->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(933)
								int location = tmp23;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(933)
								::lime::utils::ArrayBufferView tmp24 = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(933)
								::lime::utils::ArrayBufferView v = tmp24;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(933)
								{
									HX_STACK_LINE(933)
									int tmp25 = location;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(933)
									::haxe::io::Bytes tmp26 = v->buffer;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(933)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp25,false,tmp26,(int)3);
								}
							}
							HX_STACK_LINE(934)
							{
								HX_STACK_LINE(934)
								int tmp23 = shader->getUniformLocation(HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(934)
								int location = tmp23;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(934)
								{
									HX_STACK_LINE(934)
									int tmp24 = location;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(934)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(tmp24,(int)1);
								}
							}
							HX_STACK_LINE(936)
							{
								HX_STACK_LINE(936)
								int tmp23 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(936)
								int location = tmp23;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(936)
								{
									HX_STACK_LINE(936)
									int tmp24 = location;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(936)
									Float tmp25 = ct->redMultiplier;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(936)
									Float tmp26 = ct->greenMultiplier;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(936)
									Float tmp27 = ct->blueMultiplier;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(936)
									Float tmp28 = ct->alphaMultiplier;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(936)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp24,tmp25,tmp26,tmp27,tmp28);
								}
							}
							HX_STACK_LINE(937)
							{
								HX_STACK_LINE(937)
								int tmp23 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(937)
								int location = tmp23;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(937)
								{
									HX_STACK_LINE(937)
									int tmp24 = location;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(937)
									Float tmp25 = (Float(ct->redOffset) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(937)
									Float tmp26 = (Float(ct->greenOffset) / Float((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(937)
									Float tmp27 = (Float(ct->blueOffset) / Float((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(937)
									Float tmp28 = (Float(ct->alphaOffset) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(937)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp24,tmp25,tmp26,tmp27,tmp28);
								}
							}
							HX_STACK_LINE(939)
							{
								HX_STACK_LINE(939)
								::openfl::_internal::renderer::opengl::utils::VertexArray _this = line->vertexArray;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(939)
								{
									HX_STACK_LINE(939)
									::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(939)
									{
										HX_STACK_LINE(939)
										int tmp23 = _this->gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(939)
										bool tmp24 = (buffer == null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(939)
										int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(939)
										if ((tmp24)){
											HX_STACK_LINE(939)
											tmp25 = (int)0;
										}
										else{
											HX_STACK_LINE(939)
											tmp25 = buffer->id;
										}
										HX_STACK_LINE(939)
										::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp23,tmp25);
									}
								}
							}
							HX_STACK_LINE(940)
							::openfl::_internal::renderer::opengl::utils::VertexArray tmp23 = line->vertexArray;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(940)
							shader->bindVertexArray(tmp23);
							HX_STACK_LINE(942)
							{
								HX_STACK_LINE(942)
								::lime::graphics::opengl::GLBuffer buffer = line->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(942)
								{
									HX_STACK_LINE(942)
									int tmp24 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(942)
									bool tmp25 = (buffer == null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(942)
									int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(942)
									if ((tmp25)){
										HX_STACK_LINE(942)
										tmp26 = (int)0;
									}
									else{
										HX_STACK_LINE(942)
										tmp26 = buffer->id;
									}
									HX_STACK_LINE(942)
									::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp24,tmp26);
								}
							}
							HX_STACK_LINE(943)
							{
								HX_STACK_LINE(943)
								int tmp24 = gl->TRIANGLE_STRIP;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(943)
								int tmp25 = line->indices->length;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(943)
								int tmp26 = gl->UNSIGNED_SHORT;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(943)
								::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(tmp24,tmp25,tmp26,(int)0);
							}
						}
					}
				}
				HX_STACK_LINE(947)
				bool tmp16 = (clipRect != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(947)
				if ((tmp16)){
					HX_STACK_LINE(948)
					int tmp17 = gl->SCISSOR_TEST;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(948)
					::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp17);
				}
				HX_STACK_LINE(951)
				bool tmp17 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(951)
				batchDrawing = tmp17;
				HX_STACK_LINE(952)
				bool tmp18 = batchDrawing;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(952)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(952)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(952)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(952)
				if ((tmp20)){
					HX_STACK_LINE(952)
					Dynamic tmp22 = localCoords;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(952)
					Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(952)
					tmp21 = !(tmp23);
				}
				else{
					HX_STACK_LINE(952)
					tmp21 = false;
				}
				HX_STACK_LINE(952)
				if ((tmp21)){
					HX_STACK_LINE(953)
					::openfl::_internal::renderer::RenderSession tmp22 = renderSession;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(953)
					::openfl::geom::Rectangle tmp23 = clipRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(953)
					renderSession->spriteBatch->begin(tmp22,tmp23);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderGraphics,(void))

Void GraphicsRenderer_obj::updateGraphics( ::openfl::display::DisplayObject object,::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","updateGraphics",0xa0662573,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.updateGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",958,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(960)
		{
			HX_STACK_LINE(960)
			::openfl::geom::Point tmp = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectPosition;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(960)
			::openfl::geom::Point _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(960)
			Float tmp1 = object->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(960)
			Float xa = tmp1;		HX_STACK_VAR(xa,"xa");
			HX_STACK_LINE(960)
			Float tmp2 = object->get_y();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(960)
			Float ya = tmp2;		HX_STACK_VAR(ya,"ya");
			HX_STACK_LINE(960)
			_this->x = xa;
			HX_STACK_LINE(960)
			_this->y = ya;
		}
		HX_STACK_LINE(962)
		bool tmp = (graphics->__bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(962)
		if ((tmp)){
			HX_STACK_LINE(963)
			::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(963)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds = tmp1;
		}
		else{
			HX_STACK_LINE(965)
			::openfl::geom::Rectangle tmp1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(965)
			::openfl::geom::Rectangle tmp2 = graphics->__bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(965)
			tmp1->copyFrom(tmp2);
		}
		HX_STACK_LINE(968)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(970)
		bool tmp1 = graphics->__dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(970)
		if ((tmp1)){
			HX_STACK_LINE(972)
			::openfl::display::Graphics tmp2 = graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(972)
			::lime::graphics::GLRenderContext tmp3 = gl;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(972)
			::openfl::_internal::renderer::opengl::utils::GLStack tmp4 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::getStack(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(972)
			glStack = tmp4;
		}
		HX_STACK_LINE(976)
		graphics->set___dirty(false);
		HX_STACK_LINE(978)
		{
			HX_STACK_LINE(978)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(978)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(978)
			while((true)){
				HX_STACK_LINE(978)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(978)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(978)
				if ((tmp3)){
					HX_STACK_LINE(978)
					break;
				}
				HX_STACK_LINE(978)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(978)
				::openfl::_internal::renderer::opengl::utils::GLBucket data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(978)
				++(_g);
				HX_STACK_LINE(979)
				data->reset();
				HX_STACK_LINE(980)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(980)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->push(tmp5);
			}
		}
		HX_STACK_LINE(983)
		glStack->reset();
		HX_STACK_LINE(985)
		{
			HX_STACK_LINE(985)
			int _g1 = glStack->lastIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(985)
			int tmp2 = graphics->__drawPaths->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(985)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(985)
			while((true)){
				HX_STACK_LINE(985)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(985)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(985)
				if ((tmp4)){
					HX_STACK_LINE(985)
					break;
				}
				HX_STACK_LINE(985)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(985)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(986)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = graphics->__drawPaths->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(986)
				::openfl::_internal::renderer::opengl::utils::DrawPath path = tmp6;		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(988)
				{
					HX_STACK_LINE(988)
					::openfl::_internal::renderer::opengl::utils::GraphicType _g2 = path->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(988)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(990)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(990)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp8 = glStack;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(990)
							Dynamic tmp9 = localCoords;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(990)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildComplexPoly(tmp7,tmp8,tmp9);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(988)
							bool tmp7 = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(988)
							bool rounded = tmp7;		HX_STACK_VAR(rounded,"rounded");
							HX_STACK_LINE(991)
							{
								HX_STACK_LINE(992)
								bool tmp8 = rounded;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(992)
								if ((tmp8)){
									HX_STACK_LINE(993)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(993)
									::openfl::_internal::renderer::opengl::utils::GLStack tmp10 = glStack;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(993)
									Dynamic tmp11 = localCoords;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(993)
									::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRoundedRectangle(tmp9,tmp10,tmp11);
								}
								else{
									HX_STACK_LINE(995)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(995)
									::openfl::_internal::renderer::opengl::utils::GLStack tmp10 = glStack;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(995)
									Dynamic tmp11 = localCoords;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(995)
									::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRectangle(tmp9,tmp10,tmp11);
								}
							}
						}
						;break;
						case (int)2: case (int)3: {
							HX_STACK_LINE(998)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(998)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp8 = glStack;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(998)
							Dynamic tmp9 = localCoords;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(998)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildCircle(tmp7,tmp8,tmp9);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1000)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1000)
							::openfl::display::DisplayObject tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1000)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp9 = glStack;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1000)
							Dynamic tmp10 = localCoords;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1000)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildDrawTriangles(tmp7,tmp8,tmp9,tmp10);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1002)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1002)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp8 = glStack;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1002)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp7,tmp8);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(988)
							::openfl::geom::Matrix tmp7 = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(988)
							::openfl::geom::Matrix m = tmp7;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(1004)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix = m;
						}
						;break;
					}
				}
				HX_STACK_LINE(1008)
				(glStack->lastIndex)++;
			}
		}
		HX_STACK_LINE(1011)
		{
			HX_STACK_LINE(1011)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1011)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1011)
			while((true)){
				HX_STACK_LINE(1011)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1011)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1011)
				if ((tmp3)){
					HX_STACK_LINE(1011)
					break;
				}
				HX_STACK_LINE(1011)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1011)
				::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp4;		HX_STACK_VAR(bucket,"bucket");
				HX_STACK_LINE(1011)
				++(_g);
				HX_STACK_LINE(1013)
				bool tmp5 = bucket->uploadTileBuffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1013)
				if ((tmp5)){
					HX_STACK_LINE(1016)
					::openfl::geom::Rectangle tmp6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1016)
					Float tmp7 = tmp6->get_left();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1016)
					int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1017)
					::openfl::geom::Rectangle tmp9 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1017)
					Float tmp10 = tmp9->get_top();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1017)
					int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1018)
					::openfl::geom::Rectangle tmp12 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1018)
					Float tmp13 = tmp12->get_right();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1018)
					int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1019)
					::openfl::geom::Rectangle tmp15 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1019)
					Float tmp16 = tmp15->get_bottom();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1019)
					int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1015)
					bucket->uploadTile(tmp8,tmp11,tmp14,tmp17);
				}
				HX_STACK_LINE(1024)
				bucket->optimize();
			}
		}
		HX_STACK_LINE(1027)
		glStack->upload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,updateGraphics,(void))

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::prepareBucket( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareBucket",0x0dd304b2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1031,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_LINE(1032)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(1033)
	{
		HX_STACK_LINE(1033)
		::openfl::_internal::renderer::opengl::utils::FillType _g = path->fill;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1033)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1033)
				Float tmp = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1033)
				Float a = tmp;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1033)
				int tmp1 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1033)
				int c = tmp1;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1034)
				{
					HX_STACK_LINE(1035)
					int tmp2 = path->fillIndex;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1035)
					::openfl::_internal::renderer::opengl::utils::GLStack tmp3 = glStack;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1035)
					::openfl::_internal::renderer::opengl::utils::GLBucket tmp4 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(tmp2,tmp3,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Fill);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1035)
					bucket = tmp4;
					HX_STACK_LINE(1036)
					bool tmp5 = (c == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1036)
					if ((tmp5)){
						HX_STACK_LINE(1036)
						bucket->color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
					}
					else{
						HX_STACK_LINE(1036)
						int tmp6 = (int(c) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1036)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1036)
						Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1036)
						int tmp9 = (int(c) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1036)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1036)
						Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1036)
						int tmp12 = (int(c) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1036)
						Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1036)
						bucket->color = Array_obj< Float >::__new().Add(tmp8).Add(tmp11).Add(tmp13);
					}
					HX_STACK_LINE(1037)
					Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1037)
					bucket->color[(int)3] = tmp6;
					HX_STACK_LINE(1038)
					bucket->uploadTileBuffer = true;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1033)
				bool tmp = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(3);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1033)
				bool s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1033)
				bool tmp1 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1033)
				bool r = tmp1;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(1033)
				::openfl::geom::Matrix tmp2 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1033)
				::openfl::geom::Matrix m = tmp2;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1033)
				::openfl::display::BitmapData tmp3 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1033)
				::openfl::display::BitmapData b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1040)
				{
					HX_STACK_LINE(1041)
					int tmp4 = path->fillIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1041)
					::openfl::_internal::renderer::opengl::utils::GLStack tmp5 = glStack;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1041)
					::openfl::_internal::renderer::opengl::utils::GLBucket tmp6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(tmp4,tmp5,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1041)
					bucket = tmp6;
					HX_STACK_LINE(1042)
					bucket->bitmap = b;
					HX_STACK_LINE(1043)
					bucket->textureRepeat = r;
					HX_STACK_LINE(1044)
					bucket->textureSmooth = s;
					HX_STACK_LINE(1045)
					::lime::graphics::GLRenderContext tmp7 = glStack->gl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1045)
					::lime::graphics::opengl::GLTexture tmp8 = b->getTexture(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1045)
					bucket->texture = tmp8;
					HX_STACK_LINE(1046)
					bucket->uploadTileBuffer = true;
					HX_STACK_LINE(1049)
					::openfl::geom::Matrix pMatrix;		HX_STACK_VAR(pMatrix,"pMatrix");
					HX_STACK_LINE(1050)
					bool tmp9 = (m == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1050)
					if ((tmp9)){
						HX_STACK_LINE(1051)
						::openfl::geom::Matrix tmp10 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1051)
						pMatrix = tmp10;
					}
					else{
						HX_STACK_LINE(1053)
						::openfl::geom::Matrix tmp10 = ::openfl::geom::Matrix_obj::__new(m->a,m->b,m->c,m->d,m->tx,m->ty);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1053)
						pMatrix = tmp10;
					}
					HX_STACK_LINE(1056)
					pMatrix->invert();
					HX_STACK_LINE(1057)
					Float tmp10 = (Float((int)1) / Float(b->width));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1057)
					Float tmp11 = (Float((int)1) / Float(b->height));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1057)
					pMatrix->scale(tmp10,tmp11);
					HX_STACK_LINE(1058)
					Float tx = pMatrix->tx;		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(1059)
					Float ty = pMatrix->ty;		HX_STACK_VAR(ty,"ty");
					HX_STACK_LINE(1060)
					pMatrix->tx = (int)0;
					HX_STACK_LINE(1061)
					pMatrix->ty = (int)0;
					HX_STACK_LINE(1063)
					bucket->textureTL->x = tx;
					HX_STACK_LINE(1064)
					bucket->textureTL->y = ty;
					HX_STACK_LINE(1065)
					Float tmp12 = (tx + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1065)
					bucket->textureBR->x = tmp12;
					HX_STACK_LINE(1066)
					Float tmp13 = (ty + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1066)
					bucket->textureBR->y = tmp13;
					HX_STACK_LINE(1068)
					bucket->textureMatrix = pMatrix;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1070)
				int tmp = path->fillIndex;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1070)
				::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = glStack;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1070)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(tmp,tmp1,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Line);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1070)
				bucket = tmp2;
				HX_STACK_LINE(1071)
				bucket->uploadTileBuffer = false;
			}
		}
	}
	HX_STACK_LINE(1074)
	{
		HX_STACK_LINE(1074)
		::openfl::_internal::renderer::opengl::utils::GraphicType _g = path->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1074)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(1076)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTriangles;
				HX_STACK_LINE(1077)
				bucket->uploadTileBuffer = false;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1079)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTiles;
				HX_STACK_LINE(1080)
				bucket->uploadTileBuffer = false;
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1084)
	bucket->graphicType = path->type;
	HX_STACK_LINE(1085)
	::openfl::geom::Matrix tmp = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1085)
	bucket->overrideMatrix = tmp;
	HX_STACK_LINE(1087)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp1 = bucket;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1087)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,prepareBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::getBucket( ::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","getBucket",0x4967a481,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.getBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1090,0xd295150c)
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1091)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1091)
	::openfl::_internal::renderer::opengl::utils::GLBucket b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1092)
	bool tmp1 = (b == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1092)
	if ((tmp1)){
		HX_STACK_LINE(1093)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = ::openfl::_internal::renderer::opengl::utils::GLBucket_obj::__new(glStack->gl);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1093)
		b = tmp2;
	}
	HX_STACK_LINE(1095)
	b->mode = mode;
	HX_STACK_LINE(1096)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1096)
	glStack->buckets->push(tmp2);
	HX_STACK_LINE(1097)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1097)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,getBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::switchBucket( int fillIndex,::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","switchBucket",0xb3071d3d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.switchBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1100,0xd295150c)
	HX_STACK_ARG(fillIndex,"fillIndex")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1102)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(1104)
	{
		HX_STACK_LINE(1104)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1104)
		Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1104)
		while((true)){
			HX_STACK_LINE(1104)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1104)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1104)
			if ((tmp1)){
				HX_STACK_LINE(1104)
				break;
			}
			HX_STACK_LINE(1104)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1104)
			::openfl::_internal::renderer::opengl::utils::GLBucket b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(1104)
			++(_g);
			HX_STACK_LINE(1105)
			bool tmp3 = (b->fillIndex == fillIndex);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1105)
			if ((tmp3)){
				HX_STACK_LINE(1106)
				bucket = b;
				HX_STACK_LINE(1107)
				break;
			}
		}
	}
	HX_STACK_LINE(1111)
	bool tmp = (bucket == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1111)
	if ((tmp)){
		HX_STACK_LINE(1112)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = glStack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1112)
		::openfl::_internal::renderer::opengl::utils::BucketMode tmp2 = mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1112)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp3 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::getBucket(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1112)
		bucket = tmp3;
	}
	HX_STACK_LINE(1115)
	bucket->dirty = true;
	HX_STACK_LINE(1116)
	bucket->fillIndex = fillIndex;
	HX_STACK_LINE(1118)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp1 = bucket;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1118)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,switchBucket,return )

::openfl::_internal::renderer::opengl::shaders2::Shader GraphicsRenderer_obj::prepareShader( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::DisplayObject object,::lime::utils::ArrayBufferView translationMatrix){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareShader",0x5c56df6d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareShader","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1121,0xd295150c)
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(translationMatrix,"translationMatrix")
	HX_STACK_LINE(1122)
	::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
	HX_STACK_LINE(1123)
	::openfl::_internal::renderer::opengl::shaders2::Shader shader = null();		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(1125)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1125)
	{
		HX_STACK_LINE(1125)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g = bucket->mode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1125)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1127)
				tmp = renderSession->shaderManager->fillShader;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1129)
				tmp = renderSession->shaderManager->patternFillShader;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1131)
				tmp = renderSession->shaderManager->drawTrianglesShader;
			}
			;break;
			default: {
				HX_STACK_LINE(1133)
				tmp = null();
			}
		}
	}
	HX_STACK_LINE(1125)
	shader = tmp;
	HX_STACK_LINE(1136)
	bool tmp1 = (shader == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1136)
	if ((tmp1)){
		HX_STACK_LINE(1136)
		return null();
	}
	HX_STACK_LINE(1138)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp2 = shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1138)
	bool tmp3 = renderSession->shaderManager->setShader(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1138)
	bool newShader = tmp3;		HX_STACK_VAR(newShader,"newShader");
	HX_STACK_LINE(1141)
	{
		HX_STACK_LINE(1141)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1141)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1141)
		{
			HX_STACK_LINE(1141)
			int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1141)
			Float tmp6 = object->__worldAlpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1141)
			::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(tmp5,tmp6);
		}
	}
	HX_STACK_LINE(1142)
	{
		HX_STACK_LINE(1142)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1142)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1142)
		::lime::utils::ArrayBufferView tmp5 = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1142)
		::lime::utils::ArrayBufferView v = tmp5;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1142)
		{
			HX_STACK_LINE(1142)
			int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1142)
			::haxe::io::Bytes tmp7 = v->buffer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1142)
			::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp6,false,tmp7,(int)3);
		}
	}
	HX_STACK_LINE(1144)
	::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
	HX_STACK_LINE(1145)
	{
		HX_STACK_LINE(1145)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1145)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1145)
		{
			HX_STACK_LINE(1145)
			int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1145)
			Float tmp6 = ct->redMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1145)
			Float tmp7 = ct->greenMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1145)
			Float tmp8 = ct->blueMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1145)
			Float tmp9 = ct->alphaMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1145)
			::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp5,tmp6,tmp7,tmp8,tmp9);
		}
	}
	HX_STACK_LINE(1146)
	{
		HX_STACK_LINE(1146)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1146)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1146)
		{
			HX_STACK_LINE(1146)
			int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1146)
			Float tmp6 = (Float(ct->redOffset) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1146)
			Float tmp7 = (Float(ct->greenOffset) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1146)
			Float tmp8 = (Float(ct->blueOffset) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1146)
			Float tmp9 = (Float(ct->alphaOffset) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1146)
			::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp5,tmp6,tmp7,tmp8,tmp9);
		}
	}
	HX_STACK_LINE(1149)
	{
		HX_STACK_LINE(1149)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g = bucket->mode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1149)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1151)
				{
					HX_STACK_LINE(1151)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1151)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1151)
					{
						HX_STACK_LINE(1151)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1151)
						::haxe::io::Bytes tmp6 = translationMatrix->buffer;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1151)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp5,false,tmp6,(int)3);
					}
				}
				HX_STACK_LINE(1152)
				{
					HX_STACK_LINE(1152)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1152)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1152)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1152)
					{
						HX_STACK_LINE(1152)
						cpp::ArrayBase array = bucket->color;		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(1152)
						::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(1152)
						bool tmp6 = (array != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1152)
						if ((tmp6)){
							HX_STACK_LINE(1152)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1152)
							{
								HX_STACK_LINE(1152)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1152)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1152)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1152)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(1152)
								int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1152)
								_this->byteLength = tmp9;
								HX_STACK_LINE(1152)
								::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1152)
								{
									HX_STACK_LINE(1152)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1152)
									int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1152)
									::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1152)
									this2 = tmp12;
									HX_STACK_LINE(1152)
									tmp10 = this2;
								}
								HX_STACK_LINE(1152)
								_this->buffer = tmp10;
								HX_STACK_LINE(1152)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(1152)
								tmp7 = _this;
							}
							HX_STACK_LINE(1152)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(1152)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
						HX_STACK_LINE(1152)
						tmp5 = this1;
					}
					HX_STACK_LINE(1152)
					::lime::utils::ArrayBufferView v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1152)
					{
						HX_STACK_LINE(1152)
						int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1152)
						::haxe::io::Bytes tmp7 = v->buffer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1152)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(tmp6,tmp7);
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1154)
				{
					HX_STACK_LINE(1154)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1154)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1154)
					{
						HX_STACK_LINE(1154)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1154)
						::haxe::io::Bytes tmp6 = translationMatrix->buffer;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1154)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp5,false,tmp6,(int)3);
					}
				}
				HX_STACK_LINE(1155)
				{
					HX_STACK_LINE(1155)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uPatternTL","\x93","\x2c","\xdd","\x25"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1155)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1155)
					{
						HX_STACK_LINE(1155)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1155)
						Float tmp6 = bucket->textureTL->x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1155)
						Float tmp7 = bucket->textureTL->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1155)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(tmp5,tmp6,tmp7);
					}
				}
				HX_STACK_LINE(1156)
				{
					HX_STACK_LINE(1156)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uPatternBR","\xeb","\x1c","\xdd","\x25"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1156)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1156)
					{
						HX_STACK_LINE(1156)
						int tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1156)
						Float tmp6 = bucket->textureBR->x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1156)
						Float tmp7 = bucket->textureBR->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1156)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(tmp5,tmp6,tmp7);
					}
				}
				HX_STACK_LINE(1157)
				{
					HX_STACK_LINE(1157)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uPatternMatrix","\xfc","\xb6","\xb8","\xb5"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1157)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1157)
					::lime::utils::ArrayBufferView tmp5 = bucket->textureMatrix->toArray(true);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1157)
					::lime::utils::ArrayBufferView v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1157)
					{
						HX_STACK_LINE(1157)
						int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1157)
						::haxe::io::Bytes tmp7 = v->buffer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1157)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp6,false,tmp7,(int)3);
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1159)
				bool tmp4 = (bucket->texture != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1159)
				if ((tmp4)){
					HX_STACK_LINE(1160)
					int tmp5 = shader->getUniformLocation(HX_HCSTRING("uUseTexture","\x29","\xf4","\xeb","\x7d"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1160)
					int location = tmp5;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1160)
					{
						HX_STACK_LINE(1160)
						int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1160)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(tmp6,(int)1);
					}
				}
				else{
					HX_STACK_LINE(1162)
					{
						HX_STACK_LINE(1162)
						int tmp5 = shader->getUniformLocation(HX_HCSTRING("uUseTexture","\x29","\xf4","\xeb","\x7d"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1162)
						int location = tmp5;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1162)
						{
							HX_STACK_LINE(1162)
							int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1162)
							::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(tmp6,(int)0);
						}
					}
					HX_STACK_LINE(1163)
					{
						HX_STACK_LINE(1163)
						int tmp5 = shader->getUniformLocation(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1163)
						int location = tmp5;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1163)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1163)
						{
							HX_STACK_LINE(1163)
							cpp::ArrayBase array = bucket->color;		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(1163)
							::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1163)
							bool tmp7 = (array != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1163)
							if ((tmp7)){
								HX_STACK_LINE(1163)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1163)
								{
									HX_STACK_LINE(1163)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1163)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1163)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1163)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(1163)
									int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1163)
									_this->byteLength = tmp10;
									HX_STACK_LINE(1163)
									::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1163)
									{
										HX_STACK_LINE(1163)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(1163)
										int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1163)
										::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1163)
										this2 = tmp13;
										HX_STACK_LINE(1163)
										tmp11 = this2;
									}
									HX_STACK_LINE(1163)
									_this->buffer = tmp11;
									HX_STACK_LINE(1163)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(1163)
									tmp8 = _this;
								}
								HX_STACK_LINE(1163)
								this1 = tmp8;
							}
							else{
								HX_STACK_LINE(1163)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
							HX_STACK_LINE(1163)
							tmp6 = this1;
						}
						HX_STACK_LINE(1163)
						::lime::utils::ArrayBufferView v = tmp6;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1163)
						{
							HX_STACK_LINE(1163)
							int tmp7 = location;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1163)
							::haxe::io::Bytes tmp8 = v->buffer;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1163)
							::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(tmp7,tmp8);
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1168)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp4 = shader;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1168)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,prepareShader,return )

Void GraphicsRenderer_obj::renderFill( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderFill",0x880196f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderFill","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1171,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1172)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1174)
		bool tmp = (bucket->mode == ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1174)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1174)
		if ((tmp)){
			HX_STACK_LINE(1174)
			tmp1 = (bucket->texture != null());
		}
		else{
			HX_STACK_LINE(1174)
			tmp1 = false;
		}
		HX_STACK_LINE(1174)
		if ((tmp1)){
			HX_STACK_LINE(1175)
			::lime::graphics::GLRenderContext tmp2 = gl;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1175)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp3 = bucket;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1175)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(tmp2,tmp3);
		}
		HX_STACK_LINE(1178)
		{
			HX_STACK_LINE(1178)
			::lime::graphics::opengl::GLBuffer buffer = bucket->tileBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1178)
			{
				HX_STACK_LINE(1178)
				int tmp2 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1178)
				bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1178)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1178)
				if ((tmp3)){
					HX_STACK_LINE(1178)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(1178)
					tmp4 = buffer->id;
				}
				HX_STACK_LINE(1178)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp2,tmp4);
			}
		}
		HX_STACK_LINE(1179)
		{
			HX_STACK_LINE(1179)
			int tmp2 = shader->getAttribLocation(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1179)
			int indx = tmp2;		HX_STACK_VAR(indx,"indx");
			HX_STACK_LINE(1179)
			{
				HX_STACK_LINE(1179)
				int tmp3 = indx;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1179)
				int tmp4 = gl->SHORT;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1179)
				::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(tmp3,(int)4,tmp4,false,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(1180)
		{
			HX_STACK_LINE(1180)
			int tmp2 = gl->TRIANGLE_STRIP;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1180)
			::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(tmp2,(int)0,(int)4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderFill,(void))

Void GraphicsRenderer_obj::renderDrawTriangles( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderDrawTriangles",0x793244f2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1183,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1184)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1186)
		{
			HX_STACK_LINE(1186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1186)
			Array< ::Dynamic > _g1 = bucket->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1186)
			while((true)){
				HX_STACK_LINE(1186)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1186)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1186)
				if ((tmp1)){
					HX_STACK_LINE(1186)
					break;
				}
				HX_STACK_LINE(1186)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1186)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp2;		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1186)
				++(_g);
				HX_STACK_LINE(1187)
				bool tmp3 = fill->available;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1187)
				if ((tmp3)){
					HX_STACK_LINE(1187)
					continue;
				}
				HX_STACK_LINE(1189)
				::lime::graphics::GLRenderContext tmp4 = gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1189)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp5 = bucket;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1189)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(tmp4,tmp5);
				HX_STACK_LINE(1190)
				{
					HX_STACK_LINE(1190)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = fill->vertexArray;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1190)
					{
						HX_STACK_LINE(1190)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1190)
						{
							HX_STACK_LINE(1190)
							int tmp6 = _this->gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1190)
							bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1190)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1190)
							if ((tmp7)){
								HX_STACK_LINE(1190)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(1190)
								tmp8 = buffer->id;
							}
							HX_STACK_LINE(1190)
							::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp6,tmp8);
						}
					}
				}
				HX_STACK_LINE(1191)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp6 = fill->vertexArray;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1191)
				shader->bindVertexArray(tmp6);
				HX_STACK_LINE(1193)
				{
					HX_STACK_LINE(1193)
					int tmp7 = gl->TRIANGLES;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1193)
					int tmp8 = fill->glStart;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1193)
					int tmp9 = fill->glLength;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1193)
					::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(tmp7,tmp8,tmp9);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderDrawTriangles,(void))

Void GraphicsRenderer_obj::bindTexture( ::lime::graphics::GLRenderContext gl,::openfl::_internal::renderer::opengl::utils::GLBucket bucket){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","bindTexture",0x486a4dbf,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.bindTexture","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1197,0xd295150c)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_LINE(1199)
		{
			HX_STACK_LINE(1199)
			::lime::graphics::opengl::GLTexture texture = bucket->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1199)
			{
				HX_STACK_LINE(1199)
				int tmp = gl->TEXTURE_2D;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1199)
				bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1199)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1199)
				if ((tmp1)){
					HX_STACK_LINE(1199)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(1199)
					tmp2 = texture->id;
				}
				HX_STACK_LINE(1199)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp,tmp2);
			}
		}
		HX_STACK_LINE(1202)
		bool tmp = bucket->textureRepeat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1202)
		if ((tmp)){
			HX_STACK_LINE(1203)
			{
				HX_STACK_LINE(1203)
				int tmp1 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1203)
				int tmp2 = gl->TEXTURE_WRAP_S;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1203)
				int tmp3 = gl->REPEAT;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1203)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp1,tmp2,tmp3);
			}
			HX_STACK_LINE(1204)
			{
				HX_STACK_LINE(1204)
				int tmp1 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1204)
				int tmp2 = gl->TEXTURE_WRAP_T;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1204)
				int tmp3 = gl->REPEAT;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1204)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp1,tmp2,tmp3);
			}
		}
		else{
			HX_STACK_LINE(1206)
			{
				HX_STACK_LINE(1206)
				int tmp1 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1206)
				int tmp2 = gl->TEXTURE_WRAP_S;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1206)
				int tmp3 = gl->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1206)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp1,tmp2,tmp3);
			}
			HX_STACK_LINE(1207)
			{
				HX_STACK_LINE(1207)
				int tmp1 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1207)
				int tmp2 = gl->TEXTURE_WRAP_T;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1207)
				int tmp3 = gl->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1207)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp1,tmp2,tmp3);
			}
		}
		HX_STACK_LINE(1210)
		bool tmp1 = bucket->textureSmooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1210)
		if ((tmp1)){
			HX_STACK_LINE(1211)
			{
				HX_STACK_LINE(1211)
				int tmp2 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1211)
				int tmp3 = gl->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1211)
				int tmp4 = gl->LINEAR;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1211)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp2,tmp3,tmp4);
			}
			HX_STACK_LINE(1212)
			{
				HX_STACK_LINE(1212)
				int tmp2 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1212)
				int tmp3 = gl->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1212)
				int tmp4 = gl->LINEAR;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1212)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp2,tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(1214)
			{
				HX_STACK_LINE(1214)
				int tmp2 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1214)
				int tmp3 = gl->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1214)
				int tmp4 = gl->NEAREST;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1214)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp2,tmp3,tmp4);
			}
			HX_STACK_LINE(1215)
			{
				HX_STACK_LINE(1215)
				int tmp2 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1215)
				int tmp3 = gl->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1215)
				int tmp4 = gl->NEAREST;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1215)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp2,tmp3,tmp4);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,bindTexture,(void))

bool GraphicsRenderer_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","isCCW",0xc37e766e,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.isCCW","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1220,0xd295150c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(1221)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1221)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1221)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1221)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1221)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1221)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1221)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1221)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1221)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,isCCW,return )

Array< Float > GraphicsRenderer_obj::hex2rgb( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgb",0x2f5bdf17,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgb","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1224,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1225)
	bool tmp = (hex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1225)
	if ((tmp)){
		HX_STACK_LINE(1225)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1225)
		int tmp1 = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1225)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1225)
		Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1225)
		int tmp4 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1225)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1225)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1225)
		int tmp7 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1225)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1225)
		return Array_obj< Float >::__new().Add(tmp3).Add(tmp6).Add(tmp8);
	}
	HX_STACK_LINE(1225)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgb,return )

Array< Float > GraphicsRenderer_obj::hex2rgba( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgba",0x4107556a,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgba","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1228,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1229)
	bool tmp = (hex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1229)
	if ((tmp)){
		HX_STACK_LINE(1229)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1229)
		int tmp1 = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1229)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1229)
		Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1229)
		int tmp4 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1229)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1229)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1229)
		int tmp7 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1229)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1229)
		int tmp9 = (int(hex) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1229)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1229)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1229)
		return Array_obj< Float >::__new().Add(tmp3).Add(tmp6).Add(tmp8).Add(tmp11);
	}
	HX_STACK_LINE(1229)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgba,return )


GraphicsRenderer_obj::GraphicsRenderer_obj()
{
}

bool GraphicsRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { outValue = curveTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hex2rgb") ) { outValue = hex2rgb_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hex2rgba") ) { outValue = hex2rgba_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buildLine") ) { outValue = buildLine_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buildPoly") ) { outValue = buildPoly_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBucket") ) { outValue = getBucket_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { outValue = bucketPool; return true;  }
		if (HX_FIELD_EQ(inName,"renderFill") ) { outValue = renderFill_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { outValue = lastTexture; return true;  }
		if (HX_FIELD_EQ(inName,"buildCircle") ) { outValue = buildCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { outValue = bindTexture_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { outValue = objectBounds; return true;  }
		if (HX_FIELD_EQ(inName,"switchBucket") ) { outValue = switchBucket_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"prepareBucket") ) { outValue = prepareBucket_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prepareShader") ) { outValue = prepareShader_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { outValue = objectPosition; return true;  }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { outValue = lastBucketMode; return true;  }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { outValue = overrideMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"buildRectangle") ) { outValue = buildRectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buildDrawTiles") ) { outValue = buildDrawTiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderGraphics") ) { outValue = renderGraphics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateGraphics") ) { outValue = updateGraphics_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { outValue = lastVertsBuffer; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { outValue = graphicsDataPool; return true;  }
		if (HX_FIELD_EQ(inName,"buildComplexPoly") ) { outValue = buildComplexPoly_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { outValue = lastTextureRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { outValue = lastTextureSmooth; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildDrawTriangles") ) { outValue = buildDrawTriangles_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawTriangles") ) { outValue = renderDrawTriangles_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { outValue = fillVertexAttributes; return true;  }
		if (HX_FIELD_EQ(inName,"quadraticBezierCurve") ) { outValue = quadraticBezierCurve_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"buildRoundedRectangle") ) { outValue = buildRoundedRectangle_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { outValue = primitiveVertexAttributes; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { outValue = drawTrianglesVertexAttributes; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::fillVertexAttributes,HX_HCSTRING("fillVertexAttributes","\xfe","\x4d","\x43","\xc4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::drawTrianglesVertexAttributes,HX_HCSTRING("drawTrianglesVertexAttributes","\x82","\x0b","\xa2","\x6b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::primitiveVertexAttributes,HX_HCSTRING("primitiveVertexAttributes","\x22","\x90","\xbd","\x30")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::graphicsDataPool,HX_HCSTRING("graphicsDataPool","\x11","\x58","\x10","\xd8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::bucketPool,HX_HCSTRING("bucketPool","\x66","\x0e","\x8e","\xe6")},
	{hx::fsFloat,(void *) &GraphicsRenderer_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &GraphicsRenderer_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(void *) &GraphicsRenderer_obj::objectPosition,HX_HCSTRING("objectPosition","\x88","\x32","\xb7","\xc4")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &GraphicsRenderer_obj::objectBounds,HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(void *) &GraphicsRenderer_obj::lastVertsBuffer,HX_HCSTRING("lastVertsBuffer","\x8c","\x5e","\xcd","\x73")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketMode*/ ,(void *) &GraphicsRenderer_obj::lastBucketMode,HX_HCSTRING("lastBucketMode","\xe3","\xf6","\x18","\x58")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(void *) &GraphicsRenderer_obj::lastTexture,HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53")},
	{hx::fsBool,(void *) &GraphicsRenderer_obj::lastTextureRepeat,HX_HCSTRING("lastTextureRepeat","\x60","\x72","\x33","\xbd")},
	{hx::fsBool,(void *) &GraphicsRenderer_obj::lastTextureSmooth,HX_HCSTRING("lastTextureSmooth","\x33","\xe3","\x21","\xbe")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &GraphicsRenderer_obj::overrideMatrix,HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#endif

hx::Class GraphicsRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fillVertexAttributes","\xfe","\x4d","\x43","\xc4"),
	HX_HCSTRING("drawTrianglesVertexAttributes","\x82","\x0b","\xa2","\x6b"),
	HX_HCSTRING("primitiveVertexAttributes","\x22","\x90","\xbd","\x30"),
	HX_HCSTRING("graphicsDataPool","\x11","\x58","\x10","\xd8"),
	HX_HCSTRING("bucketPool","\x66","\x0e","\x8e","\xe6"),
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("objectPosition","\x88","\x32","\xb7","\xc4"),
	HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40"),
	HX_HCSTRING("lastVertsBuffer","\x8c","\x5e","\xcd","\x73"),
	HX_HCSTRING("lastBucketMode","\xe3","\xf6","\x18","\x58"),
	HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53"),
	HX_HCSTRING("lastTextureRepeat","\x60","\x72","\x33","\xbd"),
	HX_HCSTRING("lastTextureSmooth","\x33","\xe3","\x21","\xbe"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("buildCircle","\xde","\x57","\x7e","\xa6"),
	HX_HCSTRING("buildComplexPoly","\x0e","\x38","\x43","\x78"),
	HX_HCSTRING("buildLine","\x42","\x4e","\xef","\xe7"),
	HX_HCSTRING("buildPoly","\x9a","\xb4","\x98","\xea"),
	HX_HCSTRING("buildRectangle","\x21","\x03","\x13","\x95"),
	HX_HCSTRING("buildRoundedRectangle","\x90","\xb9","\xc2","\x82"),
	HX_HCSTRING("buildDrawTriangles","\xf9","\xd3","\xa5","\xa2"),
	HX_HCSTRING("buildDrawTiles","\xd3","\x61","\xd6","\x53"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("quadraticBezierCurve","\x18","\x78","\x73","\xf8"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderGraphics","\x41","\x66","\x3f","\x86"),
	HX_HCSTRING("updateGraphics","\xf4","\xeb","\x91","\x47"),
	HX_HCSTRING("prepareBucket","\x51","\x49","\xe3","\x94"),
	HX_HCSTRING("getBucket","\xa0","\x6d","\xf3","\x4a"),
	HX_HCSTRING("switchBucket","\x7e","\x91","\xbc","\xea"),
	HX_HCSTRING("prepareShader","\x0c","\x24","\x67","\xe3"),
	HX_HCSTRING("renderFill","\xf9","\xc8","\xc5","\xe0"),
	HX_HCSTRING("renderDrawTriangles","\xd1","\x4a","\xa2","\x33"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("hex2rgb","\x76","\xd2","\x3c","\x80"),
	HX_HCSTRING("hex2rgba","\x2b","\x55","\xfb","\xb4"),
	::String(null()) };

void GraphicsRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer","\x0f","\x64","\xe5","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsRenderer_obj >;
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

void GraphicsRenderer_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",49,0xd295150c)
		{
			HX_STACK_LINE(50)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			return Array_obj< ::Dynamic >::__new().Add(tmp);
		}
		return null();
	}
};
	fillVertexAttributes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",52,0xd295150c)
		{
			HX_STACK_LINE(53)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2);
		}
		return null();
	}
};
	drawTrianglesVertexAttributes= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",57,0xd295150c)
		{
			HX_STACK_LINE(58)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(59)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5126,false,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
		}
		return null();
	}
};
	primitiveVertexAttributes= _Function_0_3::Block();
	graphicsDataPool= Array_obj< ::Dynamic >::__new();
	bucketPool= Array_obj< ::Dynamic >::__new();
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
	objectPosition= ::openfl::geom::Point_obj::__new(null(),null());
	objectBounds= ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
