/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0063B110(s32, s32, s32, s32, s32, s32);

void func_0063B0F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0;

    v0 = a0;
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    a2 = (*(volatile u8 *) (u32) (v0 + 2));
    a3 = (*(volatile u8 *) (u32) (v0 + 3));
    a4 = (*(volatile u8 *) (u32) (v0 + 4));
    a5 = (*(volatile u8 *) (u32) (v0 + 5));
    a0 = (*(volatile u8 *) (u32) a0); v0 = func_0063B110(a0, a1, a2, a3, a4, a5); return;
}
