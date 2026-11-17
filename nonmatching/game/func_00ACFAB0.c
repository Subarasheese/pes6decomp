/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209830(s32);
void func_00944A50(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00953400(s32, f32, f32);
void func_0096F290(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_0097DF20(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00983130(s32);
void func_00983260(s32, s32, s32, s32);
void func_0099E470(s32, f32, f32, f32, f32);
void func_009CD440(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_009E02F0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_009E65D0(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_009E8460(s32, f32, f32, f32, f32);
void func_009EE9B0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009F0150(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_009F1470(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_009F2940(s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00A07B40(void);
void func_00A28AD0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A2A4C0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32);
void func_00A2E740(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A35BF0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A380B0(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A392F0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A3AAA0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A3C700(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A3DC60(s32, s32, s32, f32, f32, f32, f32);
void func_00A3EB60(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A43A90(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A46AB0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A527E0(s32, s32, s32, s32, s32, f32, f32);
void func_00A53EA0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A56850(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A65BD0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A6C360(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A70B00(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A7C090(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A813A0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00A8FD80(s32, f32, f32, f32, f32);
void func_00A95C30(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AB6280(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AB7970(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00ABA120(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AC5020(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AC8D40(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00ACA520(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00ACC100(s32, s32, s32, s32, f32, f32);
void func_00ACCFD0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00ACF1E0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00AD0720(s32, s32, s32, s32);
void func_00AD7000(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AE6F90(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AF3230(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B18620(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B23230(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B27BC0(s32, s32, s32, s32, s32, f32, f32);
s32 func_00B29CB0(void);
void func_00B7C940(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B940B0(s32, s32, s32, s32, f32, f32);
void func_00BA27F0(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BA74A0(s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BAA070(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00BBB4F0(s32);
void func_00C03440(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);

void func_00ACFAB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = (s32) 0xcc0000U;
    s0 = a0;
    (*(volatile u8 *) (u32) (v0 + -12812)) = (u8) 0; func_00BBB4F0(a0);
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 != 0) goto L_00ACFAE4;
    s1 = 15; goto L_00ACFB58;
L_00ACFAE4:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 == v1) goto L_00ACFB08;
    a0 = s0; v0 = func_00AD0720(a0, a1, a2, a3);
    s1 = v0; goto L_00ACFB58;
L_00ACFB08:;
    v0 = func_00B29CB0();
    if (v0 != 0) goto L_00ACFB28;
    a0 = s0; v0 = func_00AD0720(a0, a1, a2, a3);
    goto L_00ACFB54;
L_00ACFB28:;
    v0 = (s32) 0x5e0000U;
    v0 = (s32) ((u32) v0 + 0x3944U);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a1 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = 13;
    if (v0 != v1) goto L_00ACFB54;
    a0 = s0; v0 = func_00AD0720(a0, a1, a2, a3);
L_00ACFB54:;
    s1 = v0;
L_00ACFB58:;
    (*(volatile u32 *) (u32) (s0 + 568)) = (u32) 0;
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile s16 *) (u32) (s0 + 20));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 21284)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); func_00209830(a0);
    at = (u64) s1 < (u64) (s64) 16;
    if (at == 0) goto L_00ACFDBC;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb3e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xacfba4U) goto L_00ACFBA4; if (t_ == 0xacfcbcU) goto L_00ACFCBC; if (t_ == 0xacfcecU) goto L_00ACFCEC; if (t_ == 0xacfd10U) goto L_00ACFD10; if (t_ == 0xacfd54U) goto L_00ACFD54; if (t_ == 0xacfd8cU) goto L_00ACFD8C; if (t_ == 0xacfdbcU) goto L_00ACFDBC; }
L_00ACFBA4:;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) 0;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7633));
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (v1 + 7804)) = (u32) 0; if (c_) goto L_00AD064C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7634));
    if (v0 != 0) goto L_00AD064C;
L_00ACFBD0:;
    a0 = s0; v0 = func_00983130(a0);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) { a0 = s0; goto L_00ACFC98; }
    v0 = 3;
    if (v1 == v0) { a0 = s0; goto L_00ACFC6C; }
    v0 = 1;
    if (v1 == v0) goto L_00ACFC48;
    v0 = 2;
    if (v1 == v0) { a0 = s0; goto L_00ACFC40; }
    if (v1 == 0) { a0 = s0; goto L_00ACFC1C; }
    a0 = s0; goto L_00ACFCAC;
L_00ACFC1C:;
    a1 = 37; func_00983260(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_00ACFCA8;
L_00ACFC40:;
    a1 = 12; func_00983260(a0, a1, a2, a3);
L_00ACFC48:;
    a0 = s0; func_0096F290(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_00ACFCA8;
L_00ACFC6C:;
    func_00953400(a0, f12.f, f13.f);
    a0 = s0; func_00944A50(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_00ACFCA8;
L_00ACFC98:;
    func_0099E470(a0, f12.f, f13.f, f14.f, f15.f);
    (*(volatile u8 *) (u32) (s0 + 36)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 469)) = (u8) 0;
L_00ACFCA8:;
    a0 = s0;
L_00ACFCAC:;
    func_009E02F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    v0 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_00ACFDC0;
L_00ACFCBC:;
    a0 = s0; func_0099E470(a0, f12.f, f13.f, f14.f, f15.f);
    (*(volatile u8 *) (u32) (s0 + 36)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 469)) = (u8) 0; v0 = func_00A07B40();
    if (v0 == 0) goto L_00ACFDBC;
    a0 = s0;
    a1 = 37; func_00983260(a0, a1, a2, a3);
    goto L_00ACFDBC;
L_00ACFCEC:;
    v0 = 2;
    a0 = s0;
    (*(volatile u8 *) (u32) (s0 + 36)) = (u8) v0; func_0096F290(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = (s32) 0x590000U;
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_00ACFDBC;
L_00ACFD10:;
    a0 = s0; func_0096F290(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7633));
    if (v0 != 0) goto L_00AD0670;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7634));
    if (v0 != 0) goto L_00AD0670;
L_00ACFD38:;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1; goto L_00ACFDBC;
L_00ACFD54:;
    v1 = (*(volatile s32 *) (u32) (s0 + 184));
    v0 = (*(volatile s32 *) (u32) (s0 + 176));
    if (v0 != v1) { (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v1; goto L_00ACFD64; }
L_00ACFD64:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7633));
    if (v0 != 0) goto L_00AD0694;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7634));
    if (v0 == 0) goto L_00ACFDBC;
    goto L_00AD0694;
L_00ACFD8C:;
    v0 = (s32) 0x5e0000U;
    v0 = (s32) ((u32) v0 + 0x3944U);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = (*(volatile s32 *) (u32) (v0 + 8));
    { u32 t_ = (u32) v0; a1 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (v0 + 7804)) = (u32) v1;
L_00ACFDBC:;
    v0 = (*(volatile u8 *) (u32) (s0 + 22));
L_00ACFDC0:;
    v1 = 78;
    if (v0 == v1) goto L_00AD05BC;
    v1 = 75;
    if (v0 == v1) goto L_00AD05A4;
    v1 = 226;
    if (v0 == v1) goto L_00AD058C;
    v1 = 225;
    if (v0 == v1) goto L_00AD0574;
    v1 = 81;
    if (v0 == v1) goto L_00AD055C;
    v1 = 71;
    if (v0 == v1) goto L_00AD0544;
    v1 = 70;
    if (v0 == v1) goto L_00AD052C;
    v1 = 51;
    if (v0 == v1) goto L_00AD0514;
    v1 = 79;
    if (v0 == v1) goto L_00AD04FC;
    v1 = 72;
    if (v0 == v1) goto L_00AD04E4;
    v1 = 50;
    if (v0 == v1) goto L_00AD04CC;
    v1 = 46;
    if (v0 == v1) goto L_00AD04B4;
    v1 = 74;
    if (v0 == v1) goto L_00AD049C;
    v1 = 73;
    if (v0 == v1) goto L_00AD0484;
    v1 = 224;
    if (v0 == v1) { a0 = s0; goto L_00AD0474; }
    v1 = 255;
    if (v0 == v1) { a0 = s0; goto L_00AD0454; }
    v1 = 253;
    if (v0 == v1) { a0 = s0; goto L_00AD0444; }
    v1 = 40;
    if (v0 == v1) { a0 = s0; goto L_00AD0434; }
    v1 = 39;
    if (v0 == v1) { a0 = s0; goto L_00AD0424; }
    v1 = 37;
    if (v0 == v1) { a0 = s0; goto L_00AD0414; }
    v1 = 69;
    if (v0 == v1) { a0 = s0; goto L_00AD0404; }
    v1 = 65;
    if (v0 == v1) goto L_00AD03F4;
    v1 = 10;
    if (v0 == v1) goto L_00AD03F4;
    v1 = 29;
    if (v0 == v1) { a0 = s0; goto L_00AD03E4; }
    v1 = 27;
    if (v0 == v1) { a0 = s0; goto L_00AD03D4; }
    v1 = 26;
    if (v0 == v1) { a0 = s0; goto L_00AD03C4; }
    v1 = 23;
    if (v0 == v1) { a0 = s0; goto L_00AD03B4; }
    v1 = 38;
    if (v0 == v1) { a0 = s0; goto L_00AD03A4; }
    v1 = 42;
    if (v0 == v1) { a0 = s0; goto L_00AD0394; }
    v1 = 24;
    if (v0 == v1) { a0 = s0; goto L_00AD0384; }
    v1 = 22;
    if (v0 == v1) { a0 = s0; goto L_00AD0374; }
    v1 = 64;
    if (v0 == v1) { a0 = s0; goto L_00AD0364; }
    v1 = 54;
    if (v0 == v1) { a0 = s0; goto L_00AD0354; }
    v1 = 53;
    if (v0 == v1) { a0 = s0; goto L_00AD0344; }
    v1 = 21;
    if (v0 == v1) { a0 = s0; goto L_00AD0334; }
    v1 = 67;
    if (v0 == v1) goto L_00AD0324;
    v1 = 15;
    if (v0 == v1) goto L_00AD0324;
    v1 = 20;
    if (v0 == v1) { a0 = s0; goto L_00AD0314; }
    v1 = 66;
    if (v0 == v1) { a0 = s0; goto L_00AD0304; }
    v1 = 36;
    if (v0 == v1) { a0 = s0; goto L_00AD02F4; }
    v1 = 18;
    if (v0 == v1) { a0 = s0; goto L_00AD02E4; }
    v1 = 17;
    if (v0 == v1) { a0 = s0; goto L_00AD02D4; }
    v1 = 16;
    if (v0 == v1) { a0 = s0; goto L_00AD02C4; }
    v1 = 49;
    if (v0 == v1) { a0 = s0; goto L_00AD02B4; }
    v1 = 48;
    if (v0 == v1) { a0 = s0; goto L_00AD02A4; }
    v1 = 47;
    if (v0 == v1) { a0 = s0; goto L_00AD0294; }
    v1 = 43;
    if (v0 == v1) { a0 = s0; goto L_00AD0284; }
    v1 = 14;
    if (v0 == v1) { a0 = s0; goto L_00AD0274; }
    v1 = 12;
    if (v0 == v1) { a0 = s0; goto L_00AD0264; }
    v1 = 45;
    if (v0 == v1) { a0 = s0; goto L_00AD0254; }
    v1 = 44;
    if (v0 == v1) { a0 = s0; goto L_00AD0244; }
    v1 = 33;
    if (v0 == v1) { a0 = s0; goto L_00AD0234; }
    v1 = 31;
    if (v0 == v1) { a0 = s0; goto L_00AD0224; }
    v1 = 30;
    if (v0 == v1) { a0 = s0; goto L_00AD0214; }
    v1 = 32;
    if (v0 == v1) { a0 = s0; goto L_00AD0204; }
    v1 = 34;
    if (v0 == v1) { a0 = s0; goto L_00AD01F4; }
    v1 = 68;
    if (v0 == v1) goto L_00AD01E4;
    v1 = 13;
    if (v0 == v1) goto L_00AD01E4;
    v1 = 11;
    if (v0 == v1) { a0 = s0; goto L_00AD01D4; }
    v1 = 9;
    if (v0 == v1) { a0 = s0; goto L_00AD01C4; }
    v1 = 8;
    if (v0 == v1) { a0 = s0; goto L_00AD01B4; }
    v1 = 6;
    if (v0 == v1) goto L_00AD01A4;
    v1 = 5;
    if (v0 == v1) goto L_00AD01A4;
    v1 = 3;
    if (v0 == v1) { a0 = s0; goto L_00AD0194; }
    v1 = 2;
    if (v0 == v1) { a0 = s0; goto L_00AD0184; }
    v1 = 4;
    if (v0 == v1) goto L_00AD0174;
    v1 = 251;
    if (v0 == v1) goto L_00AD0174;
    v1 = 1;
    if (v0 == v1) { a0 = s0; goto L_00AD0164; }
    v1 = 25;
    if (v0 == v1) { a0 = s0; goto L_00AD0154; }
    v1 = 19;
    if (v0 == v1) { a0 = s0; goto L_00AD0144; }
    v1 = 7;
    if (v0 == v1) { a0 = s0; goto L_00AD0134; }
    if (v0 == 0) { a0 = s0; goto L_00AD0124; }
    a0 = s0; goto L_00AD0464;
L_00AD0124:;
    func_00ACA520(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile u8 *) (u32) (s0 + 98)); goto L_00AD05D0;
L_00AD0134:;
    func_0097DF20(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0144:;
    func_00AC5020(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0154:;
    func_00AB6280(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0164:;
    func_00AC8D40(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0174:;
    a0 = s0; func_00AD7000(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0184:;
    func_00ABA120(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0194:;
    func_00AB7970(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD01A4:;
    a0 = s0; func_00A7C090(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD01B4:;
    func_00A70B00(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD01C4:;
    func_00A95C30(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD01D4:;
    func_00A813A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD01E4:;
    a0 = s0; func_00AE6F90(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD01F4:;
    func_00A56850(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0204:;
    func_00A3EB60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0214:;
    func_00A392F0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0224:;
    func_00A3DC60(a0, a1, a2, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0234:;
    func_00A3AAA0(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0244:;
    func_009F2940(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0254:;
    func_009F0150(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0264:;
    func_00AF3230(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0274:;
    func_00B18620(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0284:;
    func_009F1470(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0294:;
    func_009EE9B0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD02A4:;
    func_009E8460(a0, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD02B4:;
    func_00B940B0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00AD05CC;
L_00AD02C4:;
    func_00B23230(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD02D4:;
    func_00B7C940(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD02E4:;
    func_00ACF1E0(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD02F4:;
    func_00A65BD0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0304:;
    func_00A3C700(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0314:;
    func_00C03440(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0324:;
    a0 = s0; func_00A35BF0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0334:;
    func_00A8FD80(a0, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0344:;
    func_00BAA070(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0354:;
    func_009E65D0(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0364:;
    func_00A43A90(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0374:;
    func_00A2E740(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0384:;
    func_00ACCFD0(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0394:;
    func_00A380B0(a0, a1, a2, a3, a4, a5, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD03A4:;
    func_00A53EA0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD03B4:;
    func_00A2A4C0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f);
    goto L_00AD05CC;
L_00AD03C4:;
    func_00A28AD0(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD03D4:;
    func_00A46AB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD03E4:;
    func_00A527E0(a0, a1, a2, a3, a4, f12.f, f13.f);
    goto L_00AD05CC;
L_00AD03F4:;
    a0 = s0; func_00A6C360(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0404:;
    func_00ACC100(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00AD05CC;
L_00AD0414:;
    func_00A65BD0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0424:;
    func_00A53EA0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0434:;
    func_00A53EA0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0444:;
    func_00BA27F0(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0454:;
    func_00B27BC0(a0, a1, a2, a3, a4, f12.f, f13.f);
    goto L_00AD05CC;
L_00AD0464:;
    func_009CD440(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0474:;
    func_00BA74A0(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AD05CC;
L_00AD0484:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8976));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD049C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8980));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD04B4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8984));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD04CC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8988));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD04E4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8992));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD04FC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8996));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD0514:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9000));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD052C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9004));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD0544:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9008));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD055C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9012));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD0574:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9016));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD058C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9024));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD05A4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9020));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00AD05CC;
L_00AD05BC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 9028));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00AD05CC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 98));
L_00AD05D0:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06B8; }
L_00AD05D8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 62));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06C0; }
L_00AD05E4:;
    v1 = (*(volatile u8 *) (u32) (s0 + 99));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06C8; }
L_00AD05F0:;
    v1 = (*(volatile u8 *) (u32) (s0 + 101));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06D0; }
L_00AD05FC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 65));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06D8; }
L_00AD0608:;
    v1 = (*(volatile u8 *) (u32) (s0 + 63));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06E0; }
L_00AD0614:;
    v1 = (*(volatile u8 *) (u32) (s0 + 68));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06E8; }
L_00AD0620:;
    v1 = (*(volatile u8 *) (u32) (s0 + 70));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06F0; }
L_00AD062C:;
    v1 = (*(volatile u8 *) (u32) (s0 + 64));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD06F8; }
L_00AD0638:;
    v1 = (*(volatile u8 *) (u32) (s0 + 258));
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_00AD0700; }
L_00AD0644:;
    goto L_00AD0708;
L_00AD064C:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 7700)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = v0 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 180));
    v0 = v0 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v0; goto L_00ACFBD0;
L_00AD0670:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 7700)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = v0 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 180));
    v0 = v0 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v0; goto L_00ACFD38;
L_00AD0694:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 7700)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 176));
    v0 = v0 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 180));
    v0 = v0 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v0; goto L_00ACFDBC;
L_00AD06B8:;
    (*(volatile u8 *) (u32) (s0 + 98)) = (u8) v1; goto L_00AD05D8;
L_00AD06C0:;
    (*(volatile u8 *) (u32) (s0 + 62)) = (u8) v1; goto L_00AD05E4;
L_00AD06C8:;
    (*(volatile u8 *) (u32) (s0 + 99)) = (u8) v1; goto L_00AD05F0;
L_00AD06D0:;
    (*(volatile u8 *) (u32) (s0 + 101)) = (u8) v1; goto L_00AD05FC;
L_00AD06D8:;
    (*(volatile u8 *) (u32) (s0 + 65)) = (u8) v1; goto L_00AD0608;
L_00AD06E0:;
    (*(volatile u8 *) (u32) (s0 + 63)) = (u8) v1; goto L_00AD0614;
L_00AD06E8:;
    (*(volatile u8 *) (u32) (s0 + 68)) = (u8) v1; goto L_00AD0620;
L_00AD06F0:;
    (*(volatile u8 *) (u32) (s0 + 70)) = (u8) v1; goto L_00AD062C;
L_00AD06F8:;
    (*(volatile u8 *) (u32) (s0 + 64)) = (u8) v1; goto L_00AD0638;
L_00AD0700:;
    (*(volatile u8 *) (u32) (s0 + 258)) = (u8) v1; goto L_00AD0644;
L_00AD0708:;
    return;
}
