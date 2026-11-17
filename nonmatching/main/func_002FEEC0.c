/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4C40(s64, s64, s64, s64, s64, s64, s64);
s64 func_00305E60(s64, s64);
s64 func_00BD9A40(s64, s64, s64, s64);
s64 func_00C227A0(s64, s64, s64, s64);
s64 func_00C22890(s64, s64, s64, s64);

s64 func_002FEEC0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a0; v0 = func_00BD9A40(a0, a1, a2, a3);
    if (v0 != 0) { s1 = (*(volatile s32 *) (u32) (s0 + 24)); goto L_002FEEE8; }
    v0 = 0; goto L_002FEF54;
L_002FEEE8:;
    v0 = func_00C22890(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s1 + 44)) = (u8) v0; v0 = func_00C227A0(a0, a1, a2, a3);
    v1 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s1 + 44)); goto L_002FEF14; }
    (*(volatile u8 *) (u32) (s1 + 44)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (s1 + 44));
L_002FEF14:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4ff0U);
    s1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4ff4U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    a1 = (s32) 0x300000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffffee40U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_002FEF54:;
    return v0;
}
