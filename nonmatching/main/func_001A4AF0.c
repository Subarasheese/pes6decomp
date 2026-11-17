/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D5F8(f32);
f32 sqrtf(f32);

f32 func_001A4AF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    v1 = (*(volatile s32 *) (u32) (gp + -23264));
    v0 = v1 & 0x2;
    if (v0 != 0) goto L_001A4C68;
    v0 = v1 & 0x1;
    if (v0 != 0) goto L_001A4BF0;
    v1 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v1 = (s32) ((u32) v1 + 0x5a0U);
    v0 = (s32) ((u32) v0 + 0x590U);
    a0 = (s32) ((u32) a0 + 0x5c0U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v0 = t_; }
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    fcc = f0.f == f1.f;
    if (!fcc) goto L_001A4B8C;
    v1 = (s32) 0x461c0000U;
    v0 = (s32) 0x520000U;
    a0 = v1 | 0x4000;
    (*(volatile u32 *) (u32) (v0 + 1456)) = (u32) a0;
    v1 = (s32) 0x3f800000U;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 1480)) = (u32) v1; goto L_001A4BDC;
L_001A4B8C:;
    f3.f = sqrtf(f1.f);
    a3 = (s32) 0x520000U;
    a1 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a4 = (s32) 0x520000U;
    a2 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    f2.f = (*(volatile f32 *) (u32) (a3 + 1472));
    f1.f = (*(volatile f32 *) (u32) (a1 + 1476));
    f0.f = (*(volatile f32 *) (u32) (v1 + 1480));
    (*(volatile f32 *) (u32) (a4 + 1456)) = f3.f;
    f2.f = f2.f / f3.f;
    f1.f = f1.f / f3.f;
    f0.f = f0.f / f3.f;
    (*(volatile f32 *) (u32) (a2 + 1472)) = f2.f;
    (*(volatile f32 *) (u32) (a0 + 1476)) = f1.f;
    (*(volatile f32 *) (u32) (v0 + 1480)) = f0.f;
L_001A4BDC:;
    v1 = (*(volatile s32 *) (u32) (gp + -23264));
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 1484)) = (u32) 0;
    v0 = v1 | 0x1;
    (*(volatile u32 *) (u32) (gp + -23264)) = (u32) v0;
L_001A4BF0:;
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x3f800000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 1476));
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = (s32) 0xbf800000U; goto L_001A4C24; }
    v1 = (s32) 0xbfc90000U;
    v0 = (s32) 0x520000U;
    v1 = v1 | 0xfdb;
    (*(volatile u32 *) (u32) (v0 + 1488)) = (u32) v1; goto L_001A4C5C;
L_001A4C24:;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { f12.i = f1.i ^ (s32) 0x80000000U; goto L_001A4C4C; }
    v1 = (s32) 0x3fc90000U;
    v0 = (s32) 0x520000U;
    v1 = v1 | 0xfdb;
    (*(volatile u32 *) (u32) (v0 + 1488)) = (u32) v1; goto L_001A4C5C;
L_001A4C4C:;
    f0.f = func_0011D5F8(f12.f);
    v0 = (s32) 0x520000U;
    (*(volatile f32 *) (u32) (v0 + 1488)) = f0.f;
L_001A4C5C:;
    v0 = (*(volatile s32 *) (u32) (gp + -23264));
    v0 = v0 | 0x2;
    (*(volatile u32 *) (u32) (gp + -23264)) = (u32) v0;
L_001A4C68:;
    v0 = (s32) 0x520000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 1488));
    return f0.f;
}
