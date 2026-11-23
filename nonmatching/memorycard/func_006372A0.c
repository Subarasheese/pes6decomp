/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0064E2F0(s32);

void func_006372A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    s32 hi = 0, lo = 0;

    a0 = 0;
    v0 = func_0064E2F0(a0);
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    a1 = (*(volatile s32 *) (u32) (a0 + -4240));
    a3 = (s32) ((u32) v0 >> 2);
    a6 = 0;
    a0 = (*(volatile s32 *) (u32) (v1 + -4216));
    v1 = (*(volatile s32 *) (u32) (a1 + 296));
    v1 = (s32) ((u32) a0 + (u32) v1);
    { s32 c_ = a3 == 0; a4 = (s32) ((u32) v1 + 0xcU); if (c_) goto L_006374B0; }
    at = (u64) a3 < (u64) (s64) 9;
    { s32 c_ = at != 0; a2 = (s32) ((u32) a3 + 0xfffffff8U); if (c_) goto L_00637450; }
    v1 = (s32) 0x7ab30000U;
    a5 = a4;
    a1 = v1 | 0x684c;
    a0 = 446;
    v1 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 + 0xffff8290U);
L_00637304:;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) a6 / (u32) a0); hi = (s32) ((u32) a6 % (u32) a0); lo = q_; }
    t4 = (*(volatile s32 *) (u32) a5);
    a7 = (s32) ((u32) a6 + 0x1U);
    t9 = (s32) ((u32) a6 + 0x2U);
    t8 = (s32) ((u32) a6 + 0x3U);
    t7 = (s32) ((u32) a6 + 0x4U);
    s1 = t4 ^ a1;
    t6 = (s32) ((u32) a6 + 0x5U);
    (*(volatile u32 *) (u32) a5) = (u32) s1;
    t5 = (s32) ((u32) a6 + 0x6U);
    t4 = (s32) ((u32) a6 + 0x7U);
    s0 = hi;
    a6 = (s32) ((u32) a6 + 0x8U);
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) a7 / (u32) a0); hi = (s32) ((u32) a7 % (u32) a0); lo = q_; }
    a7 = (s32) ((u32) v1 + (u32) s0);
    s0 = (*(volatile s8 *) (u32) a7);
    s0 = (s32) ((u32) s1 + (u32) s0);
    a7 = (u64) a6 < (u64) a2;
    (*(volatile u32 *) (u32) a5) = (u32) s0;
    s0 = (*(volatile s32 *) (u32) (a5 + 4));
    s1 = s0 ^ a1;
    s0 = hi;
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) s1;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) t9 / (u32) a0); hi = (s32) ((u32) t9 % (u32) a0); lo = q_; }
    s0 = (s32) ((u32) v1 + (u32) s0);
    s0 = (*(volatile s8 *) (u32) s0);
    s0 = (s32) ((u32) s1 + (u32) s0);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) s0;
    s0 = (*(volatile s32 *) (u32) (a5 + 8));
    s0 = s0 ^ a1;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) s0;
    t9 = hi;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) t8 / (u32) a0); hi = (s32) ((u32) t8 % (u32) a0); lo = q_; }
    t8 = (s32) ((u32) v1 + (u32) t9);
    t8 = (*(volatile s8 *) (u32) t8);
    t8 = (s32) ((u32) s0 + (u32) t8);
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 12));
    t9 = t8 ^ a1;
    t8 = hi;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) t9;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) t7 / (u32) a0); hi = (s32) ((u32) t7 % (u32) a0); lo = q_; }
    t7 = (s32) ((u32) v1 + (u32) t8);
    t7 = (*(volatile s8 *) (u32) t7);
    t7 = (s32) ((u32) t9 + (u32) t7);
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) t7;
    t7 = (*(volatile s32 *) (u32) (a5 + 16));
    t8 = t7 ^ a1;
    t7 = hi;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) t8;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) t6 / (u32) a0); hi = (s32) ((u32) t6 % (u32) a0); lo = q_; }
    t6 = (s32) ((u32) v1 + (u32) t7);
    t6 = (*(volatile s8 *) (u32) t6);
    t6 = (s32) ((u32) t8 + (u32) t6);
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) t6;
    t6 = (*(volatile s32 *) (u32) (a5 + 20));
    t7 = t6 ^ a1;
    t6 = hi;
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) t7;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) t5 / (u32) a0); hi = (s32) ((u32) t5 % (u32) a0); lo = q_; }
    t5 = (s32) ((u32) v1 + (u32) t6);
    t5 = (*(volatile s8 *) (u32) t5);
    t5 = (s32) ((u32) t7 + (u32) t5);
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) t5;
    t5 = (*(volatile s32 *) (u32) (a5 + 24));
    t6 = t5 ^ a1;
    t5 = hi;
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) t6;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) t4 / (u32) a0); hi = (s32) ((u32) t4 % (u32) a0); lo = q_; }
    t4 = (s32) ((u32) v1 + (u32) t5);
    t4 = (*(volatile s8 *) (u32) t4);
    t4 = (s32) ((u32) t6 + (u32) t4);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) t4;
    t4 = (*(volatile s32 *) (u32) (a5 + 28));
    t5 = t4 ^ a1;
    t4 = hi;
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) t5;
    t4 = (s32) ((u32) v1 + (u32) t4);
    t4 = (*(volatile s8 *) (u32) t4);
    t4 = (s32) ((u32) t5 + (u32) t4);
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) t4;
    { s32 c_ = a7 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_00637304; }
L_00637450:;
    at = (u64) a6 < (u64) a3;
    if (at == 0) goto L_006374B0;
    v1 = (s32) ((u32) a6 << 2);
    a1 = (s32) 0x660000U;
    a7 = (s32) ((u32) a4 + (u32) v1);
    a2 = 446;
    v1 = (s32) 0x7ab30000U;
    a1 = (s32) ((u32) a1 + 0xffff8290U);
    a5 = v1 | 0x684c;
L_00637478:;
    if ((u32) a2 != 0) { s64 q_ = (s32) ((u32) a6 / (u32) a2); hi = (s32) ((u32) a6 % (u32) a2); lo = q_; }
    v1 = (*(volatile s32 *) (u32) a7);
    a4 = v1 ^ a5;
    (*(volatile u32 *) (u32) a7) = (u32) a4;
    v1 = hi;
    a6 = (s32) ((u32) a6 + 0x1U);
    a0 = (s32) ((u32) a1 + (u32) v1);
    a0 = (*(volatile s8 *) (u32) a0);
    v1 = (u64) a6 < (u64) a3;
    a0 = (s32) ((u32) a4 + (u32) a0);
    (*(volatile u32 *) (u32) a7) = (u32) a0;
    { s32 c_ = v1 != 0; a7 = (s32) ((u32) a7 + 0x4U); if (c_) goto L_00637478; }
L_006374B0:;
    return;
}
