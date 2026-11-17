/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetPsm(s32);

void func_001E6560(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    if (a0 == 0) goto L_001E65BC;
    a0 = (*(volatile s32 *) (u32) (a0 + 8)); v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) { s0 = 1; goto L_001E65B0; }
    v1 = 19;
    if (v0 == v1) { s0 = 2; goto L_001E65B0; }
    v1 = 2;
    if (v0 == v1) goto L_001E65AC;
    if (v0 == 0) goto L_001E65AC;
    v0 = s0; goto L_001E65B4;
L_001E65AC:;
    s0 = 0;
L_001E65B0:;
    v0 = s0;
L_001E65B4:;
    goto L_001E65C4;
L_001E65BC:;
    v0 = 0;
L_001E65C4:;
    return;
}
