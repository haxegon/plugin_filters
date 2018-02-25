// Generated by Haxe 3.4.4
#ifndef INCLUDED_starling_rendering_IndexData
#define INCLUDED_starling_rendering_IndexData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_Vector,AbstractVector)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(starling,rendering,IndexData)

namespace starling{
namespace rendering{


class HXCPP_CLASS_ATTRIBUTES IndexData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IndexData_obj OBJ_;
		IndexData_obj();

	public:
		enum { _hx_ClassId = 0x094a2938 };

		void __construct(hx::Null< int >  __o_initialCapacity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="starling.rendering.IndexData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"starling.rendering.IndexData"); }
		static hx::ObjectPtr< IndexData_obj > __new(hx::Null< int >  __o_initialCapacity);
		static hx::ObjectPtr< IndexData_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_initialCapacity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexData_obj();

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
		::String __ToString() const { return HX_HCSTRING("IndexData","\x3c","\xee","\x43","\xa0"); }

		static void __boot();
		static int INDEX_SIZE;
		static  ::openfl::utils::ByteArrayData sQuadData;
		static int sQuadDataNumIndices;
		static  ::openfl::_Vector::AbstractVector sVector;
		static  ::openfl::utils::ByteArrayData sTrimData;
		static int getBasicQuadIndexAt(int indexID);
		static ::Dynamic getBasicQuadIndexAt_dyn();

		 ::openfl::utils::ByteArrayData _rawData;
		int _numIndices;
		int _initialCapacity;
		bool _useQuadLayout;
		void clear();
		::Dynamic clear_dyn();

		 ::starling::rendering::IndexData clone();
		::Dynamic clone_dyn();

		void copyTo( ::starling::rendering::IndexData target,hx::Null< int >  targetIndexID,hx::Null< int >  offset,hx::Null< int >  indexID,hx::Null< int >  numIndices);
		::Dynamic copyTo_dyn();

		void setIndex(int indexID,int index);
		::Dynamic setIndex_dyn();

		int getIndex(int indexID);
		::Dynamic getIndex_dyn();

		void offsetIndices(int offset,hx::Null< int >  indexID,hx::Null< int >  numIndices);
		::Dynamic offsetIndices_dyn();

		void addTriangle(int a,int b,int c);
		::Dynamic addTriangle_dyn();

		void addQuad(int a,int b,int c,int d);
		::Dynamic addQuad_dyn();

		 ::openfl::_Vector::AbstractVector toVector( ::openfl::_Vector::AbstractVector out);
		::Dynamic toVector_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void switchToGenericData();
		::Dynamic switchToGenericData_dyn();

		void ensureQuadDataCapacity(int numIndices);
		::Dynamic ensureQuadDataCapacity_dyn();

		 ::openfl::display3D::IndexBuffer3D createIndexBuffer(hx::Null< bool >  upload,::String bufferUsage);
		::Dynamic createIndexBuffer_dyn();

		void uploadToIndexBuffer( ::openfl::display3D::IndexBuffer3D buffer,hx::Null< int >  indexID,hx::Null< int >  numIndices);
		::Dynamic uploadToIndexBuffer_dyn();

		void trim();
		::Dynamic trim_dyn();

		int get_numIndices();
		::Dynamic get_numIndices_dyn();

		int set_numIndices(int value);
		::Dynamic set_numIndices_dyn();

		int get_numTriangles();
		::Dynamic get_numTriangles_dyn();

		int set_numTriangles(int value);
		::Dynamic set_numTriangles_dyn();

		int get_numQuads();
		::Dynamic get_numQuads_dyn();

		int set_numQuads(int value);
		::Dynamic set_numQuads_dyn();

		int get_indexSizeInBytes();
		::Dynamic get_indexSizeInBytes_dyn();

		bool get_useQuadLayout();
		::Dynamic get_useQuadLayout_dyn();

		bool set_useQuadLayout(bool value);
		::Dynamic set_useQuadLayout_dyn();

		 ::openfl::utils::ByteArrayData get_rawData();
		::Dynamic get_rawData_dyn();

};

} // end namespace starling
} // end namespace rendering

#endif /* INCLUDED_starling_rendering_IndexData */ 
