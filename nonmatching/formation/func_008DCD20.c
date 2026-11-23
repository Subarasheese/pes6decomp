/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001D7F10(s32, s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008DCD20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = a0 == 0; v1 = 16; if (c_) goto L_008DCD5C; }
L_008DCD40:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008DCD40;
L_008DCD5C:;
    a0 = (s32) ((u32) sp + 0x68U);
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_008DCD84; }
L_008DCD68:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008DCD68;
L_008DCD84:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 24)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (s0 + 472));
    if (a0 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 104)); goto L_008DCDE8; }
    a1 = (s32) ((u32) sp + 0x50U); func_001D7BE0(a0, a1);
    a0 = 5;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s1 = v0;
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = s1; func_001D7CE0(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 36; v0 = func_001D7A20(a0, a1, a2);
    a0 = s1; func_001D7F10(a0, a1, a2, a3);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) (sp + 104)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
L_008DCDE8:;
    f0.f = (*(volatile f32 *) (u32) (sp + 108));
    (*(volatile f32 *) (u32) (s0 + 84)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 88)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 92)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 96)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 100)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 104)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 108)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 112)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 116)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 120)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 124)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 128)) = f0.f;
    return;
}
