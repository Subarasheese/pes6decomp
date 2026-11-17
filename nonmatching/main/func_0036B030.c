/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_00369800(s32, s32, s32, s32);
s32 func_00369CF0(s32, s32, s32);
s32 func_00369EF0(s32, s32);
s32 func_0036A230(s32, s32);
s32 func_0036A5D0(s32, s32, s32);
s32 func_0036A9B0(s32, s32, s32, s32);

s32 func_0036B030(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 227;
    a2 = (s32) ((u32) sp + 0x50U);
    s3 = a0;
    s2 = (s32) ((u32) sp + 0x70U);
    a0 = s2;
    v0 = Pes6BitSet_Initialize(a0, a1, a2);
    s1 = (*(volatile s32 *) (u32) (s3 + 60));
    a0 = s2;
    a1 = 0;
    a2 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = s1; v0 = func_0036A9B0(a0, a1, a2, a3);
    a0 = s2;
    a1 = s1; v0 = func_0036A5D0(a0, a1, a2);
    a0 = s2;
    a1 = s1; v0 = func_00369CF0(a0, a1, a2);
    a0 = s2;
    a1 = s1; v0 = func_0036A230(a0, a1);
    a0 = s2;
    a1 = s1; v0 = func_00369EF0(a0, a1);
    a0 = s2;
    a1 = 95; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) goto L_0036B0D8;
    a0 = s2;
    a1 = 128; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
L_0036B0D8:;
    if (a2 != 0) { a0 = s2; goto L_0036B0F4; }
    a0 = s2;
    a1 = 138; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
    a0 = s2;
L_0036B0F4:;
    a1 = 93; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = 179; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s2;
    a1 = 93; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 | v0;
    a0 = s2;
    a1 = 91; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = s2; v0 = func_00369800(a0, a1, a2, a3);
    a1 = s2;
    a0 = 147;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s3; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
