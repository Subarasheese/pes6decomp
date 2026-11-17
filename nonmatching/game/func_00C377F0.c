/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C377F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    a7 = (s32) ((u32) a0 + 0xffffffffU);
    a4 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a7 << 3);
    a5 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a7);
    a6 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    a4 = (s32) ((u32) a4 + 0xffffb708U);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a5 = (s32) ((u32) a5 + 0xffffb700U);
    a7 = (s32) ((u32) a7 << 2);
    v1 = (s32) ((u32) a2 << 1);
    a4 = (s32) ((u32) a4 + (u32) a7);
    a5 = (s32) ((u32) a5 + (u32) a7);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a2 = (s32) ((u32) a2 + (u32) a5);
    a4 = (*(volatile u8 *) (u32) a6);
    (*(volatile u8 *) (u32) a2) = (u8) a4;
    (*(volatile u16 *) (u32) v1) = (u16) a3;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    (*(volatile u8 *) (u32) (v1 + 84)) = (u8) a0; return;
}
