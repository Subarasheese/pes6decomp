/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00220EF0(s32);

s32 func_0062F930(s32 a0) {
    s32 v0 = 0, v1 = 0, a1 = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 102));
    v0 = 3;
    if (v1 == v0) { a0 = 10; goto L_0062F95C; }
    v0 = 2;
    if (v1 == v0) { a0 = 9; goto L_0062F95C; }
    v0 = 1;
    if (v1 == v0) { a0 = 8; goto L_0062F95C; }
    a0 = 7;
L_0062F95C:;
    a1 = 1; v0 = func_00220EF0(a0); return v0;
}
