/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001803A0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00181060(s32, s32, s32);
void func_00181120(s32);
s32 func_001811B0(s32, s32);

s32 func_00180230(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[38];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x30U);
    a2 = a1;
    func_001803A0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; v0 = func_001811B0(a0, a1);
    s1 = v0;
    if (s1 == 0) { v0 = 0; goto L_00180284; }
    a0 = s1;
    a1 = 0;
    a2 = 2; v0 = func_00181060(a0, a1, a2);
    s0 = v0;
    a0 = s1; func_00181120(a0);
    v0 = (s32) ((u32) s0 << 11);
L_00180284:;
    return v0;
}
