/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C8B090(s32 a0) {
    s32 v0 = 0, v1 = 0;

    if (a0 == 0) goto L_00C8B09C;
    a0 = 0;
L_00C8B09C:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) v0 + 0xffffce30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x230U); return v0;
}
