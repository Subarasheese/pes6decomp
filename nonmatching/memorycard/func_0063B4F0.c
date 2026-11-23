/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001C80F0(s32);

s32 func_0063B4F0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    s2 = a0;
    { s32 c_ = s2 != 0; s1 = a1; if (c_) goto L_0063B518; }
    v0 = 0; goto L_0063B5D4;
L_0063B518:;
    v0 = func_001C80F0(a0);
    v1 = (*(volatile s8 *) (u32) s2);
    { s32 c_ = v1 == 0; s0 = v0; if (c_) goto L_0063B5D0; }
    v0 = 37;
L_0063B530:;
    if (v1 != v0) goto L_0063B5C0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = 115;
    v1 = (*(volatile s8 *) (u32) s2);
    if (v1 == v0) goto L_0063B5A8;
    v0 = 100;
    if (v1 == v0) goto L_0063B560;
    goto L_0063B5C0;
L_0063B560:;
    s1 = (s32) ((u32) s1 + 0x8U);
    a0 = (*(volatile s32 *) (u32) (s1 + -8));
    if (a0 >= 0) goto L_0063B578;
    s0 = (s32) ((u32) s0 + 0x1U);
    a0 = (s32) ((u32) 0 - (u32) a0);
L_0063B578:;
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) a0 >> 31);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = a0 > 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_0063B578; }
    s0 = (s32) ((u32) s0 + 0xfffffffeU); goto L_0063B5C0;
L_0063B5A8:;
    s1 = (s32) ((u32) s1 + 0x8U);
    a0 = (*(volatile s32 *) (u32) (s1 + -8)); v0 = func_001C80F0(a0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = (s32) ((u32) v0 + 0xfffffffeU);
L_0063B5C0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (*(volatile s8 *) (u32) s2);
    if (v1 != 0) { v0 = 37; goto L_0063B530; }
L_0063B5D0:;
    v0 = s0;
L_0063B5D4:;
    return v0;
}
