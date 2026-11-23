/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
s64 Pes6Team_ResolveSpecialId(s64);
s64 func_0022D200(s64, s64);
s64 func_0022D460(s64, s64);
s64 func_009177C0(s64);

void func_009063A0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;
    s64 frame[50];
    s64 sp = (s32) (u32) frame;

    v0 = -1;
    (*(volatile u8 *) (u32) (sp + 375)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 320)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 373)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 372)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 370)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 368)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 384)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 382)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 381)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 379)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 377)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 320));
L_00906400:;
    s0 = v0;
    { s32 c_ = s0 >= 0; v1 = s0 & 0x1; if (c_) goto L_00906418; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0090641C; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_00906418:;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
L_0090641C:;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = Pes6Team_ResolveSpecialId(a0);
    (*(volatile u8 *) (u32) (sp + 288)) = (u8) v0;
    a0 = (s32) ((u32) s0 << 2);
    v0 = (*(volatile u8 *) (u32) (sp + 320));
    a0 = (s32) ((u32) a0 + (u32) s0);
    (*(volatile u8 *) (u32) (sp + 304)) = (u8) 0;
    v1 = v0;
    v0 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) v1 + (u32) sp);
    s4 = (s32) ((u32) v0 + 0x170U);
    v0 = (s32) ((u32) s4 + 0x4U);
    s3 = (s32) ((u32) s4 + 0x1U);
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s5 = (s32) ((u32) s4 + 0x2U);
    v0 = (s32) ((u32) s4 + 0x7U);
    s6 = (s32) ((u32) s4 + 0x3U);
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s7 = (s32) ((u32) s4 + 0x5U);
    v0 = (s32) ((u32) s4 + 0x8U);
    fp = (s32) ((u32) s4 + 0x6U);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00906488:;
    v0 = (*(volatile u8 *) (u32) (sp + 304));
    v1 = v0;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v1 + (u32) v0);
    s2 = v0 & 0xff;
    a0 = s2; v0 = func_009177C0(a0);
    a2 = (*(volatile u8 *) (u32) (v0 + 19));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 212));
    { s32 c_ = v1 == 0; s1 = v0; if (c_) goto L_00906750; }
    a1 = (*(volatile u16 *) (u32) (s1 + 14));
    a0 = (*(volatile u8 *) (u32) (sp + 288)); v0 = func_0022D460(a0, a1);
    a0 = v0 & 0xff;
    if (a0 == 0) goto L_00906548;
    at = a0 < 4;
    if (at == 0) goto L_00906548;
    v1 = (*(volatile s8 *) (u32) s4);
    v0 = -1;
    if (v1 != v0) goto L_00906530;
    (*(volatile u8 *) (u32) s4) = (u8) s2;
    (*(volatile u8 *) (u32) s3) = (u8) a0; goto L_00906548;
L_00906530:;
    v0 = (*(volatile s8 *) (u32) s3);
    at = a0 < v0;
    if (at == 0) goto L_00906548;
    (*(volatile u8 *) (u32) s4) = (u8) s2;
    (*(volatile u8 *) (u32) s3) = (u8) a0;
L_00906548:;
    a1 = (*(volatile u16 *) (u32) (s1 + 14));
    a0 = (*(volatile u8 *) (u32) (sp + 288)); v0 = func_0022D200(a0, a1);
    a1 = v0 & 0xff;
    if (a1 == 0) goto L_009065A0;
    at = a1 < 4;
    if (at == 0) goto L_009065A0;
    a0 = (*(volatile s8 *) (u32) s5);
    v1 = -1;
    if (a0 != v1) goto L_00906588;
    (*(volatile u8 *) (u32) s5) = (u8) s2;
    (*(volatile u8 *) (u32) s6) = (u8) a1; goto L_009065A0;
L_00906588:;
    v1 = (*(volatile s8 *) (u32) s6);
    at = a1 < v1;
    if (at == 0) goto L_009065A0;
    (*(volatile u8 *) (u32) s5) = (u8) s2;
    (*(volatile u8 *) (u32) s6) = (u8) a1;
L_009065A0:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s1 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 207));
    v1 = (s64) ((u64) v1 << 60);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_00906600;
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s2;
L_00906600:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s1 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 137));
    s0 = v1 & 0x7;
    at = s0 < 6;
    if (at != 0) goto L_009066A8;
    a0 = (*(volatile s8 *) (u32) s7);
    v1 = -1;
    if (a0 != v1) goto L_00906670;
    (*(volatile u8 *) (u32) s7) = (u8) s2;
    (*(volatile u8 *) (u32) fp) = (u8) s0; goto L_009066A8;
L_00906670:;
    a0 = (*(volatile u8 *) (u32) fp);
    v1 = a0 < s0;
    if (v1 != 0) goto L_009066A0;
    if (s0 != a0) goto L_009066A8;
    a0 = 100; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_009066A8;
L_009066A0:;
    (*(volatile u8 *) (u32) s7) = (u8) s2;
    (*(volatile u8 *) (u32) fp) = (u8) s0;
L_009066A8:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s1 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 207));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00906750;
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile u8 *) (u32) (a0 + 137));
    v1 = (*(volatile s8 *) (u32) v1);
    a0 = -1;
    { s32 c_ = v1 != a0; a1 = a1 & 0x7; if (c_) goto L_00906728; }
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s2;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_00906750;
L_00906728:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile u8 *) (u32) v1);
    v1 = a1 & 0xff;
    at = a0 < v1;
    if (at == 0) goto L_00906750;
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s2;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) a1;
L_00906750:;
    v1 = (*(volatile u8 *) (u32) (sp + 304));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 304)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 304));
    v1 = v1 < 11;
    if (v1 != 0) goto L_00906488;
    v1 = (*(volatile u8 *) (u32) (sp + 320));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 320)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 320));
    v1 = v1 < 2;
    if (v1 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 320)); goto L_00906400; }
    v1 = (*(volatile s8 *) (u32) (sp + 368));
    s7 = (*(volatile s8 *) (u32) (sp + 375));
    fp = (*(volatile s8 *) (u32) (sp + 384));
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 377));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 370));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 379));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_009067B0:;
    if (s7 >= 0) { s4 = 0; goto L_00906854; }
    if (fp >= 0) goto L_00906850;
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 < 0) { { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_0090680C; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 < 0) goto L_00906808;
    a2 = 2;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3912)) = (u32) a2;
    a1 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a3 = (*(volatile s8 *) (u32) (sp + 368));
    (*(volatile u32 *) (u32) (v1 + -3904)) = (u32) a2;
    a0 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (sp + 377));
    (*(volatile u8 *) (u32) (a1 + -3916)) = (u8) a3;
    (*(volatile u8 *) (u32) (a0 + -3908)) = (u8) v1; goto L_00906B20;
L_00906808:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_0090680C:;
    if (v1 < 0) goto L_00906850;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 < 0) goto L_00906850;
    a2 = 3;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3912)) = (u32) a2;
    a1 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a3 = (*(volatile s8 *) (u32) (sp + 370));
    (*(volatile u32 *) (u32) (v1 + -3904)) = (u32) a2;
    a0 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (sp + 379));
    (*(volatile u8 *) (u32) (a1 + -3916)) = (u8) a3;
    (*(volatile u8 *) (u32) (a0 + -3908)) = (u8) v1; goto L_00906B20;
L_00906850:;
    s4 = 0;
L_00906854:;
L_00906858:;
    s3 = s4 & 0xff;
    v0 = (s32) ((u32) s3 << 3);
    (*(volatile u32 *) (u32) (sp + 352)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) (sp + 348)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u32 *) (u32) (sp + 344)) = (u32) 0;
    s2 = (s32) ((u32) v0 + 0x170U);
    (*(volatile u32 *) (u32) (sp + 340)) = (u32) 0;
    v0 = (*(volatile s8 *) (u32) s2);
    { s32 c_ = v0 < 0; (*(volatile u32 *) (u32) (sp + 336)) = (u32) 0; if (c_) goto L_009068B8; }
    v0 = (*(volatile s32 *) (u32) (sp + 336));
    if (v0 != 0) goto L_009068A0;
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 336)) = (u32) v0;
L_009068A0:;
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 352)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 348)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 344)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 340)) = (u32) v0;
L_009068B8:;
    v0 = (*(volatile s8 *) (u32) (s2 + 4));
    { s32 c_ = v0 < 0; s1 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00906900; }
    a1 = 0;
    a0 = (s32) ((u32) sp + 0x150U);
    v1 = 4;
L_009068D0:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 != 0) goto L_009068E0;
    (*(volatile u32 *) (u32) a0) = (u32) v1;
L_009068E0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 2;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_009068D0; }
    v0 = 4;
    (*(volatile u32 *) (u32) (sp + 348)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 344)) = (u32) v0;
L_00906900:;
    v0 = (*(volatile s8 *) (u32) (s2 + 2));
    { s32 c_ = v0 < 0; s0 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00906940; }
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x150U);
    v1 = 3;
L_00906918:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != 0) goto L_00906928;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
L_00906928:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 3;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00906918; }
    v0 = 3;
    (*(volatile u32 *) (u32) (sp + 348)) = (u32) v0;
L_00906940:;
    v0 = (*(volatile s8 *) (u32) (s2 + 5));
    { s32 c_ = v0 < 0; s5 = (s32) ((u32) s2 + 0x5U); if (c_) goto L_00906980; }
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x150U);
    v1 = 6;
L_00906958:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != 0) goto L_00906968;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
L_00906968:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 4;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00906958; }
    v0 = 6;
    (*(volatile u32 *) (u32) (sp + 352)) = (u32) v0;
L_00906980:;
    v0 = (*(volatile s8 *) (u32) (s2 + 7));
    { s32 c_ = v0 < 0; s6 = (s32) ((u32) s2 + 0x7U); if (c_) goto L_009069A8; }
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 352)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 348)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 344)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 340)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 336)) = (u32) v0;
L_009069A8:;
    a0 = 1000; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff;
    v1 = 5;
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) a0 / (u32) v1); hi = (s32) ((u32) a0 % (u32) v1); lo = q_; }
    v1 = hi;
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v1 + 336));
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_00906AE8;
    a0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd7b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x9069f8U) goto L_009069F8; if (t_ == 0x906a28U) goto L_00906A28; if (t_ == 0x906a50U) goto L_00906A50; if (t_ == 0x906a78U) goto L_00906A78; if (t_ == 0x906aa0U) goto L_00906AA0; if (t_ == 0x906ac8U) goto L_00906AC8; if (t_ == 0x906ae8U) goto L_00906AE8; }
L_009069F8:;
    v1 = (s32) 0x930000U;
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a0 = s4 & 0xff;
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) v1;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) 0; goto L_00906AE8;
L_00906A28:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s2);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 2;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00906AE8;
L_00906A50:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s0);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 3;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00906AE8;
L_00906A78:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s1);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 4;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00906AE8;
L_00906AA0:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s5);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 6;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00906AE8;
L_00906AC8:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s6);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 1;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1;
L_00906AE8:;
    v1 = (s32) ((u32) s4 + 0x1U);
    s4 = v1 & 0xff;
    v1 = s4 < 2;
    if (v1 != 0) goto L_00906858;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -3916));
    if (v1 < 0) goto L_009067B0;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -3908));
    if (v1 < 0) goto L_009067B0;
L_00906B20:;
    return;
}
