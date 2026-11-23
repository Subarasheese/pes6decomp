/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);

void func_008E37C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a3;
    a0 = (*(volatile s32 *) (u32) (a0 + 2512));
    s0 = a2;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 99; v0 = func_001D7A20(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) s1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) s0) = f0.f;
    v1 = (*(volatile s16 *) (u32) (s1 + 2));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (s3 + 483));
    if (v1 == 0) { a0 = s2 & 0xff; goto L_008E38AC; }
    v1 = s2 & 0xff;
    if (v1 != 0) { f1.f = (*(volatile f32 *) (u32) (s0 + 4)); goto L_008E3854; }
    f0.f = (*(volatile f32 *) (u32) s0);
    v1 = (s32) 0x42400000U;
    f1.i = (s32) v1;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_008E3868;
L_008E3854:;
    v1 = (s32) 0x42d00000U;
    f0.i = (s32) v1;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
L_008E3868:;
    f3.f = (*(volatile f32 *) (u32) s0);
    v1 = (s32) 0x42400000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    v1 = (s32) 0x42d00000U;
    f2.f = f3.f * f2.f;
    f3.f = f2.f / f0.f;
    f2.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.i = (s32) v1;
    f1.f = f2.f * f1.f;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f3.f; goto L_008E392C;
L_008E38AC:;
    v1 = 1;
    if (a0 != v1) { f0.f = (*(volatile f32 *) (u32) (sp + 88)); goto L_008E38E8; }
    f1.f = (*(volatile f32 *) (u32) s0);
    a0 = (s32) 0x42400000U;
    f2.i = (s32) a0;
    v1 = (s32) 0x42d00000U;
    f0.i = (s32) v1;
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) s0) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 88));
L_008E38E8:;
    v1 = (s32) 0x3f800000U;
    f4.i = (s32) v1;
    v1 = (s32) 0x42400000U;
    f3.f = f0.f - f4.f;
    f2.f = (*(volatile f32 *) (u32) s0);
    f1.i = (s32) v1;
    v1 = (s32) 0x42d00000U;
    f2.f = f2.f * f3.f;
    f1.f = f2.f / f1.f;
    (*(volatile f32 *) (u32) s0) = f1.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 92));
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.i = (s32) v1;
    f2.f = f2.f - f4.f;
    f1.f = f1.f * f2.f;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
L_008E392C:;
    return;
}
