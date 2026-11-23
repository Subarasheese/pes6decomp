/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_006561B0(s32, s32, s32);

void func_00655E00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = a1;
    a0 = 0;
    a1 = (s32) ((u32) s1 + 0x2U);
    a2 = s0; func_006561B0(a0, a1, a2);
    v1 = (s32) 0x660000U;
    a4 = (*(volatile u8 *) (u32) s0);
    a3 = (*(volatile u8 *) (u32) (s0 + 1));
    a0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffee1cU);
    a2 = (*(volatile u8 *) (u32) (s0 + 2));
    a5 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile u8 *) (u32) (s0 + 3));
    v1 = (s32) 0x660000U;
    a0 = 1;
    v1 = (s32) ((u32) v1 + 0xffffee66U);
    (*(volatile u8 *) (u32) a5) = (u8) a4;
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u8 *) (u32) (a5 + 1)) = (u8) a3;
    (*(volatile u8 *) (u32) (a5 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) (a5 + 3)) = (u8) a1;
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    return;
}
