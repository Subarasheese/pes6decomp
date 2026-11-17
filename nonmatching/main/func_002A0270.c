/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002A0270(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) a2);
    (*(volatile u32 *) (u32) sp) = (u32) 0;
    a3 = (s32) ((u32) sp + 0x10U);
    (*(volatile u32 *) (u32) (sp + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) 0;
    __asm__ volatile("lqc2 $vf4, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a3) : "memory");
    v1 = (s32) ((u32) sp + 0x0U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    f0.i = f0.i ^ (s32) 0x80000000U;
    __asm__ volatile("lqc2 $vf4, 32(%0)" : : "r"((u32) a0) : "memory");
    a4 = f0.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a4));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    a4 = (*(volatile s32 *) (u32) (a2 + 8));
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a4));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    a2 = (*(volatile s32 *) (u32) (a2 + 12));
    __asm__ volatile("lqc2 $vf4, 48(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a2));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    return v0;
}
