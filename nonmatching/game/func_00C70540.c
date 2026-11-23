/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);

void func_00C70540(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0xcd0000U;
    a0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + -17124));
    s0 = (s32) 0xcd0000U;
    v1 = v1 & 0x1;
    { s32 c_ = v1 != a0; s0 = (s32) ((u32) s0 + 0xffffcf74U); if (c_) goto L_00C705BC; }
    s1 = 0;
L_00C70570:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U); func_001EE5D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0; func_001EF860(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 16;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C70570; }
    v1 = (s32) 0xcd0000U;
    a0 = -2;
    a2 = (*(volatile u8 *) (u32) (v1 + -17124));
    a1 = 0 & 0x1;
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -17124)) = (u8) a0;
L_00C705BC:;
    return;
}
