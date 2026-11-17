/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00129C60(s32, s32, s32, s32, f32, f32, f32);

f32 func_00183590(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3e4c0000U;
    v0 = v0 | 0xcccd;
    f3.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) a0);
    s0 = (s32) ((u32) sp + 0x28U);
    f1.f = (*(volatile f32 *) (u32) (a0 + 4));
    f0.f = (*(volatile f32 *) (u32) (a0 + 8));
    f2.i = f2.i ^ (s32) 0x80000000U;
    f2.f = f3.f * f2.f;
    f1.f = f3.f * f1.f;
    f0.f = f3.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 32)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f1.f;
    (*(volatile f32 *) (u32) s0) = f0.f; v0 = func_00129C60(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v1 = (s32) ((u32) sp + 0x20U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf0w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    v0 = (s32) 0x400000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -20240));
    f0.f = (*(volatile f32 *) (u32) s0);
    f0.f = f1.f / f0.f;
    return f0.f;
}
