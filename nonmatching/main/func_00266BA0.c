/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00266C70(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00266ED0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002673B0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002674F0(s32, s32, s32, s32);
void func_00268280(s32, s32, s32, s32);
void func_002CB4D0(s32, s32, s32, s32);
s32 func_002F81E0(s32, s32);

void func_00266BA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a1;
    s3 = a2;
    s2 = a3;
    s0 = a0;
    a0 = 20; func_002CB4D0(a0, a1, a2, a3);
    a0 = s4;
    a1 = s3; v0 = func_002F81E0(a0, a1);
    a1 = (s32) 0x590000U;
    s1 = v0;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffffd630U); func_00268280(a0, a1, a2, a3);
    a0 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a2 = (s32) ((u32) a2 + 0xffffd460U);
    a3 = 0; func_002674F0(a0, a1, a2, a3);
    a0 = s4;
    a1 = s3;
    a2 = s2; func_00266ED0(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = s3;
    a0 = s0;
    a1 = s2; func_00266C70(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffd460U); func_002673B0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) v1 + 0xffffb128U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) v1) = (u16) s0;
    return;
}
