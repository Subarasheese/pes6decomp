/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D58A0(s32);
void func_00C73650(s32, s32, s32, s32);

void func_00C73390(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbd30U);
    a0 = (*(volatile s32 *) (u32) (gp + -19280));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x4U); v0 = func_002D58A0(a0);
    a3 = (*(volatile s32 *) (u32) (gp + -19280));
    a1 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    a0 = (s32) 0x80800000U;
    a1 = (s32) ((u32) a1 + 0xffffbd40U);
    v1 = (s32) ((u32) v1 + 0xffffbd3cU);
    a2 = (s32) ((u32) a3 << 2);
    a0 = a0 | 0x8081;
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) a2 << 4);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) a0 >> 7;
    s0 = (s32) ((u32) a0 + (u32) a1);
    if (s0 == v1) { ; goto L_00C73450; }
    a0 = 0;
    a1 = s0; func_00C73650(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19280));
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbd3cU);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) s0;
L_00C73450:;
    return;
}
