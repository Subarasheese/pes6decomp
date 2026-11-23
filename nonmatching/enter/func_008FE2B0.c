/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_0022CD50(s32);
s32 func_003258F0(s32, s32);
s32 func_00325B10(s32);
s32 func_003414D0(s32, s32, s32, s32);
void func_008FB650(s32, s32);
void func_008FBA70(s32, s32);
void func_008FDF40(s32, s32, s32, s32);
void func_008FDFF0(s32, s32, s32, s32);

s32 func_008FE2B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a1 = 350;
    a2 = (s32) ((u32) sp + 0x60U);
    s3 = a0;
    s2 = (s32) ((u32) sp + 0x90U);
    a0 = s2;
    Pes6BitSet_Initialize(a0, a1, a2);
    s1 = (*(volatile s32 *) (u32) (s3 + 60));
    v0 = 4;
    a2 = 1;
    a0 = (*(volatile u8 *) (u32) (s1 + 15));
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    a0 = (u64) 0 < (u64) a0;
    { s32 c_ = v1 == v0; s0 = a0 ^ 0x1; if (c_) goto L_008FE314; }
    v0 = 5;
    if (v1 == v0) { a0 = s2; goto L_008FE318; }
    a2 = 0;
L_008FE314:;
    a0 = s2;
L_008FE318:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = 3;
    a2 = s0; Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s0;
    a0 = s2;
    s4 = v0 ^ 0x1;
    a1 = 4;
    a2 = s4; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0;
    a0 = s2;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    a2 = s4;
    a0 = s2;
    a1 = 6; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 52));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s2; goto L_008FE38C; }
    a0 = s1; v0 = func_00325B10(a0);
    a2 = (u64) 0 < (u64) v0;
    a0 = s2;
L_008FE38C:;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = s1; func_008FDFF0(a0, a1, a2, a3);
    a0 = s2;
    a1 = s1; func_008FDF40(a0, a1, a2, a3);
    a0 = s2;
    a1 = s1; func_008FBA70(a0, a1);
    a0 = s2;
    a1 = s1; func_008FB650(a0, a1);
    a0 = (s32) ((u32) sp + 0xafU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s1 + 48));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) goto L_008FE3F4;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
L_008FE3F4:;
    if (a2 != 0) goto L_008FE408;
    v0 = (*(volatile s32 *) (u32) (s1 + 52));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
L_008FE408:;
    if (a2 != 0) { a0 = s2; goto L_008FE42C; }
    a1 = (*(volatile u8 *) (u32) (sp + 175));
    a0 = s1; v0 = func_003258F0(a0, a1);
    a0 = v0 & 0xff; v0 = func_0022CD50(a0);
    a2 = (u64) 0 < (u64) v0;
    a0 = s2;
L_008FE42C:;
    a1 = 242; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 13));
    a2 = 1;
    v0 = v1 < 2;
    { s32 c_ = v0 != 0; a0 = 0; if (c_) goto L_008FE458; }
    v0 = 255;
    if (v1 == v0) goto L_008FE458;
    a0 = a2;
L_008FE458:;
    if (a0 != 0) { a0 = s2; goto L_008FE48C; }
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = 1;
    { s32 c_ = v1 == v0; a0 = 0; if (c_) goto L_008FE47C; }
    if (v1 == 0) goto L_008FE47C;
    a0 = v0;
L_008FE47C:;
    if (a0 != 0) goto L_008FE488;
    a2 = 0;
L_008FE488:;
    a0 = s2;
L_008FE48C:;
    a1 = 243; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 13));
    a2 = 1;
    v0 = v1 < 2;
    { s32 c_ = v0 != 0; a0 = 0; if (c_) goto L_008FE4B8; }
    v0 = 255;
    if (v1 == v0) goto L_008FE4B8;
    a0 = a2;
L_008FE4B8:;
    if (a0 != 0) { a0 = s2; goto L_008FE4EC; }
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = 1;
    { s32 c_ = v1 == v0; a0 = 0; if (c_) goto L_008FE4DC; }
    if (v1 == 0) goto L_008FE4DC;
    a0 = v0;
L_008FE4DC:;
    if (a0 != 0) goto L_008FE4E8;
    a2 = 0;
L_008FE4E8:;
    a0 = s2;
L_008FE4EC:;
    a1 = 246; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    a0 = s2;
    a1 = 249;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s1 + 15));
    a0 = s2;
    a1 = 250; Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 85;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s3; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
