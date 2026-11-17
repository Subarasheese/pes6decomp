/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002D5960(s32, s32);
void func_002D5980(s32, s32);

void func_00C78460(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a1 = a0;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) gp + 0xffffb4d0U);
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 == 0; a0 = (s32) ((u32) a0 + 0xffffbe90U); if (c_) goto L_00C784A0; }
    s0 = (s32) ((u32) a0 + 0x4U);
    (*(volatile u32 *) (u32) (gp + -19252)) = (u32) 0;
    a0 = s0; func_002D5980(a0, a1);
    a0 = s0;
    a1 = 0; func_002D5960(a0, a1);
L_00C784A0:;
    return;
}
