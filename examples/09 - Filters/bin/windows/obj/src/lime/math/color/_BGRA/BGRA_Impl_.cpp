// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_color__BGRA_BGRA_Impl_
#include <lime/math/color/_BGRA/BGRA_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_21__new,"lime.math.color._BGRA.BGRA_Impl_","_new",0x3d689268,"lime.math.color._BGRA.BGRA_Impl_._new","lime/math/color/BGRA.hx",21,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_28_create,"lime.math.color._BGRA.BGRA_Impl_","create",0xbd7773c3,"lime.math.color._BGRA.BGRA_Impl_.create","lime/math/color/BGRA.hx",28,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_39_multiplyAlpha,"lime.math.color._BGRA.BGRA_Impl_","multiplyAlpha",0x7a451cb3,"lime.math.color._BGRA.BGRA_Impl_.multiplyAlpha","lime/math/color/BGRA.hx",39,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_53_readUInt8,"lime.math.color._BGRA.BGRA_Impl_","readUInt8",0x610e85e1,"lime.math.color._BGRA.BGRA_Impl_.readUInt8","lime/math/color/BGRA.hx",53,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_82_set,"lime.math.color._BGRA.BGRA_Impl_","set",0x2f66dc7b,"lime.math.color._BGRA.BGRA_Impl_.set","lime/math/color/BGRA.hx",82,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_89_unmultiplyAlpha,"lime.math.color._BGRA.BGRA_Impl_","unmultiplyAlpha",0x71b06afa,"lime.math.color._BGRA.BGRA_Impl_.unmultiplyAlpha","lime/math/color/BGRA.hx",89,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_99_writeUInt8,"lime.math.color._BGRA.BGRA_Impl_","writeUInt8",0x9c53c666,"lime.math.color._BGRA.BGRA_Impl_.writeUInt8","lime/math/color/BGRA.hx",99,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_137___fromARGB,"lime.math.color._BGRA.BGRA_Impl_","__fromARGB",0xba7be71d,"lime.math.color._BGRA.BGRA_Impl_.__fromARGB","lime/math/color/BGRA.hx",137,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_144___fromRGBA,"lime.math.color._BGRA.BGRA_Impl_","__fromRGBA",0xc5b02a85,"lime.math.color._BGRA.BGRA_Impl_.__fromRGBA","lime/math/color/BGRA.hx",144,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_158_get_a,"lime.math.color._BGRA.BGRA_Impl_","get_a",0x13648e51,"lime.math.color._BGRA.BGRA_Impl_.get_a","lime/math/color/BGRA.hx",158,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_163_set_a,"lime.math.color._BGRA.BGRA_Impl_","set_a",0xfc33845d,"lime.math.color._BGRA.BGRA_Impl_.set_a","lime/math/color/BGRA.hx",163,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_173_get_b,"lime.math.color._BGRA.BGRA_Impl_","get_b",0x13648e52,"lime.math.color._BGRA.BGRA_Impl_.get_b","lime/math/color/BGRA.hx",173,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_178_set_b,"lime.math.color._BGRA.BGRA_Impl_","set_b",0xfc33845e,"lime.math.color._BGRA.BGRA_Impl_.set_b","lime/math/color/BGRA.hx",178,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_188_get_g,"lime.math.color._BGRA.BGRA_Impl_","get_g",0x13648e57,"lime.math.color._BGRA.BGRA_Impl_.get_g","lime/math/color/BGRA.hx",188,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_193_set_g,"lime.math.color._BGRA.BGRA_Impl_","set_g",0xfc338463,"lime.math.color._BGRA.BGRA_Impl_.set_g","lime/math/color/BGRA.hx",193,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_203_get_r,"lime.math.color._BGRA.BGRA_Impl_","get_r",0x13648e62,"lime.math.color._BGRA.BGRA_Impl_.get_r","lime/math/color/BGRA.hx",203,0xb2958ed1)
HX_LOCAL_STACK_FRAME(_hx_pos_bee40c89a9bb304e_208_set_r,"lime.math.color._BGRA.BGRA_Impl_","set_r",0xfc33846e,"lime.math.color._BGRA.BGRA_Impl_.set_r","lime/math/color/BGRA.hx",208,0xb2958ed1)
namespace lime{
namespace math{
namespace color{
namespace _BGRA{

void BGRA_Impl__obj::__construct() { }

Dynamic BGRA_Impl__obj::__CreateEmpty() { return new BGRA_Impl__obj; }

void *BGRA_Impl__obj::_hx_vtable = 0;

Dynamic BGRA_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BGRA_Impl__obj > _hx_result = new BGRA_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BGRA_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01fd9309;
}

int BGRA_Impl__obj::a16;

Float BGRA_Impl__obj::unmult;

int BGRA_Impl__obj::_new(hx::Null< int >  __o_bgra){
int bgra = __o_bgra.Default(0);
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_21__new)
HXDLIN(  21)		int this1 = bgra;
HXDLIN(  21)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_new,return )

int BGRA_Impl__obj::create(int b,int g,int r,int a){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_28_create)
HXLINE(  30)		int this1 = (int)0;
HXDLIN(  30)		int bgra = this1;
HXLINE(  31)		bgra = ((int)((int)((int)((int)((int)b & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)r & (int)(int)255) << (int)(int)8)) | (int)((int)a & (int)(int)255));
HXLINE(  32)		return bgra;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BGRA_Impl__obj,create,return )

void BGRA_Impl__obj::multiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_39_multiplyAlpha)
HXDLIN(  39)		if ((((int)this1 & (int)(int)255) == (int)0)) {
HXLINE(  41)			this1 = (int)0;
            		}
            		else {
HXLINE(  43)			if ((((int)this1 & (int)(int)255) != (int)255)) {
HXLINE(  45)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(  45)				int this3 = this2->byteOffset;
HXDLIN(  45)				::lime::math::color::_BGRA::BGRA_Impl__obj::a16 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this3 + (((int)this1 & (int)(int)255) * (int)4)));
HXLINE(  46)				this1 = ((int)((int)((int)((int)((int)((int)(((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,multiplyAlpha,(void))

void BGRA_Impl__obj::readUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_53_readUInt8)
HXLINE(  55)		switch((int)(format)){
            			case (int)0: {
HXLINE(  63)				int data1 = data->byteOffset;
HXDLIN(  63)				int b = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data1 + (offset + (int)2))) & (int)(int)255);
HXDLIN(  63)				int data2 = data->byteOffset;
HXDLIN(  63)				int g = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data2 + (offset + (int)1))) & (int)(int)255);
HXDLIN(  63)				int r = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & (int)(int)255);
HXDLIN(  63)				int data3 = data->byteOffset;
HXDLIN(  63)				this1 = ((int)((int)((int)((int)((int)b & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)r & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(data->buffer->b,(data3 + (offset + (int)3))) & (int)(int)255) & (int)(int)255));
            			}
            			break;
            			case (int)1: {
HXLINE(  67)				int data4 = data->byteOffset;
HXDLIN(  67)				int b1 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data4 + (offset + (int)3))) & (int)(int)255);
HXDLIN(  67)				int data5 = data->byteOffset;
HXDLIN(  67)				int g1 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data5 + (offset + (int)2))) & (int)(int)255);
HXDLIN(  67)				int data6 = data->byteOffset;
HXDLIN(  67)				int r1 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data6 + (offset + (int)1))) & (int)(int)255);
HXDLIN(  67)				this1 = ((int)((int)((int)((int)((int)b1 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g1 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)r1 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & (int)(int)255) & (int)(int)255));
            			}
            			break;
            			case (int)2: {
HXLINE(  59)				int b2 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & (int)(int)255);
HXDLIN(  59)				int data7 = data->byteOffset;
HXDLIN(  59)				int g2 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data7 + (offset + (int)1))) & (int)(int)255);
HXDLIN(  59)				int data8 = data->byteOffset;
HXDLIN(  59)				int r2 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data8 + (offset + (int)2))) & (int)(int)255);
HXDLIN(  59)				int data9 = data->byteOffset;
HXDLIN(  59)				this1 = ((int)((int)((int)((int)((int)b2 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g2 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)r2 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(data->buffer->b,(data9 + (offset + (int)3))) & (int)(int)255) & (int)(int)255));
            			}
            			break;
            		}
HXLINE(  71)		if (premultiplied) {
HXLINE(  73)			bool _hx_tmp;
HXDLIN(  73)			if ((((int)this1 & (int)(int)255) != (int)0)) {
HXLINE(  73)				_hx_tmp = (((int)this1 & (int)(int)255) != (int)255);
            			}
            			else {
HXLINE(  73)				_hx_tmp = false;
            			}
HXDLIN(  73)			if (_hx_tmp) {
HXLINE(  73)				::lime::math::color::_BGRA::BGRA_Impl__obj::unmult = ((Float)((Float)255.0) / (Float)((int)this1 & (int)(int)255));
HXDLIN(  73)				{
HXLINE(  73)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  73)					int b3 = ((int)::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::floor((((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN(  73)					 ::lime::utils::ArrayBufferView this3 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  73)					int g3 = ((int)::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::floor((((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN(  73)					 ::lime::utils::ArrayBufferView this4 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  73)					this1 = ((int)((int)((int)((int)((int)b3 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g3 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::floor((((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult)))) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,readUInt8,(void))

void BGRA_Impl__obj::set(int this1,int b,int g,int r,int a){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_82_set)
HXDLIN(  82)		this1 = ((int)((int)((int)((int)((int)b & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)r & (int)(int)255) << (int)(int)8)) | (int)((int)a & (int)(int)255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,set,(void))

void BGRA_Impl__obj::unmultiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_89_unmultiplyAlpha)
HXDLIN(  89)		bool _hx_tmp;
HXDLIN(  89)		if ((((int)this1 & (int)(int)255) != (int)0)) {
HXDLIN(  89)			_hx_tmp = (((int)this1 & (int)(int)255) != (int)255);
            		}
            		else {
HXDLIN(  89)			_hx_tmp = false;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  91)			::lime::math::color::_BGRA::BGRA_Impl__obj::unmult = ((Float)((Float)255.0) / (Float)((int)this1 & (int)(int)255));
HXLINE(  92)			{
HXLINE(  92)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  92)				int b = ((int)::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::floor((((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN(  92)				 ::lime::utils::ArrayBufferView this3 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  92)				int g = ((int)::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::floor((((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN(  92)				 ::lime::utils::ArrayBufferView this4 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  92)				this1 = ((int)((int)((int)((int)((int)b & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::floor((((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult)))) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,unmultiplyAlpha,(void))

void BGRA_Impl__obj::writeUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_99_writeUInt8)
HXLINE( 101)		if (premultiplied) {
HXLINE( 103)			if ((((int)this1 & (int)(int)255) == (int)0)) {
HXLINE( 103)				this1 = (int)0;
            			}
            			else {
HXLINE( 103)				if ((((int)this1 & (int)(int)255) != (int)255)) {
HXLINE( 103)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::color::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 103)					int this3 = this2->byteOffset;
HXDLIN( 103)					::lime::math::color::_BGRA::BGRA_Impl__obj::a16 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this3 + (((int)this1 & (int)(int)255) * (int)4)));
HXDLIN( 103)					this1 = ((int)((int)((int)((int)((int)((int)(((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::color::_BGRA::BGRA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            				}
            			}
            		}
HXLINE( 107)		switch((int)(format)){
            			case (int)0: {
HXLINE( 118)				{
HXLINE( 118)					int val = ((int)hx::UShr(this1,(int)8) & (int)(int)255);
HXDLIN( 118)					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 119)				{
HXLINE( 119)					int val1 = ((int)hx::UShr(this1,(int)16) & (int)(int)255);
HXDLIN( 119)					{
HXLINE( 119)						int data1 = data->byteOffset;
HXDLIN( 119)						::__hxcpp_memory_set_byte(data->buffer->b,(data1 + (offset + (int)1)),val1);
            					}
            				}
HXLINE( 120)				{
HXLINE( 120)					int val2 = ((int)hx::UShr(this1,(int)24) & (int)(int)255);
HXDLIN( 120)					{
HXLINE( 120)						int data2 = data->byteOffset;
HXDLIN( 120)						::__hxcpp_memory_set_byte(data->buffer->b,(data2 + (offset + (int)2)),val2);
            					}
            				}
HXLINE( 121)				{
HXLINE( 121)					int val3 = ((int)this1 & (int)(int)255);
HXDLIN( 121)					{
HXLINE( 121)						int data3 = data->byteOffset;
HXDLIN( 121)						::__hxcpp_memory_set_byte(data->buffer->b,(data3 + (offset + (int)3)),val3);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 125)				{
HXLINE( 125)					int val4 = ((int)this1 & (int)(int)255);
HXDLIN( 125)					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val4);
            				}
HXLINE( 126)				{
HXLINE( 126)					int val5 = ((int)hx::UShr(this1,(int)8) & (int)(int)255);
HXDLIN( 126)					{
HXLINE( 126)						int data4 = data->byteOffset;
HXDLIN( 126)						::__hxcpp_memory_set_byte(data->buffer->b,(data4 + (offset + (int)1)),val5);
            					}
            				}
HXLINE( 127)				{
HXLINE( 127)					int val6 = ((int)hx::UShr(this1,(int)16) & (int)(int)255);
HXDLIN( 127)					{
HXLINE( 127)						int data5 = data->byteOffset;
HXDLIN( 127)						::__hxcpp_memory_set_byte(data->buffer->b,(data5 + (offset + (int)2)),val6);
            					}
            				}
HXLINE( 128)				{
HXLINE( 128)					int val7 = ((int)hx::UShr(this1,(int)24) & (int)(int)255);
HXDLIN( 128)					{
HXLINE( 128)						int data6 = data->byteOffset;
HXDLIN( 128)						::__hxcpp_memory_set_byte(data->buffer->b,(data6 + (offset + (int)3)),val7);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 111)				{
HXLINE( 111)					int val8 = ((int)hx::UShr(this1,(int)24) & (int)(int)255);
HXDLIN( 111)					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val8);
            				}
HXLINE( 112)				{
HXLINE( 112)					int val9 = ((int)hx::UShr(this1,(int)16) & (int)(int)255);
HXDLIN( 112)					{
HXLINE( 112)						int data7 = data->byteOffset;
HXDLIN( 112)						::__hxcpp_memory_set_byte(data->buffer->b,(data7 + (offset + (int)1)),val9);
            					}
            				}
HXLINE( 113)				{
HXLINE( 113)					int val10 = ((int)hx::UShr(this1,(int)8) & (int)(int)255);
HXDLIN( 113)					{
HXLINE( 113)						int data8 = data->byteOffset;
HXDLIN( 113)						::__hxcpp_memory_set_byte(data->buffer->b,(data8 + (offset + (int)2)),val10);
            					}
            				}
HXLINE( 114)				{
HXLINE( 114)					int val11 = ((int)this1 & (int)(int)255);
HXDLIN( 114)					{
HXLINE( 114)						int data9 = data->byteOffset;
HXDLIN( 114)						::__hxcpp_memory_set_byte(data->buffer->b,(data9 + (offset + (int)3)),val11);
            					}
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,writeUInt8,(void))

int BGRA_Impl__obj::_hx___fromARGB(int argb){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_137___fromARGB)
HXDLIN( 137)		int this1 = (int)0;
HXDLIN( 137)		int bgra = this1;
HXDLIN( 137)		bgra = ((int)((int)((int)((int)((int)((int)argb & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(argb,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(argb,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)hx::UShr(argb,(int)24) & (int)(int)255) & (int)(int)255));
HXDLIN( 137)		return bgra;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_hx___fromARGB,return )

int BGRA_Impl__obj::_hx___fromRGBA(int rgba){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_144___fromRGBA)
HXDLIN( 144)		int this1 = (int)0;
HXDLIN( 144)		int bgra = this1;
HXDLIN( 144)		bgra = ((int)((int)((int)((int)((int)((int)hx::UShr(rgba,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(rgba,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(rgba,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)rgba & (int)(int)255) & (int)(int)255));
HXDLIN( 144)		return bgra;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_hx___fromRGBA,return )

int BGRA_Impl__obj::get_a(int this1){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_158_get_a)
HXDLIN( 158)		return ((int)this1 & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_a,return )

int BGRA_Impl__obj::set_a(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_163_set_a)
HXLINE( 165)		this1 = ((int)((int)((int)((int)((int)((int)hx::UShr(this1,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(this1,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(this1,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)value & (int)(int)255));
HXLINE( 166)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_a,return )

int BGRA_Impl__obj::get_b(int this1){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_173_get_b)
HXDLIN( 173)		return ((int)hx::UShr(this1,(int)24) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_b,return )

int BGRA_Impl__obj::set_b(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_178_set_b)
HXLINE( 180)		this1 = ((int)((int)((int)((int)((int)value & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(this1,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(this1,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
HXLINE( 181)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_b,return )

int BGRA_Impl__obj::get_g(int this1){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_188_get_g)
HXDLIN( 188)		return ((int)hx::UShr(this1,(int)16) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_g,return )

int BGRA_Impl__obj::set_g(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_193_set_g)
HXLINE( 195)		this1 = ((int)((int)((int)((int)((int)((int)hx::UShr(this1,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)value & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(this1,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
HXLINE( 196)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_g,return )

int BGRA_Impl__obj::get_r(int this1){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_203_get_r)
HXDLIN( 203)		return ((int)hx::UShr(this1,(int)8) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_r,return )

int BGRA_Impl__obj::set_r(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_bee40c89a9bb304e_208_set_r)
HXLINE( 210)		this1 = ((int)((int)((int)((int)((int)((int)hx::UShr(this1,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(this1,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)value & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
HXLINE( 211)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_r,return )


BGRA_Impl__obj::BGRA_Impl__obj()
{
}

bool BGRA_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromARGB") ) { outValue = _hx___fromARGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromRGBA") ) { outValue = _hx___fromRGBA_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BGRA_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo BGRA_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BGRA_Impl__obj::a16,HX_HCSTRING("a16","\x86","\xc5","\x49","\x00")},
	{hx::fsFloat,(void *) &BGRA_Impl__obj::unmult,HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void BGRA_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BGRA_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::unmult,"unmult");
};

#endif

hx::Class BGRA_Impl__obj::__mClass;

static ::String BGRA_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("a16","\x86","\xc5","\x49","\x00"),
	HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("readUInt8","\x48","\x9c","\x5d","\x5f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("writeUInt8","\x1f","\x4a","\x38","\x23"),
	HX_HCSTRING("__fromARGB","\xd6","\x6a","\x60","\x41"),
	HX_HCSTRING("__fromRGBA","\x3e","\xae","\x94","\x4c"),
	HX_HCSTRING("get_a","\x38","\xa5","\x60","\x91"),
	HX_HCSTRING("set_a","\x44","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_b","\x39","\xa5","\x60","\x91"),
	HX_HCSTRING("set_b","\x45","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_g","\x3e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_g","\x4a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_r","\x49","\xa5","\x60","\x91"),
	HX_HCSTRING("set_r","\x55","\x9b","\x2f","\x7a"),
	::String(null())
};

void BGRA_Impl__obj::__register()
{
	hx::Object *dummy = new BGRA_Impl__obj;
	BGRA_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.color._BGRA.BGRA_Impl_","\xc7","\x00","\xea","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BGRA_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BGRA_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BGRA_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BGRA_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BGRA_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BGRA_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BGRA_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
} // end namespace color
} // end namespace _BGRA
