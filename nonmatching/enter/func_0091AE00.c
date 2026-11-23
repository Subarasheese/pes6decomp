/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0020D040(s32, s32);
void func_002D57E0(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002FA170(s32, s32, s32, s32, s32, s32);

void func_0091AE00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = 0;
    s4 = a0;
    s3 = a2;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s1 = (*(volatile s32 *) (u32) (v0 + 40));
    s0 = (*(volatile s32 *) (u32) (v0 + 44));
    a0 = (*(volatile s32 *) (u32) v0);
    s2 = a3; v0 = func_002F96F0(a0, a1);
    a1 = s0;
    a0 = s1;
    s0 = v0; v0 = func_0020D040(a0, a1);
    a1 = v0;
    a2 = s0;
    a3 = s3;
    a4 = s2;
    a0 = s4;
    a5 = 1; func_002FA170(a0, a1, a2, a3, a4, a5);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    a2 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = s4;
    a2 = (s32) ((u32) a2 + 0xffff9e50U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 20));
    a3 = 8; func_002D57E0(a0, a1, a2, a3);
    return;
}
