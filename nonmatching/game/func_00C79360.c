/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C793D0(s32, s32, s32, s32, s32);

s32 func_00C79360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbebcU);
    a1 = (*(volatile s32 *) (u32) (gp + -19252));
    v0 = (s32) ((u32) v0 + 0xffffbeb0U);
    a0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    at = v1 < s0;
    if (at == 0) { s0 = v1; goto L_00C793A8; }
L_00C793A8:;
    if (s0 <= 0) { v0 = s0; goto L_00C793BC; }
    func_00C793D0(a0, a1, a2, a3, a4);
    v0 = s0;
L_00C793BC:;
    return v0;
}
