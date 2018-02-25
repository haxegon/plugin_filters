// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_rendering_BatchPool
#define INCLUDED_starling_rendering_BatchPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,UtilsObjectMap)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,display,MeshBatch)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,BatchPool)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES BatchPool_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BatchPool_obj OBJ_;
		BatchPool_obj();

	public:
		enum { _hx_ClassId = 0x225783f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.BatchPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.BatchPool"); }
		static hx::ObjectPtr< BatchPool_obj > __new();
		static hx::ObjectPtr< BatchPool_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BatchPool_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BatchPool","\x96","\xd9","\x4a","\x92"); }

		 ::openfl::utils::_Dictionary::UtilsObjectMap _batchLists;
		void purge();
		::Dynamic purge_dyn();

		 ::starling::display::MeshBatch get(hx::Class styleType);
		::Dynamic get_dyn();

		void put( ::starling::display::MeshBatch meshBatch);
		::Dynamic put_dyn();

};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_BatchPool */ 
