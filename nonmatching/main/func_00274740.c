/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00274760(s32, s32, s32);

s32 func_00274740(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    a1 = (*(volatile u8 *) (u32) (a0 + 17));
    a2 = v0 ^ 0;
    a0 = (*(volatile u8 *) (u32) (a0 + 18));
    a2 = (u64) a2 < (u64) (s64) 1; v0 = func_00274760(a0, a1, a2); return v0;
}
