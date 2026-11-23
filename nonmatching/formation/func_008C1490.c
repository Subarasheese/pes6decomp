/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Sprite_SetPositionZ(s32, f32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001D7D60(s32, s32);
void func_001D7E40(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);
s32 func_008B96C0(void);

s32 func_008C1490(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    v0 = func_008B96C0();
    a0 = v0; v0 = func_001D7F90(a0, a1, a2, a3);
    s0 = v0;
    if (s0 == 0) { v0 = s0; goto L_008C151C; }
    a1 = s2;
    a0 = s0; func_001D7E40(a0, a1, a2, a3);
    f12.f = (*(volatile f32 *) (u32) (s1 + 8));
    a0 = s0; Pes6Sprite_SetPositionZ(a0, f12.f);
    a0 = s0;
    a1 = 1; func_001D7D60(a0, a1);
    f20.f = (*(volatile f32 *) (u32) (s1 + 4));
    a0 = s0;
    f21.f = (*(volatile f32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x50U); func_001D7BE0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 80)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f20.f; func_001D7CE0(a0, a1);
    v0 = s0;
L_008C151C:;
    return v0;
}
