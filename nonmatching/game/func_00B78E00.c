/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00B78E00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a4 = (s32) 0xca0000U;
    a4 = (s32) ((u32) a4 + 0xffffa708U);
    a3 = (s32) ((u32) sp + 0x8U);
    a2 = 3;
L_00B78E14:;
    a1 = (*(volatile s8 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a4 + 1));
    (*(volatile u8 *) (u32) a3) = (u8) a1;
    (*(volatile u8 *) (u32) (a3 + 1)) = (u8) v1;
    a4 = (s32) ((u32) a4 + 0x2U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x2U); if (c_) goto L_00B78E14; }
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 + (u32) sp);
    (*(volatile u8 *) (u32) (v1 + 9983)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 8));
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7972)) = (u8) a0;
    return;
}
