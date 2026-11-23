/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0021E4B0(s64, s64, s64);
s64 func_00223A90(void);

s64 func_00237710(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;

    s2 = a1;
    s1 = 0;
    at = s1 < 14;
    if (at == 0) goto L_00237760;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffff9b30U);
    v0 = (s32) ((u32) v1 + (u32) s1);
L_00237740:;
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_00237760;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 14;
    if (v0 != 0) { v0 = (s32) ((u32) v1 + (u32) s1); goto L_00237740; }
L_00237760:;
    s0 = 0;
    at = s0 < 6;
    if (at == 0) goto L_00237798;
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffff9b40U);
    v0 = (s32) ((u32) v1 + (u32) s0);
L_0023777C:;
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_00237798;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 6;
    if (v0 != 0) { v0 = (s32) ((u32) v1 + (u32) s0); goto L_0023777C; }
L_00237798:;
    v0 = 14;
    if (s1 != v0) goto L_002377DC;
    v0 = func_00223A90();
    at = s0 < 6;
    if (at == 0) { v1 = 0; goto L_002377C8; }
    v1 = 9052;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + 0x2bc0U);
L_002377C8:;
    v0 = 1;
    if (s2 == v0) { v0 = (s32) ((u32) v1 + 0x351U); goto L_00237830; }
    v0 = (s32) ((u32) v1 + 0x320U); goto L_00237830;
L_002377DC:;
    v0 = func_00223A90();
    at = s1 < 14;
    if (at == 0) { v1 = 0; goto L_00237808; }
    v1 = (s32) ((u32) s1 << 2);
    a0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 5);
    v1 = (s32) ((u32) v0 + (u32) v1);
L_00237808:;
    v0 = (*(volatile u8 *) (u32) (v1 + 9));
    a1 = s2;
    a2 = 0;
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) (v0 + 792));
    a3 = 0xffff; v0 = func_0021E4B0(a0, a1, a2);
L_00237830:;
    return v0;
}
