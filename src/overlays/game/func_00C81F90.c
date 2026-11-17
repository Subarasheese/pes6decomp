/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C897C0(s32, s32);

void func_00C81F90(s32 a0, s32 a1) {
    s32 v0 = 0;

    a1 = a0 & 0xff;
    a0 = 126; v0 = func_00C897C0(a0, a1); return;
}
