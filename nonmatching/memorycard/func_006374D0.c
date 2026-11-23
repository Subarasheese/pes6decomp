/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_006374D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x660000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -4240));
    v1 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -4216));
    v1 = (*(volatile s32 *) (u32) (a1 + 296));
    v1 = (s32) ((u32) a0 + (u32) v1);
    a4 = (s32) ((u32) v1 + 0xcU);
    v1 = (*(volatile s32 *) (u32) v1);
    a3 = (s32) ((u32) v1 >> 2);
    { s32 c_ = a3 == 0; a6 = 0; if (c_) goto L_006376D8; }
    at = (u64) a3 < (u64) (s64) 9;
    { s32 c_ = at != 0; a2 = (s32) ((u32) a3 + 0xfffffff8U); if (c_) goto L_00637678; }
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x7ab30000U;
    a5 = a4;
    a1 = 446;
    a0 = (s32) ((u32) a0 + 0xffff8290U);
    v1 = v1 | 0x684c;
L_0063752C:;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) a6 / (u32) a1); hi = (s32) ((u32) a6 % (u32) a1); lo = q_; }
    a7 = (s32) ((u32) a6 + 0x1U);
    s1 = (*(volatile s32 *) (u32) a5);
    s0 = (s32) ((u32) a6 + 0x2U);
    t8 = (s32) ((u32) a6 + 0x3U);
    t7 = (s32) ((u32) a6 + 0x4U);
    t6 = (s32) ((u32) a6 + 0x5U);
    t5 = (s32) ((u32) a6 + 0x6U);
    t4 = (s32) ((u32) a6 + 0x7U);
    t9 = hi;
    a6 = (s32) ((u32) a6 + 0x8U);
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) a7 / (u32) a1); hi = (s32) ((u32) a7 % (u32) a1); lo = q_; }
    a7 = (s32) ((u32) a0 + (u32) t9);
    t9 = (*(volatile s8 *) (u32) a7);
    s1 = (s32) ((u32) s1 - (u32) t9);
    a7 = (u64) a6 < (u64) a2;
    (*(volatile u32 *) (u32) a5) = (u32) s1;
    s1 = s1 ^ v1;
    (*(volatile u32 *) (u32) a5) = (u32) s1;
    s1 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 4));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) s0 / (u32) a1); hi = (s32) ((u32) s0 % (u32) a1); lo = q_; }
    s0 = (s32) ((u32) a0 + (u32) s1);
    s0 = (*(volatile s8 *) (u32) s0);
    s0 = (s32) ((u32) t9 - (u32) s0);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) s0;
    s0 = s0 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) s0;
    s0 = hi;
    t9 = (*(volatile s32 *) (u32) (a5 + 8));
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t8 / (u32) a1); hi = (s32) ((u32) t8 % (u32) a1); lo = q_; }
    t8 = (s32) ((u32) a0 + (u32) s0);
    t8 = (*(volatile s8 *) (u32) t8);
    t8 = (s32) ((u32) t9 - (u32) t8);
    t9 = hi;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) t8;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t7 / (u32) a1); hi = (s32) ((u32) t7 % (u32) a1); lo = q_; }
    t8 = t8 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 12));
    t7 = (s32) ((u32) a0 + (u32) t9);
    t7 = (*(volatile s8 *) (u32) t7);
    t7 = (s32) ((u32) t8 - (u32) t7);
    t8 = hi;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) t7;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t6 / (u32) a1); hi = (s32) ((u32) t6 % (u32) a1); lo = q_; }
    t7 = t7 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) t7;
    t7 = (*(volatile s32 *) (u32) (a5 + 16));
    t6 = (s32) ((u32) a0 + (u32) t8);
    t6 = (*(volatile s8 *) (u32) t6);
    t6 = (s32) ((u32) t7 - (u32) t6);
    t7 = hi;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) t6;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t5 / (u32) a1); hi = (s32) ((u32) t5 % (u32) a1); lo = q_; }
    t6 = t6 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) t6;
    t6 = (*(volatile s32 *) (u32) (a5 + 20));
    t5 = (s32) ((u32) a0 + (u32) t7);
    t5 = (*(volatile s8 *) (u32) t5);
    t5 = (s32) ((u32) t6 - (u32) t5);
    t6 = hi;
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) t5;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) t4 / (u32) a1); hi = (s32) ((u32) t4 % (u32) a1); lo = q_; }
    t5 = t5 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) t5;
    t5 = (*(volatile s32 *) (u32) (a5 + 24));
    t4 = (s32) ((u32) a0 + (u32) t6);
    t4 = (*(volatile s8 *) (u32) t4);
    t4 = (s32) ((u32) t5 - (u32) t4);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) t4;
    t5 = hi;
    t4 = t4 ^ v1;
    t5 = (s32) ((u32) a0 + (u32) t5);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) t4;
    t4 = (*(volatile s32 *) (u32) (a5 + 28));
    t5 = (*(volatile s8 *) (u32) t5);
    t4 = (s32) ((u32) t4 - (u32) t5);
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) t4;
    t4 = t4 ^ v1;
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) t4;
    { s32 c_ = a7 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_0063752C; }
L_00637678:;
    at = (u64) a6 < (u64) a3;
    if (at == 0) goto L_006376D8;
    v1 = (s32) ((u32) a6 << 2);
    a5 = 446;
    a7 = (s32) ((u32) a4 + (u32) v1);
    a4 = (s32) 0x660000U;
    v1 = (s32) 0x7ab30000U;
    a4 = (s32) ((u32) a4 + 0xffff8290U);
    a1 = v1 | 0x684c;
L_006376A0:;
    if ((u32) a5 != 0) { s64 q_ = (s32) ((u32) a6 / (u32) a5); hi = (s32) ((u32) a6 % (u32) a5); lo = q_; }
    a0 = (*(volatile s32 *) (u32) a7);
    v1 = hi;
    a6 = (s32) ((u32) a6 + 0x1U);
    a2 = (s32) ((u32) a4 + (u32) v1);
    a2 = (*(volatile s8 *) (u32) a2);
    v1 = (u64) a6 < (u64) a3;
    a0 = (s32) ((u32) a0 - (u32) a2);
    (*(volatile u32 *) (u32) a7) = (u32) a0;
    a0 = a0 ^ a1;
    (*(volatile u32 *) (u32) a7) = (u32) a0;
    { s32 c_ = v1 != 0; a7 = (s32) ((u32) a7 + 0x4U); if (c_) goto L_006376A0; }
L_006376D8:;
    return;
}
