/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002D5930(s32, s32, s32);
void func_00918570(s32);

s32 func_00917FC0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a0 = 0; func_00918570(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = 255;
    a2 = 15;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x10U); func_002D5930(a0, a1, a2);
    v0 = 1;
    return v0;
}
