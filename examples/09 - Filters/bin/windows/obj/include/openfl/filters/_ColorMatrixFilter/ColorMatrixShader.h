// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader
#define INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS3(openfl,filters,_ColorMatrixFilter,ColorMatrixShader)

namespace openfl{
namespace filters{
namespace _ColorMatrixFilter{


class HXCPP_CLASS_ATTRIBUTES ColorMatrixShader_obj : public  ::openfl::display::Shader_obj
{
	public:
		typedef  ::openfl::display::Shader_obj super;
		typedef ColorMatrixShader_obj OBJ_;
		ColorMatrixShader_obj();

	public:
		enum { _hx_ClassId = 0x2ef70f6d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._ColorMatrixFilter.ColorMatrixShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters._ColorMatrixFilter.ColorMatrixShader"); }
		static hx::ObjectPtr< ColorMatrixShader_obj > __new();
		static hx::ObjectPtr< ColorMatrixShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorMatrixShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ColorMatrixShader","\x29","\x96","\x47","\xe8"); }

		void init(::Array< Float > matrix);
		::Dynamic init_dyn();

};

} // end namespace openfl
} // end namespace filters
} // end namespace _ColorMatrixFilter

#endif /* INCLUDED_openfl_filters__ColorMatrixFilter_ColorMatrixShader */ 