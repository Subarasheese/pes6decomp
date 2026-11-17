/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F7080(s32, s32, s32, s32);

void func_00C72400(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = 0;
    s1 = (s32) 0xcd0000U;
    s0 = (s32) 0xcd0000U;
    s1 = (s32) ((u32) s1 + 0xffffbd28U);
    s0 = (s32) ((u32) s0 + 0xffffbd30U);
L_00C72428:;
    v1 = (*(volatile s32 *) (u32) s1);
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (gp + -19280)) = (u32) s2; if (c_) goto L_00C72470; }
    a0 = (*(volatile s32 *) (u32) s0); func_001F7080(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19280));
    v1 = (s32) 0xcd0000U;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbd28U);
    a0 = (s32) ((u32) a0 + 0xffffbd30U);
    a2 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v1 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00C72470:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x50U); if (c_) goto L_00C72428; }
    return;
}
