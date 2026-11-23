/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_008C4FB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = a0 & 0xff;
    a1 = 17;
    a0 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffcdc0U);
    v1 = (s32) ((u32) v0 + (u32) a0);
    a3 = (*(volatile s16 *) (u32) v1);
    v0 = (s32) 0x8f0000U;
    v1 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (v0 + 22464)) = (u16) a3;
    v1 = (s32) ((u32) v1 + 0xffffcdc2U);
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (v0 + 22468)) = (u16) a1;
    a2 = (*(volatile s16 *) (u32) v1);
    a0 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0x57c0U);
    v1 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (a0 + 22466)) = (u16) a2;
    (*(volatile u16 *) (u32) (v1 + 22470)) = (u16) a1; return v0;
}
