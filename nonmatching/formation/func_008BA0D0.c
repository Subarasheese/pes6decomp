/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292D80(s32);

void func_008BA0D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = a1; v0 = func_00292D80(a0);
    v1 = v0 & 0xff;
    a0 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbc70U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) 0x8f0000U;
    a2 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffbc72U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 15;
    (*(volatile u16 *) (u32) s0) = (u16) a2;
    a0 = 28;
    a1 = (*(volatile s16 *) (u32) a1);
    (*(volatile u16 *) (u32) (s0 + 2)) = (u16) a1;
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) a0;
    (*(volatile u16 *) (u32) (s0 + 6)) = (u16) v1;
    return;
}
