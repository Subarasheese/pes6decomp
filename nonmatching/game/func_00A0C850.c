/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00A0C850(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a2 = (*(volatile u8 *) (u32) (a0 + 17));
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2a58U);
    v0 = (s32) ((u32) v0 + 0x2998U);
    a0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 8);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = v0 & 0xff; return;
}
