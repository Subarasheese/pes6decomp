/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0010A6E8(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0010A978(s32);
s32 func_0010AAF0(s32, s32, s32);
s32 func_0010AD30(s32, s32, s32);
s32 func_0017F560(s32, s32, s32);
void func_001803A0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_001802A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[72];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x140U);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 84));
    a2 = (s32) ((u32) sp + 0x40U); func_001803A0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) sp + 0x140U);
    a1 = 1; v0 = func_0010A6E8(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = v0;
    if (s1 < 0) goto L_00180354;
L_001802E0:;
    a0 = s1;
L_001802E4:;
    a1 = 0;
    a2 = 2; v0 = func_0010AAF0(a0, a1, a2);
    s2 = v0;
    if (v0 < 0) goto L_001802E0;
    a0 = s0;
    a1 = 0;
    a2 = s2; v0 = func_0017F560(a0, a1, a2);
L_0018030C:;
    a0 = s1;
    a1 = 0;
    a2 = 0; v0 = func_0010AAF0(a0, a1, a2);
    if (v0 < 0) goto L_0018030C;
L_00180328:;
    a1 = (*(volatile s32 *) (u32) (s0 + 96));
    a0 = s1;
    a2 = s2; v0 = func_0010AD30(a0, a1, a2);
    if (v0 < 0) goto L_00180328;
    a0 = s1; v0 = func_0010A978(a0);
    goto L_00180378;
L_00180354:;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 1; v0 = func_0010A6E8(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = v0;
    if (s1 < 0) goto L_00180354;
    a0 = s1; goto L_001802E4;
L_00180378:;
    return v0;
}
