// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec176ad5364e3b7b_10_new,"openfl._legacy.gl.GLProgram","new",0x97cecb2c,"openfl._legacy.gl.GLProgram.new","openfl/_legacy/gl/GLProgram.hx",10,0x0da94483)
HX_LOCAL_STACK_FRAME(_hx_pos_ec176ad5364e3b7b_20_attach,"openfl._legacy.gl.GLProgram","attach",0x7704c879,"openfl._legacy.gl.GLProgram.attach","openfl/_legacy/gl/GLProgram.hx",20,0x0da94483)
HX_LOCAL_STACK_FRAME(_hx_pos_ec176ad5364e3b7b_27_getShaders,"openfl._legacy.gl.GLProgram","getShaders",0x32533e6c,"openfl._legacy.gl.GLProgram.getShaders","openfl/_legacy/gl/GLProgram.hx",27,0x0da94483)
HX_LOCAL_STACK_FRAME(_hx_pos_ec176ad5364e3b7b_34_getType,"openfl._legacy.gl.GLProgram","getType",0x9ec9f33c,"openfl._legacy.gl.GLProgram.getType","openfl/_legacy/gl/GLProgram.hx",34,0x0da94483)
namespace openfl{
namespace _legacy{
namespace gl{

void GLProgram_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_ec176ad5364e3b7b_10_new)
HXLINE(  12)		super::__construct(version,id);
HXLINE(  13)		this->shaders = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic GLProgram_obj::__CreateEmpty() { return new GLProgram_obj; }

void *GLProgram_obj::_hx_vtable = 0;

Dynamic GLProgram_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLProgram_obj > _hx_result = new GLProgram_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLProgram_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ef17041) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2ef17041;
	} else {
		return inClassId==(int)0x55faaac2;
	}
}

void GLProgram_obj::attach( ::openfl::_legacy::gl::GLShader shader){
            	HX_STACKFRAME(&_hx_pos_ec176ad5364e3b7b_20_attach)
HXDLIN(  20)		this->shaders->push(shader);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLProgram_obj,attach,(void))

::Array< ::Dynamic> GLProgram_obj::getShaders(){
            	HX_STACKFRAME(&_hx_pos_ec176ad5364e3b7b_27_getShaders)
HXDLIN(  27)		return this->shaders->copy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLProgram_obj,getShaders,return )

::String GLProgram_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_ec176ad5364e3b7b_34_getType)
HXDLIN(  34)		return HX_("Program",64,72,4a,c1);
            	}



hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLProgram_obj > __this = new GLProgram_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLProgram_obj *__this = (GLProgram_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLProgram_obj), true, "openfl._legacy.gl.GLProgram"));
	*(void **)__this = GLProgram_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLProgram_obj::GLProgram_obj()
{
}

void GLProgram_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLProgram);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	 ::openfl::_legacy::gl::GLObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLProgram_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	 ::openfl::_legacy::gl::GLObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLProgram_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return hx::Val( attach_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return hx::Val( shaders ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShaders") ) { return hx::Val( getShaders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLProgram_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLProgram_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLProgram_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLProgram_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLProgram_obj_sStaticStorageInfo = 0;
#endif

static ::String GLProgram_obj_sMemberFields[] = {
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("getShaders","\xb8","\x07","\xe8","\xae"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLProgram_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLProgram_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#endif

hx::Class GLProgram_obj::__mClass;

void GLProgram_obj::__register()
{
	hx::Object *dummy = new GLProgram_obj;
	GLProgram_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLProgram","\x3a","\x05","\x6f","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLProgram_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLProgram_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLProgram_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLProgram_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
