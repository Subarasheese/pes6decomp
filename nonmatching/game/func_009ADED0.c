/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_009ADED0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    f5.i = (s32) 0;
    s1 = 7;
    s0 = (s32) ((u32) sp + 0x68U);
    f0.f = (*(volatile f32 *) (u32) (a0 + 8));
    f6.f = (*(volatile f32 *) (u32) (a1 + 8));
    f2.f = (*(volatile f32 *) (u32) a0);
    f8.f = (*(volatile f32 *) (u32) a1);
    f1.f = (*(volatile f32 *) (u32) (a0 + 4));
    f7.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = f0.f - f6.f;
    f3.f = f2.f - f8.f;
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f;
    f2.f = (*(volatile f32 *) (u32) s0);
    f4.f = f1.f - f7.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f3.f;
    fcc = f5.f == f2.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 100)) = f4.f; if (c_) goto L_009AE140; }
    v0 = (s32) 0x44740000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    f0.f = f0.f - f6.f;
    f1.f = f0.f / f2.f;
    fcc = f1.f <= f5.f;
    if (fcc) { v0 = 0; goto L_009AE14C; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_009AE14C; }
    acc = f5.f + f8.f;
    v0 = (s32) 0x46510000U;
    f3.f = acc + f3.f * f1.f;
    v0 = v0 | 0x9000;
    acc = f5.f + f7.f;
    v1 = (s32) ((u32) sp + 0x54U);
    f4.f = acc + f4.f * f1.f;
    acc = f5.f + f6.f;
    f0.f = acc + f2.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f;
    f0.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 80)) = f3.f;
    fcc = f3.f < f0.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) v1) = f4.f; if (c_) goto L_009AE148; }
    v0 = (s32) 0xc4270000U;
    f0.i = (s32) v0;
    fcc = f4.f < f0.f;
    if (fcc) { v0 = 0; goto L_009AE14C; }
    v0 = (s32) 0x3d390000U;
    v1 = v0 | 0x999a;
    v0 = (s32) 0x46590000U;
    v0 = v0 | 0xbc00;
    f0.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (sp + 84));
    f1.i = (s32) v1;
    acc = f5.f + f0.f;
    f0.f = acc + f1.f * f2.f;
    f3.f = f3.f - f0.f;
    fcc = f3.f <= f5.f;
    if (!fcc) { v0 = 0; goto L_009AE14C; }
    v0 = (s32) 0xc2600000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (!fcc) goto L_009AE10C;
    v0 = (s32) 0xc4190000U;
    f0.i = (s32) v0;
    fcc = f4.f < f0.f;
    if (fcc) goto L_009AE10C;
    v0 = (s32) 0xc31a0000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (fcc) goto L_009AE110;
    v0 = (s32) 0x42d40000U;
    v1 = (s32) 0x47400000U;
    a0 = v0 | 0xc77b;
    f1.i = (s32) v1;
    v0 = (s32) 0x4f000000U;
    f2.i = (s32) a0;
    acc = f5.f + f1.f;
    f0.i = (s32) v0;
    f1.f = acc - f2.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_009AE088; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_009AE0A0;
L_009AE088:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_009AE0A0:;
    s2 = v1 & 0xffff;
    a1 = 1000;
    a0 = s2; v0 = func_00BBB990(a0, a1);
    a0 = s2;
    a1 = 1000; v0 = func_00BBB9C0(a0, a1);
    a0 = s2;
    a1 = 1000; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    a0 = s2;
    f0.f = (*(volatile f32 *) (u32) s0);
    a1 = 1000;
    f1.f = (f32) f1.i;
    f20.f = f0.f * f1.f; v0 = func_00BBB9C0(a0, a1);
    v0 = (s32) ((u32) 0 - (u32) v0);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    fcc = f20.f < f0.f;
    if (fcc) goto L_009AE110;
    s1 = 3; goto L_009AE110;
L_009AE10C:;
    s1 = 3;
L_009AE110:;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffa918U);
    v0 = (*(volatile s8 *) (u32) v1);
    if (v0 == 0) goto L_009AE134;
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    at = s1 < v0;
    if (at != 0) goto L_009AE138;
L_009AE134:;
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) s1;
L_009AE138:;
    v0 = 1; goto L_009AE14C;
L_009AE140:;
    v0 = 0; goto L_009AE14C;
L_009AE148:;
    v0 = 0;
L_009AE14C:;
    return v0;
}
