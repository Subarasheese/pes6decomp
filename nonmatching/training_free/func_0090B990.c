/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0090B990(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 476));
    v0 = 1;
    if (v1 == v0) goto L_0090BA18;
    v0 = 7;
    if (v1 == v0) goto L_0090BA18;
    if (v1 == 0) goto L_0090BA18;
    v0 = 6;
    if (v1 == v0) goto L_0090BA0C;
    v0 = 2;
    if (v1 == v0) goto L_0090BA0C;
    v0 = 255;
    if (v1 == v0) goto L_0090BA0C;
    v0 = 3;
    if (v1 == v0) goto L_0090BA04;
    v0 = 5;
    if (v1 == v0) goto L_0090BA04;
    v0 = 4;
    if (v1 == v0) goto L_0090BA04;
    v0 = 1; goto L_0090BA10;
L_0090BA04:;
    v0 = 2; goto L_0090BA1C;
L_0090BA0C:;
    v0 = 1;
L_0090BA10:;
    goto L_0090BA1C;
L_0090BA18:;
    v0 = 0;
L_0090BA1C:;
    return v0;
}
