// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_Sampler
#include <openfl/utils/_AGALMiniAssembler/Sampler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9a9f6c797ee2962_967_new,"openfl.utils._AGALMiniAssembler.Sampler","new",0x5dee1f60,"openfl.utils._AGALMiniAssembler.Sampler.new","openfl/utils/AGALMiniAssembler.hx",967,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a9f6c797ee2962_978_toString,"openfl.utils._AGALMiniAssembler.Sampler","toString",0x7e1621ac,"openfl.utils._AGALMiniAssembler.Sampler.toString","openfl/utils/AGALMiniAssembler.hx",978,0x125eff83)
namespace openfl{
namespace utils{
namespace _AGALMiniAssembler{

void Sampler_obj::__construct(::String name,int flag,int mask){
            	HX_STACKFRAME(&_hx_pos_f9a9f6c797ee2962_967_new)
HXLINE( 969)		this->name = name;
HXLINE( 970)		this->flag = flag;
HXLINE( 971)		this->mask = mask;
            	}

Dynamic Sampler_obj::__CreateEmpty() { return new Sampler_obj; }

void *Sampler_obj::_hx_vtable = 0;

Dynamic Sampler_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sampler_obj > _hx_result = new Sampler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Sampler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ee4638e;
}

::String Sampler_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_f9a9f6c797ee2962_978_toString)
HXDLIN( 978)		::String _hx_tmp = ((HX_("[Sampler name=\"",23,b2,ab,02) + this->name) + HX_("\", flag=\"",87,eb,83,43));
HXDLIN( 978)		int _hx_int = this->flag;
HXDLIN( 978)		Float _hx_tmp1;
HXDLIN( 978)		if ((_hx_int < (int)0)) {
HXDLIN( 978)			_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXDLIN( 978)			_hx_tmp1 = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 978)		::String _hx_tmp2 = ((_hx_tmp + ::Std_obj::string(_hx_tmp1)) + HX_("\", mask=",fb,aa,f1,8c));
HXDLIN( 978)		int int1 = this->mask;
HXDLIN( 978)		Float _hx_tmp3;
HXDLIN( 978)		if ((int1 < (int)0)) {
HXDLIN( 978)			_hx_tmp3 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXDLIN( 978)			_hx_tmp3 = (int1 + ((Float)0.0));
            		}
HXDLIN( 978)		return ((_hx_tmp2 + ::Std_obj::string(_hx_tmp3)) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sampler_obj,toString,return )


hx::ObjectPtr< Sampler_obj > Sampler_obj::__new(::String name,int flag,int mask) {
	hx::ObjectPtr< Sampler_obj > __this = new Sampler_obj();
	__this->__construct(name,flag,mask);
	return __this;
}

hx::ObjectPtr< Sampler_obj > Sampler_obj::__alloc(hx::Ctx *_hx_ctx,::String name,int flag,int mask) {
	Sampler_obj *__this = (Sampler_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sampler_obj), true, "openfl.utils._AGALMiniAssembler.Sampler"));
	*(void **)__this = Sampler_obj::_hx_vtable;
	__this->__construct(name,flag,mask);
	return __this;
}

Sampler_obj::Sampler_obj()
{
}

void Sampler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sampler);
	HX_MARK_MEMBER_NAME(flag,"flag");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Sampler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flag,"flag");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(name,"name");
}

hx::Val Sampler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { return hx::Val( flag ); }
		if (HX_FIELD_EQ(inName,"mask") ) { return hx::Val( mask ); }
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Sampler_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sampler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sampler_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sampler_obj,flag),HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43")},
	{hx::fsInt,(int)offsetof(Sampler_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsString,(int)offsetof(Sampler_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Sampler_obj_sStaticStorageInfo = 0;
#endif

static ::String Sampler_obj_sMemberFields[] = {
	HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Sampler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sampler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sampler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sampler_obj::__mClass,"__mClass");
};

#endif

hx::Class Sampler_obj::__mClass;

void Sampler_obj::__register()
{
	hx::Object *dummy = new Sampler_obj;
	Sampler_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._AGALMiniAssembler.Sampler","\x6e","\x2f","\x5b","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sampler_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sampler_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sampler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sampler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sampler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sampler_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _AGALMiniAssembler
