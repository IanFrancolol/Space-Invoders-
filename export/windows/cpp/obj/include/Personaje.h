// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_Personaje
#define INCLUDED_Personaje

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Bala)
HX_DECLARE_CLASS0(Personaje)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Personaje_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Personaje_obj OBJ_;
		Personaje_obj();

	public:
		enum { _hx_ClassId = 0x2e6b0ac7 };

		void __construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Personaje")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Personaje"); }
		static hx::ObjectPtr< Personaje_obj > __new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static hx::ObjectPtr< Personaje_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Personaje_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Personaje","\xc7","\x0a","\x6b","\x2e"); }

		 ::Bala bala;
		bool checkDisparo;
		void update(Float elapsed);

		void movimiento();
		::Dynamic movimiento_dyn();

		void checkLimite();
		::Dynamic checkLimite_dyn();

		void Disparar();
		::Dynamic Disparar_dyn();

};


#endif /* INCLUDED_Personaje */ 