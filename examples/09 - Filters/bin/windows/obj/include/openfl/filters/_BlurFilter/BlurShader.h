// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#define INCLUDED_openfl_filters__BlurFilter_BlurShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS3(openfl,filters,_BlurFilter,BlurShader)

namespace openfl{
namespace filters{
namespace _BlurFilter{


class HXCPP_CLASS_ATTRIBUTES BlurShader_obj : public  ::openfl::display::Shader_obj
{
	public:
		typedef  ::openfl::display::Shader_obj super;
		typedef BlurShader_obj OBJ_;
		BlurShader_obj();

	public:
		enum { _hx_ClassId = 0x2c7c9dab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._BlurFilter.BlurShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters._BlurFilter.BlurShader"); }
		static hx::ObjectPtr< BlurShader_obj > __new();
		static hx::ObjectPtr< BlurShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlurShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BlurShader","\x4c","\x71","\x5d","\x8b"); }

		void _hx___update();

};

} // end namespace openfl
} // end namespace filters
} // end namespace _BlurFilter

#endif /* INCLUDED_openfl_filters__BlurFilter_BlurShader */ 