// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_starling_core_Starling
#include <starling/core/Starling.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_textures_ConcretePotTexture
#include <starling/textures/ConcretePotTexture.h>
#endif
#ifndef INCLUDED_starling_textures_ConcreteTexture
#include <starling/textures/ConcreteTexture.h>
#endif
#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif
#ifndef INCLUDED_starling_utils_MathUtil
#include <starling/utils/MathUtil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_46_new,"starling.textures.ConcretePotTexture","new",0x439023cd,"starling.textures.ConcretePotTexture.new","starling/textures/ConcretePotTexture.hx",46,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_59_dispose,"starling.textures.ConcretePotTexture","dispose",0x515b8e8c,"starling.textures.ConcretePotTexture.dispose","starling/textures/ConcretePotTexture.hx",59,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_67_createBase,"starling.textures.ConcretePotTexture","createBase",0xe55d4d60,"starling.textures.ConcretePotTexture.createBase","starling/textures/ConcretePotTexture.hx",67,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_73_uploadBitmapData,"starling.textures.ConcretePotTexture","uploadBitmapData",0x7ea2bb8d,"starling.textures.ConcretePotTexture.uploadBitmapData","starling/textures/ConcretePotTexture.hx",73,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_119_get_isPotTexture,"starling.textures.ConcretePotTexture","get_isPotTexture",0x4225014c,"starling.textures.ConcretePotTexture.get_isPotTexture","starling/textures/ConcretePotTexture.hx",119,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_123_uploadAtfData,"starling.textures.ConcretePotTexture","uploadAtfData",0xa2305589,"starling.textures.ConcretePotTexture.uploadAtfData","starling/textures/ConcretePotTexture.hx",123,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_139_upload,"starling.textures.ConcretePotTexture","upload",0x1b5f98b4,"starling.textures.ConcretePotTexture.upload","starling/textures/ConcretePotTexture.hx",139,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_152_uploadAsync,"starling.textures.ConcretePotTexture","uploadAsync",0x3cc1c9e8,"starling.textures.ConcretePotTexture.uploadAsync","starling/textures/ConcretePotTexture.hx",152,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_169_uploadAsync,"starling.textures.ConcretePotTexture","uploadAsync",0x3cc1c9e8,"starling.textures.ConcretePotTexture.uploadAsync","starling/textures/ConcretePotTexture.hx",169,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_176_onTextureReady,"starling.textures.ConcretePotTexture","onTextureReady",0x6699e6fa,"starling.textures.ConcretePotTexture.onTextureReady","starling/textures/ConcretePotTexture.hx",176,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_188_get_potBase,"starling.textures.ConcretePotTexture","get_potBase",0x0471c8ca,"starling.textures.ConcretePotTexture.get_potBase","starling/textures/ConcretePotTexture.hx",188,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_193_get_asyncUploadEnabled,"starling.textures.ConcretePotTexture","get_asyncUploadEnabled",0x3fd8ada0,"starling.textures.ConcretePotTexture.get_asyncUploadEnabled","starling/textures/ConcretePotTexture.hx",193,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_194_set_asyncUploadEnabled,"starling.textures.ConcretePotTexture","set_asyncUploadEnabled",0x73842a14,"starling.textures.ConcretePotTexture.set_asyncUploadEnabled","starling/textures/ConcretePotTexture.hx",194,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_36_boot,"starling.textures.ConcretePotTexture","boot",0xd2a83025,"starling.textures.ConcretePotTexture.boot","starling/textures/ConcretePotTexture.hx",36,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_37_boot,"starling.textures.ConcretePotTexture","boot",0xd2a83025,"starling.textures.ConcretePotTexture.boot","starling/textures/ConcretePotTexture.hx",37,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_38_boot,"starling.textures.ConcretePotTexture","boot",0xd2a83025,"starling.textures.ConcretePotTexture.boot","starling/textures/ConcretePotTexture.hx",38,0x324f5063)
HX_LOCAL_STACK_FRAME(_hx_pos_80c8d93bc290c5ce_39_boot,"starling.textures.ConcretePotTexture","boot",0xd2a83025,"starling.textures.ConcretePotTexture.boot","starling/textures/ConcretePotTexture.hx",39,0x324f5063)
namespace starling{
namespace textures{

void ConcretePotTexture_obj::__construct( ::openfl::display3D::textures::Texture base,::String format,int width,int height,bool mipMapping,bool premultipliedAlpha,hx::Null< bool >  __o_optimizedForRenderTexture,hx::Null< Float >  __o_scale){
bool optimizedForRenderTexture = __o_optimizedForRenderTexture.Default(false);
Float scale = __o_scale.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_46_new)
HXLINE(  47)		super::__construct(base,format,width,height,mipMapping,premultipliedAlpha,optimizedForRenderTexture,scale);
HXLINE(  50)		if ((width != ::starling::utils::MathUtil_obj::getNextPowerOfTwo(width))) {
HXLINE(  51)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("width must be a power of two",9d,80,fb,e6)));
            		}
HXLINE(  53)		if ((height != ::starling::utils::MathUtil_obj::getNextPowerOfTwo(height))) {
HXLINE(  54)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("height must be a power of two",dc,4a,9d,30)));
            		}
            	}

Dynamic ConcretePotTexture_obj::__CreateEmpty() { return new ConcretePotTexture_obj; }

void *ConcretePotTexture_obj::_hx_vtable = 0;

Dynamic ConcretePotTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConcretePotTexture_obj > _hx_result = new ConcretePotTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool ConcretePotTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b45ed76) {
		if (inClassId<=(int)0x0d644757) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0d644757;
		} else {
			return inClassId==(int)0x2b45ed76;
		}
	} else {
		return inClassId==(int)0x5106816f;
	}
}

void ConcretePotTexture_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_59_dispose)
HXLINE(  60)		this->get_base()->removeEventListener(HX_("textureReady",88,4d,5a,df),this->onTextureReady_dyn(),null());
HXLINE(  61)		this->super::dispose();
            	}


 ::openfl::display3D::textures::TextureBase ConcretePotTexture_obj::createBase(){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_67_createBase)
HXDLIN(  67)		 ::openfl::display3D::Context3D _hx_tmp = ::starling::core::Starling_obj::get_current()->get_context();
HXLINE(  68)		int _hx_tmp1 = ::Std_obj::_hx_int(this->get_nativeWidth());
HXDLIN(  68)		int _hx_tmp2 = ::Std_obj::_hx_int(this->get_nativeHeight());
HXDLIN(  68)		 ::Dynamic _hx_tmp3 = this->get_format();
HXLINE(  67)		return _hx_tmp->createTexture(_hx_tmp1,_hx_tmp2,_hx_tmp3,this->get_optimizedForRenderTexture(),null());
            	}


void ConcretePotTexture_obj::uploadBitmapData( ::openfl::display::BitmapData data, ::Dynamic async){
            	HX_GC_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_73_uploadBitmapData)
HXLINE(  74)		 ::openfl::display::BitmapData buffer = null();
HXLINE(  75)		bool isAsync = hx::IsNotNull( async );
HXLINE(  77)		if (isAsync) {
HXLINE(  78)			this->_textureReadyCallback = async;
            		}
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		int data1 = data->width;
HXDLIN(  80)		if ((data1 == this->get_nativeWidth())) {
HXLINE(  80)			int data2 = data->height;
HXDLIN(  80)			_hx_tmp = (data2 != this->get_nativeHeight());
            		}
            		else {
HXLINE(  80)			_hx_tmp = true;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			int buffer1 = ::Std_obj::_hx_int(this->get_nativeWidth());
HXDLIN(  82)			buffer =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,buffer1,::Std_obj::_hx_int(this->get_nativeHeight()),true,(int)0);
HXLINE(  83)			buffer->copyPixels(data,data->rect,::starling::textures::ConcretePotTexture_obj::sOrigin,null(),null(),null());
HXLINE(  84)			data = buffer;
            		}
HXLINE(  87)		this->upload(data,(int)0,isAsync);
HXLINE(  89)		bool _hx_tmp1;
HXDLIN(  89)		bool _hx_tmp2;
HXDLIN(  89)		if (this->get_mipMapping()) {
HXLINE(  89)			_hx_tmp2 = (data->width > (int)1);
            		}
            		else {
HXLINE(  89)			_hx_tmp2 = false;
            		}
HXDLIN(  89)		if (_hx_tmp2) {
HXLINE(  89)			_hx_tmp1 = (data->height > (int)1);
            		}
            		else {
HXLINE(  89)			_hx_tmp1 = false;
            		}
HXDLIN(  89)		if (_hx_tmp1) {
HXLINE(  91)			int currentWidth = ((int)data->width >> (int)(int)1);
HXLINE(  92)			int currentHeight = ((int)data->height >> (int)(int)1);
HXLINE(  93)			int level = (int)1;
HXLINE(  94)			 ::openfl::display::BitmapData canvas =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,currentWidth,currentHeight,true,(int)0);
HXLINE(  95)			 ::openfl::geom::Rectangle bounds = ::starling::textures::ConcretePotTexture_obj::sRectangle;
HXLINE(  96)			 ::openfl::geom::Matrix matrix = ::starling::textures::ConcretePotTexture_obj::sMatrix;
HXLINE(  97)			matrix->setTo(((Float)0.5),((Float)0.0),((Float)0.0),((Float)0.5),((Float)0.0),((Float)0.0));
HXLINE(  99)			while(true){
HXLINE(  99)				bool _hx_tmp3;
HXDLIN(  99)				if ((currentWidth < (int)1)) {
HXLINE(  99)					_hx_tmp3 = (currentHeight >= (int)1);
            				}
            				else {
HXLINE(  99)					_hx_tmp3 = true;
            				}
HXDLIN(  99)				if (!(_hx_tmp3)) {
HXLINE(  99)					goto _hx_goto_3;
            				}
HXLINE( 101)				bounds->setTo((int)0,(int)0,currentWidth,currentHeight);
HXLINE( 102)				canvas->fillRect(bounds,(int)0);
HXLINE( 103)				canvas->draw(data,matrix,null(),null(),null(),true);
HXLINE( 104)				level = (level + (int)1);
HXDLIN( 104)				this->upload(canvas,(level - (int)1),false);
HXLINE( 105)				matrix->scale(((Float)0.5),((Float)0.5));
HXLINE( 106)				currentWidth = ((int)currentWidth >> (int)(int)1);
HXLINE( 107)				currentHeight = ((int)currentHeight >> (int)(int)1);
            			}
            			_hx_goto_3:;
HXLINE( 110)			canvas->dispose();
            		}
HXLINE( 113)		if (hx::IsNotNull( buffer )) {
HXLINE( 113)			buffer->dispose();
            		}
HXLINE( 115)		this->setDataUploaded();
            	}


bool ConcretePotTexture_obj::get_isPotTexture(){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_119_get_isPotTexture)
HXDLIN( 119)		return true;
            	}


void ConcretePotTexture_obj::uploadAtfData( ::openfl::utils::ByteArrayData data,hx::Null< int >  __o_offset, ::Dynamic async){
int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_123_uploadAtfData)
HXLINE( 124)		data->_hx___endian = (int)0;
HXLINE( 125)		bool isAsync = hx::IsNotNull( async );
HXLINE( 127)		if (isAsync) {
HXLINE( 129)			this->_textureReadyCallback = async;
HXLINE( 130)			this->get_base()->addEventListener(HX_("textureReady",88,4d,5a,df),this->onTextureReady_dyn(),null(),null(),null());
            		}
HXLINE( 133)		this->get_potBase()->uploadCompressedTextureFromByteArray(data,offset,isAsync);
HXLINE( 134)		this->setDataUploaded();
            	}


void ConcretePotTexture_obj::upload( ::openfl::display::BitmapData source,int mipLevel,bool isAsync){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_139_upload)
HXDLIN( 139)		if (isAsync) {
HXLINE( 141)			this->uploadAsync(source,mipLevel);
HXLINE( 142)			this->get_base()->addEventListener(HX_("textureReady",88,4d,5a,df),this->onTextureReady_dyn(),null(),null(),null());
HXLINE( 143)			this->get_base()->addEventListener(HX_("error",c8,cb,29,73),this->onTextureReady_dyn(),null(),null(),null());
            		}
            		else {
HXLINE( 147)			this->get_potBase()->uploadFromBitmapData(source,mipLevel,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConcretePotTexture_obj,upload,(void))

void ConcretePotTexture_obj::uploadAsync( ::openfl::display::BitmapData source,int mipLevel){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_152_uploadAsync)
HXLINE( 151)		 ::starling::textures::ConcretePotTexture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 153)		if (::starling::textures::ConcretePotTexture_obj::sAsyncUploadEnabled) {
HXLINE( 155)			 ::Dynamic method = ::Reflect_obj::field(this->get_base(),HX_("uploadFromBitmapDataAsync",f8,f6,6a,07));
HXLINE( 156)			try {
            				HX_STACK_CATCHABLE( ::openfl::errors::Error, 0);
HXLINE( 156)				::Reflect_obj::callMethod(method,method,::cpp::VirtualArray_obj::__new(2)->init(0,source)->init(1,mipLevel));
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::openfl::errors::Error >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::openfl::errors::Error error = _hx_e;
HXLINE( 159)					bool _hx_tmp;
HXDLIN( 159)					if ((error->errorID != (int)3708)) {
HXLINE( 159)						_hx_tmp = (error->errorID == (int)1069);
            					}
            					else {
HXLINE( 159)						_hx_tmp = true;
            					}
HXDLIN( 159)					if (_hx_tmp) {
HXLINE( 160)						::starling::textures::ConcretePotTexture_obj::sAsyncUploadEnabled = false;
            					}
            					else {
HXLINE( 162)						HX_STACK_DO_THROW(error);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 166)		if (!(::starling::textures::ConcretePotTexture_obj::sAsyncUploadEnabled)) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::starling::textures::ConcretePotTexture,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_169_uploadAsync)
HXLINE( 169)				 ::openfl::display3D::textures::TextureBase _hx_tmp1 = _gthis->get_base();
HXDLIN( 169)				_hx_tmp1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null()));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 168)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),(int)1);
HXLINE( 171)			this->get_potBase()->uploadFromBitmapData(source,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConcretePotTexture_obj,uploadAsync,(void))

void ConcretePotTexture_obj::onTextureReady( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_176_onTextureReady)
HXLINE( 177)		this->get_base()->removeEventListener(HX_("textureReady",88,4d,5a,df),this->onTextureReady_dyn(),null());
HXLINE( 178)		this->get_base()->removeEventListener(HX_("error",c8,cb,29,73),this->onTextureReady_dyn(),null());
HXLINE( 180)		if (hx::IsNotNull( this->_textureReadyCallback )) {
HXLINE( 181)			this->_textureReadyCallback(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 182)		this->_textureReadyCallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConcretePotTexture_obj,onTextureReady,(void))

 ::openfl::display3D::textures::Texture ConcretePotTexture_obj::get_potBase(){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_188_get_potBase)
HXDLIN( 188)		return ( ( ::openfl::display3D::textures::Texture)(this->get_base()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConcretePotTexture_obj,get_potBase,return )

 ::openfl::geom::Matrix ConcretePotTexture_obj::sMatrix;

 ::openfl::geom::Rectangle ConcretePotTexture_obj::sRectangle;

 ::openfl::geom::Point ConcretePotTexture_obj::sOrigin;

bool ConcretePotTexture_obj::sAsyncUploadEnabled;

bool ConcretePotTexture_obj::get_asyncUploadEnabled(){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_193_get_asyncUploadEnabled)
HXDLIN( 193)		return ::starling::textures::ConcretePotTexture_obj::sAsyncUploadEnabled;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ConcretePotTexture_obj,get_asyncUploadEnabled,return )

bool ConcretePotTexture_obj::set_asyncUploadEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_194_set_asyncUploadEnabled)
HXDLIN( 194)		return (::starling::textures::ConcretePotTexture_obj::sAsyncUploadEnabled = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConcretePotTexture_obj,set_asyncUploadEnabled,return )


hx::ObjectPtr< ConcretePotTexture_obj > ConcretePotTexture_obj::__new( ::openfl::display3D::textures::Texture base,::String format,int width,int height,bool mipMapping,bool premultipliedAlpha,hx::Null< bool >  __o_optimizedForRenderTexture,hx::Null< Float >  __o_scale) {
	hx::ObjectPtr< ConcretePotTexture_obj > __this = new ConcretePotTexture_obj();
	__this->__construct(base,format,width,height,mipMapping,premultipliedAlpha,__o_optimizedForRenderTexture,__o_scale);
	return __this;
}

hx::ObjectPtr< ConcretePotTexture_obj > ConcretePotTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::textures::Texture base,::String format,int width,int height,bool mipMapping,bool premultipliedAlpha,hx::Null< bool >  __o_optimizedForRenderTexture,hx::Null< Float >  __o_scale) {
	ConcretePotTexture_obj *__this = (ConcretePotTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConcretePotTexture_obj), true, "starling.textures.ConcretePotTexture"));
	*(void **)__this = ConcretePotTexture_obj::_hx_vtable;
	__this->__construct(base,format,width,height,mipMapping,premultipliedAlpha,__o_optimizedForRenderTexture,__o_scale);
	return __this;
}

ConcretePotTexture_obj::ConcretePotTexture_obj()
{
}

void ConcretePotTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConcretePotTexture);
	HX_MARK_MEMBER_NAME(_textureReadyCallback,"_textureReadyCallback");
	 ::starling::textures::ConcreteTexture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConcretePotTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textureReadyCallback,"_textureReadyCallback");
	 ::starling::textures::ConcreteTexture_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ConcretePotTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"potBase") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_potBase() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createBase") ) { return hx::Val( createBase_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uploadAsync") ) { return hx::Val( uploadAsync_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_potBase") ) { return hx::Val( get_potBase_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadAtfData") ) { return hx::Val( uploadAtfData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onTextureReady") ) { return hx::Val( onTextureReady_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadBitmapData") ) { return hx::Val( uploadBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isPotTexture") ) { return hx::Val( get_isPotTexture_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_textureReadyCallback") ) { return hx::Val( _textureReadyCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConcretePotTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { outValue = ( sMatrix ); return true; }
		if (HX_FIELD_EQ(inName,"sOrigin") ) { outValue = ( sOrigin ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sRectangle") ) { outValue = ( sRectangle ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"asyncUploadEnabled") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_asyncUploadEnabled() ); return true; } }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sAsyncUploadEnabled") ) { outValue = ( sAsyncUploadEnabled ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_asyncUploadEnabled") ) { outValue = get_asyncUploadEnabled_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_asyncUploadEnabled") ) { outValue = set_asyncUploadEnabled_dyn(); return true; }
	}
	return false;
}

hx::Val ConcretePotTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"_textureReadyCallback") ) { _textureReadyCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConcretePotTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sMatrix") ) { sMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"sOrigin") ) { sOrigin=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sRectangle") ) { sRectangle=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"asyncUploadEnabled") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_asyncUploadEnabled(ioValue.Cast< bool >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sAsyncUploadEnabled") ) { sAsyncUploadEnabled=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ConcretePotTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("potBase","\x46","\x60","\x66","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ConcretePotTexture_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ConcretePotTexture_obj,_textureReadyCallback),HX_HCSTRING("_textureReadyCallback","\x4c","\x75","\x82","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ConcretePotTexture_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &ConcretePotTexture_obj::sMatrix,HX_HCSTRING("sMatrix","\x14","\x03","\x81","\x9e")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &ConcretePotTexture_obj::sRectangle,HX_HCSTRING("sRectangle","\x3c","\x8d","\xc3","\x1c")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(void *) &ConcretePotTexture_obj::sOrigin,HX_HCSTRING("sOrigin","\xb9","\xe6","\xb9","\x2d")},
	{hx::fsBool,(void *) &ConcretePotTexture_obj::sAsyncUploadEnabled,HX_HCSTRING("sAsyncUploadEnabled","\xf7","\xcc","\x28","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ConcretePotTexture_obj_sMemberFields[] = {
	HX_HCSTRING("_textureReadyCallback","\x4c","\x75","\x82","\x3d"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("createBase","\x2d","\xa9","\x9e","\x53"),
	HX_HCSTRING("uploadBitmapData","\x1a","\x6f","\x8a","\x01"),
	HX_HCSTRING("get_isPotTexture","\xd9","\xb4","\x0c","\xc5"),
	HX_HCSTRING("uploadAtfData","\xdc","\x97","\x7a","\x80"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	HX_HCSTRING("uploadAsync","\x7b","\xc1","\xb0","\x47"),
	HX_HCSTRING("onTextureReady","\x47","\xad","\x49","\x09"),
	HX_HCSTRING("get_potBase","\x5d","\xc0","\x60","\x0f"),
	::String(null()) };

static void ConcretePotTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConcretePotTexture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConcretePotTexture_obj::sMatrix,"sMatrix");
	HX_MARK_MEMBER_NAME(ConcretePotTexture_obj::sRectangle,"sRectangle");
	HX_MARK_MEMBER_NAME(ConcretePotTexture_obj::sOrigin,"sOrigin");
	HX_MARK_MEMBER_NAME(ConcretePotTexture_obj::sAsyncUploadEnabled,"sAsyncUploadEnabled");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConcretePotTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConcretePotTexture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConcretePotTexture_obj::sMatrix,"sMatrix");
	HX_VISIT_MEMBER_NAME(ConcretePotTexture_obj::sRectangle,"sRectangle");
	HX_VISIT_MEMBER_NAME(ConcretePotTexture_obj::sOrigin,"sOrigin");
	HX_VISIT_MEMBER_NAME(ConcretePotTexture_obj::sAsyncUploadEnabled,"sAsyncUploadEnabled");
};

#endif

hx::Class ConcretePotTexture_obj::__mClass;

static ::String ConcretePotTexture_obj_sStaticFields[] = {
	HX_HCSTRING("sMatrix","\x14","\x03","\x81","\x9e"),
	HX_HCSTRING("sRectangle","\x3c","\x8d","\xc3","\x1c"),
	HX_HCSTRING("sOrigin","\xb9","\xe6","\xb9","\x2d"),
	HX_HCSTRING("sAsyncUploadEnabled","\xf7","\xcc","\x28","\x72"),
	HX_HCSTRING("get_asyncUploadEnabled","\xed","\x08","\x5b","\xd3"),
	HX_HCSTRING("set_asyncUploadEnabled","\x61","\x85","\x06","\x07"),
	::String(null())
};

void ConcretePotTexture_obj::__register()
{
	hx::Object *dummy = new ConcretePotTexture_obj;
	ConcretePotTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.textures.ConcretePotTexture","\x5b","\x39","\xcd","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConcretePotTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &ConcretePotTexture_obj::__SetStatic;
	__mClass->mMarkFunc = ConcretePotTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConcretePotTexture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConcretePotTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConcretePotTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConcretePotTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConcretePotTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConcretePotTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ConcretePotTexture_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_36_boot)
HXDLIN(  36)		sMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_37_boot)
HXDLIN(  37)		sRectangle =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_38_boot)
HXDLIN(  38)		sOrigin =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_STACKFRAME(&_hx_pos_80c8d93bc290c5ce_39_boot)
HXDLIN(  39)		sAsyncUploadEnabled = false;
            	}
}

} // end namespace starling
} // end namespace textures
