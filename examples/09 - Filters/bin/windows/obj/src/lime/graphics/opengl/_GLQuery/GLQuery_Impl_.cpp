// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLQuery_GLQuery_Impl_
#include <lime/graphics/opengl/_GLQuery/GLQuery_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_82fc8ff80fd7e425_14_fromInt,"lime.graphics.opengl._GLQuery.GLQuery_Impl_","fromInt",0xfb88d665,"lime.graphics.opengl._GLQuery.GLQuery_Impl_.fromInt","lime/graphics/opengl/GLQuery.hx",14,0x69cab751)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLQuery{

void GLQuery_Impl__obj::__construct() { }

Dynamic GLQuery_Impl__obj::__CreateEmpty() { return new GLQuery_Impl__obj; }

void *GLQuery_Impl__obj::_hx_vtable = 0;

Dynamic GLQuery_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLQuery_Impl__obj > _hx_result = new GLQuery_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLQuery_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f05a470;
}

 ::lime::graphics::opengl::GLObject GLQuery_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_82fc8ff80fd7e425_14_fromInt)
HXDLIN(  14)		return ::lime::graphics::opengl::GLObject_obj::fromInt((int)8,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLQuery_Impl__obj,fromInt,return )


GLQuery_Impl__obj::GLQuery_Impl__obj()
{
}

bool GLQuery_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLQuery_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLQuery_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLQuery_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLQuery_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLQuery_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLQuery_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLQuery_Impl__obj::__mClass;

static ::String GLQuery_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null())
};

void GLQuery_Impl__obj::__register()
{
	hx::Object *dummy = new GLQuery_Impl__obj;
	GLQuery_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLQuery.GLQuery_Impl_","\x2e","\x99","\x5b","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLQuery_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLQuery_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLQuery_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLQuery_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLQuery_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLQuery_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLQuery_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLQuery