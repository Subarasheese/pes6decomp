/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008D7050(s32, s32, s32);

void func_008D5680(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a3 = 0;
    a2 = (s32) ((u32) sp + 0x10U);
    v1 = 1;
L_008D5694:;
    (*(volatile u8 *) (u32) a2) = (u8) v1;
    a3 = (s32) ((u32) a3 + 0x5U);
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v1;
    v0 = a3 < 6;
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (a2 + 4)) = (u8) v1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x5U); if (c_) goto L_008D5694; }
    v0 = (s32) ((u32) a3 + (u32) sp);
    a0 = (s32) ((u32) a0 + 0x15cU);
    (*(volatile u8 *) (u32) (v0 + 16)) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x1U);
    a2 = (s32) ((u32) sp + 0x10U); func_008D7050(a0, a1, a2);
    return;
}
