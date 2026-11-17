/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00292BD0(void);
s64 func_00BA9400(s64);

s64 func_009B6A60(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s64 hi = 0, lo = 0;
    f32 acc = 0;

    v0 = func_00BA9400(a0);
    s1 = v0; v0 = func_00292BD0();
    if (v0 != 0) goto L_009B6A90;
    v0 = 0; goto L_009B6B70;
L_009B6A90:;
    v0 = func_00292BD0();
    a0 = 6;
    v1 = 1;
    if (v0 == 0) a0 = v1;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7108));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7109));
    s0 = (s32) ((u32) v1 - (u32) v0); v0 = func_00292BD0();
    s2 = (u64) 0 < (u64) v0; v0 = func_00292BD0();
    if (v0 == 0) goto L_009B6AE0;
    v0 = (s32) 0x3f800000U;
    f2.i = (s32) v0;
    v0 = (*(volatile s8 *) (u32) (s1 + 21)); goto L_009B6AE8;
L_009B6AE0:;
    f2.i = (s32) 0;
    v0 = (*(volatile s8 *) (u32) (s1 + 21));
L_009B6AE8:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) 0x41900000U;
    f0.i = (s32) s0;
    v1 = (s32) 0x40000000U;
    f0.f = (f32) f0.i;
    a1 = (s32) ((u32) a1 + 0x32U);
    v0 = (s32) 0x42c60000U;
    f2.f = f0.f * f2.f;
    f1.i = (s32) a1;
    f5.i = (s32) v0;
    f0.f = (f32) f1.i;
    v0 = (s32) 0x3f000000U;
    f1.i = (s32) a0;
    f0.f = f0.f / f5.f;
    f4.i = (s32) v0;
    f1.f = f2.f / f1.f;
    v0 = (s32) 0xc2480000U;
    f3.f = f0.f - f4.f;
    f1.f = f1.f + f3.f;
    f0.i = (s32) v1;
    f0.f = f1.f / f0.f;
    f2.f = f4.f + f0.f;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f5.f * f2.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
L_009B6B70:;
    return v0;
}
