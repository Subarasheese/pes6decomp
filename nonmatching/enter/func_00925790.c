/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
s32 func_001F08B0(s32);

s32 func_00925790(s32 a0) {
    s32 v0 = 0, v1 = 0;

    a0 = 0; v0 = func_001CDA50(a0);
    a0 = (s32) ((u32) v0 << 1);
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffffecf8U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    return v0;
}
