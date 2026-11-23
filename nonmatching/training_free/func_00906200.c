/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00905F20(s32, s32, s32, s32);

void func_00906200(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) ((u32) sp + 0x10U); func_00905F20(a0, a1, a2, a3);
    return;
}
