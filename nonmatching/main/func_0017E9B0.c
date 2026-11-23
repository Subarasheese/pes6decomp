/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0010A6E8(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0010A978(s32);
s32 func_0010AAF0(s32, s32, s32);
s32 func_0010AD30(s32, s32, s32);

s32 func_0017E9B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) a0 + 0xffffca30U);
    a1 = 1;
    a2 = 511;
    v0 = func_0010A6E8(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = v0;
    a1 = 0;
    a0 = s0;
    a2 = 2; v0 = func_0010AAF0(a0, a1, a2);
    s1 = v0;
    a0 = s0;
    a1 = 0;
    a2 = 0; v0 = func_0010AAF0(a0, a1, a2);
    a0 = (s32) 0x3e0000U;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0x7338U);
    v1 = (s32) ((u32) v1 + 0x7300U);
    v1 = (s32) ((u32) a0 - (u32) v1);
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 >> 2);
    v0 = (s32) ((u32) v0 + 0x72fcU);
    v1 = (s32) ((u32) v1 << 2);
    a2 = s1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = s0;
    a1 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (gp + -23308)) = (u32) a1; v0 = func_0010AD30(a0, a1, a2);
    a0 = s0; v0 = func_0010A978(a0);
    return v0;
}
