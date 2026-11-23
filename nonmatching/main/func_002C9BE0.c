/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002C9BE0(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0;

    a0 = a0 & 0xff;
    v1 = a0 < 10;
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002C9BF4; }
    a0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_002C9BF4:;
    a0 = a0 & 0xff;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffc690U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) a0);
    at = v1 < 24;
    if (at == 0) goto L_002C9C38;
L_002C9C1C:;
    a0 = (s32) ((u32) a0 + 0x3U);
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = v0 & 0xff;
    v1 = v1 < 24;
    if (v1 != 0) goto L_002C9C1C;
L_002C9C38:;
    return v0;
}
