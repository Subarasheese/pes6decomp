/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Scene_Get(s32);
void func_00C88AA0(s32);

void func_00C88D80(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0;
    a0 = 0; v0 = Pes6Scene_Get(a0);
    v1 = 12;
    if (v0 == v1) { ; goto L_00C88DC4; }
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_00C88AA0(a0);
    (*(volatile u16 *) (u32) (gp + -19176)) = (u16) s0;
L_00C88DC4:;
    return;
}
