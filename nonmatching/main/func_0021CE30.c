/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memclr(s32, s32);

void func_0021CE30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a3;
    v1 = (*(volatile s16 *) (u32) (sp + 28));
    (*(volatile u32 *) (u32) a0) = (u32) a1;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) 0;
    a1 = 32;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) a2;
    v0 = (*(volatile s16 *) (u32) (sp + 30));
    (*(volatile u16 *) (u32) (a0 + 12)) = (u16) v1;
    (*(volatile u16 *) (u32) (a0 + 14)) = (u16) v0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) a4;
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 52)) = (u32) a5;
    (*(volatile u32 *) (u32) (a0 + 168)) = (u32) a6;
    (*(volatile u32 *) (u32) (a0 + 172)) = (u32) 0;
    a0 = (s32) ((u32) a0 + 0xb4U); memclr(a0, a1);
    return;
}
