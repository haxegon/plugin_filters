// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_display_Shader
#define INCLUDED_openfl_display_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderData)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Int)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Shader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();

	public:
		enum { _hx_ClassId = 0x676ab1f7 };

		void __construct( ::openfl::utils::ByteArrayData code);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.Shader"); }
		static hx::ObjectPtr< Shader_obj > __new( ::openfl::utils::ByteArrayData code);
		static hx::ObjectPtr< Shader_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData code);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		 ::openfl::utils::ByteArrayData byteCode;
		 ::lime::graphics::opengl::GLObject glProgram;
		 ::Dynamic precisionHint;
		 ::lime::_backend::native::NativeGLRenderContext gl;
		 ::openfl::display::ShaderData _hx___data;
		::String _hx___glFragmentSource;
		bool _hx___glSourceDirty;
		::String _hx___glVertexSource;
		 ::haxe::ds::StringMap _hx___isUniform;
		::Array< ::Dynamic> _hx___inputBitmapData;
		int _hx___numPasses;
		::Array< ::Dynamic> _hx___paramBool;
		::Array< ::Dynamic> _hx___paramFloat;
		::Array< ::Dynamic> _hx___paramInt;
		 ::lime::utils::ArrayBufferView _hx___uniformMatrix2;
		 ::lime::utils::ArrayBufferView _hx___uniformMatrix3;
		 ::lime::utils::ArrayBufferView _hx___uniformMatrix4;
		void _hx___disable();
		::Dynamic _hx___disable_dyn();

		void _hx___disableGL();
		::Dynamic _hx___disableGL_dyn();

		void _hx___enable();
		::Dynamic _hx___enable_dyn();

		void _hx___enableGL();
		::Dynamic _hx___enableGL_dyn();

		void _hx___init();
		::Dynamic _hx___init_dyn();

		void _hx___initGL();
		::Dynamic _hx___initGL_dyn();

		void _hx___processGLData(::String source,::String storageType);
		::Dynamic _hx___processGLData_dyn();

		virtual void _hx___update();
		::Dynamic _hx___update_dyn();

		void _hx___updateGL();
		::Dynamic _hx___updateGL_dyn();

		 ::openfl::display::ShaderData get_data();
		::Dynamic get_data_dyn();

		 ::openfl::display::ShaderData set_data( ::openfl::display::ShaderData value);
		::Dynamic set_data_dyn();

		::String get_glFragmentSource();
		::Dynamic get_glFragmentSource_dyn();

		::String set_glFragmentSource(::String value);
		::Dynamic set_glFragmentSource_dyn();

		::String get_glVertexSource();
		::Dynamic get_glVertexSource_dyn();

		::String set_glVertexSource(::String value);
		::Dynamic set_glVertexSource_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Shader */ 
