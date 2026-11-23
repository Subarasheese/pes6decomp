/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
s32 func_002F9370(s32);
void func_002F9F20(s32, s32, s32, s32, s32, s32);

void func_00C7FC00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    s3 = a0;
    s2 = a2;
    a1 = (*(volatile s32 *) (u32) (gp + -19200));
    a0 = (*(volatile u8 *) (u32) (v0 + 7628));
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0xffffc080U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    s0 = a1 ^ a0;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s1 = a3; v0 = func_002F9370(a0);
    a1 = s0;
    a3 = v0;
    a4 = s2;
    a5 = s1;
    a0 = s3;
    a2 = 1; func_002F9F20(a0, a1, a2, a3, a4, a5);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    return;
}
