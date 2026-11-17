/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C784B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb4d0U);
    a4 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 == 0; a4 = (s32) ((u32) a4 + 0xffffbe90U); if (c_) goto L_00C784FC; }
    a3 = (*(volatile u8 *) (u32) (a4 + 28));
    v1 = 0 & 0x1;
    a1 = -3;
    a2 = (s32) ((u32) v1 << 1);
    v1 = -2;
    a0 = (s64) ((u64) 0 + (u64) (s64) 1);
    a1 = a3 & a1;
    (*(volatile u32 *) (u32) (gp + -19252)) = (u32) 0;
    a1 = a1 | a2;
    (*(volatile u8 *) (u32) (a4 + 28)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a4 + 28));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a4 + 28)) = (u8) v1;
L_00C784FC:;
    return;
}
