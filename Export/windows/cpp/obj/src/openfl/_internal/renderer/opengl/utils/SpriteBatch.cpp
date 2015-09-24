#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
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

Void SpriteBatch_obj::__construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","new",0x9b485926,"openfl._internal.renderer.opengl.utils.SpriteBatch.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",27,0x8289eb2d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_maxSprites,"maxSprites")
int maxSprites = __o_maxSprites.Default(2000);
{
	HX_STACK_LINE(63)
	this->lastEnableColor = true;
	HX_STACK_LINE(61)
	this->enableColor = true;
	HX_STACK_LINE(59)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(56)
	this->writtenVertexBytes = (int)0;
	HX_STACK_LINE(45)
	this->drawing = false;
	HX_STACK_LINE(44)
	this->dirty = true;
	HX_STACK_LINE(34)
	this->states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->maxSprites = maxSprites;
	HX_STACK_LINE(69)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	this->attributes->push(tmp);
	HX_STACK_LINE(70)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	this->attributes->push(tmp1);
	HX_STACK_LINE(71)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	this->attributes->push(tmp2);
	HX_STACK_LINE(73)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		cpp::ArrayBase array = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(73)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(73)
		bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		if ((tmp4)){
			HX_STACK_LINE(73)
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			this1 = tmp5;
		}
		else{
			HX_STACK_LINE(73)
			bool tmp5 = (array != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(73)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(73)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(73)
					int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					_this->byteLength = tmp8;
					HX_STACK_LINE(73)
					::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						this2 = tmp11;
						HX_STACK_LINE(73)
						tmp9 = this2;
					}
					HX_STACK_LINE(73)
					_this->buffer = tmp9;
					HX_STACK_LINE(73)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(73)
					tmp6 = _this;
				}
				HX_STACK_LINE(73)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(73)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				if ((tmp6)){
					HX_STACK_LINE(73)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(73)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(73)
						int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(73)
						int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(73)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(73)
						int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						if ((tmp15)){
							HX_STACK_LINE(73)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(73)
							int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(73)
							int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(73)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(73)
							{
								HX_STACK_LINE(73)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(73)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(73)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(73)
								this2 = tmp19;
								HX_STACK_LINE(73)
								tmp17 = this2;
							}
							HX_STACK_LINE(73)
							_this->buffer = tmp17;
							HX_STACK_LINE(73)
							::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(73)
							int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(73)
							int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(73)
							_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
						}
						else{
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(73)
						int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						_this->byteLength = tmp16;
						HX_STACK_LINE(73)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(73)
						_this->length = srcLength;
						HX_STACK_LINE(73)
						tmp7 = _this;
					}
					HX_STACK_LINE(73)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					if ((tmp7)){
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(73)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(73)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(73)
							if ((tmp10)){
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(73)
							int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(73)
							bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(73)
							if ((tmp12)){
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(73)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(73)
							int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(73)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(73)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(73)
							bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(73)
							if ((tmp14)){
								HX_STACK_LINE(73)
								int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(73)
								newByteLength = tmp15;
								HX_STACK_LINE(73)
								int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(73)
								bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(73)
								if ((tmp17)){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(73)
								bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(73)
								if ((tmp18)){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(73)
								int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(73)
								newByteLength = tmp15;
								HX_STACK_LINE(73)
								int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(73)
								int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(73)
								bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(73)
								if ((tmp17)){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(73)
							_this->buffer = null();
							HX_STACK_LINE(73)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(73)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(73)
							Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(73)
							int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(73)
							_this->length = tmp16;
							HX_STACK_LINE(73)
							tmp8 = _this;
						}
						HX_STACK_LINE(73)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(73)
		tmp3 = this1;
	}
	HX_STACK_LINE(73)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp4 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	tmp4->defaultValue = tmp3;
	HX_STACK_LINE(75)
	this->maxElementsPerVertex = (int)0;
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			if ((tmp6)){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(77)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp7;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(77)
			++(_g);
			HX_STACK_LINE(78)
			int tmp8 = a->components;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(78)
				int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				switch( (int)(tmp10)){
					case (int)5120: case (int)5121: {
						HX_STACK_LINE(78)
						tmp9 = (int)1;
					}
					;break;
					case (int)5122: case (int)5123: {
						HX_STACK_LINE(78)
						tmp9 = (int)2;
					}
					;break;
					default: {
						HX_STACK_LINE(78)
						tmp9 = (int)4;
					}
				}
			}
			HX_STACK_LINE(78)
			int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(78)
			Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(78)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(78)
			hx::AddEq(this->maxElementsPerVertex,tmp12);
		}
	}
	HX_STACK_LINE(81)
	int tmp5 = maxSprites;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	int tmp6 = this->maxElementsPerVertex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(81)
	int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(81)
	this->vertexArraySize = tmp9;
	HX_STACK_LINE(82)
	int tmp10 = (maxSprites * (int)6);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(82)
	this->indexArraySize = tmp10;
	HX_STACK_LINE(84)
	int tmp11 = this->vertexArraySize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(84)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp12 = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(this->attributes,tmp11,false);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(84)
	this->vertexArray = tmp12;
	HX_STACK_LINE(85)
	::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp14 = this->vertexArray;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		::haxe::io::Bytes buffer = tmp14->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(85)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(85)
		bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		if ((tmp15)){
			HX_STACK_LINE(85)
			::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			this1 = tmp16;
		}
		else{
			HX_STACK_LINE(85)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			if ((tmp16)){
				HX_STACK_LINE(85)
				::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(85)
				{
					HX_STACK_LINE(85)
					::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(85)
					::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(85)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(85)
					int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(85)
					_this->length = tmp19;
					HX_STACK_LINE(85)
					int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(85)
					_this->byteLength = tmp20;
					HX_STACK_LINE(85)
					::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(85)
						int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(85)
						::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(85)
						this2 = tmp23;
						HX_STACK_LINE(85)
						tmp21 = this2;
					}
					HX_STACK_LINE(85)
					_this->buffer = tmp21;
					HX_STACK_LINE(85)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(85)
					tmp17 = _this;
				}
				HX_STACK_LINE(85)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(85)
				bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(85)
				if ((tmp17)){
					HX_STACK_LINE(85)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(85)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(85)
						::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(85)
						::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(85)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(85)
						int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(85)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(85)
						int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(85)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(85)
						int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(85)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(85)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(85)
						int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(85)
						bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(85)
						if ((tmp26)){
							HX_STACK_LINE(85)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(85)
							int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(85)
							int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(85)
							::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(85)
							{
								HX_STACK_LINE(85)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(85)
								int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(85)
								::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(85)
								this2 = tmp30;
								HX_STACK_LINE(85)
								tmp28 = this2;
							}
							HX_STACK_LINE(85)
							_this->buffer = tmp28;
							HX_STACK_LINE(85)
							::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(85)
							int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(85)
							int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(85)
							_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
						}
						else{
							HX_STACK_LINE(85)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(85)
						int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(85)
						_this->byteLength = tmp27;
						HX_STACK_LINE(85)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(85)
						_this->length = srcLength;
						HX_STACK_LINE(85)
						tmp18 = _this;
					}
					HX_STACK_LINE(85)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(85)
					bool tmp18 = (buffer != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(85)
					if ((tmp18)){
						HX_STACK_LINE(85)
						::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(85)
						{
							HX_STACK_LINE(85)
							::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(85)
							::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(85)
							bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(85)
							if ((tmp21)){
								HX_STACK_LINE(85)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(85)
							int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(85)
							bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(85)
							if ((tmp23)){
								HX_STACK_LINE(85)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(85)
							int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(85)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(85)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(85)
							bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(85)
							if ((tmp24)){
								HX_STACK_LINE(85)
								int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(85)
								newByteLength = tmp25;
								HX_STACK_LINE(85)
								int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(85)
								bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(85)
								if ((tmp27)){
									HX_STACK_LINE(85)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(85)
								bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(85)
								if ((tmp28)){
									HX_STACK_LINE(85)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(85)
								int tmp25 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(85)
								newByteLength = tmp25;
								HX_STACK_LINE(85)
								int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(85)
								int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(85)
								bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(85)
								if ((tmp27)){
									HX_STACK_LINE(85)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(85)
							_this->buffer = buffer;
							HX_STACK_LINE(85)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(85)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(85)
							Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(85)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(85)
							_this->length = tmp26;
							HX_STACK_LINE(85)
							tmp19 = _this;
						}
						HX_STACK_LINE(85)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(85)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(85)
		tmp13 = this1;
	}
	HX_STACK_LINE(85)
	this->positions = tmp13;
	HX_STACK_LINE(86)
	::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(86)
		::haxe::io::Bytes buffer = tmp15->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(86)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(86)
		bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(86)
		if ((tmp16)){
			HX_STACK_LINE(86)
			::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			this1 = tmp17;
		}
		else{
			HX_STACK_LINE(86)
			bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			if ((tmp17)){
				HX_STACK_LINE(86)
				::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(86)
					::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(86)
					int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(86)
					_this->length = tmp20;
					HX_STACK_LINE(86)
					int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(86)
					_this->byteLength = tmp21;
					HX_STACK_LINE(86)
					::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(86)
						int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(86)
						::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(86)
						this2 = tmp24;
						HX_STACK_LINE(86)
						tmp22 = this2;
					}
					HX_STACK_LINE(86)
					_this->buffer = tmp22;
					HX_STACK_LINE(86)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(86)
					tmp18 = _this;
				}
				HX_STACK_LINE(86)
				this1 = tmp18;
			}
			else{
				HX_STACK_LINE(86)
				bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				if ((tmp18)){
					HX_STACK_LINE(86)
					::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(86)
						::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(86)
						::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(86)
						::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(86)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(86)
						int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(86)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(86)
						int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(86)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(86)
						int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(86)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(86)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(86)
						int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(86)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(86)
						if ((tmp27)){
							HX_STACK_LINE(86)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(86)
							int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(86)
							int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(86)
							::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(86)
							{
								HX_STACK_LINE(86)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(86)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(86)
								::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(86)
								this2 = tmp31;
								HX_STACK_LINE(86)
								tmp29 = this2;
							}
							HX_STACK_LINE(86)
							_this->buffer = tmp29;
							HX_STACK_LINE(86)
							::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(86)
							int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(86)
							int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(86)
							_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(86)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(86)
						int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(86)
						_this->byteLength = tmp28;
						HX_STACK_LINE(86)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(86)
						_this->length = srcLength;
						HX_STACK_LINE(86)
						tmp19 = _this;
					}
					HX_STACK_LINE(86)
					this1 = tmp19;
				}
				else{
					HX_STACK_LINE(86)
					bool tmp19 = (buffer != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(86)
					if ((tmp19)){
						HX_STACK_LINE(86)
						::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(86)
							::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(86)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(86)
							if ((tmp22)){
								HX_STACK_LINE(86)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(86)
							int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(86)
							bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(86)
							if ((tmp24)){
								HX_STACK_LINE(86)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(86)
							int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(86)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(86)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(86)
							bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(86)
							if ((tmp25)){
								HX_STACK_LINE(86)
								int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(86)
								newByteLength = tmp26;
								HX_STACK_LINE(86)
								int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(86)
								bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(86)
								if ((tmp28)){
									HX_STACK_LINE(86)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(86)
								bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(86)
								if ((tmp29)){
									HX_STACK_LINE(86)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(86)
								int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(86)
								newByteLength = tmp26;
								HX_STACK_LINE(86)
								int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(86)
								int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(86)
								bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(86)
								if ((tmp28)){
									HX_STACK_LINE(86)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(86)
							_this->buffer = buffer;
							HX_STACK_LINE(86)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(86)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(86)
							Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(86)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(86)
							_this->length = tmp27;
							HX_STACK_LINE(86)
							tmp20 = _this;
						}
						HX_STACK_LINE(86)
						this1 = tmp20;
					}
					else{
						HX_STACK_LINE(86)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
					}
				}
			}
		}
		HX_STACK_LINE(86)
		tmp14 = this1;
	}
	HX_STACK_LINE(86)
	this->colors = tmp14;
	HX_STACK_LINE(88)
	::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int tmp16 = this->indexArraySize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		Dynamic elements = tmp16;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(88)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(88)
		bool tmp17 = (elements != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		if ((tmp17)){
			HX_STACK_LINE(88)
			::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)6);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(88)
			this1 = tmp18;
		}
		else{
			HX_STACK_LINE(88)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(88)
			if ((tmp18)){
				HX_STACK_LINE(88)
				::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(88)
					::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(88)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(88)
					int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(88)
					_this->length = tmp21;
					HX_STACK_LINE(88)
					int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(88)
					_this->byteLength = tmp22;
					HX_STACK_LINE(88)
					::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(88)
						int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(88)
						::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(88)
						this2 = tmp25;
						HX_STACK_LINE(88)
						tmp23 = this2;
					}
					HX_STACK_LINE(88)
					_this->buffer = tmp23;
					HX_STACK_LINE(88)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(88)
					tmp19 = _this;
				}
				HX_STACK_LINE(88)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(88)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(88)
				if ((tmp19)){
					HX_STACK_LINE(88)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(88)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(88)
						::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(88)
						::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(88)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(88)
						int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(88)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(88)
						int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(88)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(88)
						int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(88)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(88)
						int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(88)
						int tmp27 = _this->type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(88)
						bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(88)
						if ((tmp28)){
							HX_STACK_LINE(88)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(88)
							int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(88)
							int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(88)
							::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(88)
							{
								HX_STACK_LINE(88)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(88)
								int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(88)
								::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(88)
								this2 = tmp32;
								HX_STACK_LINE(88)
								tmp30 = this2;
							}
							HX_STACK_LINE(88)
							_this->buffer = tmp30;
							HX_STACK_LINE(88)
							::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(88)
							int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(88)
							int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(88)
							_this->buffer->blit((int)0,tmp31,tmp32,tmp33);
						}
						else{
							HX_STACK_LINE(88)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(88)
						int tmp29 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(88)
						_this->byteLength = tmp29;
						HX_STACK_LINE(88)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(88)
						_this->length = srcLength;
						HX_STACK_LINE(88)
						tmp20 = _this;
					}
					HX_STACK_LINE(88)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(88)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(88)
					if ((tmp20)){
						HX_STACK_LINE(88)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(88)
						{
							HX_STACK_LINE(88)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(88)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(88)
							bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(88)
							if ((tmp23)){
								HX_STACK_LINE(88)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(88)
							int tmp24 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(88)
							bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(88)
							if ((tmp25)){
								HX_STACK_LINE(88)
								HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
							}
							HX_STACK_LINE(88)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(88)
							int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(88)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(88)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(88)
							bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(88)
							if ((tmp27)){
								HX_STACK_LINE(88)
								int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(88)
								newByteLength = tmp28;
								HX_STACK_LINE(88)
								int tmp29 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(88)
								bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(88)
								if ((tmp30)){
									HX_STACK_LINE(88)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(88)
								bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(88)
								if ((tmp31)){
									HX_STACK_LINE(88)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(88)
								int tmp28 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(88)
								newByteLength = tmp28;
								HX_STACK_LINE(88)
								int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(88)
								int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(88)
								bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(88)
								if ((tmp30)){
									HX_STACK_LINE(88)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(88)
							_this->buffer = null();
							HX_STACK_LINE(88)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(88)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(88)
							Float tmp28 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(88)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(88)
							_this->length = tmp29;
							HX_STACK_LINE(88)
							tmp21 = _this;
						}
						HX_STACK_LINE(88)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(88)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
					}
				}
			}
		}
		HX_STACK_LINE(88)
		tmp15 = this1;
	}
	HX_STACK_LINE(88)
	this->indices = tmp15;
	HX_STACK_LINE(90)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(90)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(91)
	while((true)){
		HX_STACK_LINE(91)
		int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		int tmp17 = this->indexArraySize;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(91)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(91)
		if ((tmp19)){
			HX_STACK_LINE(91)
			break;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(92)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(92)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (i * (int)2)),j);
				HX_STACK_LINE(92)
				j;
			}
		}
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(93)
			int tmp21 = (j + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(93)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(93)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)1)) * (int)2)),val);
				HX_STACK_LINE(93)
				val;
			}
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(94)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(94)
			int tmp21 = (j + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(94)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(94)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)2)) * (int)2)),val);
				HX_STACK_LINE(94)
				val;
			}
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(95)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(95)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)3)) * (int)2)),j);
				HX_STACK_LINE(95)
				j;
			}
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(96)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(96)
			int tmp21 = (j + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(96)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(96)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)4)) * (int)2)),val);
				HX_STACK_LINE(96)
				val;
			}
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(97)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(97)
			int tmp21 = (j + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(97)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(97)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)5)) * (int)2)),val);
				HX_STACK_LINE(97)
				val;
			}
		}
		HX_STACK_LINE(98)
		hx::AddEq(i,(int)6);
		HX_STACK_LINE(99)
		hx::AddEq(j,(int)4);
	}
	HX_STACK_LINE(102)
	::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(102)
	this->currentState = tmp16;
	HX_STACK_LINE(103)
	this->dirty = true;
	HX_STACK_LINE(104)
	this->drawing = false;
	HX_STACK_LINE(105)
	this->batchedSprites = (int)0;
	HX_STACK_LINE(107)
	::lime::graphics::GLRenderContext tmp17 = gl;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(107)
	this->setContext(tmp17);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(gl,__o_maxSprites);
	return _result_;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SpriteBatch_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","destroy",0xc9b590c0,"openfl._internal.renderer.opengl.utils.SpriteBatch.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",111,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		tmp->destroy();
		HX_STACK_LINE(113)
		this->vertexArray = null();
		HX_STACK_LINE(115)
		this->indices = null();
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::lime::graphics::opengl::GLBuffer tmp1 = this->indexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(116)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(118)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp1 = this->currentState;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		tmp1->destroy();
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Array< ::Dynamic > _g1 = this->states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				if ((tmp3)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(119)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(120)
				state->destroy();
			}
		}
		HX_STACK_LINE(123)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,destroy,(void))

Void SpriteBatch_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","begin",0x5812b06f,"openfl._internal.renderer.opengl.utils.SpriteBatch.begin","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",126,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(128)
		this->renderSession = renderSession;
		HX_STACK_LINE(129)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		this->shader = tmp;
		HX_STACK_LINE(130)
		this->drawing = true;
		HX_STACK_LINE(131)
		::openfl::geom::Rectangle tmp1 = clipRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		this->start(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,begin,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","finish",0xa3eff74d,"openfl._internal.renderer.opengl.utils.SpriteBatch.finish","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",135,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		this->stop();
		HX_STACK_LINE(137)
		this->clipRect = null();
		HX_STACK_LINE(138)
		this->drawing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

Void SpriteBatch_obj::start( ::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","start",0x2bc83aa8,"openfl._internal.renderer.opengl.utils.SpriteBatch.start","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",141,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(142)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(143)
			HX_STACK_DO_THROW(HX_HCSTRING("Call Spritebatch.begin() before start()","\x33","\x9f","\x89","\x3f"));
		}
		HX_STACK_LINE(145)
		this->dirty = true;
		HX_STACK_LINE(146)
		this->clipRect = clipRect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,start,(void))

Void SpriteBatch_obj::stop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","stop",0x475f147c,"openfl._internal.renderer.opengl.utils.SpriteBatch.stop","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",150,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		this->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,stop,(void))

Void SpriteBatch_obj::renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic __o_alpha,::openfl::display::BlendMode blendMode,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_bgra){
Dynamic alpha = __o_alpha.Default(1);
bool bgra = __o_bgra.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBitmapData",0x214be029,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBitmapData","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",153,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
	HX_STACK_ARG(bgra,"bgra")
{
		HX_STACK_LINE(154)
		bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		if ((tmp)){
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(155)
		::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		::lime::graphics::opengl::GLTexture tmp2 = bitmapData->getTexture(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(157)
		int tmp3 = this->batchedSprites;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		int tmp4 = this->maxSprites;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		if ((tmp5)){
			HX_STACK_LINE(158)
			this->flush();
		}
		HX_STACK_LINE(161)
		::openfl::display::TextureUvs uvs = bitmapData->__uvData;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(162)
		bool tmp6 = (uvs == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		if ((tmp6)){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		Float tmp7 = (alpha * (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		int tmp11 = (int(tmp10) | int((int)16777215));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		int color = tmp11;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			this->enableColor = tmp12;
			HX_STACK_LINE(167)
			bool tmp13 = this->enableColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(167)
			bool tmp14 = this->lastEnableColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(167)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(167)
			if ((tmp15)){
				HX_STACK_LINE(167)
				this->flush();
				HX_STACK_LINE(167)
				bool tmp16 = this->enableColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(167)
				this->lastEnableColor = tmp16;
			}
			HX_STACK_LINE(167)
			bool tmp16 = this->lastEnableColor;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(167)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp17 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(167)
			tmp17->enabled = tmp16;
			HX_STACK_LINE(167)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(167)
					while((true)){
						HX_STACK_LINE(167)
						bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(167)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(167)
						if ((tmp20)){
							HX_STACK_LINE(167)
							break;
						}
						HX_STACK_LINE(167)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp21 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(167)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(167)
						++(_g);
						HX_STACK_LINE(167)
						bool tmp22 = a->enabled;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(167)
						if ((tmp22)){
							HX_STACK_LINE(167)
							int tmp23 = a->components;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(167)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(167)
							{
								HX_STACK_LINE(167)
								int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(167)
								int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(167)
								switch( (int)(tmp25)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(167)
										tmp24 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(167)
										tmp24 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(167)
										tmp24 = (int)4;
									}
								}
							}
							HX_STACK_LINE(167)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(167)
							Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(167)
							int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(167)
							hx::AddEq(r,tmp27);
						}
					}
				}
				HX_STACK_LINE(167)
				tmp18 = r;
			}
			HX_STACK_LINE(167)
			this->elementsPerVertex = tmp18;
		}
		HX_STACK_LINE(169)
		int tmp12 = this->batchedSprites;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(169)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(169)
		int tmp14 = this->elementsPerVertex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(169)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(169)
		int index = tmp15;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(170)
			Float width = bitmapData->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(170)
			Float height = bitmapData->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(170)
			::openfl::display::PixelSnapping pixelSnapping1 = pixelSnapping;		HX_STACK_VAR(pixelSnapping1,"pixelSnapping1");
			HX_STACK_LINE(170)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(170)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(170)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(170)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(170)
			bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(170)
			if ((tmp16)){
				HX_STACK_LINE(170)
				w0 = width;
				HX_STACK_LINE(170)
				w1 = (int)0;
				HX_STACK_LINE(170)
				h0 = height;
				HX_STACK_LINE(170)
				h1 = (int)0;
			}
			else{
				HX_STACK_LINE(170)
				Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(170)
				Float tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(170)
				Float tmp19 = ((int)1 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(170)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(170)
				w0 = tmp20;
				HX_STACK_LINE(170)
				Float tmp21 = width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				Float tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(170)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				w1 = tmp24;
				HX_STACK_LINE(170)
				Float tmp25 = height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				Float tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(170)
				Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				h0 = tmp28;
				HX_STACK_LINE(170)
				Float tmp29 = height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(170)
				Float tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				h1 = tmp32;
			}
			HX_STACK_LINE(170)
			bool tmp17 = (pixelSnapping1 == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(170)
			if ((tmp17)){
				HX_STACK_LINE(170)
				pixelSnapping1 = ::openfl::display::PixelSnapping_obj::NEVER;
			}
			HX_STACK_LINE(170)
			bool tmp18 = (pixelSnapping1 != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(170)
			bool snap = tmp18;		HX_STACK_VAR(snap,"snap");
			HX_STACK_LINE(170)
			Float a = matrix->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(170)
			Float b = matrix->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(170)
			Float c = matrix->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(170)
			Float d = matrix->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(170)
			Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(170)
			Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(170)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(170)
			bool tmp19 = snap;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(170)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			if ((tmp20)){
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(170)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(170)
					Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float val = tmp27;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(170)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp23 = (d * h1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(170)
					Float tmp24 = (b * w1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					Float tmp26 = ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float val = tmp27;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(170)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(170)
					Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float tmp28 = ::Math_obj::fround(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(170)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp23 = (d * h1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(170)
					Float tmp24 = (b * w1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					Float tmp26 = ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float tmp28 = ::Math_obj::fround(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				int idx = tmp22;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->x0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				int idx = tmp22;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->y0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp21 = this->enableColor;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(170)
			if ((tmp21)){
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp22 = this->colors;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp22;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp23 = (index1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(170)
				int idx = tmp23;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp22 = snap;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(170)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(170)
			if ((tmp23)){
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp26 = (a * w0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (c * h1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					Float tmp29 = tx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float val = tmp30;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp26 = (d * h1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (b * w0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					Float tmp29 = ty;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float val = tmp30;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp26 = (a * w0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (c * h1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					Float tmp29 = tx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float tmp31 = ::Math_obj::fround(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					Float val = tmp31;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(170)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp26 = (d * h1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(170)
					Float tmp27 = (b * w0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					Float tmp29 = ty;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float tmp31 = ::Math_obj::fround(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					Float val = tmp31;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				int idx = tmp25;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->x1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				int idx = tmp25;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->y1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp24 = this->enableColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(170)
			if ((tmp24)){
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp25 = this->colors;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp25;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp26 = (index1)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(170)
				int idx = tmp26;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp25 = snap;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(170)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(170)
			if ((tmp26)){
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp29 = (a * w0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (c * h0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					Float tmp32 = tx;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float val = tmp33;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp29 = (d * h0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (b * w0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					Float tmp32 = ty;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float val = tmp33;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp29 = (a * w0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (c * h0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					Float tmp32 = tx;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float tmp34 = ::Math_obj::fround(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					Float val = tmp34;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(170)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp29 = (d * h0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(170)
					Float tmp30 = (b * w0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					Float tmp32 = ty;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float tmp34 = ::Math_obj::fround(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					Float val = tmp34;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				int idx = tmp28;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->x2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				int idx = tmp28;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->y2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp27 = this->enableColor;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(170)
			if ((tmp27)){
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp28 = this->colors;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp28;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp29 = (index1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(170)
				int idx = tmp29;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp28 = snap;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(170)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(170)
			if ((tmp29)){
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp32 = (a * w1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (c * h0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(170)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(170)
					Float val = tmp36;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp32 = (d * h0);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (b * w1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					Float tmp35 = ty;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(170)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(170)
					Float val = tmp36;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp32 = (a * w1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (c * h0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(170)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(170)
					Float tmp37 = ::Math_obj::fround(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(170)
					Float val = tmp37;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(170)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(170)
					Float tmp32 = (d * h0);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					Float tmp33 = (b * w1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					Float tmp35 = ty;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(170)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(170)
					Float tmp37 = ::Math_obj::fround(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(170)
					Float val = tmp37;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(170)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(170)
						val;
					}
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				int idx = tmp31;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->x3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				int idx = tmp31;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				Float val = uvs->y3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			bool tmp30 = this->enableColor;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(170)
			if ((tmp30)){
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView tmp31 = this->colors;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1 = tmp31;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				int tmp32 = (index1)++;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				int idx = tmp32;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(170)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(170)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(170)
					val;
				}
			}
			HX_STACK_LINE(170)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(172)
		int tmp16 = this->batchedSprites;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(172)
		::lime::graphics::opengl::GLTexture tmp17 = texture;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(172)
		bool tmp18 = smoothing;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(172)
		::openfl::display::BlendMode tmp19 = blendMode;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(172)
		::openfl::geom::ColorTransform tmp20 = ct;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(172)
		this->setState(tmp16,tmp17,tmp18,tmp19,tmp20,true);
		HX_STACK_LINE(174)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(SpriteBatch_obj,renderBitmapData,(void))

Void SpriteBatch_obj::renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderTiles",0xf159e915,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderTiles","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",177,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(179)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::lime::graphics::opengl::GLTexture tmp1 = sheet->__bitmap->getTexture(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		::lime::graphics::opengl::GLTexture texture = tmp1;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(180)
		bool tmp2 = (texture == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		if ((tmp2)){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(182)
		int tmp3 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		bool useScale = tmp4;		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(183)
		int tmp5 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		bool useRotation = tmp6;		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(184)
		int tmp7 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		bool useTransform = tmp8;		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(185)
		int tmp9 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(185)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(185)
		bool useRGB = tmp10;		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(186)
		int tmp11 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		bool useAlpha = tmp12;		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(187)
		int tmp13 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(187)
		bool useRect = tmp14;		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(188)
		int tmp15 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(188)
		bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(188)
		bool useOrigin = tmp16;		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(190)
		::openfl::display::BlendMode tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int tmp18 = (int(flags) & int((int)983040));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(190)
			int _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			int tmp19 = _g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(190)
			switch( (int)(tmp19)){
				case (int)65536: {
					HX_STACK_LINE(191)
					tmp17 = ::openfl::display::BlendMode_obj::ADD;
				}
				;break;
				case (int)131072: {
					HX_STACK_LINE(192)
					tmp17 = ::openfl::display::BlendMode_obj::MULTIPLY;
				}
				;break;
				case (int)262144: {
					HX_STACK_LINE(193)
					tmp17 = ::openfl::display::BlendMode_obj::SCREEN;
				}
				;break;
				case (int)524288: {
					HX_STACK_LINE(194)
					tmp17 = ::openfl::display::BlendMode_obj::SUBTRACT;
				}
				;break;
				default: {
					HX_STACK_LINE(195)
					tmp17 = ::openfl::display::BlendMode_obj::NORMAL;
				}
			}
		}
		HX_STACK_LINE(190)
		::openfl::display::BlendMode blendMode = tmp17;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(198)
		bool tmp18 = useTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(198)
		if ((tmp18)){
			HX_STACK_LINE(198)
			useScale = false;
			HX_STACK_LINE(198)
			useRotation = false;
		}
		HX_STACK_LINE(200)
		int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
		HX_STACK_LINE(201)
		int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
		HX_STACK_LINE(202)
		int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
		HX_STACK_LINE(203)
		int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
		HX_STACK_LINE(204)
		int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
		HX_STACK_LINE(206)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(208)
		bool tmp19 = useRect;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(208)
		if ((tmp19)){
			HX_STACK_LINE(208)
			bool tmp20 = useOrigin;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(208)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(208)
			if ((tmp20)){
				HX_STACK_LINE(208)
				tmp21 = (int)8;
			}
			else{
				HX_STACK_LINE(208)
				tmp21 = (int)6;
			}
			HX_STACK_LINE(208)
			numValues = tmp21;
		}
		HX_STACK_LINE(209)
		bool tmp20 = useScale;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(209)
		if ((tmp20)){
			HX_STACK_LINE(209)
			scaleIndex = numValues;
			HX_STACK_LINE(209)
			(numValues)++;
		}
		HX_STACK_LINE(210)
		bool tmp21 = useRotation;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(210)
		if ((tmp21)){
			HX_STACK_LINE(210)
			rotationIndex = numValues;
			HX_STACK_LINE(210)
			(numValues)++;
		}
		HX_STACK_LINE(211)
		bool tmp22 = useTransform;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(211)
		if ((tmp22)){
			HX_STACK_LINE(211)
			transformIndex = numValues;
			HX_STACK_LINE(211)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(212)
		bool tmp23 = useRGB;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(212)
		if ((tmp23)){
			HX_STACK_LINE(212)
			rgbIndex = numValues;
			HX_STACK_LINE(212)
			hx::AddEq(numValues,(int)3);
		}
		HX_STACK_LINE(213)
		bool tmp24 = useAlpha;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(213)
		if ((tmp24)){
			HX_STACK_LINE(213)
			alphaIndex = numValues;
			HX_STACK_LINE(213)
			(numValues)++;
		}
		HX_STACK_LINE(215)
		int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(216)
		bool tmp25 = (count >= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(216)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(216)
		if ((tmp25)){
			HX_STACK_LINE(216)
			tmp26 = (totalCount > count);
		}
		else{
			HX_STACK_LINE(216)
			tmp26 = false;
		}
		HX_STACK_LINE(216)
		if ((tmp26)){
			HX_STACK_LINE(216)
			totalCount = count;
		}
		HX_STACK_LINE(217)
		Float tmp27 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(217)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(217)
		int itemCount = tmp28;		HX_STACK_VAR(itemCount,"itemCount");
		HX_STACK_LINE(218)
		int iIndex = (int)0;		HX_STACK_VAR(iIndex,"iIndex");
		HX_STACK_LINE(220)
		int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(221)
		::openfl::geom::Rectangle rect = sheet->__rectTile;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tileUV = sheet->__rectUV;		HX_STACK_VAR(tileUV,"tileUV");
		HX_STACK_LINE(223)
		::openfl::geom::Point center = sheet->__point;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(224)
		Float x = ((Float)0.0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(224)
		Float y = ((Float)0.0);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(225)
		Float alpha = ((Float)1.0);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(225)
		int tint = (int)16777215;		HX_STACK_VAR(tint,"tint");
		HX_STACK_LINE(225)
		int color = (int)-1;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(226)
		Float scale = ((Float)1.0);		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(226)
		Float rotation = ((Float)0.0);		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(227)
		Float cosTheta = ((Float)1.0);		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(227)
		Float sinTheta = ((Float)0.0);		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(228)
		Float a = ((Float)0.0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(228)
		Float b = ((Float)0.0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(228)
		Float c = ((Float)0.0);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(228)
		Float d = ((Float)0.0);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(228)
		Float tx = ((Float)0.0);		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(228)
		Float ty = ((Float)0.0);		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(229)
		Float ox = ((Float)0.0);		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(229)
		Float oy = ((Float)0.0);		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(230)
		::openfl::geom::Matrix tmp29 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(230)
		::openfl::geom::Matrix matrix = tmp29;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(231)
		::openfl::geom::Matrix oMatrix = object->__worldTransform;		HX_STACK_VAR(oMatrix,"oMatrix");
		HX_STACK_LINE(232)
		::openfl::display::TextureUvs tmp30 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(232)
		::openfl::display::TextureUvs uvs = tmp30;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(234)
		int bIndex = (int)0;		HX_STACK_VAR(bIndex,"bIndex");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			bool tmp31 = true;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(237)
			this->enableColor = tmp31;
			HX_STACK_LINE(237)
			bool tmp32 = this->enableColor;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(237)
			bool tmp33 = this->lastEnableColor;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(237)
			bool tmp34 = (tmp32 != tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(237)
			if ((tmp34)){
				HX_STACK_LINE(237)
				this->flush();
				HX_STACK_LINE(237)
				bool tmp35 = this->enableColor;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(237)
				this->lastEnableColor = tmp35;
			}
			HX_STACK_LINE(237)
			bool tmp35 = this->lastEnableColor;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(237)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp36 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(237)
			tmp36->enabled = tmp35;
			HX_STACK_LINE(237)
			int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(237)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(237)
					while((true)){
						HX_STACK_LINE(237)
						bool tmp38 = (_g < _g1->length);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(237)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(237)
						if ((tmp39)){
							HX_STACK_LINE(237)
							break;
						}
						HX_STACK_LINE(237)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp40 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(237)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a1 = tmp40;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(237)
						++(_g);
						HX_STACK_LINE(237)
						bool tmp41 = a1->enabled;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(237)
						if ((tmp41)){
							HX_STACK_LINE(237)
							int tmp42 = a1->components;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(237)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(237)
							{
								HX_STACK_LINE(237)
								int _g2 = a1->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(237)
								int tmp44 = _g2;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(237)
								switch( (int)(tmp44)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(237)
										tmp43 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(237)
										tmp43 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(237)
										tmp43 = (int)4;
									}
								}
							}
							HX_STACK_LINE(237)
							int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(237)
							Float tmp45 = (Float(tmp44) / Float((int)4));		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(237)
							int tmp46 = ::Math_obj::floor(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(237)
							hx::AddEq(r,tmp46);
						}
					}
				}
				HX_STACK_LINE(237)
				tmp37 = r;
			}
			HX_STACK_LINE(237)
			this->elementsPerVertex = tmp37;
		}
		HX_STACK_LINE(239)
		while((true)){
			HX_STACK_LINE(239)
			bool tmp31 = (iIndex < totalCount);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(239)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(239)
			if ((tmp32)){
				HX_STACK_LINE(239)
				break;
			}
			HX_STACK_LINE(241)
			int tmp33 = this->batchedSprites;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(241)
			int tmp34 = this->maxSprites;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(241)
			bool tmp35 = (tmp33 >= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(241)
			if ((tmp35)){
				HX_STACK_LINE(242)
				this->flush();
			}
			HX_STACK_LINE(245)
			int tmp36 = iIndex;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(245)
			Float tmp37 = tileData->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(245)
			x = tmp37;
			HX_STACK_LINE(246)
			int tmp38 = (iIndex + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(246)
			Float tmp39 = tileData->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(246)
			y = tmp39;
			HX_STACK_LINE(248)
			bool tmp40 = useRect;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(248)
			if ((tmp40)){
				HX_STACK_LINE(249)
				tileID = (int)-1;
				HX_STACK_LINE(251)
				int tmp41 = (iIndex + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(251)
				Float tmp42 = tileData->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(251)
				rect->x = tmp42;
				HX_STACK_LINE(252)
				int tmp43 = (iIndex + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(252)
				Float tmp44 = tileData->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(252)
				rect->y = tmp44;
				HX_STACK_LINE(253)
				int tmp45 = (iIndex + (int)4);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(253)
				Float tmp46 = tileData->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(253)
				rect->width = tmp46;
				HX_STACK_LINE(254)
				int tmp47 = (iIndex + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(254)
				Float tmp48 = tileData->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(254)
				rect->height = tmp48;
				HX_STACK_LINE(256)
				bool tmp49 = useOrigin;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(256)
				if ((tmp49)){
					HX_STACK_LINE(257)
					int tmp50 = (iIndex + (int)6);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(257)
					Float tmp51 = tileData->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(257)
					center->x = tmp51;
					HX_STACK_LINE(258)
					int tmp52 = (iIndex + (int)7);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(258)
					Float tmp53 = tileData->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(258)
					center->y = tmp53;
				}
				else{
					HX_STACK_LINE(260)
					center->x = (int)0;
					HX_STACK_LINE(260)
					center->y = (int)0;
				}
				HX_STACK_LINE(263)
				Float tmp50 = rect->get_left();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(263)
				int tmp51 = sheet->__bitmap->width;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(263)
				Float tmp52 = (Float(tmp50) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(263)
				Float tmp53 = rect->get_top();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(263)
				int tmp54 = sheet->__bitmap->height;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(263)
				Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(263)
				Float tmp56 = rect->get_right();		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(263)
				int tmp57 = sheet->__bitmap->width;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(263)
				Float tmp58 = (Float(tmp56) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(263)
				Float tmp59 = rect->get_bottom();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(263)
				int tmp60 = sheet->__bitmap->height;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(263)
				Float tmp61 = (Float(tmp59) / Float(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(263)
				tileUV->setTo(tmp52,tmp55,tmp58,tmp61);
			}
			else{
				HX_STACK_LINE(265)
				int tmp41 = (iIndex + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(265)
				Float tmp42 = tileData->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(265)
				int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(265)
				tileID = tmp43;
				HX_STACK_LINE(266)
				::openfl::geom::Rectangle tmp44 = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(266)
				rect = tmp44;
				HX_STACK_LINE(267)
				::openfl::geom::Point tmp45 = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(267)
				center = tmp45;
				HX_STACK_LINE(268)
				::openfl::geom::Rectangle tmp46 = sheet->__tileUVs->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(268)
				tileUV = tmp46;
			}
			HX_STACK_LINE(271)
			bool tmp41 = (rect != null());		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(271)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(271)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(271)
			if ((tmp42)){
				HX_STACK_LINE(271)
				tmp43 = (rect->width > (int)0);
			}
			else{
				HX_STACK_LINE(271)
				tmp43 = false;
			}
			HX_STACK_LINE(271)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(271)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(271)
			if ((tmp44)){
				HX_STACK_LINE(271)
				tmp45 = (rect->height > (int)0);
			}
			else{
				HX_STACK_LINE(271)
				tmp45 = false;
			}
			HX_STACK_LINE(271)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(271)
			if ((tmp45)){
				HX_STACK_LINE(271)
				tmp46 = (center != null());
			}
			else{
				HX_STACK_LINE(271)
				tmp46 = false;
			}
			HX_STACK_LINE(271)
			if ((tmp46)){
				HX_STACK_LINE(273)
				alpha = (int)1;
				HX_STACK_LINE(274)
				tint = (int)16777215;
				HX_STACK_LINE(275)
				a = (int)1;
				HX_STACK_LINE(275)
				b = (int)0;
				HX_STACK_LINE(275)
				c = (int)0;
				HX_STACK_LINE(275)
				d = (int)1;
				HX_STACK_LINE(275)
				tx = (int)0;
				HX_STACK_LINE(275)
				ty = (int)0;
				HX_STACK_LINE(276)
				scale = ((Float)1.0);
				HX_STACK_LINE(277)
				rotation = ((Float)0.0);
				HX_STACK_LINE(278)
				cosTheta = ((Float)1.0);
				HX_STACK_LINE(279)
				sinTheta = ((Float)0.0);
				HX_STACK_LINE(280)
				matrix->identity();
				HX_STACK_LINE(282)
				bool tmp47 = useAlpha;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(282)
				if ((tmp47)){
					HX_STACK_LINE(283)
					int tmp48 = (iIndex + alphaIndex);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(283)
					Float tmp49 = tileData->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(283)
					Float tmp50 = object->__worldAlpha;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(283)
					Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(283)
					alpha = tmp51;
				}
				else{
					HX_STACK_LINE(285)
					alpha = object->__worldAlpha;
				}
				HX_STACK_LINE(288)
				bool tmp48 = useRGB;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(288)
				if ((tmp48)){
					HX_STACK_LINE(289)
					int tmp49 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(289)
					Float tmp50 = tileData->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(289)
					Float tmp51 = (tmp50 * (int)255);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(289)
					int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(289)
					int tmp53 = (int(tmp52) << int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(289)
					int tmp54 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(289)
					int tmp55 = (tmp54 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(289)
					Float tmp56 = tileData->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(289)
					Float tmp57 = (tmp56 * (int)255);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(289)
					int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(289)
					int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(289)
					int tmp60 = (int(tmp53) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(289)
					int tmp61 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(289)
					int tmp62 = (tmp61 + (int)2);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(289)
					Float tmp63 = tileData->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(289)
					Float tmp64 = (tmp63 * (int)255);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(289)
					int tmp65 = ::Std_obj::_int(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(289)
					int tmp66 = (int(tmp60) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(289)
					tint = tmp66;
				}
				HX_STACK_LINE(292)
				bool tmp49 = useScale;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(292)
				if ((tmp49)){
					HX_STACK_LINE(293)
					int tmp50 = (iIndex + scaleIndex);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(293)
					Float tmp51 = tileData->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(293)
					scale = tmp51;
				}
				HX_STACK_LINE(296)
				bool tmp50 = useRotation;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(296)
				if ((tmp50)){
					HX_STACK_LINE(297)
					int tmp51 = (iIndex + rotationIndex);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(297)
					Float tmp52 = tileData->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(297)
					rotation = tmp52;
					HX_STACK_LINE(298)
					Float tmp53 = rotation;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(298)
					Float tmp54 = ::Math_obj::cos(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(298)
					cosTheta = tmp54;
					HX_STACK_LINE(299)
					Float tmp55 = rotation;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(299)
					Float tmp56 = ::Math_obj::sin(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(299)
					sinTheta = tmp56;
				}
				HX_STACK_LINE(302)
				bool tmp51 = useTransform;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(302)
				if ((tmp51)){
					HX_STACK_LINE(303)
					int tmp52 = (iIndex + transformIndex);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(303)
					int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(303)
					Float tmp54 = tileData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(303)
					a = tmp54;
					HX_STACK_LINE(304)
					int tmp55 = (iIndex + transformIndex);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(304)
					int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(304)
					Float tmp57 = tileData->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(304)
					b = tmp57;
					HX_STACK_LINE(305)
					int tmp58 = (iIndex + transformIndex);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(305)
					int tmp59 = (tmp58 + (int)2);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(305)
					Float tmp60 = tileData->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(305)
					c = tmp60;
					HX_STACK_LINE(306)
					int tmp61 = (iIndex + transformIndex);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(306)
					int tmp62 = (tmp61 + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(306)
					Float tmp63 = tileData->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(306)
					d = tmp63;
				}
				else{
					HX_STACK_LINE(308)
					Float tmp52 = (scale * cosTheta);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(308)
					a = tmp52;
					HX_STACK_LINE(309)
					Float tmp53 = (scale * sinTheta);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(309)
					b = tmp53;
					HX_STACK_LINE(310)
					Float tmp54 = b;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(310)
					Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(310)
					c = tmp55;
					HX_STACK_LINE(311)
					d = a;
				}
				HX_STACK_LINE(314)
				Float tmp52 = (center->x * a);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(314)
				Float tmp53 = (center->y * c);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(314)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(314)
				ox = tmp54;
				HX_STACK_LINE(315)
				Float tmp55 = (center->x * b);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(315)
				Float tmp56 = (center->y * d);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(315)
				Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(315)
				oy = tmp57;
				HX_STACK_LINE(317)
				Float tmp58 = (x - ox);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(317)
				tx = tmp58;
				HX_STACK_LINE(318)
				Float tmp59 = (y - oy);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(318)
				ty = tmp59;
				HX_STACK_LINE(320)
				Float tmp60 = (a * oMatrix->a);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(320)
				Float tmp61 = (b * oMatrix->c);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(320)
				Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(320)
				matrix->a = tmp62;
				HX_STACK_LINE(321)
				Float tmp63 = (a * oMatrix->b);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(321)
				Float tmp64 = (b * oMatrix->d);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(321)
				Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(321)
				matrix->b = tmp65;
				HX_STACK_LINE(322)
				Float tmp66 = (c * oMatrix->a);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(322)
				Float tmp67 = (d * oMatrix->c);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(322)
				Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(322)
				matrix->c = tmp68;
				HX_STACK_LINE(323)
				Float tmp69 = (c * oMatrix->b);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(323)
				Float tmp70 = (d * oMatrix->d);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(323)
				Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(323)
				matrix->d = tmp71;
				HX_STACK_LINE(324)
				Float tmp72 = (tx * oMatrix->a);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(324)
				Float tmp73 = (ty * oMatrix->c);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(324)
				Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(324)
				Float tmp75 = oMatrix->tx;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(324)
				Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(324)
				matrix->tx = tmp76;
				HX_STACK_LINE(325)
				Float tmp77 = (tx * oMatrix->b);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(325)
				Float tmp78 = (ty * oMatrix->d);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(325)
				Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(325)
				Float tmp80 = oMatrix->ty;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(325)
				Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(325)
				matrix->ty = tmp81;
				HX_STACK_LINE(327)
				uvs->x0 = tileUV->x;
				HX_STACK_LINE(327)
				uvs->y0 = tileUV->y;
				HX_STACK_LINE(328)
				uvs->x1 = tileUV->width;
				HX_STACK_LINE(328)
				uvs->y1 = tileUV->y;
				HX_STACK_LINE(329)
				uvs->x2 = tileUV->width;
				HX_STACK_LINE(329)
				uvs->y2 = tileUV->height;
				HX_STACK_LINE(330)
				uvs->x3 = tileUV->x;
				HX_STACK_LINE(330)
				uvs->y3 = tileUV->height;
				HX_STACK_LINE(332)
				int tmp82 = this->batchedSprites;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(332)
				int tmp83 = (tmp82 * (int)4);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(332)
				int tmp84 = this->elementsPerVertex;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(332)
				int tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(332)
				bIndex = tmp85;
				HX_STACK_LINE(334)
				Float tmp86 = (alpha * (int)255);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(334)
				int tmp87 = ::Std_obj::_int(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(334)
				int tmp88 = (int(tmp87) & int((int)255));		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(334)
				int tmp89 = (int(tmp88) << int((int)24));		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(334)
				int tmp90 = (int(tint) & int((int)255));		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(334)
				int tmp91 = (int(tmp90) << int((int)16));		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(334)
				int tmp92 = (int(tmp89) | int(tmp91));		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(334)
				int tmp93 = (int(tint) >> int((int)8));		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(334)
				int tmp94 = (int(tmp93) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(334)
				int tmp95 = (int(tmp94) << int((int)8));		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(334)
				int tmp96 = (int(tmp92) | int(tmp95));		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(334)
				int tmp97 = (int(tint) >> int((int)16));		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(334)
				int tmp98 = (int(tmp97) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(334)
				int tmp99 = (int(tmp96) | int(tmp98));		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(334)
				color = tmp99;
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					int index = bIndex;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(336)
					Float width = rect->width;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(336)
					Float height = rect->height;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(336)
					::openfl::display::PixelSnapping pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;		HX_STACK_VAR(pixelSnapping,"pixelSnapping");
					HX_STACK_LINE(336)
					Float w0;		HX_STACK_VAR(w0,"w0");
					HX_STACK_LINE(336)
					Float w1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(336)
					Float h0;		HX_STACK_VAR(h0,"h0");
					HX_STACK_LINE(336)
					Float h1;		HX_STACK_VAR(h1,"h1");
					HX_STACK_LINE(336)
					bool tmp100 = true;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(336)
					if ((tmp100)){
						HX_STACK_LINE(336)
						w0 = width;
						HX_STACK_LINE(336)
						w1 = (int)0;
						HX_STACK_LINE(336)
						h0 = height;
						HX_STACK_LINE(336)
						h1 = (int)0;
					}
					else{
						HX_STACK_LINE(336)
						Float tmp101 = width;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(336)
						Float tmp102 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(336)
						Float tmp103 = ((int)1 - tmp102);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(336)
						Float tmp104 = (tmp101 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(336)
						w0 = tmp104;
						HX_STACK_LINE(336)
						Float tmp105 = width;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(336)
						Float tmp106 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						Float tmp107 = -(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(336)
						Float tmp108 = (tmp105 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(336)
						w1 = tmp108;
						HX_STACK_LINE(336)
						Float tmp109 = height;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						Float tmp110 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(336)
						Float tmp111 = ((int)1 - tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(336)
						Float tmp112 = (tmp109 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						h0 = tmp112;
						HX_STACK_LINE(336)
						Float tmp113 = height;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(336)
						Float tmp114 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						Float tmp115 = -(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						Float tmp116 = (tmp113 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						h1 = tmp116;
					}
					HX_STACK_LINE(336)
					bool tmp101 = (pixelSnapping == null());		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(336)
					if ((tmp101)){
						HX_STACK_LINE(336)
						pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
					}
					HX_STACK_LINE(336)
					bool tmp102 = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(336)
					bool snap = tmp102;		HX_STACK_VAR(snap,"snap");
					HX_STACK_LINE(336)
					Float a1 = matrix->a;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(336)
					Float b1 = matrix->b;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(336)
					Float c1 = matrix->c;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(336)
					Float d1 = matrix->d;		HX_STACK_VAR(d1,"d1");
					HX_STACK_LINE(336)
					Float tx1 = matrix->tx;		HX_STACK_VAR(tx1,"tx1");
					HX_STACK_LINE(336)
					Float ty1 = matrix->ty;		HX_STACK_VAR(ty1,"ty1");
					HX_STACK_LINE(336)
					int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
					HX_STACK_LINE(336)
					bool tmp103 = snap;		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(336)
					bool tmp104 = !(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(336)
					if ((tmp104)){
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp105;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(336)
							int idx = tmp106;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp107 = (a1 * w1);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(336)
							Float tmp108 = (c1 * h1);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							Float tmp110 = tx1;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float val = tmp111;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp105;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(336)
							int idx = tmp106;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp107 = (d1 * h1);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(336)
							Float tmp108 = (b1 * w1);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							Float tmp110 = ty1;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float val = tmp111;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					else{
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp105;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(336)
							int idx = tmp106;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp107 = (a1 * w1);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(336)
							Float tmp108 = (c1 * h1);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							Float tmp110 = tx1;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float tmp112 = ::Math_obj::fround(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							Float val = tmp112;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp105;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(336)
							int idx = tmp106;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp107 = (d1 * h1);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(336)
							Float tmp108 = (b1 * w1);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							Float tmp110 = ty1;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float tmp112 = ::Math_obj::fround(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							Float val = tmp112;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp105;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						int idx = tmp106;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->x0;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp105;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						int idx = tmp106;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->y0;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp105 = this->enableColor;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(336)
					if ((tmp105)){
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp106 = this->colors;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp106;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp107 = (index)++;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(336)
						int idx = tmp107;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						int val = color;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp106 = snap;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(336)
					bool tmp107 = !(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(336)
					if ((tmp107)){
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp108;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							int idx = tmp109;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp110 = (a1 * w0);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (c1 * h1);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							Float tmp113 = tx1;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float val = tmp114;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp108;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							int idx = tmp109;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp110 = (d1 * h1);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (b1 * w0);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							Float tmp113 = ty1;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float val = tmp114;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					else{
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp108;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							int idx = tmp109;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp110 = (a1 * w0);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (c1 * h1);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							Float tmp113 = tx1;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float tmp115 = ::Math_obj::fround(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							Float val = tmp115;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp108;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(336)
							int idx = tmp109;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp110 = (d1 * h1);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(336)
							Float tmp111 = (b1 * w0);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							Float tmp113 = ty1;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float tmp115 = ::Math_obj::fround(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							Float val = tmp115;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp108;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						int idx = tmp109;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->x1;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp108;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						int idx = tmp109;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->y1;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp108 = this->enableColor;		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(336)
					if ((tmp108)){
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp109 = this->colors;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp109;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp110 = (index)++;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(336)
						int idx = tmp110;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						int val = color;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp109 = snap;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(336)
					bool tmp110 = !(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(336)
					if ((tmp110)){
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp111 = this->positions;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp111;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp112 = (index)++;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							int idx = tmp112;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp113 = (a1 * w0);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (c1 * h0);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							Float tmp116 = tx1;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float val = tmp117;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp111 = this->positions;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp111;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp112 = (index)++;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							int idx = tmp112;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp113 = (d1 * h0);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (b1 * w0);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							Float tmp116 = ty1;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float val = tmp117;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					else{
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp111 = this->positions;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp111;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp112 = (index)++;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							int idx = tmp112;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp113 = (a1 * w0);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (c1 * h0);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							Float tmp116 = tx1;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float tmp118 = ::Math_obj::fround(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(336)
							Float val = tmp118;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp111 = this->positions;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp111;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp112 = (index)++;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(336)
							int idx = tmp112;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp113 = (d1 * h0);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(336)
							Float tmp114 = (b1 * w0);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							Float tmp116 = ty1;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float tmp118 = ::Math_obj::fround(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(336)
							Float val = tmp118;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp111 = this->positions;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp111;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp112 = (index)++;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						int idx = tmp112;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->x2;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp111 = this->positions;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp111;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp112 = (index)++;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						int idx = tmp112;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->y2;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp111 = this->enableColor;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(336)
					if ((tmp111)){
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp112 = this->colors;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp112;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp113 = (index)++;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(336)
						int idx = tmp113;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						int val = color;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp112 = snap;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(336)
					bool tmp113 = !(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(336)
					if ((tmp113)){
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp114;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							int idx = tmp115;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp116 = (a1 * w1);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (c1 * h0);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(336)
							Float tmp119 = tx1;		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(336)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(336)
							Float val = tmp120;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp114;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							int idx = tmp115;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp116 = (d1 * h0);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (b1 * w1);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(336)
							Float tmp119 = ty1;		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(336)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(336)
							Float val = tmp120;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					else{
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp114;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							int idx = tmp115;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp116 = (a1 * w1);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (c1 * h0);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(336)
							Float tmp119 = tx1;		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(336)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(336)
							Float tmp121 = ::Math_obj::fround(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(336)
							Float val = tmp121;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp114;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(336)
							int idx = tmp115;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(336)
							Float tmp116 = (d1 * h0);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(336)
							Float tmp117 = (b1 * w1);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(336)
							Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(336)
							Float tmp119 = ty1;		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(336)
							Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(336)
							Float tmp121 = ::Math_obj::fround(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(336)
							Float val = tmp121;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(336)
								::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
								HX_STACK_LINE(336)
								val;
							}
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp114;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						int idx = tmp115;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->x3;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp114;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						int idx = tmp115;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						Float val = uvs->y3;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					bool tmp114 = this->enableColor;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(336)
					if ((tmp114)){
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView tmp115 = this->colors;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						::lime::utils::ArrayBufferView this1 = tmp115;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(336)
						int tmp116 = (index)++;		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						int idx = tmp116;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(336)
						int val = color;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(336)
							::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
							HX_STACK_LINE(336)
							val;
						}
					}
					HX_STACK_LINE(336)
					this->writtenVertexBytes = index;
				}
				HX_STACK_LINE(338)
				int tmp100 = this->batchedSprites;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(338)
				::lime::graphics::opengl::GLTexture tmp101 = texture;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(338)
				bool tmp102 = smooth;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(338)
				::openfl::display::BlendMode tmp103 = blendMode;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(338)
				::openfl::geom::ColorTransform tmp104 = object->__worldColorTransform;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(338)
				this->setState(tmp100,tmp101,tmp102,tmp103,tmp104,false);
				HX_STACK_LINE(340)
				(this->batchedSprites)++;
			}
			HX_STACK_LINE(343)
			hx::AddEq(iIndex,numValues);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,renderTiles,(void))

Void SpriteBatch_obj::renderCachedGraphics( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderCachedGraphics",0x0e6ae93d,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderCachedGraphics","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",348,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(349)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp = object->__graphics->__cachedTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		::openfl::_internal::renderer::opengl::utils::FilterTexture cachedTexture = tmp;		HX_STACK_VAR(cachedTexture,"cachedTexture");
		HX_STACK_LINE(351)
		bool tmp1 = (cachedTexture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		if ((tmp1)){
			HX_STACK_LINE(351)
			return null();
		}
		HX_STACK_LINE(353)
		int tmp2 = this->batchedSprites;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		int tmp3 = this->maxSprites;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		if ((tmp4)){
			HX_STACK_LINE(354)
			this->flush();
		}
		HX_STACK_LINE(357)
		Float alpha = object->__worldAlpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(358)
		Float tmp5 = (alpha * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(358)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(358)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(358)
		int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(358)
		int tmp9 = (int(tmp8) | int((int)16777215));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		int color = tmp9;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(361)
		::openfl::display::TextureUvs tmp10 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(361)
		::openfl::display::TextureUvs uvs = tmp10;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(362)
		uvs->x0 = (int)0;
		HX_STACK_LINE(362)
		uvs->y0 = (int)1;
		HX_STACK_LINE(363)
		uvs->x1 = (int)1;
		HX_STACK_LINE(363)
		uvs->y1 = (int)1;
		HX_STACK_LINE(364)
		uvs->x2 = (int)1;
		HX_STACK_LINE(364)
		uvs->y2 = (int)0;
		HX_STACK_LINE(365)
		uvs->x3 = (int)0;
		HX_STACK_LINE(365)
		uvs->y3 = (int)0;
		HX_STACK_LINE(367)
		::openfl::geom::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			::openfl::geom::Matrix _this = object->__worldTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(367)
			tmp11 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(367)
		::openfl::geom::Matrix worldTransform = tmp11;		HX_STACK_VAR(worldTransform,"worldTransform");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			::openfl::geom::Rectangle tmp12 = object->__graphics->__bounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			::openfl::geom::Rectangle tmp14 = object->__graphics->__bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(368)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(368)
			::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(368)
			::openfl::geom::Point pos = tmp16;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(368)
			Float tmp17 = (pos->x * worldTransform->a);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(368)
			Float tmp18 = (pos->y * worldTransform->c);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(368)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(368)
			Float tmp20 = worldTransform->tx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(368)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(368)
			worldTransform->tx = tmp21;
			HX_STACK_LINE(368)
			Float tmp22 = (pos->x * worldTransform->b);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(368)
			Float tmp23 = (pos->y * worldTransform->d);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(368)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(368)
			Float tmp25 = worldTransform->ty;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(368)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(368)
			worldTransform->ty = tmp26;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			bool tmp12 = (color != (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(370)
			this->enableColor = tmp12;
			HX_STACK_LINE(370)
			bool tmp13 = this->enableColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(370)
			bool tmp14 = this->lastEnableColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(370)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(370)
			if ((tmp15)){
				HX_STACK_LINE(370)
				this->flush();
				HX_STACK_LINE(370)
				bool tmp16 = this->enableColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(370)
				this->lastEnableColor = tmp16;
			}
			HX_STACK_LINE(370)
			bool tmp16 = this->lastEnableColor;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(370)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp17 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(370)
			tmp17->enabled = tmp16;
			HX_STACK_LINE(370)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(370)
			{
				HX_STACK_LINE(370)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(370)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(370)
					while((true)){
						HX_STACK_LINE(370)
						bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(370)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(370)
						if ((tmp20)){
							HX_STACK_LINE(370)
							break;
						}
						HX_STACK_LINE(370)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp21 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(370)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(370)
						++(_g);
						HX_STACK_LINE(370)
						bool tmp22 = a->enabled;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(370)
						if ((tmp22)){
							HX_STACK_LINE(370)
							int tmp23 = a->components;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(370)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(370)
							{
								HX_STACK_LINE(370)
								int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(370)
								int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(370)
								switch( (int)(tmp25)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(370)
										tmp24 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(370)
										tmp24 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(370)
										tmp24 = (int)4;
									}
								}
							}
							HX_STACK_LINE(370)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(370)
							Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(370)
							int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(370)
							hx::AddEq(r,tmp27);
						}
					}
				}
				HX_STACK_LINE(370)
				tmp18 = r;
			}
			HX_STACK_LINE(370)
			this->elementsPerVertex = tmp18;
		}
		HX_STACK_LINE(372)
		int tmp12 = this->batchedSprites;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(372)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(372)
		int tmp14 = this->elementsPerVertex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(372)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(372)
		int index = tmp15;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(373)
			Float width = cachedTexture->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(373)
			Float height = cachedTexture->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(373)
			::openfl::display::PixelSnapping pixelSnapping = null();		HX_STACK_VAR(pixelSnapping,"pixelSnapping");
			HX_STACK_LINE(373)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(373)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(373)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(373)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(373)
			bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(373)
			if ((tmp16)){
				HX_STACK_LINE(373)
				w0 = width;
				HX_STACK_LINE(373)
				w1 = (int)0;
				HX_STACK_LINE(373)
				h0 = height;
				HX_STACK_LINE(373)
				h1 = (int)0;
			}
			else{
				HX_STACK_LINE(373)
				Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(373)
				Float tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(373)
				Float tmp19 = ((int)1 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(373)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(373)
				w0 = tmp20;
				HX_STACK_LINE(373)
				Float tmp21 = width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				Float tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(373)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				w1 = tmp24;
				HX_STACK_LINE(373)
				Float tmp25 = height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				Float tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				h0 = tmp28;
				HX_STACK_LINE(373)
				Float tmp29 = height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(373)
				Float tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				h1 = tmp32;
			}
			HX_STACK_LINE(373)
			bool tmp17 = (pixelSnapping == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(373)
			if ((tmp17)){
				HX_STACK_LINE(373)
				pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
			}
			HX_STACK_LINE(373)
			bool tmp18 = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(373)
			bool snap = tmp18;		HX_STACK_VAR(snap,"snap");
			HX_STACK_LINE(373)
			Float a = worldTransform->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(373)
			Float b = worldTransform->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(373)
			Float c = worldTransform->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(373)
			Float d = worldTransform->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(373)
			Float tx = worldTransform->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(373)
			Float ty = worldTransform->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(373)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(373)
			bool tmp19 = snap;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(373)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(373)
			if ((tmp20)){
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(373)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(373)
					Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float val = tmp27;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(373)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp23 = (d * h1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(373)
					Float tmp24 = (b * w1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					Float tmp26 = ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float val = tmp27;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(373)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(373)
					Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float tmp28 = ::Math_obj::fround(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(373)
					int idx = tmp22;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp23 = (d * h1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(373)
					Float tmp24 = (b * w1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					Float tmp26 = ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float tmp28 = ::Math_obj::fround(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				int idx = tmp22;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->x0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				int idx = tmp22;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->y0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp21 = this->enableColor;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(373)
			if ((tmp21)){
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp22 = this->colors;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp22;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp23 = (index1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(373)
				int idx = tmp23;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp22 = snap;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(373)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(373)
			if ((tmp23)){
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp26 = (a * w0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (c * h1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					Float tmp29 = tx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float val = tmp30;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp26 = (d * h1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (b * w0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					Float tmp29 = ty;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float val = tmp30;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp26 = (a * w0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (c * h1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					Float tmp29 = tx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float tmp31 = ::Math_obj::fround(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					Float val = tmp31;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					int idx = tmp25;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp26 = (d * h1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					Float tmp27 = (b * w0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					Float tmp29 = ty;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float tmp31 = ::Math_obj::fround(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					Float val = tmp31;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				int idx = tmp25;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->x1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				int idx = tmp25;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->y1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp24 = this->enableColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(373)
			if ((tmp24)){
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp25 = this->colors;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp25;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp26 = (index1)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				int idx = tmp26;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp25 = snap;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(373)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(373)
			if ((tmp26)){
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp29 = (a * w0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (c * h0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					Float tmp32 = tx;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float val = tmp33;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp29 = (d * h0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (b * w0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					Float tmp32 = ty;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float val = tmp33;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp29 = (a * w0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (c * h0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					Float tmp32 = tx;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float tmp34 = ::Math_obj::fround(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(373)
					Float val = tmp34;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					int idx = tmp28;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp29 = (d * h0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					Float tmp30 = (b * w0);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					Float tmp32 = ty;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float tmp34 = ::Math_obj::fround(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(373)
					Float val = tmp34;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				int idx = tmp28;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->x2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp27 = this->positions;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp28 = (index1)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				int idx = tmp28;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->y2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp27 = this->enableColor;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(373)
			if ((tmp27)){
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp28 = this->colors;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp28;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp29 = (index1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(373)
				int idx = tmp29;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp28 = snap;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(373)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(373)
			if ((tmp29)){
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp32 = (a * w1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (c * h0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(373)
					Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(373)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(373)
					Float val = tmp36;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp32 = (d * h0);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (b * w1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(373)
					Float tmp35 = ty;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(373)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(373)
					Float val = tmp36;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp32 = (a * w1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (c * h0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(373)
					Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(373)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(373)
					Float tmp37 = ::Math_obj::fround(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(373)
					Float val = tmp37;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					int idx = tmp31;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(373)
					Float tmp32 = (d * h0);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					Float tmp33 = (b * w1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(373)
					Float tmp35 = ty;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(373)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(373)
					Float tmp37 = ::Math_obj::fround(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(373)
					Float val = tmp37;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				int idx = tmp31;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->x3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				int idx = tmp31;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				Float val = uvs->y3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			bool tmp30 = this->enableColor;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(373)
			if ((tmp30)){
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView tmp31 = this->colors;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				::lime::utils::ArrayBufferView this1 = tmp31;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(373)
				int tmp32 = (index1)++;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				int idx = tmp32;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(373)
				int val = color;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(373)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(373)
					val;
				}
			}
			HX_STACK_LINE(373)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(375)
		int tmp16 = this->batchedSprites;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(375)
		::lime::graphics::opengl::GLTexture tmp17 = cachedTexture->texture;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(375)
		::openfl::display::BlendMode tmp18 = object->blendMode;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(375)
		::openfl::geom::ColorTransform tmp19 = object->__worldColorTransform;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(375)
		this->setState(tmp16,tmp17,null(),tmp18,tmp19,null());
		HX_STACK_LINE(377)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,renderCachedGraphics,(void))

Void SpriteBatch_obj::fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,::openfl::geom::Point pivot,Dynamic __o_color,::openfl::display::PixelSnapping pixelSnapping){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","fillVertices",0x1e5d3416,"openfl._internal.renderer.opengl.utils.SpriteBatch.fillVertices","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",381,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(uvs,"uvs")
	HX_STACK_ARG(pivot,"pivot")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
{
		HX_STACK_LINE(383)
		Float w0;		HX_STACK_VAR(w0,"w0");
		HX_STACK_LINE(383)
		Float w1;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(383)
		Float h0;		HX_STACK_VAR(h0,"h0");
		HX_STACK_LINE(383)
		Float h1;		HX_STACK_VAR(h1,"h1");
		HX_STACK_LINE(386)
		bool tmp = (pivot == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		if ((tmp)){
			HX_STACK_LINE(387)
			w0 = width;
			HX_STACK_LINE(387)
			w1 = (int)0;
			HX_STACK_LINE(388)
			h0 = height;
			HX_STACK_LINE(388)
			h1 = (int)0;
		}
		else{
			HX_STACK_LINE(390)
			Float tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			Float tmp2 = ((int)1 - pivot->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			w0 = tmp3;
			HX_STACK_LINE(391)
			Float tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			Float tmp5 = pivot->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(391)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(391)
			w1 = tmp7;
			HX_STACK_LINE(392)
			Float tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			Float tmp9 = ((int)1 - pivot->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			h0 = tmp10;
			HX_STACK_LINE(393)
			Float tmp11 = height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(393)
			Float tmp12 = pivot->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			h1 = tmp14;
		}
		HX_STACK_LINE(396)
		bool tmp1 = (pixelSnapping == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		if ((tmp1)){
			HX_STACK_LINE(397)
			pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
		}
		HX_STACK_LINE(400)
		bool tmp2 = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		bool snap = tmp2;		HX_STACK_VAR(snap,"snap");
		HX_STACK_LINE(401)
		Float a = matrix->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(402)
		Float b = matrix->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(403)
		Float c = matrix->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(404)
		Float d = matrix->d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(405)
		Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(406)
		Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(407)
		int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
		HX_STACK_LINE(409)
		bool tmp3 = snap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(409)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(409)
		if ((tmp4)){
			HX_STACK_LINE(410)
			{
				HX_STACK_LINE(410)
				::lime::utils::ArrayBufferView tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(410)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(410)
				int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(410)
				int idx = tmp6;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(410)
				Float tmp7 = (a * w1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(410)
				Float tmp8 = (c * h1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(410)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(410)
				Float tmp10 = tx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(410)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(410)
				Float val = tmp11;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(410)
				{
					HX_STACK_LINE(410)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(410)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(410)
					val;
				}
			}
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::lime::utils::ArrayBufferView tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(411)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(411)
				int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(411)
				int idx = tmp6;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(411)
				Float tmp7 = (d * h1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(411)
				Float tmp8 = (b * w1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(411)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(411)
				Float tmp10 = ty;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(411)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(411)
				Float val = tmp11;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(411)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(411)
					val;
				}
			}
		}
		else{
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				::lime::utils::ArrayBufferView tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(413)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(413)
				int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(413)
				int idx = tmp6;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(413)
				Float tmp7 = (a * w1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(413)
				Float tmp8 = (c * h1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(413)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(413)
				Float tmp10 = tx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(413)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(413)
				Float tmp12 = ::Math_obj::fround(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(413)
				Float val = tmp12;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(413)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(413)
					val;
				}
			}
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				::lime::utils::ArrayBufferView tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(414)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(414)
				int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(414)
				int idx = tmp6;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(414)
				Float tmp7 = (d * h1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(414)
				Float tmp8 = (b * w1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(414)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(414)
				Float tmp10 = ty;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(414)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(414)
				Float tmp12 = ::Math_obj::fround(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(414)
				Float val = tmp12;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(414)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(414)
					val;
				}
			}
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::lime::utils::ArrayBufferView tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(416)
			int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			int idx = tmp6;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(416)
			Float val = uvs->x0;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(416)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(416)
				val;
			}
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			::lime::utils::ArrayBufferView tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(417)
			int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			int idx = tmp6;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(417)
			Float val = uvs->y0;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(417)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(417)
				val;
			}
		}
		HX_STACK_LINE(418)
		bool tmp5 = this->enableColor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		if ((tmp5)){
			HX_STACK_LINE(419)
			::lime::utils::ArrayBufferView tmp6 = this->colors;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			::lime::utils::ArrayBufferView this1 = tmp6;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(419)
			int tmp7 = (index)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(419)
			int idx = tmp7;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(419)
			int val = color;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(419)
				::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(419)
				val;
			}
		}
		HX_STACK_LINE(422)
		bool tmp6 = snap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(422)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(422)
		if ((tmp7)){
			HX_STACK_LINE(423)
			{
				HX_STACK_LINE(423)
				::lime::utils::ArrayBufferView tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(423)
				::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(423)
				int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(423)
				int idx = tmp9;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(423)
				Float tmp10 = (a * w0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(423)
				Float tmp11 = (c * h1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(423)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(423)
				Float tmp13 = tx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(423)
				Float val = tmp14;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(423)
				{
					HX_STACK_LINE(423)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(423)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(423)
					val;
				}
			}
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				::lime::utils::ArrayBufferView tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(424)
				::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(424)
				int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(424)
				int idx = tmp9;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(424)
				Float tmp10 = (d * h1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(424)
				Float tmp11 = (b * w0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(424)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(424)
				Float tmp13 = ty;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(424)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(424)
				Float val = tmp14;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(424)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(424)
					val;
				}
			}
		}
		else{
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				::lime::utils::ArrayBufferView tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(426)
				::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(426)
				int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(426)
				int idx = tmp9;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(426)
				Float tmp10 = (a * w0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(426)
				Float tmp11 = (c * h1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(426)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(426)
				Float tmp13 = tx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(426)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(426)
				Float tmp15 = ::Math_obj::fround(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(426)
				Float val = tmp15;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(426)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(426)
					val;
				}
			}
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				::lime::utils::ArrayBufferView tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(427)
				int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(427)
				int idx = tmp9;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(427)
				Float tmp10 = (d * h1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(427)
				Float tmp11 = (b * w0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(427)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(427)
				Float tmp13 = ty;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(427)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(427)
				Float tmp15 = ::Math_obj::fround(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(427)
				Float val = tmp15;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(427)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(427)
					val;
				}
			}
		}
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			::lime::utils::ArrayBufferView tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(429)
			int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			int idx = tmp9;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(429)
			Float val = uvs->x1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(429)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(429)
				val;
			}
		}
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			::lime::utils::ArrayBufferView tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(430)
			::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(430)
			int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(430)
			int idx = tmp9;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(430)
			Float val = uvs->y1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(430)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(430)
				val;
			}
		}
		HX_STACK_LINE(431)
		bool tmp8 = this->enableColor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(431)
		if ((tmp8)){
			HX_STACK_LINE(432)
			::lime::utils::ArrayBufferView tmp9 = this->colors;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(432)
			::lime::utils::ArrayBufferView this1 = tmp9;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(432)
			int tmp10 = (index)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(432)
			int idx = tmp10;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(432)
			int val = color;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(432)
				::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(432)
				val;
			}
		}
		HX_STACK_LINE(435)
		bool tmp9 = snap;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(435)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(435)
		if ((tmp10)){
			HX_STACK_LINE(436)
			{
				HX_STACK_LINE(436)
				::lime::utils::ArrayBufferView tmp11 = this->positions;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(436)
				::lime::utils::ArrayBufferView this1 = tmp11;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(436)
				int tmp12 = (index)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(436)
				int idx = tmp12;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(436)
				Float tmp13 = (a * w0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(436)
				Float tmp14 = (c * h0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(436)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(436)
				Float tmp16 = tx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(436)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(436)
				Float val = tmp17;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(436)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(436)
					val;
				}
			}
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				::lime::utils::ArrayBufferView tmp11 = this->positions;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(437)
				::lime::utils::ArrayBufferView this1 = tmp11;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(437)
				int tmp12 = (index)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(437)
				int idx = tmp12;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(437)
				Float tmp13 = (d * h0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(437)
				Float tmp14 = (b * w0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(437)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(437)
				Float tmp16 = ty;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(437)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(437)
				Float val = tmp17;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(437)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(437)
					val;
				}
			}
		}
		else{
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				::lime::utils::ArrayBufferView tmp11 = this->positions;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(439)
				::lime::utils::ArrayBufferView this1 = tmp11;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(439)
				int tmp12 = (index)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(439)
				int idx = tmp12;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(439)
				Float tmp13 = (a * w0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(439)
				Float tmp14 = (c * h0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(439)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(439)
				Float tmp16 = tx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(439)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(439)
				Float tmp18 = ::Math_obj::fround(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(439)
				Float val = tmp18;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(439)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(439)
					val;
				}
			}
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::lime::utils::ArrayBufferView tmp11 = this->positions;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(440)
				::lime::utils::ArrayBufferView this1 = tmp11;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(440)
				int tmp12 = (index)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(440)
				int idx = tmp12;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(440)
				Float tmp13 = (d * h0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(440)
				Float tmp14 = (b * w0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(440)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(440)
				Float tmp16 = ty;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(440)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(440)
				Float tmp18 = ::Math_obj::fround(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(440)
				Float val = tmp18;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(440)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(440)
					val;
				}
			}
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			::lime::utils::ArrayBufferView tmp11 = this->positions;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(442)
			::lime::utils::ArrayBufferView this1 = tmp11;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(442)
			int tmp12 = (index)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(442)
			int idx = tmp12;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(442)
			Float val = uvs->x2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(442)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(442)
				val;
			}
		}
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			::lime::utils::ArrayBufferView tmp11 = this->positions;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(443)
			::lime::utils::ArrayBufferView this1 = tmp11;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(443)
			int tmp12 = (index)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(443)
			int idx = tmp12;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(443)
			Float val = uvs->y2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(443)
			{
				HX_STACK_LINE(443)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(443)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(443)
				val;
			}
		}
		HX_STACK_LINE(444)
		bool tmp11 = this->enableColor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(444)
		if ((tmp11)){
			HX_STACK_LINE(445)
			::lime::utils::ArrayBufferView tmp12 = this->colors;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(445)
			::lime::utils::ArrayBufferView this1 = tmp12;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(445)
			int tmp13 = (index)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(445)
			int idx = tmp13;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(445)
			int val = color;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(445)
				::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(445)
				val;
			}
		}
		HX_STACK_LINE(448)
		bool tmp12 = snap;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(448)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(448)
		if ((tmp13)){
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				::lime::utils::ArrayBufferView tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(449)
				::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(449)
				int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(449)
				int idx = tmp15;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(449)
				Float tmp16 = (a * w1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(449)
				Float tmp17 = (c * h0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(449)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(449)
				Float tmp19 = tx;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(449)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(449)
				Float val = tmp20;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(449)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(449)
					val;
				}
			}
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(450)
				::lime::utils::ArrayBufferView tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(450)
				::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(450)
				int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(450)
				int idx = tmp15;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(450)
				Float tmp16 = (d * h0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(450)
				Float tmp17 = (b * w1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(450)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(450)
				Float tmp19 = ty;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(450)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(450)
				Float val = tmp20;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(450)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(450)
					val;
				}
			}
		}
		else{
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::lime::utils::ArrayBufferView tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(452)
				::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(452)
				int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(452)
				int idx = tmp15;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(452)
				Float tmp16 = (a * w1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(452)
				Float tmp17 = (c * h0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(452)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(452)
				Float tmp19 = tx;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(452)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(452)
				Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(452)
				Float val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(452)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(452)
					val;
				}
			}
			HX_STACK_LINE(453)
			{
				HX_STACK_LINE(453)
				::lime::utils::ArrayBufferView tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(453)
				::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(453)
				int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(453)
				int idx = tmp15;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(453)
				Float tmp16 = (d * h0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(453)
				Float tmp17 = (b * w1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(453)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(453)
				Float tmp19 = ty;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(453)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(453)
				Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(453)
				Float val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(453)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(453)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(453)
					val;
				}
			}
		}
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			::lime::utils::ArrayBufferView tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(455)
			::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(455)
			int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(455)
			int idx = tmp15;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(455)
			Float val = uvs->x3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(455)
			{
				HX_STACK_LINE(455)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(455)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(455)
				val;
			}
		}
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			::lime::utils::ArrayBufferView tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(456)
			::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(456)
			int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(456)
			int idx = tmp15;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(456)
			Float val = uvs->y3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(456)
			{
				HX_STACK_LINE(456)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(456)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(456)
				val;
			}
		}
		HX_STACK_LINE(457)
		bool tmp14 = this->enableColor;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(457)
		if ((tmp14)){
			HX_STACK_LINE(458)
			::lime::utils::ArrayBufferView tmp15 = this->colors;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(458)
			::lime::utils::ArrayBufferView this1 = tmp15;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(458)
			int tmp16 = (index)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(458)
			int idx = tmp16;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(458)
			int val = color;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(458)
				::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(458)
				val;
			}
		}
		HX_STACK_LINE(461)
		this->writtenVertexBytes = index;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(SpriteBatch_obj,fillVertices,(void))

Void SpriteBatch_obj::enableAttributes( Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","enableAttributes",0x7705b0b4,"openfl._internal.renderer.opengl.utils.SpriteBatch.enableAttributes","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",464,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(465)
		bool tmp = (color != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		this->enableColor = tmp;
		HX_STACK_LINE(467)
		bool tmp1 = this->enableColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(467)
		bool tmp2 = this->lastEnableColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(467)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(467)
		if ((tmp3)){
			HX_STACK_LINE(468)
			this->flush();
			HX_STACK_LINE(469)
			bool tmp4 = this->enableColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(469)
			this->lastEnableColor = tmp4;
		}
		HX_STACK_LINE(472)
		bool tmp4 = this->lastEnableColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(472)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		tmp5->enabled = tmp4;
		HX_STACK_LINE(474)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(474)
				Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(474)
				while((true)){
					HX_STACK_LINE(474)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(474)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(474)
					if ((tmp8)){
						HX_STACK_LINE(474)
						break;
					}
					HX_STACK_LINE(474)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp9 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(474)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp9;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(474)
					++(_g);
					HX_STACK_LINE(474)
					bool tmp10 = a->enabled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(474)
					if ((tmp10)){
						HX_STACK_LINE(474)
						int tmp11 = a->components;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(474)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(474)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(474)
							switch( (int)(tmp13)){
								case (int)5120: case (int)5121: {
									HX_STACK_LINE(474)
									tmp12 = (int)1;
								}
								;break;
								case (int)5122: case (int)5123: {
									HX_STACK_LINE(474)
									tmp12 = (int)2;
								}
								;break;
								default: {
									HX_STACK_LINE(474)
									tmp12 = (int)4;
								}
							}
						}
						HX_STACK_LINE(474)
						int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(474)
						Float tmp14 = (Float(tmp13) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(474)
						int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(474)
						hx::AddEq(r,tmp15);
					}
				}
			}
			HX_STACK_LINE(474)
			tmp6 = r;
		}
		HX_STACK_LINE(474)
		this->elementsPerVertex = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,enableAttributes,(void))

Void SpriteBatch_obj::flush( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","flush",0xaa58290a,"openfl._internal.renderer.opengl.utils.SpriteBatch.flush","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",477,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(478)
		int tmp = this->batchedSprites;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(478)
			return null();
		}
		HX_STACK_LINE(480)
		::openfl::geom::Rectangle tmp2 = this->clipRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		if ((tmp3)){
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				::lime::graphics::GLRenderContext tmp4 = this->gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(481)
				int tmp5 = tmp4->SCISSOR_TEST;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(481)
				::lime::graphics::opengl::GL_obj::lime_gl_enable(tmp5);
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				::openfl::geom::Rectangle tmp4 = this->clipRect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(482)
				int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(482)
				int x = tmp6;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(483)
				::openfl::geom::Rectangle tmp7 = this->clipRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(483)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(483)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(483)
				int y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(484)
				::openfl::geom::Rectangle tmp10 = this->clipRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(484)
				Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(484)
				int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(484)
				int width = tmp12;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(485)
				::openfl::geom::Rectangle tmp13 = this->clipRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(485)
				Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(485)
				int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(485)
				int height = tmp15;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(482)
					int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(482)
					int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(482)
					int tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(482)
					::lime::graphics::opengl::GL_obj::lime_gl_scissor(tmp16,tmp17,tmp18,tmp19);
				}
			}
		}
		HX_STACK_LINE(489)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		if ((tmp4)){
			HX_STACK_LINE(490)
			this->dirty = false;
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::lime::graphics::GLRenderContext tmp5 = this->gl;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(492)
				int tmp6 = tmp5->TEXTURE0;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(492)
				::lime::graphics::opengl::GL_obj::lime_gl_active_texture(tmp6);
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp5 = this->vertexArray;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				::openfl::_internal::renderer::opengl::utils::VertexArray _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(494)
					{
						HX_STACK_LINE(494)
						int tmp6 = _this->gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(494)
						bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(494)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						if ((tmp7)){
							HX_STACK_LINE(494)
							tmp8 = (int)0;
						}
						else{
							HX_STACK_LINE(494)
							tmp8 = buffer->id;
						}
						HX_STACK_LINE(494)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp6,tmp8);
					}
				}
			}
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::lime::graphics::opengl::GLBuffer tmp5 = this->indexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(495)
				::lime::graphics::opengl::GLBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					::lime::graphics::GLRenderContext tmp6 = this->gl;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(495)
					int tmp7 = tmp6->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(495)
					bool tmp8 = (buffer == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(495)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(495)
					if ((tmp8)){
						HX_STACK_LINE(495)
						tmp9 = (int)0;
					}
					else{
						HX_STACK_LINE(495)
						tmp9 = buffer->id;
					}
					HX_STACK_LINE(495)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp7,tmp9);
				}
			}
		}
		HX_STACK_LINE(498)
		int tmp5 = this->writtenVertexBytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		int tmp6 = this->vertexArraySize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		if ((tmp8)){
			HX_STACK_LINE(499)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp9 = this->vertexArray;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(499)
			::lime::utils::ArrayBufferView tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(499)
			tmp9->upload(tmp10);
		}
		else{
			HX_STACK_LINE(501)
			::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				::lime::utils::ArrayBufferView tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(501)
				::lime::utils::ArrayBufferView this1 = tmp10;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(501)
				int tmp11 = this->writtenVertexBytes;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(501)
				Dynamic end = tmp11;		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(501)
				bool tmp12 = (end == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(501)
				if ((tmp12)){
					HX_STACK_LINE(501)
					Dynamic tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(501)
					int tmp14 = this1->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(501)
					(tmp13 == tmp14);
				}
				HX_STACK_LINE(501)
				int tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(501)
				int len = tmp13;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(501)
				int tmp14 = this1->bytesPerElement;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(501)
				int tmp15 = ((int)0 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(501)
				int byte_offset = tmp15;		HX_STACK_VAR(byte_offset,"byte_offset");
				HX_STACK_LINE(501)
				::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					int tmp17 = this1->type;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(501)
					int _g = tmp17;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(501)
					int tmp18 = _g;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(501)
					switch( (int)(tmp18)){
						case (int)1: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(501)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(501)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(501)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(501)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(501)
							if ((tmp20)){
								HX_STACK_LINE(501)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(501)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(501)
								if ((tmp21)){
									HX_STACK_LINE(501)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									{
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(501)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(501)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(501)
										_this->length = tmp24;
										HX_STACK_LINE(501)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(501)
										_this->byteLength = tmp25;
										HX_STACK_LINE(501)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(501)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											this3 = tmp28;
											HX_STACK_LINE(501)
											tmp26 = this3;
										}
										HX_STACK_LINE(501)
										_this->buffer = tmp26;
										HX_STACK_LINE(501)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(501)
										tmp22 = _this;
									}
									HX_STACK_LINE(501)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(501)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(501)
									if ((tmp22)){
										HX_STACK_LINE(501)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										{
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(501)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(501)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(501)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(501)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(501)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(501)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(501)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(501)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(501)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(501)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(501)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(501)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(501)
											if ((tmp31)){
												HX_STACK_LINE(501)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(501)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(501)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(501)
												{
													HX_STACK_LINE(501)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(501)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(501)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(501)
													this3 = tmp35;
													HX_STACK_LINE(501)
													tmp33 = this3;
												}
												HX_STACK_LINE(501)
												_this->buffer = tmp33;
												HX_STACK_LINE(501)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(501)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(501)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(501)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(501)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(501)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(501)
											_this->byteLength = tmp32;
											HX_STACK_LINE(501)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(501)
											_this->length = srcLength;
											HX_STACK_LINE(501)
											tmp23 = _this;
										}
										HX_STACK_LINE(501)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(501)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(501)
										if ((tmp23)){
											HX_STACK_LINE(501)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(501)
											{
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(501)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(501)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(501)
												if ((tmp26)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(501)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(501)
												if ((tmp28)){
													HX_STACK_LINE(501)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(501)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(501)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(501)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(501)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(501)
												if ((tmp29)){
													HX_STACK_LINE(501)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
													HX_STACK_LINE(501)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(501)
													if ((tmp33)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(501)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(501)
													newByteLength = tmp30;
													HX_STACK_LINE(501)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(501)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(501)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(501)
													if ((tmp32)){
														HX_STACK_LINE(501)
														HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(501)
												_this->buffer = buffer;
												HX_STACK_LINE(501)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(501)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(501)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(501)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(501)
												_this->length = tmp31;
												HX_STACK_LINE(501)
												tmp24 = _this;
											}
											HX_STACK_LINE(501)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(501)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
										}
									}
								}
							}
							HX_STACK_LINE(501)
							tmp16 = this2;
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(501)
							HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
						}
						;break;
					}
				}
				HX_STACK_LINE(501)
				::lime::utils::ArrayBufferView view = tmp16;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(501)
				tmp9 = view;
			}
			HX_STACK_LINE(501)
			::lime::utils::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(502)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp10 = this->vertexArray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(502)
			::lime::utils::ArrayBufferView tmp11 = view;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(502)
			tmp10->upload(tmp11);
		}
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State nextState;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(506)
		int batchSize = (int)0;		HX_STACK_VAR(batchSize,"batchSize");
		HX_STACK_LINE(507)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(509)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(509)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp10 = tmp9->shaderManager->defaultShader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(509)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp11 = this->currentState;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(509)
		tmp11->shader = tmp10;
		HX_STACK_LINE(510)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp12 = this->currentState;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		tmp12->texture = null();
		HX_STACK_LINE(511)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp13 = this->currentState;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(511)
		tmp13->textureSmooth = false;
		HX_STACK_LINE(512)
		::openfl::_internal::renderer::RenderSession tmp14 = this->renderSession;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(512)
		::openfl::display::BlendMode tmp15 = tmp14->blendModeManager->currentBlendMode;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(512)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = this->currentState;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(512)
		tmp16->blendMode = tmp15;
		HX_STACK_LINE(513)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp17 = this->currentState;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(513)
		tmp17->colorTransform = null();
		HX_STACK_LINE(514)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp18 = this->currentState;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(514)
		tmp18->skipColorTransformAlpha = false;
		HX_STACK_LINE(516)
		{
			HX_STACK_LINE(516)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			int tmp19 = this->batchedSprites;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(516)
			int _g = tmp19;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(516)
			while((true)){
				HX_STACK_LINE(516)
				bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(516)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(516)
				if ((tmp21)){
					HX_STACK_LINE(516)
					break;
				}
				HX_STACK_LINE(516)
				int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(516)
				int i = tmp22;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(517)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp23 = this->states->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(517)
				nextState = tmp23;
				HX_STACK_LINE(518)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp24 = this->currentState;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(518)
				tmp24->skipColorTransformAlpha = nextState->skipColorTransformAlpha;
				HX_STACK_LINE(519)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp26 = this->currentState;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other = tmp26;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(519)
					bool tmp27 = (nextState->shader == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(519)
					bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(519)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(519)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(519)
					if ((tmp29)){
						HX_STACK_LINE(519)
						tmp30 = (other->shader == null());
					}
					else{
						HX_STACK_LINE(519)
						tmp30 = true;
					}
					HX_STACK_LINE(519)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(519)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(519)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(519)
					if ((tmp32)){
						HX_STACK_LINE(519)
						int tmp34 = nextState->shader->ID;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(519)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(519)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(519)
						int tmp37 = other->shader->ID;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(519)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(519)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(519)
						tmp33 = (tmp36 == tmp39);
					}
					else{
						HX_STACK_LINE(519)
						tmp33 = true;
					}
					HX_STACK_LINE(519)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(519)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(519)
					if ((tmp34)){
						HX_STACK_LINE(519)
						tmp35 = (nextState->texture == other->texture);
					}
					else{
						HX_STACK_LINE(519)
						tmp35 = false;
					}
					HX_STACK_LINE(519)
					bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(519)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(519)
					if ((tmp36)){
						HX_STACK_LINE(519)
						tmp37 = (nextState->textureSmooth == other->textureSmooth);
					}
					else{
						HX_STACK_LINE(519)
						tmp37 = false;
					}
					HX_STACK_LINE(519)
					bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(519)
					bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(519)
					if ((tmp38)){
						HX_STACK_LINE(519)
						tmp39 = (nextState->blendMode == other->blendMode);
					}
					else{
						HX_STACK_LINE(519)
						tmp39 = false;
					}
					HX_STACK_LINE(519)
					if ((tmp39)){
						HX_STACK_LINE(519)
						bool tmp40 = (nextState->colorTransform != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(519)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(519)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(519)
						if ((tmp42)){
							HX_STACK_LINE(519)
							::openfl::geom::ColorTransform tmp43 = other->colorTransform;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(519)
							bool tmp44 = nextState->skipColorTransformAlpha;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(519)
							::openfl::geom::ColorTransform tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(519)
							bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(519)
							::openfl::geom::ColorTransform tmp47 = tmp45;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(519)
							bool tmp48 = tmp46;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(519)
							tmp25 = nextState->colorTransform->__equals(tmp47,tmp48);
						}
						else{
							HX_STACK_LINE(519)
							tmp25 = false;
						}
					}
					else{
						HX_STACK_LINE(519)
						tmp25 = false;
					}
				}
				HX_STACK_LINE(519)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(519)
				if ((tmp26)){
					HX_STACK_LINE(520)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp27 = this->currentState;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(520)
					int tmp28 = batchSize;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(520)
					int tmp29 = start;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(520)
					this->renderBatch(tmp27,tmp28,tmp29);
					HX_STACK_LINE(522)
					start = i;
					HX_STACK_LINE(523)
					batchSize = (int)0;
					HX_STACK_LINE(525)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp30 = this->currentState;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(525)
					tmp30->shader = nextState->shader;
					HX_STACK_LINE(526)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp31 = this->currentState;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(526)
					tmp31->texture = nextState->texture;
					HX_STACK_LINE(527)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp32 = this->currentState;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(527)
					tmp32->textureSmooth = nextState->textureSmooth;
					HX_STACK_LINE(528)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp33 = this->currentState;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(528)
					tmp33->blendMode = nextState->blendMode;
					HX_STACK_LINE(529)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp34 = this->currentState;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(529)
					tmp34->colorTransform = nextState->colorTransform;
				}
				HX_STACK_LINE(532)
				(batchSize)++;
			}
		}
		HX_STACK_LINE(535)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp19 = this->currentState;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(535)
		int tmp20 = batchSize;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(535)
		int tmp21 = start;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(535)
		this->renderBatch(tmp19,tmp20,tmp21);
		HX_STACK_LINE(536)
		this->batchedSprites = (int)0;
		HX_STACK_LINE(537)
		this->writtenVertexBytes = (int)0;
		HX_STACK_LINE(539)
		::openfl::geom::Rectangle tmp22 = this->clipRect;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(539)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(539)
		if ((tmp23)){
			HX_STACK_LINE(540)
			::lime::graphics::GLRenderContext tmp24 = this->gl;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(540)
			int tmp25 = tmp24->SCISSOR_TEST;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(540)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,flush,(void))

Void SpriteBatch_obj::renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBatch",0x8edfd34a,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBatch","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",546,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_LINE(547)
		bool tmp = (size == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(547)
		if ((tmp1)){
			HX_STACK_LINE(547)
			tmp2 = (state->texture == null());
		}
		else{
			HX_STACK_LINE(547)
			tmp2 = true;
		}
		HX_STACK_LINE(547)
		if ((tmp2)){
			HX_STACK_LINE(547)
			return null();
		}
		HX_STACK_LINE(549)
		bool tmp3 = (state->shader == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		if ((tmp3)){
			HX_STACK_LINE(549)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(549)
			tmp4 = tmp5->shaderManager->defaultShader;
		}
		else{
			HX_STACK_LINE(549)
			tmp4 = state->shader;
		}
		HX_STACK_LINE(549)
		::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp4;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(550)
		::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(550)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp6 = shader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(550)
		tmp5->shaderManager->setShader(tmp6,null());
		HX_STACK_LINE(553)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp7 = this->vertexArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		shader->bindVertexArray(tmp7);
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			int tmp8 = shader->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(555)
			int location = tmp8;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(555)
			::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(555)
			::lime::utils::ArrayBufferView tmp10 = tmp9->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(555)
			::lime::utils::ArrayBufferView v = tmp10;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(555)
			{
				HX_STACK_LINE(555)
				int tmp11 = location;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(555)
				::haxe::io::Bytes tmp12 = v->buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(555)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp11,false,tmp12,(int)3);
			}
		}
		HX_STACK_LINE(557)
		bool tmp8 = (state->colorTransform != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		if ((tmp8)){
			HX_STACK_LINE(558)
			::openfl::geom::ColorTransform ct = state->colorTransform;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(559)
			{
				HX_STACK_LINE(559)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(559)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(559)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(560)
					Float tmp11 = ct->redMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(560)
					Float tmp12 = ct->greenMultiplier;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(560)
					Float tmp13 = ct->blueMultiplier;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(560)
					bool tmp14 = state->skipColorTransformAlpha;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(560)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(560)
					if ((tmp14)){
						HX_STACK_LINE(560)
						tmp15 = (int)1;
					}
					else{
						HX_STACK_LINE(560)
						tmp15 = ct->alphaMultiplier;
					}
					HX_STACK_LINE(559)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,tmp11,tmp12,tmp13,tmp15);
				}
			}
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(561)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(562)
					Float tmp11 = (Float(ct->redOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(562)
					Float tmp12 = (Float(ct->greenOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(562)
					Float tmp13 = (Float(ct->blueOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(562)
					Float tmp14 = (Float(ct->alphaOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(561)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,tmp11,tmp12,tmp13,tmp14);
				}
			}
		}
		else{
			HX_STACK_LINE(564)
			{
				HX_STACK_LINE(564)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(564)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(564)
				{
					HX_STACK_LINE(564)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(564)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,(int)1,(int)1,(int)1,(int)1);
				}
			}
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(565)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(565)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(565)
				{
					HX_STACK_LINE(565)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(565)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,(int)0,(int)0,(int)0,(int)0);
				}
			}
		}
		HX_STACK_LINE(568)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(568)
		::openfl::display::BlendMode tmp10 = state->blendMode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(568)
		tmp9->blendModeManager->setBlendMode(tmp10,null());
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			::lime::graphics::opengl::GLTexture texture = state->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				::lime::graphics::GLRenderContext tmp11 = this->gl;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(569)
				int tmp12 = tmp11->TEXTURE_2D;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(569)
				bool tmp13 = (texture == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(569)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(569)
				if ((tmp13)){
					HX_STACK_LINE(569)
					tmp14 = (int)0;
				}
				else{
					HX_STACK_LINE(569)
					tmp14 = texture->id;
				}
				HX_STACK_LINE(569)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp12,tmp14);
			}
		}
		HX_STACK_LINE(571)
		bool tmp11 = state->textureSmooth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(571)
		if ((tmp11)){
			HX_STACK_LINE(573)
			{
				HX_STACK_LINE(573)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(573)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(573)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(573)
				int tmp15 = tmp14->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(573)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(573)
				int tmp17 = tmp16->LINEAR;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(573)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
			HX_STACK_LINE(574)
			{
				HX_STACK_LINE(574)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(574)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(574)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(574)
				int tmp15 = tmp14->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(574)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(574)
				int tmp17 = tmp16->LINEAR;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(574)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
		}
		else{
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(576)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(576)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(576)
				int tmp15 = tmp14->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(576)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(576)
				int tmp17 = tmp16->NEAREST;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(576)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(577)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(577)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(577)
				int tmp15 = tmp14->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(577)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(577)
				int tmp17 = tmp16->NEAREST;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(577)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(580)
			int tmp13 = tmp12->TRIANGLES;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(580)
			int tmp14 = (size * (int)6);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(580)
			::lime::graphics::GLRenderContext tmp15 = this->gl;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(580)
			int tmp16 = tmp15->UNSIGNED_SHORT;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(580)
			int tmp17 = (start * (int)6);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(580)
			int tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(580)
			::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(tmp13,tmp14,tmp16,tmp18);
		}
		HX_STACK_LINE(582)
		::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(582)
		(tmp12->drawCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,renderBatch,(void))

Void SpriteBatch_obj::setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic __o_smooth,::openfl::display::BlendMode blendMode,::openfl::geom::ColorTransform colorTransform,Dynamic __o_skipAlpha){
Dynamic smooth = __o_smooth.Default(false);
Dynamic skipAlpha = __o_skipAlpha.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setState",0x7687c889,"openfl._internal.renderer.opengl.utils.SpriteBatch.setState","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",586,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(skipAlpha,"skipAlpha")
{
		HX_STACK_LINE(587)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(588)
		bool tmp1 = (state == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		if ((tmp1)){
			HX_STACK_LINE(589)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp2 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(589)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp3 = this->states[index] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(589)
			state = tmp3;
		}
		HX_STACK_LINE(591)
		state->texture = texture;
		HX_STACK_LINE(592)
		state->textureSmooth = smooth;
		HX_STACK_LINE(593)
		state->blendMode = blendMode;
		HX_STACK_LINE(594)
		state->colorTransform = colorTransform;
		HX_STACK_LINE(595)
		state->skipColorTransformAlpha = skipAlpha;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,setState,(void))

Void SpriteBatch_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setContext",0xe1877667,"openfl._internal.renderer.opengl.utils.SpriteBatch.setContext","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",598,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(599)
		this->gl = gl;
		HX_STACK_LINE(601)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(601)
		::lime::graphics::GLRenderContext tmp1 = gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		::lime::utils::ArrayBufferView tmp2 = this->positions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(601)
		tmp->setContext(tmp1,tmp2);
		HX_STACK_LINE(603)
		int tmp3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		Dynamic tmp4 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(603)
		::lime::graphics::opengl::GLBuffer tmp5 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(603)
		this->indexBuffer = tmp5;
		HX_STACK_LINE(604)
		{
			HX_STACK_LINE(604)
			::lime::graphics::opengl::GLBuffer tmp6 = this->indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(604)
			::lime::graphics::opengl::GLBuffer buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(604)
				int tmp7 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(604)
				bool tmp8 = (buffer == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(604)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(604)
				if ((tmp8)){
					HX_STACK_LINE(604)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(604)
					tmp9 = buffer->id;
				}
				HX_STACK_LINE(604)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp7,tmp9);
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::lime::utils::ArrayBufferView tmp6 = this->indices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			::lime::utils::ArrayBufferView data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(605)
			{
				HX_STACK_LINE(605)
				int tmp7 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(605)
				::haxe::io::Bytes tmp8 = data->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(605)
				int tmp9 = data->byteOffset;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(605)
				int tmp10 = data->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(605)
				int tmp11 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(605)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp7,tmp8,tmp9,tmp10,tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setContext,(void))

int SpriteBatch_obj::getElementsPerVertex( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","getElementsPerVertex",0x09fa41ee,"openfl._internal.renderer.opengl.utils.SpriteBatch.getElementsPerVertex","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",610,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(611)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(613)
	{
		HX_STACK_LINE(613)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(613)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(613)
		while((true)){
			HX_STACK_LINE(613)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(613)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(613)
			if ((tmp1)){
				HX_STACK_LINE(613)
				break;
			}
			HX_STACK_LINE(613)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(613)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(613)
			++(_g);
			HX_STACK_LINE(614)
			bool tmp3 = a->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			if ((tmp3)){
				HX_STACK_LINE(614)
				int tmp4 = a->components;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(614)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(614)
					int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(614)
					switch( (int)(tmp6)){
						case (int)5120: case (int)5121: {
							HX_STACK_LINE(614)
							tmp5 = (int)1;
						}
						;break;
						case (int)5122: case (int)5123: {
							HX_STACK_LINE(614)
							tmp5 = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(614)
							tmp5 = (int)4;
						}
					}
				}
				HX_STACK_LINE(614)
				int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				hx::AddEq(r,tmp8);
			}
		}
	}
	HX_STACK_LINE(617)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(617)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getElementsPerVertex,return )

int SpriteBatch_obj::VERTS_PER_SPRITE;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(maxSprites,"maxSprites");
	HX_MARK_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_MARK_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_MARK_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_MARK_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_MARK_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_MARK_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(maxSprites,"maxSprites");
	HX_VISIT_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_VISIT_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_VISIT_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_VISIT_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_VISIT_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_VISIT_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(lastEnableColor,"lastEnableColor");
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { return maxSprites; }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor; }
		if (HX_FIELD_EQ(inName,"renderTiles") ) { return renderTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBatch") ) { return renderBatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"fillVertices") ) { return fillVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { return batchedSprites; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { return indexArraySize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { return vertexArraySize; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { return lastEnableColor; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderBitmapData") ) { return renderBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAttributes") ) { return enableAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { return elementsPerVertex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { return writtenVertexBytes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { return maxElementsPerVertex; }
		if (HX_FIELD_EQ(inName,"renderCachedGraphics") ) { return renderCachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getElementsPerVertex") ) { return getElementsPerVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { maxSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { batchedSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { indexArraySize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { vertexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { lastEnableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { elementsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { writtenVertexBytes=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { maxElementsPerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteBatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"));
	outFields->push(HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"));
	outFields->push(HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"));
	outFields->push(HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"));
	outFields->push(HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"));
	outFields->push(HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"));
	outFields->push(HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"));
	outFields->push(HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"));
	outFields->push(HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(SpriteBatch_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(SpriteBatch_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State*/ ,(int)offsetof(SpriteBatch_obj,currentState),HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(SpriteBatch_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(SpriteBatch_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SpriteBatch_obj,clipRect),HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxSprites),HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,batchedSprites),HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,vertexArraySize),HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,indexArraySize),HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxElementsPerVertex),HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,elementsPerVertex),HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,writtenVertexBytes),HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(SpriteBatch_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,enableColor),HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,lastEnableColor),HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SpriteBatch_obj::VERTS_PER_SPRITE,HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"),
	HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"),
	HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"),
	HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"),
	HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"),
	HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"),
	HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"),
	HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"),
	HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("renderBitmapData","\xaf","\xec","\x66","\xde"),
	HX_HCSTRING("renderTiles","\x4f","\x2a","\xe6","\xdb"),
	HX_HCSTRING("renderCachedGraphics","\xc3","\xb0","\xad","\xeb"),
	HX_HCSTRING("fillVertices","\x9c","\x05","\x8a","\x6e"),
	HX_HCSTRING("enableAttributes","\x3a","\xbd","\x20","\x34"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("renderBatch","\x84","\x14","\x6c","\x79"),
	HX_HCSTRING("setState","\x0f","\xdf","\x3f","\x92"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	HX_HCSTRING("getElementsPerVertex","\x74","\x09","\x3d","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#endif

hx::Class SpriteBatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d"),
	::String(null()) };

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.SpriteBatch","\x34","\x8e","\xd7","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SpriteBatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteBatch_obj >;
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

void SpriteBatch_obj::__boot()
{
	VERTS_PER_SPRITE= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
