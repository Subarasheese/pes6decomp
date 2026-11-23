/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
s64 func_002F9370(s64);

void func_00C6E730(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbc00U);
    v1 = (*(volatile s32 *) (u32) (gp + -19292));
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9370(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -19292));
    s0 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) s0 + 0xffffbc00U);
    v1 = 1;
    a0 = (s32) ((u32) a0 << 6);
    a0 = (s32) ((u32) s0 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 32));
    a0 = (s64) ((u64) a0 << 61);
    a0 = (s64) ((u64) a0 >> 63);
    if (a0 != v1) goto L_00C6E808;
    s1 = 0;
L_00C6E790:;
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (gp + -19292)) = (u32) s1; v0 = func_002F9370(a0);
    s2 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = s2; func_001D7BE0(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0; func_001D7CE0(a0, a1);
    v1 = (s32) 0xcd0000U;
    a0 = 0 & 0x1;
    a2 = (*(volatile u8 *) (u32) (v1 + -17376));
    a4 = (s32) ((u32) a0 << 2);
    a3 = -5;
    a0 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (a0 + -17312));
    a1 = (s32) 0xcd0000U;
    a2 = a2 & a3;
    s1 = (s32) ((u32) s1 + 0x1U);
    a2 = a2 | a4;
    v1 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (a1 + -17376)) = (u8) a2;
    s0 = (s32) ((u32) s0 + 0x40U);
    a1 = a0 & a3;
    a1 = a1 | a4;
    a0 = s1 < 2;
    { s32 c_ = a0 != 0; (*(volatile u8 *) (u32) (v1 + -17312)) = (u8) a1; if (c_) goto L_00C6E790; }
L_00C6E808:;
    return;
}
