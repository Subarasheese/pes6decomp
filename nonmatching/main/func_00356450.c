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
s32 func_003395B0(s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_003566D0(s32, s32, s32, s32);
s32 func_00356790(s32, s32, s32, s32);
s32 func_00BEBDA0(s32, s32, s32, s32);
s32 func_00BF6270(s32, s32, s32, s32);

s32 func_00356450(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    a0 = (s32) ((u32) sp + 0x94U);
    v0 = func_00356790(a0, a1, a2, a3);
    v0 = func_00BF6270(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = s0;
    a2 = 1; v0 = func_003566D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (sp + 148));
    s3 = (s32) ((u32) sp + 0x70U);
    s5 = (*(volatile s32 *) (u32) (s4 + 64));
    a0 = s3;
    a1 = 15;
    a2 = (s32) ((u32) sp + 0x98U);
    v1 = v0 ^ 0x2;
    v0 = v0 ^ 0x1;
    s2 = (u64) v1 < (u64) (s64) 1;
    s1 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a0 = s3;
    a1 = s0; v0 = func_003139C0(a0, a1);
    v0 = s0 & 0xff;
    a0 = s3;
    v0 = v0 ^ 0xff;
    a1 = 0;
    a2 = (u64) 0 < (u64) v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 144));
    a0 = s3;
    a1 = 2;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 3;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 4;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 144));
    a0 = s3;
    a1 = 5;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 6;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 7;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 144));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    at = (u64) v0 < (u64) (s64) 5;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_00356594; }
    v1 = 1;
    v0 = (s32) ((u32) v1 << (v0 & 31));
    v0 = v0 & 0x19;
    if (v0 == 0) { a0 = s3; goto L_00356598; }
    a2 = v1;
L_00356594:;
    a0 = s3;
L_00356598:;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s3;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s3;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 13; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a0 = s3;
    a2 = v0 ^ 0x1;
    a1 = 11; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s0; v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    v1 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s3;
    a1 = 12;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 144));
    a0 = s3;
    a1 = 13;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 144));
    v0 = 5;
    s0 = 0;
    { s32 c_ = v1 == v0; a0 = 1; if (c_) goto L_0035663C; }
    v0 = 4;
    if (v1 == v0) goto L_0035663C;
    a0 = 0;
L_0035663C:;
    if (a0 == 0) { a2 = s0; goto L_0035665C; }
    v0 = func_00BEBDA0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00356658;
    s0 = 1;
L_00356658:;
    a2 = s0;
L_0035665C:;
    a0 = s3;
    a1 = 14; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 149;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 != 0) { a0 = s4; goto L_003566A0; }
    v0 = 1;
    a0 = s5;
    (*(volatile u8 *) (u32) (gp + -21464)) = (u8) v0; v0 = func_003395B0(a0);
    (*(volatile u32 *) (u32) (gp + -21460)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 144));
    (*(volatile u32 *) (u32) (gp + -21476)) = (u32) v0;
    a0 = s4;
L_003566A0:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
