/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0021DBB0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) a0;
    a1 = (*(volatile s16 *) (u32) (sp + 14));
    a0 = (s32) 0x540000U;
    a2 = (*(volatile s16 *) (u32) (sp + 12));
    (*(volatile u16 *) (u32) (v1 + -32222)) = (u16) a1;
    (*(volatile u16 *) (u32) (a0 + -32224)) = (u16) a2;
    return v0;
}
