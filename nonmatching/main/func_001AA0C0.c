/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001AA0C0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 51));
    v0 = 1;
    if (v1 == v0) { v0 = 3; goto L_001AA108; }
    if (v1 == 0) { v0 = 0; goto L_001AA108; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x224U);
    a1 = (*(volatile u8 *) (u32) (a0 + 49));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (a0 + 64));
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_001AA108:;
    return v0;
}
