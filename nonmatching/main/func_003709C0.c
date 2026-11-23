/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s64, s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64);
void Pes6Job_SetDone(s64);
s64 func_008FFA40(s64, s64, s64, s64);

s64 func_003709C0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    a1 = 6;
    a2 = (s32) ((u32) sp + 0x4cU);
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x30U); Pes6BitSet_Initialize(a0, a1, a2);
    v0 = func_008FFA40(a0, a1, a2, a3);
    s0 = (s64) ((u64) v0 << 56);
    a0 = (s32) ((u32) sp + 0x30U);
    s0 = s0 >> 56;
    a1 = 1;
    v0 = (u64) 0 < (u64) s0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    a0 = 106;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s1; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
