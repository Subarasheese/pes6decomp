/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023CFE0(s32, s32, s32, s32);

void func_00327FA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = 28;
    v1 = (*(volatile s32 *) (u32) (a0 + 44));
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (a0 + 13)); goto L_00328064; }
    v0 = 26;
    if (v1 == v0) goto L_00328060;
    v0 = 24;
    if (v1 == v0) goto L_00328060;
    v0 = 20;
    if (v1 == v0) goto L_00328060;
    v0 = 22;
    if (v1 == v0) goto L_00328060;
    v0 = 18;
    if (v1 == v0) goto L_00328060;
    v0 = 15;
    if (v1 == v0) goto L_00328060;
    v0 = 13;
    if (v1 == v0) goto L_00328060;
    v0 = 11;
    if (v1 == v0) goto L_00328060;
    v0 = 1;
    if (v1 == v0) goto L_00328060;
    v0 = 56;
    if (v1 == v0) goto L_00328060;
    v0 = 44;
    if (v1 == v0) goto L_00328060;
    if (v1 == 0) goto L_00328060;
    goto L_00328160;
L_00328060:;
    v0 = (*(volatile u8 *) (u32) (a0 + 13));
L_00328064:;
    if (v0 != 0) goto L_00328160;
    s1 = (s32) 0x590000U;
    s2 = a0;
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0x1bb0U);
L_0032807C:;
    a1 = (*(volatile u16 *) (u32) s1);
    a0 = (s32) ((u32) sp + 0x68U);
    a2 = 0;
    f20.i = (s32) 0;
    s0 = (s32) ((u32) s2 + 0x50U); func_0023CFE0(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (sp + 104));
    v0 = (s32) 0x43c80000U;
    f0.i = (s32) v0;
    a1 = (*(volatile s8 *) (u32) (sp + 105));
    a0 = (*(volatile s8 *) (u32) (sp + 106));
    f1.i = (s32) v1;
    v0 = (*(volatile s8 *) (u32) (sp + 108));
    f1.f = (f32) f1.i;
    v1 = (*(volatile s8 *) (u32) (sp + 107));
    f2.f = f20.f + f1.f;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f2.f = f2.f + f1.f;
    f1.i = (s32) a0;
    f1.f = (f32) f1.i;
    f2.f = f2.f + f1.f;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f2.f = f2.f + f1.f;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f1.f = f2.f + f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00328118;
    v0 = 3;
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v0; goto L_00328148;
L_00328118:;
    v0 = (s32) 0x43af0000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00328140;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v0; goto L_00328148;
L_00328140:;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v0;
L_00328148:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 2;
    s2 = (s32) ((u32) s2 + 0x3cU);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_0032807C; }
L_00328160:;
    v0 = 1;
    return;
}
