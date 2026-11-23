/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0064E3C0(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v0 = a0 & 0xff;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffe640U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -6560)) = (u32) v0; return;
}
