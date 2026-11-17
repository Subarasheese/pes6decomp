/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_009AE680(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f9 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x41b00000U;
    f4.f = (*(volatile f32 *) (u32) a0);
    v0 = v0 | 0x8d3e;
    f9.f = (*(volatile f32 *) (u32) a1);
    a2 = 8;
    f2.f = (*(volatile f32 *) (u32) (a0 + 4));
    f7.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a0 + 8));
    f5.f = (*(volatile f32 *) (u32) (a1 + 8));
    f3.i = (s32) 0;
    f8.f = f4.f - f9.f;
    f6.f = f2.f - f7.f;
    f4.f = f1.f - f5.f;
    f0.i = (s32) v0;
    acc = f3.f + f6.f;
    f2.f = acc - f0.f * f8.f;
    fcc = f3.f == f2.f;
    (*(volatile f32 *) (u32) sp) = f8.f;
    (*(volatile f32 *) (u32) (sp + 4)) = f6.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 8)) = f4.f; if (c_) goto L_009AE7CC; }
    f0.f = f0.f * f9.f;
    v0 = (s32) 0xc8960000U;
    v0 = v0 | 0x769f;
    f1.f = f0.f - f7.f;
    f0.i = (s32) v0;
    f0.f = f0.f + f1.f;
    f1.f = f0.f / f2.f;
    fcc = f1.f <= f3.f;
    if (fcc) { v0 = 0; goto L_009AE7D8; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_009AE7D8; }
    v0 = (s32) 0xc4270000U;
    acc = f3.f + f7.f;
    f2.f = acc + f6.f * f1.f;
    f0.i = (s32) v0;
    acc = f3.f + f5.f;
    fcc = f2.f < f0.f;
    { s32 c_ = fcc; f1.f = acc + f4.f * f1.f; if (c_) goto L_009AE7D4; }
    f1.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x44740000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_009AE7D8; }
    v0 = (s32) 0x445f0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_009AE798;
    v0 = (s32) 0xc4120000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_009AE79C;
L_009AE798:;
    a2 = 4;
L_009AE79C:;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffa918U);
    v0 = (*(volatile s8 *) (u32) v1);
    if (v0 == 0) goto L_009AE7C0;
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    at = a2 < v0;
    if (at != 0) goto L_009AE7C4;
L_009AE7C0:;
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) a2;
L_009AE7C4:;
    v0 = 1; goto L_009AE7D8;
L_009AE7CC:;
    v0 = 0; goto L_009AE7D8;
L_009AE7D4:;
    v0 = 0;
L_009AE7D8:;
    return v0;
}
