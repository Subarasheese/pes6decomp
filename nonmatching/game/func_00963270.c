/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBA70(s32);

s32 func_00963270(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    s0 = a0;
    a0 = (*(volatile u8 *) (u32) a0); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009632B0; }
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009632B0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0xc6520000U;
    a0 = (s32) ((u32) a0 << 6);
    v0 = v0 | 0x6400;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f2.i = (s32) v0;
    f1.i = (s32) 0;
    v0 = (*(volatile s16 *) (u32) (v1 + 20));
    f3.f = (*(volatile f32 *) (u32) (v1 + 224));
    acc = f1.f + f2.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 232));
    f2.i = (s32) v0;
    f4.f = (f32) f2.i;
    f2.f = acc - f4.f * f3.f;
    acc = f1.f + f1.f;
    f1.i = (s32) f2.f;
    f0.f = acc - f4.f * f0.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) 0x720000U;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = v0 | 0x1641;
    v0 = v1 < v0;
    v0 = v0 ^ 0x1;
    return v0;
}
