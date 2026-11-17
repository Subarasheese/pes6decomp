/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001393B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    s32 hi = 0, lo = 0;

    a1 = 1;
    a4 = (s32) 0x400000U;
    t8 = (s32) 0x400000U;
    t7 = (s32) 0x400000U;
    t6 = (s32) 0x400000U;
    t5 = (s32) 0x400000U;
    t4 = (s32) 0x400000U;
    a7 = (s32) 0x400000U;
    a6 = (s32) 0x400000U;
    a5 = (s32) 0x400000U;
L_001393E0:;
    a3 = (*(volatile u8 *) (u32) (a0 + 12));
    a2 = (*(volatile s32 *) (u32) (a0 + 8));
    v1 = (s32) ((u32) a3 + 0x1U);
    v1 = (s32) ((u32) a1 << (v1 & 31));
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v1); hi = (s32) ((s32) a2 % (s32) v1); lo = q_; }
    v1 = hi;
    if (v1 != 0) goto L_001394A8;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    if (v1 == 0) goto L_00139560;
    s0 = (*(volatile u8 *) (u32) (v1 + 13));
    if (s0 == 0) goto L_00139428;
    s0 = (*(volatile u8 *) (u32) (v1 + 14));
    if (s0 == 0) goto L_00139578;
L_00139428:;
    s0 = (*(volatile u8 *) (u32) (v1 + 12));
    if (a3 != s0) goto L_00139578;
    s0 = (*(volatile s32 *) (u32) (v1 + 8));
    a3 = (s32) ((u32) a1 << (a3 & 31));
    a2 = (s32) ((u32) a2 + (u32) a3);
    if (s0 != a2) goto L_00139578;
    a2 = (*(volatile u8 *) (u32) (a0 + 12));
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 12)) = (u8) a2;
    a3 = (*(volatile s32 *) (u32) v1);
    if (a3 == 0) goto L_00139468;
    a2 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) a2;
L_00139468:;
    a3 = (*(volatile s32 *) (u32) (v1 + 4));
    if (a3 == 0) goto L_00139480;
    a2 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) a3) = (u32) a2;
L_00139480:;
    (*(volatile u8 *) (u32) (v1 + 13)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 14)) = (u8) 0;
    a2 = (*(volatile s32 *) (u32) (t8 + -14252));
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) a2;
    (*(volatile u32 *) (u32) (t7 + -14252)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (t6 + -14248));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (t5 + -14248)) = (u32) v1; goto L_001393E0;
L_001394A8:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 == 0) goto L_00139578;
    s0 = (*(volatile u8 *) (u32) (v1 + 13));
    if (s0 == 0) goto L_001394D0;
    s0 = (*(volatile u8 *) (u32) (v1 + 14));
    if (s0 == 0) goto L_00139578;
L_001394D0:;
    s0 = (*(volatile u8 *) (u32) (v1 + 12));
    if (s0 != a3) goto L_00139578;
    t9 = (*(volatile s32 *) (u32) (v1 + 8));
    s0 = (s32) ((u32) a1 << (s0 & 31));
    t9 = (s32) ((u32) t9 + (u32) s0);
    if (a2 != t9) goto L_00139578;
    a2 = (s32) ((u32) a1 << (a3 & 31));
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    a2 = (s32) ((u32) a3 - (u32) a2);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) a2;
    a2 = (*(volatile u8 *) (u32) (a0 + 12));
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 12)) = (u8) a2;
    a3 = (*(volatile s32 *) (u32) v1);
    if (a3 == 0) goto L_00139568;
    a2 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) a2;
L_00139520:;
    a3 = (*(volatile s32 *) (u32) (v1 + 4));
    if (a3 == 0) goto L_00139538;
    a2 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) a3) = (u32) a2;
L_00139538:;
    (*(volatile u8 *) (u32) (v1 + 13)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 14)) = (u8) 0;
    a2 = (*(volatile s32 *) (u32) (t4 + -14252));
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) a2;
    (*(volatile u32 *) (u32) (a7 + -14252)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a6 + -14248));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a5 + -14248)) = (u32) v1; goto L_001393E0;
L_00139560:;
    goto L_00139578;
L_00139568:;
    a2 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (a4 + -14256)) = (u32) a2; goto L_00139520;
L_00139578:;
    return;
}
