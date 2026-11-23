/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001C4698(s32, s32, s32);
void func_001F85A0(s32, s32);
void memcpy(s32, s32, s32);
s32 strcmp(s32, s32);

s32 func_00220890(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[34];
    s32 sp = (s32) (u32) frame;

    a2 = 12;
    s1 = a0;
    s0 = a1; v0 = func_001C4698(a0, a1, a2);
    if (v0 == 0) { a1 = (s32) ((u32) s1 + 0xcU); goto L_002208C0; }
    v0 = 0; goto L_00220914;
L_002208C0:;
    a0 = (s32) ((u32) sp + 0xd0U);
    a2 = 32; memcpy(a0, a1, a2);
    a1 = (s32) ((u32) s0 + 0xcU);
    a0 = (s32) ((u32) sp + 0x90U);
    a2 = 32; memcpy(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = (s32) ((u32) sp + 0x60U); func_001F85A0(a0, a1);
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) sp + 0x30U); func_001F85A0(a0, a1);
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) sp + 0x30U); v0 = strcmp(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { v0 = 1; goto L_00220914; }
    v0 = 0;
L_00220914:;
    return v0;
}
