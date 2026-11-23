/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00620210(s32 a0) {
    s32 v0 = 0;

    v0 = -120;
    if (a0 == v0) { v0 = 10; goto L_00620278; }
    v0 = -119;
    if (a0 == v0) { v0 = 9; goto L_00620278; }
    v0 = -124;
    if (a0 == v0) { v0 = 7; goto L_00620278; }
    v0 = -125;
    if (a0 == v0) { v0 = 6; goto L_00620278; }
    v0 = -126;
    if (a0 == v0) { v0 = 5; goto L_00620278; }
    v0 = -127;
    if (a0 == v0) { v0 = 4; goto L_00620278; }
    v0 = -123;
    if (a0 == v0) { v0 = 11; goto L_00620278; }
    v0 = -122;
    if (a0 == v0) { v0 = 8; goto L_00620278; }
    v0 = 1;
    v0 = 8;
L_00620278:;
    return v0;
}
