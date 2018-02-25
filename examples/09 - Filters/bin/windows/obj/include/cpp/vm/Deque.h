// Generated by Haxe 3.4.4
#ifndef INCLUDED_cpp_vm_Deque
#define INCLUDED_cpp_vm_Deque

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5c7f2fd4a5245af5_28_new)
HX_DECLARE_CLASS2(cpp,vm,Deque)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Deque_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Deque_obj OBJ_;
		Deque_obj();

	public:
		enum { _hx_ClassId = 0x2334ef4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Deque")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cpp.vm.Deque"); }

		hx::ObjectPtr< Deque_obj > __new() {
			hx::ObjectPtr< Deque_obj > __this = new Deque_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Deque_obj > __alloc(hx::Ctx *_hx_ctx) {
			Deque_obj *__this = (Deque_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Deque_obj), true, "cpp.vm.Deque"));
			*(void **)__this = Deque_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5c7f2fd4a5245af5_28_new)
HXDLIN(  28)		( ( ::cpp::vm::Deque)(__this) )->q = ::__hxcpp_deque_create();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deque_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Deque","\x00","\x24","\x58","\x6a"); }

		 ::Dynamic q;
		void add( ::Dynamic i);
		::Dynamic add_dyn();

		 ::Dynamic pop(bool block);
		::Dynamic pop_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Deque */ 
