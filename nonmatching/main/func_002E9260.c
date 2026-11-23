/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002E9260(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;

    a4 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a2 << 2);
    a4 = (s32) ((u32) a4 + (u32) a1);
    a2 = (s32) 0x5f0000U;
    a4 = (s32) ((u32) a4 << 1);
    a2 = (s32) ((u32) a2 + 0xffff9140U);
    a1 = (s32) ((u32) a4 + (u32) a1);
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a3; return v0;
}
