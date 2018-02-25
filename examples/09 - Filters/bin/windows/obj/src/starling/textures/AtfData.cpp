// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_
#include <openfl/display3D/_Context3DTextureFormat/Context3DTextureFormat_Impl_.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_starling_textures_AtfData
#include <starling/textures/AtfData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_30_new,"starling.textures.AtfData","new",0x853eca5f,"starling.textures.AtfData.new","starling/textures/AtfData.hx",30,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_75_get_format,"starling.textures.AtfData","get_format",0x44abd2e1,"starling.textures.AtfData.get_format","starling/textures/AtfData.hx",75,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_79_get_width,"starling.textures.AtfData","get_width",0xead9159c,"starling.textures.AtfData.get_width","starling/textures/AtfData.hx",79,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_83_get_height,"starling.textures.AtfData","get_height",0x49694b91,"starling.textures.AtfData.get_height","starling/textures/AtfData.hx",83,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_87_get_numTextures,"starling.textures.AtfData","get_numTextures",0x03807bb4,"starling.textures.AtfData.get_numTextures","starling/textures/AtfData.hx",87,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_91_get_isCubeMap,"starling.textures.AtfData","get_isCubeMap",0x937bac73,"starling.textures.AtfData.get_isCubeMap","starling/textures/AtfData.hx",91,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_95_get_data,"starling.textures.AtfData","get_data",0xfecd7b54,"starling.textures.AtfData.get_data","starling/textures/AtfData.hx",95,0x3711f5d1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbc060256f9e9a5c_65_isAtfData,"starling.textures.AtfData","isAtfData",0xebef0852,"starling.textures.AtfData.isAtfData","starling/textures/AtfData.hx",65,0x3711f5d1)
namespace starling{
namespace textures{

void AtfData_obj::__construct( ::openfl::utils::ByteArrayData data){
            	HX_GC_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_30_new)
HXLINE(  31)		if (!(::starling::textures::AtfData_obj::isAtfData(data))) {
HXLINE(  31)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Invalid ATF data",e0,a3,f9,e4)));
            		}
HXLINE(  33)		if ((data->b->__get((int)6) == (int)255)) {
HXLINE(  33)			data->position = (int)12;
            		}
            		else {
HXLINE(  34)			data->position = (int)6;
            		}
HXLINE(  36)		int format = data->readUnsignedByte();
HXLINE(  37)		{
HXLINE(  37)			int _g = ((int)format & (int)(int)127);
HXDLIN(  37)			switch((int)(_g)){
            				case (int)0: case (int)1: {
HXLINE(  39)					this->_format = ::openfl::display3D::_Context3DTextureFormat::Context3DTextureFormat_Impl__obj::toString((int)1);
            				}
            				break;
            				case (int)2: case (int)3: case (int)12: {
HXLINE(  40)					this->_format = ::openfl::display3D::_Context3DTextureFormat::Context3DTextureFormat_Impl__obj::toString((int)3);
            				}
            				break;
            				case (int)4: case (int)5: case (int)13: {
HXLINE(  41)					this->_format = HX_("compressedAlpha",1d,d7,1f,4a);
            				}
            				break;
            				default:{
HXLINE(  42)					HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Invalid ATF format",6d,36,9c,2c),null()));
            				}
            			}
            		}
HXLINE(  45)		this->_width = ::Std_obj::_hx_int(::Math_obj::pow((int)2,data->readUnsignedByte()));
HXLINE(  46)		this->_height = ::Std_obj::_hx_int(::Math_obj::pow((int)2,data->readUnsignedByte()));
HXLINE(  47)		this->_numTextures = data->readUnsignedByte();
HXLINE(  48)		this->_isCubeMap = (((int)format & (int)(int)128) != (int)0);
HXLINE(  49)		this->_data = data;
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if ((data->b->__get((int)5) != (int)0)) {
HXLINE(  54)			_hx_tmp = (data->b->__get((int)6) == (int)255);
            		}
            		else {
HXLINE(  54)			_hx_tmp = false;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  56)			bool emptyMipmaps = (((int)data->b->__get((int)5) & (int)(int)1) == (int)1);
HXLINE(  57)			int numTextures = ((int)((int)data->b->__get((int)5) >> (int)(int)1) & (int)(int)127);
HXLINE(  58)			int _hx_tmp1;
HXDLIN(  58)			if (emptyMipmaps) {
HXLINE(  58)				_hx_tmp1 = (int)1;
            			}
            			else {
HXLINE(  58)				_hx_tmp1 = numTextures;
            			}
HXDLIN(  58)			this->_numTextures = _hx_tmp1;
            		}
            	}

Dynamic AtfData_obj::__CreateEmpty() { return new AtfData_obj; }

void *AtfData_obj::_hx_vtable = 0;

Dynamic AtfData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AtfData_obj > _hx_result = new AtfData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AtfData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09f13c3d;
}

::String AtfData_obj::get_format(){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_75_get_format)
HXDLIN(  75)		return this->_format;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AtfData_obj,get_format,return )

int AtfData_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_79_get_width)
HXDLIN(  79)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AtfData_obj,get_width,return )

int AtfData_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_83_get_height)
HXDLIN(  83)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AtfData_obj,get_height,return )

int AtfData_obj::get_numTextures(){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_87_get_numTextures)
HXDLIN(  87)		return this->_numTextures;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AtfData_obj,get_numTextures,return )

bool AtfData_obj::get_isCubeMap(){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_91_get_isCubeMap)
HXDLIN(  91)		return this->_isCubeMap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AtfData_obj,get_isCubeMap,return )

 ::openfl::utils::ByteArrayData AtfData_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_95_get_data)
HXDLIN(  95)		return this->_data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AtfData_obj,get_data,return )

bool AtfData_obj::isAtfData( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_bbc060256f9e9a5c_65_isAtfData)
HXDLIN(  65)		if ((::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data) < (int)3)) {
HXDLIN(  65)			return false;
            		}
            		else {
HXLINE(  68)			::String signature = ::String::fromCharCode(data->b->__get((int)0));
HXDLIN(  68)			::String signature1 = (signature + ::String::fromCharCode(data->b->__get((int)1)));
HXDLIN(  68)			::String signature2 = (signature1 + ::String::fromCharCode(data->b->__get((int)2)));
HXLINE(  69)			return (signature2 == HX_("ATF",f3,9b,31,00));
            		}
HXLINE(  65)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtfData_obj,isAtfData,return )


hx::ObjectPtr< AtfData_obj > AtfData_obj::__new( ::openfl::utils::ByteArrayData data) {
	hx::ObjectPtr< AtfData_obj > __this = new AtfData_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< AtfData_obj > AtfData_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData data) {
	AtfData_obj *__this = (AtfData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AtfData_obj), true, "starling.textures.AtfData"));
	*(void **)__this = AtfData_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

AtfData_obj::AtfData_obj()
{
}

void AtfData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtfData);
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_numTextures,"_numTextures");
	HX_MARK_MEMBER_NAME(_isCubeMap,"_isCubeMap");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_END_CLASS();
}

void AtfData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_numTextures,"_numTextures");
	HX_VISIT_MEMBER_NAME(_isCubeMap,"_isCubeMap");
	HX_VISIT_MEMBER_NAME(_data,"_data");
}

hx::Val AtfData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_data() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return hx::Val( _data ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_format() ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_height() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { return hx::Val( _format ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return hx::Val( _height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return hx::Val( get_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"isCubeMap") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_isCubeMap() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isCubeMap") ) { return hx::Val( _isCubeMap ); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return hx::Val( get_format_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numTextures") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_numTextures() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numTextures") ) { return hx::Val( _numTextures ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isCubeMap") ) { return hx::Val( get_isCubeMap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numTextures") ) { return hx::Val( get_numTextures_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AtfData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isAtfData") ) { outValue = isAtfData_dyn(); return true; }
	}
	return false;
}

hx::Val AtfData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isCubeMap") ) { _isCubeMap=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numTextures") ) { _numTextures=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtfData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_numTextures","\x9f","\xf5","\xee","\xb7"));
	outFields->push(HX_HCSTRING("_isCubeMap","\x9e","\x45","\x71","\xec"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("numTextures","\x9e","\x47","\xe5","\x51"));
	outFields->push(HX_HCSTRING("isCubeMap","\xdd","\xc9","\xce","\x90"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AtfData_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AtfData_obj,_format),HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c")},
	{hx::fsInt,(int)offsetof(AtfData_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(AtfData_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsInt,(int)offsetof(AtfData_obj,_numTextures),HX_HCSTRING("_numTextures","\x9f","\xf5","\xee","\xb7")},
	{hx::fsBool,(int)offsetof(AtfData_obj,_isCubeMap),HX_HCSTRING("_isCubeMap","\x9e","\x45","\x71","\xec")},
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(AtfData_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AtfData_obj_sStaticStorageInfo = 0;
#endif

static ::String AtfData_obj_sMemberFields[] = {
	HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_numTextures","\x9f","\xf5","\xee","\xb7"),
	HX_HCSTRING("_isCubeMap","\x9e","\x45","\x71","\xec"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_numTextures","\x35","\xff","\xc6","\x12"),
	HX_HCSTRING("get_isCubeMap","\xb4","\x9d","\x32","\x52"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	::String(null()) };

static void AtfData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtfData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AtfData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtfData_obj::__mClass,"__mClass");
};

#endif

hx::Class AtfData_obj::__mClass;

static ::String AtfData_obj_sStaticFields[] = {
	HX_HCSTRING("isAtfData","\x13","\x05","\x22","\x0f"),
	::String(null())
};

void AtfData_obj::__register()
{
	hx::Object *dummy = new AtfData_obj;
	AtfData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.textures.AtfData","\xed","\xae","\x9c","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AtfData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AtfData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AtfData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AtfData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AtfData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AtfData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AtfData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AtfData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace textures
