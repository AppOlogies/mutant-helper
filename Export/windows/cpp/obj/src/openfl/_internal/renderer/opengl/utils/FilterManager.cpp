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
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
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
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void FilterManager_obj::__construct(::lime::graphics::GLRenderContext gl,bool transparent)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","new",0x6afe6f06,"openfl._internal.renderer.opengl.utils.FilterManager.new","openfl/_internal/renderer/opengl/utils/FilterManager.hx",37,0x7d1f400d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(transparent,"transparent")
{
	HX_STACK_LINE(39)
	this->transparent = transparent;
	HX_STACK_LINE(41)
	this->filterStack = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(43)
	this->offsetX = (int)0;
	HX_STACK_LINE(44)
	this->offsetY = (int)0;
	HX_STACK_LINE(46)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	this->setContext(tmp);
}
;
	return null();
}

//FilterManager_obj::~FilterManager_obj() { }

Dynamic FilterManager_obj::__CreateEmpty() { return  new FilterManager_obj; }
hx::ObjectPtr< FilterManager_obj > FilterManager_obj::__new(::lime::graphics::GLRenderContext gl,bool transparent)
{  hx::ObjectPtr< FilterManager_obj > _result_ = new FilterManager_obj();
	_result_->__construct(gl,transparent);
	return _result_;}

Dynamic FilterManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterManager_obj > _result_ = new FilterManager_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FilterManager_obj::applyFilterPass( Dynamic filter,::openfl::geom::Rectangle filterArea,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","applyFilterPass",0xe07e4b5d,"openfl._internal.renderer.opengl.utils.FilterManager.applyFilterPass","openfl/_internal/renderer/opengl/utils/FilterManager.hx",51,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(filterArea,"filterArea")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FilterManager_obj,applyFilterPass,(void))

Void FilterManager_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::lime::graphics::opengl::GLFramebuffer buffer){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","begin",0x11e1fe4f,"openfl._internal.renderer.opengl.utils.FilterManager.begin","openfl/_internal/renderer/opengl/utils/FilterManager.hx",102,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(104)
		this->renderSession = renderSession;
		HX_STACK_LINE(105)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		this->defaultShader = tmp;
		HX_STACK_LINE(108)
		this->width = (int)0;
		HX_STACK_LINE(109)
		this->height = (int)0;
		HX_STACK_LINE(110)
		this->buffer = buffer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FilterManager_obj,begin,(void))

Void FilterManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","destroy",0x105c16a0,"openfl._internal.renderer.opengl.utils.FilterManager.destroy","openfl/_internal/renderer/opengl/utils/FilterManager.hx",115,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::lime::graphics::GLRenderContext gl = tmp;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(119)
		this->filterStack = null();
		HX_STACK_LINE(121)
		this->offsetX = (int)0;
		HX_STACK_LINE(122)
		this->offsetY = (int)0;
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			Array< ::Dynamic > _g1 = this->texturePool;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				if ((tmp2)){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				::openfl::_internal::renderer::opengl::utils::FilterTexture tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				::openfl::_internal::renderer::opengl::utils::FilterTexture texture = tmp3;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(124)
				++(_g);
				HX_STACK_LINE(126)
				texture->destroy();
			}
		}
		HX_STACK_LINE(130)
		this->texturePool = null();
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::lime::graphics::opengl::GLBuffer tmp1 = this->vertexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(132)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::lime::graphics::opengl::GLBuffer tmp1 = this->uvBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(133)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::lime::graphics::opengl::GLBuffer tmp1 = this->colorBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(134)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(134)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::lime::graphics::opengl::GLBuffer tmp1 = this->indexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(135)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(135)
				buffer->invalidate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,destroy,(void))

Void FilterManager_obj::initShaderBuffers( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","initShaderBuffers",0xfb7f8ac4,"openfl._internal.renderer.opengl.utils.FilterManager.initShaderBuffers","openfl/_internal/renderer/opengl/utils/FilterManager.hx",140,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::lime::graphics::GLRenderContext gl = tmp;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(144)
		int tmp1 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		Dynamic tmp2 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		::lime::graphics::opengl::GLBuffer tmp3 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		this->vertexBuffer = tmp3;
		HX_STACK_LINE(145)
		int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		Dynamic tmp5 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::lime::graphics::opengl::GLBuffer tmp6 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		this->uvBuffer = tmp6;
		HX_STACK_LINE(146)
		int tmp7 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		Dynamic tmp8 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		::lime::graphics::opengl::GLBuffer tmp9 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		this->colorBuffer = tmp9;
		HX_STACK_LINE(147)
		int tmp10 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(147)
		Dynamic tmp11 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(147)
		::lime::graphics::opengl::GLBuffer tmp12 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(147)
		this->indexBuffer = tmp12;
		HX_STACK_LINE(149)
		::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(149)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(149)
			bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(149)
			if ((tmp14)){
				HX_STACK_LINE(149)
				::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(149)
				this1 = tmp15;
			}
			else{
				HX_STACK_LINE(149)
				bool tmp15 = (array != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(149)
				if ((tmp15)){
					HX_STACK_LINE(149)
					::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(149)
						::lime::utils::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(149)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(149)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(149)
						int tmp18 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(149)
						_this->byteLength = tmp18;
						HX_STACK_LINE(149)
						::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(149)
							int tmp20 = _this->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(149)
							::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(149)
							this2 = tmp21;
							HX_STACK_LINE(149)
							tmp19 = this2;
						}
						HX_STACK_LINE(149)
						_this->buffer = tmp19;
						HX_STACK_LINE(149)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(149)
						tmp16 = _this;
					}
					HX_STACK_LINE(149)
					this1 = tmp16;
				}
				else{
					HX_STACK_LINE(149)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(149)
					if ((tmp16)){
						HX_STACK_LINE(149)
						::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(149)
							::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(149)
							::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(149)
							::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(149)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(149)
							int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(149)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(149)
							int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(149)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(149)
							int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(149)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(149)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(149)
							int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(149)
							bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(149)
							if ((tmp25)){
								HX_STACK_LINE(149)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(149)
								int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(149)
								int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(149)
								::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(149)
								{
									HX_STACK_LINE(149)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(149)
									int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(149)
									::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(149)
									this2 = tmp29;
									HX_STACK_LINE(149)
									tmp27 = this2;
								}
								HX_STACK_LINE(149)
								_this->buffer = tmp27;
								HX_STACK_LINE(149)
								::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(149)
								int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(149)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(149)
								_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
							}
							else{
								HX_STACK_LINE(149)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(149)
							int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(149)
							_this->byteLength = tmp26;
							HX_STACK_LINE(149)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(149)
							_this->length = srcLength;
							HX_STACK_LINE(149)
							tmp17 = _this;
						}
						HX_STACK_LINE(149)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(149)
						bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(149)
						if ((tmp17)){
							HX_STACK_LINE(149)
							::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(149)
							{
								HX_STACK_LINE(149)
								::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(149)
								::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(149)
								bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(149)
								if ((tmp20)){
									HX_STACK_LINE(149)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(149)
								int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(149)
								bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(149)
								if ((tmp22)){
									HX_STACK_LINE(149)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(149)
								int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(149)
								int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(149)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(149)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(149)
								bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(149)
								if ((tmp24)){
									HX_STACK_LINE(149)
									int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(149)
									newByteLength = tmp25;
									HX_STACK_LINE(149)
									int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(149)
									bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(149)
									if ((tmp27)){
										HX_STACK_LINE(149)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(149)
									bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(149)
									if ((tmp28)){
										HX_STACK_LINE(149)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(149)
									int tmp25 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(149)
									newByteLength = tmp25;
									HX_STACK_LINE(149)
									int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(149)
									int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(149)
									bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(149)
									if ((tmp27)){
										HX_STACK_LINE(149)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(149)
								_this->buffer = null();
								HX_STACK_LINE(149)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(149)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(149)
								Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(149)
								int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(149)
								_this->length = tmp26;
								HX_STACK_LINE(149)
								tmp18 = _this;
							}
							HX_STACK_LINE(149)
							this1 = tmp18;
						}
						else{
							HX_STACK_LINE(149)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(149)
			tmp13 = this1;
		}
		HX_STACK_LINE(149)
		this->vertexArray = tmp13;
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::lime::graphics::opengl::GLBuffer tmp14 = this->vertexBuffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(151)
			::lime::graphics::opengl::GLBuffer buffer = tmp14;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				int tmp15 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(151)
				bool tmp16 = (buffer == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(151)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(151)
				if ((tmp16)){
					HX_STACK_LINE(151)
					tmp17 = (int)0;
				}
				else{
					HX_STACK_LINE(151)
					tmp17 = buffer->id;
				}
				HX_STACK_LINE(151)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp15,tmp17);
			}
		}
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::lime::utils::ArrayBufferView tmp14 = this->vertexArray;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(152)
			::lime::utils::ArrayBufferView data = tmp14;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int tmp15 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				::haxe::io::Bytes tmp16 = data->buffer;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				int tmp17 = data->byteOffset;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				int tmp18 = data->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(152)
				int tmp19 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(152)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp15,tmp16,tmp17,tmp18,tmp19);
			}
		}
		HX_STACK_LINE(154)
		::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(154)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(154)
			bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(154)
			if ((tmp15)){
				HX_STACK_LINE(154)
				::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(154)
				this1 = tmp16;
			}
			else{
				HX_STACK_LINE(154)
				bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(154)
				if ((tmp16)){
					HX_STACK_LINE(154)
					::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(154)
						::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(154)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(154)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(154)
						int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(154)
						_this->byteLength = tmp19;
						HX_STACK_LINE(154)
						::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(154)
							int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(154)
							::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(154)
							this2 = tmp22;
							HX_STACK_LINE(154)
							tmp20 = this2;
						}
						HX_STACK_LINE(154)
						_this->buffer = tmp20;
						HX_STACK_LINE(154)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(154)
						tmp17 = _this;
					}
					HX_STACK_LINE(154)
					this1 = tmp17;
				}
				else{
					HX_STACK_LINE(154)
					bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(154)
					if ((tmp17)){
						HX_STACK_LINE(154)
						::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(154)
							::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(154)
							::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(154)
							::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(154)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(154)
							int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(154)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(154)
							int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(154)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(154)
							int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(154)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(154)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(154)
							int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(154)
							bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(154)
							if ((tmp26)){
								HX_STACK_LINE(154)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(154)
								int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(154)
								int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(154)
								::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(154)
								{
									HX_STACK_LINE(154)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(154)
									int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(154)
									::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(154)
									this2 = tmp30;
									HX_STACK_LINE(154)
									tmp28 = this2;
								}
								HX_STACK_LINE(154)
								_this->buffer = tmp28;
								HX_STACK_LINE(154)
								::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(154)
								int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(154)
								int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(154)
								_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
							}
							else{
								HX_STACK_LINE(154)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(154)
							int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(154)
							_this->byteLength = tmp27;
							HX_STACK_LINE(154)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(154)
							_this->length = srcLength;
							HX_STACK_LINE(154)
							tmp18 = _this;
						}
						HX_STACK_LINE(154)
						this1 = tmp18;
					}
					else{
						HX_STACK_LINE(154)
						bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(154)
						if ((tmp18)){
							HX_STACK_LINE(154)
							::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(154)
							{
								HX_STACK_LINE(154)
								::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(154)
								::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(154)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(154)
								if ((tmp21)){
									HX_STACK_LINE(154)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(154)
								int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(154)
								bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(154)
								if ((tmp23)){
									HX_STACK_LINE(154)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(154)
								int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(154)
								int bufferByteLength = tmp24;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(154)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(154)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(154)
								bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(154)
								if ((tmp25)){
									HX_STACK_LINE(154)
									int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(154)
									newByteLength = tmp26;
									HX_STACK_LINE(154)
									int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(154)
									bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(154)
									if ((tmp28)){
										HX_STACK_LINE(154)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(154)
									bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(154)
									if ((tmp29)){
										HX_STACK_LINE(154)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(154)
									int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(154)
									newByteLength = tmp26;
									HX_STACK_LINE(154)
									int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(154)
									int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(154)
									bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(154)
									if ((tmp28)){
										HX_STACK_LINE(154)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(154)
								_this->buffer = null();
								HX_STACK_LINE(154)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(154)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(154)
								Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(154)
								int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(154)
								_this->length = tmp27;
								HX_STACK_LINE(154)
								tmp19 = _this;
							}
							HX_STACK_LINE(154)
							this1 = tmp19;
						}
						else{
							HX_STACK_LINE(154)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(154)
			tmp14 = this1;
		}
		HX_STACK_LINE(154)
		this->uvArray = tmp14;
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::lime::graphics::opengl::GLBuffer tmp15 = this->uvBuffer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(156)
			::lime::graphics::opengl::GLBuffer buffer = tmp15;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp16 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				bool tmp17 = (buffer == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(156)
				if ((tmp17)){
					HX_STACK_LINE(156)
					tmp18 = (int)0;
				}
				else{
					HX_STACK_LINE(156)
					tmp18 = buffer->id;
				}
				HX_STACK_LINE(156)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp16,tmp18);
			}
		}
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			::lime::utils::ArrayBufferView tmp15 = this->uvArray;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(157)
			::lime::utils::ArrayBufferView data = tmp15;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				int tmp16 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(157)
				::haxe::io::Bytes tmp17 = data->buffer;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(157)
				int tmp18 = data->byteOffset;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(157)
				int tmp19 = data->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(157)
				int tmp20 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(157)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp16,tmp17,tmp18,tmp19,tmp20);
			}
		}
		HX_STACK_LINE(159)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(((Float)1.0)).Add((int)16777215).Add(((Float)1.0)).Add((int)16777215).Add(((Float)1.0)).Add((int)16777215).Add(((Float)1.0)).Add((int)16777215);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(159)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(159)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(159)
			if ((tmp16)){
				HX_STACK_LINE(159)
				::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(159)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(159)
				bool tmp17 = (array != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(159)
				if ((tmp17)){
					HX_STACK_LINE(159)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(159)
					{
						HX_STACK_LINE(159)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(159)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(159)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(159)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(159)
						int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(159)
						_this->byteLength = tmp20;
						HX_STACK_LINE(159)
						::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(159)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(159)
							int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(159)
							::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(159)
							this2 = tmp23;
							HX_STACK_LINE(159)
							tmp21 = this2;
						}
						HX_STACK_LINE(159)
						_this->buffer = tmp21;
						HX_STACK_LINE(159)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(159)
						tmp18 = _this;
					}
					HX_STACK_LINE(159)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(159)
					bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(159)
					if ((tmp18)){
						HX_STACK_LINE(159)
						::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(159)
							::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(159)
							::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(159)
							::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(159)
							::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(159)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(159)
							int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(159)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(159)
							int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(159)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(159)
							int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(159)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(159)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(159)
							int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(159)
							bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(159)
							if ((tmp27)){
								HX_STACK_LINE(159)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(159)
								int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(159)
								int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(159)
								::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(159)
								{
									HX_STACK_LINE(159)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(159)
									int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(159)
									::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(159)
									this2 = tmp31;
									HX_STACK_LINE(159)
									tmp29 = this2;
								}
								HX_STACK_LINE(159)
								_this->buffer = tmp29;
								HX_STACK_LINE(159)
								::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(159)
								int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(159)
								int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(159)
								_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
							}
							else{
								HX_STACK_LINE(159)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(159)
							int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(159)
							_this->byteLength = tmp28;
							HX_STACK_LINE(159)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(159)
							_this->length = srcLength;
							HX_STACK_LINE(159)
							tmp19 = _this;
						}
						HX_STACK_LINE(159)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(159)
						bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(159)
						if ((tmp19)){
							HX_STACK_LINE(159)
							::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(159)
							{
								HX_STACK_LINE(159)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(159)
								::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(159)
								bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(159)
								if ((tmp22)){
									HX_STACK_LINE(159)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(159)
								int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(159)
								bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(159)
								if ((tmp24)){
									HX_STACK_LINE(159)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(159)
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(159)
								int bufferByteLength = tmp25;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(159)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(159)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(159)
								bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(159)
								if ((tmp26)){
									HX_STACK_LINE(159)
									int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(159)
									newByteLength = tmp27;
									HX_STACK_LINE(159)
									int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(159)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(159)
									if ((tmp29)){
										HX_STACK_LINE(159)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(159)
									bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(159)
									if ((tmp30)){
										HX_STACK_LINE(159)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(159)
									int tmp27 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(159)
									newByteLength = tmp27;
									HX_STACK_LINE(159)
									int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(159)
									int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(159)
									bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(159)
									if ((tmp29)){
										HX_STACK_LINE(159)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(159)
								_this->buffer = null();
								HX_STACK_LINE(159)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(159)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(159)
								Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(159)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(159)
								_this->length = tmp28;
								HX_STACK_LINE(159)
								tmp20 = _this;
							}
							HX_STACK_LINE(159)
							this1 = tmp20;
						}
						else{
							HX_STACK_LINE(159)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(159)
			tmp15 = this1;
		}
		HX_STACK_LINE(159)
		this->colorArray = tmp15;
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			::lime::graphics::opengl::GLBuffer tmp16 = this->colorBuffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(161)
			::lime::graphics::opengl::GLBuffer buffer = tmp16;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				int tmp17 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(161)
				bool tmp18 = (buffer == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(161)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(161)
				if ((tmp18)){
					HX_STACK_LINE(161)
					tmp19 = (int)0;
				}
				else{
					HX_STACK_LINE(161)
					tmp19 = buffer->id;
				}
				HX_STACK_LINE(161)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp17,tmp19);
			}
		}
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::lime::utils::ArrayBufferView tmp16 = this->colorArray;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(162)
			::lime::utils::ArrayBufferView data = tmp16;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				int tmp17 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(162)
				::haxe::io::Bytes tmp18 = data->buffer;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				int tmp19 = data->byteOffset;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(162)
				int tmp20 = data->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(162)
				int tmp21 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(162)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp17,tmp18,tmp19,tmp20,tmp21);
			}
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::lime::graphics::opengl::GLBuffer tmp16 = this->indexBuffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(164)
			::lime::graphics::opengl::GLBuffer buffer = tmp16;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				int tmp17 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(164)
				bool tmp18 = (buffer == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(164)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(164)
				if ((tmp18)){
					HX_STACK_LINE(164)
					tmp19 = (int)0;
				}
				else{
					HX_STACK_LINE(164)
					tmp19 = buffer->id;
				}
				HX_STACK_LINE(164)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp17,tmp19);
			}
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				cpp::ArrayBase array = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)1).Add((int)3).Add((int)2);		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(165)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(165)
				bool tmp17 = (array != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(165)
				if ((tmp17)){
					HX_STACK_LINE(165)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(165)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(165)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(165)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(165)
						int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(165)
						_this->byteLength = tmp20;
						HX_STACK_LINE(165)
						::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(165)
						{
							HX_STACK_LINE(165)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(165)
							int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(165)
							::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(165)
							this2 = tmp23;
							HX_STACK_LINE(165)
							tmp21 = this2;
						}
						HX_STACK_LINE(165)
						_this->buffer = tmp21;
						HX_STACK_LINE(165)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(165)
						tmp18 = _this;
					}
					HX_STACK_LINE(165)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(165)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
				}
				HX_STACK_LINE(165)
				tmp16 = this1;
			}
			HX_STACK_LINE(165)
			::lime::utils::ArrayBufferView data = tmp16;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				int tmp17 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(165)
				::haxe::io::Bytes tmp18 = data->buffer;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				int tmp19 = data->byteOffset;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(165)
				int tmp20 = data->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(165)
				int tmp21 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(165)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp17,tmp18,tmp19,tmp20,tmp21);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,initShaderBuffers,(void))

Void FilterManager_obj::popFilter( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","popFilter",0xfe0b134f,"openfl._internal.renderer.opengl.utils.FilterManager.popFilter","openfl/_internal/renderer/opengl/utils/FilterManager.hx",170,0x7d1f400d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,popFilter,(void))

Void FilterManager_obj::pushFilter( Dynamic filterBlock){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","pushFilter",0xb0cfa74c,"openfl._internal.renderer.opengl.utils.FilterManager.pushFilter","openfl/_internal/renderer/opengl/utils/FilterManager.hx",329,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filterBlock,"filterBlock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FilterManager_obj,pushFilter,(void))

Void FilterManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","setContext",0x4411dc87,"openfl._internal.renderer.opengl.utils.FilterManager.setContext","openfl/_internal/renderer/opengl/utils/FilterManager.hx",405,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(407)
		this->gl = gl;
		HX_STACK_LINE(408)
		this->texturePool = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(410)
		this->initShaderBuffers();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FilterManager_obj,setContext,(void))


FilterManager_obj::FilterManager_obj()
{
}

void FilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterManager);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(colorArray,"colorArray");
	HX_MARK_MEMBER_NAME(colorBuffer,"colorBuffer");
	HX_MARK_MEMBER_NAME(defaultShader,"defaultShader");
	HX_MARK_MEMBER_NAME(filterStack,"filterStack");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(texturePool,"texturePool");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(uvArray,"uvArray");
	HX_MARK_MEMBER_NAME(uvBuffer,"uvBuffer");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void FilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(colorArray,"colorArray");
	HX_VISIT_MEMBER_NAME(colorBuffer,"colorBuffer");
	HX_VISIT_MEMBER_NAME(defaultShader,"defaultShader");
	HX_VISIT_MEMBER_NAME(filterStack,"filterStack");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(texturePool,"texturePool");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(uvArray,"uvArray");
	HX_VISIT_MEMBER_NAME(uvBuffer,"uvBuffer");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic FilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"uvArray") ) { return uvArray; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvBuffer") ) { return uvBuffer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popFilter") ) { return popFilter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { return colorArray; }
		if (HX_FIELD_EQ(inName,"pushFilter") ) { return pushFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorBuffer") ) { return colorBuffer; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { return filterStack; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"texturePool") ) { return texturePool; }
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return vertexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { return defaultShader; }
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyFilterPass") ) { return applyFilterPass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initShaderBuffers") ) { return initShaderBuffers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvArray") ) { uvArray=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvBuffer") ) { uvBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { colorArray=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorBuffer") ) { colorBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { filterStack=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturePool") ) { texturePool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { defaultShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DefaultShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FilterManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("colorArray","\x36","\x85","\xfb","\x49"));
	outFields->push(HX_HCSTRING("colorBuffer","\xc3","\x4e","\xbd","\x8a"));
	outFields->push(HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"));
	outFields->push(HX_HCSTRING("filterStack","\x70","\xbc","\xbd","\x33"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	outFields->push(HX_HCSTRING("texturePool","\x57","\x7f","\xdb","\x00"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("uvArray","\x78","\xb7","\x28","\xe8"));
	outFields->push(HX_HCSTRING("uvBuffer","\x41","\x16","\x1c","\x54"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(FilterManager_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(FilterManager_obj,colorArray),HX_HCSTRING("colorArray","\x36","\x85","\xfb","\x49")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,colorBuffer),HX_HCSTRING("colorBuffer","\xc3","\x4e","\xbd","\x8a")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DefaultShader*/ ,(int)offsetof(FilterManager_obj,defaultShader),HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FilterManager_obj,filterStack),HX_HCSTRING("filterStack","\x70","\xbc","\xbd","\x33")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(FilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FilterManager_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsFloat,(int)offsetof(FilterManager_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(FilterManager_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(FilterManager_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FilterManager_obj,texturePool),HX_HCSTRING("texturePool","\x57","\x7f","\xdb","\x00")},
	{hx::fsBool,(int)offsetof(FilterManager_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(FilterManager_obj,uvArray),HX_HCSTRING("uvArray","\x78","\xb7","\x28","\xe8")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,uvBuffer),HX_HCSTRING("uvBuffer","\x41","\x16","\x1c","\x54")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(FilterManager_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,vertexBuffer),HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70")},
	{hx::fsInt,(int)offsetof(FilterManager_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("colorArray","\x36","\x85","\xfb","\x49"),
	HX_HCSTRING("colorBuffer","\xc3","\x4e","\xbd","\x8a"),
	HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"),
	HX_HCSTRING("filterStack","\x70","\xbc","\xbd","\x33"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("texturePool","\x57","\x7f","\xdb","\x00"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("uvArray","\x78","\xb7","\x28","\xe8"),
	HX_HCSTRING("uvBuffer","\x41","\x16","\x1c","\x54"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("applyFilterPass","\xb7","\x4b","\x8d","\x16"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("initShaderBuffers","\x9e","\xd5","\x92","\x13"),
	HX_HCSTRING("popFilter","\x29","\xf4","\xaa","\x01"),
	HX_HCSTRING("pushFilter","\x32","\x85","\x14","\xd9"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FilterManager_obj::__mClass;

void FilterManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.FilterManager","\x14","\x34","\x95","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FilterManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilterManager_obj >;
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
