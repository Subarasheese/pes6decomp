/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
s32 func_003264D0(s32, s32, s32);
s32 func_00326B70(s32, s32, s32);

s32 func_003644F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 6;
    a2 = (s32) ((u32) sp + 0x48U);
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s0 + 14)); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    a1 = (*(volatile s32 *) (u32) (s0 + 20));
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x44U); v0 = func_003264D0(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s0 + 20));
    a2 = (*(volatile u8 *) (u32) (s0 + 14));
    a0 = (s32) ((u32) sp + 0x4eU); v0 = func_00326B70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 68));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 0;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 1;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 2;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 3;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 4;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = 5;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 172;
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 2; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { v0 = 1; goto L_003645E4; }
    v0 = 3;
L_003645E4:;
    return v0;
}
