// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif

namespace openfl{
namespace display{


static void IGraphicsStroke_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsStroke_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IGraphicsStroke_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsStroke_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsStroke_obj::__mClass;

void IGraphicsStroke_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.IGraphicsStroke","\x02","\xf8","\xbe","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IGraphicsStroke_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0xf088881a >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IGraphicsStroke_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
