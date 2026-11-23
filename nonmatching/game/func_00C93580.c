/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);

void func_00C93580(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = 1;
    a0 = (*(volatile s32 *) (u32) (gp + -19132));
    s0 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 8));
    a0 = a0 & 0x1;
    { s32 c_ = a0 != v1; s0 = (s32) ((u32) s0 + 0xffffcf48U); if (c_) goto L_00C935F8; }
    s1 = 0;
L_00C935B0:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U); func_001EE5D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) 0; func_001EF860(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 8;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C935B0; }
    a2 = (*(volatile s32 *) (u32) (gp + -19132));
    v1 = -2;
    a0 = 0 & 0x1;
    a1 = (*(volatile u8 *) (u32) (a2 + 8));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 8)) = (u8) v1;
L_00C935F8:;
    return;
}
