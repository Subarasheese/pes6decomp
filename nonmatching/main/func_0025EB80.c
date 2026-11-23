/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001454A0(s64);
s64 func_001454B0(s64);

void func_0025EB80(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) v0 << 3);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffd204U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    s3 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd208U);
    s2 = a1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    s1 = a2; v0 = func_001454B0(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    s3 = (s64) ((u64) v0 << 48);
    s3 = s3 >> 48; v0 = func_001454A0(a0);
    a0 = (*(volatile s16 *) (u32) (s2 + 2));
    v1 = (s64) ((u64) s3 << 48);
    v1 = v1 >> 48;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (*(volatile s16 *) (u32) s2);
    a0 = (s32) ((u32) s0 + (u32) a0);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) s1;
    return;
}
