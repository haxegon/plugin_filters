// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_display_BlendMode
#define INCLUDED_starling_display_BlendMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(starling,display,BlendMode)

namespace starling{
namespace display{


class HXCPP_CLASS_ATTRIBUTES BlendMode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BlendMode_obj OBJ_;
		BlendMode_obj();

	public:
		enum { _hx_ClassId = 0x42ccf2c2 };

		void __construct(::String name, ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.display.BlendMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.display.BlendMode"); }
		static hx::ObjectPtr< BlendMode_obj > __new(::String name, ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		static hx::ObjectPtr< BlendMode_obj > __alloc(hx::Ctx *_hx_ctx,::String name, ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlendMode_obj();

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
		::String __ToString() const { return HX_HCSTRING("BlendMode","\x34","\xc4","\x0a","\xae"); }

		static void __boot();
		static  ::haxe::ds::StringMap sBlendModes;
		static ::String AUTO;
		static ::String NONE;
		static ::String NORMAL;
		static ::String ADD;
		static ::String MULTIPLY;
		static ::String SCREEN;
		static ::String ERASE;
		static ::String MASK;
		static ::String BELOW;
		static  ::starling::display::BlendMode get(::String modeName);
		static ::Dynamic get_dyn();

		static  ::starling::display::BlendMode getByFactors( ::Dynamic srcFactor, ::Dynamic dstFactor);
		static ::Dynamic getByFactors_dyn();

		static  ::starling::display::BlendMode _hx_register(::String name, ::Dynamic srcFactor, ::Dynamic dstFactor);
		static ::Dynamic _hx_register_dyn();

		static void registerDefaults();
		static ::Dynamic registerDefaults_dyn();

		::String _hx___name;
		 ::Dynamic _hx___sourceFactor;
		 ::Dynamic _hx___destinationFactor;
		void activate();
		::Dynamic activate_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::String get_sourceFactor();
		::Dynamic get_sourceFactor_dyn();

		::String get_destinationFactor();
		::Dynamic get_destinationFactor_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

};

} // end namespace starling
} // end namespace display

#endif /* INCLUDED_starling_display_BlendMode */ 
