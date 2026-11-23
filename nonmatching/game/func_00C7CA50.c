/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
s64 func_002F9370(s64);

void func_00C7CA50(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16480)); v0 = func_002F9370(a0);
    v1 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -16440));
    a0 = (s64) ((u64) a0 << 61);
    v1 = 1;
    a0 = (s64) ((u64) a0 >> 63);
    { s32 c_ = a0 != v1; s0 = v0; if (c_) goto L_00C7CAC4; }
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U); func_001D7BE0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) 0; func_001D7CE0(a0, a1);
    v1 = (s32) 0xcd0000U;
    a0 = 0 & 0x1;
    a2 = (*(volatile u8 *) (u32) (v1 + -16440));
    a1 = (s32) ((u32) a0 << 2);
    a0 = -5;
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -16440)) = (u8) a0;
L_00C7CAC4:;
    return;
}
