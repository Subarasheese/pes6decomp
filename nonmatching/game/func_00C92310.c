/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C891E0(s32, s32);

void func_00C92310(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    a0 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 7620));
    v0 = (s32) ((u32) v0 >> 4);
    v1 = v0 & 0x1;
    v0 = (s32) ((u32) v1 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a1 = v0 & 0xff; v0 = func_00C891E0(a0, a1); return;
}
