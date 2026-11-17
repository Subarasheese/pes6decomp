/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C6A960(s32 a0, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;

    f1.i = f12.i;
    v0 = 0;
    f1.i = f1.i & 0x7FFFFFFF;
    v1 = (s32) 0x46510000U;
    v1 = v1 | 0x6000;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C6AAB4;
    f14.i = f14.i & 0x7FFFFFFF;
    v1 = (s32) 0x46520000U;
    a0 = v1 | 0xa000;
    f0.i = (s32) a0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C6AA3C;
    f0.i = (s32) v1;
    f2.i = (s32) 0;
    f3.f = f1.f - f0.f;
    v1 = (s32) 0x446d0000U;
    a0 = v1 | 0xc000;
    v1 = (s32) 0x44c80000U;
    f1.i = (s32) a0;
    f0.i = (s32) v1;
    f1.f = f14.f - f1.f;
    acc = f1.f * f1.f;
    f1.f = acc + f3.f * f3.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C6AA34;
    v1 = (s32) 0x44770000U;
    v1 = v1 | 0xc000;
    f0.i = (s32) v1;
    fcc = f14.f < f0.f;
    if (!fcc) goto L_00C6AA3C;
    a0 = (s32) 0xc4200000U;
    v1 = (s32) 0x44b00000U;
    f1.i = (s32) a0;
    v1 = v1 | 0xb851;
    f0.i = (s32) v1;
    f1.f = f13.f - f1.f;
    f1.f = f1.f * f1.f;
    acc = f2.f + f1.f;
    f1.f = acc + f3.f * f3.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C6AA3C;
L_00C6AA34:;
    v0 = 1; goto L_00C6AAB4;
L_00C6AA3C:;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (a0 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x446d0000U;
    v1 = v1 | 0xc000;
    f0.i = (s32) v1;
    f2.i = (s32) 0;
    f3.f = f1.f - f0.f;
    f1.f = f14.f - f0.f;
    f0.f = f1.f * f3.f;
    fcc = f0.f < f2.f;
    if (!fcc) goto L_00C6AAB4;
    f4.i = f1.i & 0x7FFFFFFF;
    f3.i = f3.i & 0x7FFFFFFF;
    f1.f = (*(volatile f32 *) (u32) (a0 + 16));
    f0.f = f4.f + f3.f;
    f1.f = f3.f * f1.f;
    acc = f2.f + f1.f;
    f1.f = acc + f4.f * f12.f;
    f0.f = f1.f / f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x46510000U;
    v1 = v1 | 0xc400;
    f0.i = (s32) v1;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00C6AAB4;
    v0 = 1;
L_00C6AAB4:;
    return v0;
}
