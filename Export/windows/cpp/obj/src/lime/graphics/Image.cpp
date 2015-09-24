#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
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
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace lime{
namespace graphics{

Void Image_obj::__construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{
HX_STACK_FRAME("lime.graphics.Image","new",0x344ae603,"lime.graphics.Image.new","lime/graphics/Image.hx",81,0xc7b862ad)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(type,"type")
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
{
	HX_STACK_LINE(83)
	this->offsetX = offsetX;
	HX_STACK_LINE(84)
	this->offsetY = offsetY;
	HX_STACK_LINE(85)
	this->width = width;
	HX_STACK_LINE(86)
	this->height = height;
	HX_STACK_LINE(88)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(90)
		::lime::app::Application tmp1 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::lime::app::Application tmp4 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::lime::app::Application tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			::lime::graphics::Renderer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(90)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(90)
			tmp3 = false;
		}
		HX_STACK_LINE(90)
		if ((tmp3)){
			HX_STACK_LINE(92)
			::lime::graphics::ImageType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::lime::app::Application tmp5 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				::lime::graphics::RenderContext _g = tmp6->context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(92)
				switch( (int)(_g->__Index())){
					case (int)2: case (int)1: {
						HX_STACK_LINE(94)
						tmp4 = ::lime::graphics::ImageType_obj::CANVAS;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(95)
						tmp4 = ::lime::graphics::ImageType_obj::FLASH;
					}
					;break;
					default: {
						HX_STACK_LINE(96)
						tmp4 = ::lime::graphics::ImageType_obj::DATA;
					}
				}
			}
			HX_STACK_LINE(92)
			this->type = tmp4;
		}
		else{
			HX_STACK_LINE(102)
			this->type = ::lime::graphics::ImageType_obj::DATA;
		}
	}
	else{
		HX_STACK_LINE(108)
		this->type = type;
	}
	HX_STACK_LINE(112)
	bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(114)
		bool tmp2 = (width > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(114)
			tmp3 = (height > (int)0);
		}
		else{
			HX_STACK_LINE(114)
			tmp3 = false;
		}
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(116)
			::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(120)
					::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(null(),width,height,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(120)
					this->buffer = tmp5;
					HX_STACK_LINE(121)
					int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(121)
					int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(121)
					::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(hx::ObjectPtr<OBJ_>(this),tmp6,tmp7);
					HX_STACK_LINE(123)
					bool tmp8 = (color != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(123)
					if ((tmp8)){
						HX_STACK_LINE(125)
						::lime::math::Rectangle tmp9 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(125)
						Dynamic tmp10 = color;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(125)
						this->fillRect(tmp9,tmp10,null());
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(131)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(131)
					{
						HX_STACK_LINE(131)
						int tmp6 = (width * height);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(131)
						int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(131)
						Dynamic elements = tmp7;		HX_STACK_VAR(elements,"elements");
						HX_STACK_LINE(131)
						::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(131)
						bool tmp8 = (elements != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(131)
						if ((tmp8)){
							HX_STACK_LINE(131)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(131)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(131)
							bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(131)
							if ((tmp9)){
								HX_STACK_LINE(131)
								::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(131)
								{
									HX_STACK_LINE(131)
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(131)
									::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(131)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(131)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(131)
									_this->length = tmp12;
									HX_STACK_LINE(131)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(131)
									_this->byteLength = tmp13;
									HX_STACK_LINE(131)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(131)
									{
										HX_STACK_LINE(131)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(131)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(131)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(131)
										this2 = tmp16;
										HX_STACK_LINE(131)
										tmp14 = this2;
									}
									HX_STACK_LINE(131)
									_this->buffer = tmp14;
									HX_STACK_LINE(131)
									_this->copyFromArray(((Array< Float >)(null())),null());
									HX_STACK_LINE(131)
									tmp10 = _this;
								}
								HX_STACK_LINE(131)
								this1 = tmp10;
							}
							else{
								HX_STACK_LINE(131)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(131)
								if ((tmp10)){
									HX_STACK_LINE(131)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(131)
									{
										HX_STACK_LINE(131)
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(131)
										::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(131)
										::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(131)
										::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(131)
										int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(131)
										int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(131)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(131)
										int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(131)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(131)
										int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(131)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(131)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(131)
										int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(131)
										bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(131)
										if ((tmp19)){
											HX_STACK_LINE(131)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(131)
											int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(131)
											int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(131)
											::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(131)
											{
												HX_STACK_LINE(131)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(131)
												int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(131)
												::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(131)
												this2 = tmp23;
												HX_STACK_LINE(131)
												tmp21 = this2;
											}
											HX_STACK_LINE(131)
											_this->buffer = tmp21;
											HX_STACK_LINE(131)
											::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(131)
											int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(131)
											int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(131)
											_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
										}
										else{
											HX_STACK_LINE(131)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(131)
										int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(131)
										_this->byteLength = tmp20;
										HX_STACK_LINE(131)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(131)
										_this->length = srcLength;
										HX_STACK_LINE(131)
										tmp11 = _this;
									}
									HX_STACK_LINE(131)
									this1 = tmp11;
								}
								else{
									HX_STACK_LINE(131)
									bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(131)
									if ((tmp11)){
										HX_STACK_LINE(131)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(131)
										{
											HX_STACK_LINE(131)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(131)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(131)
											bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(131)
											if ((tmp14)){
												HX_STACK_LINE(131)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
											HX_STACK_LINE(131)
											int tmp15 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(131)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(131)
											if ((tmp16)){
												HX_STACK_LINE(131)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
											HX_STACK_LINE(131)
											int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(131)
											int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(131)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(131)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(131)
											bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(131)
											if ((tmp18)){
												HX_STACK_LINE(131)
												int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(131)
												newByteLength = tmp19;
												HX_STACK_LINE(131)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(131)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(131)
												if ((tmp21)){
													HX_STACK_LINE(131)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
												HX_STACK_LINE(131)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(131)
												if ((tmp22)){
													HX_STACK_LINE(131)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(131)
												int tmp19 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(131)
												newByteLength = tmp19;
												HX_STACK_LINE(131)
												int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(131)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(131)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(131)
												if ((tmp21)){
													HX_STACK_LINE(131)
													HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(131)
											_this->buffer = null();
											HX_STACK_LINE(131)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(131)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(131)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(131)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(131)
											_this->length = tmp20;
											HX_STACK_LINE(131)
											tmp12 = _this;
										}
										HX_STACK_LINE(131)
										this1 = tmp12;
									}
									else{
										HX_STACK_LINE(131)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
									}
								}
							}
						}
						HX_STACK_LINE(131)
						tmp5 = this1;
					}
					HX_STACK_LINE(131)
					int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(131)
					int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(131)
					::lime::graphics::ImageBuffer tmp8 = ::lime::graphics::ImageBuffer_obj::__new(tmp5,tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(131)
					this->buffer = tmp8;
					HX_STACK_LINE(133)
					bool tmp9 = (color != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(133)
					if ((tmp9)){
						HX_STACK_LINE(135)
						::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(135)
						Dynamic tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(135)
						this->fillRect(tmp10,tmp11,null());
					}
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	else{
		HX_STACK_LINE(154)
		::lime::graphics::ImageBuffer tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		this->__fromImageBuffer(tmp2);
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::lime::graphics::Image Image_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.Image","clone",0xb88517c0,"lime.graphics.Image.clone","lime/graphics/Image.hx",161,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(165)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		bool tmp3 = (tmp2 == ::lime::graphics::ImageType_obj::CANVAS);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		if ((tmp3)){
			HX_STACK_LINE(165)
			::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			Dynamic tmp7 = tmp6->__srcImage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			tmp4 = (tmp7 == null());
		}
		else{
			HX_STACK_LINE(165)
			tmp4 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp4)){
			HX_STACK_LINE(167)
			::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(168)
			::lime::graphics::utils::ImageCanvasUtil_obj::sync(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(169)
			::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			tmp5->data = null();
			HX_STACK_LINE(170)
			::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			tmp6->__srcImageData = null();
		}
		HX_STACK_LINE(174)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		::lime::graphics::ImageBuffer tmp6 = tmp5->clone();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		::lime::graphics::ImageType tmp11 = this->type;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		::lime::graphics::Image tmp12 = ::lime::graphics::Image_obj::__new(tmp6,tmp7,tmp8,tmp9,tmp10,null(),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(174)
		::lime::graphics::Image image = tmp12;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(175)
		bool tmp13 = this->dirty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(175)
		image->dirty = tmp13;
		HX_STACK_LINE(176)
		::lime::graphics::Image tmp14 = image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(176)
		return tmp14;
	}
	else{
		HX_STACK_LINE(180)
		int tmp2 = this->offsetX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		int tmp3 = this->offsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::__new(null(),tmp2,tmp3,tmp4,tmp5,null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		return tmp7;
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

Void Image_obj::colorTransform( ::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.Image","colorTransform",0xaf89aec6,"lime.graphics.Image.colorTransform","lime/graphics/Image.hx",187,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(189)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		rect = tmp1;
		HX_STACK_LINE(190)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		if ((tmp4)){
			HX_STACK_LINE(190)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(190)
			tmp5 = true;
		}
		HX_STACK_LINE(190)
		if ((tmp5)){
			HX_STACK_LINE(190)
			return null();
		}
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(196)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(196)
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(196)
					::lime::graphics::utils::ImageCanvasUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(204)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(204)
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(204)
					::lime::graphics::utils::ImageDataUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(208)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(208)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(208)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(209)
					::lime::graphics::ImageBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(209)
					::lime::utils::ArrayBufferView tmp10 = colorMatrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(209)
					tmp9->__srcBitmapData->__Field(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"), hx::paccDynamic )(rect->__toFlashRectangle(),::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__toFlashColorTransform(tmp10));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

Void Image_obj::copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.Image","copyChannel",0xc3306e31,"lime.graphics.Image.copyChannel","lime/graphics/Image.hx",218,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(220)
		::lime::math::Rectangle tmp = sourceRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		sourceRect = tmp1;
		HX_STACK_LINE(221)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		if ((tmp4)){
			HX_STACK_LINE(221)
			tmp5 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(221)
			tmp5 = true;
		}
		HX_STACK_LINE(221)
		if ((tmp5)){
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(223)
		bool tmp6 = (destChannel == ::lime::graphics::ImageChannel_obj::ALPHA);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		if ((tmp6)){
			HX_STACK_LINE(223)
			bool tmp8 = this->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(223)
			tmp7 = false;
		}
		HX_STACK_LINE(223)
		if ((tmp7)){
			HX_STACK_LINE(223)
			return null();
		}
		HX_STACK_LINE(224)
		bool tmp8 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(224)
		if ((tmp9)){
			HX_STACK_LINE(224)
			tmp10 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(224)
			tmp10 = true;
		}
		HX_STACK_LINE(224)
		if ((tmp10)){
			HX_STACK_LINE(224)
			return null();
		}
		HX_STACK_LINE(225)
		Float tmp11 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(225)
		int tmp12 = sourceImage->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(225)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(225)
		if ((tmp13)){
			HX_STACK_LINE(225)
			Float tmp14 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(225)
			sourceRect->width = tmp14;
		}
		HX_STACK_LINE(226)
		Float tmp14 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		int tmp15 = sourceImage->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(226)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(226)
		if ((tmp16)){
			HX_STACK_LINE(226)
			Float tmp17 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(226)
			sourceRect->height = tmp17;
		}
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::lime::graphics::ImageType tmp17 = this->type;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(228)
			::lime::graphics::ImageType _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(228)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(232)
					::lime::graphics::Image tmp18 = sourceImage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(232)
					::lime::math::Rectangle tmp19 = sourceRect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(232)
					::lime::math::Vector2 tmp20 = destPoint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(232)
					::lime::graphics::ImageChannel tmp21 = sourceChannel;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(232)
					::lime::graphics::ImageChannel tmp22 = destChannel;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(232)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(240)
					::lime::graphics::Image tmp18 = sourceImage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(240)
					::lime::math::Rectangle tmp19 = sourceRect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(240)
					::lime::math::Vector2 tmp20 = destPoint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(240)
					::lime::graphics::ImageChannel tmp21 = sourceChannel;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(240)
					::lime::graphics::ImageChannel tmp22 = destChannel;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(240)
					::lime::graphics::utils::ImageDataUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(244)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(244)
					switch( (int)(sourceChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(245)
							tmp18 = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(246)
							tmp18 = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(247)
							tmp18 = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(248)
							tmp18 = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(244)
					int srcChannel = tmp18;		HX_STACK_VAR(srcChannel,"srcChannel");
					HX_STACK_LINE(251)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(251)
					switch( (int)(destChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(252)
							tmp19 = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(253)
							tmp19 = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(254)
							tmp19 = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(255)
							tmp19 = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(251)
					int dstChannel = tmp19;		HX_STACK_VAR(dstChannel,"dstChannel");
					HX_STACK_LINE(258)
					int tmp20 = sourceImage->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(258)
					int tmp21 = sourceImage->offsetY;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(258)
					sourceRect->offset(tmp20,tmp21);
					HX_STACK_LINE(259)
					int tmp22 = this->offsetX;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(259)
					int tmp23 = this->offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(259)
					destPoint->offset(tmp22,tmp23);
					HX_STACK_LINE(261)
					::lime::graphics::ImageBuffer tmp24 = this->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(261)
					tmp24->__srcBitmapData->__Field(HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"), hx::paccDynamic )(sourceImage->buffer->get_src(),sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),srcChannel,dstChannel);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

Void Image_obj::copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","copyPixels",0x19d2897f,"lime.graphics.Image.copyPixels","lime/graphics/Image.hx",270,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(273)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		if ((tmp2)){
			HX_STACK_LINE(273)
			tmp3 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(273)
			tmp3 = true;
		}
		HX_STACK_LINE(273)
		if ((tmp3)){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(274)
		bool tmp4 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		if ((tmp5)){
			HX_STACK_LINE(274)
			tmp6 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(274)
			tmp6 = true;
		}
		HX_STACK_LINE(274)
		if ((tmp6)){
			HX_STACK_LINE(274)
			return null();
		}
		HX_STACK_LINE(275)
		int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		bool tmp8 = (tmp7 <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(275)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(275)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(275)
		if ((tmp9)){
			HX_STACK_LINE(275)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(275)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(275)
			tmp10 = (tmp12 <= (int)0);
		}
		else{
			HX_STACK_LINE(275)
			tmp10 = true;
		}
		HX_STACK_LINE(275)
		if ((tmp10)){
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(278)
		Float tmp11 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(278)
		int tmp12 = sourceImage->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(278)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(278)
		if ((tmp13)){
			HX_STACK_LINE(278)
			Float tmp14 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(278)
			sourceRect->width = tmp14;
		}
		HX_STACK_LINE(279)
		Float tmp14 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(279)
		int tmp15 = sourceImage->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(279)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(279)
		if ((tmp16)){
			HX_STACK_LINE(279)
			Float tmp17 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(279)
			sourceRect->height = tmp17;
		}
		HX_STACK_LINE(282)
		bool tmp17 = (sourceRect->x < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(282)
		if ((tmp17)){
			HX_STACK_LINE(283)
			hx::AddEq(sourceRect->width,sourceRect->x);
			HX_STACK_LINE(284)
			sourceRect->x = (int)0;
		}
		HX_STACK_LINE(286)
		bool tmp18 = (sourceRect->y < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(286)
		if ((tmp18)){
			HX_STACK_LINE(287)
			hx::AddEq(sourceRect->height,sourceRect->y);
			HX_STACK_LINE(288)
			sourceRect->y = (int)0;
		}
		HX_STACK_LINE(292)
		Float tmp19 = (destPoint->x + sourceRect->width);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(292)
		int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(292)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(292)
		if ((tmp21)){
			HX_STACK_LINE(292)
			int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(292)
			Float tmp23 = destPoint->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(292)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(292)
			sourceRect->width = tmp24;
		}
		HX_STACK_LINE(293)
		Float tmp22 = (destPoint->y + sourceRect->height);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(293)
		int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(293)
		bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(293)
		if ((tmp24)){
			HX_STACK_LINE(293)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(293)
			Float tmp26 = destPoint->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(293)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(293)
			sourceRect->height = tmp27;
		}
		HX_STACK_LINE(296)
		bool tmp25 = (destPoint->x < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(296)
		if ((tmp25)){
			HX_STACK_LINE(297)
			hx::AddEq(sourceRect->width,destPoint->x);
			HX_STACK_LINE(298)
			Float tmp26 = destPoint->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(298)
			Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(298)
			sourceRect->x = tmp27;
			HX_STACK_LINE(299)
			destPoint->x = (int)0;
		}
		HX_STACK_LINE(301)
		bool tmp26 = (destPoint->y < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(301)
		if ((tmp26)){
			HX_STACK_LINE(302)
			hx::AddEq(sourceRect->height,destPoint->y);
			HX_STACK_LINE(303)
			Float tmp27 = destPoint->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(303)
			Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(303)
			sourceRect->y = tmp28;
			HX_STACK_LINE(304)
			destPoint->y = (int)0;
		}
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::lime::graphics::ImageType tmp27 = this->type;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(307)
			::lime::graphics::ImageType _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(311)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(312)
					::lime::graphics::Image tmp28 = sourceImage;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(312)
					::lime::math::Rectangle tmp29 = sourceRect;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(312)
					::lime::math::Vector2 tmp30 = destPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(312)
					::lime::graphics::Image tmp31 = alphaImage;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(312)
					::lime::math::Vector2 tmp32 = alphaPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(312)
					bool tmp33 = mergeAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(312)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(321)
					::lime::graphics::Image tmp28 = sourceImage;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(321)
					::lime::math::Rectangle tmp29 = sourceRect;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(321)
					::lime::math::Vector2 tmp30 = destPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(321)
					::lime::graphics::Image tmp31 = alphaImage;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(321)
					::lime::math::Vector2 tmp32 = alphaPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(321)
					bool tmp33 = mergeAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(321)
					::lime::graphics::utils::ImageDataUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(325)
					int tmp28 = sourceImage->offsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(325)
					int tmp29 = sourceImage->offsetY;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(325)
					sourceRect->offset(tmp28,tmp29);
					HX_STACK_LINE(326)
					int tmp30 = this->offsetX;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(326)
					int tmp31 = this->offsetY;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(326)
					destPoint->offset(tmp30,tmp31);
					HX_STACK_LINE(328)
					bool tmp32 = (alphaImage != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(328)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(328)
					if ((tmp32)){
						HX_STACK_LINE(328)
						tmp33 = (alphaPoint != null());
					}
					else{
						HX_STACK_LINE(328)
						tmp33 = false;
					}
					HX_STACK_LINE(328)
					if ((tmp33)){
						HX_STACK_LINE(330)
						int tmp34 = alphaImage->offsetX;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(330)
						int tmp35 = alphaImage->offsetY;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(330)
						alphaPoint->offset(tmp34,tmp35);
					}
					HX_STACK_LINE(334)
					::lime::graphics::ImageBuffer tmp34 = this->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(334)
					bool tmp35 = (alphaImage != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(334)
					bool tmp36 = (alphaPoint != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(334)
					tmp34->__srcBitmapData->__Field(HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),(  ((tmp35)) ? Dynamic(alphaImage->buffer->get_src()) : Dynamic(null()) ),(  ((tmp36)) ? Dynamic(alphaPoint->__toFlashPoint()) : Dynamic(null()) ),mergeAlpha);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

::lime::utils::ByteArray Image_obj::encode( ::String __o_format,hx::Null< int >  __o_quality){
::String format = __o_format.Default(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"));
int quality = __o_quality.Default(90);
	HX_STACK_FRAME("lime.graphics.Image","encode",0xa785c453,"lime.graphics.Image.encode","lime/graphics/Image.hx",343,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(347)
		::String tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
			HX_STACK_LINE(351)
			::lime::utils::ByteArray tmp1 = ::lime::graphics::format::PNG_obj::encode(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(351)
			return tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
			HX_STACK_LINE(355)
			int tmp1 = quality;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(355)
			::lime::utils::ByteArray tmp2 = ::lime::graphics::format::JPEG_obj::encode(hx::ObjectPtr<OBJ_>(this),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			return tmp2;
		}
		else if (  ( _switch_1==HX_HCSTRING("bmp","\x45","\xbc","\x4a","\x00"))){
			HX_STACK_LINE(359)
			::lime::utils::ByteArray tmp1 = ::lime::graphics::format::BMP_obj::encode(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			return tmp1;
		}
		else  {
		}
;
;
		HX_STACK_LINE(367)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

Void Image_obj::fillRect( ::lime::math::Rectangle rect,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","fillRect",0x2421e0c4,"lime.graphics.Image.fillRect","lime/graphics/Image.hx",372,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(374)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		rect = tmp1;
		HX_STACK_LINE(375)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		if ((tmp4)){
			HX_STACK_LINE(375)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(375)
			tmp5 = true;
		}
		HX_STACK_LINE(375)
		if ((tmp5)){
			HX_STACK_LINE(375)
			return null();
		}
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(381)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(381)
					int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(381)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(381)
					::lime::graphics::utils::ImageCanvasUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(389)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(389)
					int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(389)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(389)
					::lime::graphics::utils::ImageDataUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(393)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(393)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(393)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(395)
					bool tmp9 = (format != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(395)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(395)
					if ((tmp9)){
						HX_STACK_LINE(395)
						Dynamic tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(395)
						switch( (int)(tmp11)){
							case (int)1: {
								HX_STACK_LINE(397)
								tmp10 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(398)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(398)
								{
									HX_STACK_LINE(398)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(398)
									{
										HX_STACK_LINE(398)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(398)
										tmp12 = argb;
									}
									HX_STACK_LINE(398)
									int argb = tmp12;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(398)
									{
										HX_STACK_LINE(398)
										int tmp13 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(398)
										int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(398)
										int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(398)
										int tmp16 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(398)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(398)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(398)
										int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(398)
										int tmp20 = (int(tmp15) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(398)
										int tmp21 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(398)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(398)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(398)
										int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(398)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(398)
										int tmp26 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(398)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(398)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(398)
										int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(398)
										argb = tmp29;
									}
									HX_STACK_LINE(398)
									tmp10 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(399)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(399)
								{
									HX_STACK_LINE(399)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(399)
									{
										HX_STACK_LINE(399)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(399)
										tmp12 = argb;
									}
									HX_STACK_LINE(399)
									int argb = tmp12;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(399)
									{
										HX_STACK_LINE(399)
										int tmp13 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(399)
										int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(399)
										int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(399)
										int tmp16 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(399)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(399)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(399)
										int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(399)
										int tmp20 = (int(tmp15) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(399)
										int tmp21 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(399)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(399)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(399)
										int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(399)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(399)
										int tmp26 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(399)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(399)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(399)
										int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(399)
										argb = tmp29;
									}
									HX_STACK_LINE(399)
									tmp10 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(399)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(399)
						{
							HX_STACK_LINE(399)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(399)
							{
								HX_STACK_LINE(399)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(399)
								tmp11 = argb;
							}
							HX_STACK_LINE(399)
							int argb = tmp11;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(399)
							{
								HX_STACK_LINE(399)
								int tmp12 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(399)
								int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(399)
								int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(399)
								int tmp15 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(399)
								int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(399)
								int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(399)
								int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(399)
								int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(399)
								int tmp20 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(399)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(399)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(399)
								int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(399)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(399)
								int tmp25 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(399)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(399)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(399)
								int tmp28 = (int(tmp24) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(399)
								argb = tmp28;
							}
							HX_STACK_LINE(399)
							tmp10 = argb;
						}
					}
					HX_STACK_LINE(395)
					int argb = tmp10;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(403)
					::lime::graphics::ImageBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(403)
					tmp11->__srcBitmapData->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )(rect->__toFlashRectangle(),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fillRect,(void))

Void Image_obj::floodFill( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","floodFill",0x1da9f544,"lime.graphics.Image.floodFill","lime/graphics/Image.hx",412,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(414)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		if ((tmp1)){
			HX_STACK_LINE(414)
			return null();
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(420)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(420)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(420)
					int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(420)
					Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(420)
					::lime::graphics::utils::ImageCanvasUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(428)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(428)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(428)
					int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(428)
					Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(428)
					::lime::graphics::utils::ImageDataUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(432)
					bool tmp3 = (format != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(432)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(432)
					if ((tmp3)){
						HX_STACK_LINE(432)
						Dynamic tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(432)
						switch( (int)(tmp5)){
							case (int)1: {
								HX_STACK_LINE(434)
								tmp4 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(435)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(435)
								{
									HX_STACK_LINE(435)
									int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(435)
									{
										HX_STACK_LINE(435)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(435)
										tmp6 = argb;
									}
									HX_STACK_LINE(435)
									int argb = tmp6;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(435)
									{
										HX_STACK_LINE(435)
										int tmp7 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(435)
										int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(435)
										int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(435)
										int tmp10 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(435)
										int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(435)
										int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(435)
										int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(435)
										int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(435)
										int tmp15 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(435)
										int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(435)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(435)
										int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(435)
										int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(435)
										int tmp20 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(435)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(435)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(435)
										int tmp23 = (int(tmp19) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(435)
										argb = tmp23;
									}
									HX_STACK_LINE(435)
									tmp4 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(436)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(436)
								{
									HX_STACK_LINE(436)
									int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(436)
									{
										HX_STACK_LINE(436)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(436)
										tmp6 = argb;
									}
									HX_STACK_LINE(436)
									int argb = tmp6;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(436)
									{
										HX_STACK_LINE(436)
										int tmp7 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(436)
										int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(436)
										int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(436)
										int tmp10 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(436)
										int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(436)
										int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(436)
										int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(436)
										int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(436)
										int tmp15 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(436)
										int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(436)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(436)
										int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(436)
										int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(436)
										int tmp20 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(436)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(436)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(436)
										int tmp23 = (int(tmp19) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(436)
										argb = tmp23;
									}
									HX_STACK_LINE(436)
									tmp4 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(436)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(436)
						{
							HX_STACK_LINE(436)
							int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(436)
							{
								HX_STACK_LINE(436)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(436)
								tmp5 = argb;
							}
							HX_STACK_LINE(436)
							int argb = tmp5;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(436)
							{
								HX_STACK_LINE(436)
								int tmp6 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(436)
								int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(436)
								int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(436)
								int tmp9 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(436)
								int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(436)
								int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(436)
								int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(436)
								int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(436)
								int tmp14 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(436)
								int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(436)
								int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(436)
								int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(436)
								int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(436)
								int tmp19 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(436)
								int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(436)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(436)
								int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(436)
								argb = tmp22;
							}
							HX_STACK_LINE(436)
							tmp4 = argb;
						}
					}
					HX_STACK_LINE(432)
					int argb = tmp4;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(440)
					::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(440)
					int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(440)
					int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(440)
					int tmp9 = this->offsetY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(440)
					tmp5->__srcBitmapData->__Field(HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"), hx::paccDynamic )((tmp6 + tmp7),(tmp8 + tmp9),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,floodFill,(void))

::lime::math::Rectangle Image_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor,Dynamic format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.Image","getColorBoundsRect",0x21db6743,"lime.graphics.Image.getColorBoundsRect","lime/graphics/Image.hx",507,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(509)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		if ((tmp1)){
			HX_STACK_LINE(509)
			return null();
		}
		HX_STACK_LINE(511)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(511)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(519)
				int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(519)
				int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(519)
				bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(519)
				Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(519)
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(519)
				return tmp7;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(523)
				int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(523)
				Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(523)
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(523)
				return tmp7;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(527)
				::lime::graphics::ImageBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(527)
				Dynamic tmp4 = tmp3->__srcBitmapData->__Field(HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"), hx::paccDynamic )(mask,color,findColor);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				Dynamic rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(528)
				::lime::math::Rectangle tmp5 = ::lime::math::Rectangle_obj::__new(rect->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(528)
				return tmp5;
			}
			;break;
			default: {
				HX_STACK_LINE(532)
				return null();
			}
		}
		HX_STACK_LINE(511)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,getColorBoundsRect,return )

int Image_obj::getPixel( int x,int y,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixel",0xd9e3718d,"lime.graphics.Image.getPixel","lime/graphics/Image.hx",537,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(539)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(539)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(539)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(539)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(539)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(539)
	if ((tmp3)){
		HX_STACK_LINE(539)
		tmp4 = (x < (int)0);
	}
	else{
		HX_STACK_LINE(539)
		tmp4 = true;
	}
	HX_STACK_LINE(539)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(539)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(539)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(539)
	if ((tmp6)){
		HX_STACK_LINE(539)
		tmp7 = (y < (int)0);
	}
	else{
		HX_STACK_LINE(539)
		tmp7 = true;
	}
	HX_STACK_LINE(539)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(539)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(539)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(539)
	if ((tmp9)){
		HX_STACK_LINE(539)
		int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(539)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(539)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(539)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(539)
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		HX_STACK_LINE(539)
		tmp10 = true;
	}
	HX_STACK_LINE(539)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(539)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(539)
	if ((tmp11)){
		HX_STACK_LINE(539)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(539)
		int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(539)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(539)
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		HX_STACK_LINE(539)
		tmp12 = true;
	}
	HX_STACK_LINE(539)
	if ((tmp12)){
		HX_STACK_LINE(539)
		return (int)0;
	}
	HX_STACK_LINE(541)
	::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(541)
	::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(541)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(545)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(545)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(545)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(545)
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(545)
			return tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(553)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(553)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(553)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(553)
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(553)
			return tmp17;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(557)
			::lime::graphics::ImageBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(557)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(557)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(557)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(557)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(557)
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(557)
			int color = tmp19;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(559)
			bool tmp20 = (format != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(559)
			if ((tmp20)){
				HX_STACK_LINE(559)
				Dynamic tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(559)
				switch( (int)(tmp21)){
					case (int)1: {
						HX_STACK_LINE(561)
						int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(561)
						return tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(562)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(562)
						{
							HX_STACK_LINE(562)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(562)
							{
								HX_STACK_LINE(562)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(562)
								tmp23 = bgra;
							}
							HX_STACK_LINE(562)
							int bgra = tmp23;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(562)
							{
								HX_STACK_LINE(562)
								int tmp24 = (int(color) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(562)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(562)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(562)
								int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(562)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(562)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(562)
								int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(562)
								int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(562)
								int tmp32 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(562)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(562)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(562)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(562)
								int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(562)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(562)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(562)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(562)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(562)
								bgra = tmp40;
							}
							HX_STACK_LINE(562)
							tmp22 = bgra;
						}
						HX_STACK_LINE(562)
						int bgra = tmp22;		HX_STACK_VAR(bgra,"bgra");
						HX_STACK_LINE(562)
						int tmp23 = bgra;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(562)
						return tmp23;
					}
					;break;
					default: {
						HX_STACK_LINE(563)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(563)
								tmp23 = rgba;
							}
							HX_STACK_LINE(563)
							int rgba = tmp23;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(563)
							{
								HX_STACK_LINE(563)
								int tmp24 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(563)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(563)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(563)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(563)
								int tmp28 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(563)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(563)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(563)
								int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(563)
								int tmp32 = (int(tmp27) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(563)
								int tmp33 = (int(color) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(563)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(563)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(563)
								int tmp36 = (int(tmp32) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(563)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(563)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(563)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(563)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(563)
								rgba = tmp40;
							}
							HX_STACK_LINE(563)
							tmp22 = rgba;
						}
						HX_STACK_LINE(563)
						int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(563)
						int tmp23 = rgba;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(563)
						return tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(563)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(563)
						tmp22 = rgba;
					}
					HX_STACK_LINE(563)
					int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						int tmp23 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(563)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(563)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(563)
						int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(563)
						int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(563)
						int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(563)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(563)
						int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(563)
						int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(563)
						int tmp32 = (int(color) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(563)
						int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(563)
						int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(563)
						int tmp35 = (int(tmp31) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(563)
						int tmp36 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(563)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(563)
						int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(563)
						int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(563)
						rgba = tmp39;
					}
					HX_STACK_LINE(563)
					tmp21 = rgba;
				}
				HX_STACK_LINE(563)
				int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(563)
				int tmp22 = rgba;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(563)
				return tmp22;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(569)
			return (int)0;
		}
	}
	HX_STACK_LINE(541)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel,return )

int Image_obj::getPixel32( int x,int y,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixel32",0xaeccdb6c,"lime.graphics.Image.getPixel32","lime/graphics/Image.hx",576,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(578)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(578)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(578)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(578)
	if ((tmp3)){
		HX_STACK_LINE(578)
		tmp4 = (x < (int)0);
	}
	else{
		HX_STACK_LINE(578)
		tmp4 = true;
	}
	HX_STACK_LINE(578)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(578)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(578)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(578)
	if ((tmp6)){
		HX_STACK_LINE(578)
		tmp7 = (y < (int)0);
	}
	else{
		HX_STACK_LINE(578)
		tmp7 = true;
	}
	HX_STACK_LINE(578)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(578)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(578)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(578)
	if ((tmp9)){
		HX_STACK_LINE(578)
		int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(578)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(578)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(578)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(578)
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		HX_STACK_LINE(578)
		tmp10 = true;
	}
	HX_STACK_LINE(578)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(578)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(578)
	if ((tmp11)){
		HX_STACK_LINE(578)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(578)
		int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(578)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(578)
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		HX_STACK_LINE(578)
		tmp12 = true;
	}
	HX_STACK_LINE(578)
	if ((tmp12)){
		HX_STACK_LINE(578)
		return (int)0;
	}
	HX_STACK_LINE(580)
	::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(580)
	::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(580)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(584)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(584)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(584)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(584)
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(584)
			return tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(592)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(592)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(592)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(592)
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(592)
			return tmp17;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(596)
			::lime::graphics::ImageBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(596)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(596)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(596)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(596)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(596)
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(596)
			int color = tmp19;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(598)
			bool tmp20 = (format != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(598)
			if ((tmp20)){
				HX_STACK_LINE(598)
				Dynamic tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(598)
				switch( (int)(tmp21)){
					case (int)1: {
						HX_STACK_LINE(600)
						int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(600)
						return tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(601)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(601)
						{
							HX_STACK_LINE(601)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(601)
							{
								HX_STACK_LINE(601)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(601)
								tmp23 = bgra;
							}
							HX_STACK_LINE(601)
							int bgra = tmp23;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(601)
							{
								HX_STACK_LINE(601)
								int tmp24 = (int(color) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(601)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(601)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(601)
								int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(601)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(601)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(601)
								int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(601)
								int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(601)
								int tmp32 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(601)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(601)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(601)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(601)
								int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(601)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(601)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(601)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(601)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(601)
								bgra = tmp40;
							}
							HX_STACK_LINE(601)
							tmp22 = bgra;
						}
						HX_STACK_LINE(601)
						int bgra = tmp22;		HX_STACK_VAR(bgra,"bgra");
						HX_STACK_LINE(601)
						int tmp23 = bgra;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(601)
						return tmp23;
					}
					;break;
					default: {
						HX_STACK_LINE(602)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(602)
						{
							HX_STACK_LINE(602)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(602)
							{
								HX_STACK_LINE(602)
								int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(602)
								tmp23 = rgba;
							}
							HX_STACK_LINE(602)
							int rgba = tmp23;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(602)
							{
								HX_STACK_LINE(602)
								int tmp24 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(602)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(602)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(602)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(602)
								int tmp28 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(602)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(602)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(602)
								int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(602)
								int tmp32 = (int(tmp27) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(602)
								int tmp33 = (int(color) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(602)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(602)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(602)
								int tmp36 = (int(tmp32) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(602)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(602)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(602)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(602)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(602)
								rgba = tmp40;
							}
							HX_STACK_LINE(602)
							tmp22 = rgba;
						}
						HX_STACK_LINE(602)
						int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(602)
						int tmp23 = rgba;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(602)
						return tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(602)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(602)
				{
					HX_STACK_LINE(602)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(602)
						tmp22 = rgba;
					}
					HX_STACK_LINE(602)
					int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						int tmp23 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(602)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(602)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(602)
						int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(602)
						int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(602)
						int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(602)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(602)
						int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(602)
						int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(602)
						int tmp32 = (int(color) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(602)
						int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(602)
						int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(602)
						int tmp35 = (int(tmp31) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(602)
						int tmp36 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(602)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(602)
						int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(602)
						int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(602)
						rgba = tmp39;
					}
					HX_STACK_LINE(602)
					tmp21 = rgba;
				}
				HX_STACK_LINE(602)
				int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(602)
				int tmp22 = rgba;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(602)
				return tmp22;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(608)
			return (int)0;
		}
	}
	HX_STACK_LINE(580)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel32,return )

::lime::utils::ByteArray Image_obj::getPixels( ::lime::math::Rectangle rect,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixels",0xcd1fea46,"lime.graphics.Image.getPixels","lime/graphics/Image.hx",615,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(617)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(617)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(617)
	if ((tmp1)){
		HX_STACK_LINE(617)
		return null();
	}
	HX_STACK_LINE(619)
	::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(619)
	::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(619)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(623)
			::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(623)
			Dynamic tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(623)
			::lime::utils::ByteArray tmp5 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(623)
			return tmp5;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(631)
			::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(631)
			Dynamic tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(631)
			::lime::utils::ByteArray tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(631)
			return tmp5;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(635)
			int tmp3 = this->offsetX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(635)
			int tmp4 = this->offsetY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(635)
			rect->offset(tmp3,tmp4);
			HX_STACK_LINE(636)
			::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(636)
			Dynamic tmp6 = tmp5->__srcBitmapData->__Field(HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"), hx::paccDynamic )(rect->__toFlashRectangle());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(636)
			Dynamic byteArray = tmp6;		HX_STACK_VAR(byteArray,"byteArray");
			HX_STACK_LINE(638)
			bool tmp7 = (format != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(638)
			if ((tmp7)){
				HX_STACK_LINE(638)
				Dynamic tmp8 = format;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(638)
				switch( (int)(tmp8)){
					case (int)1: {
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(643)
						int color;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(644)
						Float tmp9 = (Float(byteArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )) / Float((int)4));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(644)
						int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(644)
						int length = tmp10;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(646)
						{
							HX_STACK_LINE(646)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(646)
							while((true)){
								HX_STACK_LINE(646)
								bool tmp11 = (_g1 < length);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(646)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(646)
								if ((tmp12)){
									HX_STACK_LINE(646)
									break;
								}
								HX_STACK_LINE(646)
								int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(646)
								int i = tmp13;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(648)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(648)
								{
									HX_STACK_LINE(648)
									int tmp15 = byteArray->__Field(HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(648)
									int argb = tmp15;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(648)
									{
										HX_STACK_LINE(648)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(648)
										{
											HX_STACK_LINE(648)
											int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
											HX_STACK_LINE(648)
											tmp16 = bgra;
										}
										HX_STACK_LINE(648)
										int bgra = tmp16;		HX_STACK_VAR(bgra,"bgra");
										HX_STACK_LINE(648)
										{
											HX_STACK_LINE(648)
											int tmp17 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(648)
											int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(648)
											int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(648)
											int tmp20 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(648)
											int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(648)
											int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(648)
											int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(648)
											int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(648)
											int tmp25 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(648)
											int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(648)
											int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(648)
											int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(648)
											int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(648)
											int tmp30 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(648)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(648)
											int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(648)
											int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(648)
											bgra = tmp33;
										}
										HX_STACK_LINE(648)
										tmp14 = bgra;
									}
								}
								HX_STACK_LINE(648)
								color = tmp14;
								HX_STACK_LINE(649)
								hx::SubEq(byteArray->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")),(int)4);
								HX_STACK_LINE(650)
								int tmp15 = color;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(650)
								byteArray->__Field(HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"), hx::paccDynamic )(tmp15);
							}
						}
						HX_STACK_LINE(654)
						byteArray->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
					}
					;break;
					default: {
						HX_STACK_LINE(658)
						int color;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(659)
						Float tmp9 = (Float(byteArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )) / Float((int)4));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(659)
						int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(659)
						int length = tmp10;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(661)
							while((true)){
								HX_STACK_LINE(661)
								bool tmp11 = (_g1 < length);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(661)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(661)
								if ((tmp12)){
									HX_STACK_LINE(661)
									break;
								}
								HX_STACK_LINE(661)
								int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(661)
								int i = tmp13;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(663)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(663)
								{
									HX_STACK_LINE(663)
									int tmp15 = byteArray->__Field(HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(663)
									int argb = tmp15;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(663)
											tmp16 = rgba;
										}
										HX_STACK_LINE(663)
										int rgba = tmp16;		HX_STACK_VAR(rgba,"rgba");
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											int tmp17 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(663)
											int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(663)
											int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(663)
											int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(663)
											int tmp21 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(663)
											int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(663)
											int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(663)
											int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(663)
											int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(663)
											int tmp26 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(663)
											int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(663)
											int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(663)
											int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(663)
											int tmp30 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(663)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(663)
											int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(663)
											int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(663)
											rgba = tmp33;
										}
										HX_STACK_LINE(663)
										tmp14 = rgba;
									}
								}
								HX_STACK_LINE(663)
								color = tmp14;
								HX_STACK_LINE(664)
								hx::SubEq(byteArray->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")),(int)4);
								HX_STACK_LINE(665)
								int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(665)
								{
									HX_STACK_LINE(665)
									int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(665)
									{
										HX_STACK_LINE(665)
										int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
										HX_STACK_LINE(665)
										tmp16 = bgra;
									}
									HX_STACK_LINE(665)
									int bgra = tmp16;		HX_STACK_VAR(bgra,"bgra");
									HX_STACK_LINE(665)
									{
										HX_STACK_LINE(665)
										int tmp17 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(665)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(665)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(665)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(665)
										int tmp21 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(665)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(665)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(665)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(665)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(665)
										int tmp26 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(665)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(665)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(665)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(665)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(665)
										int tmp31 = (int(color) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(665)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(665)
										int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(665)
										bgra = tmp33;
									}
									HX_STACK_LINE(665)
									tmp15 = bgra;
								}
								HX_STACK_LINE(665)
								byteArray->__Field(HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"), hx::paccDynamic )(tmp15);
							}
						}
						HX_STACK_LINE(669)
						byteArray->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
					}
				}
			}
			else{
				HX_STACK_LINE(658)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(659)
				Float tmp8 = (Float(byteArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )) / Float((int)4));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(659)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(659)
				int length = tmp9;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(661)
					while((true)){
						HX_STACK_LINE(661)
						bool tmp10 = (_g1 < length);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(661)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(661)
						if ((tmp11)){
							HX_STACK_LINE(661)
							break;
						}
						HX_STACK_LINE(661)
						int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(661)
						int i = tmp12;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(663)
						int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(663)
						{
							HX_STACK_LINE(663)
							int tmp14 = byteArray->__Field(HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(663)
							int argb = tmp14;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(663)
							{
								HX_STACK_LINE(663)
								int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(663)
								{
									HX_STACK_LINE(663)
									int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
									HX_STACK_LINE(663)
									tmp15 = rgba;
								}
								HX_STACK_LINE(663)
								int rgba = tmp15;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(663)
								{
									HX_STACK_LINE(663)
									int tmp16 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(663)
									int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(663)
									int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(663)
									int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(663)
									int tmp20 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(663)
									int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(663)
									int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(663)
									int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(663)
									int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(663)
									int tmp25 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(663)
									int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(663)
									int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(663)
									int tmp28 = (int(tmp24) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(663)
									int tmp29 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(663)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(663)
									int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(663)
									int tmp32 = (int(tmp28) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(663)
									rgba = tmp32;
								}
								HX_STACK_LINE(663)
								tmp13 = rgba;
							}
						}
						HX_STACK_LINE(663)
						color = tmp13;
						HX_STACK_LINE(664)
						hx::SubEq(byteArray->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")),(int)4);
						HX_STACK_LINE(665)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(665)
								tmp15 = bgra;
							}
							HX_STACK_LINE(665)
							int bgra = tmp15;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(665)
							{
								HX_STACK_LINE(665)
								int tmp16 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(665)
								int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(665)
								int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(665)
								int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(665)
								int tmp20 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(665)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(665)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(665)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(665)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(665)
								int tmp25 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(665)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(665)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(665)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(665)
								int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(665)
								int tmp30 = (int(color) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(665)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(665)
								int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(665)
								bgra = tmp32;
							}
							HX_STACK_LINE(665)
							tmp14 = bgra;
						}
						HX_STACK_LINE(665)
						byteArray->__Field(HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"), hx::paccDynamic )(tmp14);
					}
				}
				HX_STACK_LINE(669)
				byteArray->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
			}
			HX_STACK_LINE(673)
			::lime::utils::ByteArray tmp8 = ((::lime::utils::ByteArray)(byteArray));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(673)
			return tmp8;
		}
		;break;
		default: {
			HX_STACK_LINE(677)
			return null();
		}
	}
	HX_STACK_LINE(619)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixels,return )

Void Image_obj::merge( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.Image","merge",0x75e8a71b,"lime.graphics.Image.merge","lime/graphics/Image.hx",684,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(686)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(686)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(686)
		if ((tmp2)){
			HX_STACK_LINE(686)
			tmp3 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(686)
			tmp3 = true;
		}
		HX_STACK_LINE(686)
		if ((tmp3)){
			HX_STACK_LINE(686)
			return null();
		}
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(688)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(692)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(693)
					::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(693)
					::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(693)
					::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(693)
					int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(693)
					int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(693)
					int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(693)
					int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(693)
					::lime::graphics::utils::ImageCanvasUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(702)
					::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(702)
					::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(702)
					::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(702)
					int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(702)
					int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(702)
					int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(702)
					int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(702)
					::lime::graphics::utils::ImageDataUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(706)
					int tmp5 = this->offsetX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(706)
					int tmp6 = this->offsetY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(706)
					sourceRect->offset(tmp5,tmp6);
					HX_STACK_LINE(707)
					::lime::graphics::ImageBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(707)
					tmp7->__srcBitmapData->__Field(HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				default: {
					HX_STACK_LINE(711)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Image_obj,merge,(void))

Void Image_obj::resize( int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.Image","resize",0xb61d2c31,"lime.graphics.Image.resize","lime/graphics/Image.hx",718,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(720)
		{
			HX_STACK_LINE(720)
			::lime::graphics::ImageType tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(720)
			::lime::graphics::ImageType _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(720)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(724)
					int tmp1 = newWidth;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(724)
					int tmp2 = newHeight;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(724)
					::lime::graphics::utils::ImageCanvasUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(728)
					int tmp1 = newWidth;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(728)
					int tmp2 = newHeight;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(728)
					::lime::graphics::utils::ImageDataUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(744)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		tmp->width = newWidth;
		HX_STACK_LINE(745)
		::lime::graphics::ImageBuffer tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(745)
		tmp1->height = newHeight;
		HX_STACK_LINE(747)
		this->offsetX = (int)0;
		HX_STACK_LINE(748)
		this->offsetY = (int)0;
		HX_STACK_LINE(749)
		this->width = newWidth;
		HX_STACK_LINE(750)
		this->height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("lime.graphics.Image","scroll",0xf506aa4a,"lime.graphics.Image.scroll","lime/graphics/Image.hx",755,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(757)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(757)
		if ((tmp1)){
			HX_STACK_LINE(757)
			return null();
		}
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(759)
			::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(759)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(763)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(763)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(763)
					::lime::graphics::utils::ImageCanvasUtil_obj::scroll(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(773)
					::lime::math::Rectangle tmp3 = this->get_rect();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(773)
					::lime::math::Vector2 tmp4 = ::lime::math::Vector2_obj::__new(x,y);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(773)
					this->copyPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,null(),null(),null());
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(777)
					::lime::graphics::ImageBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(777)
					int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(777)
					int tmp5 = this->offsetX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(777)
					int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(777)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(777)
					tmp3->__srcBitmapData->__Field(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"), hx::paccDynamic )((tmp4 + tmp5),(tmp6 + tmp7));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,scroll,(void))

Void Image_obj::setPixel( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel",0x8840cb01,"lime.graphics.Image.setPixel","lime/graphics/Image.hx",786,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(788)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(788)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(788)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(788)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(788)
		if ((tmp3)){
			HX_STACK_LINE(788)
			tmp4 = (x < (int)0);
		}
		else{
			HX_STACK_LINE(788)
			tmp4 = true;
		}
		HX_STACK_LINE(788)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(788)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(788)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(788)
		if ((tmp6)){
			HX_STACK_LINE(788)
			tmp7 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(788)
			tmp7 = true;
		}
		HX_STACK_LINE(788)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(788)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(788)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(788)
		if ((tmp9)){
			HX_STACK_LINE(788)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(788)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(788)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(788)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(788)
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			HX_STACK_LINE(788)
			tmp10 = true;
		}
		HX_STACK_LINE(788)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(788)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(788)
		if ((tmp11)){
			HX_STACK_LINE(788)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(788)
			int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(788)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(788)
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			HX_STACK_LINE(788)
			tmp12 = true;
		}
		HX_STACK_LINE(788)
		if ((tmp12)){
			HX_STACK_LINE(788)
			return null();
		}
		HX_STACK_LINE(790)
		{
			HX_STACK_LINE(790)
			::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(790)
			::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(790)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(794)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(794)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(794)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(794)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(794)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(802)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(802)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(802)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(802)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(802)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(806)
					bool tmp14 = (format != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(806)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(806)
					if ((tmp14)){
						HX_STACK_LINE(806)
						Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(806)
						switch( (int)(tmp16)){
							case (int)1: {
								HX_STACK_LINE(808)
								tmp15 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(809)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(809)
								{
									HX_STACK_LINE(809)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(809)
									{
										HX_STACK_LINE(809)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(809)
										tmp17 = argb;
									}
									HX_STACK_LINE(809)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(809)
									{
										HX_STACK_LINE(809)
										int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(809)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(809)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(809)
										int tmp21 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(809)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(809)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(809)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(809)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(809)
										int tmp26 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(809)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(809)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(809)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(809)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(809)
										int tmp31 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(809)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(809)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(809)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(809)
										argb = tmp34;
									}
									HX_STACK_LINE(809)
									tmp15 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(810)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(810)
								{
									HX_STACK_LINE(810)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(810)
									{
										HX_STACK_LINE(810)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(810)
										tmp17 = argb;
									}
									HX_STACK_LINE(810)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(810)
									{
										HX_STACK_LINE(810)
										int tmp18 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(810)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(810)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(810)
										int tmp21 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(810)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(810)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(810)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(810)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(810)
										int tmp26 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(810)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(810)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(810)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(810)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(810)
										int tmp31 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(810)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(810)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(810)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(810)
										argb = tmp34;
									}
									HX_STACK_LINE(810)
									tmp15 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(810)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(810)
						{
							HX_STACK_LINE(810)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(810)
							{
								HX_STACK_LINE(810)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(810)
								tmp16 = argb;
							}
							HX_STACK_LINE(810)
							int argb = tmp16;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(810)
							{
								HX_STACK_LINE(810)
								int tmp17 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(810)
								int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(810)
								int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(810)
								int tmp20 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(810)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(810)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(810)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(810)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(810)
								int tmp25 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(810)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(810)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(810)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(810)
								int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(810)
								int tmp30 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(810)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(810)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(810)
								int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(810)
								argb = tmp33;
							}
							HX_STACK_LINE(810)
							tmp15 = argb;
						}
					}
					HX_STACK_LINE(806)
					int argb = tmp15;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(814)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(814)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(814)
					int tmp18 = this->offsetX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(814)
					int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(814)
					int tmp20 = this->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(814)
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel,(void))

Void Image_obj::setPixel32( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel32",0xb24a79e0,"lime.graphics.Image.setPixel32","lime/graphics/Image.hx",823,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(825)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(825)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(825)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(825)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(825)
		if ((tmp3)){
			HX_STACK_LINE(825)
			tmp4 = (x < (int)0);
		}
		else{
			HX_STACK_LINE(825)
			tmp4 = true;
		}
		HX_STACK_LINE(825)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(825)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(825)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(825)
		if ((tmp6)){
			HX_STACK_LINE(825)
			tmp7 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(825)
			tmp7 = true;
		}
		HX_STACK_LINE(825)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(825)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(825)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(825)
		if ((tmp9)){
			HX_STACK_LINE(825)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(825)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(825)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(825)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(825)
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			HX_STACK_LINE(825)
			tmp10 = true;
		}
		HX_STACK_LINE(825)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(825)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(825)
		if ((tmp11)){
			HX_STACK_LINE(825)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(825)
			int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(825)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(825)
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			HX_STACK_LINE(825)
			tmp12 = true;
		}
		HX_STACK_LINE(825)
		if ((tmp12)){
			HX_STACK_LINE(825)
			return null();
		}
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(827)
			::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(827)
			::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(827)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(831)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(831)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(831)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(831)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(831)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(839)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(839)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(839)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(839)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(839)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(843)
					bool tmp14 = (format != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(843)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(843)
					if ((tmp14)){
						HX_STACK_LINE(843)
						Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(843)
						switch( (int)(tmp16)){
							case (int)1: {
								HX_STACK_LINE(845)
								tmp15 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(846)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(846)
								{
									HX_STACK_LINE(846)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(846)
									{
										HX_STACK_LINE(846)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(846)
										tmp17 = argb;
									}
									HX_STACK_LINE(846)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(846)
									{
										HX_STACK_LINE(846)
										int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(846)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(846)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(846)
										int tmp21 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(846)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(846)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(846)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(846)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(846)
										int tmp26 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(846)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(846)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(846)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(846)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(846)
										int tmp31 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(846)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(846)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(846)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(846)
										argb = tmp34;
									}
									HX_STACK_LINE(846)
									tmp15 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(847)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(847)
								{
									HX_STACK_LINE(847)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(847)
									{
										HX_STACK_LINE(847)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(847)
										tmp17 = argb;
									}
									HX_STACK_LINE(847)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(847)
									{
										HX_STACK_LINE(847)
										int tmp18 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(847)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(847)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(847)
										int tmp21 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(847)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(847)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(847)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(847)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(847)
										int tmp26 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(847)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(847)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(847)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(847)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(847)
										int tmp31 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(847)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(847)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(847)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(847)
										argb = tmp34;
									}
									HX_STACK_LINE(847)
									tmp15 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(847)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(847)
						{
							HX_STACK_LINE(847)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(847)
							{
								HX_STACK_LINE(847)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(847)
								tmp16 = argb;
							}
							HX_STACK_LINE(847)
							int argb = tmp16;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(847)
							{
								HX_STACK_LINE(847)
								int tmp17 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(847)
								int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(847)
								int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(847)
								int tmp20 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(847)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(847)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(847)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(847)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(847)
								int tmp25 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(847)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(847)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(847)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(847)
								int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(847)
								int tmp30 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(847)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(847)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(847)
								int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(847)
								argb = tmp33;
							}
							HX_STACK_LINE(847)
							tmp15 = argb;
						}
					}
					HX_STACK_LINE(843)
					int argb = tmp15;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(851)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(851)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(851)
					int tmp18 = this->offsetX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(851)
					int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(851)
					int tmp20 = this->offsetY;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(851)
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel32,(void))

Void Image_obj::setPixels( ::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixels",0xb070d652,"lime.graphics.Image.setPixels","lime/graphics/Image.hx",860,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(862)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(862)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(862)
		rect = tmp1;
		HX_STACK_LINE(863)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(863)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(863)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(863)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(863)
		if ((tmp4)){
			HX_STACK_LINE(863)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(863)
			tmp5 = true;
		}
		HX_STACK_LINE(863)
		if ((tmp5)){
			HX_STACK_LINE(863)
			return null();
		}
		HX_STACK_LINE(865)
		{
			HX_STACK_LINE(865)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(865)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(865)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(869)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(869)
					::lime::utils::ByteArray tmp8 = byteArray;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(869)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(869)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(877)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(877)
					::lime::utils::ByteArray tmp8 = byteArray;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(877)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(877)
					::lime::graphics::utils::ImageDataUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(881)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(881)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(881)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(883)
					bool tmp9 = (format != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(883)
					if ((tmp9)){
						HX_STACK_LINE(883)
						Dynamic tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(883)
						switch( (int)(tmp10)){
							case (int)1: {
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(888)
								::lime::utils::ByteArray srcData = byteArray;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(889)
								::lime::utils::ByteArray tmp11 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(889)
								byteArray = tmp11;
								HX_STACK_LINE(894)
								int color;		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(895)
								Float tmp12 = (Float(byteArray->length) / Float((int)4));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(895)
								int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(895)
								int length = tmp13;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(897)
								{
									HX_STACK_LINE(897)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(897)
									while((true)){
										HX_STACK_LINE(897)
										bool tmp14 = (_g1 < length);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(897)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(897)
										if ((tmp15)){
											HX_STACK_LINE(897)
											break;
										}
										HX_STACK_LINE(897)
										int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(897)
										int i = tmp16;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(899)
										int tmp17 = srcData->readUnsignedInt();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(899)
										color = tmp17;
										HX_STACK_LINE(900)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(900)
										tmp18 = hx::TCast< ::Int >::cast(color);
										HX_STACK_LINE(900)
										byteArray->writeUnsignedInt(tmp18);
									}
								}
								HX_STACK_LINE(904)
								srcData->position = (int)0;
								HX_STACK_LINE(905)
								byteArray->position = (int)0;
							}
							;break;
							default: {
								HX_STACK_LINE(909)
								::lime::utils::ByteArray srcData = byteArray;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(910)
								::lime::utils::ByteArray tmp11 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(910)
								byteArray = tmp11;
								HX_STACK_LINE(915)
								int color;		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(916)
								Float tmp12 = (Float(byteArray->length) / Float((int)4));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(916)
								int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(916)
								int length = tmp13;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(918)
								{
									HX_STACK_LINE(918)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(918)
									while((true)){
										HX_STACK_LINE(918)
										bool tmp14 = (_g1 < length);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(918)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(918)
										if ((tmp15)){
											HX_STACK_LINE(918)
											break;
										}
										HX_STACK_LINE(918)
										int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(918)
										int i = tmp16;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(920)
										int tmp17 = srcData->readUnsignedInt();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(920)
										color = tmp17;
										HX_STACK_LINE(921)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(921)
										tmp18 = hx::TCast< ::Int >::cast(color);
										HX_STACK_LINE(921)
										byteArray->writeUnsignedInt(tmp18);
									}
								}
								HX_STACK_LINE(925)
								srcData->position = (int)0;
								HX_STACK_LINE(926)
								byteArray->position = (int)0;
							}
						}
					}
					else{
						HX_STACK_LINE(909)
						::lime::utils::ByteArray srcData = byteArray;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(910)
						::lime::utils::ByteArray tmp10 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(910)
						byteArray = tmp10;
						HX_STACK_LINE(915)
						int color;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(916)
						Float tmp11 = (Float(byteArray->length) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(916)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(916)
						int length = tmp12;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(918)
						{
							HX_STACK_LINE(918)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(918)
							while((true)){
								HX_STACK_LINE(918)
								bool tmp13 = (_g1 < length);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(918)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(918)
								if ((tmp14)){
									HX_STACK_LINE(918)
									break;
								}
								HX_STACK_LINE(918)
								int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(918)
								int i = tmp15;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(920)
								int tmp16 = srcData->readUnsignedInt();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(920)
								color = tmp16;
								HX_STACK_LINE(921)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(921)
								tmp17 = hx::TCast< ::Int >::cast(color);
								HX_STACK_LINE(921)
								byteArray->writeUnsignedInt(tmp17);
							}
						}
						HX_STACK_LINE(925)
						srcData->position = (int)0;
						HX_STACK_LINE(926)
						byteArray->position = (int)0;
					}
					HX_STACK_LINE(930)
					::lime::graphics::ImageBuffer tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(930)
					tmp10->__srcBitmapData->__Field(HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"), hx::paccDynamic )(rect->__toFlashRectangle(),byteArray);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixels,(void))

::lime::math::Rectangle Image_obj::__clipRect( ::lime::math::Rectangle r){
	HX_STACK_FRAME("lime.graphics.Image","__clipRect",0xd30737f1,"lime.graphics.Image.__clipRect","lime/graphics/Image.hx",968,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(970)
	bool tmp = (r == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(970)
	if ((tmp)){
		HX_STACK_LINE(970)
		return null();
	}
	HX_STACK_LINE(972)
	bool tmp1 = (r->x < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(972)
	if ((tmp1)){
		HX_STACK_LINE(974)
		Float tmp2 = r->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(974)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(974)
		hx::SubEq(r->width,tmp3);
		HX_STACK_LINE(975)
		r->x = (int)0;
		HX_STACK_LINE(977)
		Float tmp4 = (r->x + r->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(977)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(977)
		if ((tmp5)){
			HX_STACK_LINE(977)
			return null();
		}
	}
	HX_STACK_LINE(981)
	bool tmp2 = (r->y < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(981)
	if ((tmp2)){
		HX_STACK_LINE(983)
		Float tmp3 = r->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(983)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(983)
		hx::SubEq(r->height,tmp4);
		HX_STACK_LINE(984)
		r->y = (int)0;
		HX_STACK_LINE(986)
		Float tmp5 = (r->y + r->height);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(986)
		bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(986)
		if ((tmp6)){
			HX_STACK_LINE(986)
			return null();
		}
	}
	HX_STACK_LINE(990)
	Float tmp3 = (r->x + r->width);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(990)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(990)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(990)
	if ((tmp5)){
		HX_STACK_LINE(992)
		Float tmp6 = (r->x + r->width);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(992)
		int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(992)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(992)
		hx::SubEq(r->width,tmp8);
		HX_STACK_LINE(994)
		bool tmp9 = (r->width <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(994)
		if ((tmp9)){
			HX_STACK_LINE(994)
			return null();
		}
	}
	HX_STACK_LINE(998)
	Float tmp6 = (r->y + r->height);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(998)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(998)
	bool tmp8 = (tmp6 >= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(998)
	if ((tmp8)){
		HX_STACK_LINE(1000)
		Float tmp9 = (r->y + r->height);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1000)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1000)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1000)
		hx::SubEq(r->height,tmp11);
		HX_STACK_LINE(1002)
		bool tmp12 = (r->height <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1002)
		if ((tmp12)){
			HX_STACK_LINE(1002)
			return null();
		}
	}
	HX_STACK_LINE(1006)
	::lime::math::Rectangle tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1006)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__clipRect,return )

Void Image_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBase64",0x71681bb6,"lime.graphics.Image.__fromBase64","lime/graphics/Image.hx",1011,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromBase64,(void))

Void Image_obj::__fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBytes",0x40972c24,"lime.graphics.Image.__fromBytes","lime/graphics/Image.hx",1041,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1069)
		Dynamic tmp = ::lime::graphics::Image_obj::lime_image_load(bytes);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1069)
		Dynamic data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1071)
		bool tmp1 = (data != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1071)
		if ((tmp1)){
			HX_STACK_LINE(1073)
			::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1073)
			{
				HX_STACK_LINE(1073)
				int tmp3 = data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1073)
				::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::__new(tmp3,data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1073)
				::haxe::io::Bytes buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1073)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1073)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1073)
				if ((tmp5)){
					HX_STACK_LINE(1073)
					::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1073)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(1073)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1073)
					if ((tmp6)){
						HX_STACK_LINE(1073)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1073)
						{
							HX_STACK_LINE(1073)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1073)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1073)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(1073)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1073)
							_this->length = tmp9;
							HX_STACK_LINE(1073)
							int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1073)
							_this->byteLength = tmp10;
							HX_STACK_LINE(1073)
							::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1073)
							{
								HX_STACK_LINE(1073)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(1073)
								int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1073)
								::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1073)
								this2 = tmp13;
								HX_STACK_LINE(1073)
								tmp11 = this2;
							}
							HX_STACK_LINE(1073)
							_this->buffer = tmp11;
							HX_STACK_LINE(1073)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(1073)
							tmp7 = _this;
						}
						HX_STACK_LINE(1073)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(1073)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1073)
						if ((tmp7)){
							HX_STACK_LINE(1073)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1073)
							{
								HX_STACK_LINE(1073)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1073)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1073)
								::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1073)
								::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(1073)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1073)
								int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(1073)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1073)
								int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(1073)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1073)
								int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(1073)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(1073)
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1073)
								int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1073)
								bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1073)
								if ((tmp16)){
									HX_STACK_LINE(1073)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(1073)
									int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1073)
									int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(1073)
									::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1073)
									{
										HX_STACK_LINE(1073)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(1073)
										int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1073)
										::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1073)
										this2 = tmp20;
										HX_STACK_LINE(1073)
										tmp18 = this2;
									}
									HX_STACK_LINE(1073)
									_this->buffer = tmp18;
									HX_STACK_LINE(1073)
									::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1073)
									int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1073)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1073)
									_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
								}
								else{
									HX_STACK_LINE(1073)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(1073)
								int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1073)
								_this->byteLength = tmp17;
								HX_STACK_LINE(1073)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1073)
								_this->length = srcLength;
								HX_STACK_LINE(1073)
								tmp8 = _this;
							}
							HX_STACK_LINE(1073)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(1073)
							bool tmp8 = (buffer != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1073)
							if ((tmp8)){
								HX_STACK_LINE(1073)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1073)
								{
									HX_STACK_LINE(1073)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1073)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1073)
									bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1073)
									if ((tmp11)){
										HX_STACK_LINE(1073)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(1073)
									int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1073)
									bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1073)
									if ((tmp13)){
										HX_STACK_LINE(1073)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(1073)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(1073)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(1073)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(1073)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1073)
									if ((tmp14)){
										HX_STACK_LINE(1073)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1073)
										newByteLength = tmp15;
										HX_STACK_LINE(1073)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1073)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1073)
										if ((tmp17)){
											HX_STACK_LINE(1073)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1073)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1073)
										if ((tmp18)){
											HX_STACK_LINE(1073)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(1073)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1073)
										newByteLength = tmp15;
										HX_STACK_LINE(1073)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1073)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(1073)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1073)
										if ((tmp17)){
											HX_STACK_LINE(1073)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(1073)
									_this->buffer = buffer;
									HX_STACK_LINE(1073)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1073)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(1073)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1073)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1073)
									_this->length = tmp16;
									HX_STACK_LINE(1073)
									tmp9 = _this;
								}
								HX_STACK_LINE(1073)
								this1 = tmp9;
							}
							else{
								HX_STACK_LINE(1073)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(1073)
				tmp2 = this1;
			}
			HX_STACK_LINE(1073)
			int tmp3 = data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1073)
			int tmp4 = data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1073)
			int tmp5 = data->__Field(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1073)
			::lime::graphics::ImageBuffer tmp6 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1073)
			this->__fromImageBuffer(tmp6);
			HX_STACK_LINE(1075)
			bool tmp7 = (onload != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1075)
			if ((tmp7)){
				HX_STACK_LINE(1077)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,__fromBytes,(void))

Void Image_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromFile",0x1c2444e3,"lime.graphics.Image.__fromFile","lime/graphics/Image.hx",1092,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1132)
		::lime::graphics::ImageBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(1134)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1134)
		{
			HX_STACK_LINE(1134)
			bool tmp1 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1134)
			bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1134)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1134)
			tmp = !(tmp3);
		}
		HX_STACK_LINE(1134)
		if ((tmp)){
			HX_STACK_LINE(1136)
			Dynamic tmp1 = ::lime::graphics::Image_obj::lime_image_load(path);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1136)
			Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1138)
			bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1138)
			if ((tmp2)){
				HX_STACK_LINE(1140)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					int tmp4 = data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1140)
					::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::__new(tmp4,data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1140)
					::haxe::io::Bytes buffer1 = tmp5;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(1140)
					::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(1140)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1140)
					if ((tmp6)){
						HX_STACK_LINE(1140)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1140)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(1140)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1140)
						if ((tmp7)){
							HX_STACK_LINE(1140)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1140)
							{
								HX_STACK_LINE(1140)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1140)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1140)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1140)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1140)
								_this->length = tmp10;
								HX_STACK_LINE(1140)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1140)
								_this->byteLength = tmp11;
								HX_STACK_LINE(1140)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1140)
								{
									HX_STACK_LINE(1140)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1140)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1140)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1140)
									this2 = tmp14;
									HX_STACK_LINE(1140)
									tmp12 = this2;
								}
								HX_STACK_LINE(1140)
								_this->buffer = tmp12;
								HX_STACK_LINE(1140)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(1140)
								tmp8 = _this;
							}
							HX_STACK_LINE(1140)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(1140)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1140)
							if ((tmp8)){
								HX_STACK_LINE(1140)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1140)
								{
									HX_STACK_LINE(1140)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1140)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1140)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1140)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(1140)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1140)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(1140)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1140)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(1140)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1140)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(1140)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(1140)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1140)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1140)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1140)
									if ((tmp17)){
										HX_STACK_LINE(1140)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(1140)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1140)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(1140)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1140)
										{
											HX_STACK_LINE(1140)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(1140)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1140)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1140)
											this2 = tmp21;
											HX_STACK_LINE(1140)
											tmp19 = this2;
										}
										HX_STACK_LINE(1140)
										_this->buffer = tmp19;
										HX_STACK_LINE(1140)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1140)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1140)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1140)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(1140)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(1140)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1140)
									_this->byteLength = tmp18;
									HX_STACK_LINE(1140)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1140)
									_this->length = srcLength;
									HX_STACK_LINE(1140)
									tmp9 = _this;
								}
								HX_STACK_LINE(1140)
								this1 = tmp9;
							}
							else{
								HX_STACK_LINE(1140)
								bool tmp9 = (buffer1 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1140)
								if ((tmp9)){
									HX_STACK_LINE(1140)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1140)
									{
										HX_STACK_LINE(1140)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1140)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1140)
										bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1140)
										if ((tmp12)){
											HX_STACK_LINE(1140)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1140)
										int tmp13 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1140)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1140)
										if ((tmp14)){
											HX_STACK_LINE(1140)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1140)
										int bufferByteLength = buffer1->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(1140)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(1140)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(1140)
										bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1140)
										if ((tmp15)){
											HX_STACK_LINE(1140)
											int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1140)
											newByteLength = tmp16;
											HX_STACK_LINE(1140)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1140)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1140)
											if ((tmp18)){
												HX_STACK_LINE(1140)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
											HX_STACK_LINE(1140)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1140)
											if ((tmp19)){
												HX_STACK_LINE(1140)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(1140)
											int tmp16 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1140)
											newByteLength = tmp16;
											HX_STACK_LINE(1140)
											int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1140)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(1140)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1140)
											if ((tmp18)){
												HX_STACK_LINE(1140)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(1140)
										_this->buffer = buffer1;
										HX_STACK_LINE(1140)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(1140)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(1140)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1140)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1140)
										_this->length = tmp17;
										HX_STACK_LINE(1140)
										tmp10 = _this;
									}
									HX_STACK_LINE(1140)
									this1 = tmp10;
								}
								else{
									HX_STACK_LINE(1140)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(1140)
					tmp3 = this1;
				}
				HX_STACK_LINE(1140)
				::lime::utils::ArrayBufferView u8a = tmp3;		HX_STACK_VAR(u8a,"u8a");
				HX_STACK_LINE(1141)
				::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(u8a,data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),data->__Field(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1141)
				buffer = tmp4;
			}
		}
		HX_STACK_LINE(1185)
		bool tmp1 = (buffer != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1185)
		if ((tmp1)){
			HX_STACK_LINE(1187)
			::lime::graphics::ImageBuffer tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1187)
			this->__fromImageBuffer(tmp2);
			HX_STACK_LINE(1189)
			bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1189)
			if ((tmp3)){
				HX_STACK_LINE(1191)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromFile,(void))

Void Image_obj::__fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromImageBuffer",0xe152fb34,"lime.graphics.Image.__fromImageBuffer","lime/graphics/Image.hx",1206,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(1208)
		this->buffer = buffer;
		HX_STACK_LINE(1210)
		bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1210)
		if ((tmp)){
			HX_STACK_LINE(1212)
			int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1212)
			bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1212)
			if ((tmp2)){
				HX_STACK_LINE(1214)
				this->width = buffer->width;
			}
			HX_STACK_LINE(1218)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1218)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1218)
			if ((tmp4)){
				HX_STACK_LINE(1220)
				this->height = buffer->height;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__fromImageBuffer,(void))

::lime::utils::ArrayBufferView Image_obj::get_data( ){
	HX_STACK_FRAME("lime.graphics.Image","get_data",0x7986ad30,"lime.graphics.Image.get_data","lime/graphics/Image.hx",1267,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1269)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1269)
	::lime::utils::ArrayBufferView tmp1 = tmp->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1269)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1269)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1269)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1269)
	if ((tmp3)){
		HX_STACK_LINE(1269)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1269)
		::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1269)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1269)
		int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1269)
		tmp4 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(1269)
		tmp4 = false;
	}
	HX_STACK_LINE(1269)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1269)
	if ((tmp4)){
		HX_STACK_LINE(1269)
		::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1269)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1269)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1269)
		tmp5 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(1269)
		tmp5 = false;
	}
	HX_STACK_LINE(1269)
	if ((tmp5)){
	}
	HX_STACK_LINE(1286)
	::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1286)
	::lime::utils::ArrayBufferView tmp7 = tmp6->data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1286)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

::lime::utils::ArrayBufferView Image_obj::set_data( ::lime::utils::ArrayBufferView value){
	HX_STACK_FRAME("lime.graphics.Image","set_data",0x27e406a4,"lime.graphics.Image.set_data","lime/graphics/Image.hx",1291,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1293)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1293)
	::lime::utils::ArrayBufferView tmp1 = tmp->data = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1293)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

int Image_obj::get_format( ){
	HX_STACK_FRAME("lime.graphics.Image","get_format",0xc57a33bd,"lime.graphics.Image.get_format","lime/graphics/Image.hx",1298,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1300)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1300)
	int tmp1 = tmp->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1300)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_format,return )

int Image_obj::set_format( int value){
	HX_STACK_FRAME("lime.graphics.Image","set_format",0xc8f7d231,"lime.graphics.Image.set_format","lime/graphics/Image.hx",1305,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1307)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1307)
	int tmp1 = tmp->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1307)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1307)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1307)
	if ((tmp3)){
		HX_STACK_LINE(1309)
		::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1309)
		::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1309)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1313)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1313)
				::lime::graphics::utils::ImageDataUtil_obj::setFormat(hx::ObjectPtr<OBJ_>(this),tmp5);
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1321)
	::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1321)
	int tmp5 = tmp4->format = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1321)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_format,return )

bool Image_obj::get_powerOfTwo( ){
	HX_STACK_FRAME("lime.graphics.Image","get_powerOfTwo",0x62ee1df6,"lime.graphics.Image.get_powerOfTwo","lime/graphics/Image.hx",1326,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1328)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1328)
	int tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1328)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1328)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1328)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1328)
	if ((tmp3)){
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1328)
		int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1328)
		int tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1328)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1328)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1328)
		int tmp15 = ~(int)(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1328)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1328)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1328)
		int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1328)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1328)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1328)
		int tmp21 = (int(tmp8) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1328)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1328)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp24 = this->buffer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1328)
		int tmp27 = tmp26->width;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1328)
		tmp4 = (tmp23 == tmp27);
	}
	else{
		HX_STACK_LINE(1328)
		tmp4 = false;
	}
	HX_STACK_LINE(1328)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1328)
	if ((tmp4)){
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1328)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1328)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1328)
		bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1328)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1328)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1328)
		if ((tmp11)){
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1328)
			int tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1328)
			int tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1328)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1328)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1328)
			int tmp22 = ~(int)(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1328)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1328)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1328)
			int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1328)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1328)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1328)
			int tmp28 = (int(tmp15) & int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1328)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1328)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp31 = this->buffer;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1328)
			::lime::graphics::ImageBuffer tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1328)
			int tmp34 = tmp33->height;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1328)
			tmp5 = (tmp30 == tmp34);
		}
		else{
			HX_STACK_LINE(1328)
			tmp5 = false;
		}
	}
	else{
		HX_STACK_LINE(1328)
		tmp5 = false;
	}
	HX_STACK_LINE(1328)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_powerOfTwo",0x830e066a,"lime.graphics.Image.set_powerOfTwo","lime/graphics/Image.hx",1333,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1335)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1335)
	bool tmp1 = this->get_powerOfTwo();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1335)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1335)
	if ((tmp2)){
		HX_STACK_LINE(1337)
		int newWidth = (int)1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(1338)
		int newHeight = (int)1;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(1340)
		while((true)){
			HX_STACK_LINE(1340)
			int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1340)
			::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1340)
			int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1340)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1340)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1340)
			if ((tmp7)){
				HX_STACK_LINE(1340)
				break;
			}
			HX_STACK_LINE(1342)
			hx::ShlEq(newWidth,(int)1);
		}
		HX_STACK_LINE(1346)
		while((true)){
			HX_STACK_LINE(1346)
			int tmp3 = newHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1346)
			::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1346)
			int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1346)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1346)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1346)
			if ((tmp7)){
				HX_STACK_LINE(1346)
				break;
			}
			HX_STACK_LINE(1348)
			hx::ShlEq(newHeight,(int)1);
		}
		HX_STACK_LINE(1352)
		{
			HX_STACK_LINE(1352)
			::lime::graphics::ImageType tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1352)
			::lime::graphics::ImageType _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1352)
			switch( (int)(_g->__Index())){
				case (int)0: {
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1360)
					int tmp4 = newWidth;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1360)
					int tmp5 = newHeight;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1360)
					::lime::graphics::utils::ImageDataUtil_obj::resizeBuffer(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1378)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1378)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied( ){
	HX_STACK_FRAME("lime.graphics.Image","get_premultiplied",0xc1478990,"lime.graphics.Image.get_premultiplied","lime/graphics/Image.hx",1383,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1385)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1385)
	bool tmp1 = tmp->premultiplied;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1385)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_premultiplied",0xe4b5619c,"lime.graphics.Image.set_premultiplied","lime/graphics/Image.hx",1390,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1392)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1392)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1392)
	if ((tmp)){
		HX_STACK_LINE(1392)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1392)
		::lime::graphics::ImageBuffer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1392)
		bool tmp4 = tmp3->premultiplied;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1392)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1392)
		tmp1 = !(tmp5);
	}
	else{
		HX_STACK_LINE(1392)
		tmp1 = false;
	}
	HX_STACK_LINE(1392)
	if ((tmp1)){
		HX_STACK_LINE(1394)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1394)
		::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1394)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1402)
				::lime::graphics::utils::ImageDataUtil_obj::multiplyAlpha(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	else{
		HX_STACK_LINE(1410)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1410)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1410)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1410)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1410)
		if ((tmp4)){
			HX_STACK_LINE(1410)
			::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1410)
			::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1410)
			tmp5 = tmp7->premultiplied;
		}
		else{
			HX_STACK_LINE(1410)
			tmp5 = false;
		}
		HX_STACK_LINE(1410)
		if ((tmp5)){
			HX_STACK_LINE(1412)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1412)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1412)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(1420)
					::lime::graphics::utils::ImageDataUtil_obj::unmultiplyAlpha(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1430)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1430)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

::lime::math::Rectangle Image_obj::get_rect( ){
	HX_STACK_FRAME("lime.graphics.Image","get_rect",0x82caa42a,"lime.graphics.Image.get_rect","lime/graphics/Image.hx",1435,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1437)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1437)
	int tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1437)
	::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1437)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

Dynamic Image_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.Image","get_src",0x66c2929e,"lime.graphics.Image.get_src","lime/graphics/Image.hx",1442,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1444)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1444)
	Dynamic tmp1 = tmp->get_src();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1444)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

Dynamic Image_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.Image","set_src",0x59c423aa,"lime.graphics.Image.set_src","lime/graphics/Image.hx",1449,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1451)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1451)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1451)
	Dynamic tmp2 = tmp->set_src(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1451)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent( ){
	HX_STACK_FRAME("lime.graphics.Image","get_transparent",0xe1ee610c,"lime.graphics.Image.get_transparent","lime/graphics/Image.hx",1456,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1458)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1458)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1458)
	if ((tmp1)){
		HX_STACK_LINE(1458)
		return false;
	}
	HX_STACK_LINE(1459)
	::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1459)
	bool tmp3 = tmp2->transparent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1459)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_transparent",0xddb9de18,"lime.graphics.Image.set_transparent","lime/graphics/Image.hx",1464,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1467)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1467)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1467)
	if ((tmp1)){
		HX_STACK_LINE(1467)
		return false;
	}
	HX_STACK_LINE(1468)
	::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1468)
	bool tmp3 = tmp2->transparent = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1468)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

::String Image_obj::__base64Chars;

::haxe::crypto::BaseCode Image_obj::__base64Encoder;

::lime::graphics::Image Image_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBase64",0x6fd03756,"lime.graphics.Image.fromBase64","lime/graphics/Image.hx",449,0xc7b862ad)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(451)
	bool tmp = (base64 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	if ((tmp)){
		HX_STACK_LINE(451)
		return null();
	}
	HX_STACK_LINE(452)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(453)
	::String tmp2 = base64;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(453)
	Dynamic tmp4 = onload;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(453)
	image->__fromBase64(tmp2,tmp3,tmp4);
	HX_STACK_LINE(454)
	::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(454)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromBase64,return )

::lime::graphics::Image Image_obj::fromBitmapData( Dynamic bitmapData){
	HX_STACK_FRAME("lime.graphics.Image","fromBitmapData",0x2e36df00,"lime.graphics.Image.fromBitmapData","lime/graphics/Image.hx",459,0xc7b862ad)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(461)
	bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	if ((tmp)){
		HX_STACK_LINE(461)
		return null();
	}
	HX_STACK_LINE(462)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),bitmapData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bitmapData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(463)
	buffer->__srcBitmapData = bitmapData;
	HX_STACK_LINE(464)
	::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(464)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

::lime::graphics::Image Image_obj::fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBytes",0x36406484,"lime.graphics.Image.fromBytes","lime/graphics/Image.hx",469,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(471)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	if ((tmp)){
		HX_STACK_LINE(471)
		return null();
	}
	HX_STACK_LINE(472)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(472)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(473)
	::lime::utils::ByteArray tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(473)
	Dynamic tmp3 = onload;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(473)
	image->__fromBytes(tmp2,tmp3);
	HX_STACK_LINE(474)
	::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(474)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBytes,return )

::lime::graphics::Image Image_obj::fromCanvas( Dynamic canvas){
	HX_STACK_FRAME("lime.graphics.Image","fromCanvas",0xd2ea8e9f,"lime.graphics.Image.fromCanvas","lime/graphics/Image.hx",479,0xc7b862ad)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_LINE(481)
	bool tmp = (canvas == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(481)
	if ((tmp)){
		HX_STACK_LINE(481)
		return null();
	}
	HX_STACK_LINE(482)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),canvas->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),canvas->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(483)
	Dynamic tmp2 = canvas;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	buffer->set_src(tmp2);
	HX_STACK_LINE(484)
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

::lime::graphics::Image Image_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("lime.graphics.Image","fromFile",0x58f03883,"lime.graphics.Image.fromFile","lime/graphics/Image.hx",489,0xc7b862ad)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(491)
	::lime::graphics::Image tmp = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(491)
	::lime::graphics::Image image = tmp;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(492)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(492)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(492)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(492)
	image->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(493)
	::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(493)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromFile,return )

::lime::graphics::Image Image_obj::fromImageElement( Dynamic image){
	HX_STACK_FRAME("lime.graphics.Image","fromImageElement",0x196571a8,"lime.graphics.Image.fromImageElement","lime/graphics/Image.hx",498,0xc7b862ad)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(500)
	bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	if ((tmp)){
		HX_STACK_LINE(500)
		return null();
	}
	HX_STACK_LINE(501)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),image->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),image->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(502)
	Dynamic tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(502)
	buffer->set_src(tmp2);
	HX_STACK_LINE(503)
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(503)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

::String Image_obj::__base64Encode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__base64Encode",0x6ec3d362,"lime.graphics.Image.__base64Encode","lime/graphics/Image.hx",961,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(961)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__base64Encode,return )

bool Image_obj::__isJPG( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isJPG",0x6ba35b1a,"lime.graphics.Image.__isJPG","lime/graphics/Image.hx",1229,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1231)
	bytes->position = (int)0;
	HX_STACK_LINE(1232)
	bool tmp = (bytes->position < bytes->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1232)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1232)
	if ((tmp)){
		HX_STACK_LINE(1232)
		int tmp2 = (bytes->position)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1232)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1232)
		tmp1 = bytes->b->__get(pos);
	}
	else{
		HX_STACK_LINE(1232)
		tmp1 = bytes->ThrowEOFi();
	}
	HX_STACK_LINE(1232)
	bool tmp2 = (tmp1 == (int)255);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1232)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1232)
	if ((tmp2)){
		HX_STACK_LINE(1232)
		bool tmp4 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1232)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1232)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1232)
		bool tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1232)
		if ((tmp7)){
			HX_STACK_LINE(1232)
			int tmp8 = (bytes->position)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1232)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1232)
			int pos = tmp9;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1232)
			int tmp10 = bytes->b->__get(pos);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1232)
			tmp6 = tmp10;
		}
		else{
			HX_STACK_LINE(1232)
			int tmp8 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1232)
			tmp6 = tmp8;
		}
		HX_STACK_LINE(1232)
		tmp3 = (tmp6 == (int)216);
	}
	else{
		HX_STACK_LINE(1232)
		tmp3 = false;
	}
	HX_STACK_LINE(1232)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isJPG,return )

bool Image_obj::__isPNG( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isPNG",0x6ba7e6e2,"lime.graphics.Image.__isPNG","lime/graphics/Image.hx",1237,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1239)
	bytes->position = (int)0;
	HX_STACK_LINE(1240)
	bool tmp = (bytes->position < bytes->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1240)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1240)
	if ((tmp)){
		HX_STACK_LINE(1240)
		int tmp2 = (bytes->position)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1240)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1240)
		tmp1 = bytes->b->__get(pos);
	}
	else{
		HX_STACK_LINE(1240)
		tmp1 = bytes->ThrowEOFi();
	}
	HX_STACK_LINE(1240)
	bool tmp2 = (tmp1 == (int)137);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1240)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1240)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1240)
	if ((tmp3)){
		HX_STACK_LINE(1240)
		bool tmp5 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1240)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1240)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1240)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1240)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1240)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1240)
		if ((tmp10)){
			HX_STACK_LINE(1240)
			int tmp11 = (bytes->position)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1240)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1240)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1240)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp14 = bytes->b->__get(pos);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1240)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1240)
			tmp8 = tmp15;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp11 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1240)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1240)
			tmp8 = tmp12;
		}
		HX_STACK_LINE(1240)
		tmp4 = (tmp8 == (int)80);
	}
	else{
		HX_STACK_LINE(1240)
		tmp4 = false;
	}
	HX_STACK_LINE(1240)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1240)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1240)
	if ((tmp5)){
		HX_STACK_LINE(1240)
		bool tmp7 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1240)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1240)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1240)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1240)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1240)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1240)
		if ((tmp12)){
			HX_STACK_LINE(1240)
			int tmp13 = (bytes->position)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1240)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1240)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1240)
			int pos = tmp15;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp16 = bytes->b->__get(pos);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1240)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1240)
			tmp10 = tmp17;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp13 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1240)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1240)
			tmp10 = tmp14;
		}
		HX_STACK_LINE(1240)
		tmp6 = (tmp10 == (int)78);
	}
	else{
		HX_STACK_LINE(1240)
		tmp6 = false;
	}
	HX_STACK_LINE(1240)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1240)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1240)
	if ((tmp7)){
		HX_STACK_LINE(1240)
		bool tmp9 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1240)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1240)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1240)
		int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1240)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1240)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1240)
		if ((tmp14)){
			HX_STACK_LINE(1240)
			int tmp15 = (bytes->position)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1240)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1240)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1240)
			int pos = tmp17;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp18 = bytes->b->__get(pos);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1240)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1240)
			tmp12 = tmp19;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp15 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1240)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1240)
			tmp12 = tmp16;
		}
		HX_STACK_LINE(1240)
		tmp8 = (tmp12 == (int)71);
	}
	else{
		HX_STACK_LINE(1240)
		tmp8 = false;
	}
	HX_STACK_LINE(1240)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1240)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1240)
	if ((tmp9)){
		HX_STACK_LINE(1240)
		bool tmp11 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1240)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1240)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1240)
		int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1240)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1240)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1240)
		if ((tmp16)){
			HX_STACK_LINE(1240)
			int tmp17 = (bytes->position)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1240)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1240)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1240)
			int pos = tmp19;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp20 = bytes->b->__get(pos);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1240)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1240)
			tmp14 = tmp21;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp17 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1240)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1240)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(1240)
		tmp10 = (tmp14 == (int)13);
	}
	else{
		HX_STACK_LINE(1240)
		tmp10 = false;
	}
	HX_STACK_LINE(1240)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1240)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1240)
	if ((tmp11)){
		HX_STACK_LINE(1240)
		bool tmp13 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1240)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1240)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1240)
		int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1240)
		bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1240)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1240)
		if ((tmp18)){
			HX_STACK_LINE(1240)
			int tmp19 = (bytes->position)++;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1240)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1240)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1240)
			int pos = tmp21;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp22 = bytes->b->__get(pos);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1240)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1240)
			tmp16 = tmp23;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp19 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1240)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1240)
			tmp16 = tmp20;
		}
		HX_STACK_LINE(1240)
		tmp12 = (tmp16 == (int)10);
	}
	else{
		HX_STACK_LINE(1240)
		tmp12 = false;
	}
	HX_STACK_LINE(1240)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1240)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1240)
	if ((tmp13)){
		HX_STACK_LINE(1240)
		bool tmp15 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1240)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1240)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1240)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1240)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1240)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1240)
		if ((tmp20)){
			HX_STACK_LINE(1240)
			int tmp21 = (bytes->position)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1240)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1240)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1240)
			int pos = tmp23;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp24 = bytes->b->__get(pos);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1240)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1240)
			tmp18 = tmp25;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp21 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1240)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1240)
			tmp18 = tmp22;
		}
		HX_STACK_LINE(1240)
		tmp14 = (tmp18 == (int)26);
	}
	else{
		HX_STACK_LINE(1240)
		tmp14 = false;
	}
	HX_STACK_LINE(1240)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1240)
	if ((tmp14)){
		HX_STACK_LINE(1240)
		bool tmp16 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1240)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1240)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1240)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1240)
		if ((tmp19)){
			HX_STACK_LINE(1240)
			int tmp20 = (bytes->position)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1240)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1240)
			int pos = tmp21;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1240)
			int tmp22 = bytes->b->__get(pos);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1240)
			tmp18 = tmp22;
		}
		else{
			HX_STACK_LINE(1240)
			int tmp20 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1240)
			tmp18 = tmp20;
		}
		HX_STACK_LINE(1240)
		tmp15 = (tmp18 == (int)10);
	}
	else{
		HX_STACK_LINE(1240)
		tmp15 = false;
	}
	HX_STACK_LINE(1240)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isPNG,return )

bool Image_obj::__isGIF( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isGIF",0x6ba10e3d,"lime.graphics.Image.__isGIF","lime/graphics/Image.hx",1244,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1246)
	bytes->position = (int)0;
	HX_STACK_LINE(1248)
	bool tmp = (bytes->position < bytes->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1248)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1248)
	if ((tmp)){
		HX_STACK_LINE(1248)
		int tmp2 = (bytes->position)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1248)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1248)
		tmp1 = bytes->b->__get(pos);
	}
	else{
		HX_STACK_LINE(1248)
		tmp1 = bytes->ThrowEOFi();
	}
	HX_STACK_LINE(1248)
	bool tmp2 = (tmp1 == (int)71);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1248)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1248)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1248)
	if ((tmp3)){
		HX_STACK_LINE(1248)
		bool tmp5 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1248)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1248)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1248)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1248)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1248)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1248)
		if ((tmp10)){
			HX_STACK_LINE(1248)
			int tmp11 = (bytes->position)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1248)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1248)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1248)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1248)
			int tmp14 = bytes->b->__get(pos);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1248)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1248)
			tmp8 = tmp15;
		}
		else{
			HX_STACK_LINE(1248)
			int tmp11 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1248)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1248)
			tmp8 = tmp12;
		}
		HX_STACK_LINE(1248)
		tmp4 = (tmp8 == (int)73);
	}
	else{
		HX_STACK_LINE(1248)
		tmp4 = false;
	}
	HX_STACK_LINE(1248)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1248)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1248)
	if ((tmp5)){
		HX_STACK_LINE(1248)
		bool tmp7 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1248)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1248)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1248)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1248)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1248)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1248)
		if ((tmp12)){
			HX_STACK_LINE(1248)
			int tmp13 = (bytes->position)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1248)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1248)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1248)
			int pos = tmp15;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1248)
			int tmp16 = bytes->b->__get(pos);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1248)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1248)
			tmp10 = tmp17;
		}
		else{
			HX_STACK_LINE(1248)
			int tmp13 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1248)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1248)
			tmp10 = tmp14;
		}
		HX_STACK_LINE(1248)
		tmp6 = (tmp10 == (int)70);
	}
	else{
		HX_STACK_LINE(1248)
		tmp6 = false;
	}
	HX_STACK_LINE(1248)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1248)
	if ((tmp6)){
		HX_STACK_LINE(1248)
		bool tmp8 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1248)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1248)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1248)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1248)
		if ((tmp11)){
			HX_STACK_LINE(1248)
			int tmp12 = (bytes->position)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1248)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1248)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1248)
			int tmp14 = bytes->b->__get(pos);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1248)
			tmp10 = tmp14;
		}
		else{
			HX_STACK_LINE(1248)
			int tmp12 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1248)
			tmp10 = tmp12;
		}
		HX_STACK_LINE(1248)
		tmp7 = (tmp10 == (int)56);
	}
	else{
		HX_STACK_LINE(1248)
		tmp7 = false;
	}
	HX_STACK_LINE(1248)
	if ((tmp7)){
		HX_STACK_LINE(1250)
		bool tmp8 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1250)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1250)
		if ((tmp8)){
			HX_STACK_LINE(1250)
			int tmp10 = (bytes->position)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1250)
			int pos = tmp10;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1250)
			tmp9 = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(1250)
			tmp9 = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(1250)
		int b = tmp9;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1251)
		bool tmp10 = (b == (int)55);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1251)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1251)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1251)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1251)
		if ((tmp12)){
			HX_STACK_LINE(1251)
			tmp13 = (b == (int)57);
		}
		else{
			HX_STACK_LINE(1251)
			tmp13 = true;
		}
		HX_STACK_LINE(1251)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1251)
		if ((tmp13)){
			HX_STACK_LINE(1251)
			bool tmp15 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1251)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1251)
			int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1251)
			bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1251)
			if ((tmp18)){
				HX_STACK_LINE(1251)
				int tmp19 = (bytes->position)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1251)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1251)
				int pos = tmp20;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1251)
				int tmp21 = bytes->b->__get(pos);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1251)
				tmp17 = tmp21;
			}
			else{
				HX_STACK_LINE(1251)
				int tmp19 = bytes->ThrowEOFi();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1251)
				tmp17 = tmp19;
			}
			HX_STACK_LINE(1251)
			tmp14 = (tmp17 == (int)97);
		}
		else{
			HX_STACK_LINE(1251)
			tmp14 = false;
		}
		HX_STACK_LINE(1251)
		return tmp14;
	}
	HX_STACK_LINE(1255)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isGIF,return )

Dynamic Image_obj::lime_image_encode;

Dynamic Image_obj::lime_image_load;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp == hx::paccAlways ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return get_format(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return get_powerOfTwo(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return __clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		if (HX_FIELD_EQ(inName,"set_format") ) { return set_format_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return get_transparent(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return get_premultiplied(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return get_powerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return set_transparent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return __fromImageBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return get_premultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return set_premultiplied_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__isJPG") ) { outValue = __isJPG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { outValue = __isPNG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isGIF") ) { outValue = __isGIF_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { outValue = fromCanvas_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { outValue = __base64Chars; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__base64Encode") ) { outValue = __base64Encode_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { outValue = __base64Encoder; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { outValue = lime_image_load; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { outValue = fromImageElement_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode; return true;  }
	}
	return false;
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return set_format(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return set_powerOfTwo(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return set_transparent(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return set_premultiplied(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { __base64Chars=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { __base64Encoder=ioValue.Cast< ::haxe::crypto::BaseCode >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { lime_image_load=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { lime_image_encode=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::ImageBuffer*/ ,(int)offsetof(Image_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsBool,(int)offsetof(Image_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Image_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::lime::graphics::ImageType*/ ,(int)offsetof(Image_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Image_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Image_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Image_obj::__base64Chars,HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36")},
	{hx::fsObject /*::haxe::crypto::BaseCode*/ ,(void *) &Image_obj::__base64Encoder,HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Image_obj::lime_image_encode,HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Image_obj::lime_image_load,HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("__clipRect","\x34","\x03","\xa3","\xfb"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImageBuffer","\x51","\x6e","\xca","\xca"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("set_format","\x74","\x9d","\x93","\xf1"),
	HX_HCSTRING("get_powerOfTwo","\xb9","\x46","\xa4","\x60"),
	HX_HCSTRING("set_powerOfTwo","\x2d","\x2f","\xc4","\x80"),
	HX_HCSTRING("get_premultiplied","\xad","\xfc","\xbe","\xaa"),
	HX_HCSTRING("set_premultiplied","\xb9","\xd4","\x2c","\xce"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	HX_HCSTRING("set_transparent","\xf5","\x5f","\x67","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_MARK_MEMBER_NAME(Image_obj::lime_image_encode,"lime_image_encode");
	HX_MARK_MEMBER_NAME(Image_obj::lime_image_load,"lime_image_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_VISIT_MEMBER_NAME(Image_obj::lime_image_encode,"lime_image_encode");
	HX_VISIT_MEMBER_NAME(Image_obj::lime_image_load,"lime_image_load");
};

#endif

hx::Class Image_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36"),
	HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromCanvas","\xe2","\x59","\x86","\xfb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImageElement","\x2b","\x91","\x89","\x8f"),
	HX_HCSTRING("__base64Encode","\x25","\xfc","\x79","\x6c"),
	HX_HCSTRING("__isJPG","\xf7","\x37","\xad","\x2b"),
	HX_HCSTRING("__isPNG","\xbf","\xc3","\xb1","\x2b"),
	HX_HCSTRING("__isGIF","\x1a","\xeb","\xaa","\x2b"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),
	::String(null()) };

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.Image","\x91","\x28","\xc1","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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

void Image_obj::__boot()
{
	__base64Chars= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/","\x03","\x41","\x03","\x7f");
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",1481,0xc7b862ad)
		{
			HX_STACK_LINE(1481)
			Dynamic tmp = ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),(int)3,null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1481)
			return tmp;
		}
		return null();
	}
};
	lime_image_encode= _Function_0_1::Block();
	lime_image_load= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
