/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002261B0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    a1 = a0 & 0xffff;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a1 << 4);
    v0 = (s32) ((u32) v0 + 0xfffff3aeU);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) v1);
    v0 = 3;
    v1 = (s32) v1 >> 12;
    a0 = v1 & 0xf;
    if (a0 == v0) goto L_00226238;
    v1 = 5;
    if (a0 == v1) { v0 = 2; goto L_00226238; }
    v0 = 1;
    if (a0 == v0) goto L_00226238;
    v0 = 2;
    if (a0 == v0) { v0 = 53; goto L_0022620C; }
    v0 = v1; goto L_00226238;
    v0 = 53;
L_0022620C:;
    if (a1 != v0) { v0 = 0; goto L_00226220; }
    v0 = 4; goto L_00226220;
    v0 = 0;
L_00226220:;
    goto L_00226238;
    v0 = 2;
    goto L_00226238;
    v0 = v1;
L_00226238:;
    return v0;
}
