/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Free(s64, s64);
s64 func_0014AB90(s64, s64, s64, s64);
s64 func_00153FD0(s64, s64, s64, s64);
s64 func_001E6660(s64, s64);
s64 func_001E6910(s64, s64, s64, s64);
s64 func_001E6D00(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_001E7A00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = a1;
    s1 = (*(volatile s32 *) (u32) (a0 + 12));
    { s32 c_ = s1 == 0; s5 = a0; if (c_) goto L_001E7C00; }
    a0 = (*(volatile s32 *) (u32) (s5 + 16));
    if (a0 == 0) goto L_001E7A4C;
    v0 = Pes6Heap_Free(a0, a1);
L_001E7A4C:;
    v1 = (*(volatile s32 *) (u32) (s5 + 16));
    { s32 c_ = v1 == 0; a1 = (*(volatile u8 *) (u32) s1); if (c_) goto L_001E7B54; }
L_001E7A58:;
    v1 = (*(volatile s32 *) (u32) (s5 + 20));
    if (v1 == 0) goto L_001E7B6C;
L_001E7A64:;
    v1 = (*(volatile u8 *) (u32) s1);
    at = 0 < v1;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_001E7B00; }
    s2 = 0;
L_001E7A78:;
    v1 = (s32) ((u32) s4 >> 2);
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    s0 = (s32) ((u32) v1 << 2);
    s6 = s4 & 0x3;
    v1 = (*(volatile s32 *) (u32) (s5 + 20));
    a0 = (s32) ((u32) a0 + (u32) s2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 >> (s6 & 31));
    v1 = v1 & 0x1;
    { s32 c_ = v1 == 0; a0 = (*(volatile s32 *) (u32) a0); if (c_) goto L_001E7B90; }
L_001E7AA8:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    if (v1 == 0) goto L_001E7AE8;
    v0 = (s32) ((u32) v1 + (u32) s2);
    s0 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile s32 *) (u32) (s5 + 16));
    v0 = (s32) ((u32) v1 + (u32) s2);
    s3 = (*(volatile s32 *) (u32) v0);
    a0 = s0; v0 = func_001E6660(a0, a1);
    if (v0 == s3) goto L_001E7AE8;
    a0 = s3;
    a1 = s0; v0 = func_001E6910(a0, a1, a2, a3);
L_001E7AE8:;
    v1 = (*(volatile u8 *) (u32) s1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001E7A78; }
L_001E7B00:;
    v1 = (*(volatile s32 *) (u32) s5);
    if (v1 != 0) goto L_001E7C00;
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
    if (v1 != 0) goto L_001E7C00;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20160));
    if (v1 == 0) goto L_001E7BF0;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -20156));
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) s5;
    v1 = (*(volatile s32 *) (u32) (v1 + -20156));
    (*(volatile u32 *) (u32) s5) = (u32) v1;
L_001E7B40:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20156)) = (u32) s5;
    (*(volatile u32 *) (u32) (s5 + 4)) = (u32) 0;
    goto L_001E7C04;
L_001E7B54:;
    (*(volatile u8 *) (u32) (s5 + 24)) = (u8) a1;
    a0 = s7;
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 16)) = (u32) v0; goto L_001E7A58;
L_001E7B6C:;
    v0 = (*(volatile u8 *) (u32) (s5 + 24));
    a0 = s7;
    a2 = 4;
    v0 = (s32) ((u32) v0 + 0x3U);
    a1 = (s64) ((u64) v0 << 34);
    a1 = (s64) ((u64) a1 >> 34); v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 20)) = (u32) v0; goto L_001E7A64;
L_001E7B90:;
    a1 = s7; v0 = func_0014AB90(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (v0 + 12));
    s3 = v0;
    a0 = s3;
    v0 = (*(volatile s32 *) (u32) (s5 + 16));
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_001E6D00(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_001E7BE0;
L_001E7BC0:;
    v1 = 1;
    a1 = (s32) ((u32) v1 << (s6 & 31));
    v1 = (*(volatile s32 *) (u32) (s5 + 20));
    a0 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 | a1;
    (*(volatile u32 *) (u32) a0) = (u32) v1; goto L_001E7AA8;
L_001E7BE0:;
    a0 = s3; v0 = Pes6Heap_Free(a0, a1);
    goto L_001E7BC0;
L_001E7BF0:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20160)) = (u32) s5;
    (*(volatile u32 *) (u32) s5) = (u32) 0; goto L_001E7B40;
L_001E7C00:;
L_001E7C04:;
    return v0;
}
