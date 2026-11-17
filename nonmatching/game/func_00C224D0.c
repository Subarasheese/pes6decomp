/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memset(s32, s32, s32);

void func_00C224D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0xcd0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffaf80U);
    a2 = 188;
    (*(volatile u32 *) (u32) (gp + -19332)) = (u32) a0; v0 = memset(a0, a1, a2); return;
}
