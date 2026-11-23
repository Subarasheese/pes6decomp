/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
s64 func_001E6E10(s64);
s64 func_002DB830(s64);
s64 func_008B9D60(s64, s64, s64, s64);
s64 func_008B9F20(s64, s64, s64, s64);
void func_008CE6C0(s64, s64, s64, s64, f32);

void func_008CDEA0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s0 = a1;
    { s32 c_ = s0 == 0; (*(volatile u32 *) (u32) (sp + 188)) = (u32) a2; if (c_) goto L_008CE070; }
    s1 = (*(volatile s32 *) (u32) (s5 + 52));
    if (s1 == 0) { ; goto L_008CE074; }
    v0 = (*(volatile u8 *) (u32) s5);
    a1 = 1;
    if (v0 != a1) goto L_008CDF08;
    a1 = 3; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s5 + 516)); goto L_008CDF14;
L_008CDF08:;
    func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s5 + 516));
L_008CDF14:;
    a1 = (s32) ((u32) sp + 0xc0U);
    a2 = 136; v0 = func_001D7A20(a0, a1, a2);
    a0 = 20188; v0 = func_001E6E10(a0);
    a0 = s0;
    s3 = v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s5 + 468));
    s6 = v0; v0 = func_002DB830(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 196));
    a0 = (*(volatile u8 *) (u32) (s5 + 5));
    v1 = (*(volatile u8 *) (u32) (s5 + 4));
    f0.i = (s32) f0.f;
    s4 = (s32) ((u32) 0 - (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = s4 < v1;
    s7 = f0.i;
    { s32 c_ = at == 0; s0 = v0; if (c_) goto L_008CE070; }
    v1 = (*(volatile s32 *) (u32) (sp + 188));
    a0 = (s32) ((u32) s1 + (u32) s0);
    s2 = (s32) ((u32) a0 + (u32) s4);
    fp = v1 & 0x1;
    v1 = v1 & 0x2;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_008CDF88:;
    v1 = (s32) ((u32) s4 + (u32) s0);
    if (v1 < 0) goto L_008CE050;
    at = v1 < 11;
    if (at == 0) goto L_008CE050;
    { s32 c_ = fp == 0; a1 = -1; if (c_) goto L_008CDFC0; }
    a0 = (*(volatile u8 *) (u32) (s1 + 825));
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    if (a0 != v1) goto L_008CDFC0;
    a1 = 2;
L_008CDFC0:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 == 0) goto L_008CDFE0;
    a0 = (*(volatile u8 *) (u32) (s1 + 826));
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    if (a0 != v1) goto L_008CDFE0;
    a1 = 3;
L_008CDFE0:;
    v1 = -1;
    if (a1 == v1) goto L_008CE050;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + 0xffffc070U);
    a2 = (*(volatile u8 *) (u32) (s5 + 6));
    a3 = (s32) ((u32) v0 + (u32) v1);
    a0 = s6;
    v1 = (*(volatile s16 *) (u32) (a3 + 4));
    a1 = (s32) ((u32) sp + 0xc0U);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    v0 = (*(volatile s16 *) (u32) (a3 + 6));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    v1 = (s32) ((u32) s7 + (u32) a4);
    a2 = s3;
    (*(volatile f32 *) (u32) (sp + 200)) = f0.f;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 196)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 204)) = f0.f; v0 = func_008B9D60(a0, a1, a2, a3);
L_008CE050:;
    a0 = (*(volatile u8 *) (u32) (s5 + 4));
    v1 = (*(volatile u8 *) (u32) (s5 + 5));
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_008CDF88; }
L_008CE070:;
L_008CE074:;
    return;
}
