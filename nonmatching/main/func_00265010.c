/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DB2D0(s32, s32, s32);

s32 func_00265010(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0;

    a1 = (s32) ((u32) a0 + 0xfffffe44U);
    at = (u64) a1 < (u64) (s64) 12;
    if (at != 0) { a0 = 1; goto L_00265028; }
    a1 = 0;
    a0 = 1;
L_00265028:;
    if (a2 != a0) { a2 = 2; goto L_00265038; }
    a0 = 2;
    a2 = 2;
L_00265038:;
    v0 = func_001DB2D0(a0, a1, a2); return v0;
}
