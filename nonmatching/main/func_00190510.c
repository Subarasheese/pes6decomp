/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00190510(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 552));
    if (v1 == 0) goto L_00190588;
    a7 = 0;
    a6 = 0;
    a3 = (s32) 0x520000U;
    a2 = (s32) 0x520000U;
    a1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
L_0019053C:;
    a5 = (*(volatile s32 *) (u32) (a3 + 552));
    a7 = (s32) ((u32) a7 + 0x5U);
    a4 = a7 < 20;
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) 0;
    a5 = (*(volatile s32 *) (u32) (a2 + 552));
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) (a5 + 64)) = (u32) 0;
    a5 = (*(volatile s32 *) (u32) (a1 + 552));
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) (a5 + 104)) = (u32) 0;
    a5 = (*(volatile s32 *) (u32) (a0 + 552));
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) (a5 + 144)) = (u32) 0;
    a5 = (*(volatile s32 *) (u32) (v1 + 552));
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) (a5 + 184)) = (u32) 0;
    { s32 c_ = a4 != 0; a6 = (s32) ((u32) a6 + 0xc8U); if (c_) goto L_0019053C; }
L_00190588:;
    return;
}
