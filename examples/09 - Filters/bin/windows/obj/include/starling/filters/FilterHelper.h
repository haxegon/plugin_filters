// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_filters_FilterHelper
#define INCLUDED_starling_filters_FilterHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_filters_IFilterHelper
#include <starling/filters/IFilterHelper.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,filters,FilterHelper)
HX_DECLARE_CLASS2(starling,filters,IFilterHelper)
HX_DECLARE_CLASS2(starling,textures,Texture)

namespace starling{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES FilterHelper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FilterHelper_obj OBJ_;
		FilterHelper_obj();

	public:
		enum { _hx_ClassId = 0x7ffec955 };

		void __construct(::String __o_textureFormat);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.filters.FilterHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.filters.FilterHelper"); }
		static hx::ObjectPtr< FilterHelper_obj > __new(::String __o_textureFormat);
		static hx::ObjectPtr< FilterHelper_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_textureFormat);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterHelper_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FilterHelper","\x66","\xf7","\xb8","\xd8"); }

		Float _width;
		Float _height;
		int _nativeWidth;
		int _nativeHeight;
		 ::openfl::_Vector::AbstractVector _pool;
		bool _usePotTextures;
		::String _textureFormat;
		Float _preferredScale;
		Float _scale;
		int _sizeStep;
		int _numPasses;
		 ::openfl::geom::Matrix3D _projectionMatrix;
		 ::starling::textures::Texture _renderTarget;
		 ::openfl::geom::Rectangle _targetBounds;
		 ::starling::display::DisplayObject _target;
		 ::openfl::geom::Rectangle _clipRect;
		 ::openfl::geom::Rectangle sRegion;
		void dispose();
		::Dynamic dispose_dyn();

		void start(int numPasses,bool drawLastPassToBackBuffer);
		::Dynamic start_dyn();

		 ::starling::textures::Texture getTexture(hx::Null< Float >  resolution);
		::Dynamic getTexture_dyn();

		void putTexture( ::starling::textures::Texture texture);
		::Dynamic putTexture_dyn();

		void purge();
		::Dynamic purge_dyn();

		void setSize(Float width,Float height);
		::Dynamic setSize_dyn();

		int getNativeSize(Float size,Float textureScale);
		::Dynamic getNativeSize_dyn();

		 ::openfl::geom::Matrix3D get_projectionMatrix3D();
		::Dynamic get_projectionMatrix3D_dyn();

		 ::openfl::geom::Matrix3D set_projectionMatrix3D( ::openfl::geom::Matrix3D value);
		::Dynamic set_projectionMatrix3D_dyn();

		 ::starling::textures::Texture get_renderTarget();
		::Dynamic get_renderTarget_dyn();

		 ::starling::textures::Texture set_renderTarget( ::starling::textures::Texture value);
		::Dynamic set_renderTarget_dyn();

		 ::openfl::geom::Rectangle get_clipRect();
		::Dynamic get_clipRect_dyn();

		 ::openfl::geom::Rectangle set_clipRect( ::openfl::geom::Rectangle value);
		::Dynamic set_clipRect_dyn();

		 ::openfl::geom::Rectangle get_targetBounds();
		::Dynamic get_targetBounds_dyn();

		 ::openfl::geom::Rectangle set_targetBounds( ::openfl::geom::Rectangle value);
		::Dynamic set_targetBounds_dyn();

		 ::starling::display::DisplayObject get_target();
		::Dynamic get_target_dyn();

		 ::starling::display::DisplayObject set_target( ::starling::display::DisplayObject value);
		::Dynamic set_target_dyn();

		Float get_textureScale();
		::Dynamic get_textureScale_dyn();

		Float set_textureScale(Float value);
		::Dynamic set_textureScale_dyn();

		::String get_textureFormat();
		::Dynamic get_textureFormat_dyn();

		::String set_textureFormat(::String value);
		::Dynamic set_textureFormat_dyn();

};

} // end namespace starling
} // end namespace filters

#endif /* INCLUDED_starling_filters_FilterHelper */ 
