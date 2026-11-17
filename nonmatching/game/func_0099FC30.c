/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00186470(s32, s32, f32);
void func_001CD910(s32, s32);
f32 func_001CD9E0(void);

void func_0099FC30(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0xc1e00000U;
    f0.i = (s32) v1;
    f4.f = (*(volatile f32 *) (u32) (a1 + 4));
    fcc = f4.f < f0.f;
    { s32 c_ = fcc; s1 = a1; if (c_) goto L_0099FE18; }
    f1.f = (*(volatile f32 *) (u32) (s1 + 8));
    f0.f = (*(volatile f32 *) (u32) (a0 + 8));
    f3.f = (*(volatile f32 *) (u32) s1);
    f2.f = (*(volatile f32 *) (u32) a0);
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    f2.f = f3.f - f2.f;
    a1 = f0.i;
    f0.i = (s32) f2.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a1 * (s64) (u64) (u32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    if (v1 == 0) goto L_0099FE18;
    f1.f = (*(volatile f32 *) (u32) (a0 + 4));
    f0.i = (s32) 0;
    f1.f = f4.f - f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0099FE18;
    (*(volatile f32 *) (u32) (sp + 96)) = f2.f;
    v0 = (s32) 0x40000000U;
    f2.f = (*(volatile f32 *) (u32) (s1 + 4));
    s0 = (s32) ((u32) sp + 0x64U);
    f0.f = (*(volatile f32 *) (u32) (a0 + 4));
    s2 = (s32) ((u32) sp + 0x68U);
    f1.i = (s32) v0;
    v0 = (s32) 0x45280000U;
    v0 = v0 | 0xc000;
    f12.i = (s32) v0;
    f0.f = f2.f - f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) (a0 + 8));
    f3.f = (*(volatile f32 *) (u32) (s1 + 8));
    f0.f = f0.f * f1.f;
    f2.f = f3.f - f2.f;
    (*(volatile f32 *) (u32) s2) = f2.f;
    (*(volatile f32 *) (u32) s0) = f0.f; f0.f = func_001CD9E0();
    f2.f = (*(volatile f32 *) (u32) s2);
    f0.i = (s32) f0.f;
    s2 = f0.i;
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    f0.f = (*(volatile f32 *) (u32) s0);
    acc = f0.f * f0.f;
    acc = acc + f1.f * f1.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v1 = (s32) 0x3fe60000U;
    v1 = v1 | 0x6666;
    f1.i = (s32) s2;
    f2.f = (f32) f0.i;
    f1.f = (f32) f1.i;
    f20.f = f2.f / f1.f;
    f0.i = (s32) v1;
    fcc = f20.f < f0.f;
    if (!fcc) goto L_0099FD80;
    f1.f = (*(volatile f32 *) (u32) s0);
    v1 = (s32) 0x42100000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0099FD8C;
L_0099FD80:;
    v1 = (s32) 0x3fe60000U;
    v1 = v1 | 0x6666;
    f20.i = (s32) v1;
L_0099FD8C:;
    f1.f = (*(volatile f32 *) (u32) s0);
    v1 = (s32) 0x41400000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0099FDDC;
    a1 = (s32) 0x42b40000U;
    a0 = (s32) 0x42c80000U;
    f2.i = (s32) a1;
    v1 = (s32) 0x41700000U;
    f1.f = f0.f - f1.f;
    f2.f = f2.f * f20.f;
    f0.i = (s32) a0;
    f2.f = f2.f / f0.f;
    f0.i = (s32) v1;
    f0.f = f1.f / f0.f;
    f20.f = f2.f - f0.f;
L_0099FDDC:;
    v1 = (s32) 0x3e990000U;
    v1 = v1 | 0x999a;
    f0.i = (s32) v1;
    fcc = f20.f < f0.f;
    if (fcc) goto L_0099FE18;
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) sp + 0x60U); func_001CD910(a0, a1);
    f12.i = f20.i;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0; func_00186470(a0, a1, f12.f);
L_0099FE18:;
    return;
}
