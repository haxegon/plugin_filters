// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageQuality_StageQuality_Impl_
#include <openfl/display/_StageQuality/StageQuality_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_13_fromString,"openfl.display._StageQuality.StageQuality_Impl_","fromString",0xd5e08bb0,"openfl.display._StageQuality.StageQuality_Impl_.fromString","openfl/display/StageQuality.hx",13,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_27_toString,"openfl.display._StageQuality.StageQuality_Impl_","toString",0x0c5a9f41,"openfl.display._StageQuality.StageQuality_Impl_.toString","openfl/display/StageQuality.hx",27,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_6_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",6,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_7_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",7,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_8_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",8,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_9_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",9,0x4c0ba3d1)
namespace openfl{
namespace display{
namespace _StageQuality{

void StageQuality_Impl__obj::__construct() { }

Dynamic StageQuality_Impl__obj::__CreateEmpty() { return new StageQuality_Impl__obj; }

void *StageQuality_Impl__obj::_hx_vtable = 0;

Dynamic StageQuality_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StageQuality_Impl__obj > _hx_result = new StageQuality_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageQuality_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68fb030f;
}

 ::Dynamic StageQuality_Impl__obj::BEST;

 ::Dynamic StageQuality_Impl__obj::HIGH;

 ::Dynamic StageQuality_Impl__obj::LOW;

 ::Dynamic StageQuality_Impl__obj::MEDIUM;

 ::Dynamic StageQuality_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_13_fromString)
HXDLIN(  13)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("best",24,f1,13,41)) ){
HXLINE(  15)			return (int)0;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("high",62,37,0e,45)) ){
HXLINE(  16)			return (int)1;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("low",94,54,52,00)) ){
HXLINE(  17)			return (int)2;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("medium",75,54,c8,fe)) ){
HXLINE(  18)			return (int)3;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  19)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageQuality_Impl__obj,fromString,return )

::String StageQuality_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_27_toString)
HXDLIN(  27)		switch((int)(value)){
            			case (int)0: {
HXLINE(  29)				return HX_("best",24,f1,13,41);
            			}
            			break;
            			case (int)1: {
HXLINE(  30)				return HX_("high",62,37,0e,45);
            			}
            			break;
            			case (int)2: {
HXLINE(  31)				return HX_("low",94,54,52,00);
            			}
            			break;
            			case (int)3: {
HXLINE(  32)				return HX_("medium",75,54,c8,fe);
            			}
            			break;
            			default:{
HXLINE(  33)				return null();
            			}
            		}
HXLINE(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageQuality_Impl__obj,toString,return )


StageQuality_Impl__obj::StageQuality_Impl__obj()
{
}

bool StageQuality_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *StageQuality_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo StageQuality_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::BEST,HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::HIGH,HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::LOW,HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::MEDIUM,HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StageQuality_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::BEST,"BEST");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::HIGH,"HIGH");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::LOW,"LOW");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::MEDIUM,"MEDIUM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageQuality_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::BEST,"BEST");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::HIGH,"HIGH");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::LOW,"LOW");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::MEDIUM,"MEDIUM");
};

#endif

hx::Class StageQuality_Impl__obj::__mClass;

static ::String StageQuality_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b"),
	HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f"),
	HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00"),
	HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void StageQuality_Impl__obj::__register()
{
	hx::Object *dummy = new StageQuality_Impl__obj;
	StageQuality_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageQuality.StageQuality_Impl_","\x79","\xb8","\xd0","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageQuality_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageQuality_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StageQuality_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageQuality_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageQuality_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageQuality_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageQuality_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageQuality_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_6_boot)
HXDLIN(   6)		BEST = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_7_boot)
HXDLIN(   7)		HIGH = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_8_boot)
HXDLIN(   8)		LOW = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_9_boot)
HXDLIN(   9)		MEDIUM = (int)3;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageQuality
