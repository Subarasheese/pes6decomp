/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_00311390(s32);
void func_003139B0(s32, s32);
void func_00313A00(s32, s32);
s32 func_00326F70(s32, s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
void func_008F73B0(s32, s32);
s32 func_0090F200(s32);

s32 func_008F7430(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 2;
    a2 = 255;
    s4 = a0;
    a0 = (s32) ((u32) sp + 0x8fU);
    v0 = func_003414D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x84U);
    a1 = (s32) ((u32) sp + 0x8eU); func_008F73B0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 132));
    v0 = 6;
    if (v1 == v0) { a0 = s4; goto L_008F76A8; }
    s3 = (s32) ((u32) sp + 0x60U);
    s2 = (*(volatile s32 *) (u32) (s4 + 60));
    a0 = s3;
    a1 = 26;
    a2 = (s32) ((u32) sp + 0x88U); Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 142));
    a0 = s3; func_00313A00(a0, a1);
    a0 = s3;
    a1 = s2; func_003139B0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (sp + 142)); v0 = func_0090F200(a0);
    a0 = 2;
    if (v0 == a0) { s0 = 3; goto L_008F74D4; }
    v1 = 1;
    if (v0 == v1) { s0 = a0; goto L_008F74D4; }
    if (v0 == 0) { s0 = v1; goto L_008F74D4; }
L_008F74D4:;
    a1 = (*(volatile u8 *) (u32) (sp + 142));
    a0 = s2;
    a2 = 1024; v0 = func_00326F70(a0, a1, a2);
    s1 = v0;
    a0 = s3;
    v0 = s0 ^ 0x2;
    a1 = 2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 3; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 2; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s3;
    a1 = 3; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 | v0;
    a0 = s3;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 5;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s3;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 9;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s3;
    a1 = 14;
    v0 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 84));
    v0 = v0 < 5;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 16;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 20;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 23;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 5; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s3;
    a1 = 9; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = s0 | v0;
    a0 = s3;
    a1 = 16; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s3;
    a1 = 20; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s3;
    a1 = 23; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 | s0;
    a0 = s3;
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s3;
    a1 = 4; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s0 & v0;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s3; goto L_008F7688; }
    a0 = (*(volatile u8 *) (u32) (sp + 142)); v0 = func_00311390(a0);
    a2 = (u64) 0 < (u64) v0;
    a0 = s3;
L_008F7688:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 137;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -20072)) = (u8) v0;
    a0 = s4;
L_008F76A8:;
    Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
