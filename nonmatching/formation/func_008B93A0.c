/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_008B93A0(s64 a0) {
    s64 v0 = 0, v1 = 0;

    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v1 = a0 & 0xf;
    v0 = 8;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    if (v1 == v0) { v0 = 0; goto L_008B9400; }
    v0 = 7;
    if (v1 == v0) { v0 = a0 & 0x40; goto L_008B93E4; }
    v0 = 6;
    if (v1 == v0) goto L_008B93E0;
    v0 = 1; goto L_008B9400;
L_008B93E0:;
    v0 = a0 & 0x40;
L_008B93E4:;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B93FC;
    v0 = 0;
    goto L_008B9400;
L_008B93FC:;
    v0 = 1;
L_008B9400:;
    return v0;
}
