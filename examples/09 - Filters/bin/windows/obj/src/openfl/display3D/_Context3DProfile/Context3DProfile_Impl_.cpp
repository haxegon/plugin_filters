// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DProfile_Context3DProfile_Impl_
#include <openfl/display3D/_Context3DProfile/Context3DProfile_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_18_fromString,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","fromString",0xdbdb0761,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.fromString","openfl/display3D/Context3DProfile.hx",18,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_34_toString,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","toString",0xda661cb2,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.toString","openfl/display3D/Context3DProfile.hx",34,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_9_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",9,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_10_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",10,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_11_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",11,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_12_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",12,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_13_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",13,0x8638b9ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ee23285ac806d27a_14_boot,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_","boot",0x742ed538,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.boot","openfl/display3D/Context3DProfile.hx",14,0x8638b9ba)
namespace openfl{
namespace display3D{
namespace _Context3DProfile{

void Context3DProfile_Impl__obj::__construct() { }

Dynamic Context3DProfile_Impl__obj::__CreateEmpty() { return new Context3DProfile_Impl__obj; }

void *Context3DProfile_Impl__obj::_hx_vtable = 0;

Dynamic Context3DProfile_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DProfile_Impl__obj > _hx_result = new Context3DProfile_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DProfile_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f62d972;
}

 ::Dynamic Context3DProfile_Impl__obj::BASELINE;

 ::Dynamic Context3DProfile_Impl__obj::BASELINE_CONSTRAINED;

 ::Dynamic Context3DProfile_Impl__obj::BASELINE_EXTENDED;

 ::Dynamic Context3DProfile_Impl__obj::STANDARD;

 ::Dynamic Context3DProfile_Impl__obj::STANDARD_CONSTRAINED;

 ::Dynamic Context3DProfile_Impl__obj::STANDARD_EXTENDED;

 ::Dynamic Context3DProfile_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_18_fromString)
HXDLIN(  18)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("baseline",85,dc,27,11)) ){
HXLINE(  20)			return (int)0;
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("baselineConstrained",d1,73,c8,e8)) ){
HXLINE(  21)			return (int)1;
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("baselineExtended",5e,fa,57,d8)) ){
HXLINE(  22)			return (int)2;
HXDLIN(  22)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standard",3d,37,78,ea)) ){
HXLINE(  23)			return (int)3;
HXDLIN(  23)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standardConstrained",19,24,99,7f)) ){
HXLINE(  24)			return (int)4;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("standardExtended",16,cd,15,fe)) ){
HXLINE(  25)			return (int)5;
HXDLIN(  25)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  26)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  18)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProfile_Impl__obj,fromString,return )

::String Context3DProfile_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_34_toString)
HXDLIN(  34)		switch((int)(value)){
            			case (int)0: {
HXLINE(  36)				return HX_("baseline",85,dc,27,11);
            			}
            			break;
            			case (int)1: {
HXLINE(  37)				return HX_("baselineConstrained",d1,73,c8,e8);
            			}
            			break;
            			case (int)2: {
HXLINE(  38)				return HX_("baselineExtended",5e,fa,57,d8);
            			}
            			break;
            			case (int)3: {
HXLINE(  39)				return HX_("standard",3d,37,78,ea);
            			}
            			break;
            			case (int)4: {
HXLINE(  40)				return HX_("standardConstrained",19,24,99,7f);
            			}
            			break;
            			case (int)5: {
HXLINE(  41)				return HX_("standardExtended",16,cd,15,fe);
            			}
            			break;
            			default:{
HXLINE(  42)				return null();
            			}
            		}
HXLINE(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProfile_Impl__obj,toString,return )


Context3DProfile_Impl__obj::Context3DProfile_Impl__obj()
{
}

bool Context3DProfile_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DProfile_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DProfile_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::BASELINE,HX_HCSTRING("BASELINE","\x85","\x6c","\xad","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,HX_HCSTRING("BASELINE_CONSTRAINED","\x3c","\x9e","\x1a","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::BASELINE_EXTENDED,HX_HCSTRING("BASELINE_EXTENDED","\xf3","\xb6","\xe7","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::STANDARD,HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,HX_HCSTRING("STANDARD_CONSTRAINED","\xf4","\x2c","\xe4","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::STANDARD_EXTENDED,HX_HCSTRING("STANDARD_EXTENDED","\x3b","\x45","\x42","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DProfile_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE,"BASELINE");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,"BASELINE_CONSTRAINED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_EXTENDED,"BASELINE_EXTENDED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,"STANDARD_CONSTRAINED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_EXTENDED,"STANDARD_EXTENDED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DProfile_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE,"BASELINE");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,"BASELINE_CONSTRAINED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_EXTENDED,"BASELINE_EXTENDED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,"STANDARD_CONSTRAINED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_EXTENDED,"STANDARD_EXTENDED");
};

#endif

hx::Class Context3DProfile_Impl__obj::__mClass;

static ::String Context3DProfile_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BASELINE","\x85","\x6c","\xad","\x6a"),
	HX_HCSTRING("BASELINE_CONSTRAINED","\x3c","\x9e","\x1a","\x00"),
	HX_HCSTRING("BASELINE_EXTENDED","\xf3","\xb6","\xe7","\x2a"),
	HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43"),
	HX_HCSTRING("STANDARD_CONSTRAINED","\xf4","\x2c","\xe4","\x5f"),
	HX_HCSTRING("STANDARD_EXTENDED","\x3b","\x45","\x42","\x0b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DProfile_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DProfile_Impl__obj;
	Context3DProfile_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DProfile.Context3DProfile_Impl_","\x28","\xad","\x4e","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DProfile_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DProfile_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DProfile_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DProfile_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DProfile_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DProfile_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DProfile_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DProfile_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_9_boot)
HXDLIN(   9)		BASELINE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_10_boot)
HXDLIN(  10)		BASELINE_CONSTRAINED = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_11_boot)
HXDLIN(  11)		BASELINE_EXTENDED = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_12_boot)
HXDLIN(  12)		STANDARD = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_13_boot)
HXDLIN(  13)		STANDARD_CONSTRAINED = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ee23285ac806d27a_14_boot)
HXDLIN(  14)		STANDARD_EXTENDED = (int)5;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProfile
