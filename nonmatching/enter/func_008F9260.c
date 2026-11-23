/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_00311530(void);
void func_00325CE0(s32, s32, s32);
s32 func_003265F0(s32, s32);
s32 func_00335390(void);
s32 func_003414D0(s32, s32, s32, s32);
void func_008F87E0(s32, s32, s32, s32);
void func_008F8CD0(s32, s32, s32, s32);
void func_008F8F00(s32, s32, s32, s32);

s32 func_008F9260(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    a1 = 166;
    a2 = (s32) ((u32) sp + 0x60U);
    s3 = a0;
    s2 = (s32) ((u32) sp + 0x80U);
    a0 = s2;
    Pes6BitSet_Initialize(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 44));
    s1 = (*(volatile s32 *) (u32) (s3 + 60));
    s0 = v0 & 0x40; v0 = func_00335390();
    a2 = v0;
    a0 = s2;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = (s32) ((u32) sp + 0x98U);
    a1 = s1; func_00325CE0(a0, a1, a2);
    a0 = s1;
    a1 = 0; v0 = func_003265F0(a0, a1);
    a2 = v0;
    a0 = s2;
    a1 = 9; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 152));
    a0 = s2;
    a1 = 10;
    v0 = v0 < 5;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = 9; v0 = Pes6BitSet_Lookup(a0, a1);
    s4 = v0;
    a0 = s2;
    a1 = 10; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s4 | v0;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s2; goto L_008F9348; }
    v0 = func_00311530();
    v0 = v0 < 1;
    a2 = v0 ^ 0x1;
    a0 = s2;
L_008F9348:;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = s1;
    a2 = s0; func_008F8F00(a0, a1, a2, a3);
    a1 = s1;
    a2 = s0;
    a0 = s2; func_008F8CD0(a0, a1, a2, a3);
    a0 = s2;
    a1 = s3; func_008F87E0(a0, a1, a2, a3);
    a1 = s2;
    a0 = 161;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -20060)) = (u8) v0;
    a0 = s3; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
