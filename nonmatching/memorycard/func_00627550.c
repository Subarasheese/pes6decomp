/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00627550(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) ((u32) a1 + 0xfffffffdU);
    v0 = 0xffff;
    at = (u64) v1 < (u64) (s64) 2;
    { s32 c_ = at == 0; v0 = v0 & 0xffff; if (c_) goto L_0062759C; }
    a0 = a0 & 0xffff;
    v1 = a0 < 64;
    if (v1 != 0) goto L_0062759C;
    at = a0 < 202;
    if (at == 0) goto L_0062759C;
    v1 = (s32) ((u32) a0 + 0xffffffc0U);
    v0 = (s32) 0x900000U;
    v1 = v1 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff9d20U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
L_0062759C:;
    return v0;
}
