/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED530(s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_00260060(s32, s32);

void func_0025DF60(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    v0 = 64;
    v1 = (s32) ((u32) sp + 0x80U);
    if (v1 == 0) goto L_0025DFA8;
L_0025DF8C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025DF8C;
L_0025DFA8:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12232));
    a1 = (s32) ((u32) sp + 0xc0U); func_001EE5D0(a0, a1);
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x70U); func_00260060(a0, a1);
    f4.f = (*(volatile f32 *) (u32) (sp + 116));
    s2 = (s32) 0x590000U;
    f3.f = (*(volatile f32 *) (u32) (sp + 124));
    s5 = 0;
    f2.f = (*(volatile f32 *) (u32) (sp + 112));
    s2 = (s32) ((u32) s2 + 0xffffcfe0U);
    f1.f = (*(volatile f32 *) (u32) (sp + 120));
    s1 = (s32) ((u32) sp + 0x80U);
    f5.f = (*(volatile f32 *) (u32) (sp + 192));
    f0.f = (*(volatile f32 *) (u32) (sp + 196));
    (*(volatile f32 *) (u32) (sp + 132)) = f4.f;
    f3.f = f4.f + f3.f;
    f1.f = f2.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 144)) = f5.f;
    (*(volatile f32 *) (u32) (sp + 128)) = f5.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 180)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 176)) = f1.f;
L_0025E014:;
    s3 = (*(volatile s32 *) (u32) (s2 + 348));
    s4 = 0;
    s0 = s1;
L_0025E020:;
    a0 = s3;
    a1 = s4;
    a2 = s0; func_001ED530(a0, a1, a2);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x10U); if (c_) goto L_0025E020; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v1 = s5 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x20U); if (c_) goto L_0025E014; }
    return;
}
