// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_effects_FlxFlicker
#include <flixel/util/FlxPool_flixel_effects_FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_605e85deecbe4d03_194_new,"flixel.effects.FlxFlicker","new",0x4bc826b6,"flixel.effects.FlxFlicker.new","flixel/effects/FlxFlicker.hx",194,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_126_destroy,"flixel.effects.FlxFlicker","destroy",0x34536650,"flixel.effects.FlxFlicker.destroy","flixel/effects/FlxFlicker.hx",126,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_138_start,"flixel.effects.FlxFlicker","start",0xd6028c38,"flixel.effects.FlxFlicker.start","flixel/effects/FlxFlicker.hx",138,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_152_stop,"flixel.effects.FlxFlicker","stop",0x06b324ec,"flixel.effects.FlxFlicker.stop","flixel/effects/FlxFlicker.hx",152,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_162_release,"flixel.effects.FlxFlicker","release",0x68babf1d,"flixel.effects.FlxFlicker.release","flixel/effects/FlxFlicker.hx",162,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_171_flickerProgress,"flixel.effects.FlxFlicker","flickerProgress",0x5258c61b,"flixel.effects.FlxFlicker.flickerProgress","flixel/effects/FlxFlicker.hx",171,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_39_flicker,"flixel.effects.FlxFlicker","flicker",0x86ba144e,"flixel.effects.FlxFlicker.flicker","flixel/effects/FlxFlicker.hx",39,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_70_isFlickering,"flixel.effects.FlxFlicker","isFlickering",0x76c8b45e,"flixel.effects.FlxFlicker.isFlickering","flixel/effects/FlxFlicker.hx",70,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_79_stopFlickering,"flixel.effects.FlxFlicker","stopFlickering",0xf09864f6,"flixel.effects.FlxFlicker.stopFlickering","flixel/effects/FlxFlicker.hx",79,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_15_boot,"flixel.effects.FlxFlicker","boot",0xfb72b91c,"flixel.effects.FlxFlicker.boot","flixel/effects/FlxFlicker.hx",15,0x4fa53f38)
HX_LOCAL_STACK_FRAME(_hx_pos_605e85deecbe4d03_20_boot,"flixel.effects.FlxFlicker","boot",0xfb72b91c,"flixel.effects.FlxFlicker.boot","flixel/effects/FlxFlicker.hx",20,0x4fa53f38)
namespace flixel{
namespace effects{

void FlxFlicker_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_194_new)
            	}

Dynamic FlxFlicker_obj::__CreateEmpty() { return new FlxFlicker_obj; }

void *FlxFlicker_obj::_hx_vtable = 0;

Dynamic FlxFlicker_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxFlicker_obj > _hx_result = new FlxFlicker_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFlicker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57ce74ac;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_effects_FlxFlicker__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::effects::FlxFlicker_obj::destroy,
};

void *FlxFlicker_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_effects_FlxFlicker__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFlicker_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_126_destroy)
HXLINE( 127)		this->object = null();
HXLINE( 128)		this->timer = null();
HXLINE( 129)		this->completionCallback = null();
HXLINE( 130)		this->progressCallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFlicker_obj,destroy,(void))

void FlxFlicker_obj::start( ::flixel::FlxObject Object,Float Duration,Float Interval,bool EndVisibility, ::Dynamic CompletionCallback, ::Dynamic ProgressCallback){
            	HX_GC_STACKFRAME(&_hx_pos_605e85deecbe4d03_138_start)
HXLINE( 139)		this->object = Object;
HXLINE( 140)		this->duration = Duration;
HXLINE( 141)		this->interval = Interval;
HXLINE( 142)		this->completionCallback = CompletionCallback;
HXLINE( 143)		this->progressCallback = ProgressCallback;
HXLINE( 144)		this->endVisibility = EndVisibility;
HXLINE( 145)		 ::flixel::util::FlxTimer _hx_tmp =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXDLIN( 145)		Float _hx_tmp1 = this->interval;
HXDLIN( 145)		this->timer = _hx_tmp->start(_hx_tmp1,this->flickerProgress_dyn(),::Std_obj::_hx_int(((Float)this->duration / (Float)this->interval)));
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxFlicker_obj,start,(void))

void FlxFlicker_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_152_stop)
HXLINE( 153)		this->timer->cancel();
HXLINE( 154)		this->object->set_visible(true);
HXLINE( 155)		this->release();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFlicker_obj,stop,(void))

void FlxFlicker_obj::release(){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_162_release)
HXLINE( 163)		::flixel::effects::FlxFlicker_obj::_boundObjects->remove(this->object);
HXLINE( 164)		::flixel::effects::FlxFlicker_obj::_pool->put(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFlicker_obj,release,(void))

void FlxFlicker_obj::flickerProgress( ::flixel::util::FlxTimer Timer){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_171_flickerProgress)
HXLINE( 172)		this->object->set_visible(!(this->object->visible));
HXLINE( 174)		if (hx::IsNotNull( this->progressCallback )) {
HXLINE( 176)			this->progressCallback(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 179)		bool _hx_tmp;
HXDLIN( 179)		if ((Timer->loops > (int)0)) {
HXLINE( 179)			_hx_tmp = ((Timer->loops - Timer->_loopsCounter) == (int)0);
            		}
            		else {
HXLINE( 179)			_hx_tmp = false;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 181)			this->object->set_visible(this->endVisibility);
HXLINE( 182)			if (hx::IsNotNull( this->completionCallback )) {
HXLINE( 184)				this->completionCallback(hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 186)			this->release();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFlicker_obj,flickerProgress,(void))

 ::flixel::util::FlxPool_flixel_effects_FlxFlicker FlxFlicker_obj::_pool;

 ::haxe::ds::ObjectMap FlxFlicker_obj::_boundObjects;

 ::flixel::effects::FlxFlicker FlxFlicker_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart, ::Dynamic CompletionCallback, ::Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(((Float)0.04));
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_39_flicker)
HXLINE(  40)		if (::flixel::effects::FlxFlicker_obj::isFlickering(Object)) {
HXLINE(  42)			if (ForceRestart) {
HXLINE(  44)				::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
            			}
            			else {
HXLINE(  49)				return ::flixel::effects::FlxFlicker_obj::_boundObjects->get(Object).StaticCast<  ::flixel::effects::FlxFlicker >();
            			}
            		}
HXLINE(  53)		if ((Interval <= (int)0)) {
HXLINE(  55)			Interval = ::flixel::FlxG_obj::elapsed;
            		}
HXLINE(  58)		 ::flixel::effects::FlxFlicker flicker = ::flixel::effects::FlxFlicker_obj::_pool->get();
HXLINE(  59)		flicker->start(Object,Duration,Interval,EndVisibility,CompletionCallback,ProgressCallback);
HXLINE(  60)		::flixel::effects::FlxFlicker_obj::_boundObjects->set(Object,flicker);
HXDLIN(  60)		return flicker;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxFlicker_obj,flicker,return )

bool FlxFlicker_obj::isFlickering( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_70_isFlickering)
HXDLIN(  70)		return ::flixel::effects::FlxFlicker_obj::_boundObjects->exists(Object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFlicker_obj,isFlickering,return )

void FlxFlicker_obj::stopFlickering( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_605e85deecbe4d03_79_stopFlickering)
HXLINE(  80)		 ::flixel::effects::FlxFlicker boundFlicker = ::flixel::effects::FlxFlicker_obj::_boundObjects->get(Object).StaticCast<  ::flixel::effects::FlxFlicker >();
HXLINE(  81)		if (hx::IsNotNull( boundFlicker )) {
HXLINE(  83)			boundFlicker->stop();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFlicker_obj,stopFlickering,(void))


hx::ObjectPtr< FlxFlicker_obj > FlxFlicker_obj::__new() {
	hx::ObjectPtr< FlxFlicker_obj > __this = new FlxFlicker_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxFlicker_obj > FlxFlicker_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxFlicker_obj *__this = (FlxFlicker_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxFlicker_obj), true, "flixel.effects.FlxFlicker"));
	*(void **)__this = FlxFlicker_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFlicker_obj::FlxFlicker_obj()
{
}

void FlxFlicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFlicker);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(endVisibility,"endVisibility");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(completionCallback,"completionCallback");
	HX_MARK_MEMBER_NAME(progressCallback,"progressCallback");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(interval,"interval");
	HX_MARK_END_CLASS();
}

void FlxFlicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(endVisibility,"endVisibility");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(completionCallback,"completionCallback");
	HX_VISIT_MEMBER_NAME(progressCallback,"progressCallback");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(interval,"interval");
}

hx::Val FlxFlicker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return hx::Val( timer ); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return hx::Val( object ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"interval") ) { return hx::Val( interval ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"endVisibility") ) { return hx::Val( endVisibility ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flickerProgress") ) { return hx::Val( flickerProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressCallback") ) { return hx::Val( progressCallback ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"completionCallback") ) { return hx::Val( completionCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFlicker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flicker") ) { outValue = flicker_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isFlickering") ) { outValue = isFlickering_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_boundObjects") ) { outValue = ( _boundObjects ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { outValue = stopFlickering_dyn(); return true; }
	}
	return false;
}

hx::Val FlxFlicker_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interval") ) { interval=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"endVisibility") ) { endVisibility=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressCallback") ) { progressCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"completionCallback") ) { completionCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxFlicker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::flixel::util::FlxPool_flixel_effects_FlxFlicker >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_boundObjects") ) { _boundObjects=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void FlxFlicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("endVisibility","\x8d","\x35","\xd3","\xe5"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("interval","\x45","\x79","\x7c","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxFlicker_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxFlicker_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsBool,(int)offsetof(FlxFlicker_obj,endVisibility),HX_HCSTRING("endVisibility","\x8d","\x35","\xd3","\xe5")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(FlxFlicker_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxFlicker_obj,completionCallback),HX_HCSTRING("completionCallback","\x01","\x9d","\xba","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxFlicker_obj,progressCallback),HX_HCSTRING("progressCallback","\x92","\x42","\x56","\x92")},
	{hx::fsFloat,(int)offsetof(FlxFlicker_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsFloat,(int)offsetof(FlxFlicker_obj,interval),HX_HCSTRING("interval","\x45","\x79","\x7c","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxFlicker_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool_flixel_effects_FlxFlicker*/ ,(void *) &FlxFlicker_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &FlxFlicker_obj::_boundObjects,HX_HCSTRING("_boundObjects","\x15","\x17","\x40","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxFlicker_obj_sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("endVisibility","\x8d","\x35","\xd3","\xe5"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("completionCallback","\x01","\x9d","\xba","\x8a"),
	HX_HCSTRING("progressCallback","\x92","\x42","\x56","\x92"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("interval","\x45","\x79","\x7c","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("flickerProgress","\xc5","\x46","\x11","\x90"),
	::String(null()) };

static void FlxFlicker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFlicker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxFlicker_obj::_pool,"_pool");
	HX_MARK_MEMBER_NAME(FlxFlicker_obj::_boundObjects,"_boundObjects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFlicker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFlicker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFlicker_obj::_pool,"_pool");
	HX_VISIT_MEMBER_NAME(FlxFlicker_obj::_boundObjects,"_boundObjects");
};

#endif

hx::Class FlxFlicker_obj::__mClass;

static ::String FlxFlicker_obj_sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_boundObjects","\x15","\x17","\x40","\x1b"),
	HX_HCSTRING("flicker","\xf8","\xda","\xec","\x76"),
	HX_HCSTRING("isFlickering","\x74","\x85","\x73","\x33"),
	HX_HCSTRING("stopFlickering","\x8c","\x27","\x6a","\x4a"),
	::String(null())
};

void FlxFlicker_obj::__register()
{
	hx::Object *dummy = new FlxFlicker_obj;
	FlxFlicker_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.FlxFlicker","\xc4","\x53","\xdd","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFlicker_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxFlicker_obj::__SetStatic;
	__mClass->mMarkFunc = FlxFlicker_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxFlicker_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxFlicker_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFlicker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFlicker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFlicker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFlicker_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxFlicker_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_605e85deecbe4d03_15_boot)
HXDLIN(  15)		_pool =  ::flixel::util::FlxPool_flixel_effects_FlxFlicker_obj::__alloc( HX_CTX ,hx::ClassOf< ::flixel::effects::FlxFlicker >());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_605e85deecbe4d03_20_boot)
HXDLIN(  20)		_boundObjects =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace flixel
} // end namespace effects
