/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7980(s32);
s32 func_002F96F0(s32, s32);

s32 func_0091FFF0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = v0 == 0; s0 = 0; if (c_) goto L_00920038; }
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = v0; v0 = func_001D7980(a0);
    if (v0 == 0) { v0 = s0; goto L_0092003C; }
    s0 = 1;
L_00920038:;
    v0 = s0;
L_0092003C:;
    return v0;
}
