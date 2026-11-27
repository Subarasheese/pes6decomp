/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00299FE0(s64);
void func_002A0ED0(s64, s64, s64, s64, s64);

f32 func_002A4F40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x5e0000U;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8712));
    fcc = f2.f <= f0.f;
    { s32 c_ = fcc; s4 = a0; if (c_) goto L_002A4F84; }
    v0 = (s32) 0x42700000U; goto L_002A4F9C;
L_002A4F84:;
    fcc = f0.f == f2.f;
    if (!fcc) { f2.i = f2.i ^ (s32) 0x80000000U; goto L_002A4F98; }
    v0 = (s32) 0x5e0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8704));
L_002A4F98:;
    v0 = (s32) 0x42700000U;
L_002A4F9C:;
    v1 = (s32) 0x43400000U;
    f1.i = (s32) v0;
    a0 = (s32) ((u32) sp + 0x90U);
    f0.i = (s32) v1;
    f1.f = f12.f / f1.f;
    v0 = (s32) 0x44ab0000U;
    v0 = v0 | 0xe000;
    f0.f = f0.f * f1.f;
    f1.f = f0.f * f2.f;
    f0.i = (s32) v0;
    f21.f = f1.f / f0.f;
    func_002A0ED0(a0, a1, a2, a3, a4);
    f20.i = (s32) 0;
    s3 = 0;
    s2 = (s32) ((u32) sp + 0x88U);
    s1 = (s32) ((u32) sp + 0x8cU);
    s0 = (s32) ((u32) sp + 0x84U);
L_002A4FF4:;
    a2 = s3 & 0xff;
    at = a2 < 23;
    if (at == 0) { at = a2 < 27; goto L_002A5098; }
    v1 = 255;
    if (a2 == v1) { a1 = 1; goto L_002A501C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v1); hi = (s32) ((s32) a2 % (s32) v1); lo = q_; }
    a1 = hi;
L_002A501C:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    if (v1 == 0) goto L_002A5090;
    v1 = 255;
    if (a2 == v1) { a1 = 1; goto L_002A5060; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v1); hi = (s32) ((s32) a2 % (s32) v1); lo = q_; }
    a1 = hi;
L_002A5060:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) a1 << 6);
    v1 = 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 1));
    if (a0 == v1) goto L_002A50F4;
L_002A5090:;
    v1 = 0; goto L_002A50F8;
L_002A5098:;
    if (at == 0) { v1 = 28; goto L_002A50BC; }
    a0 = (s32) ((u32) a2 + 0xffffffe9U); v0 = func_00299FE0(a0);
    v1 = (*(volatile u8 *) (u32) (v0 + 4));
    if (v1 != 0) goto L_002A50F4;
    v1 = 0; goto L_002A50F8;
L_002A50BC:;
    if (a2 == v1) goto L_002A50D8;
    v1 = 27;
    if (a2 == v1) goto L_002A50F4;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002A50F8;
L_002A50D8:;
    v1 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 6672));
    fcc = f20.f == f0.f;
    if (!fcc) goto L_002A50F4;
    v1 = 0; goto L_002A50F8;
L_002A50F4:;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_002A50F8:;
    if (v1 == 0) goto L_002A5270;
    v1 = (*(volatile s32 *) (u32) s4);
    a0 = 1;
    a0 = (s32) ((u32) a0 << (s3 & 31));
    v1 = v1 & a0;
    if (v1 == 0) goto L_002A5270;
    a1 = s3 & 0xff;
    a0 = (s32) ((u32) sp + 0x80U); func_002A0ED0(a0, a1, a2, a3, a4);
    a1 = (s32) ((u32) sp + 0x80U);
    v1 = (s32) ((u32) sp + 0x90U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a1) : "memory");
    f0.f = f21.f * f21.f;
    f2.f = (*(volatile f32 *) (u32) s2);
    f1.f = (*(volatile f32 *) (u32) (sp + 128));
    acc = f2.f * f2.f;
    f1.f = acc + f1.f * f1.f;
    fcc = f1.f < f0.f;
    if (fcc) goto L_002A5270;
    v1 = (s32) 0x5e0000U;
    a0 = (s32) ((u32) sp + 0x70U);
    v1 = (s32) ((u32) v1 + 0x2250U);
    (*(volatile f32 *) (u32) s1) = f20.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    v1 = f20.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x2230U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a1 = t_; }
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x2240U);
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) a1;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a1 = t_; }
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x2220U);
    f0.i = (s32) a1;
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) s0) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmul.xyz $vf5, $vf4, $vf5");
    __asm__ volatile("vaddy.x $vf5, $vf5, $vf5y");
    __asm__ volatile("vaddz.x $vf5, $vf5, $vf5z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(t_)); a0 = t_; }
    v1 = (s32) 0x5e0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 8796));
    f1.f = (*(volatile f32 *) (u32) (sp + 128));
    f0.f = (*(volatile f32 *) (u32) s0);
    f3.i = (s32) a0;
    (*(volatile u32 *) (u32) s2) = (u32) a0;
    f2.f = f2.f / f3.f;
    f1.f = f1.f * f2.f;
    f0.f = f0.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    (*(volatile f32 *) (u32) s1) = f2.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f < f21.f;
    if (!fcc) goto L_002A5258;
    f0.i = f0.i & 0x7FFFFFFF;
    fcc = f0.f < f21.f;
    if (fcc) goto L_002A5270;
L_002A5258:;
    v1 = (*(volatile s32 *) (u32) s4);
    a0 = 1;
    a0 = (s32) ((u32) a0 << (s3 & 31));
    a0 = ~(a0 | 0);
    v1 = v1 & a0;
    (*(volatile u32 *) (u32) s4) = (u32) v1;
L_002A5270:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 29;
    if (v1 != 0) goto L_002A4FF4;
    return f0.f;
}
