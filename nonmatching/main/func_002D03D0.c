/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002D03D0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = a1 & 0xff;
    if (v0 <= 0) goto L_002D0410;
    v1 = a0 & 0xff;
    v0 = (u64) v1 < (u64) (s64) 15;
    if (v0 != 0) goto L_002D03F4;
    v0 = a0; goto L_002D0408;
L_002D03F4:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xfffff318U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = a0;
L_002D0408:;
    goto L_002D0424;
L_002D0410:;
    v0 = (s32) 0x3b0000U;
    v1 = a0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffff300U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_002D0424:;
    return v0;
}
