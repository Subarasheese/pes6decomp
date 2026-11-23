/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103DF0(s32, s32, f32);
f32 sceVu0InnerProduct(s32, s32);
void sceVu0Normalize(s32, s32);
void sceVu0OuterProduct(s32, s32, s32);
f32 sqrtf(f32);

void func_0012B980(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    a0 = s2;
    s0 = a2;
    a1 = s0;
    f0.f = sceVu0InnerProduct(a0, a1);
    v1 = (s32) 0x3f7f0000U;
    f20.i = f0.i;
    v1 = v1 | 0xff58;
    f0.i = (s32) v1;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (s32) 0xbf7f0000U; goto L_0012B9EC; }
    (*(volatile u32 *) (u32) (s3 + 8)) = (u32) 0;
    v1 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) s3) = (u32) 0;
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v1; goto L_0012BB30;
L_0012B9EC:;
    v0 = v0 | 0xff58;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    if (!fcc) { a1 = s2; goto L_0012BAB0; }
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    s1 = (s32) ((u32) sp + 0x64U);
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    s0 = (s32) ((u32) sp + 0x68U);
    v0 = (s32) ((u32) sp + 0x60U);
    f1.i = (s32) 0;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) s0) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf4");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    __asm__ volatile("vsqrt Q, $vf5x");
    __asm__ volatile("vwaitq");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi22" : "=r"(t_)); v0 = t_; }
    f2.i = (s32) v0;
    v0 = (s32) 0x37270000U;
    v0 = v0 | 0xc5ac;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_0012BA84;
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) s1) = f1.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s2);
    (*(volatile f32 *) (u32) s0) = f0.f;
L_0012BA84:;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = a0; sceVu0Normalize(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    (*(volatile f32 *) (u32) s3) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s1);
    (*(volatile f32 *) (u32) (s3 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    (*(volatile f32 *) (u32) (s3 + 8)) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) 0; goto L_0012BB30;
L_0012BAB0:;
    a2 = s0;
    a0 = (s32) ((u32) sp + 0x60U); sceVu0OuterProduct(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = a0; sceVu0Normalize(a0, a1);
    v1 = (s32) 0x3f800000U;
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f1.f - f20.f;
    f0.f = f1.f / f0.f;
    f12.f = sqrtf(f0.f);
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = a0; func_00103DF0(a0, a1, f12.f);
    v1 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    f2.f = (*(volatile f32 *) (u32) (sp + 96));
    f1.f = f1.f + f20.f;
    v1 = (s32) 0x40000000U;
    f0.i = (s32) v1;
    (*(volatile f32 *) (u32) s3) = f2.f;
    f0.f = f1.f / f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (s3 + 4)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
    (*(volatile f32 *) (u32) (s3 + 8)) = f1.f;
    f0.f = sqrtf(f0.f);
    (*(volatile f32 *) (u32) (s3 + 12)) = f0.f;
L_0012BB30:;
    return;
}
