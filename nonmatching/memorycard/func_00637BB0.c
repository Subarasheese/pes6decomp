/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00637BB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    s32 hi = 0, lo = 0;

    a6 = (s32) 0x660000U;
    t4 = 0;
    a6 = (s32) ((u32) a6 + 0xffff85c0U);
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x7ab30000U;
    a1 = 446;
    a0 = (s32) ((u32) a0 + 0xffff8290U);
    t6 = (s32) 0x660000U;
    v1 = v1 | 0x684c;
    t5 = (s32) 0x660000U;
L_00637BF4:;
    a4 = (*(volatile s32 *) (u32) a6);
    a2 = (*(volatile s32 *) (u32) (t6 + -4240));
    a3 = (*(volatile s32 *) (u32) (t5 + -4216));
    a4 = (s32) ((u32) a4 << 2);
    a2 = (s32) ((u32) a2 + (u32) a4);
    a2 = (*(volatile s32 *) (u32) (a2 + 296));
    a2 = (s32) ((u32) a3 + (u32) a2);
    a4 = (s32) ((u32) a2 + 0xcU);
    a2 = (*(volatile s32 *) (u32) a2);
    a3 = (s32) ((u32) a2 >> 2);
    { s32 c_ = a3 == 0; a7 = 0; if (c_) goto L_00637DD8; }
    at = (u64) a3 < (u64) (s64) 9;
    { s32 c_ = at != 0; a2 = (s32) ((u32) a3 + 0xfffffff8U); if (c_) goto L_00637D88; }
    a5 = a4;
L_00637C38:;
    t7 = (s32) ((u32) a7 + 0x1U);
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) a7 / (u32) a1); hi = (s32) ((u32) a7 % (u32) a1); lo = q_; }
    s5 = (*(volatile s32 *) (u32) a5);
    s4 = (s32) ((u32) a7 + 0x2U);
    s3 = (s32) ((u32) a7 + 0x3U);
    s2 = (s32) ((u32) a7 + 0x4U);
    s1 = (s32) ((u32) a7 + 0x5U);
    s0 = (s32) ((u32) a7 + 0x6U);
    t8 = (s32) ((u32) a7 + 0x7U);
    t9 = hi;
    a7 = (s32) ((u32) a7 + 0x8U);
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t7 / (u32) a1); hi = (s32) ((u32) t7 % (u32) a1); lo = q_; }
    t7 = (s32) ((u32) a0 + (u32) t9);
    t9 = (*(volatile s8 *) (u32) t7);
    s5 = (s32) ((u32) s5 - (u32) t9);
    t7 = (u64) a7 < (u64) a2;
    (*(volatile u32 *) (u32) a5) = (u32) s5;
    s5 = s5 ^ v1;
    (*(volatile u32 *) (u32) a5) = (u32) s5;
    s5 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 4));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) s4 / (u32) a1); hi = (s32) ((u32) s4 % (u32) a1); lo = q_; }
    s4 = (s32) ((u32) a0 + (u32) s5);
    s4 = (*(volatile s8 *) (u32) s4);
    s4 = (s32) ((u32) t9 - (u32) s4);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) s4;
    s4 = s4 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) s4;
    s4 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 8));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) s3 / (u32) a1); hi = (s32) ((u32) s3 % (u32) a1); lo = q_; }
    s3 = (s32) ((u32) a0 + (u32) s4);
    s3 = (*(volatile s8 *) (u32) s3);
    s3 = (s32) ((u32) t9 - (u32) s3);
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) s3;
    s3 = s3 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) s3;
    s3 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 12));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) s2 / (u32) a1); hi = (s32) ((u32) s2 % (u32) a1); lo = q_; }
    s2 = (s32) ((u32) a0 + (u32) s3);
    s2 = (*(volatile s8 *) (u32) s2);
    s2 = (s32) ((u32) t9 - (u32) s2);
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) s2;
    s2 = s2 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) s2;
    s2 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 16));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) s1 / (u32) a1); hi = (s32) ((u32) s1 % (u32) a1); lo = q_; }
    s1 = (s32) ((u32) a0 + (u32) s2);
    s1 = (*(volatile s8 *) (u32) s1);
    s1 = (s32) ((u32) t9 - (u32) s1);
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) s1;
    s1 = s1 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) s1;
    s1 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 20));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) s0 / (u32) a1); hi = (s32) ((u32) s0 % (u32) a1); lo = q_; }
    s0 = (s32) ((u32) a0 + (u32) s1);
    s0 = (*(volatile s8 *) (u32) s0);
    s0 = (s32) ((u32) t9 - (u32) s0);
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) s0;
    s0 = s0 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) s0;
    s0 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 24));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t8 / (u32) a1); hi = (s32) ((u32) t8 % (u32) a1); lo = q_; }
    t8 = (s32) ((u32) a0 + (u32) s0);
    t8 = (*(volatile s8 *) (u32) t8);
    t8 = (s32) ((u32) t9 - (u32) t8);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) t8;
    t9 = hi;
    t8 = t8 ^ v1;
    t9 = (s32) ((u32) a0 + (u32) t9);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 28));
    t9 = (*(volatile s8 *) (u32) t9);
    t8 = (s32) ((u32) t8 - (u32) t9);
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) t8;
    t8 = t8 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) t8;
    { s32 c_ = t7 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_00637C38; }
L_00637D88:;
    at = (u64) a7 < (u64) a3;
    if (at == 0) goto L_00637DD8;
    a2 = (s32) ((u32) a7 << 2);
    t7 = (s32) ((u32) a4 + (u32) a2);
L_00637DA0:;
    a4 = (*(volatile s32 *) (u32) t7);
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) a7 / (u32) a1); hi = (s32) ((u32) a7 % (u32) a1); lo = q_; }
    a2 = hi;
    a7 = (s32) ((u32) a7 + 0x1U);
    a5 = (s32) ((u32) a0 + (u32) a2);
    a5 = (*(volatile s8 *) (u32) a5);
    a2 = (u64) a7 < (u64) a3;
    a4 = (s32) ((u32) a4 - (u32) a5);
    (*(volatile u32 *) (u32) t7) = (u32) a4;
    a4 = a4 ^ v1;
    (*(volatile u32 *) (u32) t7) = (u32) a4;
    { s32 c_ = a2 != 0; t7 = (s32) ((u32) t7 + 0x4U); if (c_) goto L_00637DA0; }
L_00637DD8:;
    t4 = (s32) ((u32) t4 + 0x1U);
    a2 = (u64) t4 < (u64) (s64) 9;
    { s32 c_ = a2 != 0; a6 = (s32) ((u32) a6 + 0x4U); if (c_) goto L_00637BF4; }
    return;
}
