/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F9110(s32, s32, s32, s32);

void func_00C6FED0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb4acU);
    a1 = (*(volatile s32 *) (u32) (gp + -19288));
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) { ; goto L_00C6FF58; }
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffbc90U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_002F9110(a0, a1, a2, a3);
    a3 = (*(volatile s32 *) (u32) (gp + -19288));
    a1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) gp + 0xffffb4acU);
    a1 = (s32) ((u32) a1 + 0xffffbc90U);
    a0 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a3 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00C6FF58:;
    return;
}
