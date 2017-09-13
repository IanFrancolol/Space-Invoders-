// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_text_Font
#define INCLUDED_openfl__legacy_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontStyle)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontType)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)

namespace openfl{
namespace _legacy{
namespace text{


class HXCPP_CLASS_ATTRIBUTES Font_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();

	public:
		enum { _hx_ClassId = 0x67f42b74 };

		void __construct(::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.text.Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.text.Font"); }
		static hx::ObjectPtr< Font_obj > __new(::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type);
		static hx::ObjectPtr< Font_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

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
		::String __ToString() const { return HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"); }

		static void __boot();
		static ::Array< ::Dynamic> _hx___registeredFonts;
		static ::Array< ::Dynamic> _hx___deviceFonts;
		static ::Array< ::Dynamic> enumerateFonts(hx::Null< bool >  enumerateDeviceFonts);
		static ::Dynamic enumerateFonts_dyn();

		static  ::openfl::_legacy::text::Font fromBytes( ::openfl::_legacy::utils::ByteArray bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::_legacy::text::Font fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::Dynamic load(::String filename);
		static ::Dynamic load_dyn();

		static  ::Dynamic loadBytes( ::openfl::_legacy::utils::ByteArray bytes);
		static ::Dynamic loadBytes_dyn();

		static void registerFont(hx::Class font);
		static ::Dynamic registerFont_dyn();

		static  ::Dynamic freetype_import_font;
		static Dynamic freetype_import_font_dyn() { return freetype_import_font;}
		static  ::Dynamic lime_font_register_font;
		static Dynamic lime_font_register_font_dyn() { return lime_font_register_font;}
		static  ::Dynamic lime_font_iterate_device_fonts;
		static Dynamic lime_font_iterate_device_fonts_dyn() { return lime_font_iterate_device_fonts;}
		::String fontName;
		 ::openfl::_legacy::text::FontStyle fontStyle;
		 ::openfl::_legacy::text::FontType fontType;
		::String _hx___fontPath;
		virtual ::String toString();
		::Dynamic toString_dyn();

		void _hx___fromBytes( ::openfl::_legacy::utils::ByteArray bytes);
		::Dynamic _hx___fromBytes_dyn();

		void _hx___fromFile(::String path);
		::Dynamic _hx___fromFile_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_Font */ 
