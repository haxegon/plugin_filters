// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_utils__Dictionary_UtilsObjectMap
#define INCLUDED_openfl_utils__Dictionary_UtilsObjectMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,UtilsObjectMap)

namespace openfl{
namespace utils{
namespace _Dictionary{


class HXCPP_CLASS_ATTRIBUTES UtilsObjectMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef UtilsObjectMap_obj OBJ_;
		UtilsObjectMap_obj();

	public:
		enum { _hx_ClassId = 0x4a8f39e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._Dictionary.UtilsObjectMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.utils._Dictionary.UtilsObjectMap"); }
		static hx::ObjectPtr< UtilsObjectMap_obj > __new();
		static hx::ObjectPtr< UtilsObjectMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UtilsObjectMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		void set_41d0cb46( ::Dynamic k, ::Dynamic v);
		::String __ToString() const { return HX_HCSTRING("UtilsObjectMap","\xcc","\x40","\xe3","\xda"); }

		 ::haxe::ds::ObjectMap map;
		bool exists( ::Dynamic key);
		::Dynamic exists_dyn();

		 ::Dynamic get( ::Dynamic key);
		::Dynamic get_dyn();

		 ::Dynamic keys();
		::Dynamic keys_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		bool remove( ::Dynamic key);
		::Dynamic remove_dyn();

		void set( ::Dynamic key, ::Dynamic value);
		::Dynamic set_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary

#endif /* INCLUDED_openfl_utils__Dictionary_UtilsObjectMap */ 
