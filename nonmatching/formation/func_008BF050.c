/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0028C300(s32);

void func_008BF050(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x7d6U); v0 = func_0028C300(a0); return;
}
