// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_styles_MeshStyle
#define INCLUDED_starling_styles_MeshStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(starling,display,DisplayObject)
HX_DECLARE_CLASS2(starling,display,Mesh)
HX_DECLARE_CLASS2(starling,events,Event)
HX_DECLARE_CLASS2(starling,events,EventDispatcher)
HX_DECLARE_CLASS2(starling,rendering,Effect)
HX_DECLARE_CLASS2(starling,rendering,FilterEffect)
HX_DECLARE_CLASS2(starling,rendering,IndexData)
HX_DECLARE_CLASS2(starling,rendering,MeshEffect)
HX_DECLARE_CLASS2(starling,rendering,RenderState)
HX_DECLARE_CLASS2(starling,rendering,VertexData)
HX_DECLARE_CLASS2(starling,rendering,VertexDataFormat)
HX_DECLARE_CLASS2(starling,styles,MeshStyle)
HX_DECLARE_CLASS2(starling,textures,ConcreteTexture)
HX_DECLARE_CLASS2(starling,textures,Texture)

namespace starling{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES MeshStyle_obj : public  ::starling::events::EventDispatcher_obj
{
	public:
		typedef  ::starling::events::EventDispatcher_obj super;
		typedef MeshStyle_obj OBJ_;
		MeshStyle_obj();

	public:
		enum { _hx_ClassId = 0x5759bdd6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.styles.MeshStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.styles.MeshStyle"); }
		static hx::ObjectPtr< MeshStyle_obj > __new();
		static hx::ObjectPtr< MeshStyle_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshStyle_obj();

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
		::String __ToString() const { return HX_HCSTRING("MeshStyle","\xe4","\x8f","\x10","\x5e"); }

		static void __boot();
		static  ::starling::rendering::VertexDataFormat VERTEX_FORMAT;
		static  ::openfl::geom::Point sPoint;
		hx::Class _type;
		 ::starling::display::Mesh _target;
		 ::starling::textures::Texture _texture;
		::String _textureSmoothing;
		bool _textureRepeat;
		 ::starling::textures::ConcreteTexture _textureRoot;
		 ::starling::rendering::VertexData _vertexData;
		 ::starling::rendering::IndexData _indexData;
		void copyFrom( ::starling::styles::MeshStyle meshStyle);
		::Dynamic copyFrom_dyn();

		 ::starling::styles::MeshStyle clone();
		::Dynamic clone_dyn();

		 ::starling::rendering::MeshEffect createEffect();
		::Dynamic createEffect_dyn();

		void updateEffect( ::starling::rendering::MeshEffect effect, ::starling::rendering::RenderState state);
		::Dynamic updateEffect_dyn();

		bool canBatchWith( ::starling::styles::MeshStyle meshStyle);
		::Dynamic canBatchWith_dyn();

		void batchVertexData( ::starling::styles::MeshStyle targetStyle,hx::Null< int >  targetVertexID, ::openfl::geom::Matrix matrix,hx::Null< int >  vertexID,hx::Null< int >  numVertices);
		::Dynamic batchVertexData_dyn();

		void batchIndexData( ::starling::styles::MeshStyle targetStyle,hx::Null< int >  targetIndexID,hx::Null< int >  offset,hx::Null< int >  indexID,hx::Null< int >  numIndices);
		::Dynamic batchIndexData_dyn();

		void setRequiresRedraw();
		::Dynamic setRequiresRedraw_dyn();

		void setVertexDataChanged();
		::Dynamic setVertexDataChanged_dyn();

		void setIndexDataChanged();
		::Dynamic setIndexDataChanged_dyn();

		void onTargetAssigned( ::starling::display::Mesh target);
		::Dynamic onTargetAssigned_dyn();

		void addEventListener(::String type, ::Dynamic _tmp_listener);

		void removeEventListener(::String type, ::Dynamic _tmp_listener);

		void onEnterFrame( ::starling::events::Event event);
		::Dynamic onEnterFrame_dyn();

		void setTarget( ::starling::display::Mesh target, ::starling::rendering::VertexData vertexData, ::starling::rendering::IndexData indexData);
		::Dynamic setTarget_dyn();

		 ::openfl::geom::Point getVertexPosition(int vertexID, ::openfl::geom::Point out);
		::Dynamic getVertexPosition_dyn();

		void setVertexPosition(int vertexID,Float x,Float y);
		::Dynamic setVertexPosition_dyn();

		Float getVertexAlpha(int vertexID);
		::Dynamic getVertexAlpha_dyn();

		void setVertexAlpha(int vertexID,Float alpha);
		::Dynamic setVertexAlpha_dyn();

		int getVertexColor(int vertexID);
		::Dynamic getVertexColor_dyn();

		void setVertexColor(int vertexID,int color);
		::Dynamic setVertexColor_dyn();

		 ::openfl::geom::Point getTexCoords(int vertexID, ::openfl::geom::Point out);
		::Dynamic getTexCoords_dyn();

		void setTexCoords(int vertexID,Float u,Float v);
		::Dynamic setTexCoords_dyn();

		 ::starling::rendering::VertexData get_vertexData();
		::Dynamic get_vertexData_dyn();

		 ::starling::rendering::IndexData get_indexData();
		::Dynamic get_indexData_dyn();

		hx::Class get_type();
		::Dynamic get_type_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		 ::starling::rendering::VertexDataFormat get_vertexFormat();
		::Dynamic get_vertexFormat_dyn();

		 ::starling::textures::Texture get_texture();
		::Dynamic get_texture_dyn();

		 ::starling::textures::Texture set_texture( ::starling::textures::Texture value);
		::Dynamic set_texture_dyn();

		::String get_textureSmoothing();
		::Dynamic get_textureSmoothing_dyn();

		::String set_textureSmoothing(::String value);
		::Dynamic set_textureSmoothing_dyn();

		bool get_textureRepeat();
		::Dynamic get_textureRepeat_dyn();

		bool set_textureRepeat(bool value);
		::Dynamic set_textureRepeat_dyn();

		 ::starling::display::Mesh get_target();
		::Dynamic get_target_dyn();

};

} // end namespace starling
} // end namespace styles

#endif /* INCLUDED_starling_styles_MeshStyle */ 
