/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);

void func_00184570(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -64));
    if (v1 == 0) goto L_001845D0;
    (*(volatile u8 *) (u32) (v1 + 42)) = (u8) 0;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -64));
    s0 = 0;
    (*(volatile u8 *) (u32) (v0 + 43)) = (u8) 0;
L_001845A0:;
    a0 = 60; v0 = Pes6Random_Below(a0);
    v1 = (s32) 0x520000U;
    a0 = v0 & 0xffff;
    v1 = (*(volatile s32 *) (u32) (v1 + -64));
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 42;
    if (v1 != 0) goto L_001845A0;
L_001845D0:;
    return;
}
