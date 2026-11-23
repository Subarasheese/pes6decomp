/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00639C90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    a2 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 1);
    a3 = 10;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffd0f0U);
    v0 = (s32) 0x66660000U;
    a0 = (s32) ((u32) a0 << 1);
    v0 = v0 | 0x6667;
    a0 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a1 >> 31);
    a2 = (s32) ((u32) a2 + 0xffff8a30U);
    v0 = hi;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a3); hi = (s32) ((s32) a1 % (s32) a3); lo = q_; }
    v0 = (s32) v0 >> 2;
    a1 = (s32) 0x660000U;
    a3 = (s32) ((u32) v0 + (u32) v1);
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffb128U); v0 = sprintf(a0, a1, a2, a3, a4, a5, a6, a7); return;
}
