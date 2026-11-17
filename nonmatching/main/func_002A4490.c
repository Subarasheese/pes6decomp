/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002A4490(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    { u32 a_ = (u32) (a1 + 0) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 16) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) ((u32) sp + 0x0U);
    { u32 a_ = (u32) (a1 + 32) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) ((u32) a0 + 0x10U);
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (a0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (a0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    __asm__ volatile("lqc2 $vf4, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf4");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    __asm__ volatile("vsqrt Q, $vf5x");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vaddq.x $vf5, $vf0, Q");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    f2.i = (s32) 0;
    f3.i = (s32) v1;
    fcc = f3.f <= f2.f;
    if (fcc) goto L_002A45DC;
    v1 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    f0.f = f1.f / f3.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a3) : "memory");
    v1 = f0.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a3) : "memory");
    v1 = (s32) 0x3f000000U;
    f0.i = (s32) v1;
    a1 = (s32) ((u32) sp + 0xcU);
    fcc = f12.f <= f0.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a1) = f3.f; if (c_) goto L_002A4594; }
    fcc = f1.f == f12.f;
    if (fcc) goto L_002A45DC;
    f0.f = (*(volatile f32 *) (u32) a1);
    v1 = (s32) ((u32) sp + 0x10U);
    f0.f = f0.f * f12.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a3) : "memory");
    a1 = f0.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a2) : "memory");
    f0.f = f1.f - f12.f;
    f1.f = f3.f * f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 28));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (a0 + 28)) = f0.f; goto L_002A45DC;
L_002A4594:;
    fcc = f2.f == f12.f;
    if (fcc) goto L_002A45DC;
    f1.f = f3.f * f12.f;
    v1 = (s32) ((u32) sp + 0x10U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a3) : "memory");
    a1 = f1.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    f0.f = (*(volatile f32 *) (u32) (a0 + 12));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f;
L_002A45DC:;
    return v0;
}
