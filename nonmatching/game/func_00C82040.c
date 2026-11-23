/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memmove(s32, s32, s32);

s32 func_00C82040(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) ((u32) a0 << 2);
    a2 = 16;
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffc200U);
    a0 = a1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) v0 + 0xd8U); v0 = memmove(a0, a1, a2); return v0;
}
