// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_36_exit,"openfl.system.System","exit",0xa31a52fc,"openfl.system.System.exit","openfl/system/System.hx",36,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_44_gc,"openfl.system.System","gc",0x9ae3627a,"openfl.system.System.gc","openfl/system/System.hx",44,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_52_pause,"openfl.system.System","pause",0x5a2bdd58,"openfl.system.System.pause","openfl/system/System.hx",52,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_59_resume,"openfl.system.System","resume",0xa535f90b,"openfl.system.System.resume","openfl/system/System.hx",59,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_66_setClipboard,"openfl.system.System","setClipboard",0xdfcf8fb2,"openfl.system.System.setClipboard","openfl/system/System.hx",66,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_83_get_totalMemory,"openfl.system.System","get_totalMemory",0x85540a5e,"openfl.system.System.get_totalMemory","openfl/system/System.hx",83,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_95_get_vmVersion,"openfl.system.System","get_vmVersion",0x9b1c18da,"openfl.system.System.get_vmVersion","openfl/system/System.hx",95,0xde21ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_fb9a8c4adbcef4fa_18_boot,"openfl.system.System","boot",0xa117e010,"openfl.system.System.boot","openfl/system/System.hx",18,0xde21ad4e)
namespace openfl{
namespace _hx_system{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

void *System_obj::_hx_vtable = 0;

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool System_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x033ddd72;
}

bool System_obj::useCodePage;

void System_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_36_exit)
HXDLIN(  36)		::lime::_hx_system::System_obj::exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

void System_obj::gc(){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_44_gc)
HXDLIN(  44)		__hxcpp_collect(true);
HXDLIN(  44)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,gc,(void))

void System_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_52_pause)
HXDLIN(  52)		::openfl::_internal::Lib_obj::notImplemented(hx::SourceInfo(HX_("System.hx",0f,4b,4f,ec),52,HX_("openfl.system.System",50,91,b1,f6),HX_("pause",f6,d6,57,bd)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,pause,(void))

void System_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_59_resume)
HXDLIN(  59)		::openfl::_internal::Lib_obj::notImplemented(hx::SourceInfo(HX_("System.hx",0f,4b,4f,ec),59,HX_("openfl.system.System",50,91,b1,f6),HX_("resume",ad,69,84,08)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,resume,(void))

void System_obj::setClipboard(::String string){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_66_setClipboard)
HXDLIN(  66)		::lime::_hx_system::Clipboard_obj::set_text(string);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,setClipboard,(void))

int System_obj::get_totalMemory(){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_83_get_totalMemory)
HXDLIN(  83)		return ::__hxcpp_gc_used_bytes();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_totalMemory,return )

::String System_obj::get_vmVersion(){
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_95_get_vmVersion)
HXDLIN(  95)		return HX_("1.0.0",b5,d1,2e,55);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_vmVersion,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gc") ) { outValue = gc_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vmVersion") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_vmVersion() ); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalMemory") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_totalMemory() ); return true; } }
		if (HX_FIELD_EQ(inName,"useCodePage") ) { outValue = ( useCodePage ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setClipboard") ) { outValue = setClipboard_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_vmVersion") ) { outValue = get_vmVersion_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalMemory") ) { outValue = get_totalMemory_dyn(); return true; }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"useCodePage") ) { useCodePage=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static hx::StaticInfo System_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &System_obj::useCodePage,HX_HCSTRING("useCodePage","\x83","\x59","\xaf","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void System_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::useCodePage,"useCodePage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void System_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::useCodePage,"useCodePage");
};

#endif

hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_HCSTRING("useCodePage","\x83","\x59","\xaf","\xd8"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("gc","\x1c","\x5a","\x00","\x00"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setClipboard","\xd4","\x25","\x27","\x66"),
	HX_HCSTRING("get_totalMemory","\x7c","\x75","\xd7","\x8b"),
	HX_HCSTRING("get_vmVersion","\x78","\xe0","\x67","\xa1"),
	::String(null())
};

void System_obj::__register()
{
	hx::Object *dummy = new System_obj;
	System_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system.System","\x50","\x91","\xb1","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = System_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = System_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void System_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fb9a8c4adbcef4fa_18_boot)
HXDLIN(  18)		useCodePage = false;
            	}
}

} // end namespace openfl
} // end namespace system
