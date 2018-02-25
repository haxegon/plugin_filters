// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_text_TrueTypeCompositor
#define INCLUDED_starling_text_TrueTypeCompositor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_text_ITextCompositor
#include <starling/text/ITextCompositor.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IShaderDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,MeshBatch)
HX_DECLARE_CLASS2(starling,display,Quad)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,text,BitmapDataEx)
HX_DECLARE_CLASS2(starling,text,ITextCompositor)
HX_DECLARE_CLASS2(starling,text,TextFormat)
HX_DECLARE_CLASS2(starling,text,TextOptions)
HX_DECLARE_CLASS2(starling,text,TrueTypeCompositor)

namespace starling{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TrueTypeCompositor_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TrueTypeCompositor_obj OBJ_;
		TrueTypeCompositor_obj();

	public:
		enum { _hx_ClassId = 0x1ea7104a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.text.TrueTypeCompositor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.text.TrueTypeCompositor"); }
		static hx::ObjectPtr< TrueTypeCompositor_obj > __new();
		static hx::ObjectPtr< TrueTypeCompositor_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TrueTypeCompositor_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TrueTypeCompositor","\xa9","\xae","\x7b","\xd2"); }

		static void __boot();
		static  ::openfl::geom::Matrix sHelperMatrix;
		static  ::starling::display::Quad sHelperQuad;
		static  ::openfl::text::TextField sNativeTextField;
		static  ::openfl::text::TextFormat sNativeFormat;
		void dispose();
		::Dynamic dispose_dyn();

		void fillMeshBatch( ::starling::display::MeshBatch meshBatch,Float width,Float height,::String text, ::starling::text::TextFormat format, ::starling::text::TextOptions options);
		::Dynamic fillMeshBatch_dyn();

		void clearMeshBatch( ::starling::display::MeshBatch meshBatch);
		::Dynamic clearMeshBatch_dyn();

		 ::starling::text::BitmapDataEx renderText(Float width,Float height,::String text, ::starling::text::TextFormat format, ::starling::text::TextOptions options);
		::Dynamic renderText_dyn();

		void autoScaleNativeTextField( ::openfl::text::TextField textField,::String text,bool isHtmlText);
		::Dynamic autoScaleNativeTextField_dyn();

};

} // end namespace starling
} // end namespace text

#endif /* INCLUDED_starling_text_TrueTypeCompositor */ 
