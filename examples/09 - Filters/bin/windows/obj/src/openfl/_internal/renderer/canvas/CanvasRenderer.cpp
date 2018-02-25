// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasBlendModeManager
#include <openfl/_internal/renderer/canvas/CanvasBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_51aed30dab802763_25_new,"openfl._internal.renderer.canvas.CanvasRenderer","new",0x66327fe8,"openfl._internal.renderer.canvas.CanvasRenderer.new","openfl/_internal/renderer/canvas/CanvasRenderer.hx",25,0x1be544e6)
HX_LOCAL_STACK_FRAME(_hx_pos_51aed30dab802763_55_clear,"openfl._internal.renderer.canvas.CanvasRenderer","clear",0xe6eb1315,"openfl._internal.renderer.canvas.CanvasRenderer.clear","openfl/_internal/renderer/canvas/CanvasRenderer.hx",55,0x1be544e6)
HX_LOCAL_STACK_FRAME(_hx_pos_51aed30dab802763_76_render,"openfl._internal.renderer.canvas.CanvasRenderer","render",0x244720ce,"openfl._internal.renderer.canvas.CanvasRenderer.render","openfl/_internal/renderer/canvas/CanvasRenderer.hx",76,0x1be544e6)
HX_LOCAL_STACK_FRAME(_hx_pos_51aed30dab802763_87_renderStage3D,"openfl._internal.renderer.canvas.CanvasRenderer","renderStage3D",0x52901fc1,"openfl._internal.renderer.canvas.CanvasRenderer.renderStage3D","openfl/_internal/renderer/canvas/CanvasRenderer.hx",87,0x1be544e6)
HX_LOCAL_STACK_FRAME(_hx_pos_51aed30dab802763_20_boot,"openfl._internal.renderer.canvas.CanvasRenderer","boot",0xfe166baa,"openfl._internal.renderer.canvas.CanvasRenderer.boot","openfl/_internal/renderer/canvas/CanvasRenderer.hx",20,0x1be544e6)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::graphics::CanvasRenderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_51aed30dab802763_25_new)
HXLINE(  27)		super::__construct(stage);
HXLINE(  29)		this->context = context;
HXLINE(  31)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__alloc( HX_CTX );
HXLINE(  32)		this->renderSession->clearRenderDirty = true;
HXLINE(  33)		this->renderSession->context = context;
HXLINE(  35)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE(  36)		this->renderSession->renderType = ::lime::graphics::RendererType_obj::CANVAS_dyn();
HXLINE(  38)		this->renderSession->blendModeManager =  ::openfl::_internal::renderer::canvas::CanvasBlendModeManager_obj::__alloc( HX_CTX ,this->renderSession);
HXLINE(  39)		this->renderSession->maskManager =  ::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__alloc( HX_CTX ,this->renderSession);
            	}

Dynamic CanvasRenderer_obj::__CreateEmpty() { return new CanvasRenderer_obj; }

void *CanvasRenderer_obj::_hx_vtable = 0;

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasRenderer_obj > _hx_result = new CanvasRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CanvasRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x58060c34) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x58060c34;
	} else {
		return inClassId==(int)0x5d8f073a;
	}
}

void CanvasRenderer_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_51aed30dab802763_55_clear)
HXLINE(  57)		this->renderSession->blendModeManager->setBlendMode((int)10);
HXLINE(  59)		this->context->setTransform((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
HXLINE(  60)		this->context->globalAlpha = (int)1;
HXLINE(  62)		bool _hx_tmp;
HXDLIN(  62)		if (!(this->stage->_hx___transparent)) {
HXLINE(  62)			_hx_tmp = this->stage->_hx___clearBeforeRender;
            		}
            		else {
HXLINE(  62)			_hx_tmp = false;
            		}
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  64)			this->context->fillStyle = this->stage->_hx___colorString;
HXLINE(  65)			 ::lime::graphics::CanvasRenderContext _hx_tmp1 = this->context;
HXDLIN(  65)			Float _hx_tmp2 = (this->stage->stageWidth * this->stage->window->_hx___scale);
HXDLIN(  65)			_hx_tmp1->fillRect((int)0,(int)0,_hx_tmp2,(this->stage->stageHeight * this->stage->window->_hx___scale));
            		}
            		else {
HXLINE(  67)			bool _hx_tmp3;
HXDLIN(  67)			if (this->stage->_hx___transparent) {
HXLINE(  67)				_hx_tmp3 = this->stage->_hx___clearBeforeRender;
            			}
            			else {
HXLINE(  67)				_hx_tmp3 = false;
            			}
HXDLIN(  67)			if (_hx_tmp3) {
HXLINE(  69)				 ::lime::graphics::CanvasRenderContext _hx_tmp4 = this->context;
HXDLIN(  69)				Float _hx_tmp5 = (this->stage->stageWidth * this->stage->window->_hx___scale);
HXDLIN(  69)				_hx_tmp4->clearRect((int)0,(int)0,_hx_tmp5,(this->stage->stageHeight * this->stage->window->_hx___scale));
            			}
            		}
            	}


void CanvasRenderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_51aed30dab802763_76_render)
HXLINE(  78)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE(  80)		this->stage->_hx___renderCanvas(this->renderSession);
            	}


void CanvasRenderer_obj::renderStage3D(){
            	HX_STACKFRAME(&_hx_pos_51aed30dab802763_87_renderStage3D)
HXDLIN(  87)		int _g = (int)0;
HXDLIN(  87)		 ::openfl::_Vector::AbstractVector _g1 = this->stage->stage3Ds;
HXDLIN(  87)		while((_g < ::openfl::_Vector::IVector_obj::get_length(_g1->data))){
HXDLIN(  87)			 ::openfl::display::Stage3D stage3D = ( ( ::openfl::display::Stage3D)(::openfl::_Vector::IVector_obj::get(_g1->data,_g)) );
HXDLIN(  87)			_g = (_g + (int)1);
HXLINE(  89)			stage3D->_hx___renderCanvas(this->stage,this->renderSession);
            		}
            	}


Float CanvasRenderer_obj::scale;


hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::graphics::CanvasRenderContext context) {
	hx::ObjectPtr< CanvasRenderer_obj > __this = new CanvasRenderer_obj();
	__this->__construct(stage,context);
	return __this;
}

hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::graphics::CanvasRenderContext context) {
	CanvasRenderer_obj *__this = (CanvasRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CanvasRenderer_obj), true, "openfl._internal.renderer.canvas.CanvasRenderer"));
	*(void **)__this = CanvasRenderer_obj::_hx_vtable;
	__this->__construct(stage,context);
	return __this;
}

CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CanvasRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return hx::Val( renderStage3D_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CanvasRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = ( scale ); return true; }
	}
	return false;
}

hx::Val CanvasRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::CanvasRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CanvasRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CanvasRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo CanvasRenderer_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CanvasRenderer_obj::scale,HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String CanvasRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	::String(null()) };

static void CanvasRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::scale,"scale");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::scale,"scale");
};

#endif

hx::Class CanvasRenderer_obj::__mClass;

static ::String CanvasRenderer_obj_sStaticFields[] = {
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	::String(null())
};

void CanvasRenderer_obj::__register()
{
	hx::Object *dummy = new CanvasRenderer_obj;
	CanvasRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasRenderer","\xf6","\xab","\xb2","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &CanvasRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = CanvasRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CanvasRenderer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CanvasRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_51aed30dab802763_20_boot)
HXDLIN(  20)		scale = ((Float)1);
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
