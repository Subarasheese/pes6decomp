/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C13230(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v0 = -1;
    if (a0 == v0) goto L_00C13274;
    v1 = (s32) 0xcc0000U;
    { s32 c_ = a0 == v0; v1 = (s32) ((u32) v1 + 0xfffffaa0U); if (c_) goto L_00C1326C; }
    if (v1 == v0) goto L_00C1326C;
    v1 = (s32) ((u32) a0 - (u32) v1);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_00C13264; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_00C13264:;
    goto L_00C13274;
L_00C1326C:;
    v0 = 0; goto L_00C13264;
L_00C13274:;
    return v0;
}
