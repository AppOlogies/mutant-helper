#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PolyK_obj::__construct()
{
	return null();
}

//PolyK_obj::~PolyK_obj() { }

Dynamic PolyK_obj::__CreateEmpty() { return  new PolyK_obj; }
hx::ObjectPtr< PolyK_obj > PolyK_obj::__new()
{  hx::ObjectPtr< PolyK_obj > _result_ = new PolyK_obj();
	_result_->__construct();
	return _result_;}

Dynamic PolyK_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PolyK_obj > _result_ = new PolyK_obj();
	_result_->__construct();
	return _result_;}

Array< int > PolyK_obj::triangulate( Array< Float > p){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","triangulate",0x8fb1bcbc,"openfl._internal.renderer.opengl.utils.PolyK.triangulate","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1650,0xd295150c)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(1652)
	bool sign = true;		HX_STACK_VAR(sign,"sign");
	HX_STACK_LINE(1654)
	int tmp = (int(p->length) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1654)
	int n = tmp;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(1655)
	bool tmp1 = (n < (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1655)
	if ((tmp1)){
		HX_STACK_LINE(1655)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(1657)
	Array< int > tgs = Array_obj< int >::__new();		HX_STACK_VAR(tgs,"tgs");
	HX_STACK_LINE(1658)
	Array< int > avl;		HX_STACK_VAR(avl,"avl");
	HX_STACK_LINE(1658)
	{
		HX_STACK_LINE(1658)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1658)
		{
			HX_STACK_LINE(1658)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1658)
			while((true)){
				HX_STACK_LINE(1658)
				bool tmp2 = (_g1 < n);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1658)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1658)
				if ((tmp3)){
					HX_STACK_LINE(1658)
					break;
				}
				HX_STACK_LINE(1658)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1658)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1658)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1658)
				_g->push(tmp5);
			}
		}
		HX_STACK_LINE(1658)
		avl = _g;
	}
	HX_STACK_LINE(1660)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1661)
	int al = n;		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(1662)
	bool earFound = false;		HX_STACK_VAR(earFound,"earFound");
	HX_STACK_LINE(1664)
	while((true)){
		HX_STACK_LINE(1664)
		bool tmp2 = (al > (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1664)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1664)
		if ((tmp3)){
			HX_STACK_LINE(1664)
			break;
		}
		HX_STACK_LINE(1666)
		int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1666)
		int tmp5 = al;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1666)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1666)
		int tmp7 = avl->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1666)
		int i0 = tmp7;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(1667)
		int tmp8 = (i + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1667)
		int tmp9 = al;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1667)
		int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1667)
		int tmp11 = avl->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1667)
		int i1 = tmp11;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(1668)
		int tmp12 = (i + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1668)
		int tmp13 = al;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1668)
		int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1668)
		int tmp15 = avl->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1668)
		int i2 = tmp15;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(1670)
		int tmp16 = ((int)2 * i0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1670)
		Float tmp17 = p->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1670)
		Float ax = tmp17;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(1670)
		int tmp18 = ((int)2 * i0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1670)
		int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1670)
		Float tmp20 = p->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1670)
		Float ay = tmp20;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(1671)
		int tmp21 = ((int)2 * i1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1671)
		Float tmp22 = p->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1671)
		Float bx = tmp22;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(1671)
		int tmp23 = ((int)2 * i1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1671)
		int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1671)
		Float tmp25 = p->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1671)
		Float by = tmp25;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(1672)
		int tmp26 = ((int)2 * i2);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1672)
		Float tmp27 = p->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1672)
		Float cx = tmp27;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(1672)
		int tmp28 = ((int)2 * i2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1672)
		int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1672)
		Float tmp30 = p->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1672)
		Float cy = tmp30;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(1674)
		earFound = false;
		HX_STACK_LINE(1676)
		Float tmp31 = ax;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1676)
		Float tmp32 = ay;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1676)
		Float tmp33 = bx;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1676)
		Float tmp34 = by;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1676)
		Float tmp35 = cx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1676)
		Float tmp36 = cy;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1676)
		bool tmp37 = sign;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1676)
		bool tmp38 = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::_convex(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1676)
		if ((tmp38)){
			HX_STACK_LINE(1678)
			earFound = true;
			HX_STACK_LINE(1680)
			{
				HX_STACK_LINE(1680)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1680)
				while((true)){
					HX_STACK_LINE(1680)
					bool tmp39 = (_g1 < al);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1680)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1680)
					if ((tmp40)){
						HX_STACK_LINE(1680)
						break;
					}
					HX_STACK_LINE(1680)
					int tmp41 = (_g1)++;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1680)
					int j = tmp41;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1682)
					int tmp42 = avl->__get(j);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1682)
					int vi = tmp42;		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(1683)
					bool tmp43 = (vi == i0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1683)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1683)
					bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1683)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1683)
					if ((tmp45)){
						HX_STACK_LINE(1683)
						tmp46 = (vi == i1);
					}
					else{
						HX_STACK_LINE(1683)
						tmp46 = true;
					}
					HX_STACK_LINE(1683)
					bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1683)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1683)
					if ((tmp47)){
						HX_STACK_LINE(1683)
						tmp48 = (vi == i2);
					}
					else{
						HX_STACK_LINE(1683)
						tmp48 = true;
					}
					HX_STACK_LINE(1683)
					if ((tmp48)){
						HX_STACK_LINE(1683)
						continue;
					}
					HX_STACK_LINE(1685)
					int tmp49 = ((int)2 * vi);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1685)
					Float tmp50 = p->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1685)
					int tmp51 = ((int)2 * vi);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1685)
					int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1685)
					Float tmp53 = p->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1685)
					Float tmp54 = ax;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1685)
					Float tmp55 = ay;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1685)
					Float tmp56 = bx;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1685)
					Float tmp57 = by;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(1685)
					Float tmp58 = cx;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(1685)
					Float tmp59 = cy;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(1685)
					bool tmp60 = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::_PointInTriangle(tmp50,tmp53,tmp54,tmp55,tmp56,tmp57,tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(1685)
					if ((tmp60)){
						HX_STACK_LINE(1687)
						earFound = false;
						HX_STACK_LINE(1688)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1696)
		bool tmp39 = earFound;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1696)
		if ((tmp39)){
			HX_STACK_LINE(1698)
			int tmp40 = i0;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1698)
			tgs->push(tmp40);
			HX_STACK_LINE(1699)
			int tmp41 = i1;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1699)
			tgs->push(tmp41);
			HX_STACK_LINE(1700)
			int tmp42 = i2;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1700)
			tgs->push(tmp42);
			HX_STACK_LINE(1701)
			int tmp43 = (i + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1701)
			int tmp44 = al;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1701)
			int tmp45 = hx::Mod(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1701)
			avl->splice(tmp45,(int)1);
			HX_STACK_LINE(1702)
			(al)--;
			HX_STACK_LINE(1703)
			i = (int)0;
		}
		else{
			HX_STACK_LINE(1705)
			int tmp40 = (i)++;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1705)
			int tmp41 = ((int)3 * al);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1705)
			bool tmp42 = (tmp40 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1705)
			if ((tmp42)){
				HX_STACK_LINE(1707)
				bool tmp43 = sign;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1707)
				if ((tmp43)){
					HX_STACK_LINE(1709)
					tgs = Array_obj< int >::__new();
					HX_STACK_LINE(1710)
					{
						HX_STACK_LINE(1710)
						Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1710)
						{
							HX_STACK_LINE(1710)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1710)
							while((true)){
								HX_STACK_LINE(1710)
								bool tmp44 = (_g2 < n);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1710)
								bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1710)
								if ((tmp45)){
									HX_STACK_LINE(1710)
									break;
								}
								HX_STACK_LINE(1710)
								int tmp46 = (_g2)++;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1710)
								int k = tmp46;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(1710)
								int tmp47 = k;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1710)
								_g1->push(tmp47);
							}
						}
						HX_STACK_LINE(1710)
						avl = _g1;
					}
					HX_STACK_LINE(1712)
					i = (int)0;
					HX_STACK_LINE(1713)
					al = n;
					HX_STACK_LINE(1714)
					sign = false;
				}
				else{
					HX_STACK_LINE(1718)
					Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("GraphicsRenderer.hx","\x30","\xee","\x00","\xcc"),1718,HX_HCSTRING("openfl._internal.renderer.opengl.utils.PolyK","\xfe","\x9f","\x3f","\x30"),HX_HCSTRING("triangulate","\x2c","\x65","\x9d","\xe9"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1718)
					::haxe::Log_obj::trace(HX_HCSTRING("Warning: shape too complex to fill","\x2b","\x09","\x68","\x93"),tmp44);
					HX_STACK_LINE(1719)
					return Array_obj< int >::__new();
				}
			}
		}
	}
	HX_STACK_LINE(1727)
	int tmp2 = avl->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1727)
	tgs->push(tmp2);
	HX_STACK_LINE(1728)
	int tmp3 = avl->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1728)
	tgs->push(tmp3);
	HX_STACK_LINE(1729)
	int tmp4 = avl->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1729)
	tgs->push(tmp4);
	HX_STACK_LINE(1730)
	return tgs;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolyK_obj,triangulate,return )

bool PolyK_obj::_PointInTriangle( Float px,Float py,Float ax,Float ay,Float bx,Float by,Float cx,Float cy){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","_PointInTriangle",0x7548890e,"openfl._internal.renderer.opengl.utils.PolyK._PointInTriangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1735,0xd295150c)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(1737)
	Float tmp = (cx - ax);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1737)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1737)
	int v0x = tmp1;		HX_STACK_VAR(v0x,"v0x");
	HX_STACK_LINE(1738)
	Float tmp2 = (cy - ay);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1738)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1738)
	int v0y = tmp3;		HX_STACK_VAR(v0y,"v0y");
	HX_STACK_LINE(1739)
	Float tmp4 = (bx - ax);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1739)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1739)
	int v1x = tmp5;		HX_STACK_VAR(v1x,"v1x");
	HX_STACK_LINE(1740)
	Float tmp6 = (by - ay);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1740)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1740)
	int v1y = tmp7;		HX_STACK_VAR(v1y,"v1y");
	HX_STACK_LINE(1741)
	Float tmp8 = (px - ax);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1741)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1741)
	int v2x = tmp9;		HX_STACK_VAR(v2x,"v2x");
	HX_STACK_LINE(1742)
	Float tmp10 = (py - ay);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1742)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1742)
	int v2y = tmp11;		HX_STACK_VAR(v2y,"v2y");
	HX_STACK_LINE(1744)
	int tmp12 = (v0x * v0x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1744)
	int tmp13 = (v0y * v0y);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1744)
	int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1744)
	int dot00 = tmp14;		HX_STACK_VAR(dot00,"dot00");
	HX_STACK_LINE(1745)
	int tmp15 = (v0x * v1x);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1745)
	int tmp16 = (v0y * v1y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1745)
	int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1745)
	int dot01 = tmp17;		HX_STACK_VAR(dot01,"dot01");
	HX_STACK_LINE(1746)
	int tmp18 = (v0x * v2x);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1746)
	int tmp19 = (v0y * v2y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1746)
	int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1746)
	int dot02 = tmp20;		HX_STACK_VAR(dot02,"dot02");
	HX_STACK_LINE(1747)
	int tmp21 = (v1x * v1x);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1747)
	int tmp22 = (v1y * v1y);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1747)
	int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1747)
	int dot11 = tmp23;		HX_STACK_VAR(dot11,"dot11");
	HX_STACK_LINE(1748)
	int tmp24 = (v1x * v2x);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1748)
	int tmp25 = (v1y * v2y);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1748)
	int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1748)
	int dot12 = tmp26;		HX_STACK_VAR(dot12,"dot12");
	HX_STACK_LINE(1750)
	int tmp27 = (dot00 * dot11);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1750)
	int tmp28 = (dot01 * dot01);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(1750)
	int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(1750)
	Float tmp30 = (Float((int)1) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(1750)
	Float invDenom = tmp30;		HX_STACK_VAR(invDenom,"invDenom");
	HX_STACK_LINE(1751)
	int tmp31 = (dot11 * dot02);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(1751)
	int tmp32 = (dot01 * dot12);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(1751)
	int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(1751)
	Float tmp34 = invDenom;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(1751)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(1751)
	Float u = tmp35;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(1752)
	int tmp36 = (dot00 * dot12);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(1752)
	int tmp37 = (dot01 * dot02);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(1752)
	int tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(1752)
	Float tmp39 = invDenom;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(1752)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(1752)
	Float v = tmp40;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(1754)
	bool tmp41 = (u >= (int)0);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(1754)
	bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(1754)
	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(1754)
	if ((tmp42)){
		HX_STACK_LINE(1754)
		tmp43 = (v >= (int)0);
	}
	else{
		HX_STACK_LINE(1754)
		tmp43 = false;
	}
	HX_STACK_LINE(1754)
	bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(1754)
	if ((tmp43)){
		HX_STACK_LINE(1754)
		Float tmp45 = (u + v);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1754)
		Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1754)
		tmp44 = (tmp46 < (int)1);
	}
	else{
		HX_STACK_LINE(1754)
		tmp44 = false;
	}
	HX_STACK_LINE(1754)
	return tmp44;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(PolyK_obj,_PointInTriangle,return )

bool PolyK_obj::_convex( Float ax,Float ay,Float bx,Float by,Float cx,Float cy,bool sign){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","_convex",0xc062d896,"openfl._internal.renderer.opengl.utils.PolyK._convex","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1759,0xd295150c)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(sign,"sign")
	HX_STACK_LINE(1761)
	Float tmp = (ay - by);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1761)
	Float tmp1 = (cx - bx);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1761)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1761)
	Float tmp3 = (bx - ax);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1761)
	Float tmp4 = (cy - by);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1761)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1761)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1761)
	bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1761)
	bool tmp8 = sign;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1761)
	bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1761)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(PolyK_obj,_convex,return )


PolyK_obj::PolyK_obj()
{
}

bool PolyK_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_convex") ) { outValue = _convex_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triangulate") ) { outValue = triangulate_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_PointInTriangle") ) { outValue = _PointInTriangle_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#endif

hx::Class PolyK_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("triangulate","\x2c","\x65","\x9d","\xe9"),
	HX_HCSTRING("_PointInTriangle","\x9e","\x4a","\x14","\x04"),
	HX_HCSTRING("_convex","\x06","\x89","\x55","\x36"),
	::String(null()) };

void PolyK_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PolyK","\xfe","\x9f","\x3f","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PolyK_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PolyK_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
