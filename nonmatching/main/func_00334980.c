/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00334980(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    a4 = (s32) 0x3b0000U;
    a4 = (s32) ((u32) a4 + 0x73c0U);
    a3 = (s32) ((u32) sp + 0x0U);
    a2 = 30;
L_00334994:;
    v1 = (*(volatile s32 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a4 + 4));
    (*(volatile u32 *) (u32) a3) = (u32) v1;
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v0;
    a4 = (s32) ((u32) a4 + 0x8U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_00334994; }
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    return v0;
}
