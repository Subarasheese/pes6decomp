/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00326310(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 44));
    at = (u64) v0 < (u64) (s64) 59;
    if (at == 0) { v0 = 0; goto L_00326348; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x16a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x32633cU) goto L_0032633C; if (t_ == 0x326344U) goto L_00326344; }
L_0032633C:;
    v0 = 1; goto L_00326348;
L_00326344:;
    v0 = 0;
L_00326348:;
    return v0;
}
