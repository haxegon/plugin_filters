// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxegon_HaxegonTileset
#define INCLUDED_haxegon_HaxegonTileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,HaxegonTileset)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Image)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,Quad)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES HaxegonTileset_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HaxegonTileset_obj OBJ_;
		HaxegonTileset_obj();

	public:
		enum { _hx_ClassId = 0x1fff5bf4 };

		void __construct(::String n,int w,int h);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxegon.HaxegonTileset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxegon.HaxegonTileset"); }
		static hx::ObjectPtr< HaxegonTileset_obj > __new(::String n,int w,int h);
		static hx::ObjectPtr< HaxegonTileset_obj > __alloc(hx::Ctx *_hx_ctx,::String n,int w,int h);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxegonTileset_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HaxegonTileset","\x54","\x28","\x5f","\x53"); }

		::Array< ::Dynamic> tiles;
		::String name;
		int width;
		int height;
		bool sharedatlas;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_HaxegonTileset */ 
