/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001454A0(s64);
s64 func_001454B0(s64);

s64 func_0025EAE0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffd204U);
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffd208U);
    s3 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    s1 = a1; v0 = func_001454B0(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_001454A0(a0);
    v1 = (*(volatile s16 *) (u32) (s1 + 2));
    v0 = (s64) ((u64) s2 << 48);
    v0 = v0 >> 48;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s16 *) (u32) s1);
    v1 = (s32) ((u32) s0 + (u32) v1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    return v0;
}
