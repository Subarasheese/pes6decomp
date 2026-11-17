/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BD8910(f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 fcc = 0;
    f32 acc = 0;

    fcc = f12.f < f14.f;
    if (fcc) goto L_00BD8954;
    fcc = f12.f < f16.f;
    if (!fcc) goto L_00BD8934;
    fcc = f12.f < f18.f;
    if (fcc) goto L_00BD894C;
L_00BD8934:;
    fcc = f14.f <= f16.f;
    if (fcc) goto L_00BD898C;
    fcc = f14.f <= f18.f;
    if (fcc) goto L_00BD898C;
L_00BD894C:;
    v0 = 0; goto L_00BD8A90;
L_00BD8954:;
    fcc = f14.f < f16.f;
    if (!fcc) goto L_00BD896C;
    fcc = f14.f < f18.f;
    if (fcc) goto L_00BD8984;
L_00BD896C:;
    fcc = f12.f <= f16.f;
    if (fcc) goto L_00BD898C;
    fcc = f12.f <= f18.f;
    if (fcc) goto L_00BD898C;
L_00BD8984:;
    v0 = 0; goto L_00BD8A90;
L_00BD898C:;
    fcc = f13.f < f15.f;
    if (fcc) goto L_00BD89D0;
    fcc = f13.f < f17.f;
    if (!fcc) goto L_00BD89B0;
    fcc = f13.f < f19.f;
    if (fcc) goto L_00BD89C8;
L_00BD89B0:;
    fcc = f15.f <= f17.f;
    if (fcc) goto L_00BD8A08;
    fcc = f15.f <= f19.f;
    if (fcc) goto L_00BD8A08;
L_00BD89C8:;
    v0 = 0; goto L_00BD8A90;
L_00BD89D0:;
    fcc = f15.f < f17.f;
    if (!fcc) goto L_00BD89E8;
    fcc = f15.f < f19.f;
    if (fcc) goto L_00BD8A00;
L_00BD89E8:;
    fcc = f13.f <= f17.f;
    if (fcc) goto L_00BD8A08;
    fcc = f13.f <= f19.f;
    if (fcc) goto L_00BD8A08;
L_00BD8A00:;
    v0 = 0; goto L_00BD8A90;
L_00BD8A08:;
    f4.f = f17.f - f19.f;
    f0.f = f16.f - f12.f;
    acc = f4.f * f0.f;
    f3.f = f16.f - f18.f;
    f1.f = f13.f - f17.f;
    f2.f = acc + f3.f * f1.f;
    f0.f = f16.f - f14.f;
    f1.f = f15.f - f17.f;
    acc = f4.f * f0.f;
    f0.f = acc + f3.f * f1.f;
    f0.f = f2.f * f0.f;
    f6.i = (s32) 0;
    fcc = f0.f <= f6.f;
    if (!fcc) { v0 = 0; goto L_00BD8A90; }
    f5.f = f13.f - f15.f;
    f2.f = f12.f - f16.f;
    f0.f = f12.f - f18.f;
    f2.f = f5.f * f2.f;
    f4.f = f12.f - f14.f;
    f3.f = f17.f - f13.f;
    acc = f6.f + f2.f;
    f0.f = f5.f * f0.f;
    f2.f = acc + f4.f * f3.f;
    f1.f = f19.f - f13.f;
    acc = f6.f + f0.f;
    f0.f = acc + f4.f * f1.f;
    f0.f = f2.f * f0.f;
    fcc = f0.f <= f6.f;
    { s32 c_ = !fcc; v0 = 1; if (c_) goto L_00BD8A8C; }
    v0 = 0;
L_00BD8A8C:;
    v0 = v0 ^ 0x1;
L_00BD8A90:;
    return v0;
}
