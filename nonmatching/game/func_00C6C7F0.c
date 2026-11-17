/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 SD_call(s32, s32, s32, s32, s32, s32, s32);

s32 func_00C6C7F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0;

    v0 = (s32) 0x86040000U;
    a0 = v0 | 0x7828; v0 = SD_call(a0, a1, a2, a3, a4, a5, a6); return v0;
}
