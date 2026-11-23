/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008D32D0(s32, s32, s32, s32);

void func_008B6E60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 11));
    v0 = (s32) ((u32) v0 + (u32) a0);
    a1 = (*(volatile u8 *) (u32) (v0 + 12));
    a0 = (s32) ((u32) a0 + 0x1ca8U); v0 = func_008D32D0(a0, a1, a2, a3); return;
}
