/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008E8E70(s32, s32);
void func_008E8E90(s32, s32);
void func_008E8F10(s32, s32, s32, s32);

void func_008E80F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    s3 = a1;
    s2 = a2;
    s1 = 0;
    s0 = a0;
    v0 = (s32) ((u32) s3 + (u32) s1);
L_008E811C:;
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = (s32) ((u32) s0 + 0x4U); func_008E8E90(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    if (v0 != 0) { v0 = (s32) ((u32) s3 + (u32) s1); goto L_008E811C; }
    a1 = s2;
    a0 = (s32) ((u32) s0 + 0x4U); func_008E8E70(a0, a1);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 12;
    a0 = (s32) ((u32) s0 + 0x4U);
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    a1 = v0 & 0xff; func_008E8F10(a0, a1, a2, a3);
    return;
}
