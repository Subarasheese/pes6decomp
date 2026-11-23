/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EF900(s32, s32);

s32 func_008B2920(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffab80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = a1 & 0xff; v0 = func_001EF900(a0, a1); return v0;
}
