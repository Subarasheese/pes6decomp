/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008BA070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = a1 & 0xff;
    v1 = v1 < 14;
    if (v1 != 0) { v1 = a1 & 0xff; goto L_008BA088; }
    a1 = 0;
    v1 = a1 & 0xff;
L_008BA088:;
    a1 = (s32) 0x8f0000U;
    a2 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffffbcc0U);
    v1 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0xffffbcc2U);
    a3 = (*(volatile s16 *) (u32) a1);
    a2 = (s32) ((u32) v1 + (u32) a2);
    v1 = 15;
    (*(volatile u16 *) (u32) a0) = (u16) a3;
    a1 = 28;
    a2 = (*(volatile s16 *) (u32) a2);
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) a2;
    (*(volatile u16 *) (u32) (a0 + 4)) = (u16) a1;
    (*(volatile u16 *) (u32) (a0 + 6)) = (u16) v1; return;
}
