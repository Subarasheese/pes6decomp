/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BC8D50(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    a0 = (s32) 0xcc0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd5d0U);
L_00BC8D5C:;
    v0 = (s32) ((u32) a0 + 0x14U);
    if (v0 == 0) goto L_00BC8D90;
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 != 0) goto L_00BC8D90;
L_00BC8D78:;
    v1 = 6;
    if (a1 != v1) goto L_00BC8DA8;
    v0 = 0;
    goto L_00BC8DA8;
L_00BC8D90:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 6;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x3cU); if (c_) goto L_00BC8D5C; }
    goto L_00BC8D78;
L_00BC8DA8:;
    return v0;
}
