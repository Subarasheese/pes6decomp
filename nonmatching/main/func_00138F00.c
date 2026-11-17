/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00138F00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;

    if (a4 == 0) goto L_001390D0;
    t4 = (s32) 0x10000000U;
    s3 = (s32) 0x51000000U;
    s5 = t4 | 0x6;
    t5 = (s64) ((u64) t4 << 32);
    t4 = 4;
    a7 = (s32) ((u32) a0 + 0x8U);
    s2 = t4 | t5;
    v1 = 32760;
    t4 = (s32) 0x8000000U;
    a6 = 2;
    s4 = s3 | 0x6;
    s1 = 14;
    s0 = 80;
    t9 = 81;
    s7 = 82;
    fp = 83;
    t8 = (s64) ((u64) t4 << 32);
L_00138F70:;
    at = (u64) a4 < (u64) (s64) 32760;
    if (at == 0) goto L_00138FF8;
    t4 = a4;
L_00138F80:;
    if (a5 != a6) goto L_00138FC0;
    t6 = (*(volatile s32 *) (u32) a0);
    t5 = t6 & 0xc;
    if (t5 == 0) goto L_00139000;
L_00138F98:;
    (*(volatile u32 *) (u32) t6) = (u32) 0;
    t6 = (s32) ((u32) t6 + 0x4U);
    t5 = t6 & 0xc;
    if (t5 != 0) goto L_00138F98;
    goto L_00139000;
L_00138FC0:;
    t6 = (*(volatile s32 *) (u32) a0);
    t5 = t6 & 0xc;
    if (t5 == 0) goto L_001390D8;
L_00138FD0:;
    (*(volatile u32 *) (u32) t6) = (u32) 0;
    t6 = (s32) ((u32) t6 + 0x4U);
    t5 = t6 & 0xc;
    if (t5 != 0) goto L_00138FD0;
    t5 = (*(volatile s32 *) (u32) a7); goto L_001390DC;
L_00138FF8:;
    t4 = v1; goto L_00138F80;
L_00139000:;
    t5 = (*(volatile s32 *) (u32) a7);
    if (t5 == 0) goto L_00139030;
    s6 = (s32) ((u32) t6 - (u32) t5);
    { s32 c_ = s6 >= 0; t7 = (s32) s6 >> 4; if (c_) goto L_00139020; }
    t7 = (s32) ((u32) s6 + 0xfU);
    t7 = (s32) t7 >> 4;
L_00139020:;
    s6 = (s32) ((u32) t7 + 0xffffffffU);
    t7 = (*(volatile s32 *) (u32) t5);
    t7 = (s32) ((u32) t7 + (u32) s6);
    (*(volatile u32 *) (u32) t5) = (u32) t7;
L_00139030:;
    (*(volatile u32 *) (u32) a0) = (u32) t6;
    (*(volatile u32 *) (u32) a7) = (u32) 0;
    s6 = (*(volatile s32 *) (u32) a0);
    t5 = (s32) ((u32) s6 + 0x80U);
    (*(volatile u32 *) (u32) a0) = (u32) t5;
L_00139048:;
    { u32 a_ = (u32) (s6 + 0) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    (*(volatile u32 *) (u32) s6) = (u32) s5;
    t5 = a4 ^ t4;
    (*(volatile u32 *) (u32) (s6 + 12)) = (u32) s4;
    t5 = (u64) t5 < (u64) (s64) 1;
    (*(volatile u64 *) (u32) (s6 + 16)) = (u64) s2;
    t6 = (s64) ((u64) t5 << 15);
    (*(volatile u64 *) (u32) (s6 + 24)) = (u64) s1;
    t5 = (s64) ((u64) t4 << 32);
    (*(volatile u64 *) (u32) (s6 + 32)) = (u64) a1;
    t5 = (s64) ((u64) t5 >> 32);
    (*(volatile u64 *) (u32) (s6 + 40)) = (u64) s0;
    t5 = t5 | t6;
    (*(volatile u64 *) (u32) (s6 + 48)) = (u64) 0;
    t7 = t5 | t8;
    (*(volatile u64 *) (u32) (s6 + 56)) = (u64) t9;
    t5 = (s32) 0x30000000U;
    (*(volatile u64 *) (u32) (s6 + 64)) = (u64) a2;
    t6 = (s32) ((u32) t4 + (u32) t5);
    (*(volatile u64 *) (u32) (s6 + 72)) = (u64) s7;
    t5 = t4 | s3;
    (*(volatile u64 *) (u32) (s6 + 80)) = (u64) 0;
    a4 = (s32) ((u32) a4 - (u32) t4);
    (*(volatile u64 *) (u32) (s6 + 88)) = (u64) fp;
    t4 = (s32) ((u32) t4 << 4);
    (*(volatile u64 *) (u32) (s6 + 96)) = (u64) t7;
    (*(volatile u64 *) (u32) (s6 + 104)) = (u64) 0;
    (*(volatile u32 *) (u32) (s6 + 112)) = (u32) t6;
    (*(volatile u32 *) (u32) (s6 + 116)) = (u32) a3;
    (*(volatile u32 *) (u32) (s6 + 120)) = (u32) 0;
    a3 = (s32) ((u32) a3 + (u32) t4);
    { s32 c_ = a4 != 0; (*(volatile u32 *) (u32) (s6 + 124)) = (u32) t5; if (c_) goto L_00138F70; }
L_001390D0:;
    goto L_00139120;
L_001390D8:;
    t5 = (*(volatile s32 *) (u32) a7);
L_001390DC:;
    if (t5 == 0) goto L_00139108;
    s6 = (s32) ((u32) t6 - (u32) t5);
    { s32 c_ = s6 >= 0; t7 = (s32) s6 >> 4; if (c_) goto L_001390F8; }
    t7 = (s32) ((u32) s6 + 0xfU);
    t7 = (s32) t7 >> 4;
L_001390F8:;
    s6 = (s32) ((u32) t7 + 0xffffffffU);
    t7 = (*(volatile s32 *) (u32) t5);
    t7 = (s32) ((u32) t7 + (u32) s6);
    (*(volatile u32 *) (u32) t5) = (u32) t7;
L_00139108:;
    (*(volatile u32 *) (u32) a0) = (u32) t6;
    (*(volatile u32 *) (u32) a7) = (u32) 0;
    s6 = (*(volatile s32 *) (u32) a0);
    t5 = (s32) ((u32) s6 + 0x80U);
    (*(volatile u32 *) (u32) a0) = (u32) t5; goto L_00139048;
L_00139120:;
    return v0;
}
