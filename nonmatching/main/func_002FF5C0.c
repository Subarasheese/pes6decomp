/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00305E60(s32, s32);

s32 func_002FF5C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x300000U;
    v0 = (s32) 0x300000U;
    a5 = (*(volatile s32 *) (u32) (a0 + 24));
    a1 = (s32) 0x300000U;
    a4 = 1;
    a3 = (s32) ((u32) gp + 0xffff8300U);
    a2 = (s32) ((u32) gp + 0xffff8304U);
    v1 = (s32) ((u32) v1 + 0xffffe420U);
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffffe410U);
    (*(volatile u32 *) (u32) a5) = (u32) a4;
    a1 = (s32) ((u32) a1 + 0xfffff570U);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) a4;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) a2;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v0 = 1;
    return v0;
}
