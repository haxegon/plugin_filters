// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3b7a66bddb205621_845_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,GamepadEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES GamepadEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GamepadEventInfo_obj OBJ_;
		GamepadEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x673c6942 };

		void __construct( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.GamepadEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.GamepadEventInfo"); }

		hx::ObjectPtr< GamepadEventInfo_obj > __new( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value) {
			hx::ObjectPtr< GamepadEventInfo_obj > __this = new GamepadEventInfo_obj();
			__this->__construct(type,__o_id,__o_button,__o_axis,__o_value);
			return __this;
		}

		static hx::ObjectPtr< GamepadEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value) {
			GamepadEventInfo_obj *__this = (GamepadEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GamepadEventInfo_obj), false, "lime._backend.native._NativeApplication.GamepadEventInfo"));
			*(void **)__this = GamepadEventInfo_obj::_hx_vtable;
{
int id = __o_id.Default(0);
int button = __o_button.Default(0);
int axis = __o_axis.Default(0);
Float value = __o_value.Default(0);
            	HX_STACKFRAME(&_hx_pos_3b7a66bddb205621_845_new)
HXLINE( 847)		( ( ::lime::_backend::native::_NativeApplication::GamepadEventInfo)(__this) )->type = type;
HXLINE( 848)		( ( ::lime::_backend::native::_NativeApplication::GamepadEventInfo)(__this) )->id = id;
HXLINE( 849)		( ( ::lime::_backend::native::_NativeApplication::GamepadEventInfo)(__this) )->button = button;
HXLINE( 850)		( ( ::lime::_backend::native::_NativeApplication::GamepadEventInfo)(__this) )->axis = axis;
HXLINE( 851)		( ( ::lime::_backend::native::_NativeApplication::GamepadEventInfo)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GamepadEventInfo","\xe7","\x80","\x29","\x66"); }

		int axis;
		int button;
		int id;
		int type;
		Float value;
		 ::lime::_backend::native::_NativeApplication::GamepadEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo */ 