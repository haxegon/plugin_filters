// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bac8fa62cbacae74_22_new,"openfl._internal.renderer.cairo.CairoBlendModeManager","new",0xb5137212,"openfl._internal.renderer.cairo.CairoBlendModeManager.new","openfl/_internal/renderer/cairo/CairoBlendModeManager.hx",22,0x538d3b5e)
HX_LOCAL_STACK_FRAME(_hx_pos_bac8fa62cbacae74_31_setBlendMode,"openfl._internal.renderer.cairo.CairoBlendModeManager","setBlendMode",0xf5133c60,"openfl._internal.renderer.cairo.CairoBlendModeManager.setBlendMode","openfl/_internal/renderer/cairo/CairoBlendModeManager.hx",31,0x538d3b5e)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoBlendModeManager_obj::__construct( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_bac8fa62cbacae74_22_new)
HXLINE(  24)		super::__construct();
HXLINE(  26)		this->renderSession = renderSession;
            	}

Dynamic CairoBlendModeManager_obj::__CreateEmpty() { return new CairoBlendModeManager_obj; }

void *CairoBlendModeManager_obj::_hx_vtable = 0;

Dynamic CairoBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoBlendModeManager_obj > _hx_result = new CairoBlendModeManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CairoBlendModeManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0310e86a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0310e86a;
	} else {
		return inClassId==(int)0x0b76ed78;
	}
}

void CairoBlendModeManager_obj::setBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_bac8fa62cbacae74_31_setBlendMode)
HXLINE(  33)		if (hx::IsEq( this->currentBlendMode,blendMode )) {
HXLINE(  33)			return;
            		}
HXLINE(  35)		this->currentBlendMode = blendMode;
HXLINE(  37)		 ::Dynamic _hx_switch_0 = blendMode;
            		if (  (_hx_switch_0==(int)0) ){
HXLINE(  41)			this->renderSession->cairo->set_operator((int)12);
HXDLIN(  41)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)2) ){
HXLINE(  49)			this->renderSession->cairo->set_operator((int)17);
HXDLIN(  49)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)3) ){
HXLINE(  53)			this->renderSession->cairo->set_operator((int)23);
HXDLIN(  53)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)5) ){
HXLINE(  61)			this->renderSession->cairo->set_operator((int)21);
HXDLIN(  61)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)7) ){
HXLINE(  69)			this->renderSession->cairo->set_operator((int)2);
HXDLIN(  69)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)8) ){
HXLINE(  73)			this->renderSession->cairo->set_operator((int)18);
HXDLIN(  73)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)9) ){
HXLINE(  77)			this->renderSession->cairo->set_operator((int)14);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)11) ){
HXLINE(  81)			this->renderSession->cairo->set_operator((int)16);
HXDLIN(  81)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==(int)12) ){
HXLINE(  85)			this->renderSession->cairo->set_operator((int)15);
HXDLIN(  85)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  97)			this->renderSession->cairo->set_operator((int)2);
            		}
            		_hx_goto_1:;
            	}



hx::ObjectPtr< CairoBlendModeManager_obj > CairoBlendModeManager_obj::__new( ::openfl::_internal::renderer::RenderSession renderSession) {
	hx::ObjectPtr< CairoBlendModeManager_obj > __this = new CairoBlendModeManager_obj();
	__this->__construct(renderSession);
	return __this;
}

hx::ObjectPtr< CairoBlendModeManager_obj > CairoBlendModeManager_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::RenderSession renderSession) {
	CairoBlendModeManager_obj *__this = (CairoBlendModeManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoBlendModeManager_obj), true, "openfl._internal.renderer.cairo.CairoBlendModeManager"));
	*(void **)__this = CairoBlendModeManager_obj::_hx_vtable;
	__this->__construct(renderSession);
	return __this;
}

CairoBlendModeManager_obj::CairoBlendModeManager_obj()
{
}

void CairoBlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoBlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void CairoBlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

hx::Val CairoBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return hx::Val( setBlendMode_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return hx::Val( renderSession ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return hx::Val( currentBlendMode ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CairoBlendModeManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast<  ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoBlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CairoBlendModeManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CairoBlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(CairoBlendModeManager_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CairoBlendModeManager_obj_sStaticStorageInfo = 0;
#endif

static ::String CairoBlendModeManager_obj_sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void CairoBlendModeManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoBlendModeManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBlendModeManager_obj::__mClass;

void CairoBlendModeManager_obj::__register()
{
	hx::Object *dummy = new CairoBlendModeManager_obj;
	CairoBlendModeManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBlendModeManager","\x20","\xc1","\x90","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoBlendModeManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CairoBlendModeManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoBlendModeManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoBlendModeManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoBlendModeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoBlendModeManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
