/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021E4B0(s32, s32, s32, s32);

s32 func_00C76830(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;

    a0 = a0 & 0xffff;
    a1 = 1;
    a2 = 0;
    a3 = 0; v0 = func_0021E4B0(a0, a1, a2, a3); return v0;
}
