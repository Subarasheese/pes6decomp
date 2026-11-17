/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00303F30(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -3844));
    v1 = (s32) ((u32) v1 + 0xfffff0ffU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 9;
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { v0 = 1; goto L_00303F84; }
    v0 = 8;
    if (v1 == v0) goto L_00303F80;
    v0 = 7;
    if (v1 == v0) goto L_00303F80;
    v0 = 6;
    if (v1 == v0) goto L_00303F80;
    v0 = 0; goto L_00303F84;
L_00303F80:;
    v0 = 1;
L_00303F84:;
    return v0;
}
