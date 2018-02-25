// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_26_new,"openfl.ui.GameInput","new",0x178f028e,"openfl.ui.GameInput.new","openfl/ui/GameInput.hx",26,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_35_addEventListener,"openfl.ui.GameInput","addEventListener",0x86b694df,"openfl.ui.GameInput.addEventListener","openfl/ui/GameInput.hx",35,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_52_getDeviceAt,"openfl.ui.GameInput","getDeviceAt",0x22aaba0d,"openfl.ui.GameInput.getDeviceAt","openfl/ui/GameInput.hx",52,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_65___getDevice,"openfl.ui.GameInput","__getDevice",0x7418beda,"openfl.ui.GameInput.__getDevice","openfl/ui/GameInput.hx",65,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_83___onGamepadAxisMove,"openfl.ui.GameInput","__onGamepadAxisMove",0x7bd40ec2,"openfl.ui.GameInput.__onGamepadAxisMove","openfl/ui/GameInput.hx",83,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_107___onGamepadButtonDown,"openfl.ui.GameInput","__onGamepadButtonDown",0xedf461e4,"openfl.ui.GameInput.__onGamepadButtonDown","openfl/ui/GameInput.hx",107,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_131___onGamepadButtonUp,"openfl.ui.GameInput","__onGamepadButtonUp",0x48120b5d,"openfl.ui.GameInput.__onGamepadButtonUp","openfl/ui/GameInput.hx",131,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_155___onGamepadConnect,"openfl.ui.GameInput","__onGamepadConnect",0xce3c5b7a,"openfl.ui.GameInput.__onGamepadConnect","openfl/ui/GameInput.hx",155,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_169___onGamepadDisconnect,"openfl.ui.GameInput","__onGamepadDisconnect",0xaad45ecc,"openfl.ui.GameInput.__onGamepadDisconnect","openfl/ui/GameInput.hx",169,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_18_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",18,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_19_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",19,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_21_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",21,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_22_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",22,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_23_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",23,0x96cdaf42)
namespace openfl{
namespace ui{

void GameInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_26_new)
HXLINE(  28)		super::__construct(null());
HXLINE(  30)		::openfl::ui::GameInput_obj::_hx___instances->push(hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic GameInput_obj::__CreateEmpty() { return new GameInput_obj; }

void *GameInput_obj::_hx_vtable = 0;

Dynamic GameInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameInput_obj > _hx_result = new GameInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
	} else {
		return inClassId==(int)0x7cfd8db4;
	}
}

void GameInput_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_35_addEventListener)
HXLINE(  37)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE(  39)		if ((type == HX_("deviceAdded",4a,08,84,0b))) {
HXLINE(  41)			int _g = (int)0;
HXDLIN(  41)			::Array< ::Dynamic> _g1 = ::openfl::ui::GameInput_obj::_hx___deviceList;
HXDLIN(  41)			while((_g < _g1->length)){
HXLINE(  41)				 ::openfl::ui::GameInputDevice device = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInputDevice >();
HXDLIN(  41)				_g = (_g + (int)1);
HXLINE(  43)				this->dispatchEvent( ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,HX_("deviceAdded",4a,08,84,0b),null(),null(),device));
            			}
            		}
            	}


bool GameInput_obj::isSupported;

int GameInput_obj::numDevices;

::Array< ::Dynamic> GameInput_obj::_hx___deviceList;

 ::haxe::ds::ObjectMap GameInput_obj::_hx___devices;

::Array< ::Dynamic> GameInput_obj::_hx___instances;

 ::openfl::ui::GameInputDevice GameInput_obj::getDeviceAt(int index){
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_52_getDeviceAt)
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if ((index >= (int)0)) {
HXLINE(  54)			_hx_tmp = (index < ::openfl::ui::GameInput_obj::_hx___deviceList->length);
            		}
            		else {
HXLINE(  54)			_hx_tmp = false;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  56)			return ::openfl::ui::GameInput_obj::_hx___deviceList->__get(index).StaticCast<  ::openfl::ui::GameInputDevice >();
            		}
HXLINE(  60)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,getDeviceAt,return )

 ::openfl::ui::GameInputDevice GameInput_obj::_hx___getDevice( ::lime::ui::Gamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_65___getDevice)
HXLINE(  67)		if (hx::IsNull( gamepad )) {
HXLINE(  67)			return null();
            		}
HXLINE(  69)		if (!(::openfl::ui::GameInput_obj::_hx___devices->exists(gamepad))) {
HXLINE(  71)			::String device = ( (::String)(( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_guid(gamepad->id)) )) );
HXDLIN(  71)			 ::openfl::ui::GameInputDevice device1 =  ::openfl::ui::GameInputDevice_obj::__alloc( HX_CTX ,device,( (::String)(( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_name(gamepad->id)) )) ));
HXLINE(  72)			::openfl::ui::GameInput_obj::_hx___deviceList->push(device1);
HXLINE(  73)			::openfl::ui::GameInput_obj::_hx___devices->set(gamepad,device1);
HXLINE(  74)			::openfl::ui::GameInput_obj::numDevices = ::openfl::ui::GameInput_obj::_hx___deviceList->length;
            		}
HXLINE(  78)		return ::openfl::ui::GameInput_obj::_hx___devices->get(gamepad).StaticCast<  ::openfl::ui::GameInputDevice >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___getDevice,return )

void GameInput_obj::_hx___onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_83___onGamepadAxisMove)
HXLINE(  85)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE(  86)		if (hx::IsNull( device )) {
HXLINE(  86)			return;
            		}
HXLINE(  88)		if (device->enabled) {
HXLINE(  90)			if (!(device->_hx___axis->exists(axis))) {
HXLINE(  92)				::String control;
HXDLIN(  92)				switch((int)(axis)){
            					case (int)0: {
HXLINE(  92)						control = HX_("LEFT_X",e0,72,4a,4c);
            					}
            					break;
            					case (int)1: {
HXLINE(  92)						control = HX_("LEFT_Y",e1,72,4a,4c);
            					}
            					break;
            					case (int)2: {
HXLINE(  92)						control = HX_("RIGHT_X",d5,fd,37,93);
            					}
            					break;
            					case (int)3: {
HXLINE(  92)						control = HX_("RIGHT_Y",d6,fd,37,93);
            					}
            					break;
            					case (int)4: {
HXLINE(  92)						control = HX_("TRIGGER_LEFT",ce,cb,4a,f1);
            					}
            					break;
            					case (int)5: {
HXLINE(  92)						control = HX_("TRIGGER_RIGHT",15,96,34,a7);
            					}
            					break;
            					default:{
HXLINE(  92)						control = ((HX_("UNKNOWN (",f2,41,8b,8c) + axis) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN(  92)				 ::openfl::ui::GameInputControl control1 =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,device,(HX_("AXIS_",9e,28,6e,a7) + control),(int)-1,(int)1,null());
HXLINE(  93)				device->_hx___axis->set(axis,control1);
HXLINE(  94)				device->_hx___controls->push(control1);
            			}
HXLINE(  98)			 ::openfl::ui::GameInputControl control2 = device->_hx___axis->get(axis).StaticCast<  ::openfl::ui::GameInputControl >();
HXLINE(  99)			control2->value = value;
HXLINE( 100)			control2->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GameInput_obj,_hx___onGamepadAxisMove,(void))

void GameInput_obj::_hx___onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_107___onGamepadButtonDown)
HXLINE( 109)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 110)		if (hx::IsNull( device )) {
HXLINE( 110)			return;
            		}
HXLINE( 112)		if (device->enabled) {
HXLINE( 114)			if (!(device->_hx___button->exists(button))) {
HXLINE( 116)				::String control;
HXDLIN( 116)				switch((int)(button)){
            					case (int)0: {
HXLINE( 116)						control = HX_("A",41,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE( 116)						control = HX_("B",42,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE( 116)						control = HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)3: {
HXLINE( 116)						control = HX_("Y",59,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 116)						control = HX_("BACK",27,a2,d1,2b);
            					}
            					break;
            					case (int)5: {
HXLINE( 116)						control = HX_("GUIDE",9c,f2,d9,19);
            					}
            					break;
            					case (int)6: {
HXLINE( 116)						control = HX_("START",42,ac,f9,01);
            					}
            					break;
            					case (int)7: {
HXLINE( 116)						control = HX_("LEFT_STICK",b8,07,ea,37);
            					}
            					break;
            					case (int)8: {
HXLINE( 116)						control = HX_("RIGHT_STICK",2d,b1,90,56);
            					}
            					break;
            					case (int)9: {
HXLINE( 116)						control = HX_("LEFT_SHOULDER",d8,b1,a9,01);
            					}
            					break;
            					case (int)10: {
HXLINE( 116)						control = HX_("RIGHT_SHOULDER",83,9f,28,11);
            					}
            					break;
            					case (int)11: {
HXLINE( 116)						control = HX_("DPAD_UP",6b,00,87,a2);
            					}
            					break;
            					case (int)12: {
HXLINE( 116)						control = HX_("DPAD_DOWN",72,1a,5b,87);
            					}
            					break;
            					case (int)13: {
HXLINE( 116)						control = HX_("DPAD_LEFT",17,2a,9d,8c);
            					}
            					break;
            					case (int)14: {
HXLINE( 116)						control = HX_("DPAD_RIGHT",ac,b7,f4,f3);
            					}
            					break;
            					default:{
HXLINE( 116)						control = ((HX_("UNKNOWN (",f2,41,8b,8c) + button) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN( 116)				 ::openfl::ui::GameInputControl control1 =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,device,(HX_("BUTTON_",2d,26,49,4a) + control),(int)0,(int)1,null());
HXLINE( 117)				device->_hx___button->set(button,control1);
HXLINE( 118)				device->_hx___controls->push(control1);
            			}
HXLINE( 122)			 ::openfl::ui::GameInputControl control2 = device->_hx___button->get(button).StaticCast<  ::openfl::ui::GameInputControl >();
HXLINE( 123)			control2->value = (int)1;
HXLINE( 124)			control2->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,_hx___onGamepadButtonDown,(void))

void GameInput_obj::_hx___onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_131___onGamepadButtonUp)
HXLINE( 133)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 134)		if (hx::IsNull( device )) {
HXLINE( 134)			return;
            		}
HXLINE( 136)		if (device->enabled) {
HXLINE( 138)			if (!(device->_hx___button->exists(button))) {
HXLINE( 140)				::String control;
HXDLIN( 140)				switch((int)(button)){
            					case (int)0: {
HXLINE( 140)						control = HX_("A",41,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE( 140)						control = HX_("B",42,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE( 140)						control = HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)3: {
HXLINE( 140)						control = HX_("Y",59,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 140)						control = HX_("BACK",27,a2,d1,2b);
            					}
            					break;
            					case (int)5: {
HXLINE( 140)						control = HX_("GUIDE",9c,f2,d9,19);
            					}
            					break;
            					case (int)6: {
HXLINE( 140)						control = HX_("START",42,ac,f9,01);
            					}
            					break;
            					case (int)7: {
HXLINE( 140)						control = HX_("LEFT_STICK",b8,07,ea,37);
            					}
            					break;
            					case (int)8: {
HXLINE( 140)						control = HX_("RIGHT_STICK",2d,b1,90,56);
            					}
            					break;
            					case (int)9: {
HXLINE( 140)						control = HX_("LEFT_SHOULDER",d8,b1,a9,01);
            					}
            					break;
            					case (int)10: {
HXLINE( 140)						control = HX_("RIGHT_SHOULDER",83,9f,28,11);
            					}
            					break;
            					case (int)11: {
HXLINE( 140)						control = HX_("DPAD_UP",6b,00,87,a2);
            					}
            					break;
            					case (int)12: {
HXLINE( 140)						control = HX_("DPAD_DOWN",72,1a,5b,87);
            					}
            					break;
            					case (int)13: {
HXLINE( 140)						control = HX_("DPAD_LEFT",17,2a,9d,8c);
            					}
            					break;
            					case (int)14: {
HXLINE( 140)						control = HX_("DPAD_RIGHT",ac,b7,f4,f3);
            					}
            					break;
            					default:{
HXLINE( 140)						control = ((HX_("UNKNOWN (",f2,41,8b,8c) + button) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN( 140)				 ::openfl::ui::GameInputControl control1 =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,device,(HX_("BUTTON_",2d,26,49,4a) + control),(int)0,(int)1,null());
HXLINE( 141)				device->_hx___button->set(button,control1);
HXLINE( 142)				device->_hx___controls->push(control1);
            			}
HXLINE( 146)			 ::openfl::ui::GameInputControl control2 = device->_hx___button->get(button).StaticCast<  ::openfl::ui::GameInputControl >();
HXLINE( 147)			control2->value = (int)0;
HXLINE( 148)			control2->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,_hx___onGamepadButtonUp,(void))

void GameInput_obj::_hx___onGamepadConnect( ::lime::ui::Gamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_155___onGamepadConnect)
HXLINE( 157)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 158)		if (hx::IsNull( device )) {
HXLINE( 158)			return;
            		}
HXLINE( 160)		{
HXLINE( 160)			int _g = (int)0;
HXDLIN( 160)			::Array< ::Dynamic> _g1 = ::openfl::ui::GameInput_obj::_hx___instances;
HXDLIN( 160)			while((_g < _g1->length)){
HXLINE( 160)				 ::openfl::ui::GameInput instance = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInput >();
HXDLIN( 160)				_g = (_g + (int)1);
HXLINE( 162)				instance->dispatchEvent( ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,HX_("deviceAdded",4a,08,84,0b),null(),null(),device));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___onGamepadConnect,(void))

void GameInput_obj::_hx___onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_169___onGamepadDisconnect)
HXLINE( 171)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___devices->get(gamepad).StaticCast<  ::openfl::ui::GameInputDevice >();
HXLINE( 173)		if (hx::IsNotNull( device )) {
HXLINE( 175)			if (::openfl::ui::GameInput_obj::_hx___devices->exists(gamepad)) {
HXLINE( 177)				::Array< ::Dynamic> _hx_tmp = ::openfl::ui::GameInput_obj::_hx___deviceList;
HXDLIN( 177)				_hx_tmp->remove(::openfl::ui::GameInput_obj::_hx___devices->get(gamepad).StaticCast<  ::openfl::ui::GameInputDevice >());
HXLINE( 178)				::openfl::ui::GameInput_obj::_hx___devices->remove(gamepad);
            			}
HXLINE( 182)			::openfl::ui::GameInput_obj::numDevices = ::openfl::ui::GameInput_obj::_hx___deviceList->length;
HXLINE( 184)			{
HXLINE( 184)				int _g = (int)0;
HXDLIN( 184)				::Array< ::Dynamic> _g1 = ::openfl::ui::GameInput_obj::_hx___instances;
HXDLIN( 184)				while((_g < _g1->length)){
HXLINE( 184)					 ::openfl::ui::GameInput instance = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInput >();
HXDLIN( 184)					_g = (_g + (int)1);
HXLINE( 186)					instance->dispatchEvent( ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,HX_("deviceRemoved",aa,c9,5b,59),null(),null(),device));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___onGamepadDisconnect,(void))


hx::ObjectPtr< GameInput_obj > GameInput_obj::__new() {
	hx::ObjectPtr< GameInput_obj > __this = new GameInput_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GameInput_obj > GameInput_obj::__alloc(hx::Ctx *_hx_ctx) {
	GameInput_obj *__this = (GameInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GameInput_obj), true, "openfl.ui.GameInput"));
	*(void **)__this = GameInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameInput_obj::GameInput_obj()
{
}

hx::Val GameInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameInput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { outValue = ( _hx___devices ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { outValue = ( numDevices ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = ( isSupported ); return true; }
		if (HX_FIELD_EQ(inName,"__instances") ) { outValue = ( _hx___instances ); return true; }
		if (HX_FIELD_EQ(inName,"getDeviceAt") ) { outValue = getDeviceAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getDevice") ) { outValue = _hx___getDevice_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__deviceList") ) { outValue = ( _hx___deviceList ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { outValue = _hx___onGamepadConnect_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__onGamepadAxisMove") ) { outValue = _hx___onGamepadAxisMove_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__onGamepadButtonUp") ) { outValue = _hx___onGamepadButtonUp_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__onGamepadButtonDown") ) { outValue = _hx___onGamepadButtonDown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__onGamepadDisconnect") ) { outValue = _hx___onGamepadDisconnect_dyn(); return true; }
	}
	return false;
}

bool GameInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { _hx___devices=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { numDevices=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__instances") ) { _hx___instances=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__deviceList") ) { _hx___deviceList=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GameInput_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GameInput_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GameInput_obj::isSupported,HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3")},
	{hx::fsInt,(void *) &GameInput_obj::numDevices,HX_HCSTRING("numDevices","\x77","\x65","\x89","\x07")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GameInput_obj::_hx___deviceList,HX_HCSTRING("__deviceList","\x34","\xa3","\xd0","\xe9")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &GameInput_obj::_hx___devices,HX_HCSTRING("__devices","\xfd","\x77","\xb7","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GameInput_obj::_hx___instances,HX_HCSTRING("__instances","\x1e","\xcc","\x46","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GameInput_obj_sMemberFields[] = {
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	::String(null()) };

static void GameInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInput_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___deviceList,"__deviceList");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___devices,"__devices");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___instances,"__instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInput_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___deviceList,"__deviceList");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___devices,"__devices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___instances,"__instances");
};

#endif

hx::Class GameInput_obj::__mClass;

static ::String GameInput_obj_sStaticFields[] = {
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("numDevices","\x77","\x65","\x89","\x07"),
	HX_HCSTRING("__deviceList","\x34","\xa3","\xd0","\xe9"),
	HX_HCSTRING("__devices","\xfd","\x77","\xb7","\x58"),
	HX_HCSTRING("__instances","\x1e","\xcc","\x46","\x79"),
	HX_HCSTRING("getDeviceAt","\xdf","\xa9","\x8c","\xca"),
	HX_HCSTRING("__getDevice","\xac","\xae","\xfa","\x1b"),
	HX_HCSTRING("__onGamepadAxisMove","\x94","\x20","\xc5","\xd7"),
	HX_HCSTRING("__onGamepadButtonDown","\x36","\x0c","\xab","\xf5"),
	HX_HCSTRING("__onGamepadButtonUp","\x2f","\x1d","\x03","\xa4"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onGamepadDisconnect","\x1e","\x09","\x8b","\xb2"),
	::String(null())
};

void GameInput_obj::__register()
{
	hx::Object *dummy = new GameInput_obj;
	GameInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.GameInput","\x9c","\x63","\x63","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInput_obj::__GetStatic;
	__mClass->mSetStaticField = &GameInput_obj::__SetStatic;
	__mClass->mMarkFunc = GameInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GameInput_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInput_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_18_boot)
HXDLIN(  18)		isSupported = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_19_boot)
HXDLIN(  19)		numDevices = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_21_boot)
HXDLIN(  21)		_hx___deviceList = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_22_boot)
HXDLIN(  22)		_hx___devices =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_23_boot)
HXDLIN(  23)		_hx___instances = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace openfl
} // end namespace ui
