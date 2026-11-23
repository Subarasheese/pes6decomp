/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002C9CE0(s64 a0) {
    s64 v0 = 0, v1 = 0;

    v0 = a0 & 0xff;
    v0 = v0 < 10;
    if (v0 != 0) goto L_002C9CF4;
    a0 = (s64) ((u64) 0 + (u64) (s64) 9);
L_002C9CF4:;
    a0 = a0 & 0xff;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + 0xffffc4c0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); return v0;
}
