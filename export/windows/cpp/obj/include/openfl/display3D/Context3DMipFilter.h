// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#define INCLUDED_openfl_display3D_Context3DMipFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display3D,Context3DMipFilter)
namespace openfl{
namespace display3D{


class Context3DMipFilter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DMipFilter_obj OBJ_;

	public:
		Context3DMipFilter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.display3D.Context3DMipFilter","\xc5","\x7f","\xde","\xaf"); }
		::String __ToString() const { return HX_HCSTRING("Context3DMipFilter.","\xa2","\xe2","\x60","\x02") + _hx_tag; }

		static ::openfl::display3D::Context3DMipFilter MIPLINEAR;
		static inline ::openfl::display3D::Context3DMipFilter MIPLINEAR_dyn() { return MIPLINEAR; }
		static ::openfl::display3D::Context3DMipFilter MIPNEAREST;
		static inline ::openfl::display3D::Context3DMipFilter MIPNEAREST_dyn() { return MIPNEAREST; }
		static ::openfl::display3D::Context3DMipFilter MIPNONE;
		static inline ::openfl::display3D::Context3DMipFilter MIPNONE_dyn() { return MIPNONE; }
};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3DMipFilter */ 
