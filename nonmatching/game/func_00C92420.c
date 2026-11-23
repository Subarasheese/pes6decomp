/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);

void func_00C92420(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = 1;
    s1 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (gp + -19140));
    a0 = (*(volatile u8 *) (u32) (s0 + 4));
    a0 = a0 & 0x1;
    { s32 c_ = a0 != v1; s1 = (s32) ((u32) s1 + 0xffffcf6cU); if (c_) goto L_00C924A8; }
    s2 = 0;
L_00C92454:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x40U); func_001EE5D0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 68));
    v0 = (s32) 0xc1a00000U;
    f0.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x40U);
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; func_001EF860(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C92454; }
    a1 = (*(volatile u8 *) (u32) (s0 + 4));
    v1 = -2;
    a0 = 0 & 0x1;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v1;
L_00C924A8:;
    return;
}
