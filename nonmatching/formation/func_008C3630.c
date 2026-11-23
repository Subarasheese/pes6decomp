/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);

void func_008C3630(s32 a0, s32 a1) {
    s32 v0 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    (*(volatile u16 *) (u32) a0) = (u16) 0;
    s0 = a0;
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) 0;
    a0 = (*(volatile s32 *) (u32) (a0 + 92));
    if (a0 == 0) { ; goto L_008C3680; }
    a1 = (s32) ((u32) sp + 0x20U); func_001D7BE0(a0, a1);
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 92));
    a1 = (s32) ((u32) sp + 0x20U); func_001D7CE0(a0, a1);
L_008C3680:;
    return;
}
