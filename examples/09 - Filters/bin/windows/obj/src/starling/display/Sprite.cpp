// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObjectContainer
#include <starling/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_starling_display_Sprite
#include <starling/display/Sprite.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3dfabcdc671defc_24_new,"starling.display.Sprite","new",0xd81c7a29,"starling.display.Sprite.new","starling/display/Sprite.hx",24,0xea9c2425)
namespace starling{
namespace display{

void Sprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a3dfabcdc671defc_24_new)
HXDLIN(  24)		super::__construct();
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x31a4bcfa) {
		if (inClassId<=(int)0x25137bc0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25137bc0;
		} else {
			return inClassId==(int)0x31a4bcfa;
		}
	} else {
		return inClassId==(int)0x478fd1bb || inClassId==(int)0x6dea180f;
	}
}


hx::ObjectPtr< Sprite_obj > Sprite_obj::__new() {
	hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(hx::Ctx *_hx_ctx) {
	Sprite_obj *__this = (Sprite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "starling.display.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sprite_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

static void Sprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Object *dummy = new Sprite_obj;
	Sprite_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.display.Sprite","\xb7","\x31","\xa0","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sprite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace starling
} // end namespace display
