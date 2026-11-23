/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memmove(s64, s64, s64);

void func_008B7420(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x8f0000U;
    a1 = a0;
    v1 = 139;
    a0 = (*(volatile u8 *) (u32) a0);
    v0 = (s32) ((u32) v0 + 0x4ba0U);
    a2 = 134;
    a0 = (s64) ((u64) a0 << 56);
    a0 = (s64) ((u64) a0 >> 63);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    a0 = (s32) ((u32) v0 + (u32) s0); memmove(a0, a1, a2);
    v1 = (s32) 0x8f0000U;
    a0 = 1;
    v1 = (s32) ((u32) v1 + 0x4c26U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    return;
}
