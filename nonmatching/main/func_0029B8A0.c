/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 sqrtf(f32);

f32 func_0029B8A0(s32 a0) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x5e0000U;
    f6.f = (*(volatile f32 *) (u32) (v0 + 8960));
    f0.i = (s32) 0;
    v0 = (s32) 0x5e0000U;
    f5.f = (*(volatile f32 *) (u32) (v0 + 8976));
    v0 = (s32) 0x5e0000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + 8968));
    f5.f = f6.f - f5.f;
    fcc = f0.f == f5.f;
    v0 = (s32) 0x5e0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 8984));
    v0 = (s32) 0x5e0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 8964));
    f3.f = f4.f - f3.f;
    v0 = (s32) 0x5e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 8980));
    { s32 c_ = fcc; f1.f = f2.f - f1.f; if (c_) goto L_0029B994; }
    acc = f3.f * f3.f;
L_0029B8EC:;
    f0.f = acc + f5.f * f5.f;
    f3.i = (s32) 0;
    f0.f = sqrtf(f0.f);
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0xc3400000U;
    f2.f = f1.f / f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 8996));
    f1.i = (s32) v1;
    f0.f = f1.f / f0.f;
    f4.f = f0.f - f2.f;
    fcc = f3.f == f4.f;
    if (fcc) goto L_0029B988;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    acc = f3.f + f0.f;
    f0.f = acc + f2.f * f2.f;
    f2.f = sqrtf(f0.f);
    if (a0 == 0) goto L_0029B954;
    (*(volatile f32 *) (u32) a0) = f2.f;
L_0029B954:;
    v0 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 8980));
    f1.i = (s32) 0;
    f0.f = f2.f * f0.f;
    f0.f = f0.f / f4.f;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_0029B988;
    goto L_0029B9A8;
L_0029B988:;
    f0.i = (s32) 0;
    goto L_0029B9A8;
L_0029B994:;
    fcc = f0.f == f3.f;
    if (fcc) goto L_0029B988;
    acc = f3.f * f3.f; goto L_0029B8EC;
L_0029B9A8:;
    return f0.f;
}
