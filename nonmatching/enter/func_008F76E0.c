/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);

s32 func_008F76E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a1 = 3;
    a2 = (s32) ((u32) sp + 0x5cU);
    s2 = a0;
    s1 = (s32) ((u32) sp + 0x40U);
    a0 = s1; Pes6BitSet_Initialize(a0, a1, a2);
    s0 = (*(volatile s32 *) (u32) (s2 + 60));
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = s2; goto L_008F7740; }
    a1 = s1;
    a0 = 89;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    if (v0 == 0) goto L_008F773C;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 16)) = (u8) v0;
L_008F773C:;
    a0 = s2;
L_008F7740:;
    Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
