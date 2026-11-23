/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00627300(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = 1;
    if (a1 == v1) { v0 = a0; goto L_00627320; }
    v1 = (s32) ((u32) a1 + 0xfffffffdU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) goto L_00627320;
    v0 = a0;
L_00627320:;
    return v0;
}
