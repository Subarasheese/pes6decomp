/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
s32 func_00326040(s32, s32);
s32 func_00335390(void);
s32 func_003414D0(s32, s32, s32, s32);
void func_003566D0(s32, s32, s32, s32);

s32 func_00355D00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a1 = 18;
    a2 = (s32) ((u32) sp + 0x68U);
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x40U); Pes6BitSet_Initialize(a0, a1, a2);
    s2 = (*(volatile s32 *) (u32) (s0 + 68));
    a0 = s0;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    a0 = v0 & 0xff; v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s1 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x6fU);
    a1 = 3;
    a2 = s1; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = s0;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x64U);
    a2 = 1; func_003566D0(a0, a1, a2, a3);
    v0 = func_00335390();
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    s1 = s1 & 0xff;
    a0 = s2;
    a1 = s1; v0 = func_00326040(a0, a1);
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 6; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 ^ 0;
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x1;
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 100));
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 16;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 100));
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 17;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = 152;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s0; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
