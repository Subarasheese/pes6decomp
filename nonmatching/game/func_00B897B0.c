/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0027A600(s32, s32);

void func_00B897B0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    a2 = 1;
    v1 = 255;
    (*(volatile u8 *) (u32) (v0 + 80)) = (u8) a2;
    v0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u8 *) (u32) (v0 + 102)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) a0);
    a1 = 0; v0 = func_0027A600(a0, a1); return;
}
