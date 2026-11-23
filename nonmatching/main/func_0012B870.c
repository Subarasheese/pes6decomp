/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D138(f32);
f32 func_0011D468(f32);

void func_0012B870(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x40000000U;
    f3.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (a0 + 4));
    f0.f = (*(volatile f32 *) (u32) (a0 + 8));
    f22.f = f2.f / f3.f;
    f21.f = f1.f / f3.f;
    f20.f = f0.f / f3.f;
    f12.i = f22.i;
    f0.f = func_0011D138(f12.f);
    (*(volatile f32 *) (u32) (sp + 40)) = f0.f;
    f12.i = f21.i; f0.f = func_0011D138(f12.f);
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    f12.i = f20.i; f0.f = func_0011D138(f12.f);
    f12.i = f22.i;
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f; f0.f = func_0011D468(f12.f);
    f12.i = f21.i;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; f0.f = func_0011D468(f12.f);
    f12.i = f20.i;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; f0.f = func_0011D468(f12.f);
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    a0 = (s32) ((u32) sp + 0x30U);
    v1 = (s32) ((u32) sp + 0x20U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vsub.xyzw $vf9, $vf0, $vf0");
    __asm__ volatile("vaddw.xyzw $vf6, $vf9, $vf0w");
    __asm__ volatile("vaddw.xyzw $vf7, $vf9, $vf0w");
    __asm__ volatile("vmove.xyzw $vf10, $vf9");
    __asm__ volatile("vmove.xyzw $vf11, $vf9");
    __asm__ volatile("vaddw.z $vf10, $vf9, $vf0w");
    __asm__ volatile("vaddw.xyw $vf11, $vf9, $vf0w");
    a4 = 3;
L_0012B92C:;
    __asm__ volatile("vmulax.xyzw ACC, $vf10, $vf4x");
    __asm__ volatile("vmaddx.xyzw $vf8, $vf11, $vf5x");
    __asm__ volatile("vmul.xyzw $vf6, $vf6, $vf8");
    __asm__ volatile("vmulax.xyzw ACC, $vf11, $vf4x");
    __asm__ volatile("vmaddx.xyzw $vf9, $vf10, $vf5x");
    __asm__ volatile("vmul.xyzw $vf7, $vf7, $vf9");
    __asm__ volatile("vmr32.xyzw $vf10, $vf10");
    __asm__ volatile("vmr32.xyzw $vf11, $vf11");
    __asm__ volatile("vmr32.xyzw $vf4, $vf4");
    __asm__ volatile("vmr32.xyzw $vf5, $vf5");
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    if (0 != a4) goto L_0012B92C;
    return;
}
