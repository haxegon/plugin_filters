// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system__Locale_Locale_Impl_
#include <lime/system/_Locale/Locale_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_70_hasMultiChannelAudio,"openfl.system.Capabilities","hasMultiChannelAudio",0xb0db92e9,"openfl.system.Capabilities.hasMultiChannelAudio","openfl/system/Capabilities.hx",70,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_87_get_cpuArchitecture,"openfl.system.Capabilities","get_cpuArchitecture",0x56d3229b,"openfl.system.Capabilities.get_cpuArchitecture","openfl/system/Capabilities.hx",87,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_93_get_language,"openfl.system.Capabilities","get_language",0xce1cefd8,"openfl.system.Capabilities.get_language","openfl/system/Capabilities.hx",93,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_159_get_manufacturer,"openfl.system.Capabilities","get_manufacturer",0xf78e49d1,"openfl.system.Capabilities.get_manufacturer","openfl/system/Capabilities.hx",159,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_188_get_os,"openfl.system.Capabilities","get_os",0x7acb30a4,"openfl.system.Capabilities.get_os","openfl/system/Capabilities.hx",188,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_198_get_pixelAspectRatio,"openfl.system.Capabilities","get_pixelAspectRatio",0xa176c2ad,"openfl.system.Capabilities.get_pixelAspectRatio","openfl/system/Capabilities.hx",198,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_203_get_screenDPI,"openfl.system.Capabilities","get_screenDPI",0x6de6afd1,"openfl.system.Capabilities.get_screenDPI","openfl/system/Capabilities.hx",203,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_260_get_screenResolutionX,"openfl.system.Capabilities","get_screenResolutionX",0x9f8b6e20,"openfl.system.Capabilities.get_screenResolutionX","openfl/system/Capabilities.hx",260,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_288_get_screenResolutionY,"openfl.system.Capabilities","get_screenResolutionY",0x9f8b6e21,"openfl.system.Capabilities.get_screenResolutionY","openfl/system/Capabilities.hx",288,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_316_get_version,"openfl.system.Capabilities","get_version",0xb346e798,"openfl.system.Capabilities.get_version","openfl/system/Capabilities.hx",316,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_12_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",12,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_14_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",14,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_15_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",15,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_16_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",16,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_17_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",17,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_18_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",18,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_19_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",19,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_20_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",20,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_21_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",21,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_22_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",22,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_23_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",23,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_24_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",24,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_25_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",25,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_26_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",26,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_27_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",27,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_28_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",28,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_30_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",30,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_32_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",32,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_35_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",35,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_36_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",36,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_40_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",40,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_41_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",41,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_42_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",42,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_43_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",43,0xabe25da7)
HX_LOCAL_STACK_FRAME(_hx_pos_cbccfb8e599bee99_46_boot,"openfl.system.Capabilities","boot",0x100970a9,"openfl.system.Capabilities.boot","openfl/system/Capabilities.hx",46,0xabe25da7)
static const int _hx_array_data_bd7bc757_37[] = {
	(int)120,(int)160,(int)240,(int)320,(int)480,(int)640,(int)800,(int)960,
};
namespace openfl{
namespace _hx_system{

void Capabilities_obj::__construct() { }

Dynamic Capabilities_obj::__CreateEmpty() { return new Capabilities_obj; }

void *Capabilities_obj::_hx_vtable = 0;

Dynamic Capabilities_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Capabilities_obj > _hx_result = new Capabilities_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Capabilities_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50c7ca95;
}

bool Capabilities_obj::avHardwareDisable;

bool Capabilities_obj::hasAccessibility;

bool Capabilities_obj::hasAudio;

bool Capabilities_obj::hasAudioEncoder;

bool Capabilities_obj::hasEmbeddedVideo;

bool Capabilities_obj::hasIME;

bool Capabilities_obj::hasMP3;

bool Capabilities_obj::hasPrinting;

bool Capabilities_obj::hasScreenBroadcast;

bool Capabilities_obj::hasScreenPlayback;

bool Capabilities_obj::hasStreamingAudio;

bool Capabilities_obj::hasStreamingVideo;

bool Capabilities_obj::hasTLS;

bool Capabilities_obj::hasVideoEncoder;

bool Capabilities_obj::isDebugger;

bool Capabilities_obj::isEmbeddedInAcrobat;

bool Capabilities_obj::localFileReadDisable;

int Capabilities_obj::maxLevelIDC;

::String Capabilities_obj::playerType;

::String Capabilities_obj::screenColor;

::String Capabilities_obj::serverString;

bool Capabilities_obj::supports32BitProcesses;

bool Capabilities_obj::supports64BitProcesses;

 ::Dynamic Capabilities_obj::touchscreenType;

::Array< int > Capabilities_obj::_hx___standardDensities;

bool Capabilities_obj::hasMultiChannelAudio(::String type){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_70_hasMultiChannelAudio)
HXDLIN(  70)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Capabilities_obj,hasMultiChannelAudio,return )

::String Capabilities_obj::get_cpuArchitecture(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_87_get_cpuArchitecture)
HXDLIN(  87)		return HX_("x86",76,3f,5b,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_cpuArchitecture,return )

::String Capabilities_obj::get_language(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_93_get_language)
HXLINE(  95)		::String language = ::lime::_hx_system::_Locale::Locale_Impl__obj::get_language(::lime::_hx_system::_Locale::Locale_Impl__obj::get_currentLocale());
HXLINE(  97)		if (hx::IsNotNull( language )) {
HXLINE(  99)			language = language.toLowerCase();
HXLINE( 101)			::String _hx_switch_0 = language;
            			if (  (_hx_switch_0==HX_("cs",b0,56,00,00)) ||  (_hx_switch_0==HX_("da",7d,57,00,00)) ||  (_hx_switch_0==HX_("de",81,57,00,00)) ||  (_hx_switch_0==HX_("en",69,58,00,00)) ||  (_hx_switch_0==HX_("es",6e,58,00,00)) ||  (_hx_switch_0==HX_("fi",43,59,00,00)) ||  (_hx_switch_0==HX_("fr",4c,59,00,00)) ||  (_hx_switch_0==HX_("hu",0d,5b,00,00)) ||  (_hx_switch_0==HX_("it",eb,5b,00,00)) ||  (_hx_switch_0==HX_("ja",b7,5c,00,00)) ||  (_hx_switch_0==HX_("ko",a4,5d,00,00)) ||  (_hx_switch_0==HX_("nb",34,60,00,00)) ||  (_hx_switch_0==HX_("nl",3e,60,00,00)) ||  (_hx_switch_0==HX_("pl",fc,61,00,00)) ||  (_hx_switch_0==HX_("pt",04,62,00,00)) ||  (_hx_switch_0==HX_("ru",c3,63,00,00)) ||  (_hx_switch_0==HX_("sv",a3,64,00,00)) ||  (_hx_switch_0==HX_("tr",7e,65,00,00)) ){
HXLINE( 105)				return language;
HXDLIN( 105)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("zh",ae,6a,00,00)) ){
HXLINE( 109)				::String region = ::lime::_hx_system::_Locale::Locale_Impl__obj::get_region(::lime::_hx_system::_Locale::Locale_Impl__obj::get_currentLocale());
HXLINE( 111)				if (hx::IsNotNull( region )) {
HXLINE( 113)					::String _g = region.toUpperCase();
HXDLIN( 113)					::String _hx_switch_1 = _g;
            					if (  (_hx_switch_1==HX_("HANT",7f,f3,c8,2f)) ||  (_hx_switch_1==HX_("TW",83,49,00,00)) ){
HXLINE( 117)						return HX_("zh-TW",02,65,c3,83);
HXDLIN( 117)						goto _hx_goto_3;
            					}
            					/* default */{
            					}
            					_hx_goto_3:;
            				}
HXLINE( 125)				return HX_("zh-CN",2a,56,c3,83);
HXLINE( 107)				goto _hx_goto_2;
            			}
            			/* default */{
HXLINE( 129)				return HX_("xu",fd,68,00,00);
            			}
            			_hx_goto_2:;
            		}
HXLINE( 135)		return HX_("en",69,58,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_language,return )

::String Capabilities_obj::get_manufacturer(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_159_get_manufacturer)
HXDLIN( 159)		return (HX_("OpenFL ",70,7e,7b,0d) + ::Sys_obj::systemName());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_manufacturer,return )

::String Capabilities_obj::get_os(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_188_get_os)
HXDLIN( 188)		return ::Sys_obj::systemName();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_os,return )

Float Capabilities_obj::get_pixelAspectRatio(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_198_get_pixelAspectRatio)
HXDLIN( 198)		return (int)1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_pixelAspectRatio,return )

Float Capabilities_obj::get_screenDPI(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_203_get_screenDPI)
HXLINE( 205)		 ::lime::ui::Window window;
HXDLIN( 205)		if (hx::IsNotNull( ::openfl::_internal::Lib_obj::application )) {
HXLINE( 205)			window = ::openfl::_internal::Lib_obj::application->_hx___windows->__get((int)0).StaticCast<  ::lime::ui::Window >();
            		}
            		else {
HXLINE( 205)			window = null();
            		}
HXLINE( 206)		Float screenDPI = (int)72;
HXLINE( 212)		if (hx::IsNotNull( window )) {
HXLINE( 214)			screenDPI = (screenDPI * window->_hx___scale);
            		}
HXLINE( 255)		return screenDPI;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenDPI,return )

Float Capabilities_obj::get_screenResolutionX(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_260_get_screenResolutionX)
HXLINE( 262)		 ::openfl::display::Stage stage = ::openfl::_internal::Lib_obj::current->stage;
HXLINE( 263)		int resolutionX = (int)0;
HXLINE( 265)		if (hx::IsNotNull( stage->window )) {
HXLINE( 267)			 ::lime::_hx_system::Display display = stage->window->get_display();
HXLINE( 269)			if (hx::IsNotNull( display )) {
HXLINE( 271)				resolutionX = display->currentMode->width;
            			}
            		}
HXLINE( 277)		if ((resolutionX > (int)0)) {
HXLINE( 279)			return resolutionX;
            		}
HXLINE( 283)		return stage->stageWidth;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionX,return )

Float Capabilities_obj::get_screenResolutionY(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_288_get_screenResolutionY)
HXLINE( 290)		 ::openfl::display::Stage stage = ::openfl::_internal::Lib_obj::current->stage;
HXLINE( 291)		int resolutionY = (int)0;
HXLINE( 293)		if (hx::IsNotNull( stage->window )) {
HXLINE( 295)			 ::lime::_hx_system::Display display = stage->window->get_display();
HXLINE( 297)			if (hx::IsNotNull( display )) {
HXLINE( 299)				resolutionY = display->currentMode->height;
            			}
            		}
HXLINE( 305)		if ((resolutionY > (int)0)) {
HXLINE( 307)			return resolutionY;
            		}
HXLINE( 311)		return stage->stageHeight;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionY,return )

::String Capabilities_obj::get_version(){
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_316_get_version)
HXLINE( 319)		::String value = HX_("WIN",fc,43,42,00);
HXLINE( 342)		value = (value + ((HX_(" ",20,00,00,00) + ::StringTools_obj::replace(HX_("7.0.0",bb,4c,96,c9),HX_(".",2e,00,00,00),HX_(",",2c,00,00,00))) + HX_(",0",84,26,00,00)));
HXLINE( 346)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_version,return )


Capabilities_obj::Capabilities_obj()
{
}

bool Capabilities_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"os") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_os() ); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { outValue = ( hasIME ); return true; }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { outValue = ( hasMP3 ); return true; }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { outValue = ( hasTLS ); return true; }
		if (HX_FIELD_EQ(inName,"get_os") ) { outValue = get_os_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_version() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { outValue = ( hasAudio ); return true; }
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_language() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_screenDPI() ); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { outValue = ( isDebugger ); return true; }
		if (HX_FIELD_EQ(inName,"playerType") ) { outValue = ( playerType ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { outValue = ( hasPrinting ); return true; }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { outValue = ( maxLevelIDC ); return true; }
		if (HX_FIELD_EQ(inName,"screenColor") ) { outValue = ( screenColor ); return true; }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_manufacturer() ); return true; } }
		if (HX_FIELD_EQ(inName,"serverString") ) { outValue = ( serverString ); return true; }
		if (HX_FIELD_EQ(inName,"get_language") ) { outValue = get_language_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_screenDPI") ) { outValue = get_screenDPI_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuArchitecture") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_cpuArchitecture() ); return true; } }
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { outValue = ( hasAudioEncoder ); return true; }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { outValue = ( hasVideoEncoder ); return true; }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { outValue = ( touchscreenType ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { outValue = ( hasAccessibility ); return true; }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { outValue = ( hasEmbeddedVideo ); return true; }
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_pixelAspectRatio() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_manufacturer") ) { outValue = get_manufacturer_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { outValue = ( avHardwareDisable ); return true; }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { outValue = ( hasScreenPlayback ); return true; }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { outValue = ( hasStreamingAudio ); return true; }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { outValue = ( hasStreamingVideo ); return true; }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_screenResolutionX() ); return true; } }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_screenResolutionY() ); return true; } }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { outValue = ( hasScreenBroadcast ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { outValue = ( isEmbeddedInAcrobat ); return true; }
		if (HX_FIELD_EQ(inName,"__standardDensities") ) { outValue = ( _hx___standardDensities ); return true; }
		if (HX_FIELD_EQ(inName,"get_cpuArchitecture") ) { outValue = get_cpuArchitecture_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { outValue = ( localFileReadDisable ); return true; }
		if (HX_FIELD_EQ(inName,"hasMultiChannelAudio") ) { outValue = hasMultiChannelAudio_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_pixelAspectRatio") ) { outValue = get_pixelAspectRatio_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_screenResolutionX") ) { outValue = get_screenResolutionX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_screenResolutionY") ) { outValue = get_screenResolutionY_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { outValue = ( supports32BitProcesses ); return true; }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { outValue = ( supports64BitProcesses ); return true; }
	}
	return false;
}

bool Capabilities_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { hasIME=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { hasMP3=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { hasTLS=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { hasAudio=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { isDebugger=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"playerType") ) { playerType=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { hasPrinting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { maxLevelIDC=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"screenColor") ) { screenColor=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serverString") ) { serverString=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { hasAudioEncoder=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { hasVideoEncoder=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { touchscreenType=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { hasAccessibility=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { hasEmbeddedVideo=ioValue.Cast< bool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { avHardwareDisable=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { hasScreenPlayback=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { hasStreamingAudio=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { hasStreamingVideo=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { hasScreenBroadcast=ioValue.Cast< bool >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { isEmbeddedInAcrobat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__standardDensities") ) { _hx___standardDensities=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { localFileReadDisable=ioValue.Cast< bool >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { supports32BitProcesses=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { supports64BitProcesses=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Capabilities_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Capabilities_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Capabilities_obj::avHardwareDisable,HX_HCSTRING("avHardwareDisable","\xab","\x62","\x32","\x9a")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAccessibility,HX_HCSTRING("hasAccessibility","\xd4","\x3e","\x39","\x17")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAudio,HX_HCSTRING("hasAudio","\x1c","\xc3","\xd8","\xb3")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAudioEncoder,HX_HCSTRING("hasAudioEncoder","\xe0","\x21","\x7b","\x20")},
	{hx::fsBool,(void *) &Capabilities_obj::hasEmbeddedVideo,HX_HCSTRING("hasEmbeddedVideo","\xd7","\x96","\x81","\xbc")},
	{hx::fsBool,(void *) &Capabilities_obj::hasIME,HX_HCSTRING("hasIME","\xc7","\xfc","\x36","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasMP3,HX_HCSTRING("hasMP3","\x56","\x08","\x3a","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasPrinting,HX_HCSTRING("hasPrinting","\x4f","\x34","\xe1","\xfb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasScreenBroadcast,HX_HCSTRING("hasScreenBroadcast","\xbb","\x97","\x24","\x21")},
	{hx::fsBool,(void *) &Capabilities_obj::hasScreenPlayback,HX_HCSTRING("hasScreenPlayback","\xa1","\x92","\x10","\x71")},
	{hx::fsBool,(void *) &Capabilities_obj::hasStreamingAudio,HX_HCSTRING("hasStreamingAudio","\x0e","\xba","\x1a","\x5c")},
	{hx::fsBool,(void *) &Capabilities_obj::hasStreamingVideo,HX_HCSTRING("hasStreamingVideo","\xb3","\x55","\x96","\x6b")},
	{hx::fsBool,(void *) &Capabilities_obj::hasTLS,HX_HCSTRING("hasTLS","\xc1","\x54","\x3f","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasVideoEncoder,HX_HCSTRING("hasVideoEncoder","\xdb","\x74","\xfc","\x2e")},
	{hx::fsBool,(void *) &Capabilities_obj::isDebugger,HX_HCSTRING("isDebugger","\x2b","\x36","\x9a","\x0b")},
	{hx::fsBool,(void *) &Capabilities_obj::isEmbeddedInAcrobat,HX_HCSTRING("isEmbeddedInAcrobat","\x7d","\x1e","\x22","\xf6")},
	{hx::fsBool,(void *) &Capabilities_obj::localFileReadDisable,HX_HCSTRING("localFileReadDisable","\xeb","\x2e","\x91","\x02")},
	{hx::fsInt,(void *) &Capabilities_obj::maxLevelIDC,HX_HCSTRING("maxLevelIDC","\xc8","\xdf","\x35","\x9c")},
	{hx::fsString,(void *) &Capabilities_obj::playerType,HX_HCSTRING("playerType","\xbb","\xce","\xca","\xaf")},
	{hx::fsString,(void *) &Capabilities_obj::screenColor,HX_HCSTRING("screenColor","\x57","\xbe","\xe1","\x01")},
	{hx::fsString,(void *) &Capabilities_obj::serverString,HX_HCSTRING("serverString","\xf4","\xdb","\x68","\x98")},
	{hx::fsBool,(void *) &Capabilities_obj::supports32BitProcesses,HX_HCSTRING("supports32BitProcesses","\xd3","\xe5","\x56","\xaa")},
	{hx::fsBool,(void *) &Capabilities_obj::supports64BitProcesses,HX_HCSTRING("supports64BitProcesses","\xf2","\xda","\xdf","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::touchscreenType,HX_HCSTRING("touchscreenType","\xc5","\x5c","\xc7","\x58")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Capabilities_obj::_hx___standardDensities,HX_HCSTRING("__standardDensities","\x29","\xc0","\x51","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Capabilities_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_MARK_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_MARK_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_MARK_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::_hx___standardDensities,"__standardDensities");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Capabilities_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::_hx___standardDensities,"__standardDensities");
};

#endif

hx::Class Capabilities_obj::__mClass;

static ::String Capabilities_obj_sStaticFields[] = {
	HX_HCSTRING("avHardwareDisable","\xab","\x62","\x32","\x9a"),
	HX_HCSTRING("hasAccessibility","\xd4","\x3e","\x39","\x17"),
	HX_HCSTRING("hasAudio","\x1c","\xc3","\xd8","\xb3"),
	HX_HCSTRING("hasAudioEncoder","\xe0","\x21","\x7b","\x20"),
	HX_HCSTRING("hasEmbeddedVideo","\xd7","\x96","\x81","\xbc"),
	HX_HCSTRING("hasIME","\xc7","\xfc","\x36","\xbb"),
	HX_HCSTRING("hasMP3","\x56","\x08","\x3a","\xbb"),
	HX_HCSTRING("hasPrinting","\x4f","\x34","\xe1","\xfb"),
	HX_HCSTRING("hasScreenBroadcast","\xbb","\x97","\x24","\x21"),
	HX_HCSTRING("hasScreenPlayback","\xa1","\x92","\x10","\x71"),
	HX_HCSTRING("hasStreamingAudio","\x0e","\xba","\x1a","\x5c"),
	HX_HCSTRING("hasStreamingVideo","\xb3","\x55","\x96","\x6b"),
	HX_HCSTRING("hasTLS","\xc1","\x54","\x3f","\xbb"),
	HX_HCSTRING("hasVideoEncoder","\xdb","\x74","\xfc","\x2e"),
	HX_HCSTRING("isDebugger","\x2b","\x36","\x9a","\x0b"),
	HX_HCSTRING("isEmbeddedInAcrobat","\x7d","\x1e","\x22","\xf6"),
	HX_HCSTRING("localFileReadDisable","\xeb","\x2e","\x91","\x02"),
	HX_HCSTRING("maxLevelIDC","\xc8","\xdf","\x35","\x9c"),
	HX_HCSTRING("playerType","\xbb","\xce","\xca","\xaf"),
	HX_HCSTRING("screenColor","\x57","\xbe","\xe1","\x01"),
	HX_HCSTRING("serverString","\xf4","\xdb","\x68","\x98"),
	HX_HCSTRING("supports32BitProcesses","\xd3","\xe5","\x56","\xaa"),
	HX_HCSTRING("supports64BitProcesses","\xf2","\xda","\xdf","\x7d"),
	HX_HCSTRING("touchscreenType","\xc5","\x5c","\xc7","\x58"),
	HX_HCSTRING("__standardDensities","\x29","\xc0","\x51","\xbf"),
	HX_HCSTRING("hasMultiChannelAudio","\x72","\x08","\xff","\xd2"),
	HX_HCSTRING("get_cpuArchitecture","\x32","\x71","\xd4","\x55"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("get_manufacturer","\xda","\x06","\xf4","\x18"),
	HX_HCSTRING("get_os","\x6d","\xf8","\x2f","\xa3"),
	HX_HCSTRING("get_pixelAspectRatio","\x36","\x38","\x9a","\xc3"),
	HX_HCSTRING("get_screenDPI","\x28","\x63","\x54","\xf9"),
	HX_HCSTRING("get_screenResolutionX","\x77","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_screenResolutionY","\x78","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	::String(null())
};

void Capabilities_obj::__register()
{
	hx::Object *dummy = new Capabilities_obj;
	Capabilities_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system.Capabilities","\x57","\xc7","\x7b","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Capabilities_obj::__GetStatic;
	__mClass->mSetStaticField = &Capabilities_obj::__SetStatic;
	__mClass->mMarkFunc = Capabilities_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Capabilities_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Capabilities_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Capabilities_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Capabilities_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Capabilities_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Capabilities_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_12_boot)
HXDLIN(  12)		avHardwareDisable = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_14_boot)
HXDLIN(  14)		hasAccessibility = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_15_boot)
HXDLIN(  15)		hasAudio = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_16_boot)
HXDLIN(  16)		hasAudioEncoder = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_17_boot)
HXDLIN(  17)		hasEmbeddedVideo = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_18_boot)
HXDLIN(  18)		hasIME = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_19_boot)
HXDLIN(  19)		hasMP3 = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_20_boot)
HXDLIN(  20)		hasPrinting = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_21_boot)
HXDLIN(  21)		hasScreenBroadcast = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_22_boot)
HXDLIN(  22)		hasScreenPlayback = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_23_boot)
HXDLIN(  23)		hasStreamingAudio = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_24_boot)
HXDLIN(  24)		hasStreamingVideo = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_25_boot)
HXDLIN(  25)		hasTLS = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_26_boot)
HXDLIN(  26)		hasVideoEncoder = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_27_boot)
HXDLIN(  27)		isDebugger = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_28_boot)
HXDLIN(  28)		isEmbeddedInAcrobat = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_30_boot)
HXDLIN(  30)		localFileReadDisable = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_32_boot)
HXDLIN(  32)		maxLevelIDC = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_35_boot)
HXDLIN(  35)		playerType = HX_("StandAlone",c5,25,52,28);
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_36_boot)
HXDLIN(  36)		screenColor = HX_("color",63,71,5c,4a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_40_boot)
HXDLIN(  40)		serverString = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_41_boot)
HXDLIN(  41)		supports32BitProcesses = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_42_boot)
HXDLIN(  42)		supports64BitProcesses = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_43_boot)
HXDLIN(  43)		touchscreenType = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbccfb8e599bee99_46_boot)
HXDLIN(  46)		_hx___standardDensities = ::Array_obj< int >::fromData( _hx_array_data_bd7bc757_37,8);
            	}
}

} // end namespace openfl
} // end namespace system
