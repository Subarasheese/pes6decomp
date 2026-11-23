/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002228B0(s32, s32, s32, s32);

s32 func_00221860(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    a3 = 0;
    s1 = a1;
    s0 = a2;
    a1 = 3;
    a2 = 4; v0 = func_002228B0(a0, a1, a2, a3);
    v1 = (s32) ((u32) gp + 0xffff8168U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s32 c_ = v0 == 0; a2 = (*(volatile u8 *) (u32) v1); if (c_) goto L_002218C4; }
    a0 = a2 & 0xff;
    v1 = s1 & 0xff;
    a1 = ~(a0 | 0);
    a0 = (*(volatile u8 *) (u32) v0);
    a1 = a1 & 0xff;
    a0 = a0 & a1;
    { s32 c_ = v1 == 0; (*(volatile u8 *) (u32) v0) = (u8) a0; if (c_) goto L_002218C4; }
    v1 = (*(volatile u8 *) (u32) v0);
    v1 = v1 | a2;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_002218C4:;
    return v0;
}
