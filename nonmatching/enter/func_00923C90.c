/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D55B0(s32);
s32 func_0035A260(void);

s32 func_00923C90(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    s0 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x24U); v0 = func_002D55B0(a0);
    v1 = 1;
    if (v0 == v1) { s0 = 1; goto L_00923CE0; }
    v0 = func_0035A260();
    v1 = 1;
    if (v0 != v1) { v0 = s0; goto L_00923CE4; }
    s0 = 1;
L_00923CE0:;
    v0 = s0;
L_00923CE4:;
    return v0;
}
