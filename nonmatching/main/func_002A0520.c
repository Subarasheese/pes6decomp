/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_002A0520(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;
    u64 qh_a3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 fcc = 0;
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    { u32 a_ = (u32) (a2 + 0) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + -17180));
    f1.i = (s32) 0;
    a2 = (s32) 0x3b0000U;
    f4.f = (*(volatile f32 *) (u32) (a2 + -17184));
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -17172));
    (*(volatile f32 *) (u32) (sp + 4)) = f3.f;
    a2 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (a2 + -17176));
    (*(volatile f32 *) (u32) (sp + 12)) = f0.f;
    (*(volatile f32 *) (u32) sp) = f4.f;
    { u32 a_ = (u32) (a0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    f0.f = (*(volatile f32 *) (u32) a1);
    fcc = f1.f == f0.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) (sp + 8)) = f2.f; if (c_) goto L_002A05CC; }
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_002A05CC;
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    fcc = f1.f == f0.f;
    if (!fcc) { v1 = (s32) 0xb7270000U; goto L_002A05B0; }
    (*(volatile f32 *) (u32) (a0 + 32)) = f1.f;
    v1 = (s32) 0xbf800000U;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) v1;
    v1 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) (a0 + 40)) = f1.f;
    (*(volatile u32 *) (u32) (a0 + 44)) = (u32) v1; goto L_002A05CC;
L_002A05B0:;
    (*(volatile f32 *) (u32) (a0 + 32)) = f1.f;
    v1 = v1 | 0xc5ac;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) v1;
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile f32 *) (u32) (a0 + 40)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile f32 *) (u32) (a0 + 44)) = f0.f;
L_002A05CC:;
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    a1 = (s32) ((u32) sp + 0x0U);
    (*(volatile f32 *) (u32) (a0 + 60)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    v1 = (s32) ((u32) sp + 0x10U);
    __asm__ volatile("lqc2 $vf4, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf4");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    __asm__ volatile("vsqrt Q, $vf5x");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vaddq.x $vf5, $vf0, Q");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a1 = t_; }
    v1 = (s32) 0x387b0000U;
    v1 = v1 | 0xa882;
    f0.i = (s32) v1;
    f1.i = (s32) a1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_002A0660;
    { u32 a_ = (u32) (sp + 0) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
L_002A0660:;
    v1 = (s32) 0x3f800000U;
    f0.i = (s32) v1;
    f0.f = f0.f / f1.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    v1 = f0.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vopmula.xyz ACC, $vf4, $vf5");
    __asm__ volatile("vopmsub.xyz $vf6, $vf5, $vf4");
    __asm__ volatile("vsub.w $vf6, $vf6, $vf6");
    __asm__ volatile("sqc2 $vf6, 16(%0)" : : "r"((u32) a0) : "memory");
    return;
}
