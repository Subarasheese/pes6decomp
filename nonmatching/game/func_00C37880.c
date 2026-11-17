/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C37880(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    a3 = (s32) ((u32) a0 + 0xffffffffU);
    a5 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a3 << 3);
    a4 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a3);
    a5 = (s32) ((u32) a5 + 0xffffb6fcU);
    v1 = (s32) ((u32) v1 << 2);
    a6 = 1;
    v1 = (s32) ((u32) v1 + (u32) a3);
    a4 = (s32) ((u32) a4 + 0xffffb700U);
    a7 = (s32) ((u32) v1 << 2);
    a3 = (s32) 0xcd0000U;
    a5 = (s32) ((u32) a5 + (u32) a7);
    a3 = (s32) ((u32) a3 + 0xffffb6feU);
    (*(volatile u8 *) (u32) a5) = (u8) a6;
    a4 = (s32) ((u32) a4 + (u32) a7);
    a5 = (*(volatile s32 *) (u32) a1);
    a3 = (s32) ((u32) a3 + (u32) a7);
    v1 = 255;
    a5 = (*(volatile u8 *) (u32) a5);
    (*(volatile u8 *) (u32) a4) = (u8) a5;
    (*(volatile u8 *) (u32) a3) = (u8) a2;
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 4)) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 5)) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 6)) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 7)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    (*(volatile u8 *) (u32) (v1 + 84)) = (u8) a0; return;
}
