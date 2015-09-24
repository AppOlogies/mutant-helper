#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
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
namespace graphics{
namespace format{

Void BMP_obj::__construct()
{
	return null();
}

//BMP_obj::~BMP_obj() { }

Dynamic BMP_obj::__CreateEmpty() { return  new BMP_obj; }
hx::ObjectPtr< BMP_obj > BMP_obj::__new()
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ByteArray BMP_obj::encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type){
	HX_STACK_FRAME("lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",12,0xe68a6e47)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	if ((tmp)){
		HX_STACK_LINE(16)
		type = ::lime::graphics::format::BMPType_obj::RGB;
	}
	HX_STACK_LINE(20)
	int fileHeaderLength = (int)14;		HX_STACK_VAR(fileHeaderLength,"fileHeaderLength");
	HX_STACK_LINE(21)
	int infoHeaderLength = (int)40;		HX_STACK_VAR(infoHeaderLength,"infoHeaderLength");
	HX_STACK_LINE(22)
	int tmp1 = (image->width * image->height);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	int pixelValuesLength = tmp2;		HX_STACK_VAR(pixelValuesLength,"pixelValuesLength");
	HX_STACK_LINE(24)
	bool tmp3 = (type != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	if ((tmp3)){
		HX_STACK_LINE(24)
		switch( (int)(type->__Index())){
			case (int)1: {
				HX_STACK_LINE(28)
				infoHeaderLength = (int)108;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(32)
				fileHeaderLength = (int)0;
				HX_STACK_LINE(33)
				int tmp4 = (image->width * image->height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				hx::AddEq(pixelValuesLength,tmp4);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(37)
				int tmp4 = (image->width * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				int tmp5 = (image->width * (int)3);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				int tmp6 = hx::Mod(tmp5,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				int tmp8 = (image->height * (int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(37)
				int tmp10 = (image->height * (int)3);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(37)
				pixelValuesLength = tmp11;
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	HX_STACK_LINE(44)
	int tmp4 = (fileHeaderLength + infoHeaderLength);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	int tmp5 = pixelValuesLength;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	::lime::utils::ByteArray tmp7 = ::lime::utils::ByteArray_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	::lime::utils::ByteArray data = tmp7;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		data->littleEndian = tmp8;
		HX_STACK_LINE(51)
		false;
	}
	HX_STACK_LINE(54)
	bool tmp8 = (fileHeaderLength > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	if ((tmp8)){
		HX_STACK_LINE(56)
		data->writeByte((int)66);
		HX_STACK_LINE(57)
		data->writeByte((int)77);
		HX_STACK_LINE(58)
		int tmp9 = data->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		data->writeInt(tmp9);
		HX_STACK_LINE(59)
		data->writeShort((int)0);
		HX_STACK_LINE(60)
		data->writeShort((int)0);
		HX_STACK_LINE(61)
		int tmp10 = (fileHeaderLength + infoHeaderLength);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		data->writeInt(tmp10);
	}
	HX_STACK_LINE(65)
	int tmp9 = infoHeaderLength;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	data->writeInt(tmp9);
	HX_STACK_LINE(66)
	int tmp10 = image->width;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(66)
	data->writeInt(tmp10);
	HX_STACK_LINE(67)
	bool tmp11 = (type == ::lime::graphics::format::BMPType_obj::ICO);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(67)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(67)
	if ((tmp11)){
		HX_STACK_LINE(67)
		tmp12 = (image->height * (int)2);
	}
	else{
		HX_STACK_LINE(67)
		tmp12 = image->height;
	}
	HX_STACK_LINE(67)
	data->writeInt(tmp12);
	HX_STACK_LINE(68)
	data->writeShort((int)1);
	HX_STACK_LINE(69)
	bool tmp13 = (type == ::lime::graphics::format::BMPType_obj::RGB);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(69)
	int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(69)
	if ((tmp13)){
		HX_STACK_LINE(69)
		tmp14 = (int)24;
	}
	else{
		HX_STACK_LINE(69)
		tmp14 = (int)32;
	}
	HX_STACK_LINE(69)
	data->writeShort(tmp14);
	HX_STACK_LINE(70)
	bool tmp15 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(70)
	int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(70)
	if ((tmp15)){
		HX_STACK_LINE(70)
		tmp16 = (int)3;
	}
	else{
		HX_STACK_LINE(70)
		tmp16 = (int)0;
	}
	HX_STACK_LINE(70)
	data->writeInt(tmp16);
	HX_STACK_LINE(71)
	int tmp17 = pixelValuesLength;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(71)
	data->writeInt(tmp17);
	HX_STACK_LINE(72)
	data->writeInt((int)11824);
	HX_STACK_LINE(73)
	data->writeInt((int)11824);
	HX_STACK_LINE(74)
	data->writeInt((int)0);
	HX_STACK_LINE(75)
	data->writeInt((int)0);
	HX_STACK_LINE(77)
	bool tmp18 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(77)
	if ((tmp18)){
		HX_STACK_LINE(79)
		data->writeInt((int)16711680);
		HX_STACK_LINE(80)
		data->writeInt((int)65280);
		HX_STACK_LINE(81)
		data->writeInt((int)255);
		HX_STACK_LINE(82)
		data->writeInt((int)-16777216);
		HX_STACK_LINE(84)
		data->writeByte((int)32);
		HX_STACK_LINE(85)
		data->writeByte((int)110);
		HX_STACK_LINE(86)
		data->writeByte((int)105);
		HX_STACK_LINE(87)
		data->writeByte((int)87);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				bool tmp19 = (_g < (int)48);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(89)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(89)
				if ((tmp20)){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(89)
				int i = tmp21;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(91)
				data->writeByte((int)0);
			}
		}
	}
	HX_STACK_LINE(97)
	::lime::math::Rectangle tmp19 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(97)
	::lime::utils::ByteArray tmp20 = image->getPixels(tmp19,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(97)
	::lime::utils::ByteArray pixels = tmp20;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(98)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(98)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(98)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(98)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(100)
	bool tmp21 = (type != null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(100)
	if ((tmp21)){
		HX_STACK_LINE(100)
		switch( (int)(type->__Index())){
			case (int)1: {
				HX_STACK_LINE(104)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(104)
				int _g = image->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(104)
				while((true)){
					HX_STACK_LINE(104)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(104)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(104)
					if ((tmp23)){
						HX_STACK_LINE(104)
						break;
					}
					HX_STACK_LINE(104)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(104)
					int y = tmp24;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(106)
					int tmp25 = (image->height - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(106)
					int tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(106)
					int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(106)
					int tmp28 = (tmp27 * (int)4);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(106)
					int tmp29 = image->width;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(106)
					int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(106)
					pixels->position = tmp30;
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(108)
						int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(108)
						while((true)){
							HX_STACK_LINE(108)
							bool tmp31 = (_g3 < _g2);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(108)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(108)
							if ((tmp32)){
								HX_STACK_LINE(108)
								break;
							}
							HX_STACK_LINE(108)
							int tmp33 = (_g3)++;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(108)
							int x = tmp33;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(110)
							int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								bool tmp35 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(110)
								int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(110)
								if ((tmp35)){
									HX_STACK_LINE(110)
									int tmp37 = (pixels->position)++;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(110)
									int pos = tmp37;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(110)
									tmp36 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(110)
									tmp36 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(110)
								int val = tmp36;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(110)
								int tmp37 = (int(val) & int((int)128));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(110)
								bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(110)
								if ((tmp38)){
									HX_STACK_LINE(110)
									tmp34 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(110)
									tmp34 = val;
								}
							}
							HX_STACK_LINE(110)
							a = tmp34;
							HX_STACK_LINE(111)
							int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(111)
							{
								HX_STACK_LINE(111)
								bool tmp36 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(111)
								int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(111)
								if ((tmp36)){
									HX_STACK_LINE(111)
									int tmp38 = (pixels->position)++;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(111)
									int pos = tmp38;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(111)
									tmp37 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(111)
									tmp37 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(111)
								int val = tmp37;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(111)
								int tmp38 = (int(val) & int((int)128));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(111)
								bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(111)
								if ((tmp39)){
									HX_STACK_LINE(111)
									tmp35 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(111)
									tmp35 = val;
								}
							}
							HX_STACK_LINE(111)
							r = tmp35;
							HX_STACK_LINE(112)
							int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(112)
							{
								HX_STACK_LINE(112)
								bool tmp37 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(112)
								int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(112)
								if ((tmp37)){
									HX_STACK_LINE(112)
									int tmp39 = (pixels->position)++;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(112)
									int pos = tmp39;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(112)
									tmp38 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(112)
									tmp38 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(112)
								int val = tmp38;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(112)
								int tmp39 = (int(val) & int((int)128));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(112)
								bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(112)
								if ((tmp40)){
									HX_STACK_LINE(112)
									tmp36 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(112)
									tmp36 = val;
								}
							}
							HX_STACK_LINE(112)
							g = tmp36;
							HX_STACK_LINE(113)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(113)
							{
								HX_STACK_LINE(113)
								bool tmp38 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(113)
								int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(113)
								if ((tmp38)){
									HX_STACK_LINE(113)
									int tmp40 = (pixels->position)++;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(113)
									int pos = tmp40;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(113)
									tmp39 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(113)
									tmp39 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(113)
								int val = tmp39;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(113)
								int tmp40 = (int(val) & int((int)128));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(113)
								bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(113)
								if ((tmp41)){
									HX_STACK_LINE(113)
									tmp37 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(113)
									tmp37 = val;
								}
							}
							HX_STACK_LINE(113)
							b = tmp37;
							HX_STACK_LINE(115)
							int tmp38 = b;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(115)
							data->writeByte(tmp38);
							HX_STACK_LINE(116)
							int tmp39 = g;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(116)
							data->writeByte(tmp39);
							HX_STACK_LINE(117)
							int tmp40 = r;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(117)
							data->writeByte(tmp40);
							HX_STACK_LINE(118)
							int tmp41 = a;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(118)
							data->writeByte(tmp41);
						}
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(127)
				int tmp22 = (image->width * image->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(127)
				::lime::utils::ByteArray tmp23 = ::lime::utils::ByteArray_obj::__new(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(127)
				::lime::utils::ByteArray andMask = tmp23;		HX_STACK_VAR(andMask,"andMask");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(133)
					int _g = image->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(133)
					while((true)){
						HX_STACK_LINE(133)
						bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(133)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(133)
						if ((tmp25)){
							HX_STACK_LINE(133)
							break;
						}
						HX_STACK_LINE(133)
						int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(133)
						int y = tmp26;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(135)
						int tmp27 = (image->height - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(135)
						int tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(135)
						int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(135)
						int tmp30 = (tmp29 * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(135)
						int tmp31 = image->width;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(135)
						int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(135)
						pixels->position = tmp32;
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(137)
							int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(137)
							while((true)){
								HX_STACK_LINE(137)
								bool tmp33 = (_g3 < _g2);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(137)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(137)
								if ((tmp34)){
									HX_STACK_LINE(137)
									break;
								}
								HX_STACK_LINE(137)
								int tmp35 = (_g3)++;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(137)
								int x = tmp35;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(139)
								int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(139)
								{
									HX_STACK_LINE(139)
									bool tmp37 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(139)
									int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(139)
									if ((tmp37)){
										HX_STACK_LINE(139)
										int tmp39 = (pixels->position)++;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(139)
										int pos = tmp39;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(139)
										tmp38 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(139)
										tmp38 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(139)
									int val = tmp38;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(139)
									int tmp39 = (int(val) & int((int)128));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(139)
									bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(139)
									if ((tmp40)){
										HX_STACK_LINE(139)
										tmp36 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(139)
										tmp36 = val;
									}
								}
								HX_STACK_LINE(139)
								a = tmp36;
								HX_STACK_LINE(140)
								int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(140)
								{
									HX_STACK_LINE(140)
									bool tmp38 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(140)
									int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(140)
									if ((tmp38)){
										HX_STACK_LINE(140)
										int tmp40 = (pixels->position)++;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(140)
										int pos = tmp40;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(140)
										tmp39 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(140)
										tmp39 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(140)
									int val = tmp39;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(140)
									int tmp40 = (int(val) & int((int)128));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(140)
									bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(140)
									if ((tmp41)){
										HX_STACK_LINE(140)
										tmp37 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(140)
										tmp37 = val;
									}
								}
								HX_STACK_LINE(140)
								r = tmp37;
								HX_STACK_LINE(141)
								int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(141)
								{
									HX_STACK_LINE(141)
									bool tmp39 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(141)
									int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(141)
									if ((tmp39)){
										HX_STACK_LINE(141)
										int tmp41 = (pixels->position)++;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(141)
										int pos = tmp41;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(141)
										tmp40 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(141)
										tmp40 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(141)
									int val = tmp40;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(141)
									int tmp41 = (int(val) & int((int)128));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(141)
									bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(141)
									if ((tmp42)){
										HX_STACK_LINE(141)
										tmp38 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(141)
										tmp38 = val;
									}
								}
								HX_STACK_LINE(141)
								g = tmp38;
								HX_STACK_LINE(142)
								int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(142)
								{
									HX_STACK_LINE(142)
									bool tmp40 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(142)
									int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(142)
									if ((tmp40)){
										HX_STACK_LINE(142)
										int tmp42 = (pixels->position)++;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(142)
										int pos = tmp42;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(142)
										tmp41 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(142)
										tmp41 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(142)
									int val = tmp41;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(142)
									int tmp42 = (int(val) & int((int)128));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(142)
									bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(142)
									if ((tmp43)){
										HX_STACK_LINE(142)
										tmp39 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(142)
										tmp39 = val;
									}
								}
								HX_STACK_LINE(142)
								b = tmp39;
								HX_STACK_LINE(144)
								int tmp40 = b;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(144)
								data->writeByte(tmp40);
								HX_STACK_LINE(145)
								int tmp41 = g;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(145)
								data->writeByte(tmp41);
								HX_STACK_LINE(146)
								int tmp42 = r;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(146)
								data->writeByte(tmp42);
								HX_STACK_LINE(147)
								int tmp43 = a;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(147)
								data->writeByte(tmp43);
								HX_STACK_LINE(155)
								andMask->writeByte((int)0);
							}
						}
					}
				}
				HX_STACK_LINE(163)
				::lime::utils::ByteArray tmp24 = andMask;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(163)
				data->writeBytes(tmp24,null(),null());
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(167)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(167)
				int _g = image->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(167)
				while((true)){
					HX_STACK_LINE(167)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(167)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(167)
					if ((tmp23)){
						HX_STACK_LINE(167)
						break;
					}
					HX_STACK_LINE(167)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(167)
					int y = tmp24;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(169)
					int tmp25 = (image->height - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(169)
					int tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(169)
					int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(169)
					int tmp28 = (tmp27 * (int)4);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(169)
					int tmp29 = image->width;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(169)
					int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(169)
					pixels->position = tmp30;
					HX_STACK_LINE(171)
					{
						HX_STACK_LINE(171)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(171)
						int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(171)
						while((true)){
							HX_STACK_LINE(171)
							bool tmp31 = (_g3 < _g2);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(171)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(171)
							if ((tmp32)){
								HX_STACK_LINE(171)
								break;
							}
							HX_STACK_LINE(171)
							int tmp33 = (_g3)++;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(171)
							int x = tmp33;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(173)
							int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								bool tmp35 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(173)
								int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(173)
								if ((tmp35)){
									HX_STACK_LINE(173)
									int tmp37 = (pixels->position)++;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(173)
									int pos = tmp37;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(173)
									tmp36 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(173)
									tmp36 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(173)
								int val = tmp36;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(173)
								int tmp37 = (int(val) & int((int)128));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(173)
								bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(173)
								if ((tmp38)){
									HX_STACK_LINE(173)
									tmp34 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(173)
									tmp34 = val;
								}
							}
							HX_STACK_LINE(173)
							a = tmp34;
							HX_STACK_LINE(174)
							int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(174)
							{
								HX_STACK_LINE(174)
								bool tmp36 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(174)
								int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(174)
								if ((tmp36)){
									HX_STACK_LINE(174)
									int tmp38 = (pixels->position)++;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(174)
									int pos = tmp38;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(174)
									tmp37 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(174)
									tmp37 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(174)
								int val = tmp37;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(174)
								int tmp38 = (int(val) & int((int)128));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(174)
								bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(174)
								if ((tmp39)){
									HX_STACK_LINE(174)
									tmp35 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(174)
									tmp35 = val;
								}
							}
							HX_STACK_LINE(174)
							r = tmp35;
							HX_STACK_LINE(175)
							int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								bool tmp37 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(175)
								int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(175)
								if ((tmp37)){
									HX_STACK_LINE(175)
									int tmp39 = (pixels->position)++;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(175)
									int pos = tmp39;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(175)
									tmp38 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(175)
									tmp38 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(175)
								int val = tmp38;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(175)
								int tmp39 = (int(val) & int((int)128));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(175)
								bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(175)
								if ((tmp40)){
									HX_STACK_LINE(175)
									tmp36 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(175)
									tmp36 = val;
								}
							}
							HX_STACK_LINE(175)
							g = tmp36;
							HX_STACK_LINE(176)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								bool tmp38 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(176)
								int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(176)
								if ((tmp38)){
									HX_STACK_LINE(176)
									int tmp40 = (pixels->position)++;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(176)
									int pos = tmp40;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(176)
									tmp39 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(176)
									tmp39 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(176)
								int val = tmp39;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(176)
								int tmp40 = (int(val) & int((int)128));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(176)
								bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(176)
								if ((tmp41)){
									HX_STACK_LINE(176)
									tmp37 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(176)
									tmp37 = val;
								}
							}
							HX_STACK_LINE(176)
							b = tmp37;
							HX_STACK_LINE(178)
							int tmp38 = b;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(178)
							data->writeByte(tmp38);
							HX_STACK_LINE(179)
							int tmp39 = g;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(179)
							data->writeByte(tmp39);
							HX_STACK_LINE(180)
							int tmp40 = r;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(180)
							data->writeByte(tmp40);
						}
					}
					HX_STACK_LINE(184)
					{
						HX_STACK_LINE(184)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(184)
						int tmp31 = (image->width * (int)3);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(184)
						int tmp32 = hx::Mod(tmp31,(int)4);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(184)
						int _g2 = tmp32;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(184)
						while((true)){
							HX_STACK_LINE(184)
							bool tmp33 = (_g3 < _g2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(184)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(184)
							if ((tmp34)){
								HX_STACK_LINE(184)
								break;
							}
							HX_STACK_LINE(184)
							int tmp35 = (_g3)++;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(184)
							int i = tmp35;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(186)
							data->writeByte((int)0);
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	HX_STACK_LINE(196)
	::lime::utils::ByteArray tmp22 = data;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(196)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null()) };

void BMP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
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
} // end namespace graphics
} // end namespace format
