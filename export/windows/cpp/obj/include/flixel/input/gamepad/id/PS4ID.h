// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#define INCLUDED_flixel_input_gamepad_id_PS4ID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,PS4ID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES PS4ID_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PS4ID_obj OBJ_;
		PS4ID_obj();

	public:
		enum { _hx_ClassId = 0x4e665c1e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.PS4ID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.PS4ID"); }

		hx::ObjectPtr< PS4ID_obj > __new() {
			hx::ObjectPtr< PS4ID_obj > __this = new PS4ID_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< PS4ID_obj > __alloc(hx::Ctx *_hx_ctx) {
			PS4ID_obj *__this = (PS4ID_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PS4ID_obj), false, "flixel.input.gamepad.id.PS4ID"));
			*(void **)__this = PS4ID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PS4ID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PS4ID","\xec","\xd2","\x12","\x47"); }

		static void __boot();
		static int SQUARE;
		static int X;
		static int CIRCLE;
		static int TRIANGLE;
		static int L1;
		static int R1;
		static int SHARE;
		static int OPTIONS;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int PS;
		static int TOUCHPAD_CLICK;
		static int L2;
		static int R2;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int DPAD_DOWN;
		static int DPAD_UP;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_PS4ID */ 
