// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_events_TouchMarker
#define INCLUDED_starling_events_TouchMarker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_Sprite
#include <starling/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(starling,display,Image)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,Quad)
HX_DECLARE_CLASS2(starling,display,Sprite)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,events,TouchMarker)
HX_DECLARE_CLASS2(starling,textures,Texture)

namespace starling{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TouchMarker_obj : public  ::starling::display::Sprite_obj
{
	public:
		typedef  ::starling::display::Sprite_obj super;
		typedef TouchMarker_obj OBJ_;
		TouchMarker_obj();

	public:
		enum { _hx_ClassId = 0x11572528 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.events.TouchMarker")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.events.TouchMarker"); }
		static hx::ObjectPtr< TouchMarker_obj > __new();
		static hx::ObjectPtr< TouchMarker_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchMarker_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TouchMarker","\xb9","\x72","\xd9","\x03"); }

		 ::openfl::geom::Point _hx___center;
		 ::starling::textures::Texture _hx___texture;
		void dispose();

		void moveMarker(Float x,Float y,hx::Null< bool >  withCenter);
		::Dynamic moveMarker_dyn();

		void moveCenter(Float x,Float y);
		::Dynamic moveCenter_dyn();

		 ::starling::textures::Texture createTexture();
		::Dynamic createTexture_dyn();

		 ::starling::display::Image get_realMarker();
		::Dynamic get_realMarker_dyn();

		 ::starling::display::Image get_mockMarker();
		::Dynamic get_mockMarker_dyn();

		Float get_realX();
		::Dynamic get_realX_dyn();

		Float get_realY();
		::Dynamic get_realY_dyn();

		Float get_mockX();
		::Dynamic get_mockX_dyn();

		Float get_mockY();
		::Dynamic get_mockY_dyn();

};

} // end namespace starling
} // end namespace events

#endif /* INCLUDED_starling_events_TouchMarker */ 