/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);

void func_00C90910(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0xcd0000U;
    s6 = a0;
    a0 = (s32) ((u32) sp + 0xa0U);
    s5 = a1;
    s7 = (*(volatile s32 *) (u32) (v1 + -10028));
    f21.i = f12.i;
    f20.i = f13.i;
    { s32 c_ = a0 == 0; v1 = 16; if (c_) goto L_00C90980; }
L_00C90964:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_00C90964;
L_00C90980:;
    { s32 c_ = s7 <= 0; s4 = 0; if (c_) goto L_00C90AB0; }
    s2 = 0;
    s1 = 0;
L_00C90990:;
    v1 = (s32) 0xcd0000U;
    a0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    a0 = (*(volatile s32 *) (u32) (a0 + -10024));
    v1 = (s32) ((u32) v1 + (u32) s1);
    s3 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = s3 == 0; s0 = (s32) ((u32) a0 + (u32) s2); if (c_) goto L_00C90A98; }
    v1 = (*(volatile u8 *) (u32) (s0 + 11));
    if (v1 <= 0) goto L_00C90A80;
    v0 = 3;
    if (s5 == v0) goto L_00C90A10;
    v0 = 2;
    if (s5 == v0) goto L_00C90A10;
    v0 = 1;
    if (s5 == v0) goto L_00C909F0;
    if (s5 == 0) goto L_00C909F0;
    goto L_00C90A30;
L_00C909F0:;
    f0.f = (*(volatile f32 *) (u32) s0);
    f0.f = f0.f * f21.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f; goto L_00C90A30;
L_00C90A10:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    f0.f = f0.f * f21.f;
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
L_00C90A30:;
    a0 = s3;
    f2.f = (*(volatile f32 *) (u32) (sp + 160));
    a1 = (s32) ((u32) sp + 0xa0U);
    f1.f = (*(volatile f32 *) (u32) s6);
    f0.f = (*(volatile f32 *) (u32) (sp + 164));
    f1.f = f2.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s6 + 4));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f; func_001EF860(a0, a1);
    a1 = (s32) ((u32) s0 + 0x8U);
    a0 = s3; func_001EEE60(a0, a1);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    goto L_00C90A98;
L_00C90A80:;
    if (v1 != 0) goto L_00C90A98;
    a0 = s3;
    a1 = 0; func_001EF900(a0, a1);
L_00C90A98:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < s7;
    s2 = (s32) ((u32) s2 + 0xcU);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C90990; }
L_00C90AB0:;
    v1 = (s32) 0xcd0000U;
    a2 = (*(volatile u8 *) (u32) (v1 + -10016));
    a0 = -3;
    v1 = 0 & 0x1;
    a0 = a2 & a0;
    a1 = (s32) ((u32) v1 << 1);
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -10016)) = (u8) a0;
    return;
}
