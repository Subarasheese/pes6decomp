/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
s64 func_0022D200(s64, s64);
s64 func_0022D460(s64, s64);
s64 func_009177C0(s64);

void func_00906B50(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;
    s64 frame[66];
    s64 sp = (s32) (u32) frame;

    v0 = -1;
    (*(volatile u8 *) (u32) (sp + 507)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 448)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 505)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 503)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 501)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 500)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 498)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 496)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 520)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 518)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 516)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 514)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 513)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 511)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 509)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 448));
L_00906BC0:;
    a3 = v0;
    { s32 c_ = a3 >= 0; a2 = a3 & 0x1; if (c_) goto L_00906BD8; }
    if (a2 == 0) { v0 = (*(volatile u8 *) (u32) (sp + 448)); goto L_00906BDC; }
    a2 = (s32) ((u32) a2 + 0xfffffffeU);
L_00906BD8:;
    v0 = (*(volatile u8 *) (u32) (sp + 448));
L_00906BDC:;
    v1 = (s32) ((u32) a3 << 2);
    a1 = (*(volatile s32 *) (u32) (gp + -31680));
    (*(volatile u8 *) (u32) (sp + 432)) = (u8) 0;
    a0 = v0;
    v0 = (s32) ((u32) v1 + (u32) a3);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    { u32 a_ = (u32) (sp + 400) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (a1 + 44));
    (*(volatile u8 *) (u32) (sp + 416)) = (u8) v0;
    v0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s3 = (s32) ((u32) v0 + 0x1f0U);
    v0 = (s32) ((u32) s3 + 0x4U);
    s5 = (s32) ((u32) s3 + 0x1U);
    { u32 a_ = (u32) (sp + 384) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s6 = (s32) ((u32) s3 + 0x2U);
    v0 = (s32) ((u32) s3 + 0x6U);
    s7 = (s32) ((u32) s3 + 0x3U);
    { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    fp = (s32) ((u32) s3 + 0x5U);
    v0 = (s32) ((u32) s3 + 0x7U);
    s2 = (s32) ((u32) s3 + 0x9U);
    { u32 a_ = (u32) (sp + 352) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0x8U);
    { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0xaU);
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0xbU);
    { u32 a_ = (u32) (sp + 304) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s3 + 0xcU);
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00906C70:;
    v0 = (*(volatile u8 *) (u32) (sp + 432));
    v1 = v0;
    { u32 a_ = (u32) (sp + 400) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v1 + (u32) v0);
    s1 = v0 & 0xff;
    a0 = s1; v0 = func_009177C0(a0);
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
    { s32 c_ = v1 == 0; s0 = v0; if (c_) goto L_009070F8; }
    a1 = (*(volatile u16 *) (u32) (s0 + 14));
    a0 = (*(volatile u8 *) (u32) (sp + 416)); v0 = func_0022D460(a0, a1);
    a0 = v0 & 0xff;
    if (a0 == 0) goto L_00906D30;
    at = a0 < 4;
    if (at == 0) goto L_00906D30;
    v1 = (*(volatile s8 *) (u32) s3);
    v0 = -1;
    if (v1 != v0) goto L_00906D18;
    (*(volatile u8 *) (u32) s3) = (u8) s1;
    (*(volatile u8 *) (u32) s5) = (u8) a0; goto L_00906D30;
L_00906D18:;
    v0 = (*(volatile s8 *) (u32) s5);
    at = a0 < v0;
    if (at == 0) goto L_00906D30;
    (*(volatile u8 *) (u32) s3) = (u8) s1;
    (*(volatile u8 *) (u32) s5) = (u8) a0;
L_00906D30:;
    a1 = (*(volatile u16 *) (u32) (s0 + 14));
    a0 = (*(volatile u8 *) (u32) (sp + 416)); v0 = func_0022D200(a0, a1);
    a1 = v0 & 0xff;
    if (a1 == 0) goto L_00906D88;
    at = a1 < 4;
    if (at == 0) goto L_00906D88;
    a0 = (*(volatile s8 *) (u32) s6);
    v1 = -1;
    if (a0 != v1) goto L_00906D70;
    (*(volatile u8 *) (u32) s6) = (u8) s1;
    (*(volatile u8 *) (u32) s7) = (u8) a1; goto L_00906D88;
L_00906D70:;
    v1 = (*(volatile s8 *) (u32) s7);
    at = a1 < v1;
    if (at == 0) goto L_00906D88;
    (*(volatile u8 *) (u32) s6) = (u8) s1;
    (*(volatile u8 *) (u32) s7) = (u8) a1;
L_00906D88:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
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
    if (v1 == 0) goto L_00906DE8;
    { u32 a_ = (u32) (sp + 384) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s1;
L_00906DE8:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
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
    s4 = v1 & 0x7;
    at = s4 < 6;
    if (at != 0) goto L_00906EA8;
    a0 = (*(volatile s8 *) (u32) fp);
    v1 = -1;
    if (a0 != v1) goto L_00906E60;
    { u32 a_ = (u32) (sp + 368) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) fp) = (u8) s1;
    (*(volatile u8 *) (u32) v1) = (u8) s4; goto L_00906EA8;
L_00906E60:;
    { u32 a_ = (u32) (sp + 368) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile u8 *) (u32) v1);
    v1 = a0 < s4;
    if (v1 != 0) goto L_00906E98;
    if (s4 != a0) goto L_00906EA8;
    a0 = 100; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00906EA8;
L_00906E98:;
    { u32 a_ = (u32) (sp + 368) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) fp) = (u8) s1;
    (*(volatile u8 *) (u32) v1) = (u8) s4;
L_00906EA8:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
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
    if (v1 == 0) goto L_00906F70;
    { u32 a_ = (u32) (sp + 352) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile u8 *) (u32) (a0 + 137));
    v1 = (*(volatile s8 *) (u32) v1);
    a0 = -1;
    { s32 c_ = v1 != a0; s4 = a1 & 0x7; if (c_) goto L_00906F28; }
    { u32 a_ = (u32) (sp + 352) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s1;
    { u32 a_ = (u32) (sp + 336) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s4; goto L_00906F70;
L_00906F28:;
    { u32 a_ = (u32) (sp + 336) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s4 & 0xff;
    a1 = (*(volatile u8 *) (u32) v1);
    v1 = a1 < a0;
    if (v1 != 0) goto L_00906F60;
    if (a0 != a1) goto L_00906F70;
    a0 = 100; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00906F70;
L_00906F60:;
    { u32 a_ = (u32) (sp + 352) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s1;
    { u32 a_ = (u32) (sp + 336) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s4;
L_00906F70:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
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
    v1 = (s64) ((u64) v1 << 61);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_00907030;
    a1 = (*(volatile u8 *) (u32) (a0 + 137));
    v1 = -1;
    a0 = (*(volatile s8 *) (u32) s2);
    { s32 c_ = a0 != v1; s4 = a1 & 0x7; if (c_) goto L_00906FE8; }
    { u32 a_ = (u32) (sp + 320) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) s2) = (u8) s1;
    (*(volatile u8 *) (u32) v1) = (u8) s4; goto L_00907030;
L_00906FE8:;
    { u32 a_ = (u32) (sp + 320) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s4 & 0xff;
    a1 = (*(volatile u8 *) (u32) v1);
    v1 = a1 < a0;
    if (v1 != 0) goto L_00907020;
    if (a0 != a1) goto L_00907030;
    a0 = 100; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00907030;
L_00907020:;
    { u32 a_ = (u32) (sp + 320) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) s2) = (u8) s1;
    (*(volatile u8 *) (u32) v1) = (u8) s4;
L_00907030:;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
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
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_009070F8;
    a1 = (*(volatile u8 *) (u32) (a0 + 137));
    v1 = -1;
    a0 = (*(volatile s8 *) (u32) s2);
    { s32 c_ = a0 != v1; s0 = a1 & 0x7; if (c_) goto L_009070B0; }
    { u32 a_ = (u32) (sp + 304) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s1;
    { u32 a_ = (u32) (sp + 288) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s0; goto L_009070F8;
L_009070B0:;
    { u32 a_ = (u32) (sp + 288) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s0 & 0xff;
    a1 = (*(volatile u8 *) (u32) v1);
    v1 = a1 < a0;
    if (v1 != 0) goto L_009070E8;
    if (a0 != a1) goto L_009070F8;
    a0 = 100; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_009070F8;
L_009070E8:;
    { u32 a_ = (u32) (sp + 304) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s1;
    { u32 a_ = (u32) (sp + 288) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) s0;
L_009070F8:;
    v1 = (*(volatile u8 *) (u32) (sp + 432));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 432)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 432));
    v1 = v1 < 11;
    if (v1 != 0) goto L_00906C70;
    v1 = (*(volatile u8 *) (u32) (sp + 448));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 448)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 448));
    v1 = v1 < 2;
    if (v1 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 448)); goto L_00906BC0; }
    v1 = (*(volatile s8 *) (u32) (sp + 503));
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 516));
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 505));
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 518));
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 496));
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 509));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 498));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s8 *) (u32) (sp + 511));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_00907170:;
    { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_00907174:;
    if (v1 >= 0) { s4 = 0; goto L_00907234; }
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 >= 0) goto L_00907230;
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 >= 0) goto L_00907230;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 >= 0) goto L_00907230;
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 < 0) { { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_009071EC; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 < 0) goto L_009071E8;
    a2 = 2;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3912)) = (u32) a2;
    a1 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a3 = (*(volatile s8 *) (u32) (sp + 496));
    (*(volatile u32 *) (u32) (v1 + -3904)) = (u32) a2;
    a0 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (sp + 509));
    (*(volatile u8 *) (u32) (a1 + -3916)) = (u8) a3;
    (*(volatile u8 *) (u32) (a0 + -3908)) = (u8) v1; goto L_009075A8;
L_009071E8:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_009071EC:;
    if (v1 < 0) goto L_00907230;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 < 0) goto L_00907230;
    a2 = 3;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3912)) = (u32) a2;
    a1 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a3 = (*(volatile s8 *) (u32) (sp + 496));
    (*(volatile u32 *) (u32) (v1 + -3904)) = (u32) a2;
    a0 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (sp + 509));
    (*(volatile u8 *) (u32) (a1 + -3916)) = (u8) a3;
    (*(volatile u8 *) (u32) (a0 + -3908)) = (u8) v1; goto L_009075A8;
L_00907230:;
    s4 = 0;
L_00907234:;
L_00907238:;
    s3 = s4 & 0xff;
    v0 = (s32) ((u32) s3 << 1);
    (*(volatile u32 *) (u32) (sp + 484)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) 0;
    v0 = (s32) ((u32) v0 << 2);
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) (sp + 472)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u32 *) (u32) (sp + 468)) = (u32) 0;
    s2 = (s32) ((u32) v0 + 0x1f0U);
    v0 = (*(volatile s8 *) (u32) s2);
    { s32 c_ = v0 < 0; (*(volatile u32 *) (u32) (sp + 464)) = (u32) 0; if (c_) goto L_009072A0; }
    v0 = (*(volatile s32 *) (u32) (sp + 464));
    if (v0 != 0) goto L_00907288;
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 464)) = (u32) v0;
L_00907288:;
    v0 = 2;
    (*(volatile u32 *) (u32) (sp + 484)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 472)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 468)) = (u32) v0;
L_009072A0:;
    v0 = (*(volatile s8 *) (u32) (s2 + 2));
    { s32 c_ = v0 < 0; s1 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_009072E8; }
    a1 = 0;
    a0 = (s32) ((u32) sp + 0x1d0U);
    v1 = 3;
L_009072B8:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 != 0) goto L_009072C8;
    (*(volatile u32 *) (u32) a0) = (u32) v1;
L_009072C8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 2;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_009072B8; }
    v0 = 3;
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 472)) = (u32) v0;
L_009072E8:;
    v0 = (*(volatile s8 *) (u32) (s2 + 4));
    { s32 c_ = v0 < 0; s0 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00907330; }
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x1d0U);
    v1 = 4;
L_00907300:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != 0) goto L_00907310;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
L_00907310:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 3;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00907300; }
    v0 = 4;
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) v0;
L_00907330:;
    v0 = (*(volatile s8 *) (u32) (s2 + 5));
    { s32 c_ = v0 < 0; s5 = (s32) ((u32) s2 + 0x5U); if (c_) goto L_00907370; }
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x1d0U);
    v1 = 6;
L_00907348:;
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != 0) goto L_00907358;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
L_00907358:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 4;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00907348; }
    v0 = 6;
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) v0;
L_00907370:;
    v0 = (*(volatile s8 *) (u32) (s2 + 11));
    { s32 c_ = v0 < 0; s6 = (s32) ((u32) s2 + 0xbU); if (c_) goto L_00907398; }
    v0 = 7;
    (*(volatile u32 *) (u32) (sp + 484)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 472)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 468)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 464)) = (u32) v0;
L_00907398:;
    v0 = (*(volatile s8 *) (u32) (s2 + 7));
    { s32 c_ = v0 < 0; s7 = (s32) ((u32) s2 + 0x7U); if (c_) goto L_009073C0; }
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 484)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 472)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 468)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 464)) = (u32) v0;
L_009073C0:;
    v0 = (*(volatile s8 *) (u32) (s2 + 9));
    { s32 c_ = v0 < 0; fp = (s32) ((u32) s2 + 0x9U); if (c_) goto L_009073E8; }
    v0 = 5;
    (*(volatile u32 *) (u32) (sp + 484)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 480)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 476)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 472)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 468)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 464)) = (u32) v0;
L_009073E8:;
    a0 = 1000; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff;
    v1 = 6;
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) a0 / (u32) v1); hi = (s32) ((u32) a0 % (u32) v1); lo = q_; }
    a0 = hi;
    a0 = a0 & 0xff;
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a0 = (*(volatile s32 *) (u32) (a0 + 464));
    at = (u64) a0 < (u64) (s64) 8;
    if (at == 0) goto L_00907570;
    a1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + 0xffffd7d0U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0x907438U) goto L_00907438; if (t_ == 0x907468U) goto L_00907468; if (t_ == 0x907490U) goto L_00907490; if (t_ == 0x9074b8U) goto L_009074B8; if (t_ == 0x9074e0U) goto L_009074E0; if (t_ == 0x907500U) goto L_00907500; if (t_ == 0x907528U) goto L_00907528; if (t_ == 0x907550U) goto L_00907550; }
L_00907438:;
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
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) 0; goto L_00907570;
L_00907468:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s2);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 2;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00907570;
L_00907490:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s1);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 3;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00907570;
L_009074B8:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s0);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 4;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00907570;
L_009074E0:;
    a1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s5);
    a2 = (s32) ((u32) s3 << 3);
    a1 = (s32) ((u32) a1 + 0xfffff0a0U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00907570;
L_00907500:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s6);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 7;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00907570;
L_00907528:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) s7);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 1;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1; goto L_00907570;
L_00907550:;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s8 *) (u32) fp);
    a1 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0xfffff0a0U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 5;
    (*(volatile u8 *) (u32) (a1 + 20)) = (u8) a0;
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) v1;
L_00907570:;
    v1 = (s32) ((u32) s4 + 0x1U);
    s4 = v1 & 0xff;
    v1 = s4 < 2;
    if (v1 != 0) goto L_00907238;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -3916));
    if (v1 < 0) { { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_00907174; }
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -3908));
    if (v1 < 0) goto L_00907170;
L_009075A8:;
    return;
}
