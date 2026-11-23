/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
void func_0020E310(s64, s64);
void func_00211900(s64, s64, s64);
void func_00211AB0(s64, s64, s64, s64, s64);
void func_002DEF50(s64, s64);
void func_002DF0A0(s64, s64);
s64 func_002E1540(s64, s64);

void mnSubMenuSetWork(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v0 = (*(volatile u8 *) (u32) (a0 + 9));
    at = (u64) v0 < (u64) (s64) 8;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_00211848; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x44f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x21122cU) goto L_0021122C; if (t_ == 0x2113a0U) goto L_002113A0; if (t_ == 0x211414U) goto L_00211414; if (t_ == 0x211564U) goto L_00211564; if (t_ == 0x2115b8U) goto L_002115B8; if (t_ == 0x2116d0U) goto L_002116D0; if (t_ == 0x211848U) goto L_00211848; }
L_0021122C:;
    v1 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (s32) 0x41200000U;
    f1.i = (s32) v0;
    s2 = 0;
    s1 = s0;
    v0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0;
    v0 = v0 >> 56;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    f0.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0;
    f0.f = (f32) f0.i;
    f0.f = f1.f * f0.f;
    f0.f = f0.f / f1.f;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
L_00211274:;
    a0 = (*(volatile s32 *) (u32) (s1 + 1428));
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00211274; }
    s1 = (*(volatile u8 *) (u32) (s0 + 11));
    v0 = (s32) 0x41cc0000U;
    f1.i = (s32) v0;
    if (s1 < 0) { v1 = (s32) ((u32) s1 >> 1); goto L_002112B4; }
    f0.i = (s32) s1;
    f0.f = (f32) f0.i; goto L_002112CC;
L_002112B4:;
    v0 = s1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_002112CC:;
    f20.f = f1.f * f0.f;
    v0 = (s32) 0x437f0000U;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_002112F0; }
    f20.i = f0.i;
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
L_002112F0:;
    v0 = v0 & 0x1;
    if (v0 == 0) { s2 = (*(volatile s8 *) (u32) (s0 + 12)); goto L_00211304; }
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    s2 = (s32) ((u32) v0 + 0x1U);
L_00211304:;
    { s32 c_ = s2 <= 0; s4 = 0; if (c_) goto L_00211338; }
    s3 = s0;
L_00211310:;
    a2 = (*(volatile s8 *) (u32) (s0 + 13));
    a0 = (s32) ((u32) s3 + 0x10U);
    a1 = s4;
    a3 = s1;
    a4 = 10; func_00211AB0(a0, a1, a2, a3, a4);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s2;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x7cU); if (c_) goto L_00211310; }
L_00211338:;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_00211360; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_00211378;
L_00211360:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
    a1 = a1 & 0xff;
L_00211378:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1440)); func_002DEF50(a0, a1);
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = v0 < 10;
    if (v0 != 0) { v1 = (*(volatile s8 *) (u32) (s0 + 13)); goto L_0021184C; }
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; goto L_00211848;
L_002113A0:;
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_002113D8; }
    s2 = s0;
L_002113B0:;
    a2 = (*(volatile s8 *) (u32) (s0 + 13));
    a0 = (s32) ((u32) s2 + 0x10U);
    a1 = s1; func_00211900(a0, a1, a2);
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x7cU); if (c_) goto L_002113B0; }
L_002113D8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
    v0 = (s32) v0 >> 1;
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00211848;
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x8cU); func_0020E310(a0, a1);
    a0 = 3;
    a1 = (s32) ((u32) sp + 0x88U); func_0020E310(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
    v0 = v0 & 0xfd;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v0; goto L_00211848;
L_00211414:;
    a0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (s32) 0x427f0000U;
    f1.i = (s32) v0;
    v1 = 4;
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    v0 = (s32) ((u32) v1 - (u32) v0);
    s1 = v0 & 0xff;
    if (s1 < 0) { v1 = (s32) ((u32) s1 >> 1); goto L_00211450; }
    f0.i = (s32) s1;
    f0.f = (f32) f0.i; goto L_00211468;
L_00211450:;
    v0 = s1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00211468:;
    f20.f = f1.f * f0.f;
    v0 = (s32) 0x437f0000U;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_0021148C; }
    f20.i = f0.i;
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
L_0021148C:;
    v0 = v0 & 0x1;
    if (v0 == 0) { s2 = (*(volatile s8 *) (u32) (s0 + 12)); goto L_002114A0; }
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    s2 = (s32) ((u32) v0 + 0x1U);
L_002114A0:;
    { s32 c_ = s2 <= 0; s4 = 0; if (c_) goto L_002114D8; }
    s3 = s0;
L_002114AC:;
    a2 = (*(volatile s8 *) (u32) (s0 + 13));
    a0 = (s32) ((u32) s3 + 0x10U);
    a1 = s4;
    a3 = s1;
    a4 = 4; func_00211AB0(a0, a1, a2, a3, a4);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s2;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x7cU); if (c_) goto L_002114AC; }
L_002114D8:;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_00211500; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_00211518;
L_00211500:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
    a1 = a1 & 0xff;
L_00211518:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1440)); func_002DEF50(a0, a1);
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = v0 < 4;
    if (v0 != 0) goto L_00211848;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) 0;
    s2 = 0;
    s1 = s0;
L_0021153C:;
    a0 = (*(volatile s32 *) (u32) (s1 + 1428));
    a1 = 0; func_001F3D10(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0021153C; }
    v0 = 4;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; goto L_00211848;
L_00211564:;
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    v0 = v0 < 6;
    if (v0 != 0) goto L_00211848;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) 0;
    s2 = 0;
    s1 = s0;
L_00211590:;
    a0 = (*(volatile s32 *) (u32) (s1 + 1428));
    a1 = 1; func_001F3D10(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00211590; }
    v0 = 6;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; goto L_00211848;
L_002115B8:;
    v1 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (s32) 0x427f0000U;
    f1.i = (s32) v0;
    v0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
    s1 = (*(volatile u8 *) (u32) (s0 + 11));
    if (s1 < 0) { v1 = (s32) ((u32) s1 >> 1); goto L_002115E4; }
    f0.i = (s32) s1;
    f0.f = (f32) f0.i; goto L_002115FC;
L_002115E4:;
    v0 = s1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_002115FC:;
    f20.f = f1.f * f0.f;
    v0 = (s32) 0x437f0000U;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_00211620; }
    f20.i = f0.i;
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
L_00211620:;
    v0 = v0 & 0x1;
    if (v0 == 0) { s2 = (*(volatile s8 *) (u32) (s0 + 12)); goto L_00211634; }
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    s2 = (s32) ((u32) v0 + 0x1U);
L_00211634:;
    { s32 c_ = s2 <= 0; s4 = 0; if (c_) goto L_00211668; }
    s3 = s0;
L_00211640:;
    a2 = (*(volatile s8 *) (u32) (s0 + 13));
    a0 = (s32) ((u32) s3 + 0x10U);
    a1 = s4;
    a3 = s1;
    a4 = 4; func_00211AB0(a0, a1, a2, a3, a4);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s2;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x7cU); if (c_) goto L_00211640; }
L_00211668:;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_00211690; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_002116A8;
L_00211690:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
    a1 = a1 & 0xff;
L_002116A8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1440)); func_002DEF50(a0, a1);
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = v0 < 4;
    if (v0 != 0) goto L_00211848;
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; goto L_00211848;
L_002116D0:;
    v1 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (s32) 0x41200000U;
    f1.i = (s32) v0;
    s1 = 0;
    s2 = s0;
    v0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 11)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0;
    v0 = v0 >> 56;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    f0.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0;
    f0.f = (f32) f0.i;
    f0.f = f1.f * f0.f;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
L_00211714:;
    a0 = (*(volatile s32 *) (u32) (s2 + 1428));
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00211714; }
    a0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = (s32) 0x41cc0000U;
    v1 = 10;
    f1.i = (s32) v0;
    v0 = (s32) ((u32) v1 - (u32) a0);
    s1 = v0 & 0xff;
    if (s1 < 0) { v1 = (s32) ((u32) s1 >> 1); goto L_00211760; }
    f0.i = (s32) s1;
    f0.f = (f32) f0.i; goto L_00211778;
L_00211760:;
    v0 = s1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00211778:;
    f20.f = f1.f * f0.f;
    v0 = (s32) 0x437f0000U;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_0021179C; }
    f20.i = f0.i;
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
L_0021179C:;
    v0 = v0 & 0x1;
    if (v0 == 0) { s2 = (*(volatile s8 *) (u32) (s0 + 12)); goto L_002117B0; }
    v0 = (*(volatile s8 *) (u32) (s0 + 12));
    s2 = (s32) ((u32) v0 + 0x1U);
L_002117B0:;
    { s32 c_ = s2 <= 0; s4 = 0; if (c_) goto L_002117E8; }
    s3 = s0;
L_002117BC:;
    a2 = (*(volatile s8 *) (u32) (s0 + 13));
    a0 = (s32) ((u32) s3 + 0x10U);
    a1 = s4;
    a3 = s1;
    a4 = 10; func_00211AB0(a0, a1, a2, a3, a4);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s2;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x7cU); if (c_) goto L_002117BC; }
L_002117E8:;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_00211810; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_00211828;
L_00211810:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
    a1 = a1 & 0xff;
L_00211828:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1440)); func_002DEF50(a0, a1);
    v0 = (*(volatile s8 *) (u32) (s0 + 11));
    v0 = v0 < 10;
    if (v0 != 0) goto L_00211848;
    v0 = 1; goto L_002118DC;
L_00211848:;
    v1 = (*(volatile s8 *) (u32) (s0 + 13));
L_0021184C:;
    a1 = (s32) ((u32) sp + 0x70U);
    v0 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x38U); v0 = func_002E1540(a0, a1);
    f3.f = (*(volatile f32 *) (u32) (sp + 112));
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    v1 = (s32) 0xc0000000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 120));
    v0 = (s32) 0xc0400000U;
    f3.f = f3.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f3.f;
    f3.i = (s32) v1;
    f0.f = f0.f + f3.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 116));
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 124));
    f0.i = (s32) v0;
    f2.f = f2.f + f3.f;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 1440));
    a1 = (s32) ((u32) sp + 0x70U); func_002DF0A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 1448));
    if (v0 == 0) { v0 = 0; goto L_002118DC; }
    a1 = (*(volatile s32 *) (u32) (s0 + 1452));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v0 = 0;
L_002118DC:;
    return;
}
