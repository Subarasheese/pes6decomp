/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0020D080(s32, s32);
s32 func_002F9370(s32);
void func_002FA170(s32, s32, s32, s32, s32, s32);

void func_00C7EAF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffc02cU);
    s4 = a0;
    v0 = (s32) ((u32) v0 + 0xffffc030U);
    s3 = a2;
    a1 = (*(volatile s32 *) (u32) (gp + -19212));
    a0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    s1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s2 = a3; v0 = func_0020D080(a0, a1);
    s0 = v0;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbfe0U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9370(a0);
    a0 = s4;
    a1 = s0;
    a3 = s3;
    a4 = s2;
    a2 = v0;
    a5 = 1; func_002FA170(a0, a1, a2, a3, a4, a5);
    return;
}
