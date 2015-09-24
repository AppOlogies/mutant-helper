#include <hxcpp.h>

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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__ArrayBufferView_TAError
#include <lime/utils/_ArrayBufferView/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLBucketData_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","new",0x4b51a26c,"openfl._internal.renderer.opengl.utils.GLBucketData.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1492,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1512)
	this->available = false;
	HX_STACK_LINE(1510)
	this->rawIndices = false;
	HX_STACK_LINE(1505)
	this->stride = (int)0;
	HX_STACK_LINE(1504)
	this->rawVerts = false;
	HX_STACK_LINE(1502)
	this->lastVertsSize = (int)0;
	HX_STACK_LINE(1498)
	this->glStart = (int)0;
	HX_STACK_LINE(1497)
	this->glLength = (int)0;
	HX_STACK_LINE(1517)
	this->gl = gl;
	HX_STACK_LINE(1518)
	this->drawMode = gl->TRIANGLE_STRIP;
	HX_STACK_LINE(1519)
	this->verts = Array_obj< Float >::__new();
	HX_STACK_LINE(1520)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(1521)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(Array_obj< ::Dynamic >::__new(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1521)
	this->vertexArray = tmp;
}
;
	return null();
}

//GLBucketData_obj::~GLBucketData_obj() { }

Dynamic GLBucketData_obj::__CreateEmpty() { return  new GLBucketData_obj; }
hx::ObjectPtr< GLBucketData_obj > GLBucketData_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLBucketData_obj > _result_ = new GLBucketData_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLBucketData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBucketData_obj > _result_ = new GLBucketData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLBucketData_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","reset",0x4a67b6db,"openfl._internal.renderer.opengl.utils.GLBucketData.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1524,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1525)
		this->available = true;
		HX_STACK_LINE(1526)
		this->verts = Array_obj< Float >::__new();
		HX_STACK_LINE(1527)
		this->indices = Array_obj< int >::__new();
		HX_STACK_LINE(1528)
		this->glLength = (int)0;
		HX_STACK_LINE(1529)
		this->glStart = (int)0;
		HX_STACK_LINE(1530)
		this->stride = (int)0;
		HX_STACK_LINE(1531)
		this->rawVerts = false;
		HX_STACK_LINE(1532)
		this->rawIndices = false;
		HX_STACK_LINE(1533)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1533)
		this->drawMode = tmp->TRIANGLE_STRIP;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucketData_obj,reset,(void))

Void GLBucketData_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","upload",0x5439c775,"openfl._internal.renderer.opengl.utils.GLBucketData.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1536,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1539)
		bool tmp = this->rawVerts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1539)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1539)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1539)
		if ((tmp1)){
			HX_STACK_LINE(1539)
			::lime::utils::ArrayBufferView tmp3 = this->glVerts;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1539)
			::lime::utils::ArrayBufferView tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1539)
			::lime::utils::ArrayBufferView tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1539)
			tmp2 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(1539)
			tmp2 = false;
		}
		HX_STACK_LINE(1539)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1539)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1539)
		if ((tmp3)){
			HX_STACK_LINE(1539)
			::lime::utils::ArrayBufferView tmp5 = this->glVerts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1539)
			::lime::utils::ArrayBufferView tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1539)
			::lime::utils::ArrayBufferView tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1539)
			int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1539)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1539)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1539)
			tmp4 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(1539)
			tmp4 = false;
		}
		HX_STACK_LINE(1539)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1539)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1539)
		if ((tmp5)){
			HX_STACK_LINE(1539)
			int tmp7 = this->verts->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1539)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1539)
			tmp6 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(1539)
			tmp6 = true;
		}
		HX_STACK_LINE(1539)
		if ((tmp6)){
			HX_STACK_LINE(1541)
			bool tmp7 = this->rawVerts;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1541)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1541)
			if ((tmp8)){
				HX_STACK_LINE(1541)
				::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1541)
				{
					HX_STACK_LINE(1541)
					cpp::ArrayBase array = this->verts;		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(1541)
					::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(1541)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1541)
					if ((tmp10)){
						HX_STACK_LINE(1541)
						::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1541)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(1541)
						bool tmp11 = (array != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1541)
						if ((tmp11)){
							HX_STACK_LINE(1541)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1541)
							{
								HX_STACK_LINE(1541)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1541)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1541)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1541)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(1541)
								int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1541)
								_this->byteLength = tmp14;
								HX_STACK_LINE(1541)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1541)
								{
									HX_STACK_LINE(1541)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1541)
									int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1541)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1541)
									this2 = tmp17;
									HX_STACK_LINE(1541)
									tmp15 = this2;
								}
								HX_STACK_LINE(1541)
								_this->buffer = tmp15;
								HX_STACK_LINE(1541)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(1541)
								tmp12 = _this;
							}
							HX_STACK_LINE(1541)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(1541)
							bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1541)
							if ((tmp12)){
								HX_STACK_LINE(1541)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1541)
								{
									HX_STACK_LINE(1541)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1541)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1541)
									::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1541)
									::haxe::io::Bytes srcData = tmp15;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(1541)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1541)
									int srcLength = tmp16;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(1541)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1541)
									int srcByteOffset = tmp17;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(1541)
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1541)
									int srcElementSize = tmp18;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(1541)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(1541)
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1541)
									int tmp20 = _this->type;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1541)
									bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1541)
									if ((tmp21)){
										HX_STACK_LINE(1541)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(1541)
										int tmp22 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1541)
										int cloneLength = tmp22;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(1541)
										::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1541)
										{
											HX_STACK_LINE(1541)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(1541)
											int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1541)
											::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1541)
											this2 = tmp25;
											HX_STACK_LINE(1541)
											tmp23 = this2;
										}
										HX_STACK_LINE(1541)
										_this->buffer = tmp23;
										HX_STACK_LINE(1541)
										::haxe::io::Bytes tmp24 = srcData;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1541)
										int tmp25 = srcByteOffset;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1541)
										int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1541)
										_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
									}
									else{
										HX_STACK_LINE(1541)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(1541)
									int tmp22 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1541)
									_this->byteLength = tmp22;
									HX_STACK_LINE(1541)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1541)
									_this->length = srcLength;
									HX_STACK_LINE(1541)
									tmp13 = _this;
								}
								HX_STACK_LINE(1541)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(1541)
								bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1541)
								if ((tmp13)){
									HX_STACK_LINE(1541)
									::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1541)
									{
										HX_STACK_LINE(1541)
										::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1541)
										::lime::utils::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1541)
										bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1541)
										if ((tmp16)){
											HX_STACK_LINE(1541)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1541)
										int tmp17 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1541)
										bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1541)
										if ((tmp18)){
											HX_STACK_LINE(1541)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1541)
										int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1541)
										int bufferByteLength = tmp19;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(1541)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(1541)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(1541)
										bool tmp20 = true;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1541)
										if ((tmp20)){
											HX_STACK_LINE(1541)
											int tmp21 = bufferByteLength;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1541)
											newByteLength = tmp21;
											HX_STACK_LINE(1541)
											int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1541)
											bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1541)
											if ((tmp23)){
												HX_STACK_LINE(1541)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
											HX_STACK_LINE(1541)
											bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1541)
											if ((tmp24)){
												HX_STACK_LINE(1541)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(1541)
											int tmp21 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1541)
											newByteLength = tmp21;
											HX_STACK_LINE(1541)
											int tmp22 = newByteLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1541)
											int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(1541)
											bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1541)
											if ((tmp23)){
												HX_STACK_LINE(1541)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(1541)
										_this->buffer = null();
										HX_STACK_LINE(1541)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(1541)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(1541)
										Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1541)
										int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1541)
										_this->length = tmp22;
										HX_STACK_LINE(1541)
										tmp14 = _this;
									}
									HX_STACK_LINE(1541)
									this1 = tmp14;
								}
								else{
									HX_STACK_LINE(1541)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(1541)
					tmp9 = this1;
				}
				HX_STACK_LINE(1541)
				this->glVerts = tmp9;
			}
			HX_STACK_LINE(1543)
			::lime::utils::ArrayBufferView tmp9 = this->glVerts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1543)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp10 = this->vertexArray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1543)
			tmp10->buffer = tmp9->buffer;
			HX_STACK_LINE(1545)
			::lime::utils::ArrayBufferView tmp11 = this->glVerts;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1545)
			int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1545)
			int tmp13 = this->lastVertsSize;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1545)
			bool tmp14 = (tmp12 <= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1545)
			if ((tmp14)){
				HX_STACK_LINE(1546)
				{
					HX_STACK_LINE(1546)
					::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1546)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1546)
					{
						HX_STACK_LINE(1546)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1546)
						{
							HX_STACK_LINE(1546)
							int tmp16 = _this->gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1546)
							bool tmp17 = (buffer == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1546)
							int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1546)
							if ((tmp17)){
								HX_STACK_LINE(1546)
								tmp18 = (int)0;
							}
							else{
								HX_STACK_LINE(1546)
								tmp18 = buffer->id;
							}
							HX_STACK_LINE(1546)
							::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp16,tmp18);
						}
					}
				}
				HX_STACK_LINE(1547)
				int tmp15 = this->glLength;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1547)
				int tmp16 = (tmp15 * (int)4);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1547)
				int tmp17 = this->stride;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1547)
				int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1547)
				int end = tmp18;		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(1548)
				int tmp19 = this->glLength;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1548)
				bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1548)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1548)
				if ((tmp20)){
					HX_STACK_LINE(1548)
					int tmp22 = this->lastVertsSize;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1548)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1548)
					int tmp24 = end;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1548)
					tmp21 = (tmp23 > tmp24);
				}
				else{
					HX_STACK_LINE(1548)
					tmp21 = false;
				}
				HX_STACK_LINE(1548)
				if ((tmp21)){
					HX_STACK_LINE(1549)
					::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1549)
					{
						HX_STACK_LINE(1549)
						::lime::utils::ArrayBufferView tmp23 = this->glVerts;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1549)
						::lime::utils::ArrayBufferView this1 = tmp23;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(1549)
						bool tmp24 = (end == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1549)
						if ((tmp24)){
							HX_STACK_LINE(1549)
							int tmp25 = end;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1549)
							int tmp26 = this1->length;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1549)
							(tmp25 == tmp26);
						}
						HX_STACK_LINE(1549)
						int tmp25 = end;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1549)
						int len = tmp25;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(1549)
						int tmp26 = this1->bytesPerElement;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1549)
						int tmp27 = ((int)0 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1549)
						int byte_offset = tmp27;		HX_STACK_VAR(byte_offset,"byte_offset");
						HX_STACK_LINE(1549)
						::lime::utils::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1549)
						{
							HX_STACK_LINE(1549)
							int tmp29 = this1->type;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1549)
							int _g = tmp29;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1549)
							int tmp30 = _g;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1549)
							switch( (int)(tmp30)){
								case (int)1: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(1549)
									::haxe::io::Bytes tmp31 = this1->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1549)
									::haxe::io::Bytes buffer = tmp31;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(1549)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1549)
									bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1549)
									if ((tmp32)){
										HX_STACK_LINE(1549)
										::lime::utils::ArrayBufferView tmp33 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										this2 = tmp33;
									}
									else{
										HX_STACK_LINE(1549)
										bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1549)
										if ((tmp33)){
											HX_STACK_LINE(1549)
											::lime::utils::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											{
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1549)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(1549)
												int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1549)
												_this->length = tmp36;
												HX_STACK_LINE(1549)
												int tmp37 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1549)
												_this->byteLength = tmp37;
												HX_STACK_LINE(1549)
												::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(1549)
													int tmp39 = _this->byteLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													this3 = tmp40;
													HX_STACK_LINE(1549)
													tmp38 = this3;
												}
												HX_STACK_LINE(1549)
												_this->buffer = tmp38;
												HX_STACK_LINE(1549)
												_this->copyFromArray(((Array< Float >)(null())),null());
												HX_STACK_LINE(1549)
												tmp34 = _this;
											}
											HX_STACK_LINE(1549)
											this2 = tmp34;
										}
										else{
											HX_STACK_LINE(1549)
											bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1549)
											if ((tmp34)){
												HX_STACK_LINE(1549)
												::lime::utils::ArrayBufferView tmp35;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												{
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView _this = tmp36;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1549)
													::haxe::io::Bytes srcData = tmp37;		HX_STACK_VAR(srcData,"srcData");
													HX_STACK_LINE(1549)
													int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1549)
													int srcLength = tmp38;		HX_STACK_VAR(srcLength,"srcLength");
													HX_STACK_LINE(1549)
													int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1549)
													int srcByteOffset = tmp39;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
													HX_STACK_LINE(1549)
													int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1549)
													int srcElementSize = tmp40;		HX_STACK_VAR(srcElementSize,"srcElementSize");
													HX_STACK_LINE(1549)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(1549)
													int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1549)
													int tmp42 = _this->type;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1549)
													bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1549)
													if ((tmp43)){
														HX_STACK_LINE(1549)
														int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
														HX_STACK_LINE(1549)
														int tmp44 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(1549)
														int cloneLength = tmp44;		HX_STACK_VAR(cloneLength,"cloneLength");
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(1549)
														{
															HX_STACK_LINE(1549)
															::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
															HX_STACK_LINE(1549)
															int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(1549)
															::haxe::io::Bytes tmp47 = ::haxe::io::Bytes_obj::alloc(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(1549)
															this3 = tmp47;
															HX_STACK_LINE(1549)
															tmp45 = this3;
														}
														HX_STACK_LINE(1549)
														_this->buffer = tmp45;
														HX_STACK_LINE(1549)
														::haxe::io::Bytes tmp46 = srcData;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(1549)
														int tmp47 = srcByteOffset;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(1549)
														int tmp48 = cloneLength;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(1549)
														_this->buffer->blit((int)0,tmp46,tmp47,tmp48);
													}
													else{
														HX_STACK_LINE(1549)
														HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
													}
													HX_STACK_LINE(1549)
													int tmp44 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1549)
													_this->byteLength = tmp44;
													HX_STACK_LINE(1549)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(1549)
													_this->length = srcLength;
													HX_STACK_LINE(1549)
													tmp35 = _this;
												}
												HX_STACK_LINE(1549)
												this2 = tmp35;
											}
											else{
												HX_STACK_LINE(1549)
												bool tmp35 = (buffer != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1549)
												if ((tmp35)){
													HX_STACK_LINE(1549)
													::lime::utils::ArrayBufferView tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1549)
													{
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView tmp37 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(1549)
														::lime::utils::ArrayBufferView _this = tmp37;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1549)
														bool tmp38 = (byte_offset < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(1549)
														if ((tmp38)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int tmp39 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(1549)
														bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(1549)
														if ((tmp40)){
															HX_STACK_LINE(1549)
															HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
														}
														HX_STACK_LINE(1549)
														int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
														HX_STACK_LINE(1549)
														int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
														HX_STACK_LINE(1549)
														int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
														HX_STACK_LINE(1549)
														bool tmp41 = (len == null());		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(1549)
														if ((tmp41)){
															HX_STACK_LINE(1549)
															int tmp42 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
															HX_STACK_LINE(1549)
															bool tmp45 = (newByteLength < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1549)
															if ((tmp45)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														else{
															HX_STACK_LINE(1549)
															int tmp42 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(1549)
															newByteLength = tmp42;
															HX_STACK_LINE(1549)
															int tmp43 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1549)
															int newRange = tmp43;		HX_STACK_VAR(newRange,"newRange");
															HX_STACK_LINE(1549)
															bool tmp44 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1549)
															if ((tmp44)){
																HX_STACK_LINE(1549)
																HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
															}
														}
														HX_STACK_LINE(1549)
														_this->buffer = buffer;
														HX_STACK_LINE(1549)
														_this->byteOffset = byte_offset;
														HX_STACK_LINE(1549)
														_this->byteLength = newByteLength;
														HX_STACK_LINE(1549)
														Float tmp42 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1549)
														int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1549)
														_this->length = tmp43;
														HX_STACK_LINE(1549)
														tmp36 = _this;
													}
													HX_STACK_LINE(1549)
													this2 = tmp36;
												}
												else{
													HX_STACK_LINE(1549)
													HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
												}
											}
										}
									}
									HX_STACK_LINE(1549)
									tmp28 = this2;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(1549)
									HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
								}
								;break;
							}
						}
						HX_STACK_LINE(1549)
						::lime::utils::ArrayBufferView view = tmp28;		HX_STACK_VAR(view,"view");
						HX_STACK_LINE(1549)
						tmp22 = view;
					}
					HX_STACK_LINE(1549)
					::lime::utils::ArrayBufferView view = tmp22;		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(1550)
					::openfl::_internal::renderer::opengl::utils::VertexArray tmp23 = this->vertexArray;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1550)
					::lime::utils::ArrayBufferView tmp24 = view;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1550)
					tmp23->upload(tmp24);
				}
				else{
					HX_STACK_LINE(1552)
					::openfl::_internal::renderer::opengl::utils::VertexArray tmp22 = this->vertexArray;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1552)
					::lime::utils::ArrayBufferView tmp23 = this->glVerts;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1552)
					tmp22->upload(tmp23);
				}
			}
			else{
				HX_STACK_LINE(1555)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1555)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1555)
				::lime::utils::ArrayBufferView tmp17 = this->glVerts;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1555)
				tmp15->setContext(tmp16,tmp17);
				HX_STACK_LINE(1556)
				::lime::utils::ArrayBufferView tmp18 = this->glVerts;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1556)
				int tmp19 = tmp18->length;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1556)
				this->lastVertsSize = tmp19;
			}
		}
		HX_STACK_LINE(1562)
		int tmp7 = this->glLength;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1562)
		bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1562)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1562)
		if ((tmp8)){
			HX_STACK_LINE(1562)
			bool tmp10 = this->rawIndices;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1562)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1562)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1562)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1562)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1562)
			if ((tmp14)){
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp15 = this->glIndices;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1562)
				bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1562)
				tmp13 = tmp19;
			}
			else{
				HX_STACK_LINE(1562)
				tmp13 = false;
			}
			HX_STACK_LINE(1562)
			bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1562)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1562)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1562)
			if ((tmp17)){
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp18 = this->glIndices;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1562)
				::lime::utils::ArrayBufferView tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1562)
				int tmp22 = tmp21->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1562)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1562)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1562)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1562)
				bool tmp26 = (tmp25 > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1562)
				tmp16 = tmp26;
			}
			else{
				HX_STACK_LINE(1562)
				tmp16 = false;
			}
			HX_STACK_LINE(1562)
			bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1562)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1562)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1562)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1562)
			if ((tmp21)){
				HX_STACK_LINE(1562)
				int tmp22 = this->indices->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1562)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1562)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1562)
				tmp9 = (tmp24 > (int)0);
			}
			else{
				HX_STACK_LINE(1562)
				tmp9 = true;
			}
		}
		else{
			HX_STACK_LINE(1562)
			tmp9 = false;
		}
		HX_STACK_LINE(1562)
		if ((tmp9)){
			HX_STACK_LINE(1564)
			::lime::graphics::opengl::GLBuffer tmp10 = this->indexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1564)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1564)
			if ((tmp11)){
				HX_STACK_LINE(1565)
				int tmp12 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1565)
				Dynamic tmp13 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1565)
				::lime::graphics::opengl::GLBuffer tmp14 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1565)
				this->indexBuffer = tmp14;
			}
			HX_STACK_LINE(1568)
			bool tmp12 = this->rawIndices;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1568)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1568)
			if ((tmp13)){
				HX_STACK_LINE(1568)
				::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1568)
				{
					HX_STACK_LINE(1568)
					cpp::ArrayBase array = this->indices;		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(1568)
					::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(1568)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1568)
					if ((tmp15)){
						HX_STACK_LINE(1568)
						::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1568)
						this1 = tmp16;
					}
					else{
						HX_STACK_LINE(1568)
						bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1568)
						if ((tmp16)){
							HX_STACK_LINE(1568)
							::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1568)
							{
								HX_STACK_LINE(1568)
								::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1568)
								::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1568)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1568)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(1568)
								int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1568)
								_this->byteLength = tmp19;
								HX_STACK_LINE(1568)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1568)
								{
									HX_STACK_LINE(1568)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1568)
									int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1568)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1568)
									this2 = tmp22;
									HX_STACK_LINE(1568)
									tmp20 = this2;
								}
								HX_STACK_LINE(1568)
								_this->buffer = tmp20;
								HX_STACK_LINE(1568)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(1568)
								tmp17 = _this;
							}
							HX_STACK_LINE(1568)
							this1 = tmp17;
						}
						else{
							HX_STACK_LINE(1568)
							bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1568)
							if ((tmp17)){
								HX_STACK_LINE(1568)
								::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1568)
								{
									HX_STACK_LINE(1568)
									::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1568)
									::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1568)
									::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1568)
									::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(1568)
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1568)
									int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(1568)
									int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1568)
									int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(1568)
									int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1568)
									int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(1568)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(1568)
									int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1568)
									int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1568)
									bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1568)
									if ((tmp26)){
										HX_STACK_LINE(1568)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(1568)
										int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1568)
										int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(1568)
										::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1568)
										{
											HX_STACK_LINE(1568)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(1568)
											int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1568)
											::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1568)
											this2 = tmp30;
											HX_STACK_LINE(1568)
											tmp28 = this2;
										}
										HX_STACK_LINE(1568)
										_this->buffer = tmp28;
										HX_STACK_LINE(1568)
										::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1568)
										int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1568)
										int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1568)
										_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
									}
									else{
										HX_STACK_LINE(1568)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(1568)
									int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1568)
									_this->byteLength = tmp27;
									HX_STACK_LINE(1568)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1568)
									_this->length = srcLength;
									HX_STACK_LINE(1568)
									tmp18 = _this;
								}
								HX_STACK_LINE(1568)
								this1 = tmp18;
							}
							else{
								HX_STACK_LINE(1568)
								bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1568)
								if ((tmp18)){
									HX_STACK_LINE(1568)
									::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1568)
									{
										HX_STACK_LINE(1568)
										::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1568)
										::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1568)
										bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1568)
										if ((tmp21)){
											HX_STACK_LINE(1568)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1568)
										int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1568)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1568)
										if ((tmp23)){
											HX_STACK_LINE(1568)
											HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1568)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1568)
										int bufferByteLength = tmp24;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(1568)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(1568)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(1568)
										bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1568)
										if ((tmp25)){
											HX_STACK_LINE(1568)
											int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1568)
											newByteLength = tmp26;
											HX_STACK_LINE(1568)
											int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1568)
											bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1568)
											if ((tmp28)){
												HX_STACK_LINE(1568)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
											HX_STACK_LINE(1568)
											bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1568)
											if ((tmp29)){
												HX_STACK_LINE(1568)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(1568)
											int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1568)
											newByteLength = tmp26;
											HX_STACK_LINE(1568)
											int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1568)
											int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(1568)
											bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1568)
											if ((tmp28)){
												HX_STACK_LINE(1568)
												HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(1568)
										_this->buffer = null();
										HX_STACK_LINE(1568)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(1568)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(1568)
										Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1568)
										int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1568)
										_this->length = tmp27;
										HX_STACK_LINE(1568)
										tmp19 = _this;
									}
									HX_STACK_LINE(1568)
									this1 = tmp19;
								}
								else{
									HX_STACK_LINE(1568)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
								}
							}
						}
					}
					HX_STACK_LINE(1568)
					tmp14 = this1;
				}
				HX_STACK_LINE(1568)
				this->glIndices = tmp14;
			}
			HX_STACK_LINE(1569)
			{
				HX_STACK_LINE(1569)
				::lime::graphics::opengl::GLBuffer tmp14 = this->indexBuffer;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1569)
				::lime::graphics::opengl::GLBuffer buffer = tmp14;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1569)
				{
					HX_STACK_LINE(1569)
					::lime::graphics::GLRenderContext tmp15 = this->gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1569)
					int tmp16 = tmp15->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1569)
					bool tmp17 = (buffer == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1569)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1569)
					if ((tmp17)){
						HX_STACK_LINE(1569)
						tmp18 = (int)0;
					}
					else{
						HX_STACK_LINE(1569)
						tmp18 = buffer->id;
					}
					HX_STACK_LINE(1569)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp16,tmp18);
				}
			}
			HX_STACK_LINE(1570)
			{
				HX_STACK_LINE(1570)
				::lime::utils::ArrayBufferView tmp14 = this->glIndices;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1570)
				::lime::utils::ArrayBufferView data = tmp14;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1570)
				{
					HX_STACK_LINE(1570)
					::lime::graphics::GLRenderContext tmp15 = this->gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1570)
					int tmp16 = tmp15->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1570)
					::haxe::io::Bytes tmp17 = data->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1570)
					int tmp18 = data->byteOffset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1570)
					int tmp19 = data->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1570)
					::lime::graphics::GLRenderContext tmp20 = this->gl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1570)
					int tmp21 = tmp20->STREAM_DRAW;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1570)
					::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp16,tmp17,tmp18,tmp19,tmp21);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucketData_obj,upload,(void))


GLBucketData_obj::GLBucketData_obj()
{
}

void GLBucketData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBucketData);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(drawMode,"drawMode");
	HX_MARK_MEMBER_NAME(glLength,"glLength");
	HX_MARK_MEMBER_NAME(glStart,"glStart");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(glVerts,"glVerts");
	HX_MARK_MEMBER_NAME(lastVertsSize,"lastVertsSize");
	HX_MARK_MEMBER_NAME(verts,"verts");
	HX_MARK_MEMBER_NAME(rawVerts,"rawVerts");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(glIndices,"glIndices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(rawIndices,"rawIndices");
	HX_MARK_MEMBER_NAME(available,"available");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void GLBucketData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(drawMode,"drawMode");
	HX_VISIT_MEMBER_NAME(glLength,"glLength");
	HX_VISIT_MEMBER_NAME(glStart,"glStart");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(glVerts,"glVerts");
	HX_VISIT_MEMBER_NAME(lastVertsSize,"lastVertsSize");
	HX_VISIT_MEMBER_NAME(verts,"verts");
	HX_VISIT_MEMBER_NAME(rawVerts,"rawVerts");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(glIndices,"glIndices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(rawIndices,"rawIndices");
	HX_VISIT_MEMBER_NAME(available,"available");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic GLBucketData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"verts") ) { return verts; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return stride; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"glStart") ) { return glStart; }
		if (HX_FIELD_EQ(inName,"glVerts") ) { return glVerts; }
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawMode") ) { return drawMode; }
		if (HX_FIELD_EQ(inName,"glLength") ) { return glLength; }
		if (HX_FIELD_EQ(inName,"rawVerts") ) { return rawVerts; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glIndices") ) { return glIndices; }
		if (HX_FIELD_EQ(inName,"available") ) { return available; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rawIndices") ) { return rawIndices; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastVertsSize") ) { return lastVertsSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBucketData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketDataType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"verts") ) { verts=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GLBucket >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"glStart") ) { glStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glVerts") ) { glVerts=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawMode") ) { drawMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glLength") ) { glLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rawVerts") ) { rawVerts=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glIndices") ) { glIndices=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"available") ) { available=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rawIndices") ) { rawIndices=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastVertsSize") ) { lastVertsSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLBucketData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLBucketData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("drawMode","\x87","\x7d","\xca","\x5c"));
	outFields->push(HX_HCSTRING("glLength","\xeb","\x0c","\xf6","\x61"));
	outFields->push(HX_HCSTRING("glStart","\xfd","\xa3","\xe6","\x00"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("glVerts","\x3d","\x16","\x3d","\xb1"));
	outFields->push(HX_HCSTRING("lastVertsSize","\x4d","\x87","\x9c","\x1e"));
	outFields->push(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"));
	outFields->push(HX_HCSTRING("rawVerts","\x9a","\x17","\x20","\x96"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("rawIndices","\x1f","\xa6","\xba","\xd5"));
	outFields->push(HX_HCSTRING("available","\xc9","\x59","\x83","\x77"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketDataType*/ ,(int)offsetof(GLBucketData_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLBucketData_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,drawMode),HX_HCSTRING("drawMode","\x87","\x7d","\xca","\x5c")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,glLength),HX_HCSTRING("glLength","\xeb","\x0c","\xf6","\x61")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,glStart),HX_HCSTRING("glStart","\xfd","\xa3","\xe6","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(GLBucketData_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLBucketData_obj,glVerts),HX_HCSTRING("glVerts","\x3d","\x16","\x3d","\xb1")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,lastVertsSize),HX_HCSTRING("lastVertsSize","\x4d","\x87","\x9c","\x1e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLBucketData_obj,verts),HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,rawVerts),HX_HCSTRING("rawVerts","\x9a","\x17","\x20","\x96")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,stride),HX_HCSTRING("stride","\x19","\x20","\x30","\x11")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLBucketData_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLBucketData_obj,glIndices),HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLBucketData_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,rawIndices),HX_HCSTRING("rawIndices","\x1f","\xa6","\xba","\xd5")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,available),HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GLBucket*/ ,(int)offsetof(GLBucketData_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("drawMode","\x87","\x7d","\xca","\x5c"),
	HX_HCSTRING("glLength","\xeb","\x0c","\xf6","\x61"),
	HX_HCSTRING("glStart","\xfd","\xa3","\xe6","\x00"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("glVerts","\x3d","\x16","\x3d","\xb1"),
	HX_HCSTRING("lastVertsSize","\x4d","\x87","\x9c","\x1e"),
	HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"),
	HX_HCSTRING("rawVerts","\x9a","\x17","\x20","\x96"),
	HX_HCSTRING("stride","\x19","\x20","\x30","\x11"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("rawIndices","\x1f","\xa6","\xba","\xd5"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBucketData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBucketData_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBucketData_obj::__mClass;

void GLBucketData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLBucketData","\x7a","\x3c","\x65","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLBucketData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBucketData_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
