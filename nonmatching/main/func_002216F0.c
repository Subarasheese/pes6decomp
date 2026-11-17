/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002228B0(s32, s32, s32, s32);

s32 func_002216F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a1;
    v0 = s0 < 3;
    if (v0 != 0) { v1 = a0 & 0xffff; goto L_00221714; }
    v0 = 0; goto L_00221764;
L_00221714:;
    v0 = v1 < 6000;
    if (v0 != 0) { a1 = 3; goto L_00221738; }
    at = v1 < 6391;
    if (at == 0) goto L_00221734;
    v0 = 0; goto L_00221764;
L_00221734:;
    a1 = 3;
L_00221738:;
    a2 = 4;
    a3 = 0; v0 = func_002228B0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) gp + 0xffff8168U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v1 & v0;
    if (v0 == 0) { v0 = 0; goto L_00221764; }
    v0 = 1;
L_00221764:;
    return v0;
}
