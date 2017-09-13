// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#define INCLUDED_flixel_system_frontEnds_SoundFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSoundGroup)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,SoundFrontEnd)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES SoundFrontEnd_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SoundFrontEnd_obj OBJ_;
		SoundFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x6fb763eb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.SoundFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.SoundFrontEnd"); }
		static hx::ObjectPtr< SoundFrontEnd_obj > __new();
		static hx::ObjectPtr< SoundFrontEnd_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundFrontEnd_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SoundFrontEnd","\x81","\x32","\x49","\x38"); }

		 ::flixel::_hx_system::FlxSound music;
		bool muted;
		 ::Dynamic volumeHandler;
		Dynamic volumeHandler_dyn() { return volumeHandler;}
		::Array< int > volumeUpKeys;
		::Array< int > volumeDownKeys;
		::Array< int > muteKeys;
		bool soundTrayEnabled;
		 ::flixel::_hx_system::FlxSoundGroup defaultMusicGroup;
		 ::flixel::_hx_system::FlxSoundGroup defaultSoundGroup;
		 ::flixel::group::FlxTypedGroup list;
		Float volume;
		void playMusic( ::Dynamic Music,hx::Null< Float >  Volume,hx::Null< bool >  Looped, ::flixel::_hx_system::FlxSoundGroup Group);
		::Dynamic playMusic_dyn();

		 ::flixel::_hx_system::FlxSound load( ::Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped, ::flixel::_hx_system::FlxSoundGroup Group,hx::Null< bool >  AutoDestroy,hx::Null< bool >  AutoPlay,::String URL, ::Dynamic OnComplete);
		::Dynamic load_dyn();

		 ::openfl::_legacy::media::Sound cache(::String EmbeddedSound);
		::Dynamic cache_dyn();

		void cacheAll();
		::Dynamic cacheAll_dyn();

		 ::flixel::_hx_system::FlxSound play( ::Dynamic EmbeddedSound,hx::Null< Float >  Volume,hx::Null< bool >  Looped, ::flixel::_hx_system::FlxSoundGroup Group,hx::Null< bool >  AutoDestroy, ::Dynamic OnComplete);
		::Dynamic play_dyn();

		 ::flixel::_hx_system::FlxSound stream(::String URL,hx::Null< Float >  Volume,hx::Null< bool >  Looped, ::flixel::_hx_system::FlxSoundGroup Group,hx::Null< bool >  AutoDestroy, ::Dynamic OnComplete);
		::Dynamic stream_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void destroy(hx::Null< bool >  ForceDestroy);
		::Dynamic destroy_dyn();

		void toggleMuted();
		::Dynamic toggleMuted_dyn();

		void changeVolume(Float Amount);
		::Dynamic changeVolume_dyn();

		void showSoundTray();
		::Dynamic showSoundTray_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void loadSavedPrefs();
		::Dynamic loadSavedPrefs_dyn();

		Float set_volume(Float Volume);
		::Dynamic set_volume_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_SoundFrontEnd */ 
