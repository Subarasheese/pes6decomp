/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_00335390(void);

s32 func_008F93C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a1 = 3;
    a2 = (s32) ((u32) sp + 0x3cU);
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U); Pes6BitSet_Initialize(a0, a1, a2);
    v0 = func_00335390();
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a0 = 160;
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s0; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
