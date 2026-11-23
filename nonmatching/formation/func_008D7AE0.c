/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001F08B0(s64);
void func_001F3D10(s64, s64);
void func_008C59B0(s64, s64, s64, s64);

void func_008D7AE0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    v0 = 3;
    v1 = 1;
    s7 = 0;
    s6 = 0;
    s5 = 0;
    s4 = 0;
    s3 = a0;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
    (*(volatile u8 *) (u32) (a0 + 33)) = (u8) a1;
    s2 = s0;
    { s32 c_ = a1 == v0; s1 = s0; if (c_) goto L_008D7BB0; }
    v0 = 2;
    if (a1 == v0) { v0 = (s32) 0x3f0000U; goto L_008D7B84; }
    if (a1 == v1) { v0 = (s32) 0x3f0000U; goto L_008D7B60; }
    a1 = (s32) ((u32) s3 + 0x34U);
    func_008C59B0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 88)); goto L_008D7BD8;
L_008D7B60:;
    s1 = 0;
    a0 = v0 | 0x1f;
    s6 = s0; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = s3; func_008C59B0(a0, a1, a2, a3);
    goto L_008D7BD4;
L_008D7B84:;
    s7 = s0;
    a0 = v0 | 0x20;
    s2 = 0;
    s1 = 0;
    s0 = 0; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = s3; func_008C59B0(a0, a1, a2, a3);
    goto L_008D7BD4;
L_008D7BB0:;
    v0 = (s32) 0x3c0000U;
    s1 = 0;
    a0 = v0 | 0x21;
    s5 = s0;
    s4 = s0; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = s3; func_008C59B0(a0, a1, a2, a3);
L_008D7BD4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 88));
L_008D7BD8:;
    a1 = s2; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 92));
    a1 = s1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 96));
    a1 = s1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 100));
    a1 = s6; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 104));
    a1 = s7; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 76));
    a1 = s5; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 80));
    a1 = s5; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 108));
    a1 = s4; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 84));
    a1 = s0; func_001F3D10(a0, a1);
    return;
}
