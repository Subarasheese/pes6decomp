/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00103538(s64, s64);
s64 func_00138C10(s64, s64, s64, s64);
s64 func_001DEB60(s64, s64, s64, s64);
s64 func_001E6310(s64, s64);
s64 func_001E6360(s64, s64, s64, s64);

s64 func_001DEA50(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 88));
    v0 = (*(volatile u16 *) (u32) (a0 + 64));
    s2 = (*(volatile s32 *) (u32) (v1 + 28));
    at = 0 < v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001DEAC8; }
    s0 = 0;
L_001DEA88:;
    v0 = (*(volatile s32 *) (u32) (s3 + 60));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2; v0 = func_00138C10(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s3 + 60));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u64 *) (u32) (v1 + 8)) = (u64) v0;
    v0 = (*(volatile u16 *) (u32) (s3 + 64));
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001DEA88; }
L_001DEAC8:;
    a0 = s2;
    a1 = 0; v0 = func_00103538(a0, a1);
    a1 = 1;
    a0 = s2;
    a2 = a1; v0 = func_001E6360(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (s3 + 8));
L_001DEAE8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 147));
    if (v0 == 0) goto L_001DEB20;
    v1 = (*(volatile s32 *) (u32) (s0 + 160));
    v0 = 32;
    if (v1 == v0) goto L_001DEB20;
    v0 = (*(volatile u8 *) (u32) (s0 + 166));
    if (v0 == 0) goto L_001DEB20;
    a0 = s2;
    a1 = s0; v0 = func_001DEB60(a0, a1, a2, a3);
L_001DEB20:;
    s0 = (*(volatile s32 *) (u32) s0);
    if (s0 != 0) goto L_001DEAE8;
    a0 = s2;
    a1 = 1; v0 = func_001E6310(a0, a1);
    return v0;
}
