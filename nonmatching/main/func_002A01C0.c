/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002A01C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a3 = (*(volatile s32 *) (u32) (a2 + 12));
    v1 = (s32) ((u32) sp + 0x0U);
    __asm__ volatile("lqc2 $vf4, 48(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a3));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a2 = t_; }
    (*(volatile u32 *) (u32) a1) = (u32) a2;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a2 = t_; }
    f0.i = (s32) a2;
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (a1 + 4)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    f0.f = (*(volatile f32 *) (u32) (sp + 12));
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) v1;
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (a1 + 12)) = f0.f;
    return v0;
}
