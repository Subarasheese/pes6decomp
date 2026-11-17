/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00186530(s32);
void func_0018A180(s32);

void func_002D6E50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    a0 = 0;
    (*(volatile u32 *) (u32) (gp + -21964)) = (u32) 0; func_0018A180(a0);
    a0 = 1; func_00186530(a0);
    v1 = (s32) 0x5e0000U;
    a0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v1 + 24096)) = (u8) 0;
    a2 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a6 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24099)) = (u8) 0;
    a5 = (s32) 0x5e0000U;
    t4 = 1;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24098)) = (u8) t4;
    a4 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 9968));
    (*(volatile u8 *) (u32) (v1 + 24100)) = (u8) 0;
    a3 = 3;
    v1 = (s32) 0x5e0000U;
    a1 = (s32) 0x5e0000U;
    a7 = (*(volatile u8 *) (u32) a0);
    a2 = (s32) ((u32) a2 + 0x5e44U);
    a6 = (s32) ((u32) a6 + 0x5e2cU);
    a5 = (s32) ((u32) a5 + 0x5e38U);
    a4 = (s32) ((u32) a4 + 0x5e20U);
    (*(volatile u8 *) (u32) (v1 + 24101)) = (u8) a7;
    a0 = (s32) 0x5e0000U;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (a1 + 24104)) = (u32) 0;
    v1 = (*(volatile u8 *) (u32) (v1 + -192));
    (*(volatile u8 *) (u32) (a0 + 24097)) = (u8) 0;
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) t4;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a3); hi = (s32) ((s32) v1 % (s32) a3); lo = q_; }
    (*(volatile u8 *) (u32) (a2 + 5)) = (u8) a7;
    (*(volatile u8 *) (u32) a2) = (u8) 0;
    a1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) ((u32) v1 + 0x2U);
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a2 + 4)) = (u8) 0;
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) 0;
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) 0;
    (*(volatile u8 *) (u32) a6) = (u8) 0;
    (*(volatile u8 *) (u32) (a6 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a6 + 2)) = (u8) t4;
    (*(volatile u8 *) (u32) (a6 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a6 + 5)) = (u8) a7;
    (*(volatile u32 *) (u32) (a6 + 8)) = (u32) 0;
    (*(volatile u8 *) (u32) (a6 + 1)) = (u8) 0;
    (*(volatile u8 *) (u32) a5) = (u8) 0;
    (*(volatile u8 *) (u32) (a5 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a5 + 2)) = (u8) t4;
    (*(volatile u8 *) (u32) (a5 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a5 + 5)) = (u8) a7;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) 0;
    (*(volatile u8 *) (u32) (a5 + 1)) = (u8) 0;
    (*(volatile u8 *) (u32) (a4 + 7)) = (u8) 0;
    (*(volatile u8 *) (u32) (a4 + 19)) = (u8) 0;
    (*(volatile u8 *) (u32) (a4 + 31)) = (u8) 0;
    (*(volatile u8 *) (u32) (a4 + 43)) = (u8) 0;
    a2 = hi;
    v1 = (s32) ((u32) v1 + 0x3U);
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a3); hi = (s32) ((s32) a1 % (s32) a3); lo = q_; }
    (*(volatile u8 *) (u32) (a4 + 6)) = (u8) a2;
    a1 = hi;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a3); hi = (s32) ((s32) a0 % (s32) a3); lo = q_; }
    (*(volatile u8 *) (u32) (a4 + 18)) = (u8) a1;
    a0 = hi;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a3); hi = (s32) ((s32) v1 % (s32) a3); lo = q_; }
    (*(volatile u8 *) (u32) (a4 + 30)) = (u8) a0;
    v1 = hi;
    (*(volatile u8 *) (u32) (a4 + 42)) = (u8) v1;
    return;
}
