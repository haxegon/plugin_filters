// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_
#include <openfl/display/_GraphicsPathWinding/GraphicsPathWinding_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e291141470723f52_11_fromString,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","fromString",0x5431d0d8,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_.fromString","openfl/display/GraphicsPathWinding.hx",11,0xa8467880)
HX_LOCAL_STACK_FRAME(_hx_pos_e291141470723f52_23_toString,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","toString",0x816cca69,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_.toString","openfl/display/GraphicsPathWinding.hx",23,0xa8467880)
HX_LOCAL_STACK_FRAME(_hx_pos_e291141470723f52_6_boot,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","boot",0xb4d09b6f,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_.boot","openfl/display/GraphicsPathWinding.hx",6,0xa8467880)
HX_LOCAL_STACK_FRAME(_hx_pos_e291141470723f52_7_boot,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","boot",0xb4d09b6f,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_.boot","openfl/display/GraphicsPathWinding.hx",7,0xa8467880)
namespace openfl{
namespace display{
namespace _GraphicsPathWinding{

void GraphicsPathWinding_Impl__obj::__construct() { }

Dynamic GraphicsPathWinding_Impl__obj::__CreateEmpty() { return new GraphicsPathWinding_Impl__obj; }

void *GraphicsPathWinding_Impl__obj::_hx_vtable = 0;

Dynamic GraphicsPathWinding_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsPathWinding_Impl__obj > _hx_result = new GraphicsPathWinding_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsPathWinding_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f492dfd;
}

 ::Dynamic GraphicsPathWinding_Impl__obj::EVEN_ODD;

 ::Dynamic GraphicsPathWinding_Impl__obj::NON_ZERO;

 ::Dynamic GraphicsPathWinding_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_e291141470723f52_11_fromString)
HXDLIN(  11)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("evenOdd",b5,c6,7e,06)) ){
HXLINE(  13)			return (int)0;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("nonZero",d5,1e,b4,d1)) ){
HXLINE(  14)			return (int)1;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  15)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  11)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsPathWinding_Impl__obj,fromString,return )

::String GraphicsPathWinding_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_e291141470723f52_23_toString)
HXDLIN(  23)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("evenOdd",b5,c6,7e,06);
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				return HX_("nonZero",d5,1e,b4,d1);
            			}
            			break;
            			default:{
HXLINE(  27)				return null();
            			}
            		}
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsPathWinding_Impl__obj,toString,return )


GraphicsPathWinding_Impl__obj::GraphicsPathWinding_Impl__obj()
{
}

bool GraphicsPathWinding_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *GraphicsPathWinding_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicsPathWinding_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &GraphicsPathWinding_Impl__obj::EVEN_ODD,HX_HCSTRING("EVEN_ODD","\xaa","\x3e","\xb7","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GraphicsPathWinding_Impl__obj::NON_ZERO,HX_HCSTRING("NON_ZERO","\xfa","\x82","\x17","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicsPathWinding_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_Impl__obj::EVEN_ODD,"EVEN_ODD");
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_Impl__obj::NON_ZERO,"NON_ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsPathWinding_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_Impl__obj::EVEN_ODD,"EVEN_ODD");
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_Impl__obj::NON_ZERO,"NON_ZERO");
};

#endif

hx::Class GraphicsPathWinding_Impl__obj::__mClass;

static ::String GraphicsPathWinding_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("EVEN_ODD","\xaa","\x3e","\xb7","\x21"),
	HX_HCSTRING("NON_ZERO","\xfa","\x82","\x17","\x61"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void GraphicsPathWinding_Impl__obj::__register()
{
	hx::Object *dummy = new GraphicsPathWinding_Impl__obj;
	GraphicsPathWinding_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","\x51","\x92","\x50","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsPathWinding_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsPathWinding_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicsPathWinding_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsPathWinding_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsPathWinding_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsPathWinding_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsPathWinding_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicsPathWinding_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e291141470723f52_6_boot)
HXDLIN(   6)		EVEN_ODD = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e291141470723f52_7_boot)
HXDLIN(   7)		NON_ZERO = (int)1;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _GraphicsPathWinding
