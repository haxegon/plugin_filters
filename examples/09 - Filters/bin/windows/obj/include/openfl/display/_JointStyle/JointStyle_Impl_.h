// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_display__JointStyle_JointStyle_Impl_
#define INCLUDED_openfl_display__JointStyle_JointStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_JointStyle,JointStyle_Impl_)

namespace openfl{
namespace display{
namespace _JointStyle{


class HXCPP_CLASS_ATTRIBUTES JointStyle_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JointStyle_Impl__obj OBJ_;
		JointStyle_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7f13e873 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._JointStyle.JointStyle_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._JointStyle.JointStyle_Impl_"); }

		hx::ObjectPtr< JointStyle_Impl__obj > __new() {
			hx::ObjectPtr< JointStyle_Impl__obj > __this = new JointStyle_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< JointStyle_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			JointStyle_Impl__obj *__this = (JointStyle_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JointStyle_Impl__obj), false, "openfl.display._JointStyle.JointStyle_Impl_"));
			*(void **)__this = JointStyle_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JointStyle_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JointStyle_Impl_","\x87","\xe7","\x4f","\x3d"); }

		static void __boot();
		static  ::Dynamic BEVEL;
		static  ::Dynamic MITER;
		static  ::Dynamic ROUND;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _JointStyle

#endif /* INCLUDED_openfl_display__JointStyle_JointStyle_Impl_ */ 
