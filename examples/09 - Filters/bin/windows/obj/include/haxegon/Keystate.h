// Generated by Haxe 3.4.4
#ifndef INCLUDED_haxegon_Keystate
#define INCLUDED_haxegon_Keystate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Keystate)
namespace haxegon{


class Keystate_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Keystate_obj OBJ_;

	public:
		Keystate_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxegon.Keystate","\x80","\x39","\xe8","\x0f"); }
		::String __ToString() const { return HX_HCSTRING("Keystate.","\xbc","\xc3","\x41","\x0b") + _hx_tag; }

		static ::haxegon::Keystate forcerelease;
		static inline ::haxegon::Keystate forcerelease_dyn() { return forcerelease; }
		static ::haxegon::Keystate justpressed;
		static inline ::haxegon::Keystate justpressed_dyn() { return justpressed; }
		static ::haxegon::Keystate justreleased;
		static inline ::haxegon::Keystate justreleased_dyn() { return justreleased; }
		static ::haxegon::Keystate notpressed;
		static inline ::haxegon::Keystate notpressed_dyn() { return notpressed; }
		static ::haxegon::Keystate pressed;
		static inline ::haxegon::Keystate pressed_dyn() { return pressed; }
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Keystate */ 