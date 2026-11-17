/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C13110(s32, s32, s32, s32);
s32 func_00C13280(s32);
s32 func_00C137C0(s32);

s32 func_00C4F070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    a2 = (s32) 0xc50000U;
    a2 = (s32) ((u32) a2 + 0xfffff980U);
    s2 = a1;
    s1 = 0;
    f21.i = (s32) 0;
    f20.i = f21.i; v0 = func_00C13110(a0, a1, a2, a3);
    s0 = v0;
    v0 = (u64) s0 < (u64) s2;
    if (v0 != 0) goto L_00C4F108;
L_00C4F0BC:;
    if (s1 == 0) goto L_00C4F1F8;
    f0.i = (s32) s1;
    v0 = (s32) 0x42c80000U;
    f3.i = (s32) v0;
    v1 = (s32) 0xcd0000U;
    f2.f = (f32) f0.i;
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -18052)) = (u32) 0;
    v0 = (s32) 0xcd0000U;
    f1.f = f3.f * f21.f;
    f0.f = f3.f * f20.f;
    f1.f = f1.f / f2.f;
    f0.f = f0.f / f2.f;
    (*(volatile f32 *) (u32) (v1 + -18056)) = f1.f;
    (*(volatile f32 *) (u32) (v0 + -18048)) = f0.f;
L_00C4F0FC:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffb978U); goto L_00C4F214;
L_00C4F108:;
    a0 = s0; v0 = func_00C13280(a0);
    a3 = (*(volatile u16 *) (u32) (v0 + 2));
    v0 = 312;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a3 / (s32) v0); hi = (s32) ((s32) a3 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) 0x42ad0000U;
    v1 = v0 | 0x2eeb;
    f1.i = (s32) v1;
    v0 = (s32) 0x46520000U;
    f2.i = (s32) a0;
    v1 = v0 | 0x6400;
    f2.f = (f32) f2.i;
    v0 = (s32) 0x3c230000U;
    f1.f = f1.f * f2.f;
    f0.i = (s32) v1;
    f1.f = f1.f - f0.f;
    v1 = v0 | 0xd70a;
    v0 = (s32) 0xd20d0000U;
    v0 = v0 | 0x20d3;
    f0.i = (s32) 0;
    f2.i = (s32) v1;
    acc = f0.f + f21.f;
    f21.f = acc + f2.f * f1.f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a3 >> 31);
    a1 = hi;
    v0 = (s32) 0x42a70000U;
    v1 = v0 | 0xfec;
    a0 = s0;
    acc = f0.f + f20.f;
    v0 = (s32) 0x46080000U;
    a1 = (s32) ((u32) a1 + (u32) a3);
    v0 = v0 | 0x6400;
    a1 = (s32) a1 >> 8;
    s1 = (s32) ((u32) s1 + 0x1U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    f1.i = (s32) a1;
    f0.i = (s32) v1;
    f1.f = (f32) f1.i;
    f1.f = f0.f * f1.f;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f20.f = acc + f2.f * f0.f; v0 = func_00C137C0(a0);
    a2 = (s32) 0xc50000U;
    a0 = v0;
    a1 = s2;
    a2 = (s32) ((u32) a2 + 0xfffff980U); v0 = func_00C13110(a0, a1, a2, a3);
    s0 = v0;
    v0 = (u64) s0 < (u64) s2;
    if (v0 != 0) goto L_00C4F108;
    goto L_00C4F0BC;
L_00C4F1F8:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -18048)) = (u32) 0;
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18052)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -18056)) = (u32) 0; goto L_00C4F0FC;
L_00C4F214:;
    return v0;
}
