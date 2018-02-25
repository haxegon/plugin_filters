// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_geom_ImmutablePolygon
#define INCLUDED_starling_geom_ImmutablePolygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_geom_Polygon
#include <starling/geom/Polygon.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(starling,geom,ImmutablePolygon)
HX_DECLARE_CLASS2(starling,geom,Polygon)

namespace starling{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ImmutablePolygon_obj : public  ::starling::geom::Polygon_obj
{
	public:
		typedef  ::starling::geom::Polygon_obj super;
		typedef ImmutablePolygon_obj OBJ_;
		ImmutablePolygon_obj();

	public:
		enum { _hx_ClassId = 0x38db027c };

		void __construct(::cpp::VirtualArray vertices);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.geom.ImmutablePolygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.geom.ImmutablePolygon"); }
		static hx::ObjectPtr< ImmutablePolygon_obj > __new(::cpp::VirtualArray vertices);
		static hx::ObjectPtr< ImmutablePolygon_obj > __alloc(hx::Ctx *_hx_ctx,::cpp::VirtualArray vertices);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImmutablePolygon_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImmutablePolygon","\x78","\x4a","\xcc","\xaa"); }

		bool _hx___frozen;
		void addVertices(::cpp::VirtualArray args);

		void setVertex(int index,Float x,Float y);

		void reverse();

		int set_numVertices(int value);

		 ::openfl::errors::Error getImmutableError();
		::Dynamic getImmutableError_dyn();

};

} // end namespace starling
} // end namespace geom

#endif /* INCLUDED_starling_geom_ImmutablePolygon */ 