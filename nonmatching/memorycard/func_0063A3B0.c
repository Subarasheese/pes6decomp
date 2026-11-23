/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
s32 func_001E9090(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00209C60(s32, s32);
s32 func_00209D90(s32, s32, s32, s32);
void func_0020A380(s32, s32, s32, s32);
void func_0020A4B0(s32, s32, s32, s32);

s32 func_0063A3B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a2;
    s2 = a3;
    s0 = a1; v0 = func_001E6E10(a0);
    s1 = v0;
    if (s1 != 0) { v0 = s1; goto L_0063A474; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11256));
    a1 = s3; func_00209C60(a0, a1);
    v0 = (s32) 0x660000U;
    s0 = s0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (v0 + -11256));
    a1 = s2;
    a2 = s0; func_0020A4B0(a0, a1, a2, a3);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11256));
    a1 = s3; func_00209C60(a0, a1);
    v0 = (s32) 0x660000U;
    a1 = s2;
    a0 = (*(volatile s32 *) (u32) (v0 + -11256));
    a2 = s0;
    a3 = 0; v0 = func_00209D90(a0, a1, a2, a3);
    a1 = s4;
    a0 = v0; v0 = func_001E9090(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = v0;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11256));
    a1 = s3; func_00209C60(a0, a1);
    v0 = (s32) 0x660000U;
    a1 = s2;
    a0 = (*(volatile s32 *) (u32) (v0 + -11256));
    a2 = s0; func_0020A380(a0, a1, a2, a3);
    v0 = s1;
L_0063A474:;
    return v0;
}
