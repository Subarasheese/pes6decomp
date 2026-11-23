/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_008028E0(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00C78350(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7628));
    if (v0 == 0) { a0 = 0; goto L_00C7837C; }
    a0 = 1; v0 = func_008028E0(a0, a1, a2, a3);
    s0 = v0 & 0xff; goto L_00C78388;
L_00C7837C:;
    v0 = func_008028E0(a0, a1, a2, a3);
    s0 = v0 & 0xff;
L_00C78388:;
    at = s0 < 10;
    if (at != 0) goto L_00C78398;
    s0 = 9;
L_00C78398:;
    a0 = (s32) 0x670000U; v0 = func_001F08B0(a0);
    a1 = v0;
    a2 = s0;
    a0 = (s32) ((u32) gp + 0xffffb4bcU); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) gp + 0xffffb4bcU);
    return v0;
}
