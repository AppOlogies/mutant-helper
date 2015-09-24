#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace audio{

Void AudioSource_obj::__construct(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{
HX_STACK_FRAME("lime.audio.AudioSource","new",0x2bd91bf2,"lime.audio.AudioSource.new","lime/audio/AudioSource.hx",13,0x17352e00)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offset,"offset")
HX_STACK_ARG(length,"length")
HX_STACK_ARG(__o_loops,"loops")
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
{
	HX_STACK_LINE(16)
	this->onComplete = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(41)
	this->buffer = buffer;
	HX_STACK_LINE(42)
	this->offset = offset;
	HX_STACK_LINE(44)
	bool tmp = (length != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(44)
		tmp1 = (length != (int)0);
	}
	else{
		HX_STACK_LINE(44)
		tmp1 = false;
	}
	HX_STACK_LINE(44)
	if ((tmp1)){
		HX_STACK_LINE(46)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(50)
	this->loops = loops;
	HX_STACK_LINE(51)
	this->id = (int)0;
	HX_STACK_LINE(53)
	bool tmp2 = (buffer != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(55)
		this->init();
	}
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(buffer,__o_offset,length,__o_loops);
	return _result_;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AudioSource_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","dispose",0xab53fd31,"lime.audio.AudioSource.dispose","lime/audio/AudioSource.hx",64,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			::lime::audio::AudioContext _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(64)
					::lime::audio::ALAudioContext tmp1 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(64)
					::lime::audio::ALAudioContext al = tmp1;		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(64)
					::lime::audio::ALCAudioContext tmp2 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(64)
					::lime::audio::ALCAudioContext alc = tmp2;		HX_STACK_VAR(alc,"alc");
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(68)
						int tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(68)
						int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(68)
						bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(68)
						if ((tmp5)){
							HX_STACK_LINE(70)
							int tmp6 = this->id;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(70)
							al->deleteSource(tmp6);
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

Void AudioSource_obj::init( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","init",0x2ed80f3e,"lime.audio.AudioSource.init","lime/audio/AudioSource.hx",83,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			::lime::audio::AudioContext _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(83)
					::lime::audio::ALAudioContext tmp1 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(83)
					::lime::audio::ALAudioContext al = tmp1;		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(83)
					::lime::audio::ALCAudioContext tmp2 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					::lime::audio::ALCAudioContext alc = tmp2;		HX_STACK_VAR(alc,"alc");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(87)
						::lime::audio::AudioBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(87)
						int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(87)
						bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(87)
						if ((tmp5)){
							HX_STACK_LINE(89)
							int tmp6 = al->genBuffer();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(89)
							::lime::audio::AudioBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(89)
							tmp7->id = tmp6;
							HX_STACK_LINE(91)
							int format = (int)0;		HX_STACK_VAR(format,"format");
							HX_STACK_LINE(93)
							::lime::audio::AudioBuffer tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							int tmp9 = tmp8->channels;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(93)
							bool tmp10 = (tmp9 == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(93)
							if ((tmp10)){
								HX_STACK_LINE(95)
								::lime::audio::AudioBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								int tmp12 = tmp11->bitsPerSample;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								bool tmp13 = (tmp12 == (int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(95)
								if ((tmp13)){
									HX_STACK_LINE(97)
									format = al->FORMAT_MONO8;
								}
								else{
									HX_STACK_LINE(99)
									::lime::audio::AudioBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(99)
									int tmp15 = tmp14->bitsPerSample;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(99)
									bool tmp16 = (tmp15 == (int)16);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(99)
									if ((tmp16)){
										HX_STACK_LINE(101)
										format = al->FORMAT_MONO16;
									}
								}
							}
							else{
								HX_STACK_LINE(105)
								::lime::audio::AudioBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(105)
								int tmp12 = tmp11->channels;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(105)
								bool tmp13 = (tmp12 == (int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(105)
								if ((tmp13)){
									HX_STACK_LINE(107)
									::lime::audio::AudioBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(107)
									int tmp15 = tmp14->bitsPerSample;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(107)
									bool tmp16 = (tmp15 == (int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(107)
									if ((tmp16)){
										HX_STACK_LINE(109)
										format = al->FORMAT_STEREO8;
									}
									else{
										HX_STACK_LINE(111)
										::lime::audio::AudioBuffer tmp17 = this->buffer;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(111)
										int tmp18 = tmp17->bitsPerSample;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(111)
										bool tmp19 = (tmp18 == (int)16);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(111)
										if ((tmp19)){
											HX_STACK_LINE(113)
											format = al->FORMAT_STEREO16;
										}
									}
								}
							}
							HX_STACK_LINE(119)
							::lime::audio::AudioBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(119)
							int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(119)
							int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(119)
							::lime::audio::AudioBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(119)
							::lime::utils::ByteArray tmp15 = tmp14->data;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(119)
							::lime::audio::AudioBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(119)
							int tmp17 = tmp16->data->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(119)
							::lime::audio::AudioBuffer tmp18 = this->buffer;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(119)
							int tmp19 = tmp18->sampleRate;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(119)
							al->bufferData(tmp12,tmp13,tmp15,tmp17,tmp19);
						}
						HX_STACK_LINE(123)
						int tmp6 = al->genSource();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(123)
						this->id = tmp6;
						HX_STACK_LINE(124)
						int tmp7 = this->id;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(124)
						int tmp8 = al->BUFFER;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(124)
						::lime::audio::AudioBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(124)
						int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(124)
						al->sourcei(tmp7,tmp8,tmp10);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

Void AudioSource_obj::play( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","play",0x33770222,"lime.audio.AudioSource.play","lime/audio/AudioSource.hx",133,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(143)
			int tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			tmp2 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(143)
			tmp2 = true;
		}
		HX_STACK_LINE(143)
		if ((tmp2)){
			HX_STACK_LINE(145)
			return null();
		}
		HX_STACK_LINE(149)
		this->playing = true;
		HX_STACK_LINE(151)
		int tmp3 = this->get_currentTime();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		int time = tmp3;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(153)
		int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		::lime::audio::openal::AL_obj::sourcePlay(tmp4);
		HX_STACK_LINE(155)
		int tmp5 = time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		this->set_currentTime(tmp5);
		HX_STACK_LINE(157)
		::haxe::Timer tmp6 = this->timer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		if ((tmp7)){
			HX_STACK_LINE(159)
			::haxe::Timer tmp8 = this->timer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			tmp8->stop();
		}
		HX_STACK_LINE(163)
		int tmp8 = this->get_length();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		int tmp9 = this->get_currentTime();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		::haxe::Timer tmp11 = ::haxe::Timer_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		this->timer = tmp11;
		HX_STACK_LINE(164)
		Dynamic tmp12 = this->timer_onRun_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		::haxe::Timer tmp13 = this->timer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		tmp13->run = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::pause( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","pause",0xcd74ab08,"lime.audio.AudioSource.pause","lime/audio/AudioSource.hx",171,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		this->playing = false;
		HX_STACK_LINE(186)
		int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::lime::audio::openal::AL_obj::sourcePause(tmp);
		HX_STACK_LINE(188)
		::haxe::Timer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		if ((tmp2)){
			HX_STACK_LINE(190)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::stop( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","stop",0x3578c430,"lime.audio.AudioSource.stop","lime/audio/AudioSource.hx",199,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		this->playing = false;
		HX_STACK_LINE(210)
		int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		::lime::audio::openal::AL_obj::sourceStop(tmp);
		HX_STACK_LINE(212)
		::haxe::Timer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

Void AudioSource_obj::timer_onRun( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","timer_onRun",0x17df51c4,"lime.audio.AudioSource.timer_onRun","lime/audio/AudioSource.hx",230,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		this->playing = false;
		HX_STACK_LINE(236)
		int tmp = this->loops;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(238)
			(this->loops)--;
			HX_STACK_LINE(239)
			this->set_currentTime((int)0);
			HX_STACK_LINE(240)
			this->play();
			HX_STACK_LINE(241)
			return null();
		}
		else{
			HX_STACK_LINE(245)
			int tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			::lime::audio::openal::AL_obj::sourceStop(tmp2);
			HX_STACK_LINE(246)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			tmp3->stop();
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(250)
			::lime::app::Event tmp2 = this->onComplete;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			cpp::ArrayBase listeners = tmp2->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(250)
			::lime::app::Event tmp3 = this->onComplete;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			Array< bool > repeat = tmp3->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp4 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				if ((tmp5)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(58)
				Dynamic tmp6 = listeners->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				tmp6().Cast< Void >();
				HX_STACK_LINE(60)
				bool tmp7 = repeat->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				if ((tmp8)){
					HX_STACK_LINE(250)
					::lime::app::Event tmp9 = this->onComplete;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					Dynamic tmp10 = listeners->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					tmp9->remove(tmp10);
				}
				else{
					HX_STACK_LINE(66)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,timer_onRun,(void))

int AudioSource_obj::get_currentTime( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_currentTime",0x5201bb0f,"lime.audio.AudioSource.get_currentTime","lime/audio/AudioSource.hx",264,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	Float tmp1 = ::lime::audio::openal::AL_obj::getSourcef(tmp,(int)4132);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	Float tmp2 = (tmp1 * (int)1000);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(276)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(276)
	int tmp4 = this->offset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(276)
	int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(276)
	int time = tmp5;		HX_STACK_VAR(time,"time");
	HX_STACK_LINE(277)
	bool tmp6 = (time < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(277)
	if ((tmp6)){
		HX_STACK_LINE(277)
		return (int)0;
	}
	HX_STACK_LINE(278)
	int tmp7 = time;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(278)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_currentTime",0x4dcd381b,"lime.audio.AudioSource.set_currentTime","lime/audio/AudioSource.hx",285,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	::lime::audio::AudioBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	if ((tmp1)){
		HX_STACK_LINE(301)
		int tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		::lime::audio::openal::AL_obj::sourceRewind(tmp2);
		HX_STACK_LINE(302)
		bool tmp3 = this->playing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		if ((tmp3)){
			HX_STACK_LINE(302)
			int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::lime::audio::openal::AL_obj::sourcePlay(tmp4);
		}
		HX_STACK_LINE(303)
		int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		int tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		Float tmp8 = (Float(tmp7) / Float((int)1000));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		::lime::audio::openal::AL_obj::sourcef(tmp4,(int)4132,tmp8);
	}
	HX_STACK_LINE(307)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_gain",0xda9f2f36,"lime.audio.AudioSource.get_gain","lime/audio/AudioSource.hx",314,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	Float tmp1 = ::lime::audio::openal::AL_obj::getSourcef(tmp,(int)4106);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain( Float value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_gain",0x88fc88aa,"lime.audio.AudioSource.set_gain","lime/audio/AudioSource.hx",333,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(348)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	::lime::audio::openal::AL_obj::sourcef(tmp,(int)4106,tmp1);
	HX_STACK_LINE(349)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_length",0x74de2f5d,"lime.audio.AudioSource.get_length","lime/audio/AudioSource.hx",356,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	Dynamic tmp = this->__length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	if ((tmp1)){
		HX_STACK_LINE(360)
		Dynamic tmp2 = this->__length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		return tmp2;
	}
	HX_STACK_LINE(374)
	::lime::audio::AudioBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(374)
	int tmp3 = tmp2->data->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(374)
	int tmp4 = (tmp3 * (int)8);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(374)
	::lime::audio::AudioBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(374)
	int tmp6 = tmp5->channels;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(374)
	::lime::audio::AudioBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(374)
	int tmp8 = tmp7->bitsPerSample;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(374)
	int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(374)
	Float tmp10 = (Float(tmp4) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(374)
	Float samples = tmp10;		HX_STACK_VAR(samples,"samples");
	HX_STACK_LINE(375)
	Float tmp11 = samples;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(375)
	::lime::audio::AudioBuffer tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(375)
	int tmp13 = tmp12->sampleRate;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(375)
	Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(375)
	Float tmp15 = (tmp14 * (int)1000);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(375)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(375)
	int tmp17 = this->offset;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(375)
	int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(375)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_length",0x785bcdd1,"lime.audio.AudioSource.set_length","lime/audio/AudioSource.hx",382,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(384)
	Dynamic tmp = this->__length = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return get_gain(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__length") ) { return __length; }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return get_gain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return set_gain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return get_currentTime(); }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return timer_onRun_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return get_currentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return set_currentTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return set_gain(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return set_currentTime(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AudioSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"));
	outFields->push(HX_HCSTRING("__length","\x06","\x00","\x37","\x47"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,loops),HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(AudioSource_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,pauseTime),HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioSource_obj,__length),HX_HCSTRING("__length","\x06","\x00","\x37","\x47")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(AudioSource_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"),
	HX_HCSTRING("__length","\x06","\x00","\x37","\x47"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timer_onRun","\x32","\x24","\xe9","\x57"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioSource","\x00","\xfb","\x03","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AudioSource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
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
