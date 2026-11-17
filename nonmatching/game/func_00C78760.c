/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F9110(s32, s32, s32, s32);

void func_00C78760(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) gp + 0xffffb4d0U);
    v1 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = v1 == 0; a0 = (s32) ((u32) a0 + 0xffffbe90U); if (c_) goto L_00C787B0; }
    a0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (gp + -19252)) = (u32) 0; func_002F9110(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19252));
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbe90U);
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    a0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00C787B0:;
    return;
}
