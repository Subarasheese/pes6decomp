/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103BB8(s32, s32, s32);

f32 func_0027CF60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a1 << 4);
    v0 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 << 4);
    a3 = (*(volatile s32 *) (u32) (a0 + 4));
    s0 = a2;
    a2 = (s32) ((u32) sp + 0x40U);
    a1 = (*(volatile s32 *) (u32) a3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) (a1 + 16));
    a1 = (*(volatile s32 *) (u32) (a1 + 40));
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a1 = (*(volatile s32 *) (u32) a1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    __asm__ volatile("lqc2 $vf8, 128(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmulx.xyzw $vf4, $vf4, $vf8x");
    __asm__ volatile("vmuly.xyzw $vf5, $vf5, $vf8y");
    __asm__ volatile("vmulz.xyzw $vf6, $vf6, $vf8z");
    __asm__ volatile("vmulw.xyzw $vf7, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("sqc2 $vf5, 16(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("sqc2 $vf6, 32(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("sqc2 $vf7, 48(%0)" : : "r"((u32) a2) : "memory");
    v0 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = a2;
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = (s32) ((u32) v0 + 0x50U); v0 = func_00103BB8(a0, a1, a2);
    f2.f = (*(volatile f32 *) (u32) s0);
    a0 = (s32) 0x43200000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    v1 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v1;
    f3.i = (s32) a0;
    v1 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) ((u32) sp + 0x30U);
    a0 = (s32) ((u32) sp + 0x40U);
    f2.f = f3.f * f2.f;
    f1.f = f3.f * f1.f;
    f0.f = f3.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 32)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 40)) = f0.f;
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) a1) : "memory");
    v1 = (s32) 0xc0a00000U;
    f4.i = (s32) v1;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x40a00000U;
    f3.f = (*(volatile f32 *) (u32) (sp + 48));
    a1 = (s32) 0x590000U;
    f2.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    v1 = (s32) 0x590000U;
    f3.f = f4.f * f3.f;
    f1.f = f2.f * f1.f;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (a1 + 7788)) = f3.f;
    (*(volatile f32 *) (u32) (a0 + 7792)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + 7796)) = f0.f;
    return f0.f;
}
