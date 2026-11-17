/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);

f32 func_00C18BB0(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    a2 = a0 & 0xffff;
    v0 = 312;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) 0x42ad0000U;
    v1 = v0 | 0x2eeb;
    f1.i = (s32) v1;
    v0 = (s32) 0x46520000U;
    f2.i = (s32) a0;
    v1 = v0 | 0x6400;
    f2.f = (f32) f2.i;
    v0 = (s32) 0xd20d0000U;
    v0 = v0 | 0x20d3;
    f1.f = f1.f * f2.f;
    f0.i = (s32) v1;
    f0.f = f1.f - f0.f;
    f3.f = f0.f - f12.f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    v0 = (s32) 0x42a70000U;
    v1 = v0 | 0xfec;
    f1.i = (s32) v1;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    v1 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) v1 >> 8;
    v1 = (s32) ((u32) v1 + (u32) a1);
    f2.i = (s32) v1;
    f0.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    f0.f = f1.f - f0.f;
    f0.f = f0.f - f13.f;
    acc = f0.f * f0.f;
    f12.f = acc + f3.f * f3.f; f0.f = func_001CD9E0(); return f0.f;
}
