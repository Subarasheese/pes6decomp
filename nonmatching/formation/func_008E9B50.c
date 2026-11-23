/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008EB260(s32, s32, s32, s32);
void func_008EB310(s32, s32, s32, s32);

void func_008E9B50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_008E9BA4; }
    a1 = s0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x4U);
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) s0; func_008EB310(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0e0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s1 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
L_008E9BA4:;
    return;
}
