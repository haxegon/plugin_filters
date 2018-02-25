// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#define INCLUDED_openfl__internal_renderer_DrawCommandBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandType)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES DrawCommandBuffer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DrawCommandBuffer_obj OBJ_;
		DrawCommandBuffer_obj();

	public:
		enum { _hx_ClassId = 0x5daef738 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.DrawCommandBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.DrawCommandBuffer"); }
		static hx::ObjectPtr< DrawCommandBuffer_obj > __new();
		static hx::ObjectPtr< DrawCommandBuffer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawCommandBuffer_obj();

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
		::String __ToString() const { return HX_HCSTRING("DrawCommandBuffer","\xe7","\xdd","\x9a","\xb4"); }

		static void __boot();
		static  ::openfl::_internal::renderer::DrawCommandBuffer empty;
		::Array< ::Dynamic> types;
		::Array< bool > b;
		bool copyOnWrite;
		::Array< Float > f;
		::Array< ::Dynamic> ff;
		::Array< int > i;
		::Array< ::Dynamic> ii;
		::cpp::VirtualArray o;
		 ::openfl::_internal::renderer::DrawCommandBuffer append( ::openfl::_internal::renderer::DrawCommandBuffer other);
		::Dynamic append_dyn();

		void beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		::Dynamic beginBitmapFill_dyn();

		void beginFill(int color,Float alpha);
		::Dynamic beginFill_dyn();

		void beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		::Dynamic beginGradientFill_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::openfl::_internal::renderer::DrawCommandBuffer copy();
		::Dynamic copy_dyn();

		void cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		::Dynamic cubicCurveTo_dyn();

		void curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		::Dynamic curveTo_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void drawCircle(Float x,Float y,Float radius);
		::Dynamic drawCircle_dyn();

		void drawEllipse(Float x,Float y,Float width,Float height);
		::Dynamic drawEllipse_dyn();

		void drawRect(Float x,Float y,Float width,Float height);
		::Dynamic drawRect_dyn();

		void drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight);
		::Dynamic drawRoundRect_dyn();

		void drawTriangles( ::openfl::_Vector::AbstractVector vertices, ::openfl::_Vector::AbstractVector indices, ::openfl::_Vector::AbstractVector uvtData, ::Dynamic culling);
		::Dynamic drawTriangles_dyn();

		void endFill();
		::Dynamic endFill_dyn();

		void lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		::Dynamic lineBitmapStyle_dyn();

		void lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		::Dynamic lineGradientStyle_dyn();

		void lineStyle( ::Dynamic thickness,int color,Float alpha,bool pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints,Float miterLimit);
		::Dynamic lineStyle_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void prepareWrite();
		::Dynamic prepareWrite_dyn();

		void overrideMatrix( ::openfl::geom::Matrix matrix);
		::Dynamic overrideMatrix_dyn();

		void windingEvenOdd();
		::Dynamic windingEvenOdd_dyn();

		void windingNonZero();
		::Dynamic windingNonZero_dyn();

		int get_length();
		::Dynamic get_length_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_DrawCommandBuffer */ 
