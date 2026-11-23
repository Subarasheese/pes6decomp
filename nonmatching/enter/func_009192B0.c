/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F9F20(s32, s32, s32, s32, s32, s32);

void func_009192B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    s3 = 0;
    s2 = a2;
    s1 = a3;
    s0 = 0;
L_009192DC:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    s4 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00919310;
    s4 = (*(volatile s32 *) (u32) (v0 + 12));
L_00919310:;
    a0 = s4;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    s4 = v0;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) s0 + 0x1U); v0 = func_002F96F0(a0, a1);
    a0 = s4;
    a1 = s0;
    a2 = 1;
    a3 = v0;
    a4 = s2;
    a5 = s1; func_002F9F20(a0, a1, a2, a3, a4, a5);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_009192DC; }
    return;
}
