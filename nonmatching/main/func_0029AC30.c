/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0029AC30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    union { f32 f; s32 i; } f7 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    a0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (a0 + -17040) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (v1 + -17024) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v0 = 0;
    t5 = 0;
    a7 = (s32) ((u32) sp + 0xcU);
    a0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 16) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (a0 + -17008) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (v1 + -16992) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 32) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    a0 = (s32) 0x44ab0000U;
    { u32 a_ = (u32) (sp + 48) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    v1 = a0 | 0xe000;
    { u32 a_ = (u32) (sp + 64) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    f4.i = (s32) v1;
    v1 = (s32) 0x5e0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + 8796));
    v1 = (s32) 0x5e0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 8996));
    f3.f = f4.f * f3.f;
    f2.f = f3.f / f2.f;
    v1 = (s32) 0x43800000U;
    f1.i = (s32) v1;
    v1 = (s32) 0x43400000U;
    f0.i = (s32) v1;
    f1.f = f1.f * f2.f;
    v1 = (s32) 0x3f800000U;
    f0.f = f0.f * f2.f;
    f7.f = f1.f / f4.f;
    f6.f = f0.f / f4.f;
    f5.i = (s32) v1;
    v1 = (s32) 0x5e0000U;
    a5 = (s32) 0x5e0000U;
    f4.f = (*(volatile f32 *) (u32) (v1 + 8796));
    a3 = (s32) 0x5e0000U;
    a2 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a6 = (s32) ((u32) sp + 0x0U);
    a5 = (s32) ((u32) a5 + 0x2250U);
    a3 = (s32) ((u32) a3 + 0x2230U);
    a2 = (s32) ((u32) a2 + 0x2240U);
    a0 = (s32) ((u32) a0 + 0x2220U);
L_0029ACEC:;
    v1 = t5 & 0xff;
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a1 = (*(volatile s32 *) (u32) (v1 + 28));
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a5) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a6) : "memory");
    a4 = (s32) ((u32) v1 + 0x10U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a6) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a6) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a6) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    (*(volatile u32 *) (u32) a4) = (u32) v1;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a6) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); v1 = t_; }
    a1 = (s32) ((u32) a4 + 0x4U);
    f0.i = (s32) v1;
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (a4 + 4)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a6) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); t4 = t_; }
    f0.f = (*(volatile f32 *) (u32) a7);
    v1 = (s32) ((u32) a4 + 0x8U);
    f1.i = (s32) t4;
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) t4;
    f0.i = f0.i ^ (s32) 0x80000000U;
    fcc = f1.f < f5.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) (a4 + 12)) = f0.f; if (c_) goto L_0029ADA8; }
    (*(volatile f32 *) (u32) v1) = f5.f;
L_0029ADA8:;
    v1 = (s32) ((u32) t5 + 0x1U);
    f3.f = (*(volatile f32 *) (u32) (a4 + 8));
    t5 = v1 & 0xff;
    f1.f = (*(volatile f32 *) (u32) a4);
    v1 = t5 < 4;
    f0.f = (*(volatile f32 *) (u32) a1);
    f2.f = f7.f * f3.f;
    f2.f = f4.f / f2.f;
    f1.f = f1.f * f2.f;
    (*(volatile f32 *) (u32) a4) = f1.f;
    f1.f = f6.f * f3.f;
    f1.f = f4.f / f1.f;
    f0.f = f0.f * f1.f;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) a1) = f0.f; if (c_) goto L_0029ACEC; }
    v1 = (s32) 0x3fa60000U;
    a6 = 0;
    v1 = v1 | 0x6666;
    a0 = 1;
    f0.i = (s32) v1;
    a1 = 2;
    a2 = 3;
L_0029AE04:;
    a5 = a6 & 0xff;
    { s32 c_ = a5 >= 0; v1 = a5 & 0x3; if (c_) goto L_0029AE1C; }
    if (v1 == 0) goto L_0029AE1C;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
L_0029AE1C:;
    v1 = (s32) ((u32) v1 << 4);
    a3 = (s32) ((u32) a5 + 0x1U);
    a4 = (s32) ((u32) v1 + (u32) sp);
    f2.f = (*(volatile f32 *) (u32) (a4 + 16));
    { s32 c_ = a3 >= 0; v1 = a3 & 0x3; if (c_) goto L_0029AE40; }
    if (v1 == 0) goto L_0029AE40;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
L_0029AE40:;
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v1 + (u32) sp);
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    fcc = f1.f < f2.f;
    if (!fcc) goto L_0029AED8;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0029AED8;
    f1.i = f2.i & 0x7FFFFFFF;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0029AED8;
    if (a5 == a2) goto L_0029AED0;
    if (a5 == a1) goto L_0029AEC0;
    if (a5 == a0) goto L_0029AEB0;
    if (a5 == 0) goto L_0029AEA0;
    goto L_0029AED8;
L_0029AEA0:;
    v0 = v0 | 0x1;
    v0 = v0 & 0xff; goto L_0029AED8;
L_0029AEB0:;
    v0 = v0 | 0x4;
    v0 = v0 & 0xff; goto L_0029AED8;
L_0029AEC0:;
    v0 = v0 | 0x2;
    v0 = v0 & 0xff; goto L_0029AED8;
L_0029AED0:;
    v0 = v0 | 0x8;
    v0 = v0 & 0xff;
L_0029AED8:;
    v1 = (s32) ((u32) a6 + 0x1U);
    a6 = v1 & 0xff;
    v1 = a6 < 4;
    if (v1 != 0) goto L_0029AE04;
    return v0;
}
