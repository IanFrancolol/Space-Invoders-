// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b09527e17bebd012_14_new,"openfl.events.ProgressEvent","new",0xeed66288,"openfl.events.ProgressEvent.new","openfl/events/ProgressEvent.hx",14,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_24_clone,"openfl.events.ProgressEvent","clone",0xca4c7f85,"openfl.events.ProgressEvent.clone","openfl/events/ProgressEvent.hx",24,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_39_toString,"openfl.events.ProgressEvent","toString",0x8ba16d84,"openfl.events.ProgressEvent.toString","openfl/events/ProgressEvent.hx",39,0xea3bf808)
static const ::String _hx_array_data_cbc8be96_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("bytesLoaded",d0,66,ca,99),HX_("bytesTotal",59,57,da,45),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_7_boot,"openfl.events.ProgressEvent","boot",0x04d8d50a,"openfl.events.ProgressEvent.boot","openfl/events/ProgressEvent.hx",7,0xea3bf808)
HX_LOCAL_STACK_FRAME(_hx_pos_b09527e17bebd012_8_boot,"openfl.events.ProgressEvent","boot",0x04d8d50a,"openfl.events.ProgressEvent.boot","openfl/events/ProgressEvent.hx",8,0xea3bf808)
namespace openfl{
namespace events{

void ProgressEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
Float bytesLoaded = __o_bytesLoaded.Default(0);
Float bytesTotal = __o_bytesTotal.Default(0);
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_14_new)
HXLINE(  16)		super::__construct(type,bubbles,cancelable);
HXLINE(  18)		this->bytesLoaded = bytesLoaded;
HXLINE(  19)		this->bytesTotal = bytesTotal;
            	}

Dynamic ProgressEvent_obj::__CreateEmpty() { return new ProgressEvent_obj; }

void *ProgressEvent_obj::_hx_vtable = 0;

Dynamic ProgressEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProgressEvent_obj > _hx_result = new ProgressEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ProgressEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd3a6b1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd3a6b1;
	} else {
		return inClassId==(int)0x64ebab04;
	}
}

 ::openfl::_legacy::events::Event ProgressEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b09527e17bebd012_24_clone)
HXLINE(  26)		::String event = this->get_type();
HXDLIN(  26)		bool event1 = this->get_bubbles();
HXDLIN(  26)		bool event2 = this->get_cancelable();
HXDLIN(  26)		 ::openfl::events::ProgressEvent event3 =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,event,event1,event2,this->bytesLoaded,this->bytesTotal);
HXLINE(  27)		event3->set_target(this->get_target());
HXLINE(  28)		event3->set_currentTarget(this->get_currentTarget());
HXLINE(  32)		return event3;
            	}


::String ProgressEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_39_toString)
HXDLIN(  39)		return this->_hx___formatToString(HX_("ProgressEvent",0d,9d,55,84),::Array_obj< ::String >::fromData( _hx_array_data_cbc8be96_3,5));
            	}


::String ProgressEvent_obj::PROGRESS;

::String ProgressEvent_obj::SOCKET_DATA;


hx::ObjectPtr< ProgressEvent_obj > ProgressEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal) {
	hx::ObjectPtr< ProgressEvent_obj > __this = new ProgressEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
	return __this;
}

hx::ObjectPtr< ProgressEvent_obj > ProgressEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal) {
	ProgressEvent_obj *__this = (ProgressEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ProgressEvent_obj), true, "openfl.events.ProgressEvent"));
	*(void **)__this = ProgressEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
	return __this;
}

ProgressEvent_obj::ProgressEvent_obj()
{
}

hx::Val ProgressEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ProgressEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ProgressEvent_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ProgressEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ProgressEvent_obj::PROGRESS,HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf")},
	{hx::fsString,(void *) &ProgressEvent_obj::SOCKET_DATA,HX_HCSTRING("SOCKET_DATA","\x76","\x39","\x86","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ProgressEvent_obj_sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void ProgressEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProgressEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
};

#endif

hx::Class ProgressEvent_obj::__mClass;

static ::String ProgressEvent_obj_sStaticFields[] = {
	HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf"),
	HX_HCSTRING("SOCKET_DATA","\x76","\x39","\x86","\xc1"),
	::String(null())
};

void ProgressEvent_obj::__register()
{
	hx::Object *dummy = new ProgressEvent_obj;
	ProgressEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ProgressEvent","\x96","\xbe","\xc8","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ProgressEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ProgressEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ProgressEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProgressEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgressEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgressEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ProgressEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_7_boot)
HXDLIN(   7)		PROGRESS = HX_("progress",ad,f7,2a,86);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_8_boot)
HXDLIN(   8)		SOCKET_DATA = HX_("socketData",7d,63,de,b1);
            	}
}

} // end namespace openfl
} // end namespace events
