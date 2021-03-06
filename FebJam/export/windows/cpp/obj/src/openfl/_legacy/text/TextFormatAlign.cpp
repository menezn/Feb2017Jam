#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

Void TextFormatAlign_obj::__construct()
{
	return null();
}

//TextFormatAlign_obj::~TextFormatAlign_obj() { }

Dynamic TextFormatAlign_obj::__CreateEmpty() { return  new TextFormatAlign_obj; }
hx::ObjectPtr< TextFormatAlign_obj > TextFormatAlign_obj::__new()
{  hx::ObjectPtr< TextFormatAlign_obj > _result_ = new TextFormatAlign_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFormatAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormatAlign_obj > _result_ = new TextFormatAlign_obj();
	_result_->__construct();
	return _result_;}

::String TextFormatAlign_obj::LEFT;

::String TextFormatAlign_obj::RIGHT;

::String TextFormatAlign_obj::CENTER;

::String TextFormatAlign_obj::JUSTIFY;


TextFormatAlign_obj::TextFormatAlign_obj()
{
}

bool TextFormatAlign_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = LEFT; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = RIGHT; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { outValue = CENTER; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"JUSTIFY") ) { outValue = JUSTIFY; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TextFormatAlign_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsString,(void *) &TextFormatAlign_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsString,(void *) &TextFormatAlign_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsString,(void *) &TextFormatAlign_obj::JUSTIFY,HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
};

#endif

hx::Class TextFormatAlign_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03"),
	::String(null()) };

void TextFormatAlign_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.text.TextFormatAlign","\x64","\x64","\x77","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFormatAlign_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFormatAlign_obj >;
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

void TextFormatAlign_obj::__boot()
{
	LEFT= HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	RIGHT= HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	CENTER= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	JUSTIFY= HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace text
