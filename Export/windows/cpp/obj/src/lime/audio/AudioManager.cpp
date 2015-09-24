#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
namespace lime{
namespace audio{

Void AudioManager_obj::__construct()
{
	return null();
}

//AudioManager_obj::~AudioManager_obj() { }

Dynamic AudioManager_obj::__CreateEmpty() { return  new AudioManager_obj; }
hx::ObjectPtr< AudioManager_obj > AudioManager_obj::__new()
{  hx::ObjectPtr< AudioManager_obj > _result_ = new AudioManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioManager_obj > _result_ = new AudioManager_obj();
	_result_->__construct();
	return _result_;}

::lime::audio::AudioContext AudioManager_obj::context;

Void AudioManager_obj::init( ::lime::audio::AudioContext context){
{
		HX_STACK_FRAME("lime.audio.AudioManager","init",0x0c9d6096,"lime.audio.AudioManager.init","lime/audio/AudioManager.hx",20,0x9f466694)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(22)
		::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		if ((tmp1)){
			HX_STACK_LINE(24)
			bool tmp2 = (context == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			if ((tmp2)){
				HX_STACK_LINE(45)
				::lime::audio::ALCAudioContext tmp3 = ::lime::audio::ALCAudioContext_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				::lime::audio::ALAudioContext tmp4 = ::lime::audio::ALAudioContext_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				::lime::audio::AudioContext tmp5 = ::lime::audio::AudioContext_obj::OPENAL(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				::lime::audio::AudioManager_obj::context = tmp5;
				HX_STACK_LINE(47)
				Dynamic tmp6 = ::lime::audio::openal::ALC_obj::openDevice(null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				Dynamic device = tmp6;		HX_STACK_VAR(device,"device");
				HX_STACK_LINE(48)
				Dynamic tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				Dynamic tmp8 = ::lime::audio::openal::ALC_obj::createContext(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				Dynamic ctx = tmp8;		HX_STACK_VAR(ctx,"ctx");
				HX_STACK_LINE(49)
				Dynamic tmp9 = ctx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				::lime::audio::openal::ALC_obj::makeContextCurrent(tmp9);
				HX_STACK_LINE(50)
				Dynamic tmp10 = ctx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(50)
				::lime::audio::openal::ALC_obj::processContext(tmp10);
			}
			else{
				HX_STACK_LINE(56)
				::lime::audio::AudioManager_obj::context = context;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioManager_obj,init,(void))

Void AudioManager_obj::resume( ){
{
		HX_STACK_FRAME("lime.audio.AudioManager","resume",0xe85f7cb3,"lime.audio.AudioManager.resume","lime/audio/AudioManager.hx",65,0x9f466694)
		HX_STACK_LINE(67)
		::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		if ((tmp1)){
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::lime::audio::AudioContext tmp2 = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(69)
				::lime::audio::AudioContext _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(69)
						::lime::audio::ALAudioContext tmp3 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(69)
						::lime::audio::ALAudioContext al = tmp3;		HX_STACK_VAR(al,"al");
						HX_STACK_LINE(69)
						::lime::audio::ALCAudioContext tmp4 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(69)
						::lime::audio::ALCAudioContext alc = tmp4;		HX_STACK_VAR(alc,"alc");
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(73)
							Dynamic tmp5 = alc->getCurrentContext();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(73)
							alc->processContext(tmp5);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,resume,(void))

Void AudioManager_obj::shutdown( ){
{
		HX_STACK_FRAME("lime.audio.AudioManager","shutdown",0x46165d1c,"lime.audio.AudioManager.shutdown","lime/audio/AudioManager.hx",84,0x9f466694)
		HX_STACK_LINE(86)
		::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::lime::audio::AudioContext tmp2 = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(88)
				::lime::audio::AudioContext _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(88)
						::lime::audio::ALAudioContext tmp3 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(88)
						::lime::audio::ALAudioContext al = tmp3;		HX_STACK_VAR(al,"al");
						HX_STACK_LINE(88)
						::lime::audio::ALCAudioContext tmp4 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(88)
						::lime::audio::ALCAudioContext alc = tmp4;		HX_STACK_VAR(alc,"alc");
						HX_STACK_LINE(90)
						{
							HX_STACK_LINE(92)
							Dynamic tmp5 = alc->getCurrentContext();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(92)
							Dynamic currentContext = tmp5;		HX_STACK_VAR(currentContext,"currentContext");
							HX_STACK_LINE(94)
							bool tmp6 = (currentContext != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(94)
							if ((tmp6)){
								HX_STACK_LINE(96)
								Dynamic tmp7 = currentContext;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(96)
								Dynamic tmp8 = alc->getContextsDevice(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(96)
								Dynamic device = tmp8;		HX_STACK_VAR(device,"device");
								HX_STACK_LINE(97)
								alc->makeContextCurrent(null());
								HX_STACK_LINE(98)
								Dynamic tmp9 = currentContext;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(98)
								alc->destroyContext(tmp9);
								HX_STACK_LINE(99)
								Dynamic tmp10 = device;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(99)
								alc->closeDevice(tmp10);
							}
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,shutdown,(void))

Void AudioManager_obj::suspend( ){
{
		HX_STACK_FRAME("lime.audio.AudioManager","suspend",0xf724c1b6,"lime.audio.AudioManager.suspend","lime/audio/AudioManager.hx",112,0x9f466694)
		HX_STACK_LINE(114)
		::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::lime::audio::AudioContext tmp2 = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				::lime::audio::AudioContext _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(116)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(116)
						::lime::audio::ALAudioContext tmp3 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(116)
						::lime::audio::ALAudioContext al = tmp3;		HX_STACK_VAR(al,"al");
						HX_STACK_LINE(116)
						::lime::audio::ALCAudioContext tmp4 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(116)
						::lime::audio::ALCAudioContext alc = tmp4;		HX_STACK_VAR(alc,"alc");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(120)
							Dynamic tmp5 = alc->getCurrentContext();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(120)
							alc->suspendContext(tmp5);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,suspend,(void))


AudioManager_obj::AudioManager_obj()
{
}

bool AudioManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = context; return true;  }
		if (HX_FIELD_EQ(inName,"suspend") ) { outValue = suspend_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::audio::AudioContext*/ ,(void *) &AudioManager_obj::context,HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioManager_obj::context,"context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioManager_obj::context,"context");
};

#endif

hx::Class AudioManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	::String(null()) };

void AudioManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioManager","\xa8","\x28","\xf0","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioManager_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioManager_obj >;
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

} // end namespace lime
} // end namespace audio
