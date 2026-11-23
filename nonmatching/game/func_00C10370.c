/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C10370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;

    a3 = a0 & 0xff;
    v1 = a1 & 0xff;
    a0 = (s32) ((u32) a3 << 6);
    a4 = (s32) 0xcc0000U;
    a1 = (s32) ((u32) a0 - (u32) a3);
    a4 = (s32) ((u32) a4 + 0xffffd8e0U);
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a3 = (s32) ((u32) a4 + (u32) a0);
    v1 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u16 *) (u32) v1) = (u16) a2;
    a2 = (*(volatile s16 *) (u32) (a3 + 2));
    a1 = (*(volatile s16 *) (u32) a3);
    a0 = (*(volatile s16 *) (u32) (a3 + 4));
    v1 = (*(volatile s16 *) (u32) (a3 + 6));
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (a3 + 8)) = (u16) v1; return v0;
}
