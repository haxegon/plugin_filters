// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_starling_geom_Ellipse
#include <starling/geom/Ellipse.h>
#endif
#ifndef INCLUDED_starling_geom_ImmutablePolygon
#include <starling/geom/ImmutablePolygon.h>
#endif
#ifndef INCLUDED_starling_geom_Polygon
#include <starling/geom/Polygon.h>
#endif
#ifndef INCLUDED_starling_rendering_IndexData
#include <starling/rendering/IndexData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_93a56fe090084b99_15_new,"starling.geom.Ellipse","new",0xbedcaa64,"starling.geom.Ellipse.new","starling/geom/Ellipse.hx",15,0xccee41ec)
HX_LOCAL_STACK_FRAME(_hx_pos_93a56fe090084b99_25_getVertices,"starling.geom.Ellipse","getVertices",0xf5c200b3,"starling.geom.Ellipse.getVertices","starling/geom/Ellipse.hx",25,0xccee41ec)
HX_LOCAL_STACK_FRAME(_hx_pos_93a56fe090084b99_44_triangulate,"starling.geom.Ellipse","triangulate",0x4f55e330,"starling.geom.Ellipse.triangulate","starling/geom/Ellipse.hx",44,0xccee41ec)
HX_LOCAL_STACK_FRAME(_hx_pos_93a56fe090084b99_57_contains,"starling.geom.Ellipse","contains",0x2709b19b,"starling.geom.Ellipse.contains","starling/geom/Ellipse.hx",57,0xccee41ec)
HX_LOCAL_STACK_FRAME(_hx_pos_93a56fe090084b99_69_get_area,"starling.geom.Ellipse","get_area",0xbabd9e92,"starling.geom.Ellipse.get_area","starling/geom/Ellipse.hx",69,0xccee41ec)
HX_LOCAL_STACK_FRAME(_hx_pos_93a56fe090084b99_74_get_isSimple,"starling.geom.Ellipse","get_isSimple",0x61b81941,"starling.geom.Ellipse.get_isSimple","starling/geom/Ellipse.hx",74,0xccee41ec)
HX_LOCAL_STACK_FRAME(_hx_pos_93a56fe090084b99_79_get_isConvex,"starling.geom.Ellipse","get_isConvex",0x71178c76,"starling.geom.Ellipse.get_isConvex","starling/geom/Ellipse.hx",79,0xccee41ec)
namespace starling{
namespace geom{

void Ellipse_obj::__construct(Float x,Float y,Float radiusX,Float radiusY,hx::Null< int >  __o_numSides){
int numSides = __o_numSides.Default(-1);
            	HX_STACKFRAME(&_hx_pos_93a56fe090084b99_15_new)
HXLINE(  16)		this->_hx___x = x;
HXLINE(  17)		this->_hx___y = y;
HXLINE(  18)		this->_hx___radiusX = radiusX;
HXLINE(  19)		this->_hx___radiusY = radiusY;
HXLINE(  21)		super::__construct(this->getVertices(numSides));
            	}

Dynamic Ellipse_obj::__CreateEmpty() { return new Ellipse_obj; }

void *Ellipse_obj::_hx_vtable = 0;

Dynamic Ellipse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Ellipse_obj > _hx_result = new Ellipse_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Ellipse_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x410fc13a) {
		if (inClassId<=(int)0x38db027c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x38db027c;
		} else {
			return inClassId==(int)0x410fc13a;
		}
	} else {
		return inClassId==(int)0x481a82d6;
	}
}

::Array< Float > Ellipse_obj::getVertices(int numSides){
            	HX_STACKFRAME(&_hx_pos_93a56fe090084b99_25_getVertices)
HXLINE(  26)		if ((numSides < (int)0)) {
HXLINE(  26)			Float numSides1 = ::Math_obj::PI;
HXDLIN(  26)			numSides = ::Std_obj::_hx_int(((Float)(numSides1 * (this->_hx___radiusX + this->_hx___radiusY)) / (Float)((Float)4.0)));
            		}
HXLINE(  27)		if ((numSides < (int)6)) {
HXLINE(  27)			numSides = (int)6;
            		}
HXLINE(  29)		::Array< Float > vertices = ::Array_obj< Float >::__new(0);
HXLINE(  30)		Float angleDelta = ((Float)((int)2 * ::Math_obj::PI) / (Float)numSides);
HXLINE(  31)		Float angle = (int)0;
HXLINE(  33)		{
HXLINE(  33)			int _g1 = (int)0;
HXDLIN(  33)			int _g = numSides;
HXDLIN(  33)			while((_g1 < _g)){
HXLINE(  33)				_g1 = (_g1 + (int)1);
HXDLIN(  33)				int i = (_g1 - (int)1);
HXLINE(  35)				vertices[(i * (int)2)] = ((::Math_obj::cos(angle) * this->_hx___radiusX) + this->_hx___x);
HXLINE(  36)				vertices[((i * (int)2) + (int)1)] = ((::Math_obj::sin(angle) * this->_hx___radiusY) + this->_hx___y);
HXLINE(  37)				angle = (angle + angleDelta);
            			}
            		}
HXLINE(  40)		return vertices;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Ellipse_obj,getVertices,return )

 ::starling::rendering::IndexData Ellipse_obj::triangulate( ::starling::rendering::IndexData indexData,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_93a56fe090084b99_44_triangulate)
HXLINE(  45)		if (hx::IsNull( indexData )) {
HXLINE(  45)			indexData =  ::starling::rendering::IndexData_obj::__alloc( HX_CTX ,((this->get_numVertices() - (int)2) * (int)3));
            		}
HXLINE(  47)		int from = (int)1;
HXLINE(  48)		int to = (this->get_numVertices() - (int)1);
HXLINE(  50)		{
HXLINE(  50)			int _g1 = from;
HXDLIN(  50)			int _g = to;
HXDLIN(  50)			while((_g1 < _g)){
HXLINE(  50)				_g1 = (_g1 + (int)1);
HXDLIN(  50)				int i = (_g1 - (int)1);
HXLINE(  51)				indexData->addTriangle(offset,(offset + i),((offset + i) + (int)1));
            			}
            		}
HXLINE(  53)		return indexData;
            	}


bool Ellipse_obj::contains(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_93a56fe090084b99_57_contains)
HXLINE(  58)		Float vx = (x - this->_hx___x);
HXLINE(  59)		Float vy = (y - this->_hx___y);
HXLINE(  61)		Float a = ((Float)vx / (Float)this->_hx___radiusX);
HXLINE(  62)		Float b = ((Float)vy / (Float)this->_hx___radiusY);
HXLINE(  64)		return (((a * a) + (b * b)) <= (int)1);
            	}


Float Ellipse_obj::get_area(){
            	HX_STACKFRAME(&_hx_pos_93a56fe090084b99_69_get_area)
HXDLIN(  69)		return ((::Math_obj::PI * this->_hx___radiusX) * this->_hx___radiusY);
            	}


bool Ellipse_obj::get_isSimple(){
            	HX_STACKFRAME(&_hx_pos_93a56fe090084b99_74_get_isSimple)
HXDLIN(  74)		return true;
            	}


bool Ellipse_obj::get_isConvex(){
            	HX_STACKFRAME(&_hx_pos_93a56fe090084b99_79_get_isConvex)
HXDLIN(  79)		return true;
            	}



hx::ObjectPtr< Ellipse_obj > Ellipse_obj::__new(Float x,Float y,Float radiusX,Float radiusY,hx::Null< int >  __o_numSides) {
	hx::ObjectPtr< Ellipse_obj > __this = new Ellipse_obj();
	__this->__construct(x,y,radiusX,radiusY,__o_numSides);
	return __this;
}

hx::ObjectPtr< Ellipse_obj > Ellipse_obj::__alloc(hx::Ctx *_hx_ctx,Float x,Float y,Float radiusX,Float radiusY,hx::Null< int >  __o_numSides) {
	Ellipse_obj *__this = (Ellipse_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Ellipse_obj), true, "starling.geom.Ellipse"));
	*(void **)__this = Ellipse_obj::_hx_vtable;
	__this->__construct(x,y,radiusX,radiusY,__o_numSides);
	return __this;
}

Ellipse_obj::Ellipse_obj()
{
}

hx::Val Ellipse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return hx::Val( _hx___x ); }
		if (HX_FIELD_EQ(inName,"__y") ) { return hx::Val( _hx___y ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_area") ) { return hx::Val( get_area_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__radiusX") ) { return hx::Val( _hx___radiusX ); }
		if (HX_FIELD_EQ(inName,"__radiusY") ) { return hx::Val( _hx___radiusY ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getVertices") ) { return hx::Val( getVertices_dyn() ); }
		if (HX_FIELD_EQ(inName,"triangulate") ) { return hx::Val( triangulate_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isSimple") ) { return hx::Val( get_isSimple_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isConvex") ) { return hx::Val( get_isConvex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Ellipse_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { _hx___x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { _hx___y=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__radiusX") ) { _hx___radiusX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__radiusY") ) { _hx___radiusY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ellipse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__y","\x59","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__radiusX","\xa6","\xc8","\x4d","\xa8"));
	outFields->push(HX_HCSTRING("__radiusY","\xa7","\xc8","\x4d","\xa8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Ellipse_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Ellipse_obj,_hx___x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Ellipse_obj,_hx___y),HX_HCSTRING("__y","\x59","\x69","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(Ellipse_obj,_hx___radiusX),HX_HCSTRING("__radiusX","\xa6","\xc8","\x4d","\xa8")},
	{hx::fsFloat,(int)offsetof(Ellipse_obj,_hx___radiusY),HX_HCSTRING("__radiusY","\xa7","\xc8","\x4d","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Ellipse_obj_sStaticStorageInfo = 0;
#endif

static ::String Ellipse_obj_sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("__y","\x59","\x69","\x48","\x00"),
	HX_HCSTRING("__radiusX","\xa6","\xc8","\x4d","\xa8"),
	HX_HCSTRING("__radiusY","\xa7","\xc8","\x4d","\xa8"),
	HX_HCSTRING("getVertices","\xaf","\x82","\x09","\x90"),
	HX_HCSTRING("triangulate","\x2c","\x65","\x9d","\xe9"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("get_area","\x16","\x47","\x2f","\xc0"),
	HX_HCSTRING("get_isSimple","\xc5","\x53","\x02","\xc6"),
	HX_HCSTRING("get_isConvex","\xfa","\xc6","\x61","\xd5"),
	::String(null()) };

static void Ellipse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ellipse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Ellipse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ellipse_obj::__mClass,"__mClass");
};

#endif

hx::Class Ellipse_obj::__mClass;

void Ellipse_obj::__register()
{
	hx::Object *dummy = new Ellipse_obj;
	Ellipse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.geom.Ellipse","\x72","\xe8","\xde","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Ellipse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Ellipse_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ellipse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Ellipse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ellipse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ellipse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace geom
