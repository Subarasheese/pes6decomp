/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F4570(s32, s32);
s32 func_00268DC0(s32);

void func_002687E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xffff9970U);
    v1 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffff9fU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00268DC0(a0);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_001F4570(a0, a1);
    return;
}
