/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FAC50(s32, s32);

s32 func_001FAB60(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a1;
    if (s0 != 0) { a1 = a2; goto L_001FAB80; }
    v0 = 52; goto L_001FAB94;
L_001FAB80:;
    v0 = func_001FAC50(a0, a1);
    v1 = (s32) ((u32) s0 + 0x13U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
L_001FAB94:;
    return v0;
}
