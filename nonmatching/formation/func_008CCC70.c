/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008D87E0(s32, s32, s32);
void func_008D8AA0(s32, s32, s32, s32);

void func_008CCC70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = 8;
    s1 = a0;
    (*(volatile u8 *) (u32) (a0 + 26)) = (u8) v0;
    s0 = 0;
    (*(volatile u8 *) (u32) (a0 + 27)) = (u8) v0;
    a0 = s0 & 0xff;
L_008CCC98:;
    a2 = 1;
    v0 = (s32) ((u32) s1 + (u32) a0);
    v1 = (s32) ((u32) v0 + 0x1cU);
    v0 = (*(volatile u8 *) (u32) (v0 + 28));
    if (v0 == a2) goto L_008CCCD0;
    (*(volatile u8 *) (u32) v1) = (u8) a2;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) s1 + 0x6b4U); func_008D87E0(a0, a1, a2);
L_008CCCD0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    if (v0 != 0) { a0 = s0 & 0xff; goto L_008CCC98; }
    a0 = (s32) ((u32) s1 + 0x6b4U); func_008D8AA0(a0, a1, a2, a3);
    return;
}
