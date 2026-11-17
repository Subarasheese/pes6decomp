/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C6F940(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a4 = (*(volatile s32 *) (u32) (gp + -19288));
    v1 = (s32) ((u32) gp + 0xffffb4acU);
    a2 = (s32) ((u32) a4 << 2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) goto L_00C6F990;
    v1 = (s32) ((u32) a4 << 1);
    a2 = (s32) 0xcd0000U;
    a3 = (s32) ((u32) v1 + (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffbcbcU);
    a3 = (s32) ((u32) a3 << 2);
    v1 = (s32) 0xcd0000U;
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 + 0xffffbcc0U);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    (*(volatile u32 *) (u32) v1) = (u32) a0;
L_00C6F990:;
    return;
}
