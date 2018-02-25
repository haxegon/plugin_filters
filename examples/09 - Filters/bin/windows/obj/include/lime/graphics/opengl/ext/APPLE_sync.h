// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_sync
#define INCLUDED_lime_graphics_opengl_ext_APPLE_sync

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7969c112b28ce208_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_sync)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_sync_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef APPLE_sync_obj OBJ_;
		APPLE_sync_obj();

	public:
		enum { _hx_ClassId = 0x14801e46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_sync")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_sync"); }

		hx::ObjectPtr< APPLE_sync_obj > __new() {
			hx::ObjectPtr< APPLE_sync_obj > __this = new APPLE_sync_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< APPLE_sync_obj > __alloc(hx::Ctx *_hx_ctx) {
			APPLE_sync_obj *__this = (APPLE_sync_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_sync_obj), false, "lime.graphics.opengl.ext.APPLE_sync"));
			*(void **)__this = APPLE_sync_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7969c112b28ce208_6_new)
HXLINE(  24)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->TIMEOUT_IGNORED_APPLE = (int)-1;
HXLINE(  23)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_FLUSH_COMMANDS_BIT_APPLE = (int)1;
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->WAIT_FAILED_APPLE = (int)37149;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->CONDITION_SATISFIED_APPLE = (int)37148;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->TIMEOUT_EXPIRED_APPLE = (int)37147;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->ALREADY_SIGNALED_APPLE = (int)37146;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SIGNALED_APPLE = (int)37145;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->UNSIGNALED_APPLE = (int)37144;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_GPU_COMMANDS_COMPLETE_APPLE = (int)37143;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_FENCE_APPLE = (int)37142;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_FLAGS_APPLE = (int)37141;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_STATUS_APPLE = (int)37140;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_CONDITION_APPLE = (int)37139;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->OBJECT_TYPE_APPLE = (int)37138;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->MAX_SERVER_WAIT_TIMEOUT_APPLE = (int)37137;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::APPLE_sync)(__this) )->SYNC_OBJECT_APPLE = (int)35411;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_sync_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("APPLE_sync","\xc0","\xe6","\x8c","\x8c"); }

		int SYNC_OBJECT_APPLE;
		int MAX_SERVER_WAIT_TIMEOUT_APPLE;
		int OBJECT_TYPE_APPLE;
		int SYNC_CONDITION_APPLE;
		int SYNC_STATUS_APPLE;
		int SYNC_FLAGS_APPLE;
		int SYNC_FENCE_APPLE;
		int SYNC_GPU_COMMANDS_COMPLETE_APPLE;
		int UNSIGNALED_APPLE;
		int SIGNALED_APPLE;
		int ALREADY_SIGNALED_APPLE;
		int TIMEOUT_EXPIRED_APPLE;
		int CONDITION_SATISFIED_APPLE;
		int WAIT_FAILED_APPLE;
		int SYNC_FLUSH_COMMANDS_BIT_APPLE;
		int TIMEOUT_IGNORED_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_sync */ 
