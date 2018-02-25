// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxegon_Random
#define INCLUDED_haxegon_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Random)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES Random_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();

	public:
		enum { _hx_ClassId = 0x179729c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxegon.Random")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxegon.Random"); }

		hx::ObjectPtr< Random_obj > __new() {
			hx::ObjectPtr< Random_obj > __this = new Random_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Random_obj > __alloc(hx::Ctx *_hx_ctx) {
			Random_obj *__this = (Random_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Random_obj), false, "haxegon.Random"));
			*(void **)__this = Random_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Random","\x23","\x96","\x23","\xec"); }

		static void __boot();
		static bool _hx_bool();
		static ::Dynamic _hx_bool_dyn();

		static bool chance(Float n);
		static ::Dynamic chance_dyn();

		static int _hx_int(int from,int to);
		static ::Dynamic _hx_int_dyn();

		static Float _hx_float(Float from,Float to);
		static ::Dynamic _hx_float_dyn();

		static ::String string(int length,::String charactersToUse);
		static ::Dynamic string_dyn();

		static  ::Dynamic pick(::cpp::VirtualArray arr);
		static ::Dynamic pick_dyn();

		static Float random();
		static ::Dynamic random_dyn();

		static int _initialseed;
		static int _actualseed;
		static int get_seed();
		static ::Dynamic get_seed_dyn();

		static int set_seed(int s);
		static ::Dynamic set_seed_dyn();

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Random */ 
