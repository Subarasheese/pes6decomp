/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C78510(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb4d0U);
    a4 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 == 0; a4 = (s32) ((u32) a4 + 0xffffbe90U); if (c_) goto L_00C78700; }
    v1 = (*(volatile u8 *) (u32) (a4 + 28));
    t6 = 0;
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (gp + -19252)) = (u32) 0; if (c_) goto L_00C78700; }
    { s32 c_ = a0 <= 0; t5 = 0; if (c_) goto L_00C786F8; }
    at = a0 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_00C78680; }
    { s32 c_ = a0 < 0; a5 = 0; if (c_) goto L_00C78570; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_00C78570;
    a5 = 1;
L_00C78570:;
    if (a5 == 0) goto L_00C78680;
    a6 = (s64) ((u64) t6 << 32);
    a7 = (s32) 0xcd0000U;
    a6 = a6 >> 32;
    a7 = (s32) ((u32) a7 + 0xffffbe90U);
    a5 = (s32) ((u32) a6 << 4);
    t4 = a2;
    a5 = (s32) ((u32) a5 + (u32) a6);
    t7 = (s32) ((u32) a5 << 2);
    a6 = a3;
    a5 = a1;
    a7 = (s32) ((u32) a7 + (u32) t7);
L_00C785A4:;
    t8 = (*(volatile s32 *) (u32) t4);
    t5 = (s32) ((u32) t5 + 0x8U);
    t7 = t5 < v1;
    (*(volatile u32 *) (u32) (a7 + 36)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) a6);
    (*(volatile u32 *) (u32) (a7 + 48)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) a5);
    (*(volatile u32 *) (u32) (a7 + 56)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 4));
    (*(volatile u32 *) (u32) (a7 + 40)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a6 + 4));
    (*(volatile u32 *) (u32) (a7 + 52)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 4));
    (*(volatile u32 *) (u32) (a7 + 60)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 8));
    (*(volatile u32 *) (u32) (a7 + 44)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a6 + 8));
    (*(volatile u32 *) (u32) (a7 + 56)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 8));
    (*(volatile u32 *) (u32) (a7 + 64)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 12));
    (*(volatile u32 *) (u32) (a7 + 48)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a6 + 12));
    (*(volatile u32 *) (u32) (a7 + 60)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 12));
    (*(volatile u32 *) (u32) (a7 + 68)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 16));
    (*(volatile u32 *) (u32) (a7 + 52)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a6 + 16));
    (*(volatile u32 *) (u32) (a7 + 64)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 16));
    (*(volatile u32 *) (u32) (a7 + 72)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 20));
    (*(volatile u32 *) (u32) (a7 + 56)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a6 + 20));
    (*(volatile u32 *) (u32) (a7 + 68)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 20));
    (*(volatile u32 *) (u32) (a7 + 76)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 24));
    (*(volatile u32 *) (u32) (a7 + 60)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a6 + 24));
    (*(volatile u32 *) (u32) (a7 + 72)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (a5 + 24));
    (*(volatile u32 *) (u32) (a7 + 80)) = (u32) t8;
    t8 = (*(volatile s32 *) (u32) (t4 + 28));
    (*(volatile u32 *) (u32) (a7 + 64)) = (u32) t8;
    t4 = (s32) ((u32) t4 + 0x20U);
    t8 = (*(volatile s32 *) (u32) (a6 + 28));
    (*(volatile u32 *) (u32) (a7 + 76)) = (u32) t8;
    a6 = (s32) ((u32) a6 + 0x20U);
    t8 = (*(volatile s32 *) (u32) (a5 + 28));
    (*(volatile u32 *) (u32) (a7 + 84)) = (u32) t8;
    a5 = (s32) ((u32) a5 + 0x20U);
    { s32 c_ = t7 != 0; a7 = (s32) ((u32) a7 + 0x20U); if (c_) goto L_00C785A4; }
L_00C78680:;
    at = t5 < a0;
    if (at == 0) goto L_00C786F8;
    a6 = (s32) ((u32) t5 << 2);
    a5 = (s64) ((u64) t6 << 32);
    a5 = a5 >> 32;
    a7 = (s32) ((u32) a2 + (u32) a6);
    a2 = (s32) ((u32) a1 + (u32) a6);
    v1 = (s32) ((u32) a5 << 4);
    a1 = (s32) ((u32) v1 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a6);
    v1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffbe90U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a5 = (s32) ((u32) a6 + (u32) v1);
L_00C786C0:;
    a1 = (*(volatile s32 *) (u32) a7);
    t5 = (s32) ((u32) t5 + 0x1U);
    v1 = t5 < a0;
    (*(volatile u32 *) (u32) (a5 + 36)) = (u32) a1;
    a7 = (s32) ((u32) a7 + 0x4U);
    a1 = (*(volatile s32 *) (u32) a3);
    (*(volatile u32 *) (u32) (a5 + 48)) = (u32) a1;
    a3 = (s32) ((u32) a3 + 0x4U);
    a1 = (*(volatile s32 *) (u32) a2);
    (*(volatile u32 *) (u32) (a5 + 56)) = (u32) a1;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0x4U); if (c_) goto L_00C786C0; }
L_00C786F8:;
    (*(volatile u32 *) (u32) (a4 + 32)) = (u32) a0;
    (*(volatile u32 *) (u32) (a4 + 44)) = (u32) a0;
L_00C78700:;
    return;
}
