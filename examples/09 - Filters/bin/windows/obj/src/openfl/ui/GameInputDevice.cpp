// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fafdee3291969395_10_new,"openfl.ui.GameInputDevice","new",0x66440344,"openfl.ui.GameInputDevice.new","openfl/ui/GameInputDevice.hx",10,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_66_getCachedSamples,"openfl.ui.GameInputDevice","getCachedSamples",0x0422a56d,"openfl.ui.GameInputDevice.getCachedSamples","openfl/ui/GameInputDevice.hx",66,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_71_getControlAt,"openfl.ui.GameInputDevice","getControlAt",0xc65be2d6,"openfl.ui.GameInputDevice.getControlAt","openfl/ui/GameInputDevice.hx",71,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_84_startCachingSamples,"openfl.ui.GameInputDevice","startCachingSamples",0xf3794db0,"openfl.ui.GameInputDevice.startCachingSamples","openfl/ui/GameInputDevice.hx",84,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_91_stopCachingSamples,"openfl.ui.GameInputDevice","stopCachingSamples",0xbbb05408,"openfl.ui.GameInputDevice.stopCachingSamples","openfl/ui/GameInputDevice.hx",91,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_107_get_numControls,"openfl.ui.GameInputDevice","get_numControls",0x2a978757,"openfl.ui.GameInputDevice.get_numControls","openfl/ui/GameInputDevice.hx",107,0x744a6f4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fafdee3291969395_13_boot,"openfl.ui.GameInputDevice","boot",0x0d57d8ce,"openfl.ui.GameInputDevice.boot","openfl/ui/GameInputDevice.hx",13,0x744a6f4c)
namespace openfl{
namespace ui{

void GameInputDevice_obj::__construct(::String id,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fafdee3291969395_10_new)
HXLINE(  23)		this->_hx___controls = ::Array_obj< ::Dynamic>::__new();
HXLINE(  22)		this->_hx___button =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  21)		this->_hx___axis =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->id = id;
HXLINE(  41)		this->name = name;
HXLINE(  43)		 ::openfl::ui::GameInputControl control;
HXLINE(  45)		{
HXLINE(  45)			int _g = (int)0;
HXDLIN(  45)			while((_g < (int)6)){
HXLINE(  45)				_g = (_g + (int)1);
HXDLIN(  45)				int i = (_g - (int)1);
HXLINE(  47)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),(HX_("AXIS_",9e,28,6e,a7) + i),(int)-1,(int)1,null());
HXLINE(  48)				this->_hx___axis->set(i,control);
HXLINE(  49)				this->_hx___controls->push(control);
            			}
            		}
HXLINE(  53)		{
HXLINE(  53)			int _g1 = (int)0;
HXDLIN(  53)			while((_g1 < (int)15)){
HXLINE(  53)				_g1 = (_g1 + (int)1);
HXDLIN(  53)				int i1 = (_g1 - (int)1);
HXLINE(  55)				control =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),(HX_("BUTTON_",2d,26,49,4a) + i1),(int)0,(int)1,null());
HXLINE(  56)				this->_hx___button->set(i1,control);
HXLINE(  57)				this->_hx___controls->push(control);
            			}
            		}
            	}

Dynamic GameInputDevice_obj::__CreateEmpty() { return new GameInputDevice_obj; }

void *GameInputDevice_obj::_hx_vtable = 0;

Dynamic GameInputDevice_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameInputDevice_obj > _hx_result = new GameInputDevice_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameInputDevice_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e491d6a;
}

int GameInputDevice_obj::getCachedSamples( ::openfl::utils::ByteArrayData data,hx::Null< bool >  __o_append){
bool append = __o_append.Default(false);
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_66_getCachedSamples)
HXDLIN(  66)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,getCachedSamples,return )

 ::openfl::ui::GameInputControl GameInputDevice_obj::getControlAt(int i){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_71_getControlAt)
HXLINE(  73)		bool _hx_tmp;
HXDLIN(  73)		if ((i >= (int)0)) {
HXLINE(  73)			_hx_tmp = (i < this->_hx___controls->length);
            		}
            		else {
HXLINE(  73)			_hx_tmp = false;
            		}
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  75)			return this->_hx___controls->__get(i).StaticCast<  ::openfl::ui::GameInputControl >();
            		}
HXLINE(  79)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameInputDevice_obj,getControlAt,return )

void GameInputDevice_obj::startCachingSamples(int numSamples, ::openfl::_Vector::AbstractVector controls){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_84_startCachingSamples)
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,startCachingSamples,(void))

void GameInputDevice_obj::stopCachingSamples(){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_91_stopCachingSamples)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,stopCachingSamples,(void))

int GameInputDevice_obj::get_numControls(){
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_107_get_numControls)
HXDLIN( 107)		return this->_hx___controls->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,get_numControls,return )

int GameInputDevice_obj::MAX_BUFFER_SIZE;


hx::ObjectPtr< GameInputDevice_obj > GameInputDevice_obj::__new(::String id,::String name) {
	hx::ObjectPtr< GameInputDevice_obj > __this = new GameInputDevice_obj();
	__this->__construct(id,name);
	return __this;
}

hx::ObjectPtr< GameInputDevice_obj > GameInputDevice_obj::__alloc(hx::Ctx *_hx_ctx,::String id,::String name) {
	GameInputDevice_obj *__this = (GameInputDevice_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GameInputDevice_obj), true, "openfl.ui.GameInputDevice"));
	*(void **)__this = GameInputDevice_obj::_hx_vtable;
	__this->__construct(id,name);
	return __this;
}

GameInputDevice_obj::GameInputDevice_obj()
{
}

void GameInputDevice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputDevice);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_MARK_MEMBER_NAME(_hx___axis,"__axis");
	HX_MARK_MEMBER_NAME(_hx___button,"__button");
	HX_MARK_MEMBER_NAME(_hx___controls,"__controls");
	HX_MARK_MEMBER_NAME(_hx___gamepad,"__gamepad");
	HX_MARK_END_CLASS();
}

void GameInputDevice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_VISIT_MEMBER_NAME(_hx___axis,"__axis");
	HX_VISIT_MEMBER_NAME(_hx___button,"__button");
	HX_VISIT_MEMBER_NAME(_hx___controls,"__controls");
	HX_VISIT_MEMBER_NAME(_hx___gamepad,"__gamepad");
}

hx::Val GameInputDevice_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { return hx::Val( _hx___axis ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return hx::Val( enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { return hx::Val( _hx___button ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { return hx::Val( _hx___gamepad ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { return hx::Val( _hx___controls ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numControls") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_numControls() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getControlAt") ) { return hx::Val( getControlAt_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { return hx::Val( sampleInterval ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numControls") ) { return hx::Val( get_numControls_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCachedSamples") ) { return hx::Val( getCachedSamples_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopCachingSamples") ) { return hx::Val( stopCachingSamples_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"startCachingSamples") ) { return hx::Val( startCachingSamples_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameInputDevice_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_BUFFER_SIZE") ) { outValue = ( MAX_BUFFER_SIZE ); return true; }
	}
	return false;
}

hx::Val GameInputDevice_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { _hx___axis=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { _hx___button=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { _hx___gamepad=inValue.Cast<  ::lime::ui::Gamepad >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { _hx___controls=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { sampleInterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameInputDevice_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_BUFFER_SIZE") ) { MAX_BUFFER_SIZE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void GameInputDevice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numControls","\xdc","\xd6","\xd2","\x23"));
	outFields->push(HX_HCSTRING("sampleInterval","\x8f","\xcf","\x73","\x9c"));
	outFields->push(HX_HCSTRING("__axis","\xc1","\x7f","\x71","\xef"));
	outFields->push(HX_HCSTRING("__button","\x12","\xcd","\x0f","\x82"));
	outFields->push(HX_HCSTRING("__controls","\x96","\xf9","\xf4","\xda"));
	outFields->push(HX_HCSTRING("__gamepad","\x81","\x31","\xd4","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GameInputDevice_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GameInputDevice_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsString,(int)offsetof(GameInputDevice_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(GameInputDevice_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(GameInputDevice_obj,sampleInterval),HX_HCSTRING("sampleInterval","\x8f","\xcf","\x73","\x9c")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GameInputDevice_obj,_hx___axis),HX_HCSTRING("__axis","\xc1","\x7f","\x71","\xef")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GameInputDevice_obj,_hx___button),HX_HCSTRING("__button","\x12","\xcd","\x0f","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameInputDevice_obj,_hx___controls),HX_HCSTRING("__controls","\x96","\xf9","\xf4","\xda")},
	{hx::fsObject /*::lime::ui::Gamepad*/ ,(int)offsetof(GameInputDevice_obj,_hx___gamepad),HX_HCSTRING("__gamepad","\x81","\x31","\xd4","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GameInputDevice_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GameInputDevice_obj::MAX_BUFFER_SIZE,HX_HCSTRING("MAX_BUFFER_SIZE","\x25","\x86","\x77","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GameInputDevice_obj_sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("sampleInterval","\x8f","\xcf","\x73","\x9c"),
	HX_HCSTRING("__axis","\xc1","\x7f","\x71","\xef"),
	HX_HCSTRING("__button","\x12","\xcd","\x0f","\x82"),
	HX_HCSTRING("__controls","\x96","\xf9","\xf4","\xda"),
	HX_HCSTRING("__gamepad","\x81","\x31","\xd4","\x0a"),
	HX_HCSTRING("getCachedSamples","\xd1","\xd6","\x6b","\x23"),
	HX_HCSTRING("getControlAt","\x3a","\x92","\x8f","\x9c"),
	HX_HCSTRING("startCachingSamples","\xcc","\x12","\x5e","\x6d"),
	HX_HCSTRING("stopCachingSamples","\x6c","\xa6","\xb3","\x24"),
	HX_HCSTRING("get_numControls","\x73","\x8e","\xb4","\xe4"),
	::String(null()) };

static void GameInputDevice_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInputDevice_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#endif

hx::Class GameInputDevice_obj::__mClass;

static ::String GameInputDevice_obj_sStaticFields[] = {
	HX_HCSTRING("MAX_BUFFER_SIZE","\x25","\x86","\x77","\xea"),
	::String(null())
};

void GameInputDevice_obj::__register()
{
	hx::Object *dummy = new GameInputDevice_obj;
	GameInputDevice_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.GameInputDevice","\x52","\x51","\xb0","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInputDevice_obj::__GetStatic;
	__mClass->mSetStaticField = &GameInputDevice_obj::__SetStatic;
	__mClass->mMarkFunc = GameInputDevice_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GameInputDevice_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameInputDevice_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInputDevice_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInputDevice_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInputDevice_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInputDevice_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInputDevice_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fafdee3291969395_13_boot)
HXDLIN(  13)		MAX_BUFFER_SIZE = (int)32000;
            	}
}

} // end namespace openfl
} // end namespace ui
