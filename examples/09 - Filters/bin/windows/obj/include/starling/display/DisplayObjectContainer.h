// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_display_DisplayObjectContainer
#define INCLUDED_starling_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(starling,events,Event)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,BatchToken)
HX_DECLARE_CLASS2(starling,rendering,Painter)

namespace starling{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectContainer_obj : public  ::starling::display::DisplayObject_obj
{
	public:
		typedef  ::starling::display::DisplayObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();

	public:
		enum { _hx_ClassId = 0x31a4bcfa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.display.DisplayObjectContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.display.DisplayObjectContainer"); }
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new();
		static hx::ObjectPtr< DisplayObjectContainer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DisplayObjectContainer","\x80","\xf2","\x98","\xea"); }

		static void __boot();
		static  ::openfl::geom::Matrix sHelperMatrix;
		static  ::openfl::geom::Point sHelperPoint;
		static  ::openfl::_Vector::AbstractVector sBroadcastListeners;
		static  ::openfl::_Vector::AbstractVector sSortBuffer;
		static  ::starling::rendering::BatchToken sCacheToken;
		static void mergeSort( ::openfl::_Vector::AbstractVector input, ::Dynamic compareFunc,int startIndex,int length, ::openfl::_Vector::AbstractVector buffer);
		static ::Dynamic mergeSort_dyn();

		 ::openfl::_Vector::AbstractVector _hx___children;
		bool _hx___touchGroup;
		virtual void dispose();

		 ::starling::display::DisplayObject addChild( ::starling::display::DisplayObject child);
		::Dynamic addChild_dyn();

		 ::starling::display::DisplayObject addChildAt( ::starling::display::DisplayObject child,int index);
		::Dynamic addChildAt_dyn();

		 ::starling::display::DisplayObject removeChild( ::starling::display::DisplayObject child,hx::Null< bool >  dispose);
		::Dynamic removeChild_dyn();

		 ::starling::display::DisplayObject removeChildAt(int index,hx::Null< bool >  dispose);
		::Dynamic removeChildAt_dyn();

		void removeChildren(hx::Null< int >  beginIndex,hx::Null< int >  endIndex,hx::Null< bool >  dispose);
		::Dynamic removeChildren_dyn();

		 ::starling::display::DisplayObject getChildAt(int index);
		::Dynamic getChildAt_dyn();

		 ::starling::display::DisplayObject getChildByName(::String name);
		::Dynamic getChildByName_dyn();

		int getChildIndex( ::starling::display::DisplayObject child);
		::Dynamic getChildIndex_dyn();

		void setChildIndex( ::starling::display::DisplayObject child,int index);
		::Dynamic setChildIndex_dyn();

		void swapChildren( ::starling::display::DisplayObject child1, ::starling::display::DisplayObject child2);
		::Dynamic swapChildren_dyn();

		void swapChildrenAt(int index1,int index2);
		::Dynamic swapChildrenAt_dyn();

		void sortChildren( ::Dynamic compareFunction);
		::Dynamic sortChildren_dyn();

		bool contains( ::starling::display::DisplayObject child);
		::Dynamic contains_dyn();

		virtual  ::openfl::geom::Rectangle getBounds( ::starling::display::DisplayObject targetSpace, ::openfl::geom::Rectangle out);

		virtual  ::starling::display::DisplayObject hitTest( ::openfl::geom::Point localPoint);

		virtual void render( ::starling::rendering::Painter painter);

		void broadcastEvent( ::starling::events::Event event);
		::Dynamic broadcastEvent_dyn();

		void broadcastEventWith(::String eventType, ::Dynamic data);
		::Dynamic broadcastEventWith_dyn();

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		bool get_touchGroup();
		::Dynamic get_touchGroup_dyn();

		bool set_touchGroup(bool value);
		::Dynamic set_touchGroup_dyn();

		virtual void _hx___getChildEventListeners( ::starling::display::DisplayObject object,::String eventType, ::openfl::_Vector::AbstractVector listeners);
		::Dynamic _hx___getChildEventListeners_dyn();

};

} // end namespace starling
} // end namespace display

#endif /* INCLUDED_starling_display_DisplayObjectContainer */ 
