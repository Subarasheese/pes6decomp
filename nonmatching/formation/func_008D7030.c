/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008D6E10(s32, s32, s32, s32);

void func_008D7030(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = (*(volatile s8 *) (u32) (a0 + 34));
    v0 = 1;
    if (v1 != v0) goto L_008D7044;
    v0 = 0;
L_008D7044:;
    a3 = v0 & 0xff; v0 = func_008D6E10(a0, a1, a2, a3); return;
}
