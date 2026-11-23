/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008D6C20(s32, s32, s32);

s32 func_008D4EF0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0;

    v0 = a0;
    a1 = a2;
    a0 = (s32) ((u32) v0 + 0x15cU);
    a2 = v0; v0 = func_008D6C20(a0, a1, a2); return v0;
}
