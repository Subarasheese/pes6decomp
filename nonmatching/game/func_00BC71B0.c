/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BC71E0(s32, s32, s32, s32, s32, s32);

s32 func_00BC71B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a3 = 90;
    a1 = (*(volatile u8 *) (u32) (v1 + 9985));
    a4 = 0;
    a2 = (*(volatile u8 *) (u32) (v0 + 9400));
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5); return v0;
}
