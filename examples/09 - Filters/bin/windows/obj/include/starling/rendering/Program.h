// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_rendering_Program
#define INCLUDED_starling_rendering_Program

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AGALMiniAssembler)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(starling,rendering,Program)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES Program_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Program_obj OBJ_;
		Program_obj();

	public:
		enum { _hx_ClassId = 0x0a15c4c4 };

		void __construct( ::openfl::utils::ByteArrayData vertexShader, ::openfl::utils::ByteArrayData fragmentShader);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.Program")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.Program"); }
		static hx::ObjectPtr< Program_obj > __new( ::openfl::utils::ByteArrayData vertexShader, ::openfl::utils::ByteArrayData fragmentShader);
		static hx::ObjectPtr< Program_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData vertexShader, ::openfl::utils::ByteArrayData fragmentShader);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Program_obj();

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
		::String __ToString() const { return HX_HCSTRING("Program","\x64","\x72","\x4a","\xc1"); }

		static void __boot();
		static  ::openfl::utils::AGALMiniAssembler sAssembler;
		static  ::starling::rendering::Program fromSource(::String vertexShader,::String fragmentShader,hx::Null< int >  agalVersion);
		static ::Dynamic fromSource_dyn();

		 ::openfl::utils::ByteArrayData _vertexShader;
		 ::openfl::utils::ByteArrayData _fragmentShader;
		 ::openfl::display3D::Program3D _program3D;
		void dispose();
		::Dynamic dispose_dyn();

		void activate( ::openfl::display3D::Context3D context);
		::Dynamic activate_dyn();

		void onContextCreated( ::openfl::events::Event event);
		::Dynamic onContextCreated_dyn();

		void disposeProgram();
		::Dynamic disposeProgram_dyn();

};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_Program */ 