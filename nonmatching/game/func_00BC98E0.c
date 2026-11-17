/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BC98E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    a0 = (s32) 0xcc0000U;
    v0 = 1;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd390U);
L_00BC98F0:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 == 0) goto L_00BC9900;
    v0 = 0;
L_00BC9900:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 6;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_00BC98F0; }
    return v0;
}
