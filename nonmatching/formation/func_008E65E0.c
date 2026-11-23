/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF460(s32, s32);
void func_001DF820(s32, s32, s32, s32);
s32 func_001F08B0(s32);

void func_008E65E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    (*(volatile u8 *) (u32) (a0 + 691)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 2532));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008E6638; }
    v1 = (*(volatile u8 *) (u32) (s0 + 691));
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc660U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a1 = v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 2532));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF820(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 2532));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) gp + 0xffff85e0U); func_001DF460(a0, a1);
L_008E6638:;
    return;
}
