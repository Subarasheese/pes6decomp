/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BFF6A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0xca0000U;
    a3 = (s32) ((u32) a3 + 0xffffeef8U);
    a2 = (s32) ((u32) sp + 0x0U);
    a1 = 9;
L_00BFF6B4:;
    v1 = (*(volatile s8 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a2) = (u8) v1;
    a3 = (s32) ((u32) a3 + 0x1U);
    a2 = (s32) ((u32) a2 + 0x1U);
    if (a1 > 0) goto L_00BFF6B4;
    v1 = (s32) ((u32) a0 + (u32) sp);
    a1 = 255;
    a2 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7757)) = (u8) a2;
    (*(volatile u8 *) (u32) (v1 + 7758)) = (u8) a1;
    return v0;
}
