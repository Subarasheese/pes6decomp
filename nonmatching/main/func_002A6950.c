/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 sqrtf(f32);

s32 func_002A6950(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    union { f32 f; s32 i; } f7 = { 0 };
    union { f32 f; s32 i; } f8 = { 0 };
    union { f32 f; s32 i; } f9 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x5e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8976));
    f6.f = (*(volatile f32 *) (u32) a1);
    f5.f = (*(volatile f32 *) (u32) (a1 + 4));
    f2.f = (*(volatile f32 *) (u32) (a1 + 8));
    f3.i = (s32) 0;
    v1 = (s32) 0x5e0000U;
    f4.f = (*(volatile f32 *) (u32) (v1 + 8980));
    f0.f = f6.f - f0.f;
    v1 = (s32) 0x5e0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 8984));
    f4.f = f5.f - f4.f;
    acc = f4.f * f4.f;
    f1.f = f2.f - f1.f;
    acc = acc + f0.f * f0.f;
    f2.f = acc + f1.f * f1.f;
    f7.f = sqrtf(f2.f);
    fcc = f3.f == f7.f;
    if (fcc) { v1 = (s32) 0x3a830000U; goto L_002A6AEC; }
L_002A69AC:;
    f9.f = f4.f / f7.f;
    v1 = (s32) 0x3f800000U;
    f6.i = (s32) v1;
    f5.i = (s32) 0;
    acc = f5.f + f6.f;
    f2.f = acc - f9.f * f9.f;
    f2.f = sqrtf(f2.f);
    f3.f = f7.f * f2.f;
    f2.f = f2.f / f9.f;
    f7.f = (*(volatile f32 *) (u32) (gp + -32220));
    f0.f = f0.f / f3.f;
    f1.f = f1.f / f3.f;
    f3.f = (*(volatile f32 *) (u32) (gp + -32212));
    f2.f = f2.f - f6.f;
    acc = f5.f + f6.f;
    fcc = f13.f <= f7.f;
    { s32 c_ = fcc; f4.f = acc + f3.f * f2.f; if (c_) goto L_002A6A10; }
    f2.f = (*(volatile f32 *) (u32) (gp + -32216));
    f3.f = f13.f - f7.f;
    acc = f5.f + f6.f;
    f2.f = f2.f * f3.f;
    f6.f = acc + f4.f * f2.f;
L_002A6A10:;
    f3.f = (*(volatile f32 *) (u32) (a2 + 8));
    f4.f = (*(volatile f32 *) (u32) a2);
    f2.i = (s32) 0;
    acc = f1.f * f3.f;
    f8.f = acc + f0.f * f4.f;
    fcc = f8.f < f2.f;
    if (!fcc) { v1 = (s32) 0x3f800000U; goto L_002A6AFC; }
    v1 = (s32) 0x3dcc0000U;
    v1 = v1 | 0xcccd;
    f2.i = (s32) v1;
    fcc = f9.f <= f2.f;
    if (fcc) { f3.f = f13.f * f6.f; goto L_002A6B08; }
    f2.f = f13.f * f6.f;
    f2.f = f2.f / f9.f;
L_002A6A5C:;
    v1 = (s32) 0xbf800000U;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1;
L_002A6A64:;
    fcc = f13.f <= f7.f;
    { s32 c_ = fcc; f8.f = f8.f * f2.f; if (c_) goto L_002A6A94; }
    f5.f = (*(volatile f32 *) (u32) (gp + -32208));
    v1 = (s32) 0x3f800000U;
    f4.f = f13.f - f7.f;
    f3.i = (s32) v1;
    f2.i = (s32) 0;
    acc = f2.f + f3.f;
    f2.f = acc + f5.f * f4.f; goto L_002A6A9C;
L_002A6A94:;
    v1 = (s32) 0x3f800000U;
    f2.i = (s32) v1;
L_002A6A9C:;
    f3.f = f12.f * f2.f;
    f5.f = (*(volatile f32 *) (u32) (a2 + 8));
    f6.f = (*(volatile f32 *) (u32) a2);
    f2.f = (*(volatile f32 *) (u32) a1);
    f7.i = f1.i ^ (s32) 0x80000000U;
    f4.i = (s32) 0;
    acc = f0.f * f5.f;
    f5.f = acc + f7.f * f6.f;
    acc = f4.f + f2.f;
    f3.f = f3.f * f5.f;
    acc = acc - f8.f * f0.f;
    f2.f = acc - f3.f * f7.f;
    (*(volatile f32 *) (u32) a0) = f2.f;
    f2.f = (*(volatile f32 *) (u32) (a1 + 8));
    acc = f4.f + f2.f;
    acc = acc - f8.f * f1.f;
    f0.f = acc - f3.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f0.f; goto L_002A6B18;
L_002A6AEC:;
    v1 = v1 | 0x126f;
    f7.i = (s32) v1;
    goto L_002A69AC;
L_002A6AFC:;
    f2.i = f13.i;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1; goto L_002A6A64;
L_002A6B08:;
    v1 = (s32) 0x41200000U;
    f2.i = (s32) v1;
    f2.f = f2.f * f3.f; goto L_002A6A5C;
L_002A6B18:;
    return v0;
}
