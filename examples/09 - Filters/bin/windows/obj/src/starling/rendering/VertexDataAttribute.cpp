// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_starling_rendering_VertexDataAttribute
#include <starling/rendering/VertexDataAttribute.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0c7c040f642f5672_31_new,"starling.rendering.VertexDataAttribute","new",0x934c7618,"starling.rendering.VertexDataAttribute.new","starling/rendering/VertexDataAttribute.hx",31,0x12b0411a)
namespace starling{
namespace rendering{

void VertexDataAttribute_obj::__construct(::String name,::String format,int offset){
            	HX_GC_STACKFRAME(&_hx_pos_0c7c040f642f5672_31_new)
HXLINE(  32)		if (hx::IsNull( ::starling::rendering::VertexDataAttribute_obj::FORMAT_SIZES )) {
HXLINE(  34)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  34)			_g->set(HX_("bytes4",69,55,6f,27),(int)4);
HXDLIN(  34)			_g->set(HX_("float1",15,23,56,41),(int)4);
HXDLIN(  34)			_g->set(HX_("float2",16,23,56,41),(int)8);
HXDLIN(  34)			_g->set(HX_("float3",17,23,56,41),(int)12);
HXDLIN(  34)			_g->set(HX_("float4",18,23,56,41),(int)16);
HXDLIN(  34)			::starling::rendering::VertexDataAttribute_obj::FORMAT_SIZES = _g;
            		}
HXLINE(  42)		if (!(::starling::rendering::VertexDataAttribute_obj::FORMAT_SIZES->exists(format))) {
HXLINE(  43)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(((HX_("Invalid attribute format: ",ca,11,07,50) + format) + HX_(". ",32,28,00,00)) + HX_("Use one of the following: 'float1'-'float4', 'bytes4'",e3,eb,59,5b))));
            		}
HXLINE(  47)		this->name = name;
HXLINE(  48)		this->format = format;
HXLINE(  49)		this->offset = offset;
HXLINE(  50)		this->size = ( (int)(::starling::rendering::VertexDataAttribute_obj::FORMAT_SIZES->get(format)) );
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if ((name.indexOf(HX_("color",63,71,5c,4a),null()) == (int)-1)) {
HXLINE(  51)			_hx_tmp = (name.indexOf(HX_("Color",43,e1,89,dd),null()) != (int)-1);
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		this->isColor = _hx_tmp;
            	}

Dynamic VertexDataAttribute_obj::__CreateEmpty() { return new VertexDataAttribute_obj; }

void *VertexDataAttribute_obj::_hx_vtable = 0;

Dynamic VertexDataAttribute_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VertexDataAttribute_obj > _hx_result = new VertexDataAttribute_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool VertexDataAttribute_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48eed06a;
}

 ::haxe::ds::StringMap VertexDataAttribute_obj::FORMAT_SIZES;


hx::ObjectPtr< VertexDataAttribute_obj > VertexDataAttribute_obj::__new(::String name,::String format,int offset) {
	hx::ObjectPtr< VertexDataAttribute_obj > __this = new VertexDataAttribute_obj();
	__this->__construct(name,format,offset);
	return __this;
}

hx::ObjectPtr< VertexDataAttribute_obj > VertexDataAttribute_obj::__alloc(hx::Ctx *_hx_ctx,::String name,::String format,int offset) {
	VertexDataAttribute_obj *__this = (VertexDataAttribute_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VertexDataAttribute_obj), true, "starling.rendering.VertexDataAttribute"));
	*(void **)__this = VertexDataAttribute_obj::_hx_vtable;
	__this->__construct(name,format,offset);
	return __this;
}

VertexDataAttribute_obj::VertexDataAttribute_obj()
{
}

void VertexDataAttribute_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexDataAttribute);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(isColor,"isColor");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void VertexDataAttribute_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(isColor,"isColor");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(size,"size");
}

hx::Val VertexDataAttribute_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isColor") ) { return hx::Val( isColor ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VertexDataAttribute_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FORMAT_SIZES") ) { outValue = ( FORMAT_SIZES ); return true; }
	}
	return false;
}

hx::Val VertexDataAttribute_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isColor") ) { isColor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VertexDataAttribute_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FORMAT_SIZES") ) { FORMAT_SIZES=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void VertexDataAttribute_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("isColor","\x19","\x15","\xe2","\xe6"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VertexDataAttribute_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(VertexDataAttribute_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(VertexDataAttribute_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsBool,(int)offsetof(VertexDataAttribute_obj,isColor),HX_HCSTRING("isColor","\x19","\x15","\xe2","\xe6")},
	{hx::fsInt,(int)offsetof(VertexDataAttribute_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(VertexDataAttribute_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo VertexDataAttribute_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &VertexDataAttribute_obj::FORMAT_SIZES,HX_HCSTRING("FORMAT_SIZES","\x2a","\x86","\xfa","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String VertexDataAttribute_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("isColor","\x19","\x15","\xe2","\xe6"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	::String(null()) };

static void VertexDataAttribute_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexDataAttribute_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VertexDataAttribute_obj::FORMAT_SIZES,"FORMAT_SIZES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VertexDataAttribute_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexDataAttribute_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VertexDataAttribute_obj::FORMAT_SIZES,"FORMAT_SIZES");
};

#endif

hx::Class VertexDataAttribute_obj::__mClass;

static ::String VertexDataAttribute_obj_sStaticFields[] = {
	HX_HCSTRING("FORMAT_SIZES","\x2a","\x86","\xfa","\xea"),
	::String(null())
};

void VertexDataAttribute_obj::__register()
{
	hx::Object *dummy = new VertexDataAttribute_obj;
	VertexDataAttribute_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.rendering.VertexDataAttribute","\x26","\xca","\xa9","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VertexDataAttribute_obj::__GetStatic;
	__mClass->mSetStaticField = &VertexDataAttribute_obj::__SetStatic;
	__mClass->mMarkFunc = VertexDataAttribute_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VertexDataAttribute_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VertexDataAttribute_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexDataAttribute_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VertexDataAttribute_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexDataAttribute_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexDataAttribute_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace rendering
