#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_lime_utils__ArrayBufferView_TAError
#include <lime/utils/_ArrayBufferView/TAError.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",114,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(159)
	this->__usingFramebuffer = false;
	HX_STACK_LINE(178)
	this->transparent = transparent;
	HX_STACK_LINE(185)
	bool tmp = (width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	if ((tmp)){
		HX_STACK_LINE(185)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(185)
		tmp1 = width;
	}
	HX_STACK_LINE(185)
	width = tmp1;
	HX_STACK_LINE(186)
	bool tmp2 = (height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(186)
	if ((tmp2)){
		HX_STACK_LINE(186)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(186)
		tmp3 = height;
	}
	HX_STACK_LINE(186)
	height = tmp3;
	HX_STACK_LINE(188)
	this->width = width;
	HX_STACK_LINE(189)
	this->height = height;
	HX_STACK_LINE(190)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	this->rect = tmp4;
	HX_STACK_LINE(192)
	bool tmp5 = (width > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(192)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	if ((tmp5)){
		HX_STACK_LINE(192)
		tmp6 = (height > (int)0);
	}
	else{
		HX_STACK_LINE(192)
		tmp6 = false;
	}
	HX_STACK_LINE(192)
	if ((tmp6)){
		HX_STACK_LINE(194)
		bool tmp7 = transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		if ((tmp7)){
			HX_STACK_LINE(196)
			int tmp8 = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(196)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(196)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(196)
			if ((tmp10)){
				HX_STACK_LINE(198)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(204)
			int tmp8 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			int tmp10 = (int((int)-16777216) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			fillColor = tmp10;
		}
		HX_STACK_LINE(208)
		int tmp8 = (int(fillColor) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(208)
		int tmp10 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(208)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(208)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(208)
		int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(208)
		fillColor = tmp14;
		HX_STACK_LINE(211)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			int tmp16 = (width * height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			int tmp17 = (tmp16 * (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			Dynamic elements = tmp17;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(211)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(211)
			bool tmp18 = (elements != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(211)
			if ((tmp18)){
				HX_STACK_LINE(211)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(211)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				if ((tmp19)){
					HX_STACK_LINE(211)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(211)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(211)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(211)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(211)
						_this->length = tmp22;
						HX_STACK_LINE(211)
						int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(211)
						_this->byteLength = tmp23;
						HX_STACK_LINE(211)
						::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(211)
						{
							HX_STACK_LINE(211)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(211)
							int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(211)
							::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(211)
							this2 = tmp26;
							HX_STACK_LINE(211)
							tmp24 = this2;
						}
						HX_STACK_LINE(211)
						_this->buffer = tmp24;
						HX_STACK_LINE(211)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(211)
						tmp20 = _this;
					}
					HX_STACK_LINE(211)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(211)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(211)
					if ((tmp20)){
						HX_STACK_LINE(211)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(211)
						{
							HX_STACK_LINE(211)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(211)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(211)
							::haxe::io::Bytes tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(211)
							::haxe::io::Bytes srcData = tmp23;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(211)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(211)
							int srcLength = tmp24;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(211)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(211)
							int srcByteOffset = tmp25;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(211)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(211)
							int srcElementSize = tmp26;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(211)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(211)
							int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(211)
							int tmp28 = _this->type;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(211)
							bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(211)
							if ((tmp29)){
								HX_STACK_LINE(211)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(211)
								int tmp30 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(211)
								int cloneLength = tmp30;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(211)
								::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(211)
								{
									HX_STACK_LINE(211)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(211)
									int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(211)
									::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(211)
									this2 = tmp33;
									HX_STACK_LINE(211)
									tmp31 = this2;
								}
								HX_STACK_LINE(211)
								_this->buffer = tmp31;
								HX_STACK_LINE(211)
								::haxe::io::Bytes tmp32 = srcData;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(211)
								int tmp33 = srcByteOffset;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(211)
								int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(211)
								_this->buffer->blit((int)0,tmp32,tmp33,tmp34);
							}
							else{
								HX_STACK_LINE(211)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(211)
							int tmp30 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(211)
							_this->byteLength = tmp30;
							HX_STACK_LINE(211)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(211)
							_this->length = srcLength;
							HX_STACK_LINE(211)
							tmp21 = _this;
						}
						HX_STACK_LINE(211)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(211)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(211)
						if ((tmp21)){
							HX_STACK_LINE(211)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(211)
							{
								HX_STACK_LINE(211)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(211)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(211)
								bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(211)
								if ((tmp24)){
									HX_STACK_LINE(211)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(211)
								int tmp25 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(211)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(211)
								if ((tmp26)){
									HX_STACK_LINE(211)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(211)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(211)
								int bufferByteLength = tmp27;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(211)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(211)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(211)
								bool tmp28 = true;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(211)
								if ((tmp28)){
									HX_STACK_LINE(211)
									int tmp29 = bufferByteLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(211)
									newByteLength = tmp29;
									HX_STACK_LINE(211)
									int tmp30 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(211)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(211)
									if ((tmp31)){
										HX_STACK_LINE(211)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(211)
									bool tmp32 = (newByteLength < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(211)
									if ((tmp32)){
										HX_STACK_LINE(211)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(211)
									int tmp29 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(211)
									newByteLength = tmp29;
									HX_STACK_LINE(211)
									int tmp30 = newByteLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(211)
									int newRange = tmp30;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(211)
									bool tmp31 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(211)
									if ((tmp31)){
										HX_STACK_LINE(211)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(211)
								_this->buffer = null();
								HX_STACK_LINE(211)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(211)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(211)
								Float tmp29 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(211)
								int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(211)
								_this->length = tmp30;
								HX_STACK_LINE(211)
								tmp22 = _this;
							}
							HX_STACK_LINE(211)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(211)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(211)
			tmp15 = this1;
		}
		HX_STACK_LINE(211)
		int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(211)
		int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		::lime::graphics::ImageBuffer tmp18 = ::lime::graphics::ImageBuffer_obj::__new(tmp15,tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(211)
		::lime::graphics::ImageBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(212)
		buffer->format = (int)2;
		HX_STACK_LINE(213)
		buffer->premultiplied = true;
		HX_STACK_LINE(215)
		::lime::graphics::Image tmp19 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(215)
		this->__image = tmp19;
		HX_STACK_LINE(217)
		bool tmp20 = (fillColor != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(217)
		if ((tmp20)){
			HX_STACK_LINE(219)
			::lime::graphics::Image tmp21 = this->__image;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(219)
			::lime::graphics::Image tmp22 = this->__image;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(219)
			::lime::math::Rectangle tmp23 = tmp22->get_rect();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(219)
			int tmp24 = fillColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(219)
			tmp21->fillRect(tmp23,tmp24,null());
		}
		HX_STACK_LINE(226)
		::lime::graphics::Image tmp21 = this->__image;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(226)
		bool tmp22 = transparent;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(226)
		tmp21->set_transparent(tmp22);
		HX_STACK_LINE(227)
		this->__isValid = true;
	}
	HX_STACK_LINE(231)
	this->__createUVs();
	HX_STACK_LINE(233)
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(233)
	this->__worldTransform = tmp7;
	HX_STACK_LINE(234)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(234)
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",264,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(266)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		if ((tmp4)){
			HX_STACK_LINE(266)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(266)
			tmp5 = true;
		}
		HX_STACK_LINE(266)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		if ((tmp6)){
			HX_STACK_LINE(266)
			bool tmp8 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(266)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(266)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(266)
			tmp7 = true;
		}
		HX_STACK_LINE(266)
		if ((tmp7)){
			HX_STACK_LINE(266)
			return null();
		}
		HX_STACK_LINE(279)
		::lime::graphics::Image tmp8 = this->__image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		tmp8->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",288,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	if ((tmp1)){
		HX_STACK_LINE(292)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		return tmp5;
	}
	else{
		HX_STACK_LINE(296)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		::lime::graphics::Image tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::fromImage(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		return tmp5;
	}
	HX_STACK_LINE(290)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",310,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(312)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		if ((tmp1)){
			HX_STACK_LINE(312)
			return null();
		}
		HX_STACK_LINE(314)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		::lime::utils::ArrayBufferView tmp4 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		tmp2->colorTransform(tmp3,tmp4);
		HX_STACK_LINE(315)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",363,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(365)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		if ((tmp1)){
			HX_STACK_LINE(365)
			return null();
		}
		HX_STACK_LINE(367)
		int tmp2 = sourceChannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		::lime::graphics::ImageChannel tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(369)
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(370)
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(371)
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(372)
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(373)
				return null();
			}
		}
		HX_STACK_LINE(367)
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(377)
		int tmp4 = destChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		::lime::graphics::ImageChannel tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(379)
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(380)
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(381)
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(382)
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(383)
				return null();
			}
		}
		HX_STACK_LINE(377)
		::lime::graphics::ImageChannel destChannel1 = tmp5;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(387)
		::lime::graphics::Image tmp6 = this->__image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(387)
		::lime::graphics::Image tmp7 = sourceBitmapData->__image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(387)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(387)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(387)
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(387)
		::lime::graphics::ImageChannel tmp11 = destChannel1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(387)
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(388)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",432,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(434)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		if ((tmp3)){
			HX_STACK_LINE(434)
			tmp4 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(434)
			tmp4 = true;
		}
		HX_STACK_LINE(434)
		if ((tmp4)){
			HX_STACK_LINE(434)
			return null();
		}
		HX_STACK_LINE(436)
		::lime::graphics::Image tmp5 = this->__image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		::lime::graphics::Image tmp6 = sourceBitmapData->__image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		::lime::math::Rectangle tmp7 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		::lime::math::Vector2 tmp8 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		bool tmp9 = (alphaBitmapData != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(436)
		::lime::graphics::Image tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(436)
		if ((tmp9)){
			HX_STACK_LINE(436)
			tmp10 = alphaBitmapData->__image;
		}
		else{
			HX_STACK_LINE(436)
			tmp10 = null();
		}
		HX_STACK_LINE(436)
		bool tmp11 = (alphaPoint != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(436)
		::lime::math::Vector2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(436)
		if ((tmp11)){
			HX_STACK_LINE(436)
			tmp12 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(436)
			tmp12 = null();
		}
		HX_STACK_LINE(436)
		bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(436)
		tmp5->copyPixels(tmp6,tmp7,tmp8,tmp10,tmp12,tmp13);
		HX_STACK_LINE(437)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",461,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(463)
		this->__image = null();
		HX_STACK_LINE(465)
		this->width = (int)0;
		HX_STACK_LINE(466)
		this->height = (int)0;
		HX_STACK_LINE(467)
		this->rect = null();
		HX_STACK_LINE(468)
		this->__isValid = false;
		HX_STACK_LINE(470)
		::lime::graphics::opengl::GLTexture tmp = this->__texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		if ((tmp1)){
			HX_STACK_LINE(472)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(472)
			::openfl::_internal::renderer::AbstractRenderer tmp3 = tmp2->stage->__renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(472)
			::openfl::_internal::renderer::AbstractRenderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(474)
			bool tmp4 = (renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(474)
			if ((tmp4)){
				HX_STACK_LINE(476)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(477)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(479)
				bool tmp5 = (gl != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(479)
				if ((tmp5)){
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::lime::graphics::opengl::GLTexture tmp6 = this->__texture;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(481)
						::lime::graphics::opengl::GLTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(481)
						{
							HX_STACK_LINE(481)
							Dynamic tmp7 = texture->id;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(481)
							::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(tmp7);
							HX_STACK_LINE(481)
							texture->invalidate();
						}
					}
					HX_STACK_LINE(482)
					this->__texture = null();
				}
			}
		}
		HX_STACK_LINE(490)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp2 = this->__framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(490)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		if ((tmp3)){
			HX_STACK_LINE(492)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(492)
			tmp4->destroy();
			HX_STACK_LINE(493)
			this->__framebuffer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",572,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(574)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(574)
		if ((tmp1)){
			HX_STACK_LINE(574)
			return null();
		}
		HX_STACK_LINE(620)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		::lime::graphics::ImageBuffer buffer = tmp2->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(621)
		Dynamic tmp3 = this->getSurface();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		Dynamic surface = tmp3;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(622)
		::lime::graphics::cairo::Cairo tmp4 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(622)
		::lime::graphics::cairo::Cairo cairo = tmp4;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(624)
		bool tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(624)
		if ((tmp6)){
			HX_STACK_LINE(626)
			cairo->set_antialias((int)1);
		}
		HX_STACK_LINE(630)
		::openfl::_internal::renderer::RenderSession tmp7 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(630)
		::openfl::_internal::renderer::RenderSession renderSession = tmp7;		HX_STACK_VAR(renderSession,"renderSession");
		HX_STACK_LINE(631)
		renderSession->cairo = cairo;
		HX_STACK_LINE(632)
		renderSession->roundPixels = true;
		HX_STACK_LINE(633)
		::openfl::_internal::renderer::cairo::CairoMaskManager tmp8 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(633)
		renderSession->maskManager = tmp8;
		HX_STACK_LINE(635)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(636)
		bool tmp9 = (matrix != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(636)
		::openfl::geom::Matrix tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(636)
		if ((tmp9)){
			HX_STACK_LINE(636)
			tmp10 = matrix;
		}
		else{
			HX_STACK_LINE(636)
			tmp10 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(636)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = tmp10;
		HX_STACK_LINE(637)
		source->__updateChildren(false);
		HX_STACK_LINE(638)
		::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(638)
		source->__renderCairo(tmp11);
		HX_STACK_LINE(639)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = matrixCache;
		HX_STACK_LINE(640)
		source->__updateChildren(true);
		HX_STACK_LINE(642)
		Dynamic tmp12 = surface;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(642)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp12);
		HX_STACK_LINE(643)
		cairo->destroy();
		HX_STACK_LINE(645)
		::lime::graphics::Image tmp13 = this->__image;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(645)
		tmp13->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",652,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(656)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(656)
	if ((tmp3)){
		HX_STACK_LINE(656)
		tmp4 = (rect == null());
	}
	else{
		HX_STACK_LINE(656)
		tmp4 = true;
	}
	HX_STACK_LINE(656)
	if ((tmp4)){
		HX_STACK_LINE(656)
		::lime::utils::ByteArray tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(656)
		return tmp5;
	}
	HX_STACK_LINE(658)
	Dynamic tmp5 = compressor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(658)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(658)
	if ((tmp6)){
		HX_STACK_LINE(660)
		::lime::graphics::Image tmp7 = this->__image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(660)
		::lime::utils::ByteArray tmp8 = tmp7->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(660)
		::lime::utils::ByteArray tmp9 = byteArray = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(660)
		return tmp9;
	}
	else{
		HX_STACK_LINE(662)
		Dynamic tmp7 = compressor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(662)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(662)
		if ((tmp8)){
			HX_STACK_LINE(664)
			::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(664)
			::openfl::display::JPEGEncoderOptions tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(664)
			tmp10 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			HX_STACK_LINE(664)
			int tmp11 = tmp10->quality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(664)
			::lime::utils::ByteArray tmp12 = tmp9->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(664)
			::lime::utils::ByteArray tmp13 = byteArray = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(664)
			return tmp13;
		}
	}
	HX_STACK_LINE(668)
	::lime::utils::ByteArray tmp7 = byteArray = null();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(668)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",682,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(684)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(684)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		if ((tmp3)){
			HX_STACK_LINE(684)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(684)
			tmp4 = true;
		}
		HX_STACK_LINE(684)
		if ((tmp4)){
			HX_STACK_LINE(684)
			return null();
		}
		HX_STACK_LINE(685)
		::lime::graphics::Image tmp5 = this->__image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(685)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(685)
		int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(685)
		tmp5->fillRect(tmp6,tmp7,(int)1);
		HX_STACK_LINE(686)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",702,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(704)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		if ((tmp1)){
			HX_STACK_LINE(704)
			return null();
		}
		HX_STACK_LINE(705)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(705)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(705)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(705)
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(706)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",787,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(789)
	::openfl::geom::Rectangle tmp = sourceRect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(789)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",794,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(796)
	::lime::graphics::opengl::GLBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(796)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(796)
	if ((tmp1)){
		HX_STACK_LINE(800)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(800)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(801)
		int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(802)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(798)
		Array< int > data = Array_obj< int >::__new().Add(tmp2).Add(tmp3).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(tmp4).Add((int)0).Add((int)0).Add((int)1).Add(tmp5).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(807)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(807)
		Dynamic tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(807)
		::lime::graphics::opengl::GLBuffer tmp8 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(807)
		this->__buffer = tmp8;
		HX_STACK_LINE(808)
		{
			HX_STACK_LINE(808)
			::lime::graphics::opengl::GLBuffer tmp9 = this->__buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(808)
			::lime::graphics::opengl::GLBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(808)
			{
				HX_STACK_LINE(808)
				int tmp10 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(808)
				bool tmp11 = (buffer == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(808)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(808)
				if ((tmp11)){
					HX_STACK_LINE(808)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(808)
					tmp12 = buffer->id;
				}
				HX_STACK_LINE(808)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp10,tmp12);
			}
		}
		HX_STACK_LINE(809)
		{
			HX_STACK_LINE(809)
			::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(809)
				bool tmp10 = (data != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(809)
				if ((tmp10)){
					HX_STACK_LINE(809)
					::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(809)
					{
						HX_STACK_LINE(809)
						::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(809)
						::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(809)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(809)
						_this->length = data->length;
						HX_STACK_LINE(809)
						int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(809)
						_this->byteLength = tmp13;
						HX_STACK_LINE(809)
						::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(809)
							int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(809)
							::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(809)
							this2 = tmp16;
							HX_STACK_LINE(809)
							tmp14 = this2;
						}
						HX_STACK_LINE(809)
						_this->buffer = tmp14;
						HX_STACK_LINE(809)
						_this->copyFromArray(((Array< Float >)(data)),null());
						HX_STACK_LINE(809)
						tmp11 = _this;
					}
					HX_STACK_LINE(809)
					this1 = tmp11;
				}
				else{
					HX_STACK_LINE(809)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(809)
				tmp9 = this1;
			}
			HX_STACK_LINE(809)
			::lime::utils::ArrayBufferView data1 = tmp9;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				int tmp10 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(809)
				::haxe::io::Bytes tmp11 = data1->buffer;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(809)
				int tmp12 = data1->byteOffset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(809)
				int tmp13 = data1->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(809)
				int tmp14 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(809)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp10,tmp11,tmp12,tmp13,tmp14);
			}
		}
		HX_STACK_LINE(810)
		{
			HX_STACK_LINE(810)
			int tmp9 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(810)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(810)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(810)
			if ((tmp10)){
				HX_STACK_LINE(810)
				tmp11 = (int)0;
			}
			else{
				HX_STACK_LINE(810)
				tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(810)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp9,tmp11);
		}
	}
	HX_STACK_LINE(814)
	::lime::graphics::opengl::GLBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(814)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",853,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(855)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(855)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(855)
		if ((tmp1)){
			HX_STACK_LINE(855)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(855)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(855)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(855)
			return tmp4;
		}
		HX_STACK_LINE(856)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(856)
		int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(856)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(856)
		bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(856)
		::lime::math::Rectangle tmp6 = tmp2->getColorBoundsRect(tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(856)
		::lime::math::Rectangle rect = tmp6;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(857)
		::openfl::geom::Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(857)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",885,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(887)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(887)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(887)
	if ((tmp1)){
		HX_STACK_LINE(887)
		return (int)0;
	}
	HX_STACK_LINE(888)
	::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(888)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(888)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(888)
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(888)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",915,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(917)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(917)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(917)
	if ((tmp1)){
		HX_STACK_LINE(917)
		return (int)0;
	}
	HX_STACK_LINE(918)
	::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(918)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(918)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(918)
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(918)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",932,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(934)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(934)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(934)
	if ((tmp1)){
		HX_STACK_LINE(934)
		return null();
	}
	HX_STACK_LINE(935)
	bool tmp2 = (rect == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(935)
	if ((tmp2)){
		HX_STACK_LINE(935)
		::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(935)
		rect = tmp3;
	}
	HX_STACK_LINE(936)
	::lime::graphics::Image tmp3 = this->__image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(936)
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(936)
	::lime::utils::ByteArray tmp5 = tmp3->getPixels(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(936)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",941,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(943)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(943)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(943)
	if ((tmp1)){
		HX_STACK_LINE(943)
		return null();
	}
	HX_STACK_LINE(945)
	Dynamic tmp2 = this->__surface;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(945)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(945)
	if ((tmp3)){
		HX_STACK_LINE(947)
		::lime::graphics::Image tmp4 = this->__image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(947)
		Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::fromImage(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(947)
		this->__surface = tmp5;
	}
	HX_STACK_LINE(951)
	Dynamic tmp4 = this->__surface;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(951)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",956,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(958)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(958)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(958)
	if ((tmp1)){
		HX_STACK_LINE(958)
		return null();
	}
	HX_STACK_LINE(960)
	bool tmp2 = this->__usingFramebuffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(960)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(960)
	if ((tmp2)){
		HX_STACK_LINE(960)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(960)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(960)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(960)
		tmp3 = false;
	}
	HX_STACK_LINE(960)
	if ((tmp3)){
		HX_STACK_LINE(961)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(961)
		::lime::graphics::opengl::GLTexture tmp5 = tmp4->texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(961)
		return tmp5;
	}
	HX_STACK_LINE(964)
	::lime::graphics::opengl::GLTexture tmp4 = this->__texture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(964)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(964)
	if ((tmp5)){
		HX_STACK_LINE(966)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(966)
		Dynamic tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(966)
		::lime::graphics::opengl::GLTexture tmp8 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(966)
		this->__texture = tmp8;
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(967)
			::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(967)
			::lime::graphics::opengl::GLTexture texture = tmp9;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(967)
			{
				HX_STACK_LINE(967)
				int tmp10 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(967)
				bool tmp11 = (texture == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(967)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(967)
				if ((tmp11)){
					HX_STACK_LINE(967)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(967)
					tmp12 = texture->id;
				}
				HX_STACK_LINE(967)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp10,tmp12);
			}
		}
		HX_STACK_LINE(968)
		{
			HX_STACK_LINE(968)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(968)
			int tmp10 = gl->TEXTURE_WRAP_S;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(968)
			int tmp11 = gl->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(968)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(969)
		{
			HX_STACK_LINE(969)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(969)
			int tmp10 = gl->TEXTURE_WRAP_T;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(969)
			int tmp11 = gl->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(969)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(970)
		{
			HX_STACK_LINE(970)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(970)
			int tmp10 = gl->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(970)
			int tmp11 = gl->NEAREST;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(970)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(971)
		{
			HX_STACK_LINE(971)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(971)
			int tmp10 = gl->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(971)
			int tmp11 = gl->NEAREST;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(971)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(972)
		::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(972)
		tmp9->dirty = true;
	}
	HX_STACK_LINE(976)
	::lime::graphics::Image tmp6 = this->__image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(976)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(976)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(976)
	if ((tmp7)){
		HX_STACK_LINE(976)
		::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(976)
		::lime::graphics::Image tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(976)
		tmp8 = tmp10->dirty;
	}
	else{
		HX_STACK_LINE(976)
		tmp8 = false;
	}
	HX_STACK_LINE(976)
	if ((tmp8)){
		HX_STACK_LINE(978)
		int internalFormat;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(978)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(980)
		Dynamic tmp9 = this->__surface;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(980)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(980)
		if ((tmp10)){
			HX_STACK_LINE(982)
			Dynamic tmp11 = this->__surface;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(982)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp11);
		}
		HX_STACK_LINE(986)
		::lime::graphics::Image tmp11 = this->__image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(986)
		int tmp12 = tmp11->buffer->bitsPerPixel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(986)
		bool tmp13 = (tmp12 == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(986)
		if ((tmp13)){
			HX_STACK_LINE(988)
			internalFormat = gl->ALPHA;
			HX_STACK_LINE(989)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(994)
			internalFormat = gl->RGBA;
			HX_STACK_LINE(995)
			format = gl->BGRA_EXT;
		}
		HX_STACK_LINE(1006)
		{
			HX_STACK_LINE(1006)
			::lime::graphics::opengl::GLTexture tmp14 = this->__texture;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1006)
			::lime::graphics::opengl::GLTexture texture = tmp14;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1006)
			{
				HX_STACK_LINE(1006)
				int tmp15 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1006)
				bool tmp16 = (texture == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1006)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1006)
				if ((tmp16)){
					HX_STACK_LINE(1006)
					tmp17 = (int)0;
				}
				else{
					HX_STACK_LINE(1006)
					tmp17 = texture->id;
				}
				HX_STACK_LINE(1006)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp15,tmp17);
			}
		}
		HX_STACK_LINE(1008)
		::lime::graphics::Image tmp14 = this->__image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1008)
		::lime::graphics::Image textureImage = tmp14;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(1010)
		bool tmp15 = textureImage->get_premultiplied();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1010)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1010)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1010)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1010)
		if ((tmp17)){
			HX_STACK_LINE(1010)
			tmp18 = textureImage->get_transparent();
		}
		else{
			HX_STACK_LINE(1010)
			tmp18 = false;
		}
		HX_STACK_LINE(1010)
		if ((tmp18)){
			HX_STACK_LINE(1012)
			::lime::graphics::Image tmp19 = textureImage->clone();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1012)
			textureImage = tmp19;
			HX_STACK_LINE(1013)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(1017)
		{
			HX_STACK_LINE(1017)
			::lime::utils::ArrayBufferView tmp19 = textureImage->get_data();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1017)
			::lime::utils::ArrayBufferView pixels = tmp19;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				int tmp20 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1017)
				int tmp21 = internalFormat;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1017)
				int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1017)
				int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1017)
				int tmp24 = format;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1017)
				int tmp25 = gl->UNSIGNED_BYTE;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1017)
				bool tmp26 = (pixels == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1017)
				::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1017)
				if ((tmp26)){
					HX_STACK_LINE(1017)
					tmp27 = null();
				}
				else{
					HX_STACK_LINE(1017)
					tmp27 = pixels->buffer;
				}
				HX_STACK_LINE(1017)
				bool tmp28 = (pixels == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1017)
				Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1017)
				if ((tmp28)){
					HX_STACK_LINE(1017)
					tmp29 = null();
				}
				else{
					HX_STACK_LINE(1017)
					tmp29 = pixels->byteOffset;
				}
				HX_STACK_LINE(1017)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(tmp20,(int)0,tmp21,tmp22,tmp23,(int)0,tmp24,tmp25,tmp27,tmp29);
			}
		}
		HX_STACK_LINE(1018)
		{
			HX_STACK_LINE(1018)
			int tmp19 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1018)
			bool tmp20 = true;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1018)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1018)
			if ((tmp20)){
				HX_STACK_LINE(1018)
				tmp21 = (int)0;
			}
			else{
				HX_STACK_LINE(1018)
				tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(1018)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp19,tmp21);
		}
		HX_STACK_LINE(1019)
		::lime::graphics::Image tmp19 = this->__image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1019)
		tmp19->dirty = false;
	}
	HX_STACK_LINE(1023)
	::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1023)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",1037,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1039)
	::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1039)
	::lime::utils::ByteArray tmp1 = this->getPixels(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1039)
	::lime::utils::ByteArray pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1040)
	Float tmp2 = (Float(pixels->length) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1040)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1040)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(1041)
	Array< int > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1041)
	{
		HX_STACK_LINE(1041)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(1041)
		int tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1041)
		this1 = Array_obj< int >::__new()->__SetSizeExact(tmp5);
		HX_STACK_LINE(1041)
		tmp4 = this1;
	}
	HX_STACK_LINE(1041)
	Array< int > result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1043)
	{
		HX_STACK_LINE(1043)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1043)
		while((true)){
			HX_STACK_LINE(1043)
			bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1043)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1043)
			if ((tmp6)){
				HX_STACK_LINE(1043)
				break;
			}
			HX_STACK_LINE(1043)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1043)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1045)
			{
				HX_STACK_LINE(1045)
				int tmp8 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1045)
				int value = tmp8;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1045)
				int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1045)
				result[i] = tmp9;
			}
		}
	}
	HX_STACK_LINE(1049)
	Array< int > tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1049)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",1054,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(1056)
	bool tmp = (hRect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1056)
	::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1056)
	if ((tmp)){
		HX_STACK_LINE(1056)
		tmp1 = hRect;
	}
	else{
		HX_STACK_LINE(1056)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1056)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1056)
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	HX_STACK_LINE(1056)
	::openfl::geom::Rectangle rect = tmp1;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(1057)
	::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1057)
	::lime::utils::ByteArray tmp3 = this->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1057)
	::lime::utils::ByteArray pixels = tmp3;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1058)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1058)
	{
		HX_STACK_LINE(1058)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1058)
		{
			HX_STACK_LINE(1058)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1058)
			while((true)){
				HX_STACK_LINE(1058)
				bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1058)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1058)
				if ((tmp5)){
					HX_STACK_LINE(1058)
					break;
				}
				HX_STACK_LINE(1058)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1058)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static Array< int > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",1058,0xdd12d5b9)
						{
							HX_STACK_LINE(1058)
							Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1058)
							{
								HX_STACK_LINE(1058)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1058)
								while((true)){
									HX_STACK_LINE(1058)
									bool tmp7 = (_g3 < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(1058)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1058)
									if ((tmp8)){
										HX_STACK_LINE(1058)
										break;
									}
									HX_STACK_LINE(1058)
									int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1058)
									int j = tmp9;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1058)
									_g2->push((int)0);
								}
							}
							HX_STACK_LINE(1058)
							return _g2;
						}
						return null();
					}
				};
				HX_STACK_LINE(1058)
				_g->push(_Function_4_1::Block());
			}
		}
		HX_STACK_LINE(1058)
		result = _g;
	}
	HX_STACK_LINE(1060)
	{
		HX_STACK_LINE(1060)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1060)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1060)
		while((true)){
			HX_STACK_LINE(1060)
			bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1060)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1060)
			if ((tmp5)){
				HX_STACK_LINE(1060)
				break;
			}
			HX_STACK_LINE(1060)
			int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1060)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1062)
			int tmp7 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1062)
			bool tmp8 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1062)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1062)
			if ((tmp8)){
				HX_STACK_LINE(1062)
				int tmp10 = (pixels->position)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1062)
				int pos = tmp10;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1062)
				tmp9 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(1062)
				tmp9 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(1062)
			++(result->__get(tmp7).StaticCast< Array< int > >()[tmp9]);
		}
	}
	HX_STACK_LINE(1066)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",1071,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1073)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1073)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1073)
		if ((tmp1)){
			HX_STACK_LINE(1073)
			return false;
		}
		HX_STACK_LINE(1075)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.hitTest","\xb0","\x9c","\x84","\xf0"));
		HX_STACK_LINE(1077)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1090,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1097,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1099)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1099)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1099)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1099)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1099)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1099)
		if ((tmp4)){
			HX_STACK_LINE(1099)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(1099)
			tmp5 = true;
		}
		HX_STACK_LINE(1099)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1099)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1099)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1099)
		if ((tmp7)){
			HX_STACK_LINE(1099)
			bool tmp9 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1099)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1099)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1099)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(1099)
			tmp8 = true;
		}
		HX_STACK_LINE(1099)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1099)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1099)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1099)
		if ((tmp10)){
			HX_STACK_LINE(1099)
			tmp11 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1099)
			tmp11 = true;
		}
		HX_STACK_LINE(1099)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1099)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1099)
		if ((tmp12)){
			HX_STACK_LINE(1099)
			tmp13 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1099)
			tmp13 = true;
		}
		HX_STACK_LINE(1099)
		if ((tmp13)){
			HX_STACK_LINE(1099)
			return null();
		}
		HX_STACK_LINE(1100)
		::lime::graphics::Image tmp14 = this->__image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1100)
		::lime::graphics::Image tmp15 = sourceBitmapData->__image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1100)
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1100)
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1100)
		int tmp18 = redMultiplier;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1100)
		int tmp19 = greenMultiplier;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1100)
		int tmp20 = blueMultiplier;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1100)
		int tmp21 = alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1100)
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(1101)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1134,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1136)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1136)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1136)
		if ((tmp1)){
			HX_STACK_LINE(1136)
			return null();
		}
		HX_STACK_LINE(1138)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.noise","\x45","\x4b","\xe1","\x5b"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1143,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1145)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1145)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1145)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1146)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1146)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1146)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1148)
		::openfl::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1148)
		::lime::utils::ByteArray tmp5 = this->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1148)
		::lime::utils::ByteArray pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1149)
		pixels->position = (int)0;
		HX_STACK_LINE(1151)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1151)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1151)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1151)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1151)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1151)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1151)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1151)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1151)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1151)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1153)
		{
			HX_STACK_LINE(1153)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1153)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1153)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1153)
			while((true)){
				HX_STACK_LINE(1153)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1153)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1153)
				if ((tmp8)){
					HX_STACK_LINE(1153)
					break;
				}
				HX_STACK_LINE(1153)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1153)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1155)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1155)
				pixelValue = tmp10;
				HX_STACK_LINE(1157)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1157)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1157)
				if ((tmp11)){
					HX_STACK_LINE(1157)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1157)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1157)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1157)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(1157)
				c1 = tmp12;
				HX_STACK_LINE(1158)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1158)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1158)
				if ((tmp13)){
					HX_STACK_LINE(1158)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1158)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1158)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1158)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(1158)
				c2 = tmp14;
				HX_STACK_LINE(1159)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1159)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1159)
				if ((tmp15)){
					HX_STACK_LINE(1159)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1159)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1159)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1159)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(1159)
				c3 = tmp16;
				HX_STACK_LINE(1160)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1160)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1160)
				if ((tmp17)){
					HX_STACK_LINE(1160)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1160)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1160)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(1160)
				c4 = tmp18;
				HX_STACK_LINE(1162)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1162)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1162)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1162)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1162)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1162)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1162)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1162)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1162)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1162)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1162)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1162)
				a = tmp29;
				HX_STACK_LINE(1163)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1163)
				if ((tmp30)){
					HX_STACK_LINE(1163)
					(a == (int)255);
				}
				HX_STACK_LINE(1165)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1165)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1165)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1165)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1165)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1165)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1165)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1165)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1165)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1165)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1165)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1165)
				r = tmp41;
				HX_STACK_LINE(1166)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1166)
				if ((tmp42)){
					HX_STACK_LINE(1166)
					(r == (int)255);
				}
				HX_STACK_LINE(1168)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1168)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1168)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1168)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1168)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1168)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1168)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1168)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1168)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1168)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1168)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1168)
				g = tmp53;
				HX_STACK_LINE(1169)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1169)
				if ((tmp54)){
					HX_STACK_LINE(1169)
					(g == (int)255);
				}
				HX_STACK_LINE(1171)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1171)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1171)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1171)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1171)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1171)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1171)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1171)
				b = tmp61;
				HX_STACK_LINE(1172)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1172)
				if ((tmp62)){
					HX_STACK_LINE(1172)
					(b == (int)255);
				}
				HX_STACK_LINE(1174)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1174)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1174)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1174)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1174)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1174)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1174)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1174)
				color = tmp69;
				HX_STACK_LINE(1176)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1176)
				pixels->position = tmp70;
				HX_STACK_LINE(1177)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1177)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(1181)
		pixels->position = (int)0;
		HX_STACK_LINE(1182)
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1182)
		::openfl::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1183)
		::openfl::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1183)
		::lime::utils::ByteArray tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1183)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1256,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1256)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.perlinNoise","\x51","\xd2","\x2b","\x27"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1268,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1270)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1270)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1270)
		if ((tmp1)){
			HX_STACK_LINE(1270)
			return null();
		}
		HX_STACK_LINE(1271)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1271)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1271)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1271)
		tmp2->scroll(tmp3,tmp4);
		HX_STACK_LINE(1272)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1294,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1296)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1296)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1296)
		if ((tmp1)){
			HX_STACK_LINE(1296)
			return null();
		}
		HX_STACK_LINE(1297)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1297)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1297)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1297)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1297)
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1298)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1334,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1336)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1336)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1336)
		if ((tmp1)){
			HX_STACK_LINE(1336)
			return null();
		}
		HX_STACK_LINE(1337)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1337)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1337)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1337)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1337)
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1338)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1362,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1364)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1364)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1364)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1364)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1364)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1364)
		if ((tmp3)){
			HX_STACK_LINE(1364)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(1364)
			tmp4 = true;
		}
		HX_STACK_LINE(1364)
		if ((tmp4)){
			HX_STACK_LINE(1364)
			return null();
		}
		HX_STACK_LINE(1365)
		::lime::graphics::Image tmp5 = this->__image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1365)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1365)
		::lime::utils::ByteArray tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1365)
		tmp5->setPixels(tmp6,tmp7,(int)1);
		HX_STACK_LINE(1366)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1380,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1382)
		::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1382)
		::lime::utils::ByteArray byteArray = tmp;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1387)
		{
			HX_STACK_LINE(1387)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1387)
			while((true)){
				HX_STACK_LINE(1387)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1387)
				int tmp2 = inputVector->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1387)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1387)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1387)
				if ((tmp4)){
					HX_STACK_LINE(1387)
					break;
				}
				HX_STACK_LINE(1387)
				int tmp5 = inputVector->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1387)
				Dynamic color = ((Dynamic)(tmp5));		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1387)
				++(_g);
				HX_STACK_LINE(1389)
				Dynamic tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1389)
				byteArray->writeUnsignedInt(tmp6);
			}
		}
		HX_STACK_LINE(1393)
		byteArray->position = (int)0;
		HX_STACK_LINE(1394)
		::openfl::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1394)
		::lime::utils::ByteArray tmp2 = byteArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1394)
		this->setPixels(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1449,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1451)
		bool tmp = (sourceBitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1451)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1451)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1451)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1451)
		if ((tmp2)){
			HX_STACK_LINE(1451)
			tmp3 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1451)
			tmp3 = true;
		}
		HX_STACK_LINE(1451)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1451)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1451)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1451)
		if ((tmp5)){
			HX_STACK_LINE(1451)
			tmp6 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1451)
			tmp6 = true;
		}
		HX_STACK_LINE(1451)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1451)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1451)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1451)
		if ((tmp8)){
			HX_STACK_LINE(1451)
			tmp9 = (sourceRect->x > sourceBitmapData->width);
		}
		else{
			HX_STACK_LINE(1451)
			tmp9 = true;
		}
		HX_STACK_LINE(1451)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1451)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1451)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1451)
		if ((tmp11)){
			HX_STACK_LINE(1451)
			tmp12 = (sourceRect->y > sourceBitmapData->height);
		}
		else{
			HX_STACK_LINE(1451)
			tmp12 = true;
		}
		HX_STACK_LINE(1451)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1451)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1451)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1451)
		if ((tmp14)){
			HX_STACK_LINE(1451)
			Float tmp16 = destPoint->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1451)
			int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1451)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1451)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1451)
			tmp15 = (tmp16 > tmp19);
		}
		else{
			HX_STACK_LINE(1451)
			tmp15 = true;
		}
		HX_STACK_LINE(1451)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1451)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1451)
		if ((tmp16)){
			HX_STACK_LINE(1451)
			Float tmp18 = destPoint->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1451)
			int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1451)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1451)
			tmp17 = (tmp18 > tmp20);
		}
		else{
			HX_STACK_LINE(1451)
			tmp17 = true;
		}
		HX_STACK_LINE(1451)
		if ((tmp17)){
			HX_STACK_LINE(1451)
			return (int)0;
		}
		HX_STACK_LINE(1453)
		bool tmp18 = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1453)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1453)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1453)
		if ((tmp19)){
			HX_STACK_LINE(1453)
			::openfl::geom::Rectangle tmp21 = this->rect;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1453)
			::openfl::geom::Rectangle tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1453)
			::openfl::geom::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1453)
			::openfl::geom::Rectangle tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1453)
			::openfl::geom::Rectangle tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1453)
			tmp20 = sourceRect->equals(tmp25);
		}
		else{
			HX_STACK_LINE(1453)
			tmp20 = false;
		}
		HX_STACK_LINE(1453)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1453)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1453)
		if ((tmp21)){
			HX_STACK_LINE(1453)
			tmp22 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(1453)
			tmp22 = false;
		}
		HX_STACK_LINE(1453)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1453)
		if ((tmp22)){
			HX_STACK_LINE(1453)
			tmp23 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(1453)
			tmp23 = false;
		}
		HX_STACK_LINE(1453)
		if ((tmp23)){
			HX_STACK_LINE(1455)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1461)
			int tmp24 = this->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1461)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1461)
			int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1461)
			int tmp27 = (tmp26 * (int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1461)
			::lime::utils::ByteArray tmp28 = ::lime::utils::ByteArray_obj::__new(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1461)
			::lime::utils::ByteArray memory = tmp28;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1463)
			::openfl::geom::Rectangle tmp29 = this->rect;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1463)
			::lime::utils::ByteArray tmp30 = this->getPixels(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1463)
			memory = tmp30;
			HX_STACK_LINE(1464)
			memory->position = (int)0;
			HX_STACK_LINE(1465)
			::lime::utils::ByteArray tmp31 = memory;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1465)
			::openfl::Memory_obj::select(tmp31);
			HX_STACK_LINE(1467)
			int tmp32 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1467)
			int thresholdMask = tmp32;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1469)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1469)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1469)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1469)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1469)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1469)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1471)
			{
				HX_STACK_LINE(1471)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1471)
				int tmp33 = this->height;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1471)
				int _g = tmp33;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1471)
				while((true)){
					HX_STACK_LINE(1471)
					bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1471)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1471)
					if ((tmp35)){
						HX_STACK_LINE(1471)
						break;
					}
					HX_STACK_LINE(1471)
					int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1471)
					int yy = tmp36;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1473)
					int tmp37 = this->width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1473)
					int tmp38 = yy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1473)
					int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1473)
					width_yy = tmp39;
					HX_STACK_LINE(1475)
					{
						HX_STACK_LINE(1475)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1475)
						int tmp40 = this->width;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1475)
						int _g2 = tmp40;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1475)
						while((true)){
							HX_STACK_LINE(1475)
							bool tmp41 = (_g3 < _g2);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1475)
							bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1475)
							if ((tmp42)){
								HX_STACK_LINE(1475)
								break;
							}
							HX_STACK_LINE(1475)
							int tmp43 = (_g3)++;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1475)
							int xx = tmp43;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1477)
							int tmp44 = (width_yy + xx);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1477)
							int tmp45 = (tmp44 * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1477)
							position = tmp45;
							HX_STACK_LINE(1478)
							int tmp46 = position;		HX_STACK_VAR(tmp46,"tmp46");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1478,0xdd12d5b9)
								{
									HX_STACK_LINE(1478)
									::lime::utils::ByteArray tmp47 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1478)
									int tmp48 = tmp47->readInt();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1478)
									return tmp48;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1478)
							int tmp47 = ::openfl::Memory_obj::_setPositionTemporarily(tmp46, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1478)
							pixelValue = tmp47;
							HX_STACK_LINE(1479)
							int tmp48 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1479)
							pixelMask = tmp48;
							HX_STACK_LINE(1481)
							int tmp49 = pixelMask;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1481)
							int tmp50 = thresholdMask;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1481)
							int tmp51 = ::openfl::display::BitmapData_obj::__ucompare(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1481)
							i = tmp51;
							HX_STACK_LINE(1482)
							test = false;
							HX_STACK_LINE(1484)
							bool tmp52 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1484)
							if ((tmp52)){
								HX_STACK_LINE(1484)
								bool tmp53 = (i == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1484)
								test = tmp53;
							}
							else{
								HX_STACK_LINE(1485)
								bool tmp53 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1485)
								if ((tmp53)){
									HX_STACK_LINE(1485)
									bool tmp54 = (i == (int)-1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1485)
									test = tmp54;
								}
								else{
									HX_STACK_LINE(1486)
									bool tmp54 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1486)
									if ((tmp54)){
										HX_STACK_LINE(1486)
										bool tmp55 = (i == (int)1);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1486)
										test = tmp55;
									}
									else{
										HX_STACK_LINE(1487)
										bool tmp55 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1487)
										if ((tmp55)){
											HX_STACK_LINE(1487)
											bool tmp56 = (i != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1487)
											test = tmp56;
										}
										else{
											HX_STACK_LINE(1488)
											bool tmp56 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1488)
											if ((tmp56)){
												HX_STACK_LINE(1488)
												bool tmp57 = (i == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1488)
												bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1488)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1488)
												if ((tmp58)){
													HX_STACK_LINE(1488)
													tmp59 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1488)
													tmp59 = true;
												}
												HX_STACK_LINE(1488)
												test = tmp59;
											}
											else{
												HX_STACK_LINE(1489)
												bool tmp57 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1489)
												if ((tmp57)){
													HX_STACK_LINE(1489)
													bool tmp58 = (i == (int)0);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(1489)
													bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(1489)
													bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(1489)
													if ((tmp59)){
														HX_STACK_LINE(1489)
														tmp60 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1489)
														tmp60 = true;
													}
													HX_STACK_LINE(1489)
													test = tmp60;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1491)
							bool tmp53 = test;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1491)
							if ((tmp53)){
								HX_STACK_LINE(1493)
								{
									HX_STACK_LINE(1493)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1493)
									int tmp54 = position;		HX_STACK_VAR(tmp54,"tmp54");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1493,0xdd12d5b9)
										{
											HX_STACK_LINE(1493)
											::lime::utils::ByteArray tmp55 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(1493)
											int tmp56 = v;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1493)
											tmp55->writeInt(tmp56);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1493)
									::openfl::Memory_obj::_setPositionTemporarily(tmp54, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1494)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1502)
			memory->position = (int)0;
			HX_STACK_LINE(1503)
			::openfl::geom::Rectangle tmp33 = this->rect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1503)
			::lime::utils::ByteArray tmp34 = memory;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1503)
			this->setPixels(tmp33,tmp34);
			HX_STACK_LINE(1504)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1505)
			int tmp35 = hits;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1505)
			return tmp35;
		}
		else{
			HX_STACK_LINE(1509)
			::openfl::geom::Rectangle tmp24 = sourceRect->clone();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1509)
			sourceRect = tmp24;
			HX_STACK_LINE(1511)
			Float tmp25 = sourceRect->get_right();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1511)
			int tmp26 = sourceBitmapData->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1511)
			bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1511)
			if ((tmp27)){
				HX_STACK_LINE(1513)
				Float tmp28 = (sourceBitmapData->width - sourceRect->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1513)
				sourceRect->width = tmp28;
			}
			HX_STACK_LINE(1517)
			Float tmp28 = sourceRect->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1517)
			int tmp29 = sourceBitmapData->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1517)
			bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1517)
			if ((tmp30)){
				HX_STACK_LINE(1519)
				Float tmp31 = (sourceBitmapData->height - sourceRect->y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1519)
				sourceRect->height = tmp31;
			}
			HX_STACK_LINE(1523)
			::openfl::geom::Rectangle tmp31 = sourceRect->clone();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1523)
			::openfl::geom::Rectangle targetRect = tmp31;		HX_STACK_VAR(targetRect,"targetRect");
			HX_STACK_LINE(1524)
			::openfl::geom::Point tmp32 = destPoint;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1524)
			targetRect->offsetPoint(tmp32);
			HX_STACK_LINE(1526)
			Float tmp33 = targetRect->get_right();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1526)
			int tmp34 = this->width;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1526)
			bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1526)
			if ((tmp35)){
				HX_STACK_LINE(1528)
				int tmp36 = this->width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1528)
				Float tmp37 = targetRect->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1528)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1528)
				targetRect->width = tmp38;
			}
			HX_STACK_LINE(1532)
			Float tmp36 = targetRect->get_bottom();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1532)
			int tmp37 = this->height;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1532)
			bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1532)
			if ((tmp38)){
				HX_STACK_LINE(1534)
				int tmp39 = this->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1534)
				Float tmp40 = targetRect->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1534)
				Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1534)
				targetRect->height = tmp41;
			}
			HX_STACK_LINE(1538)
			Float tmp39 = sourceRect->width;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1538)
			Float tmp40 = targetRect->width;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1538)
			Float tmp41 = ::Math_obj::min(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1538)
			sourceRect->width = tmp41;
			HX_STACK_LINE(1539)
			Float tmp42 = sourceRect->height;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1539)
			Float tmp43 = targetRect->height;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1539)
			Float tmp44 = ::Math_obj::min(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1539)
			sourceRect->height = tmp44;
			HX_STACK_LINE(1541)
			Float tmp45 = sourceRect->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1541)
			int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1541)
			int sx = tmp46;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1542)
			Float tmp47 = sourceRect->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1542)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1542)
			int sy = tmp48;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1543)
			Float tmp49 = sourceRect->width;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1543)
			int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1543)
			int sw = tmp50;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1544)
			Float tmp51 = sourceRect->height;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1544)
			int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1544)
			int sh = tmp52;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1546)
			Float tmp53 = destPoint->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1546)
			int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1546)
			int dx = tmp54;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1547)
			Float tmp55 = destPoint->y;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1547)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1547)
			int dy = tmp56;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1549)
			int tmp57 = this->width;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1549)
			int tmp58 = sw;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1549)
			int tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1549)
			int tmp60 = dx;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1549)
			int tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1549)
			int bw = tmp61;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1550)
			int tmp62 = this->height;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1550)
			int tmp63 = sh;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1550)
			int tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1550)
			int tmp65 = dy;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1550)
			int tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1550)
			int bh = tmp66;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1552)
			bool tmp67 = (bw < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1552)
			int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1552)
			if ((tmp67)){
				HX_STACK_LINE(1552)
				int tmp69 = sw;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1552)
				int tmp70 = this->width;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1552)
				int tmp71 = sw;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1552)
				int tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1552)
				int tmp73 = dx;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1552)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1552)
				tmp68 = (tmp69 + tmp74);
			}
			else{
				HX_STACK_LINE(1552)
				tmp68 = sw;
			}
			HX_STACK_LINE(1552)
			int dw = tmp68;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1553)
			bool tmp69 = (bw < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1553)
			int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1553)
			if ((tmp69)){
				HX_STACK_LINE(1553)
				int tmp71 = sh;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1553)
				int tmp72 = this->height;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1553)
				int tmp73 = sh;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1553)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1553)
				int tmp75 = dy;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1553)
				int tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1553)
				tmp70 = (tmp71 + tmp76);
			}
			else{
				HX_STACK_LINE(1553)
				tmp70 = sh;
			}
			HX_STACK_LINE(1553)
			int dh = tmp70;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1555)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1557)
			int tmp71 = (sw * sh);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1557)
			int tmp72 = (tmp71 * (int)4);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1557)
			int canvasMemory = tmp72;		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1558)
			int tmp73 = (sw * sh);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1558)
			int tmp74 = (tmp73 * (int)4);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1558)
			int sourceMemory = tmp74;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1559)
			int tmp75 = (canvasMemory + sourceMemory);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1559)
			int totalMemory = tmp75;		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1565)
			::lime::utils::ByteArray tmp76 = ::lime::utils::ByteArray_obj::__new(totalMemory);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1565)
			::lime::utils::ByteArray memory = tmp76;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1568)
			memory->position = (int)0;
			HX_STACK_LINE(1570)
			::openfl::geom::Rectangle tmp77 = sourceRect;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1570)
			::lime::utils::ByteArray tmp78 = sourceBitmapData->getPixels(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1570)
			::lime::utils::ByteArray pixels = tmp78;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1572)
			bool tmp79 = copySource;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1572)
			if ((tmp79)){
				HX_STACK_LINE(1574)
				::lime::utils::ByteArray tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1574)
				memory->writeBytes(tmp80,null(),null());
			}
			else{
				HX_STACK_LINE(1578)
				::openfl::geom::Rectangle tmp80 = targetRect;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1578)
				::lime::utils::ByteArray tmp81 = this->getPixels(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(1578)
				memory->writeBytes(tmp81,null(),null());
			}
			HX_STACK_LINE(1582)
			memory->position = canvasMemory;
			HX_STACK_LINE(1583)
			::lime::utils::ByteArray tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1583)
			memory->writeBytes(tmp80,null(),null());
			HX_STACK_LINE(1585)
			memory->position = (int)0;
			HX_STACK_LINE(1586)
			::lime::utils::ByteArray tmp81 = memory;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1586)
			::openfl::Memory_obj::select(tmp81);
			HX_STACK_LINE(1588)
			int tmp82 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1588)
			int thresholdMask = tmp82;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1590)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1590)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1590)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1590)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1590)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1592)
			{
				HX_STACK_LINE(1592)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1592)
				while((true)){
					HX_STACK_LINE(1592)
					bool tmp83 = (_g < dh);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1592)
					bool tmp84 = !(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1592)
					if ((tmp84)){
						HX_STACK_LINE(1592)
						break;
					}
					HX_STACK_LINE(1592)
					int tmp85 = (_g)++;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1592)
					int yy = tmp85;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1594)
					{
						HX_STACK_LINE(1594)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1594)
						while((true)){
							HX_STACK_LINE(1594)
							bool tmp86 = (_g1 < dw);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(1594)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(1594)
							if ((tmp87)){
								HX_STACK_LINE(1594)
								break;
							}
							HX_STACK_LINE(1594)
							int tmp88 = (_g1)++;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(1594)
							int xx = tmp88;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1596)
							int tmp89 = (xx + sx);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(1596)
							int tmp90 = (yy + sy);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(1596)
							int tmp91 = sw;		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(1596)
							int tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(1596)
							int tmp93 = (tmp89 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(1596)
							int tmp94 = (tmp93 * (int)4);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(1596)
							position = tmp94;
							HX_STACK_LINE(1597)
							int tmp95 = (canvasMemory + position);		HX_STACK_VAR(tmp95,"tmp95");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1597,0xdd12d5b9)
								{
									HX_STACK_LINE(1597)
									::lime::utils::ByteArray tmp96 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1597)
									int tmp97 = tmp96->readInt();		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1597)
									return tmp97;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1597)
							int tmp96 = ::openfl::Memory_obj::_setPositionTemporarily(tmp95, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(1597)
							pixelValue = tmp96;
							HX_STACK_LINE(1598)
							int tmp97 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(1598)
							pixelMask = tmp97;
							HX_STACK_LINE(1600)
							int tmp98 = pixelMask;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(1600)
							int tmp99 = thresholdMask;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(1600)
							int tmp100 = ::openfl::display::BitmapData_obj::__ucompare(tmp98,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(1600)
							i = tmp100;
							HX_STACK_LINE(1601)
							test = false;
							HX_STACK_LINE(1603)
							bool tmp101 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(1603)
							if ((tmp101)){
								HX_STACK_LINE(1603)
								bool tmp102 = (i == (int)0);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1603)
								test = tmp102;
							}
							else{
								HX_STACK_LINE(1604)
								bool tmp102 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1604)
								if ((tmp102)){
									HX_STACK_LINE(1604)
									bool tmp103 = (i == (int)-1);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1604)
									test = tmp103;
								}
								else{
									HX_STACK_LINE(1605)
									bool tmp103 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1605)
									if ((tmp103)){
										HX_STACK_LINE(1605)
										bool tmp104 = (i == (int)1);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1605)
										test = tmp104;
									}
									else{
										HX_STACK_LINE(1606)
										bool tmp104 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1606)
										if ((tmp104)){
											HX_STACK_LINE(1606)
											bool tmp105 = (i != (int)0);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1606)
											test = tmp105;
										}
										else{
											HX_STACK_LINE(1607)
											bool tmp105 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1607)
											if ((tmp105)){
												HX_STACK_LINE(1607)
												bool tmp106 = (i == (int)0);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1607)
												bool tmp107 = !(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1607)
												bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1607)
												if ((tmp107)){
													HX_STACK_LINE(1607)
													tmp108 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1607)
													tmp108 = true;
												}
												HX_STACK_LINE(1607)
												test = tmp108;
											}
											else{
												HX_STACK_LINE(1608)
												bool tmp106 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1608)
												if ((tmp106)){
													HX_STACK_LINE(1608)
													bool tmp107 = (i == (int)0);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(1608)
													bool tmp108 = !(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(1608)
													bool tmp109;		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(1608)
													if ((tmp108)){
														HX_STACK_LINE(1608)
														tmp109 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1608)
														tmp109 = true;
													}
													HX_STACK_LINE(1608)
													test = tmp109;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1610)
							bool tmp102 = test;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(1610)
							if ((tmp102)){
								HX_STACK_LINE(1612)
								{
									HX_STACK_LINE(1612)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1612)
									int tmp103 = position;		HX_STACK_VAR(tmp103,"tmp103");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1612,0xdd12d5b9)
										{
											HX_STACK_LINE(1612)
											::lime::utils::ByteArray tmp104 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(1612)
											int tmp105 = v;		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1612)
											tmp104->writeInt(tmp105);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1612)
									::openfl::Memory_obj::_setPositionTemporarily(tmp103, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1613)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1621)
			memory->position = (int)0;
			HX_STACK_LINE(1622)
			::openfl::geom::Rectangle tmp83 = targetRect;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1622)
			::lime::utils::ByteArray tmp84 = memory;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1622)
			this->setPixels(tmp83,tmp84);
			HX_STACK_LINE(1623)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1624)
			int tmp85 = hits;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1624)
			return tmp85;
		}
		HX_STACK_LINE(1453)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1643,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1650,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1652)
		::openfl::display::TextureUvs tmp = this->__uvData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1652)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1652)
		if ((tmp1)){
			HX_STACK_LINE(1652)
			::openfl::display::TextureUvs tmp2 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1652)
			this->__uvData = tmp2;
		}
		HX_STACK_LINE(1654)
		::openfl::display::TextureUvs tmp2 = this->__uvData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1654)
		tmp2->x0 = (int)0;
		HX_STACK_LINE(1655)
		::openfl::display::TextureUvs tmp3 = this->__uvData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1655)
		tmp3->y0 = (int)0;
		HX_STACK_LINE(1656)
		::openfl::display::TextureUvs tmp4 = this->__uvData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1656)
		tmp4->x1 = (int)1;
		HX_STACK_LINE(1657)
		::openfl::display::TextureUvs tmp5 = this->__uvData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1657)
		tmp5->y1 = (int)0;
		HX_STACK_LINE(1658)
		::openfl::display::TextureUvs tmp6 = this->__uvData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1658)
		tmp6->x2 = (int)1;
		HX_STACK_LINE(1659)
		::openfl::display::TextureUvs tmp7 = this->__uvData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1659)
		tmp7->y2 = (int)1;
		HX_STACK_LINE(1660)
		::openfl::display::TextureUvs tmp8 = this->__uvData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1660)
		tmp8->x3 = (int)0;
		HX_STACK_LINE(1661)
		::openfl::display::TextureUvs tmp9 = this->__uvData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1661)
		tmp9->y3 = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,int width,int height,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_drawSelf,hx::Null< bool >  __o_clearBuffer,hx::Null< bool >  __o_readPixels){
bool smoothing = __o_smoothing.Default(false);
bool drawSelf = __o_drawSelf.Default(false);
bool clearBuffer = __o_clearBuffer.Default(false);
bool readPixels = __o_readPixels.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",1666,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
{
		HX_STACK_LINE(1668)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1668)
		::openfl::_internal::renderer::AbstractRenderer tmp1 = tmp->stage->__renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1668)
		::openfl::_internal::renderer::AbstractRenderer renderer = tmp1;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(1669)
		bool tmp2 = (renderer == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1669)
		if ((tmp2)){
			HX_STACK_LINE(1669)
			return null();
		}
		HX_STACK_LINE(1671)
		::openfl::_internal::renderer::RenderSession renderSession1 = renderer->renderSession;		HX_STACK_VAR(renderSession1,"renderSession1");
		HX_STACK_LINE(1672)
		::lime::graphics::GLRenderContext gl = renderSession1->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1673)
		bool tmp3 = (gl == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1673)
		if ((tmp3)){
			HX_STACK_LINE(1673)
			return null();
		}
		HX_STACK_LINE(1675)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession1->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(1676)
		bool tmp4 = renderSession1->renderer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1676)
		bool renderTransparent = tmp4;		HX_STACK_VAR(renderTransparent,"renderTransparent");
		HX_STACK_LINE(1678)
		bool tmp5 = (clipRect == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1678)
		::openfl::geom::Rectangle tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1678)
		if ((tmp5)){
			HX_STACK_LINE(1678)
			tmp6 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
		}
		else{
			HX_STACK_LINE(1678)
			tmp6 = clipRect->clone();
		}
		HX_STACK_LINE(1678)
		::openfl::geom::Rectangle tmpRect = tmp6;		HX_STACK_VAR(tmpRect,"tmpRect");
		HX_STACK_LINE(1680)
		bool tmp7 = this->transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1680)
		renderSession1->renderer->transparent = tmp7;
		HX_STACK_LINE(1682)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp8 = this->__framebuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1682)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1682)
		if ((tmp9)){
			HX_STACK_LINE(1684)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp10 = ::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__new(gl,width,height,smoothing);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1684)
			this->__framebuffer = tmp10;
		}
		HX_STACK_LINE(1688)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp10 = this->__framebuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1688)
		int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1688)
		int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1688)
		tmp10->resize(tmp11,tmp12);
		HX_STACK_LINE(1689)
		{
			HX_STACK_LINE(1689)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp13 = this->__framebuffer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1689)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp13->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1689)
			{
				HX_STACK_LINE(1689)
				int tmp14 = gl->FRAMEBUFFER;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1689)
				bool tmp15 = (framebuffer == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1689)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1689)
				if ((tmp15)){
					HX_STACK_LINE(1689)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(1689)
					tmp16 = framebuffer->id;
				}
				HX_STACK_LINE(1689)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(tmp14,tmp16);
			}
		}
		HX_STACK_LINE(1691)
		int tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1691)
		int tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1691)
		renderer->setViewport((int)0,(int)0,tmp13,tmp14);
		HX_STACK_LINE(1693)
		::openfl::_internal::renderer::RenderSession tmp15 = renderSession1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1693)
		bool tmp16 = drawSelf;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1693)
		::openfl::geom::Rectangle tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1693)
		if ((tmp16)){
			HX_STACK_LINE(1693)
			tmp17 = null();
		}
		else{
			HX_STACK_LINE(1693)
			tmp17 = tmpRect;
		}
		HX_STACK_LINE(1693)
		spritebatch->begin(tmp15,tmp17);
		HX_STACK_LINE(1696)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
		HX_STACK_LINE(1697)
		renderSession1->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(1699)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp18 = renderSession1->shaderManager->defaultShader;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1699)
		renderSession1->shaderManager->setShader(tmp18,true);
		HX_STACK_LINE(1701)
		bool tmp19 = clearBuffer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1701)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1701)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1701)
		if ((tmp20)){
			HX_STACK_LINE(1701)
			tmp21 = drawSelf;
		}
		else{
			HX_STACK_LINE(1701)
			tmp21 = true;
		}
		HX_STACK_LINE(1701)
		if ((tmp21)){
			HX_STACK_LINE(1703)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp22 = this->__framebuffer;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1703)
			tmp22->clear();
		}
		HX_STACK_LINE(1707)
		bool tmp22 = drawSelf;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1707)
		if ((tmp22)){
			HX_STACK_LINE(1709)
			::openfl::geom::Matrix tmp23 = this->__worldTransform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1709)
			tmp23->identity();
			HX_STACK_LINE(1710)
			{
				HX_STACK_LINE(1710)
				::openfl::geom::Matrix tmp24 = this->__worldTransform;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1710)
				::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1710)
				Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(1710)
				Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(1710)
				m->tx = (int)0;
				HX_STACK_LINE(1710)
				m->ty = (int)0;
				HX_STACK_LINE(1710)
				m->scale((int)1,(int)-1);
				HX_STACK_LINE(1710)
				int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1710)
				m->translate((int)0,tmp25);
				HX_STACK_LINE(1710)
				hx::AddEq(m->tx,tx);
				HX_STACK_LINE(1710)
				hx::SubEq(m->ty,ty);
			}
			HX_STACK_LINE(1711)
			::openfl::_internal::renderer::RenderSession tmp24 = renderSession1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1711)
			this->__renderGL(tmp24);
			HX_STACK_LINE(1712)
			spritebatch->stop();
			HX_STACK_LINE(1713)
			{
				HX_STACK_LINE(1713)
				::lime::graphics::opengl::GLTexture tmp25 = this->__texture;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1713)
				::lime::graphics::opengl::GLTexture texture = tmp25;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(1713)
				{
					HX_STACK_LINE(1713)
					Dynamic tmp26 = texture->id;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1713)
					::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(tmp26);
					HX_STACK_LINE(1713)
					texture->invalidate();
				}
			}
			HX_STACK_LINE(1714)
			this->__texture = null();
			HX_STACK_LINE(1715)
			::openfl::geom::Rectangle tmp25 = tmpRect;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1715)
			spritebatch->start(tmp25);
		}
		HX_STACK_LINE(1719)
		::openfl::geom::ColorTransform ctCache = source->__Field(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"), hx::paccDynamic );		HX_STACK_VAR(ctCache,"ctCache");
		HX_STACK_LINE(1720)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(1721)
		::openfl::display::BlendMode blendModeCache = source->__Field(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"), hx::paccDynamic );		HX_STACK_VAR(blendModeCache,"blendModeCache");
		HX_STACK_LINE(1722)
		bool cached = source->__Field(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"), hx::paccDynamic );		HX_STACK_VAR(cached,"cached");
		HX_STACK_LINE(1724)
		bool tmp23 = (matrix != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1724)
		::openfl::geom::Matrix tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1724)
		if ((tmp23)){
			HX_STACK_LINE(1724)
			tmp24 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(1724)
			tmp24 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1724)
		::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1726)
		{
			HX_STACK_LINE(1726)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(1726)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(1726)
			m->tx = (int)0;
			HX_STACK_LINE(1726)
			m->ty = (int)0;
			HX_STACK_LINE(1726)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(1726)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1726)
			m->translate((int)0,tmp25);
			HX_STACK_LINE(1726)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(1726)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(1728)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = m;
		HX_STACK_LINE(1729)
		bool tmp25 = (colorTransform != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1729)
		::openfl::geom::ColorTransform tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1729)
		if ((tmp25)){
			HX_STACK_LINE(1729)
			tmp26 = colorTransform;
		}
		else{
			HX_STACK_LINE(1729)
			tmp26 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1729)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = tmp26;
		HX_STACK_LINE(1730)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendMode;
		HX_STACK_LINE(1731)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = false;
		HX_STACK_LINE(1733)
		source->__updateChildren(false);
		HX_STACK_LINE(1735)
		::openfl::_internal::renderer::RenderSession tmp27 = renderSession1;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1735)
		source->__renderGL(tmp27);
		HX_STACK_LINE(1737)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = ctCache;
		HX_STACK_LINE(1738)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = matrixCache;
		HX_STACK_LINE(1739)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendModeCache;
		HX_STACK_LINE(1740)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = cached;
		HX_STACK_LINE(1742)
		source->__updateChildren(true);
		HX_STACK_LINE(1744)
		spritebatch->finish();
		HX_STACK_LINE(1746)
		bool tmp28 = readPixels;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1746)
		if ((tmp28)){
			HX_STACK_LINE(1749)
			::lime::graphics::Image tmp29 = this->__image;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1749)
			int tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1749)
			int tmp31 = width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1749)
			bool tmp32 = (tmp30 != tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1749)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1749)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1749)
			if ((tmp33)){
				HX_STACK_LINE(1749)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1749)
				::lime::graphics::Image tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1749)
				int tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1749)
				int tmp38 = height;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1749)
				tmp34 = (tmp37 != tmp38);
			}
			else{
				HX_STACK_LINE(1749)
				tmp34 = true;
			}
			HX_STACK_LINE(1749)
			if ((tmp34)){
				HX_STACK_LINE(1751)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1751)
				int tmp36 = width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1751)
				int tmp37 = height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1751)
				tmp35->resize(tmp36,tmp37);
			}
			HX_STACK_LINE(1755)
			{
				HX_STACK_LINE(1755)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1755)
				::lime::utils::ArrayBufferView tmp36 = tmp35->buffer->data;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1755)
				::lime::utils::ArrayBufferView pixels = tmp36;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(1755)
				{
					HX_STACK_LINE(1755)
					int tmp37 = width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1755)
					int tmp38 = height;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1755)
					int tmp39 = gl->RGBA;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1755)
					int tmp40 = gl->UNSIGNED_BYTE;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1755)
					bool tmp41 = (pixels == null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1755)
					::haxe::io::Bytes tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1755)
					if ((tmp41)){
						HX_STACK_LINE(1755)
						tmp42 = null();
					}
					else{
						HX_STACK_LINE(1755)
						tmp42 = pixels->buffer;
					}
					HX_STACK_LINE(1755)
					bool tmp43 = (pixels == null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1755)
					Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1755)
					if ((tmp43)){
						HX_STACK_LINE(1755)
						tmp44 = null();
					}
					else{
						HX_STACK_LINE(1755)
						tmp44 = pixels->byteOffset;
					}
					HX_STACK_LINE(1755)
					::lime::graphics::opengl::GL_obj::lime_gl_read_pixels((int)0,(int)0,tmp37,tmp38,tmp39,tmp40,tmp42,tmp44);
				}
			}
		}
		HX_STACK_LINE(1759)
		{
			HX_STACK_LINE(1759)
			::lime::graphics::opengl::GLFramebuffer framebuffer = renderSession1->defaultFramebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1759)
			{
				HX_STACK_LINE(1759)
				int tmp29 = gl->FRAMEBUFFER;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1759)
				bool tmp30 = (framebuffer == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1759)
				int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1759)
				if ((tmp30)){
					HX_STACK_LINE(1759)
					tmp31 = (int)0;
				}
				else{
					HX_STACK_LINE(1759)
					tmp31 = framebuffer->id;
				}
				HX_STACK_LINE(1759)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(tmp29,tmp31);
			}
		}
		HX_STACK_LINE(1761)
		int tmp29 = renderSession1->renderer->width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1761)
		int tmp30 = renderSession1->renderer->height;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1761)
		renderer->setViewport((int)0,(int)0,tmp29,tmp30);
		HX_STACK_LINE(1763)
		renderSession1->renderer->transparent = renderTransparent;
		HX_STACK_LINE(1765)
		{
			HX_STACK_LINE(1765)
			bool tmp31 = renderSession1->renderer->transparent;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1765)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,tmp31);
		}
		HX_STACK_LINE(1767)
		this->__usingFramebuffer = false;
		HX_STACK_LINE(1769)
		::lime::graphics::Image tmp31 = this->__image;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1769)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1769)
		if ((tmp32)){
			HX_STACK_LINE(1771)
			::lime::graphics::Image tmp33 = this->__image;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1771)
			tmp33->dirty = false;
			HX_STACK_LINE(1772)
			::lime::graphics::Image tmp34 = this->__image;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1772)
			tmp34->set_premultiplied(true);
		}
		HX_STACK_LINE(1776)
		this->__createUVs();
		HX_STACK_LINE(1777)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__flipMatrix( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__flipMatrix",0x69774899,"openfl.display.BitmapData.__flipMatrix","openfl/display/BitmapData.hx",1782,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(1784)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(1785)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(1786)
		m->tx = (int)0;
		HX_STACK_LINE(1787)
		m->ty = (int)0;
		HX_STACK_LINE(1788)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(1789)
		int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1789)
		m->translate((int)0,tmp);
		HX_STACK_LINE(1790)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(1791)
		hx::SubEq(m->ty,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipMatrix,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1796,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1796)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1798)
		::String tmp = base64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1798)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1798,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1800)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1800)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1802)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1802)
				if ((tmp3)){
					HX_STACK_LINE(1804)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1804)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1798)
		::lime::graphics::Image_obj::fromBase64(tmp,tmp1, Dynamic(new _Function_1_1(_g,onload)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1813,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1813)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1815)
		::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload,::lime::utils::ByteArray,rawAlpha)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1815,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1817)
				::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1817)
				_g->__fromImage(tmp1);
				HX_STACK_LINE(1819)
				bool tmp2 = (rawAlpha != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1819)
				if ((tmp2)){
					HX_STACK_LINE(1826)
					::lime::graphics::ImageBuffer tmp3 = _g->__image->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1826)
					::lime::utils::ArrayBufferView data = tmp3->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1828)
					{
						HX_STACK_LINE(1828)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1828)
						int _g1 = rawAlpha->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1828)
						while((true)){
							HX_STACK_LINE(1828)
							bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1828)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1828)
							if ((tmp5)){
								HX_STACK_LINE(1828)
								break;
							}
							HX_STACK_LINE(1828)
							int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1828)
							int i = tmp6;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1830)
							{
								HX_STACK_LINE(1830)
								bool tmp7 = (rawAlpha->position < rawAlpha->length);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1830)
								int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1830)
								if ((tmp7)){
									HX_STACK_LINE(1830)
									int tmp9 = (rawAlpha->position)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1830)
									int pos = tmp9;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(1830)
									tmp8 = rawAlpha->b->__get(pos);
								}
								else{
									HX_STACK_LINE(1830)
									tmp8 = rawAlpha->ThrowEOFi();
								}
								HX_STACK_LINE(1830)
								int val = tmp8;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1830)
								{
									HX_STACK_LINE(1830)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(1830)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(1834)
					_g->__image->dirty = true;
				}
				HX_STACK_LINE(1838)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1838)
				if ((tmp3)){
					HX_STACK_LINE(1840)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1840)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1815)
		::lime::graphics::Image_obj::fromBytes(tmp, Dynamic(new _Function_1_1(_g,onload,rawAlpha)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1849,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1849)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1851)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1861)
		Dynamic tmp1 = onerror;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1851,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1853)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1853)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1855)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1855)
				if ((tmp3)){
					HX_STACK_LINE(1857)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1857)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1851)
		::lime::graphics::Image_obj::fromFile(tmp, Dynamic(new _Function_1_1(_g,onload)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1866,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1868)
		this->__image = image;
		HX_STACK_LINE(1870)
		this->width = image->width;
		HX_STACK_LINE(1871)
		this->height = image->height;
		HX_STACK_LINE(1872)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1872)
		this->rect = tmp;
		HX_STACK_LINE(1875)
		image->set_format((int)2);
		HX_STACK_LINE(1876)
		image->set_premultiplied(true);
		HX_STACK_LINE(1879)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",1884,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1886)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1886)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1886)
		if ((tmp1)){
			HX_STACK_LINE(1886)
			return null();
		}
		HX_STACK_LINE(1888)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(1890)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1890)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1890)
		if ((tmp3)){
			HX_STACK_LINE(1890)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1890)
			this->__worldTransform = tmp4;
		}
		HX_STACK_LINE(1893)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1893)
		::openfl::geom::Matrix transform = tmp4;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(1895)
		bool tmp5 = renderSession->roundPixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1895)
		if ((tmp5)){
			HX_STACK_LINE(1897)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1897)
			::lime::math::Matrix3 matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(1898)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1898)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1898)
			matrix->tx = tmp8;
			HX_STACK_LINE(1899)
			Float tmp9 = matrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1899)
			int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1899)
			matrix->ty = tmp10;
			HX_STACK_LINE(1900)
			::lime::math::Matrix3 tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1900)
			cairo->set_matrix(tmp11);
		}
		else{
			HX_STACK_LINE(1905)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1905)
			cairo->set_matrix(tmp6);
		}
		HX_STACK_LINE(1910)
		Dynamic tmp6 = this->getSurface();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1910)
		Dynamic surface = tmp6;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(1912)
		bool tmp7 = (surface != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1912)
		if ((tmp7)){
			HX_STACK_LINE(1914)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1914)
			Dynamic tmp9 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1914)
			Dynamic pattern = tmp9;		HX_STACK_VAR(pattern,"pattern");
			HX_STACK_LINE(1916)
			int tmp10 = cairo->get_antialias();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1916)
			bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1916)
			if ((tmp11)){
				HX_STACK_LINE(1918)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1918)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)3);
			}
			else{
				HX_STACK_LINE(1922)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1922)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)1);
			}
			HX_STACK_LINE(1926)
			Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1926)
			cairo->set_source(tmp12);
			HX_STACK_LINE(1927)
			cairo->paint();
			HX_STACK_LINE(1928)
			Dynamic tmp13 = pattern;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1928)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",1935,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1942,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",1972,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1979,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1981)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1981)
		::openfl::geom::ColorTransform tmp1 = this->__worldColorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1981)
		::openfl::geom::ColorTransform tmp2 = this->__worldColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1981)
		Float tmp3 = tmp2->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1981)
		::openfl::display::BlendMode tmp4 = this->__blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1981)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,tmp,tmp1,tmp3,tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1986,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",2049,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",2056,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",711,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(713)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(713)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(714)
	{
		HX_STACK_LINE(714)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(714)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(714)
		::String tmp1 = base64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",714,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(714)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(714)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(714)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(714)
				if ((tmp4)){
					HX_STACK_LINE(714)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(714)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(714)
		::lime::graphics::Image_obj::fromBase64(tmp1,tmp2, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(715)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",720,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(722)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(722)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(723)
	{
		HX_STACK_LINE(723)
		::lime::utils::ByteArray rawAlpha1 = rawAlpha;		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(723)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(723)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(723)
		::lime::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::lime::utils::ByteArray,rawAlpha1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",723,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(723)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(723)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(723)
				bool tmp3 = (rawAlpha1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(723)
				if ((tmp3)){
					HX_STACK_LINE(723)
					::lime::graphics::ImageBuffer tmp4 = _g->__image->buffer;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(723)
					::lime::utils::ArrayBufferView data = tmp4->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(723)
					{
						HX_STACK_LINE(723)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(723)
						int _g1 = rawAlpha1->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(723)
						while((true)){
							HX_STACK_LINE(723)
							bool tmp5 = (_g2 < _g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(723)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(723)
							if ((tmp6)){
								HX_STACK_LINE(723)
								break;
							}
							HX_STACK_LINE(723)
							int tmp7 = (_g2)++;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(723)
							int i = tmp7;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(723)
							{
								HX_STACK_LINE(723)
								bool tmp8 = (rawAlpha1->position < rawAlpha1->length);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(723)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(723)
								if ((tmp8)){
									HX_STACK_LINE(723)
									int tmp10 = (rawAlpha1->position)++;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(723)
									int pos = tmp10;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(723)
									tmp9 = rawAlpha1->b->__get(pos);
								}
								else{
									HX_STACK_LINE(723)
									tmp9 = rawAlpha1->ThrowEOFi();
								}
								HX_STACK_LINE(723)
								int val = tmp9;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(723)
								{
									HX_STACK_LINE(723)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(723)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(723)
					_g->__image->dirty = true;
				}
				HX_STACK_LINE(723)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(723)
				if ((tmp4)){
					HX_STACK_LINE(723)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(723)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(723)
		::lime::graphics::Image_obj::fromBytes(tmp1, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(724)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(724)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",741,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(743)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(743)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(744)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(744)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(744)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(744)
	bitmapData->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(745)
	::openfl::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(745)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",750,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(752)
		::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(753)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(753)
		bitmapData->__fromImage(tmp1);
		HX_STACK_LINE(754)
		bool tmp2 = transparent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(754)
		bitmapData->__image->set_transparent(tmp2);
		HX_STACK_LINE(755)
		::openfl::display::BitmapData tmp3 = bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",1995,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1997)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1998)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2000)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2000)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2000)
	tmp1 = tmp3;
	HX_STACK_LINE(2001)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2001)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2001)
	tmp2 = tmp5;
	HX_STACK_LINE(2003)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2003)
	if ((tmp6)){
		HX_STACK_LINE(2005)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2005)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2005)
		if ((tmp7)){
			HX_STACK_LINE(2005)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(2005)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(2005)
		return tmp8;
	}
	else{
		HX_STACK_LINE(2009)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2009)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2009)
		tmp1 = tmp8;
		HX_STACK_LINE(2010)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2010)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2010)
		tmp2 = tmp10;
		HX_STACK_LINE(2012)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2012)
		if ((tmp11)){
			HX_STACK_LINE(2014)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2014)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2014)
			if ((tmp12)){
				HX_STACK_LINE(2014)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(2014)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(2014)
			return tmp13;
		}
		else{
			HX_STACK_LINE(2018)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2018)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2018)
			tmp1 = tmp13;
			HX_STACK_LINE(2019)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2019)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2019)
			tmp2 = tmp15;
			HX_STACK_LINE(2021)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2021)
			if ((tmp16)){
				HX_STACK_LINE(2023)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2023)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2023)
				if ((tmp17)){
					HX_STACK_LINE(2023)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(2023)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(2023)
				return tmp18;
			}
			else{
				HX_STACK_LINE(2027)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2027)
				tmp1 = tmp17;
				HX_STACK_LINE(2028)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2028)
				tmp2 = tmp18;
				HX_STACK_LINE(2030)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2030)
				if ((tmp19)){
					HX_STACK_LINE(2032)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2032)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2032)
					if ((tmp20)){
						HX_STACK_LINE(2032)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(2032)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(2032)
					return tmp21;
				}
				else{
					HX_STACK_LINE(2036)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(2003)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
	HX_VISIT_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__flipMatrix") ) { return __flipMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { return __usingFramebuffer; }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { __usingFramebuffer=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"));
	outFields->push(HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"));
	outFields->push(HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"));
	outFields->push(HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__image),HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingFramebuffer),HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"),
	HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"),
	HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"),
	HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__createUVs","\x56","\x32","\x13","\x78"),
	HX_HCSTRING("__drawGL","\x49","\xde","\x05","\x88"),
	HX_HCSTRING("__flipMatrix","\xee","\xf7","\x88","\x6b"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

} // end namespace openfl
} // end namespace display
