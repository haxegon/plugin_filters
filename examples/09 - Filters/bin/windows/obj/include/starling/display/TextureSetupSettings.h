// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_display_TextureSetupSettings
#define INCLUDED_starling_display_TextureSetupSettings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Image)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,Quad)
HX_DECLARE_CLASS2(starling,display,TextureSetupSettings)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)

namespace starling{
namespace display{


class HXCPP_CLASS_ATTRIBUTES TextureSetupSettings_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextureSetupSettings_obj OBJ_;
		TextureSetupSettings_obj();

	public:
		enum { _hx_ClassId = 0x1ba0d2f7 };

		void __construct( ::Dynamic onAssign, ::Dynamic onRelease);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.display.TextureSetupSettings")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.display.TextureSetupSettings"); }
		static hx::ObjectPtr< TextureSetupSettings_obj > __new( ::Dynamic onAssign, ::Dynamic onRelease);
		static hx::ObjectPtr< TextureSetupSettings_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic onAssign, ::Dynamic onRelease);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureSetupSettings_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextureSetupSettings","\xc5","\x72","\x41","\x3f"); }

		 ::Dynamic onAssign;
		Dynamic onAssign_dyn() { return onAssign;}
		 ::Dynamic onRelease;
		Dynamic onRelease_dyn() { return onRelease;}
};

} // end namespace starling
} // end namespace display

#endif /* INCLUDED_starling_display_TextureSetupSettings */ 
