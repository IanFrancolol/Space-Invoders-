// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_24_new,"openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",24,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_58_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",58,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_65_uploadFromBitmapData,"openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",65,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_97_uploadFromByteArray,"openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",97,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_120_uploadFromUInt8Array,"openfl.display3D.textures.Texture","uploadFromUInt8Array",0xb98d8296,"openfl.display3D.textures.Texture.uploadFromUInt8Array","openfl/display3D/textures/Texture.hx",120,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_18_boot,"openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",18,0x3ee19dbf)
namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_24_new)
HXLINE(  26)		this->optimizeForRenderToTexture = optimize;
HXLINE(  28)		this->mipmapsGenerated = false;
HXLINE(  30)		if ((::openfl::display3D::textures::Texture_obj::internalFormat == (int)-1)) {
HXLINE(  34)			::openfl::display3D::textures::Texture_obj::internalFormat = (int)6408;
            		}
HXLINE(  42)		super::__construct(context,glTexture,width,height);
HXLINE(  45)		if (this->optimizeForRenderToTexture) {
HXLINE(  47)			::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
HXLINE(  48)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
HXLINE(  49)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
HXLINE(  50)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
HXLINE(  51)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
            		}
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fad1a24) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x1fad1a24;
		}
	} else {
		return inClassId==(int)0x25b00754;
	}
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_58_uploadCompressedTextureFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_65_uploadFromBitmapData)
HXLINE(  69)		int rgbaData = bitmapData->get_width();
HXDLIN(  69)		int rgbaData1 = bitmapData->get_height();
HXDLIN(  69)		 ::openfl::_legacy::display::BitmapData rgbaData2 =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,rgbaData,rgbaData1,bitmapData->get_transparent(),null(),null());
HXDLIN(  69)		 ::openfl::_legacy::geom::Rectangle rect = bitmapData->get_rect();
HXDLIN(  69)		 ::openfl::_legacy::geom::Point point =  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  69)		rgbaData2->copyChannel(bitmapData,rect,point,(int)2,(int)1);
HXDLIN(  69)		rgbaData2->copyChannel(bitmapData,rect,point,(int)4,(int)2);
HXDLIN(  69)		rgbaData2->copyChannel(bitmapData,rect,point,(int)8,(int)4);
HXDLIN(  69)		rgbaData2->copyChannel(bitmapData,rect,point,(int)1,(int)8);
HXDLIN(  69)		 ::openfl::_legacy::utils::ByteArray pixels = rgbaData2->getPixels(rect);
HXLINE(  71)		this->width = bitmapData->get_width();
HXLINE(  72)		this->height = bitmapData->get_height();
HXLINE(  74)		this->uploadFromByteArray(pixels,(int)0,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_97_uploadFromByteArray)
HXLINE( 112)		 ::openfl::_legacy::utils::UInt8Array source =  ::openfl::_legacy::utils::UInt8Array_obj::__alloc( HX_CTX ,data,null(),null());
HXLINE( 115)		this->uploadFromUInt8Array(source,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromUInt8Array( ::openfl::_legacy::utils::UInt8Array data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_120_uploadFromUInt8Array)
HXLINE( 122)		{
HXLINE( 122)			 ::openfl::_legacy::gl::GLTexture texture = this->glTexture;
HXDLIN( 122)			 ::Dynamic _hx_tmp;
HXDLIN( 122)			if (hx::IsNull( texture )) {
HXLINE( 122)				_hx_tmp = null();
            			}
            			else {
HXLINE( 122)				_hx_tmp = texture->id;
            			}
HXDLIN( 122)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,_hx_tmp);
            		}
HXLINE( 124)		if (this->optimizeForRenderToTexture) {
HXLINE( 126)			::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
HXLINE( 127)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
HXLINE( 128)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
HXLINE( 129)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
HXLINE( 130)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
            		}
HXLINE( 134)		{
HXLINE( 134)			int internalformat = ::openfl::display3D::textures::Texture_obj::internalFormat;
HXDLIN( 134)			int width = this->width;
HXDLIN( 134)			int height = this->height;
HXDLIN( 134)			int format = ::openfl::display3D::textures::Texture_obj::internalFormat;
HXDLIN( 134)			 ::Dynamic _hx_tmp1 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN( 134)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2;
HXDLIN( 134)			if (hx::IsNull( data )) {
HXLINE( 134)				_hx_tmp2 = null();
            			}
            			else {
HXLINE( 134)				_hx_tmp2 = data->getByteBuffer();
            			}
HXDLIN( 134)			 ::Dynamic _hx_tmp3;
HXDLIN( 134)			if (hx::IsNull( data )) {
HXLINE( 134)				_hx_tmp3 = null();
            			}
            			else {
HXLINE( 134)				_hx_tmp3 = data->getStart();
            			}
HXDLIN( 134)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,miplevel,internalformat,width,height,(int)0,format,(int)5121,_hx_tmp2,_hx_tmp3);
            		}
HXLINE( 135)		::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromUInt8Array,(void))

int Texture_obj::internalFormat;


hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height) {
	hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(context,glTexture,optimize,width,height);
	return __this;
}

hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height) {
	Texture_obj *__this = (Texture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "openfl.display3D.textures.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(context,glTexture,optimize,width,height);
	return __this;
}

Texture_obj::Texture_obj()
{
}

hx::Val Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return hx::Val( mipmapsGenerated ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromUInt8Array") ) { return hx::Val( uploadFromUInt8Array_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return hx::Val( optimizeForRenderToTexture ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"internalFormat") ) { outValue = ( internalFormat ); return true; }
	}
	return false;
}

hx::Val Texture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"internalFormat") ) { internalFormat=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	outFields->push(HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Texture_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Texture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{hx::fsBool,(int)offsetof(Texture_obj,mipmapsGenerated),HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Texture_obj::internalFormat,HX_HCSTRING("internalFormat","\x54","\xf6","\x7d","\x22")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromUInt8Array","\x26","\x75","\xa4","\x6a"),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::internalFormat,"internalFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::internalFormat,"internalFormat");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_HCSTRING("internalFormat","\x54","\xf6","\x7d","\x22"),
	::String(null())
};

void Texture_obj::__register()
{
	hx::Object *dummy = new Texture_obj;
	Texture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_18_boot)
HXDLIN(  18)		internalFormat = (int)-1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
