/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D4BE0(s32, s32, s32, s32);
s32 func_00305E50(s32);
s32 func_0090F4A0(s32, s32, s32, s32);

s32 func_002FEFC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff0ffU);
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + -3844));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 19;
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 3; goto L_002FF008; }
    v0 = func_0090F4A0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_002FF01C; }
    a0 = 3;
L_002FF008:;
    v0 = func_002D4BE0(a0, a1, a2, a3);
    a0 = s0; v0 = func_00305E50(a0);
    v0 = 1;
L_002FF01C:;
    return v0;
}
