// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#define INCLUDED_openfl__legacy_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES IBitmapDrawable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx__hx___drawToSurface)( ::Dynamic surface, ::openfl::_legacy::geom::Matrix matrix, ::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode, ::openfl::_legacy::geom::Rectangle clipRect,bool smoothing); 
		static inline void _hx___drawToSurface( ::Dynamic _hx_, ::Dynamic surface, ::openfl::_legacy::geom::Matrix matrix, ::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode, ::openfl::_legacy::geom::Rectangle clipRect,bool smoothing) {
			(_hx_.mPtr->*( static_cast< ::openfl::_legacy::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0x87325dec)))->_hx__hx___drawToSurface)(surface,matrix,colorTransform,blendMode,clipRect,smoothing);
		}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_IBitmapDrawable */ 
