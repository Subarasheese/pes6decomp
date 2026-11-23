/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
void func_0014FC20(s32, s32, s32, s32, s32);
void func_001ACBC0(s32);
void func_001ACDF0(s32);
void func_001AD400(s32);
void func_001AD8D0(s32);
void func_001AE250(s32);
s32 func_0021EB30(s32, s32, s32, s32);

void func_002F8BF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = 3;
    s0 = a0;
    (*(volatile u8 *) (u32) (a0 + 505)) = (u8) v0; func_001ACDF0(a0);
    a0 = s0; func_001AD400(a0);
    a0 = s0; func_001ACBC0(a0);
    a0 = s0; func_001AE250(a0);
    a0 = s0; func_001AD8D0(a0);
    a0 = 0x8cb4; v0 = func_001454C0(a0);
    s2 = v0;
    a0 = 0x8cb4; v0 = func_001454C0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 44));
    s1 = v0; v0 = func_0021EB30(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = s2;
    v0 = v0 & 0xf;
    a1 = s1;
    v1 = (s32) ((u32) v0 << 2);
    a3 = 0;
    v0 = (s32) 0x3b0000U;
    a4 = 32;
    v0 = (s32) ((u32) v0 + 0x4340U);
    a2 = (s32) ((u32) v0 + (u32) v1); func_0014FC20(a0, a1, a2, a3, a4);
    a0 = 0x8cb4; v0 = func_001454C0(a0);
    s1 = v0;
    a0 = 0x8cb4; v0 = func_001454C0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 44));
    s0 = v0; v0 = func_0021EB30(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    a3 = 32;
    v1 = v1 & 0xf0;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) v1 >> 4;
    v0 = (s32) ((u32) v0 + 0x4340U);
    v1 = (s32) ((u32) v1 << 2);
    a0 = s1;
    a1 = s0;
    a4 = a3;
    a2 = (s32) ((u32) v0 + (u32) v1); func_0014FC20(a0, a1, a2, a3, a4);
    return;
}
