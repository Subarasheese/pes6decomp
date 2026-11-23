/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008EB260(s32, s32, s32, s32);
void func_008EB290(s32, s32, s32, s32);
void func_008EB2D0(s32, s32, s32, s32);
void func_008EB310(s32, s32, s32, s32);

void func_008E9AB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_008E9B40; }
    if (a1 != 0) { v0 = (*(volatile u8 *) (u32) (a1 + 1996)); goto L_008E9ADC; }
    goto L_008E9B3C;
    v0 = (*(volatile u8 *) (u32) (a1 + 1996));
L_008E9ADC:;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (a1 + 1997));
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (a1 + 1998));
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 1));
    a0 = (s32) ((u32) s0 + 0x4U); func_008EB310(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 2));
    a0 = (s32) ((u32) s0 + 0x4U); func_008EB2D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 3));
    a0 = (s32) ((u32) s0 + 0x4U); func_008EB290(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0f8U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
L_008E9B3C:;
L_008E9B40:;
    return;
}
