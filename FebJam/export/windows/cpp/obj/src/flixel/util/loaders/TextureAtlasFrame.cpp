#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TextureAtlasFrame_obj::__construct()
{
HX_STACK_FRAME("flixel.util.loaders.TextureAtlasFrame","new",0x3c7b6a67,"flixel.util.loaders.TextureAtlasFrame.new","flixel/util/loaders/TextureAtlasFrame.hx",7,0x8cfab1ca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->additionalAngle = (int)0;
	HX_STACK_LINE(15)
	this->offset = null();
	HX_STACK_LINE(14)
	this->sourceSize = null();
	HX_STACK_LINE(13)
	this->trimmed = false;
	HX_STACK_LINE(12)
	this->rotated = false;
	HX_STACK_LINE(10)
	this->frame = null();
	HX_STACK_LINE(9)
	this->name = null();
}
;
	return null();
}

//TextureAtlasFrame_obj::~TextureAtlasFrame_obj() { }

Dynamic TextureAtlasFrame_obj::__CreateEmpty() { return  new TextureAtlasFrame_obj; }
hx::ObjectPtr< TextureAtlasFrame_obj > TextureAtlasFrame_obj::__new()
{  hx::ObjectPtr< TextureAtlasFrame_obj > _result_ = new TextureAtlasFrame_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureAtlasFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlasFrame_obj > _result_ = new TextureAtlasFrame_obj();
	_result_->__construct();
	return _result_;}

hx::Object *TextureAtlasFrame_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

TextureAtlasFrame_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TextureAtlasFrame_obj >(this); }
Void TextureAtlasFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TextureAtlasFrame","destroy",0xbd50d681,"flixel.util.loaders.TextureAtlasFrame.destroy","flixel/util/loaders/TextureAtlasFrame.hx",22,0x8cfab1ca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->name = null();
		HX_STACK_LINE(24)
		this->frame = null();
		HX_STACK_LINE(25)
		this->sourceSize = null();
		HX_STACK_LINE(26)
		this->offset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlasFrame_obj,destroy,(void))


TextureAtlasFrame_obj::TextureAtlasFrame_obj()
{
}

void TextureAtlasFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlasFrame);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_MEMBER_NAME(trimmed,"trimmed");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(additionalAngle,"additionalAngle");
	HX_MARK_END_CLASS();
}

void TextureAtlasFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
	HX_VISIT_MEMBER_NAME(trimmed,"trimmed");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(additionalAngle,"additionalAngle");
}

Dynamic TextureAtlasFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		if (HX_FIELD_EQ(inName,"trimmed") ) { return trimmed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { return additionalAngle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureAtlasFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trimmed") ) { trimmed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { additionalAngle=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureAtlasFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureAtlasFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"));
	outFields->push(HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29"));
	outFields->push(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextureAtlasFrame_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(TextureAtlasFrame_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsBool,(int)offsetof(TextureAtlasFrame_obj,rotated),HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1")},
	{hx::fsBool,(int)offsetof(TextureAtlasFrame_obj,trimmed),HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(TextureAtlasFrame_obj,sourceSize),HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(TextureAtlasFrame_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(TextureAtlasFrame_obj,additionalAngle),HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"),
	HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29"),
	HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlasFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlasFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureAtlasFrame_obj::__mClass;

void TextureAtlasFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.loaders.TextureAtlasFrame","\xf5","\xaa","\xf6","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextureAtlasFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureAtlasFrame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace loaders
