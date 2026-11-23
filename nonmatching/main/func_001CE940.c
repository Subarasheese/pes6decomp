/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103538(s64, s64);
f32 func_0011D640(f32);
s64 func_00138C00(s64, s64, s64, s64);
s64 func_00149C20(s64);

void func_001CE940(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = a0;
    a0 = (s32) 0x530000U;
    s0 = a1;
    a0 = (s32) ((u32) a0 + 0xffffab10U); v0 = func_00138C00(a0, a1, a2, a3);
    v1 = (s32) 0x400000U;
    a0 = (s32) 0x530000U;
    f12.f = (*(volatile f32 *) (u32) (v1 + -20240));
    (*(volatile u64 *) (u32) (a0 + -21704)) = (u64) v0; f0.f = func_0011D640(f12.f);
    v1 = (s32) 0x3fb80000U;
    v0 = (s64) ((u64) s1 << 32);
    v1 = v1 | 0xaa3b;
    v0 = v0 >> 32;
    f2.i = (s32) v1;
    v0 = (s64) ((u64) v0 << 2);
    a1 = v0 | 0x80;
    a0 = s0;
    f0.f = f2.f * f0.f;
    v0 = (s32) 0x41800000U;
    f1.i = (s32) v0;
    f0.i = f0.i ^ (s32) 0x80000000U;
    f0.f = f1.f * f0.f;
    v0 = (s32) 0x530000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 & 0xfff;
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 32);
    v1 = a1 | v1;
    (*(volatile u64 *) (u32) (v0 + -21696)) = (u64) v1; v0 = func_00149C20(a0);
    v1 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    a0 = (s32) ((u32) a0 + 0xffffab10U);
    (*(volatile u64 *) (u32) (v1 + -21688)) = (u64) v0;
    a1 = 0; func_00103538(a0, a1);
    return;
}
