/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008BF530(s32, s32, s32, s32, s32);

void func_008BFA70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0;

    v0 = a2;
    a4 = a3;
    a2 = (s32) ((u32) a1 + 0x34U);
    a1 = (*(volatile u16 *) (u32) a1);
    a3 = v0; v0 = func_008BF530(a0, a1, a2, a3, a4); return;
}
