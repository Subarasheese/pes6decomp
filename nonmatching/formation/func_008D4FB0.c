/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008B2FF0(s32);
void func_008D7F40(s32, s32, s32, s32, s32);

void func_008D4FB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_008D5000; }
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_008B2FF0(a0);
    a1 = v0 & 0xff;
    v1 = (*(volatile s32 *) (u32) (s0 + 244));
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    a0 = (s32) ((u32) s0 + 0x15cU);
    a3 = 0;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u8 *) (u32) (v0 + 65));
    a4 = 0; func_008D7F40(a0, a1, a2, a3, a4);
L_008D5000:;
    return;
}
