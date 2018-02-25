// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#define INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractMaskManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoMaskManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoMaskManager_obj : public  ::openfl::_internal::renderer::AbstractMaskManager_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractMaskManager_obj super;
		typedef CairoMaskManager_obj OBJ_;
		CairoMaskManager_obj();

	public:
		enum { _hx_ClassId = 0x0f6b40b2 };

		void __construct( ::openfl::_internal::renderer::RenderSession renderSession);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.cairo.CairoMaskManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.cairo.CairoMaskManager"); }
		static hx::ObjectPtr< CairoMaskManager_obj > __new( ::openfl::_internal::renderer::RenderSession renderSession);
		static hx::ObjectPtr< CairoMaskManager_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::RenderSession renderSession);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoMaskManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoMaskManager","\x59","\x2f","\x7a","\x2a"); }

		void pushMask( ::openfl::display::DisplayObject mask);

		void pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);

		void pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void popMask();

		void popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);

		void popRect();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager */ 
