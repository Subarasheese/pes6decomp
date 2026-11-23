/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memcpy(s32, s32, s32);

void func_00639DC0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 + 0xffff8930U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v0 << 1);
    a2 = 20;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffd0f0U);
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = memcpy(a0, a1, a2); return;
}
