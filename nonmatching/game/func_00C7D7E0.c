/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F9110(s32, s32, s32, s32);

void func_00C7D7E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -19208));
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (gp + -19212)) = (u32) 0; if (c_) goto L_00C7D868; }
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -16368));
    v1 = v1 & 0x1;
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -19212)); goto L_00C7D858; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16416)); func_002F9110(a0, a1, a2, a3);
    a3 = (*(volatile s32 *) (u32) (gp + -19212));
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffbfe0U);
    v1 = -2;
    a0 = 0 & 0x1;
    a2 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a1 = (*(volatile u8 *) (u32) (a2 + 48));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 48)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -19212));
L_00C7D858:;
    v1 = (s32) ((u32) gp + 0xffffb4f8U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00C7D868:;
    return;
}
