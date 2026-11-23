/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00138A50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;

    (*(volatile u32 *) (u32) a0) = (u32) a1;
    at = 0 < a3;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) a2;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) a3;
    a2 = 0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0; if (c_) goto L_00138BD8; }
    at = a3 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a3 + 0xfffffff8U); if (c_) goto L_00138B88; }
    at = a3 < 0;
    a5 = 0;
    { s32 c_ = at != 0; a1 = 0; if (c_) goto L_00138BE0; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a3 < at;
    if (at == 0) goto L_00138BE0;
    a1 = 1; goto L_00138BE0;
L_00138AA8:;
    a1 = a3 & a1;
    { s32 c_ = a1 != 0; a4 = 1; if (c_) goto L_00138AC0; }
    if (a1 == 0) goto L_00138AC0;
    a4 = 0;
L_00138AC0:;
    if (a4 == 0) goto L_00138ACC;
    a5 = 1;
L_00138ACC:;
    if (a5 == 0) goto L_00138B88;
    a4 = (s32) 0x1e0000U;
    a1 = 0;
    t8 = a4 | 0x2200;
L_00138AE0:;
    t9 = (*(volatile s32 *) (u32) (a0 + 4));
    a2 = (s32) ((u32) a2 + 0x8U);
    t6 = (s32) 0x40000U;
    t5 = (s32) 0x80000U;
    t4 = (s32) 0xb0000U;
    a7 = (s32) 0xf0000U;
    a6 = (s32) 0x130000U;
    a5 = (s32) 0x170000U;
    a4 = (s32) 0x1a0000U;
    t7 = a2 < v1;
    t9 = (s32) ((u32) t9 + (u32) a1);
    (*(volatile u32 *) (u32) t9) = (u32) 0;
    t9 = (*(volatile s32 *) (u32) (a0 + 4));
    t9 = (s32) ((u32) t9 + (u32) a1);
    t6 = (s32) ((u32) t9 + (u32) t6);
    (*(volatile u32 *) (u32) (t6 + -15296)) = (u32) 0;
    t6 = (*(volatile s32 *) (u32) (a0 + 4));
    t6 = (s32) ((u32) t6 + (u32) a1);
    t5 = (s32) ((u32) t6 + (u32) t5);
    (*(volatile u32 *) (u32) (t5 + -30592)) = (u32) 0;
    t5 = (*(volatile s32 *) (u32) (a0 + 4));
    t5 = (s32) ((u32) t5 + (u32) a1);
    t4 = (s32) ((u32) t5 + (u32) t4);
    (*(volatile u32 *) (u32) (t4 + 19648)) = (u32) 0;
    t4 = (*(volatile s32 *) (u32) (a0 + 4));
    t4 = (s32) ((u32) t4 + (u32) a1);
    a7 = (s32) ((u32) t4 + (u32) a7);
    (*(volatile u32 *) (u32) (a7 + 4352)) = (u32) 0;
    a7 = (*(volatile s32 *) (u32) (a0 + 4));
    a7 = (s32) ((u32) a7 + (u32) a1);
    a6 = (s32) ((u32) a7 + (u32) a6);
    (*(volatile u32 *) (u32) (a6 + -10944)) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (a0 + 4));
    a6 = (s32) ((u32) a6 + (u32) a1);
    a5 = (s32) ((u32) a6 + (u32) a5);
    (*(volatile u32 *) (u32) (a5 + -26240)) = (u32) 0;
    a5 = (*(volatile s32 *) (u32) (a0 + 4));
    a5 = (s32) ((u32) a5 + (u32) a1);
    a4 = (s32) ((u32) a5 + (u32) a4);
    a1 = (s32) ((u32) a1 + (u32) t8);
    { s32 c_ = t7 != 0; (*(volatile u32 *) (u32) (a4 + 24000)) = (u32) 0; if (c_) goto L_00138AE0; }
L_00138B88:;
    at = a2 < a3;
    if (at == 0) goto L_00138BD8;
    v1 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a5 = (s32) ((u32) v1 << 6);
    v1 = (s32) 0x30000U;
    a1 = v1 | 0xc440;
L_00138BB8:;
    a4 = (*(volatile s32 *) (u32) (a0 + 4));
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < a3;
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u32 *) (u32) a4) = (u32) 0;
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + (u32) a1); if (c_) goto L_00138BB8; }
L_00138BD8:;
    goto L_00138BF0;
L_00138BE0:;
    if (a1 == 0) goto L_00138ACC;
    a1 = (s32) 0x80000000U; goto L_00138AA8;
L_00138BF0:;
    return;
}
