// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_text_MiniBitmapFont
#define INCLUDED_starling_text_MiniBitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(starling,text,MiniBitmapFont)
HX_DECLARE_CLASS2(starling,textures,Texture)

namespace starling{
namespace text{


class HXCPP_CLASS_ATTRIBUTES MiniBitmapFont_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MiniBitmapFont_obj OBJ_;
		MiniBitmapFont_obj();

	public:
		enum { _hx_ClassId = 0x791bd5ea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="starling.text.MiniBitmapFont")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"starling.text.MiniBitmapFont"); }

		hx::ObjectPtr< MiniBitmapFont_obj > __new() {
			hx::ObjectPtr< MiniBitmapFont_obj > __this = new MiniBitmapFont_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MiniBitmapFont_obj > __alloc(hx::Ctx *_hx_ctx) {
			MiniBitmapFont_obj *__this = (MiniBitmapFont_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MiniBitmapFont_obj), false, "starling.text.MiniBitmapFont"));
			*(void **)__this = MiniBitmapFont_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MiniBitmapFont_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MiniBitmapFont","\xf5","\x66","\x5f","\x71"); }

		static void __boot();
		static int BITMAP_WIDTH;
		static int BITMAP_HEIGHT;
		static ::Array< int > BITMAP_DATA;
		static  ::Xml XML_DATA;
		static  ::starling::textures::Texture get_texture();
		static ::Dynamic get_texture_dyn();

		static  ::openfl::display::BitmapData getBitmapData();
		static ::Dynamic getBitmapData_dyn();

		static  ::Xml get_xml();
		static ::Dynamic get_xml_dyn();

};

} // end namespace starling
} // end namespace text

#endif /* INCLUDED_starling_text_MiniBitmapFont */ 
