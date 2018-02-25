// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxegon_Sound
#define INCLUDED_haxegon_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(haxegon,HaxegonChannel)
HX_DECLARE_CLASS1(haxegon,HaxegonSound)
HX_DECLARE_CLASS1(haxegon,Sound)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES Sound_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sound_obj OBJ_;
		Sound_obj();

	public:
		enum { _hx_ClassId = 0x46aebd0f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxegon.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxegon.Sound"); }

		hx::ObjectPtr< Sound_obj > __new() {
			hx::ObjectPtr< Sound_obj > __this = new Sound_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Sound_obj > __alloc(hx::Ctx *_hx_ctx) {
			Sound_obj *__this = (Sound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sound_obj), false, "haxegon.Sound"));
			*(void **)__this = Sound_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		static void __boot();
		static bool load(::String soundname,hx::Null< Float >  defaultvolume);
		static ::Dynamic load_dyn();

		static void play(::String soundname,hx::Null< Float >  offsettime,hx::Null< Float >  fadeintime,hx::Null< bool >  loop,hx::Null< Float >  panning);
		static ::Dynamic play_dyn();

		static void stop(::String soundname,hx::Null< Float >  fadeout);
		static ::Dynamic stop_dyn();

		static ::String typingsound;
		static Float _mastervolume;
		static Float get_mastervolume();
		static ::Dynamic get_mastervolume_dyn();

		static Float set_mastervolume(Float vol);
		static ::Dynamic set_mastervolume_dyn();

		static Float length(::String soundname);
		static ::Dynamic length_dyn();

		static void init();
		static ::Dynamic init_dyn();

		static void update();
		static ::Dynamic update_dyn();

		static bool isplaying(::String soundname);
		static ::Dynamic isplaying_dyn();

		static ::Array< ::Dynamic> soundfile;
		static ::Array< ::Dynamic> channel;
		static  ::haxe::ds::StringMap soundindex;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Sound */ 
