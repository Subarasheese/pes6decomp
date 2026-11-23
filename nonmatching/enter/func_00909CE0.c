/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00297CA0(s32, s32, s32, s32);

void func_00909CE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4048));
    if (v0 != 0) { v1 = (s32) ((u32) v0 << 3); goto L_00909D00; }
    v0 = 1; goto L_00909D20;
L_00909D00:;
    a1 = 1;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xffff91e8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) gp + 0xffffb1c0U); func_00297CA0(a0, a1, a2, a3);
    v0 = 1;
L_00909D20:;
    return;
}
