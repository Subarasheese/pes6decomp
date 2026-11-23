/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008FA910(s32, s32, s32, s32);

s32 func_00900380(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;

    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (s32) ((u32) v0 + 0x38U);
    a1 = (s32) ((u32) v0 + 0x148U); v0 = func_008FA910(a0, a1, a2, a3); return v0;
}
