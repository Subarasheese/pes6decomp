/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 strcpy(s32, s32);

void func_00639C60(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffd0f0U);
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = strcpy(a0, a1); return;
}
