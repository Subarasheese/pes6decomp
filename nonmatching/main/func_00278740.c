/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D5E0(f32);
void func_001A3910(s32);
s32 sceVu0MulMatrix(s32, s32, s32);

void func_00278740(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    a6 = 0;
    a5 = 0;
    a1 = (s32) 0x590000U;
    a2 = 1;
    a3 = 23;
    a1 = (s32) ((u32) a1 + 0xffffe5b0U);
    a4 = 255;
L_0027876C:;
    if (a5 == a4) { a0 = a2; goto L_0027877C; }
    if ((u32) a3 != 0) { s64 q_ = (s32) ((u32) a5 / (u32) a3); hi = (s32) ((u32) a5 % (u32) a3); lo = q_; }
    a0 = hi;
L_0027877C:;
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) a1 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    if (v1 != a2) goto L_002787B4;
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 3));
    if (v1 != 0) goto L_002787B4;
    a6 = a2; goto L_002787C4;
L_002787B4:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = (u64) a5 < (u64) (s64) 23;
    if (v1 != 0) goto L_0027876C;
L_002787C4:;
    if (a6 == 0) goto L_00278950;
    a0 = (s32) ((u32) sp + 0x80U); func_001A3910(a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v0 + 16));
    v0 = (*(volatile s32 *) (u32) (v1 + 40));
    a1 = (s32) ((u32) v1 + 0x50U);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) v0 + 0x1100U); v0 = sceVu0MulMatrix(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x80U);
    v1 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) sp + 0x30U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddz.xyzw $vf8, $vf6, $vf8z");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) a1) : "memory");
    f0.i = (s32) 0;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    f1.i = (s32) v1;
    fcc = f0.f == f1.f;
    if (!fcc) goto L_0027886C;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile f32 *) (u32) (v1 + 32)) = f0.f; goto L_00278950;
L_0027886C:;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf4");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    __asm__ volatile("vrsqrt Q, $vf0w, $vf5x");
    __asm__ volatile("vsub.w $vf4, $vf0, $vf0");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vmulq.xyz $vf4, $vf4, Q");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffb9b0U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a1 = t_; }
    v1 = (s32) 0x3bcd0000U;
    a0 = v1 | 0xd100;
    v1 = (s32) 0x3f7f0000U;
    v1 = v1 | 0xf972;
    f1.i = (s32) a0;
    f2.i = (s32) a1;
    f0.i = (s32) v1;
    f12.f = f2.f + f1.f;
    fcc = f12.f <= f0.f;
    if (!fcc) goto L_002788FC;
    v1 = (s32) 0xbf7f0000U;
    v1 = v1 | 0xf972;
    f0.i = (s32) v1;
    fcc = f12.f < f0.f;
    if (!fcc) { f20.f = (*(volatile f32 *) (u32) (gp + -32284)); goto L_00278908; }
L_002788FC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) 0; goto L_00278950;
L_00278908:;
    f0.f = func_0011D5E0(f12.f);
    fcc = f0.f <= f20.f;
    if (fcc) goto L_00278920;
    f0.i = f20.i;
L_00278920:;
    f2.f = (*(volatile f32 *) (u32) (sp + 48));
    f1.i = (s32) 0;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_0027893C;
    f0.i = f0.i ^ (s32) 0x80000000U;
L_0027893C:;
    f0.f = f0.f / f20.f;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile f32 *) (u32) (v1 + 32)) = f0.f;
L_00278950:;
    return;
}
