// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_10a3b7f702bd6cce_97_new,"haxe.xml._Fast.NodeListAccess","new",0x22c8c708,"haxe.xml._Fast.NodeListAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",97,0x60a2153a)
HX_LOCAL_STACK_FRAME(_hx_pos_10a3b7f702bd6cce_100_resolve,"haxe.xml._Fast.NodeListAccess","resolve",0x21d97d94,"haxe.xml._Fast.NodeListAccess.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",100,0x60a2153a)
namespace haxe{
namespace xml{
namespace _Fast{

void NodeListAccess_obj::__construct( ::Xml x){
            	HX_STACKFRAME(&_hx_pos_10a3b7f702bd6cce_97_new)
HXDLIN(  97)		this->_hx___x = x;
            	}

Dynamic NodeListAccess_obj::__CreateEmpty() { return new NodeListAccess_obj; }

void *NodeListAccess_obj::_hx_vtable = 0;

Dynamic NodeListAccess_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NodeListAccess_obj > _hx_result = new NodeListAccess_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NodeListAccess_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6bbbf3b6;
}

 ::List NodeListAccess_obj::resolve(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_10a3b7f702bd6cce_100_resolve)
HXLINE( 101)		 ::List l =  ::List_obj::__alloc( HX_CTX );
HXLINE( 102)		{
HXLINE( 102)			 ::Dynamic x = this->_hx___x->elementsNamed(name);
HXDLIN( 102)			while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 102)				 ::Xml x1 = ( ( ::Xml)(x->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 103)				l->add( ::haxe::xml::Fast_obj::__alloc( HX_CTX ,x1));
            			}
            		}
HXLINE( 104)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeListAccess_obj,resolve,return )


hx::ObjectPtr< NodeListAccess_obj > NodeListAccess_obj::__new( ::Xml x) {
	hx::ObjectPtr< NodeListAccess_obj > __this = new NodeListAccess_obj();
	__this->__construct(x);
	return __this;
}

hx::ObjectPtr< NodeListAccess_obj > NodeListAccess_obj::__alloc(hx::Ctx *_hx_ctx, ::Xml x) {
	NodeListAccess_obj *__this = (NodeListAccess_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NodeListAccess_obj), true, "haxe.xml._Fast.NodeListAccess"));
	*(void **)__this = NodeListAccess_obj::_hx_vtable;
	__this->__construct(x);
	return __this;
}

NodeListAccess_obj::NodeListAccess_obj()
{
}

void NodeListAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeListAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(_hx___x,"__x");
	HX_MARK_END_CLASS();
}

void NodeListAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(_hx___x,"__x");
}

hx::Val NodeListAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return hx::Val( _hx___x ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return hx::Val( resolve_dyn() ); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

hx::Val NodeListAccess_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { _hx___x=inValue.Cast<  ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void NodeListAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NodeListAccess_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(NodeListAccess_obj,_hx___x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *NodeListAccess_obj_sStaticStorageInfo = 0;
#endif

static ::String NodeListAccess_obj_sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void NodeListAccess_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeListAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NodeListAccess_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeListAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class NodeListAccess_obj::__mClass;

void NodeListAccess_obj::__register()
{
	hx::Object *dummy = new NodeListAccess_obj;
	NodeListAccess_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.NodeListAccess","\x16","\xe3","\x8e","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NodeListAccess_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NodeListAccess_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NodeListAccess_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NodeListAccess_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NodeListAccess_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NodeListAccess_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
