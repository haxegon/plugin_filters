// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__Vector_AbstractVector
#include <openfl/_Vector/AbstractVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_starling_textures_SubTexture
#include <starling/textures/SubTexture.h>
#endif
#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif
#ifndef INCLUDED_starling_textures_TextureAtlas
#include <starling/textures/TextureAtlas.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_965739d152be09aa_82_new,"starling.textures.TextureAtlas","new",0x6d700a52,"starling.textures.TextureAtlas.new","starling/textures/TextureAtlas.hx",82,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_93_dispose,"starling.textures.TextureAtlas","dispose",0x14719b91,"starling.textures.TextureAtlas.dispose","starling/textures/TextureAtlas.hx",93,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_97_getXmlFloat,"starling.textures.TextureAtlas","getXmlFloat",0x803e7aed,"starling.textures.TextureAtlas.getXmlFloat","starling/textures/TextureAtlas.hx",97,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_109_parseAtlasXml,"starling.textures.TextureAtlas","parseAtlasXml",0xddf50d11,"starling.textures.TextureAtlas.parseAtlasXml","starling/textures/TextureAtlas.hx",109,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_144_getTexture,"starling.textures.TextureAtlas","getTexture",0xe9bf1733,"starling.textures.TextureAtlas.getTexture","starling/textures/TextureAtlas.hx",144,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_150_getTextures,"starling.textures.TextureAtlas","getTextures",0x9d7535e0,"starling.textures.TextureAtlas.getTextures","starling/textures/TextureAtlas.hx",150,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_162_getNames,"starling.textures.TextureAtlas","getNames",0x9dae1820,"starling.textures.TextureAtlas.getNames","starling/textures/TextureAtlas.hx",162,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_184_getRegion,"starling.textures.TextureAtlas","getRegion",0x3dba859c,"starling.textures.TextureAtlas.getRegion","starling/textures/TextureAtlas.hx",184,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_192_getFrame,"starling.textures.TextureAtlas","getFrame",0x0dad0085,"starling.textures.TextureAtlas.getFrame","starling/textures/TextureAtlas.hx",192,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_200_getRotation,"starling.textures.TextureAtlas","getRotation",0x402c7be6,"starling.textures.TextureAtlas.getRotation","starling/textures/TextureAtlas.hx",200,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_209_addRegion,"starling.textures.TextureAtlas","addRegion",0x79883167,"starling.textures.TextureAtlas.addRegion","starling/textures/TextureAtlas.hx",209,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_216_removeRegion,"starling.textures.TextureAtlas","removeRegion",0xda345426,"starling.textures.TextureAtlas.removeRegion","starling/textures/TextureAtlas.hx",216,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_225_get_texture,"starling.textures.TextureAtlas","get_texture",0x368da4e4,"starling.textures.TextureAtlas.get_texture","starling/textures/TextureAtlas.hx",225,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_234_compare,"starling.textures.TextureAtlas","compare",0xdc8e3397,"starling.textures.TextureAtlas.compare","starling/textures/TextureAtlas.hx",234,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_231_parseBool,"starling.textures.TextureAtlas","parseBool",0x8999116f,"starling.textures.TextureAtlas.parseBool","starling/textures/TextureAtlas.hx",231,0xd54c897e)
HX_LOCAL_STACK_FRAME(_hx_pos_965739d152be09aa_78_boot,"starling.textures.TextureAtlas","boot",0x4cb1fe00,"starling.textures.TextureAtlas.boot","starling/textures/TextureAtlas.hx",78,0xd54c897e)
namespace starling{
namespace textures{

void TextureAtlas_obj::__construct( ::starling::textures::Texture texture, ::Xml atlasXml){
            	HX_GC_STACKFRAME(&_hx_pos_965739d152be09aa_82_new)
HXLINE(  83)		this->_hx___subTextures =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  84)		this->_hx___atlasTexture = texture;
HXLINE(  86)		if (hx::IsNotNull( atlasXml )) {
HXLINE(  87)			this->parseAtlasXml(atlasXml);
            		}
            	}

Dynamic TextureAtlas_obj::__CreateEmpty() { return new TextureAtlas_obj; }

void *TextureAtlas_obj::_hx_vtable = 0;

Dynamic TextureAtlas_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextureAtlas_obj > _hx_result = new TextureAtlas_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TextureAtlas_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53e99b3c;
}

void TextureAtlas_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_93_dispose)
HXDLIN(  93)		this->_hx___atlasTexture->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlas_obj,dispose,(void))

Float TextureAtlas_obj::getXmlFloat( ::Xml xml,::String attributeName){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_97_getXmlFloat)
HXLINE(  98)		::String value = xml->get(attributeName);
HXLINE(  99)		if (hx::IsNotNull( value )) {
HXLINE( 100)			return ::Std_obj::parseFloat(value);
            		}
            		else {
HXLINE( 102)			return (int)0;
            		}
HXLINE(  99)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,getXmlFloat,return )

void TextureAtlas_obj::parseAtlasXml( ::Xml atlasXml){
            	HX_GC_STACKFRAME(&_hx_pos_965739d152be09aa_109_parseAtlasXml)
HXLINE( 110)		Float scale = this->_hx___atlasTexture->get_scale();
HXLINE( 111)		 ::openfl::geom::Rectangle region =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 112)		 ::openfl::geom::Rectangle frame =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 114)		 ::Xml _this = atlasXml->firstElement();
HXDLIN( 114)		if ((_this->nodeType != ::Xml_obj::Element)) {
HXLINE( 114)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + _this->nodeType));
            		}
HXDLIN( 114)		if ((_this->nodeName == HX_("TextureAtlas",90,46,8f,e7))) {
HXLINE( 115)			atlasXml = atlasXml->firstElement();
            		}
HXLINE( 118)		{
HXLINE( 118)			 ::Dynamic subTexture = atlasXml->elementsNamed(HX_("SubTexture",5b,7b,fb,11));
HXDLIN( 118)			while(( (bool)(subTexture->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 118)				 ::Xml subTexture1 = ( ( ::Xml)(subTexture->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 120)				::String name = subTexture1->get(HX_("name",4b,72,ff,48));
HXLINE( 121)				Float x = ((Float)this->getXmlFloat(subTexture1,HX_("x",78,00,00,00)) / (Float)scale);
HXLINE( 122)				Float y = ((Float)this->getXmlFloat(subTexture1,HX_("y",79,00,00,00)) / (Float)scale);
HXLINE( 123)				Float width = ((Float)this->getXmlFloat(subTexture1,HX_("width",06,b6,62,ca)) / (Float)scale);
HXLINE( 124)				Float height = ((Float)this->getXmlFloat(subTexture1,HX_("height",e7,07,4c,02)) / (Float)scale);
HXLINE( 125)				Float frameX = ((Float)this->getXmlFloat(subTexture1,HX_("frameX",8b,af,85,ac)) / (Float)scale);
HXLINE( 126)				Float frameY = ((Float)this->getXmlFloat(subTexture1,HX_("frameY",8c,af,85,ac)) / (Float)scale);
HXLINE( 127)				Float frameWidth = ((Float)this->getXmlFloat(subTexture1,HX_("frameWidth",99,ea,88,ad)) / (Float)scale);
HXLINE( 128)				Float frameHeight = ((Float)this->getXmlFloat(subTexture1,HX_("frameHeight",f4,d3,93,e0)) / (Float)scale);
HXLINE( 129)				bool rotated = ::starling::textures::TextureAtlas_obj::parseBool(subTexture1->get(HX_("rotated",a9,49,1d,f1)));
HXLINE( 131)				region->setTo(x,y,width,height);
HXLINE( 132)				frame->setTo(frameX,frameY,frameWidth,frameHeight);
HXLINE( 134)				bool _hx_tmp;
HXDLIN( 134)				if ((frameWidth > (int)0)) {
HXLINE( 134)					_hx_tmp = (frameHeight > (int)0);
            				}
            				else {
HXLINE( 134)					_hx_tmp = false;
            				}
HXDLIN( 134)				if (_hx_tmp) {
HXLINE( 135)					this->addRegion(name,region,frame,rotated);
            				}
            				else {
HXLINE( 137)					this->addRegion(name,region,null(),rotated);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,parseAtlasXml,(void))

 ::starling::textures::Texture TextureAtlas_obj::getTexture(::String name){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_144_getTexture)
HXDLIN( 144)		return this->_hx___subTextures->get(name).StaticCast<  ::starling::textures::SubTexture >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,getTexture,return )

 ::openfl::_Vector::AbstractVector TextureAtlas_obj::getTextures(::String __o_prefix, ::openfl::_Vector::AbstractVector result){
::String prefix = __o_prefix.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_GC_STACKFRAME(&_hx_pos_965739d152be09aa_150_getTextures)
HXLINE( 151)		if (hx::IsNull( result )) {
HXLINE( 151)			int length = null();
HXDLIN( 151)			bool fixed = null();
HXDLIN( 151)			result =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE( 153)		{
HXLINE( 153)			int _g = (int)0;
HXDLIN( 153)			 ::openfl::_Vector::AbstractVector _g1 = this->getNames(prefix,::starling::textures::TextureAtlas_obj::sNames);
HXDLIN( 153)			while((_g < ::openfl::_Vector::IVector_obj::get_length(_g1->data))){
HXLINE( 153)				::String name = ( (::String)(::openfl::_Vector::IVector_obj::get(_g1->data,_g)) );
HXDLIN( 153)				_g = (_g + (int)1);
HXLINE( 154)				{
HXLINE( 154)					int index = ::openfl::_Vector::IVector_obj::get_length(result->data);
HXDLIN( 154)					 ::starling::textures::Texture value = this->getTexture(name);
HXDLIN( 154)					::openfl::_Vector::IVector_obj::set(result->data,index,value);
            				}
            			}
            		}
HXLINE( 156)		::openfl::_Vector::IVector_obj::set_length(::starling::textures::TextureAtlas_obj::sNames->data,(int)0);
HXLINE( 157)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,getTextures,return )

 ::openfl::_Vector::AbstractVector TextureAtlas_obj::getNames(::String __o_prefix, ::openfl::_Vector::AbstractVector result){
::String prefix = __o_prefix.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_GC_STACKFRAME(&_hx_pos_965739d152be09aa_162_getNames)
HXLINE( 163)		::String name;
HXLINE( 164)		if (hx::IsNull( result )) {
HXLINE( 164)			int length = null();
HXDLIN( 164)			bool fixed = null();
HXDLIN( 164)			result =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
HXLINE( 166)		if (hx::IsNull( this->_hx___subTextureNames )) {
HXLINE( 169)			int length1 = null();
HXDLIN( 169)			bool fixed1 = null();
HXDLIN( 169)			this->_hx___subTextureNames =  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,null()),null());
HXLINE( 170)			{
HXLINE( 170)				 ::Dynamic name1 = this->_hx___subTextures->keys();
HXDLIN( 170)				while(( (bool)(name1->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 170)					::String name2 = ( (::String)(name1->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXDLIN( 170)					 ::openfl::_Vector::AbstractVector this1 = this->_hx___subTextureNames;
HXDLIN( 170)					int index = ::openfl::_Vector::IVector_obj::get_length(this->_hx___subTextureNames->data);
HXDLIN( 170)					::openfl::_Vector::IVector_obj::set(this1->data,index,name2);
            				}
            			}
HXLINE( 171)			::openfl::_Vector::IVector_obj::sort(this->_hx___subTextureNames->data,this->compare_dyn());
            		}
HXLINE( 174)		{
HXLINE( 174)			int _g = (int)0;
HXDLIN( 174)			 ::openfl::_Vector::AbstractVector _g1 = this->_hx___subTextureNames;
HXDLIN( 174)			while((_g < ::openfl::_Vector::IVector_obj::get_length(_g1->data))){
HXLINE( 174)				::String name3 = ( (::String)(::openfl::_Vector::IVector_obj::get(_g1->data,_g)) );
HXDLIN( 174)				_g = (_g + (int)1);
HXLINE( 175)				if ((name3.indexOf(prefix,null()) == (int)0)) {
HXLINE( 176)					int index1 = ::openfl::_Vector::IVector_obj::get_length(result->data);
HXDLIN( 176)					::openfl::_Vector::IVector_obj::set(result->data,index1,name3);
            				}
            			}
            		}
HXLINE( 178)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,getNames,return )

 ::openfl::geom::Rectangle TextureAtlas_obj::getRegion(::String name){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_184_getRegion)
HXLINE( 185)		 ::starling::textures::SubTexture subTexture = this->_hx___subTextures->get(name).StaticCast<  ::starling::textures::SubTexture >();
HXLINE( 186)		if (hx::IsNotNull( subTexture )) {
HXLINE( 186)			return subTexture->get_region();
            		}
            		else {
HXLINE( 186)			return null();
            		}
HXDLIN( 186)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,getRegion,return )

 ::openfl::geom::Rectangle TextureAtlas_obj::getFrame(::String name){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_192_getFrame)
HXLINE( 193)		 ::starling::textures::SubTexture subTexture = this->_hx___subTextures->get(name).StaticCast<  ::starling::textures::SubTexture >();
HXLINE( 194)		if (hx::IsNotNull( subTexture )) {
HXLINE( 194)			return subTexture->get_frame();
            		}
            		else {
HXLINE( 194)			return null();
            		}
HXDLIN( 194)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,getFrame,return )

bool TextureAtlas_obj::getRotation(::String name){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_200_getRotation)
HXLINE( 201)		 ::starling::textures::SubTexture subTexture = this->_hx___subTextures->get(name).StaticCast<  ::starling::textures::SubTexture >();
HXLINE( 202)		if (hx::IsNotNull( subTexture )) {
HXLINE( 202)			return subTexture->get_rotated();
            		}
            		else {
HXLINE( 202)			return false;
            		}
HXDLIN( 202)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,getRotation,return )

void TextureAtlas_obj::addRegion(::String name, ::openfl::geom::Rectangle region, ::openfl::geom::Rectangle frame,hx::Null< bool >  __o_rotated){
bool rotated = __o_rotated.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_965739d152be09aa_209_addRegion)
HXLINE( 210)		{
HXLINE( 210)			::Dynamic this1 = this->_hx___subTextures;
HXDLIN( 210)			 ::starling::textures::SubTexture v =  ::starling::textures::SubTexture_obj::__alloc( HX_CTX ,this->_hx___atlasTexture,region,false,frame,rotated,null());
HXDLIN( 210)			( ( ::haxe::ds::StringMap)(this1) )->set(name,v);
            		}
HXLINE( 211)		this->_hx___subTextureNames = null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextureAtlas_obj,addRegion,(void))

void TextureAtlas_obj::removeRegion(::String name){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_216_removeRegion)
HXLINE( 217)		 ::starling::textures::SubTexture subTexture = this->_hx___subTextures->get(name).StaticCast<  ::starling::textures::SubTexture >();
HXLINE( 218)		if (hx::IsNotNull( subTexture )) {
HXLINE( 218)			subTexture->dispose();
            		}
HXLINE( 219)		this->_hx___subTextures->remove(name);
HXLINE( 220)		this->_hx___subTextureNames = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,removeRegion,(void))

 ::starling::textures::Texture TextureAtlas_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_225_get_texture)
HXDLIN( 225)		return this->_hx___atlasTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlas_obj,get_texture,return )

int TextureAtlas_obj::compare(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_234_compare)
HXDLIN( 234)		if ((a < b)) {
HXDLIN( 234)			return (int)-1;
            		}
            		else {
HXDLIN( 234)			if ((a > b)) {
HXDLIN( 234)				return (int)1;
            			}
            			else {
HXDLIN( 234)				return (int)0;
            			}
            		}
HXDLIN( 234)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,compare,return )

 ::openfl::_Vector::AbstractVector TextureAtlas_obj::sNames;

bool TextureAtlas_obj::parseBool(::String value){
            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_231_parseBool)
HXDLIN( 231)		if (hx::IsNotNull( value )) {
HXDLIN( 231)			return (value.toLowerCase() == HX_("true",4e,a7,03,4d));
            		}
            		else {
HXDLIN( 231)			return false;
            		}
HXDLIN( 231)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,parseBool,return )


hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__new( ::starling::textures::Texture texture, ::Xml atlasXml) {
	hx::ObjectPtr< TextureAtlas_obj > __this = new TextureAtlas_obj();
	__this->__construct(texture,atlasXml);
	return __this;
}

hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__alloc(hx::Ctx *_hx_ctx, ::starling::textures::Texture texture, ::Xml atlasXml) {
	TextureAtlas_obj *__this = (TextureAtlas_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextureAtlas_obj), true, "starling.textures.TextureAtlas"));
	*(void **)__this = TextureAtlas_obj::_hx_vtable;
	__this->__construct(texture,atlasXml);
	return __this;
}

TextureAtlas_obj::TextureAtlas_obj()
{
}

void TextureAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlas);
	HX_MARK_MEMBER_NAME(_hx___atlasTexture,"__atlasTexture");
	HX_MARK_MEMBER_NAME(_hx___subTextures,"__subTextures");
	HX_MARK_MEMBER_NAME(_hx___subTextureNames,"__subTextureNames");
	HX_MARK_END_CLASS();
}

void TextureAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___atlasTexture,"__atlasTexture");
	HX_VISIT_MEMBER_NAME(_hx___subTextures,"__subTextures");
	HX_VISIT_MEMBER_NAME(_hx___subTextureNames,"__subTextureNames");
}

hx::Val TextureAtlas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_texture() ); }
		if (HX_FIELD_EQ(inName,"compare") ) { return hx::Val( compare_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getNames") ) { return hx::Val( getNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return hx::Val( getFrame_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return hx::Val( getRegion_dyn() ); }
		if (HX_FIELD_EQ(inName,"addRegion") ) { return hx::Val( addRegion_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTexture") ) { return hx::Val( getTexture_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getXmlFloat") ) { return hx::Val( getXmlFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextures") ) { return hx::Val( getTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRotation") ) { return hx::Val( getRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return hx::Val( get_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeRegion") ) { return hx::Val( removeRegion_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__subTextures") ) { return hx::Val( _hx___subTextures ); }
		if (HX_FIELD_EQ(inName,"parseAtlasXml") ) { return hx::Val( parseAtlasXml_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__atlasTexture") ) { return hx::Val( _hx___atlasTexture ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__subTextureNames") ) { return hx::Val( _hx___subTextureNames ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureAtlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sNames") ) { outValue = ( sNames ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { outValue = parseBool_dyn(); return true; }
	}
	return false;
}

hx::Val TextureAtlas_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__subTextures") ) { _hx___subTextures=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__atlasTexture") ) { _hx___atlasTexture=inValue.Cast<  ::starling::textures::Texture >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__subTextureNames") ) { _hx___subTextureNames=inValue.Cast<  ::openfl::_Vector::AbstractVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureAtlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sNames") ) { sNames=ioValue.Cast<  ::openfl::_Vector::AbstractVector >(); return true; }
	}
	return false;
}

void TextureAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__atlasTexture","\xf0","\x35","\xd0","\x99"));
	outFields->push(HX_HCSTRING("__subTextures","\xb8","\x1d","\x56","\x0e"));
	outFields->push(HX_HCSTRING("__subTextureNames","\x6d","\xa3","\x80","\x74"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextureAtlas_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::starling::textures::Texture*/ ,(int)offsetof(TextureAtlas_obj,_hx___atlasTexture),HX_HCSTRING("__atlasTexture","\xf0","\x35","\xd0","\x99")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TextureAtlas_obj,_hx___subTextures),HX_HCSTRING("__subTextures","\xb8","\x1d","\x56","\x0e")},
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(int)offsetof(TextureAtlas_obj,_hx___subTextureNames),HX_HCSTRING("__subTextureNames","\x6d","\xa3","\x80","\x74")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TextureAtlas_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::AbstractVector*/ ,(void *) &TextureAtlas_obj::sNames,HX_HCSTRING("sNames","\x55","\x7e","\xbc","\x24")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TextureAtlas_obj_sMemberFields[] = {
	HX_HCSTRING("__atlasTexture","\xf0","\x35","\xd0","\x99"),
	HX_HCSTRING("__subTextures","\xb8","\x1d","\x56","\x0e"),
	HX_HCSTRING("__subTextureNames","\x6d","\xa3","\x80","\x74"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("getXmlFloat","\xfb","\xfe","\x8b","\x6e"),
	HX_HCSTRING("parseAtlasXml","\x9f","\x30","\xb6","\x1d"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getTextures","\xee","\xb9","\xc2","\x8b"),
	HX_HCSTRING("getNames","\x52","\x9f","\x5b","\xf6"),
	HX_HCSTRING("getRegion","\x2a","\x4a","\xe3","\x7c"),
	HX_HCSTRING("getFrame","\xb7","\x87","\x5a","\x66"),
	HX_HCSTRING("getRotation","\xf4","\xff","\x79","\x2e"),
	HX_HCSTRING("addRegion","\xf5","\xf5","\xb0","\xb8"),
	HX_HCSTRING("removeRegion","\x58","\x5c","\xba","\x6f"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	::String(null()) };

static void TextureAtlas_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureAtlas_obj::sNames,"sNames");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureAtlas_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureAtlas_obj::sNames,"sNames");
};

#endif

hx::Class TextureAtlas_obj::__mClass;

static ::String TextureAtlas_obj_sStaticFields[] = {
	HX_HCSTRING("sNames","\x55","\x7e","\xbc","\x24"),
	HX_HCSTRING("parseBool","\xfd","\xd5","\xc1","\xc8"),
	::String(null())
};

void TextureAtlas_obj::__register()
{
	hx::Object *dummy = new TextureAtlas_obj;
	TextureAtlas_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.textures.TextureAtlas","\x60","\x39","\x2c","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureAtlas_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureAtlas_obj::__SetStatic;
	__mClass->mMarkFunc = TextureAtlas_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextureAtlas_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextureAtlas_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureAtlas_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureAtlas_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureAtlas_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureAtlas_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextureAtlas_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_965739d152be09aa_78_boot)
HXDLIN(  78)			int length = null();
HXDLIN(  78)			bool fixed = null();
HXDLIN(  78)			return  ::openfl::_Vector::AbstractVector_obj::__alloc( HX_CTX , ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,null()),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_965739d152be09aa_78_boot)
HXDLIN(  78)		sNames =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace starling
} // end namespace textures
