/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00D0F610(s32, s32, s32, s32);

s32 func_008D90A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    s0 = s1 & 0xff;
    at = s0 < 8;
    if (at == 0) { v0 = 0; goto L_008D9120; }
    v0 = (*(volatile u8 *) (u32) (gp + -20084));
    if (v0 != 0) goto L_008D90D8;
    v1 = 0; goto L_008D90EC;
L_008D90D8:;
    v0 = func_00D0F610(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v1 = 0; goto L_008D90EC; }
L_008D90EC:;
    if (v1 == 0) { v0 = s0 < 8; goto L_008D90FC; }
    v0 = 0; goto L_008D9120;
L_008D90FC:;
    if (v0 != 0) { v1 = s1 & 0xff; goto L_008D910C; }
    v0 = 0; goto L_008D9120;
L_008D910C:;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0x5880U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_008D9120:;
    return v0;
}
