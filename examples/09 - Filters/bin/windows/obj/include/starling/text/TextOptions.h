// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_text_TextOptions
#define INCLUDED_starling_text_TextOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,text,TextOptions)

namespace starling{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextOptions_obj : public  ::starling::events::EventDispatcher_obj
{
	public:
		typedef  ::starling::events::EventDispatcher_obj super;
		typedef TextOptions_obj OBJ_;
		TextOptions_obj();

	public:
		enum { _hx_ClassId = 0x629c9bfc };

		void __construct(hx::Null< bool >  __o_wordWrap,hx::Null< bool >  __o_autoScale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.text.TextOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.text.TextOptions"); }
		static hx::ObjectPtr< TextOptions_obj > __new(hx::Null< bool >  __o_wordWrap,hx::Null< bool >  __o_autoScale);
		static hx::ObjectPtr< TextOptions_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_wordWrap,hx::Null< bool >  __o_autoScale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextOptions_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextOptions","\x11","\xc6","\xb0","\x9f"); }

		bool _hx___wordWrap;
		bool _hx___autoScale;
		::String _hx___autoSize;
		bool _hx___isHtmlText;
		Float _hx___textureScale;
		::String _hx___textureFormat;
		Float _hx___padding;
		void copyFrom( ::starling::text::TextOptions options);
		::Dynamic copyFrom_dyn();

		 ::starling::text::TextOptions clone();
		::Dynamic clone_dyn();

		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		::String get_autoSize();
		::Dynamic get_autoSize_dyn();

		::String set_autoSize(::String value);
		::Dynamic set_autoSize_dyn();

		bool get_autoScale();
		::Dynamic get_autoScale_dyn();

		bool set_autoScale(bool value);
		::Dynamic set_autoScale_dyn();

		bool get_isHtmlText();
		::Dynamic get_isHtmlText_dyn();

		bool set_isHtmlText(bool value);
		::Dynamic set_isHtmlText_dyn();

		Float get_textureScale();
		::Dynamic get_textureScale_dyn();

		Float set_textureScale(Float value);
		::Dynamic set_textureScale_dyn();

		::String get_textureFormat();
		::Dynamic get_textureFormat_dyn();

		::String set_textureFormat(::String value);
		::Dynamic set_textureFormat_dyn();

		Float get_padding();
		::Dynamic get_padding_dyn();

		Float set_padding(Float value);
		::Dynamic set_padding_dyn();

};

} // end namespace starling
} // end namespace text

#endif /* INCLUDED_starling_text_TextOptions */ 
