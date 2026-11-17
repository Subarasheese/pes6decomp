/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
s32 func_003139C0(s32, s32);
s32 func_00333600(s32);
s32 func_00338640(s32, s32);
s32 func_00338940(s32);
s32 func_003394E0(s32, s32, s32, s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00329BA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a1 = 9;
    a2 = (s32) ((u32) sp + 0x7cU);
    s3 = a0;
    s2 = (s32) ((u32) sp + 0x60U);
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    s1 = (*(volatile s32 *) (u32) (a0 + 72));
    a0 = s2; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 184));
    a0 = s2; v0 = func_003139C0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 80));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s2; goto L_00329C0C; }
    v0 = (*(volatile s32 *) (u32) (s0 + 76));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_00329C0C:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 185));
    a0 = s2;
    a1 = 1;
    v0 = v0 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 76));
    a0 = s2;
    a1 = 2;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 80));
    a0 = s2;
    a1 = 3;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 80));
    a0 = s2;
    a1 = 4;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 15;
    a1 = s2;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { a0 = s2; goto L_00329CE0; }
    a0 = 6; v0 = func_00333600(a0);
    if (v0 == 0) { a0 = 0; goto L_00329CAC; }
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0x1f; v0 = func_00338940(a0);
    a0 = 0;
L_00329CAC:;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_00329CDC;
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0x1e; v0 = func_00338940(a0);
    v0 = (s32) 0x80000000U;
    a1 = 50;
    a0 = v0 | 0x1e; v0 = func_00338640(a0, a1);
L_00329CDC:;
    a0 = s2;
L_00329CE0:;
    a1 = 3; v0 = Pes6BitSet_Lookup(a0, a1);
    s4 = v0;
    a0 = s2;
    a1 = 4; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s4 | v0;
    if (v0 == 0) { a0 = s3; goto L_00329D3C; }
    a0 = s2;
    a1 = 2; v0 = Pes6BitSet_Lookup(a0, a1);
    if (v0 == 0) goto L_00329D38;
    a0 = (*(volatile u8 *) (u32) (s0 + 120)); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) v0;
    a0 = s1;
    a2 = (*(volatile u8 *) (u32) (s0 + 13));
    a1 = 9;
    a3 = 2; v0 = func_003394E0(a0, a1, a2, a3);
L_00329D38:;
    a0 = s3;
L_00329D3C:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
