/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0019BD40(s32, s32);
f32 sqrtf(f32);

void func_0019C020(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    s3 = (*(volatile s32 *) (u32) (v1 + 720));
    if (s3 == 0) goto L_0019C200;
    v1 = (s32) 0x3c230000U;
    s5 = 0;
    v1 = v1 | 0xd70a;
    s7 = (s32) ((u32) sp + 0xb4U);
    f21.i = (s32) 0;
    fp = (s32) ((u32) sp + 0xb8U);
    f20.i = (s32) v1;
L_0019C080:;
    v1 = (*(volatile s32 *) (u32) s3);
    if (v1 == 0) goto L_0019C1F0;
    s4 = 0;
    s6 = 0;
    s2 = (s32) ((u32) s3 + 0x60U);
    s1 = (s32) ((u32) s3 + 0x510U);
    s0 = (s32) ((u32) s3 + 0x9c0U);
L_0019C0A0:;
    v1 = (*(volatile s32 *) (u32) (s3 + 12));
    v1 = (u64) s4 < (u64) v1;
    if (v1 != 0) goto L_0019C0D8;
    if (s6 != 0) goto L_0019C1F0;
    a1 = s4;
    a0 = s3; func_0019BD40(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s3 + 12));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v1; goto L_0019C1F0;
L_0019C0D8:;
    f0.f = (*(volatile f32 *) (u32) s0);
    fcc = f21.f == f0.f;
    if (!fcc) goto L_0019C108;
    if (s6 != 0) goto L_0019C1D8;
    a0 = s3;
    a1 = s4;
    s6 = 1; func_0019BD40(a0, a1);
    goto L_0019C1D8;
L_0019C108:;
    v1 = (s32) ((u32) sp + 0xb0U);
    f3.f = (*(volatile f32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) s2);
    f2.f = (*(volatile f32 *) (u32) (s1 + 4));
    f1.f = (*(volatile f32 *) (u32) (s1 + 8));
    (*(volatile f32 *) (u32) (sp + 176)) = f3.f;
    f0.f = f0.f + f3.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    (*(volatile f32 *) (u32) s7) = f2.f;
    (*(volatile f32 *) (u32) fp) = f1.f;
    f0.f = f0.f + f2.f;
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s2 + 8)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a0));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    f0.i = (s32) v1;
    fcc = f0.f <= f21.f;
    { s32 c_ = fcc; (*(volatile u32 *) (u32) s0) = (u32) v1; if (c_) goto L_0019C1A8; }
    f0.f = (*(volatile f32 *) (u32) s0);
    f1.f = sqrtf(f0.f);
    f0.f = (*(volatile f32 *) (u32) (s3 + 16));
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
L_0019C1A8:;
    f0.f = (*(volatile f32 *) (u32) s0);
    fcc = f0.f < f20.f;
    if (!fcc) goto L_0019C1C0;
    (*(volatile f32 *) (u32) s0) = f21.f;
L_0019C1C0:;
    f2.f = (*(volatile f32 *) (u32) (sp + 176));
    f1.f = (*(volatile f32 *) (u32) s7);
    f0.f = (*(volatile f32 *) (u32) fp);
    (*(volatile f32 *) (u32) s1) = f2.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
L_0019C1D8:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (u64) s4 < (u64) (s64) 100;
    s2 = (s32) ((u32) s2 + 0xcU);
    s1 = (s32) ((u32) s1 + 0xcU);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0019C0A0; }
L_0019C1F0:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = (u64) s5 < (u64) (s64) 3;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0xb50U); if (c_) goto L_0019C080; }
L_0019C200:;
    return;
}
