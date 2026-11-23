/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s64, s64);
s64 func_00292ED0(s64);
void func_008BB3F0(s64, s64, s64, s64);

void func_008E3EA0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s2 = (*(volatile s32 *) (u32) (a0 + 484));
    if (s2 == 0) { ; goto L_008E3F54; }
    s1 = (*(volatile u8 *) (u32) (s2 + 35));
    at = s1 < 12;
    { s32 c_ = at != 0; s5 = 11; if (c_) goto L_008E3F50; }
    s3 = (s32) ((u32) a0 + 0x2cU);
L_008E3EE0:;
    s0 = (s32) ((u32) s2 + (u32) s5);
    v0 = s5 & 0xff;
    a0 = (*(volatile u8 *) (u32) (s0 + 2));
    v0 = v0 < 11;
    s4 = v0 ^ 0x1;
    v0 = (*(volatile s32 *) (u32) (s2 + 1228));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    v0 = (s64) ((u64) v0 << 56);
    a0 = (s64) ((u64) v0 >> 60); v0 = func_00292ED0(a0);
    a3 = (*(volatile u8 *) (u32) (s0 + 158));
    a1 = v0;
    a2 = s4;
    a0 = (s32) ((u32) sp + 0x7cU); func_008BB3F0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 2148));
    a1 = (s32) ((u32) sp + 0x7cU); func_001EEE60(a0, a1);
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < s1;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_008E3EE0; }
L_008E3F50:;
L_008E3F54:;
    return;
}
