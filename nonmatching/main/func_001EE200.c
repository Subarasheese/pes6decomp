/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 __floatundisf(s64, s64, s64, s64, s64, s64);
s64 __udivdi3(s64, s64);
s64 __umoddi3(s64, s64, s64, s64, s64, s64, s64, s64);

void func_001EE200(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    s64 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;

    s5 = a1;
    if (a0 == 0) goto L_001EE42C;
    if (s5 == 0) goto L_001EE42C;
    v1 = 1;
L_001EE23C:;
    if (v1 == 0) goto L_001EE434;
    s0 = (*(volatile s32 *) (u32) (a0 + 208));
    if (s0 == 0) goto L_001EE434;
    s1 = a0;
    s4 = 0;
L_001EE258:;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    a2 = 4;
    v0 = (*(volatile s64 *) (u32) (s1 + 216));
    s2 = 10;
    a1 = (*(volatile u16 *) (u32) (v1 + 20));
    a0 = (s64) ((u64) v0 >> 20);
    v0 = (s64) ((u64) v0 >> 4);
    a0 = a0 & 0x3ff;
    v0 = v0 & 0x3ff;
    s6 = (s64) ((u64) a0 << 48);
    a5 = (s64) ((u64) v0 << 48);
    s6 = s6 >> 48;
    a5 = a5 >> 48;
L_001EE290:;
    v0 = (s64) ((u64) s2 << 2);
    v0 = (s64) ((u64) v0 + (u64) s2);
    a2 = (s64) ((u64) a2 + (u64) (s64) -1);
    s2 = (s64) ((u64) v0 << 1);
    if (a2 != 0) goto L_001EE290;
    a3 = (s64) ((u64) a5 << 32);
    a2 = (s64) ((u64) s2 << 32);
    a3 = a3 >> 32;
    a2 = a2 >> 32;
    a4 = (s64) ((u64) a1 >> 1);
    { s64 m_ = (s64) (u64) (u32) a3 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = hi;
    v0 = s2 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a0; a0 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a0 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v0 = a5 >> 32;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s64) ((u64) v1 + (u64) v0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 + (u64) a0);
    a0 = (s64) ((u64) a4 + (u64) v0); v0 = __udivdi3(a0, a1);
    s3 = v0;
    a1 = s2;
    a0 = s3; v0 = __umoddi3(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = v0; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f20.i = f0.i;
    a0 = s2; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f20.f = f20.f / f0.f;
    a0 = s3;
    a1 = s2; v0 = __udivdi3(a0, a1);
    a0 = v0; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f0.f = f0.f + f20.f;
    a5 = (s64) ((u64) s6 << 48);
    a5 = a5 >> 48;
    v1 = 4;
    s2 = 10;
    (*(volatile f32 *) (u32) s5) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    a1 = (*(volatile u16 *) (u32) (v0 + 22));
L_001EE358:;
    v0 = (s64) ((u64) s2 << 2);
    v0 = (s64) ((u64) v0 + (u64) s2);
    v1 = (s64) ((u64) v1 + (u64) (s64) -1);
    s2 = (s64) ((u64) v0 << 1);
    if (v1 != 0) goto L_001EE358;
    a3 = (s64) ((u64) a5 << 32);
    a2 = (s64) ((u64) s2 << 32);
    a3 = a3 >> 32;
    a2 = a2 >> 32;
    a4 = (s64) ((u64) a1 >> 1);
    { s64 m_ = (s64) (u64) (u32) a3 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = hi;
    v0 = s2 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a0; a0 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a0 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v0 = a5 >> 32;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s64) ((u64) v1 + (u64) v0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 + (u64) a0);
    a0 = (s64) ((u64) a4 + (u64) v0); v0 = __udivdi3(a0, a1);
    s3 = v0;
    a1 = s2;
    a0 = s3; v0 = __umoddi3(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = v0; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f20.i = f0.i;
    a0 = s2; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f20.f = f20.f / f0.f;
    a0 = s3;
    a1 = s2; v0 = __udivdi3(a0, a1);
    a0 = v0; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f0.f = f0.f + f20.f;
    s4 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) 0x3f800000U;
    v1 = s4 < 4;
    s1 = (s32) ((u32) s1 + 0x8U);
    (*(volatile f32 *) (u32) (s5 + 4)) = f0.f;
    (*(volatile u32 *) (u32) (s5 + 8)) = (u32) a0;
    { s32 c_ = v1 != 0; s5 = (s32) ((u32) s5 + 0xcU); if (c_) goto L_001EE258; }
    goto L_001EE438;
L_001EE42C:;
    v1 = 0; goto L_001EE23C;
L_001EE434:;
L_001EE438:;
    return;
}
