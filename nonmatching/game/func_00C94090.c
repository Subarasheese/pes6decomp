/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE580(s32, s32);
void func_001EF370(s32, s32);

void func_00C94090(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a4;
    { s32 c_ = s4 == 0; s0 = a5; if (c_) goto L_00C94250; }
    if (s2 == 0) goto L_00C94250;
    a0 = (s32) ((u32) sp + 0xa0U);
    { s32 c_ = a0 == 0; v1 = 16; if (c_) goto L_00C940F4; }
L_00C940D8:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_00C940D8;
L_00C940F4:;
    if (a3 == 0) { a0 = (*(volatile s32 *) (u32) s4); goto L_00C94108; }
    f5.f = (*(volatile f32 *) (u32) (a3 + 4));
    f6.f = (*(volatile f32 *) (u32) a3); goto L_00C94128;
L_00C94108:;
    a1 = (s32) ((u32) sp + 0x60U); func_001EE580(a0, a1);
    f3.f = (*(volatile f32 *) (u32) (sp + 144));
    f2.f = (*(volatile f32 *) (u32) (sp + 96));
    f1.f = (*(volatile f32 *) (u32) (sp + 148));
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    f6.f = f3.f - f2.f;
    f5.f = f1.f - f0.f;
L_00C94128:;
    f0.i = (s32) s3;
    f0.f = (f32) f0.i;
    f1.f = f6.f * f0.f;
    f2.f = (*(volatile f32 *) (u32) (s2 + 8));
    fcc = f1.f <= f2.f;
    if (fcc) { f3.f = (*(volatile f32 *) (u32) (s2 + 12)); goto L_00C9415C; }
    f6.f = f2.f / f0.f;
    f1.i = f2.i;
    f3.f = (*(volatile f32 *) (u32) (s2 + 12));
L_00C9415C:;
    fcc = f5.f <= f3.f;
    if (fcc) { v1 = 5; goto L_00C94170; }
    f5.i = f3.i;
    v1 = 5;
L_00C94170:;
    if (s1 == v1) { f1.f = f2.f - f1.f; goto L_00C9419C; }
    v1 = 4;
    if (s1 == v1) { f0.f = (*(volatile f32 *) (u32) s2); goto L_00C94190; }
    v1 = 3;
    f4.f = (*(volatile f32 *) (u32) s2); goto L_00C941BC;
L_00C94190:;
    f0.f = f0.f + f2.f;
    f4.f = f0.f - f6.f; goto L_00C941BC;
L_00C9419C:;
    v1 = (s32) 0x40000000U;
    f0.i = (s32) v1;
    f0.f = f1.f / f0.f;
    f1.f = (*(volatile f32 *) (u32) s2);
    f1.f = f1.f + f2.f;
    f0.f = f1.f - f0.f;
    f4.f = f0.f - f6.f;
L_00C941BC:;
    v1 = 5;
    if (s0 == v1) { f1.f = f3.f - f5.f; goto L_00C941EC; }
    v1 = 4;
    if (s0 == v1) { f0.f = (*(volatile f32 *) (u32) (s2 + 4)); goto L_00C941E0; }
    v1 = 3;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4)); goto L_00C9420C;
L_00C941E0:;
    f0.f = f0.f + f3.f;
    f0.f = f0.f - f5.f; goto L_00C9420C;
L_00C941EC:;
    v1 = (s32) 0x40000000U;
    f0.i = (s32) v1;
    f0.f = f1.f / f0.f;
    f2.f = (*(volatile f32 *) (u32) (s2 + 4));
    f2.f = f2.f + f3.f;
    f0.f = f2.f - f0.f;
    f0.f = f0.f - f5.f;
L_00C9420C:;
    (*(volatile f32 *) (u32) (sp + 160)) = f4.f;
    s0 = 0;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 168)) = f6.f;
    { s32 c_ = s3 <= 0; (*(volatile f32 *) (u32) (sp + 172)) = f5.f; if (c_) goto L_00C94250; }
L_00C94224:;
    a0 = (*(volatile s32 *) (u32) s4);
    a1 = (s32) ((u32) sp + 0xa0U); func_001EF370(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 160));
    s0 = (s32) ((u32) s0 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) (sp + 168));
    v1 = s0 < s3;
    s4 = (s32) ((u32) s4 + 0x4U);
    f0.f = f1.f - f0.f;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) (sp + 160)) = f0.f; if (c_) goto L_00C94224; }
L_00C94250:;
    return;
}
