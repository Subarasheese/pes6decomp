/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00154080(s64);

s64 func_008F9BB0(s64 a0) {
    s64 at = 0, v0 = 0;

    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5734));
    at = v0 < 2;
    if (at != 0) { a0 = 11; goto L_008F9BD4; }
    v0 = 0; goto L_008F9BE4;
L_008F9BD4:;
    v0 = func_00154080(a0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
L_008F9BE4:;
    return v0;
}
