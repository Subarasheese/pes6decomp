/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002F7970(s32, s32, s32, s32);
void func_00361A20(s32, s32, s32, s32);
s32 func_0080B2E0(s32, s32, s32, s32);

void func_008FC570(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[54];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1; v0 = func_002F7970(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s1; goto L_008FC59C; }
    v0 = 1; goto L_008FC5D4;
L_008FC59C:;
    a1 = (s32) ((u32) sp + 0x30U); func_00361A20(a0, a1, a2, a3);
    if (s0 != 0) { a1 = s1; goto L_008FC5B8; }
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 67)) = (u8) v0;
    a1 = s1;
L_008FC5B8:;
    a0 = (s32) ((u32) sp + 0x30U);
    a2 = 1; v0 = func_0080B2E0(a0, a1, a2, a3);
    v1 = -1;
    if (v0 != v1) { v0 = 1; goto L_008FC5D4; }
    v0 = 0;
L_008FC5D4:;
    return;
}
