/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EF900(s32, s32);
void func_002D57E0(s32, s32, s32, s32);
s32 func_002F9320(s32, s32);
s32 func_002F9370(s32);
s32 func_002F96F0(s32, s32);
void func_002F9CA0(s32, s32, s32, s32, s32, s32, s32);

void func_00C81680(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    v1 = (s32) 0x66660000U;
    s6 = a3;
    s5 = a1;
    s3 = (*(volatile s32 *) (u32) (v0 + -15948));
    v0 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) s3 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = v0 == 0; s4 = a2; if (c_) goto L_00C816E4; }
    s1 = 2; goto L_00C816E8;
L_00C816E4:;
    s1 = 1;
L_00C816E8:;
    s2 = 0;
    s0 = (s32) ((u32) sp + 0x88U);
L_00C816F0:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080));
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) s5 + (u32) s2); v0 = func_001EDC80(a0, a1);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C816F0; }
    if (s3 != 0) { at = s3 < 100; goto L_00C81754; }
    a0 = (*(volatile s32 *) (u32) (sp + 136));
    a1 = 0; func_001EF900(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 140));
    a1 = 0; func_001EF900(a0, a1);
    goto L_00C817E4;
L_00C81754:;
    if (at != 0) goto L_00C81760;
    s3 = 99;
L_00C81760:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080)); v0 = func_002F9370(a0);
    a1 = s3;
    a5 = s4;
    a6 = s6;
    a0 = (s32) ((u32) sp + 0x88U);
    a2 = s1;
    a3 = 0;
    a4 = v0; func_002F9CA0(a0, a1, a2, a3, a4, a5, a6);
    { s32 c_ = s1 <= 0; s0 = 0; if (c_) goto L_00C817C8; }
    s2 = (s32) ((u32) sp + 0x88U);
L_00C81798:;
    v0 = (s32) 0xcd0000U;
    a2 = (s32) 0xcb0000U;
    a0 = (*(volatile s32 *) (u32) s2);
    a2 = (s32) ((u32) a2 + 0xffff8780U);
    a1 = (*(volatile s32 *) (u32) (v0 + -15980));
    a3 = 7; func_002D57E0(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < s1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C81798; }
L_00C817C8:;
    at = s1 < 2;
    if (at == 0) goto L_00C817E0;
    a0 = (*(volatile s32 *) (u32) (sp + 140));
    a1 = 0; func_001EF900(a0, a1);
L_00C817E0:;
L_00C817E4:;
    return;
}
