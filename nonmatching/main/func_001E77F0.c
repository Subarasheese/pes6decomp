/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00153FD0(s64, s64, s64, s64);
s64 func_001E6770(s64);
void func_001E7C30(s64);

s64 func_001E77F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s1 = (*(volatile s32 *) (u32) a0);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 68)); func_001E7C30(a0);
    a0 = s1;
    a1 = 1;
    a2 = 28; v0 = func_00153FD0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 64));
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 68));
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (v0 + 16));
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    { s32 c_ = v1 == 0; s3 = v0; if (c_) goto L_001E789C; }
L_001E7848:;
    v1 = (*(volatile s32 *) (u32) s3);
L_001E784C:;
    if (v1 != 0) goto L_001E7958;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    if (v1 != 0) goto L_001E7958;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20160));
    if (v1 == 0) goto L_001E7948;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -20156));
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) s3;
    v1 = (*(volatile s32 *) (u32) (v1 + -20156));
    (*(volatile u32 *) (u32) s3) = (u32) v1;
L_001E7888:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20156)) = (u32) s3;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) 0;
    goto L_001E795C;
L_001E789C:;
    { s32 c_ = v1 == 0; a1 = (*(volatile u8 *) (u32) s0); if (c_) goto L_001E790C; }
L_001E78A4:;
    v1 = (*(volatile s32 *) (u32) (s3 + 20));
    if (v1 == 0) goto L_001E7924;
L_001E78B0:;
    v1 = (*(volatile u8 *) (u32) s0);
    at = 0 < v1;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_001E7848; }
    s1 = 0;
L_001E78C4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001E6770(a0);
    if (v0 == 0) goto L_001E78F0;
    v1 = (*(volatile s32 *) (u32) (s3 + 16));
    a0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u32 *) (u32) v1) = (u32) a0;
L_001E78F0:;
    v1 = (*(volatile u8 *) (u32) s0);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001E78C4; }
    v1 = (*(volatile s32 *) (u32) s3); goto L_001E784C;
L_001E790C:;
    (*(volatile u8 *) (u32) (s3 + 24)) = (u8) a1;
    a0 = s1;
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) v0; goto L_001E78A4;
L_001E7924:;
    v0 = (*(volatile u8 *) (u32) (s3 + 24));
    a0 = s1;
    a2 = 4;
    v0 = (s32) ((u32) v0 + 0x3U);
    a1 = (s64) ((u64) v0 << 34);
    a1 = (s64) ((u64) a1 >> 34); v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) v0; goto L_001E78B0;
L_001E7948:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20160)) = (u32) s3;
    (*(volatile u32 *) (u32) s3) = (u32) 0; goto L_001E7888;
L_001E7958:;
L_001E795C:;
    return v0;
}
