/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C06C20(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = 2048;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + 492)) = (u32) v0;
    a1 = 3;
    a2 = (*(volatile s32 *) (u32) (a0 + 492));
    v0 = 1;
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) a2;
    v1 = (*(volatile u8 *) (u32) (v1 + 7756));
    if (v1 == 0) v0 = a1; return v0;
}
