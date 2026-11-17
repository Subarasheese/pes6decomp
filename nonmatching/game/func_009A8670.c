/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 sqrtf(f32);

s32 func_009A8670(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    a3 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) 0x41000000U;
    v1 = (*(volatile s32 *) (u32) a1);
    f1.f = (*(volatile f32 *) (u32) (a2 + 8));
    f0.i = (s32) v0;
    f4.f = (*(volatile f32 *) (u32) (a3 + 4));
    f5.f = (*(volatile f32 *) (u32) (v1 + 4));
    f6.f = (*(volatile f32 *) (u32) a3);
    f7.f = (*(volatile f32 *) (u32) v1);
    f3.f = (*(volatile f32 *) (u32) (v1 + 8));
    f2.f = (*(volatile f32 *) (u32) (a3 + 8));
    f5.f = f5.f - f4.f;
    f4.f = f3.f - f2.f;
    f6.f = f7.f - f6.f;
    f3.f = f5.f * f5.f;
    f2.f = f6.f * f6.f;
    acc = f2.f + f3.f;
    f2.f = acc + f4.f * f4.f;
    f1.f = f2.f - f1.f;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_009A8754; }
    f2.f = sqrtf(f2.f);
    f0.i = (s32) 0;
    fcc = f0.f == f2.f;
    if (fcc) { v0 = 0; goto L_009A8754; }
    f1.f = (*(volatile f32 *) (u32) (a2 + 4));
    v0 = 1;
    f0.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = f2.f - f1.f;
    f1.f = f12.f * f1.f;
    f1.f = f1.f / f2.f;
    f3.f = f6.f * f1.f;
    f0.f = f0.f + f3.f;
    (*(volatile f32 *) (u32) (a0 + 16)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 20));
    f2.f = f5.f * f1.f;
    f0.f = f0.f + f2.f;
    (*(volatile f32 *) (u32) (a0 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 24));
    f1.f = f4.f * f1.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (a0 + 24)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 16));
    f0.f = f0.f - f3.f;
    (*(volatile f32 *) (u32) (a1 + 16)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 20));
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) (a1 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 24));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 24)) = f0.f;
L_009A8754:;
    return v0;
}
