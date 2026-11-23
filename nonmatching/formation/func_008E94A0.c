/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008EB260(s32, s32, s32, s32);
void func_008EB3B0(s32, s32, s32);

void func_008E94A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_008E9588; }
    if (a1 != 0) { v1 = (*(volatile u8 *) (u32) (a1 + 1854)); goto L_008E94CC; }
    goto L_008E9584;
    v1 = (*(volatile u8 *) (u32) (a1 + 1854));
L_008E94CC:;
    a2 = 3;
    a0 = (s32) ((u32) s0 + 0x4U);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) (v0 + 2082));
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a2); hi = (s32) ((s32) v0 % (s32) a2); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (a1 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) (v0 + 2084));
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a2); hi = (s32) ((s32) v0 % (s32) a2); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
    a2 = (*(volatile u8 *) (u32) (s0 + 1));
    a1 = 0; func_008EB3B0(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 2));
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = 1; func_008EB3B0(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0c0U);
    a0 = (s32) ((u32) a1 + (u32) s0);
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
L_008E9584:;
L_008E9588:;
    return;
}
