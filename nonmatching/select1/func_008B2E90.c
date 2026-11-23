/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0020E310(s32, s32);

void func_008B2E90(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0;
    a0 = a1;
    a1 = (s32) ((u32) gp + 0xffffb080U); func_0020E310(a0, a1);
    a2 = (*(volatile u8 *) (u32) (gp + -20352));
    a1 = (*(volatile u8 *) (u32) (gp + -20351));
    a0 = (*(volatile u8 *) (u32) (gp + -20350));
    v1 = (*(volatile u8 *) (u32) (gp + -20349));
    (*(volatile u8 *) (u32) s0) = (u8) a2;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    return;
}
