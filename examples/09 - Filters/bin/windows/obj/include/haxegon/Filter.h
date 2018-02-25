// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxegon_Filter
#define INCLUDED_haxegon_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Filter)
HX_DECLARE_CLASS2(haxegon,filters,Bloomfilter)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,filters,FragmentFilter)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES Filter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Filter_obj OBJ_;
		Filter_obj();

	public:
		enum { _hx_ClassId = 0x51ad57cc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxegon.Filter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxegon.Filter"); }

		hx::ObjectPtr< Filter_obj > __new() {
			hx::ObjectPtr< Filter_obj > __this = new Filter_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Filter_obj > __alloc(hx::Ctx *_hx_ctx) {
			Filter_obj *__this = (Filter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Filter_obj), false, "haxegon.Filter"));
			*(void **)__this = Filter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Filter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Filter","\xd8","\x93","\xc9","\xb9"); }

		static void reset();
		static ::Dynamic reset_dyn();

		static Float _blur;
		static Float get_blur();
		static ::Dynamic get_blur_dyn();

		static Float set_blur(Float _b);
		static ::Dynamic set_blur_dyn();

		static Float _bloom;
		static  ::haxegon::filters::Bloomfilter bloomfilter;
		static Float get_bloom();
		static ::Dynamic get_bloom_dyn();

		static Float set_bloom(Float _b);
		static ::Dynamic set_bloom_dyn();

		static void init();
		static ::Dynamic init_dyn();

		static void updatefilters();
		static ::Dynamic updatefilters_dyn();

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Filter */ 