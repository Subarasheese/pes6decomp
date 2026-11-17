/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memcpy(s32, s32, s32);

void func_00C127F0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xfffffaa0U);
    v0 = (s32) ((u32) v0 + 0xffffacc4U);
    s0 = a0;
    a0 = (*(volatile u16 *) (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (s32) ((u32) v1 + 0x4e20U);
    v1 = (*(volatile u8 *) (u32) (v1 + 20000));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u8 *) (u32) v0);
    a0 = s1; memcpy(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) s1);
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s1 + 1));
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    return;
}
