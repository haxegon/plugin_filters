// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideMatrixView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideMatrixView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,OverrideMatrixView_Impl_)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES OverrideMatrixView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OverrideMatrixView_Impl__obj OBJ_;
		OverrideMatrixView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2e4b2cac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_"); }

		hx::ObjectPtr< OverrideMatrixView_Impl__obj > __new() {
			hx::ObjectPtr< OverrideMatrixView_Impl__obj > __this = new OverrideMatrixView_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< OverrideMatrixView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			OverrideMatrixView_Impl__obj *__this = (OverrideMatrixView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OverrideMatrixView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_"));
			*(void **)__this = OverrideMatrixView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OverrideMatrixView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OverrideMatrixView_Impl_","\xf2","\x10","\xa1","\x26"); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::geom::Matrix get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_matrix_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideMatrixView_Impl_ */ 