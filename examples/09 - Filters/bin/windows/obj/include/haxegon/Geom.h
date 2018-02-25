// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxegon_Geom
#define INCLUDED_haxegon_Geom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Geom)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES Geom_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Geom_obj OBJ_;
		Geom_obj();

	public:
		enum { _hx_ClassId = 0x0396daec };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxegon.Geom")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxegon.Geom"); }

		hx::ObjectPtr< Geom_obj > __new() {
			hx::ObjectPtr< Geom_obj > __this = new Geom_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Geom_obj > __alloc(hx::Ctx *_hx_ctx) {
			Geom_obj *__this = (Geom_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Geom_obj), false, "haxegon.Geom"));
			*(void **)__this = Geom_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Geom_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Geom","\xdc","\x2a","\x3b","\x2f"); }

		static void __boot();
		static bool inbox(Float x,Float y,Float rectx,Float recty,Float rectw,Float recth);
		static ::Dynamic inbox_dyn();

		static Float clamp(Float value,Float min,Float max);
		static ::Dynamic clamp_dyn();

		static bool overlap(Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2);
		static ::Dynamic overlap_dyn();

		static Float distance(Float x1,Float y1,Float x2,Float y2);
		static ::Dynamic distance_dyn();

		static Float getangle(Float x1,Float y1,Float x2,Float y2);
		static ::Dynamic getangle_dyn();

		static Float todegrees(Float rad);
		static ::Dynamic todegrees_dyn();

		static Float toradians(Float degrees);
		static ::Dynamic toradians_dyn();

		static Float anglebetween(Float angle1,Float angle2);
		static ::Dynamic anglebetween_dyn();

		static  ::openfl::geom::Rectangle rect1;
		static  ::openfl::geom::Rectangle rect2;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Geom */ 