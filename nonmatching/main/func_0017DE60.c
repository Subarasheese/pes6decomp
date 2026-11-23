/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001431D0(s32, s32, s32, s32);

void func_0017DE60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 - (u32) a1);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) 0x140000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) ((u32) v0 + 0x31d0U);
    a1 = (*(volatile s32 *) (u32) (v1 + 8));
    ; v0 = func_001431D0(a0, a1, a2, a3); return;
}
