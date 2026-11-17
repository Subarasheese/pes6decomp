/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D5630(s32, s32);

void func_00C78430(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a0 = (*(volatile s32 *) (u32) (gp + -19252));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    a1 = 1;
    v1 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x14U); v0 = func_002D5630(a0, a1); return;
}
