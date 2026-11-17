/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_009AE3F0(s32 a0, s32 a1, s32 a2) {
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
    a2 = (s32) ((u32) sp + 0x68U);
    s1 = 5;
    s0 = (s32) ((u32) sp + 0x64U);
    f1.f = (*(volatile f32 *) (u32) (a0 + 4));
    f7.f = (*(volatile f32 *) (u32) (a1 + 4));
    f2.f = (*(volatile f32 *) (u32) a0);
    f8.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (a0 + 8));
    f6.f = (*(volatile f32 *) (u32) (a1 + 8));
    f1.f = f1.f - f7.f;
    f2.f = f2.f - f8.f;
    f4.f = f0.f - f6.f;
    fcc = f5.f == f1.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f2.f;
    (*(volatile f32 *) (u32) s0) = f1.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a2) = f4.f; if (c_) goto L_009AE64C; }
    v0 = (s32) 0xc4270000U;
    f0.i = (s32) v0;
    f0.f = f0.f - f7.f;
    f3.f = f0.f / f1.f;
    fcc = f3.f <= f5.f;
    if (fcc) { v0 = 0; goto L_009AE658; }
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_009AE658; }
    f2.f = f2.f * f3.f;
    v0 = (s32) 0x46590000U;
    v1 = v0 | 0x4800;
    v0 = (s32) 0x46510000U;
    v0 = v0 | 0x9000;
    f0.f = f4.f * f3.f;
    f4.f = f8.f + f2.f;
    f1.f = f1.f * f3.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f2.f;
    f2.f = f6.f + f0.f;
    (*(volatile f32 *) (u32) a2) = f0.f;
    f0.f = f7.f + f1.f;
    (*(volatile f32 *) (u32) s0) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f3.f = f4.f - f1.f;
    fcc = f4.f < f0.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f4.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 88)) = f2.f; if (c_) goto L_009AE654; }
    v0 = (s32) 0x41e00000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (!fcc) goto L_009AE654;
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x44740000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_009AE658; }
    v0 = (s32) 0xc2600000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (!fcc) goto L_009AE618;
    v0 = (s32) 0x44660000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_009AE618;
    v0 = (s32) 0xc31a0000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (fcc) goto L_009AE61C;
    v0 = (s32) 0x42d40000U;
    v1 = (s32) 0x46800000U;
    a0 = v0 | 0xc77b;
    f1.i = (s32) v1;
    v0 = (s32) 0x4f000000U;
    f2.i = (s32) a0;
    acc = f5.f + f1.f;
    f0.i = (s32) v0;
    f1.f = acc + f2.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_009AE5AC; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_009AE5C4;
L_009AE5AC:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_009AE5C4:;
    s2 = v1 & 0xffff;
    a1 = 1000;
    a0 = s2; v0 = func_00BBB990(a0, a1);
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
    fcc = f20.f <= f0.f;
    if (!fcc) goto L_009AE61C;
    s1 = 1; goto L_009AE61C;
L_009AE618:;
    s1 = 1;
L_009AE61C:;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffa918U);
    v0 = (*(volatile s8 *) (u32) v1);
    if (v0 == 0) goto L_009AE640;
    v0 = (*(volatile s32 *) (u32) (v1 + 24));
    at = s1 < v0;
    if (at != 0) goto L_009AE644;
L_009AE640:;
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) s1;
L_009AE644:;
    v0 = 1; goto L_009AE658;
L_009AE64C:;
    v0 = 0; goto L_009AE658;
L_009AE654:;
    v0 = 0;
L_009AE658:;
    return v0;
}
