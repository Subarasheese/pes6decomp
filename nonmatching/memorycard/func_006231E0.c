/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021D500(s32);

s32 func_006231E0(s32 a0) {
    s32 v0 = 0;

    v0 = func_0021D500(a0);
    return v0;
}
