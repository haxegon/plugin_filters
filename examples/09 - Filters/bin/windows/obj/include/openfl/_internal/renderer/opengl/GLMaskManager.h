// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#define INCLUDED_openfl__internal_renderer_opengl_GLMaskManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractMaskManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLMaskManager)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLMaskShader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLMaskManager_obj : public  ::openfl::_internal::renderer::AbstractMaskManager_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractMaskManager_obj super;
		typedef GLMaskManager_obj OBJ_;
		GLMaskManager_obj();

	public:
		enum { _hx_ClassId = 0x421e3c3e };

		void __construct( ::openfl::_internal::renderer::RenderSession renderSession);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.GLMaskManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.opengl.GLMaskManager"); }
		static hx::ObjectPtr< GLMaskManager_obj > __new( ::openfl::_internal::renderer::RenderSession renderSession);
		static hx::ObjectPtr< GLMaskManager_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::RenderSession renderSession);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLMaskManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLMaskManager","\xbc","\xa0","\xef","\x07"); }

		static void __boot();
		static  ::openfl::_internal::renderer::opengl::GLMaskShader maskShader;
		::Array< ::Dynamic> clipRects;
		 ::lime::_backend::native::NativeGLRenderContext gl;
		::Array< ::Dynamic> maskObjects;
		int numClipRects;
		int stencilReference;
		 ::openfl::geom::Rectangle tempRect;
		void pushMask( ::openfl::display::DisplayObject mask);

		void pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);

		void pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void popMask();

		void popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  handleScrollRect);

		void popRect();

		void scissorRect( ::openfl::geom::Rectangle rect);
		::Dynamic scissorRect_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLMaskManager */ 