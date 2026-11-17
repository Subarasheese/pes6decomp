/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s32, s32, s32);

void func_00C32C80(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffb350U);
    (*(volatile u32 *) (u32) (gp + -19328)) = (u32) a0;
    a1 = 0;
    a2 = 760; memset(a0, a1, a2);
    a0 = (s32) 0xcd0000U;
    a2 = 0;
    a0 = (s32) ((u32) a0 + 0xffffb350U);
    a1 = -1;
L_00C32CB0:;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) a1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) a1;
    v1 = a2 < 113;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) a1;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) a1;
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) a1;
    (*(volatile u32 *) (u32) (a0 + 24)) = (u32) a1;
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a1;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) a1;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_00C32CB0; }
    v1 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb354U);
    a2 = 0;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (a0 + -19144)) = (u32) a1;
    (*(volatile u32 *) (u32) (v1 + -19140)) = (u32) a1;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (a0 + -19136)) = (u32) a1;
    (*(volatile u32 *) (u32) (v1 + -19132)) = (u32) a1;
    a0 = -1;
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffb350U);
L_00C32D24:;
    (*(volatile u32 *) (u32) (a1 + 504)) = (u32) a0;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 632)) = (u32) a0;
    v1 = a2 < 32;
    (*(volatile u32 *) (u32) (a1 + 508)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 636)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 512)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 640)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 516)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 644)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 520)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 648)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 524)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 652)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 528)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 656)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 532)) = (u32) a0;
    (*(volatile u32 *) (u32) (a1 + 660)) = (u32) a0;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x20U); if (c_) goto L_00C32D24; }
    return;
}
