/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 Pes6MatchContext_GetHalf(void);
void func_003139F0(s32, s32);
s32 func_003197C0(s32, s32);
void func_0031D820(s32, s32, s32, s32);
void func_0031DB80(s32, s32, s32, s32);
s32 func_003336F0(s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0031E8A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 172;
    a2 = (s32) ((u32) sp + 0x50U);
    s2 = a0;
    s1 = (s32) ((u32) sp + 0x70U);
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = s1; Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 96));
    a0 = s1; func_003139F0(a0, a1);
    a0 = s1;
    a1 = s2; func_0031DB80(a0, a1, a2, a3);
    a0 = s1;
    a1 = s2; func_0031D820(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (s2 + 80));
    a0 = (s32) ((u32) sp + 0x8fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    v0 = Pes6MatchContext_GetHalf();
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s1; goto L_0031E934; }
    v0 = (*(volatile u8 *) (u32) (s0 + 6));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s1;
L_0031E934:;
    a1 = 142; Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 5));
    a0 = s0; v0 = func_003197C0(a0, a1);
    v0 = v0 < 70;
    a0 = s1;
    a2 = v0 ^ 0x1;
    a1 = 143; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 143; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a0 = s1;
    a2 = v0 ^ 0x1;
    a1 = 167; Pes6BitSet_Write(a0, a1, a2);
    s3 = (*(volatile s32 *) (u32) (s2 + 68));
    a0 = (s32) ((u32) sp + 0x8eU);
    s0 = (*(volatile s32 *) (u32) (s2 + 80));
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    v0 = Pes6MatchContext_GetHalf();
    v0 = v0 ^ 0x3;
    a0 = s1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 153; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3; v0 = func_003336F0(a0);
    a2 = v0;
    a0 = s1;
    a1 = 154; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 154; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a0 = s1;
    a2 = v0 ^ 0x1;
    a1 = 155; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 14));
    a0 = s1;
    v0 = (*(volatile u8 *) (u32) (s0 + 15));
    a1 = 156;
    v0 = v1 | v0;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 14));
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s1; goto L_0031EA24; }
    v0 = (*(volatile u8 *) (u32) (s0 + 15));
    a2 = (u64) 0 < (u64) v0;
    a0 = s1;
L_0031EA24:;
    a1 = 157; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 155; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = 156; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 & v0;
    a0 = s1;
    a1 = 170; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 155; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = 157; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 & v0;
    a0 = s1;
    a1 = 171; Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 173;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s2; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
