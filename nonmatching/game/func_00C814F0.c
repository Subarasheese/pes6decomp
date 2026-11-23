/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EE580(s32, s32);
void func_001EF370(s32, s32);
void func_002D57E0(s32, s32, s32, s32);
s32 func_002F9320(s32, s32);
s32 func_002F9370(s32);
s32 func_002F96F0(s32, s32);
void func_002F9CA0(s32, s32, s32, s32, s32, s32, s32);

void func_00C814F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    f32 acc = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    s5 = a1;
    s4 = a2;
    s3 = a3;
    s1 = 0;
    s2 = (*(volatile s32 *) (u32) (v0 + -15952));
    s0 = (s32) ((u32) sp + 0xc0U);
L_00C8152C:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080));
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) s5 + (u32) s1); v0 = func_001EDC80(a0, a1);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C8152C; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080)); v0 = func_002F9370(a0);
    a1 = s2;
    a4 = v0;
    a5 = s4;
    a6 = s3;
    a0 = (s32) ((u32) sp + 0xc0U);
    a2 = 3;
    a3 = 0; func_002F9CA0(a0, a1, a2, a3, a4, a5, a6);
    s1 = 0;
    s0 = (s32) ((u32) sp + 0xc0U);
L_00C8159C:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x80U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 132));
    v0 = (s32) 0x3f4c0000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    v0 = v0 | 0xcccd;
    f2.i = (s32) s1;
    a0 = (*(volatile s32 *) (u32) s0);
    f5.f = (*(volatile f32 *) (u32) (sp + 128));
    a1 = (s32) ((u32) sp + 0x70U);
    f0.f = f0.f - f1.f;
    f4.f = (*(volatile f32 *) (u32) (sp + 176));
    f3.i = (s32) v0;
    f0.f = f3.f * f0.f;
    f4.f = f4.f - f5.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
    f0.f = f3.f * f4.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f1.f;
    f2.f = (f32) f2.i;
    f1.f = f4.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f;
    f0.i = (s32) 0;
    acc = f0.f + f5.f;
    f0.f = acc + f2.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f; func_001EF370(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C8159C; }
    s0 = 0;
    s1 = (s32) ((u32) sp + 0xc0U);
L_00C81628:;
    v0 = (s32) 0xcd0000U;
    a2 = (s32) 0xcb0000U;
    a0 = (*(volatile s32 *) (u32) s1);
    a2 = (s32) ((u32) a2 + 0xffff8760U);
    a1 = (*(volatile s32 *) (u32) (v0 + -15980));
    a3 = 8; func_002D57E0(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 3;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C81628; }
    return;
}
