/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017E240(s32);

s32 func_001A8CB0(s32 a0) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (a0 + 72));
    v0 = (*(volatile s32 *) (u32) (gp + -23220));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (gp + -23220)) = (u32) v0; v0 = func_0017E240(a0); return v0;
}
