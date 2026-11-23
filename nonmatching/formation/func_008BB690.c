/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF5B0(s32, s32);
f32 sqrtf(f32);

void func_008BB690(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_008BB858;
    if (a1 == 0) { ; goto L_008BB85C; }
    if (a2 != 0) { f3.f = (*(volatile f32 *) (u32) a1); goto L_008BB6B8; }
    goto L_008BB858;
    f3.f = (*(volatile f32 *) (u32) a1);
L_008BB6B8:;
    f2.f = (*(volatile f32 *) (u32) a2);
    fcc = f3.f == f2.f;
    if (!fcc) { f0.f = f2.f - f3.f; goto L_008BB724; }
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_008BB720;
    (*(volatile f32 *) (u32) (sp + 16)) = f3.f;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 20)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 32)) = f3.f;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 36)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 48)) = f3.f;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 64)) = f3.f;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 68)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0; goto L_008BB850;
L_008BB720:;
    f0.f = f2.f - f3.f;
L_008BB724:;
    f2.f = (*(volatile f32 *) (u32) (a2 + 4));
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = f2.f - f1.f;
    acc = f1.f * f1.f;
    f0.f = acc + f0.f * f0.f;
    f3.f = sqrtf(f0.f);
    if (a3 < 0) goto L_008BB758;
    f0.i = (s32) a3;
    f0.f = (f32) f0.i; goto L_008BB774;
L_008BB758:;
    v1 = (s32) ((u32) a3 >> 1);
    v0 = a3 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008BB774:;
    f0.f = f0.f * f1.f;
    v0 = (s32) 0x40000000U;
    f1.f = f0.f / f3.f;
    f0.i = (s32) v0;
    f5.f = f1.f / f0.f;
    f2.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) a2);
    f0.f = f0.f - f2.f;
    { s32 c_ = a3 < 0; f1.i = f0.i ^ (s32) 0x80000000U; if (c_) goto L_008BB7AC; }
    f0.i = (s32) a3;
    f0.f = (f32) f0.i; goto L_008BB7C8;
L_008BB7AC:;
    v1 = (s32) ((u32) a3 >> 1);
    v0 = a3 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008BB7C8:;
    f0.f = f0.f * f1.f;
    v0 = (s32) 0x40000000U;
    f1.f = f0.f / f3.f;
    f0.i = (s32) v0;
    f4.f = f1.f / f0.f;
    f0.f = f2.f + f5.f;
    (*(volatile f32 *) (u32) (sp + 16)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = f1.f + f4.f;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) 0;
    f2.f = f1.f - f4.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) a2);
    f0.f = f1.f + f5.f;
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    f1.f = f1.f - f5.f;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) 0;
    f3.f = f0.f + f4.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f3.f;
    f3.f = (*(volatile f32 *) (u32) a1);
    f0.f = f0.f - f4.f;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0;
    f3.f = f3.f - f5.f;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 52)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f3.f;
L_008BB850:;
    a1 = (s32) ((u32) sp + 0x10U); func_001EF5B0(a0, a1);
L_008BB858:;
L_008BB85C:;
    return;
}
