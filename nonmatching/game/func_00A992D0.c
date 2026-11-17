/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00A992D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a2 = (*(volatile u8 *) (u32) (a0 + 17));
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (s32) 0x10620000U;
    v1 = (s32) ((u32) v1 + 0x2a58U);
    v0 = v0 | 0x4dd3;
    a0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a1 << 3);
    a3 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a2 = (s32) ((u32) a0 << 8);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    a0 = hi;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a60U);
    v1 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a3 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    a0 = (s32) a0 >> 6;
    v1 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; } return;
}
