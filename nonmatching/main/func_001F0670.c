/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Free(s64, s64);
s64 func_0014AB90(s64, s64, s64, s64);
s64 func_00153FD0(s64, s64, s64, s64);
s64 func_001CDAD0(s64);

s64 func_001F0670(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    s6 = a1;
    s5 = a2;
    s0 = a0;
    a0 = s6; v0 = func_001CDAD0(a0);
    a0 = s5;
    a1 = 1;
    a2 = 20; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) v0) = (u32) s0;
    s2 = v0;
    v1 = (*(volatile s32 *) (u32) s6);
    a0 = s5;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
    a1 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    at = 0 < v0;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_001F0820; }
    s0 = 0;
L_001F06F0:;
    v0 = (*(volatile s32 *) (u32) (s6 + 4));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s5; v0 = func_0014AB90(a0, a1, a2, a3);
    s3 = v0;
    a1 = 0;
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s64) ((u64) s3 << 32);
    v1 = (s64) ((u64) v1 >> 32);
    at = (u64) 0 < (u64) v0;
    { s32 c_ = at == 0; a0 = (s32) ((u32) s3 + 0x8U); if (c_) goto L_001F0750; }
L_001F0728:;
    v0 = (*(volatile u32 *) (u32) (a0 + 8));
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = (s64) ((u64) v1 + (u64) v0);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (u64) a1 < (u64) v0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0xcU); if (c_) goto L_001F0728; }
L_001F0750:;
    v0 = (s32) 0x530000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -19928));
    if (s1 == 0) goto L_001F07A8;
    v1 = (*(volatile u16 *) (u32) (s3 + 4));
L_001F0768:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + 4));
    if (v1 != v0) goto L_001F0798;
    v0 = (*(volatile u8 *) (u32) s1);
    a0 = s3;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) s1) = (u8) v0; v0 = Pes6Heap_Free(a0, a1);
    goto L_001F0800;
L_001F0798:;
    s1 = (*(volatile s32 *) (u32) (s1 + 12));
    if (s1 != 0) goto L_001F0768;
L_001F07A8:;
    a0 = s5;
    a1 = 1;
    a2 = 16; v0 = func_00153FD0(a0, a1, a2, a3);
    v1 = 1;
    s1 = v0;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) s3;
    v0 = (*(volatile s32 *) (u32) (v1 + -19928));
    if (v0 == 0) goto L_001F0860;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -19924));
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) s1;
    v0 = (*(volatile s32 *) (u32) (v0 + -19924));
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
L_001F07F0:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19924)) = (u32) s1;
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) 0;
L_001F0800:;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) v0) = (u32) s1;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = s4 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001F06F0; }
L_001F0820:;
    a0 = s6; v0 = Pes6Heap_Free(a0, a1);
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -19936));
    if (v1 == 0) goto L_001F0870;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -19932));
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) s2;
    v1 = (*(volatile s32 *) (u32) (v1 + -19932));
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v1;
L_001F0850:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -19932)) = (u32) s2;
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) 0; goto L_001F0880;
L_001F0860:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19928)) = (u32) s1;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0; goto L_001F07F0;
L_001F0870:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -19936)) = (u32) s2;
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) 0; goto L_001F0850;
L_001F0880:;
    return v0;
}
