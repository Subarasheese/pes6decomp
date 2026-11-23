/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_008BF080(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0x8f0000U;
    a2 = (s32) ((u32) a2 + 0xffffbdb0U);
    a1 = (s32) ((u32) sp + 0x0U);
    v1 = 17;
L_008BF094:;
    v0 = (*(volatile s8 *) (u32) a2);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x1U);
    if (v1 > 0) goto L_008BF094;
    v0 = a0 & 0xff;
    v0 = v0 < 17;
    if (v0 != 0) { v0 = a0 & 0xff; goto L_008BF0C8; }
    a0 = 0;
    v0 = a0 & 0xff;
L_008BF0C8:;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u8 *) (u32) v0);
    return v0;
}
