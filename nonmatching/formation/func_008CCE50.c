/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008D0430(s32, s32, s32, s32);

void func_008CCE50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;

    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a1;
    a0 = (s32) ((u32) a0 + 0x480U); v0 = func_008D0430(a0, a1, a2, a3); return;
}
