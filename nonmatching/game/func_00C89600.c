/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE4F0(s32, s32);

s32 func_00C89600(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce4cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x1fU);
    (*(volatile u8 *) (u32) (sp + 31)) = (u8) 0; func_001EE4F0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (sp + 31));
    return v0;
}
