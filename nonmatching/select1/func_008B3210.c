/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001D7CE0(s32, s32);

void func_008B3210(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    s0 = a2;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = s1; v0 = func_001D7A20(a0, a1, a2);
    a0 = s2;
    a1 = s1; f0.f = func_001D79A0(a0, a1);
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    a0 = s0;
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    a1 = (s32) ((u32) sp + 0x40U);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; func_001D7CE0(a0, a1);
    return;
}
