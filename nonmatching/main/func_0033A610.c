/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
void Pes6MatchStats_GetPossessionPercent(s64, s64);
s64 func_0030DAF0(s64);
void func_003102A0(s64, s64, s64);
void func_00310340(s64, s64);
s64 func_00325C20(s64);
s64 func_00333600(s64);
s64 func_00333710(s64, s64);
s64 func_00333740(s64, s64);

void func_0033A610(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    a0 = s3;
    a1 = 0;
    v0 = Pes6Job_GetArg(a0, a1);
    s1 = (*(volatile s32 *) (u32) (s3 + 72));
    s2 = v0 & 0xff;
    s5 = (*(volatile s32 *) (u32) (s3 + 68));
    a1 = s2;
    a0 = s1; v0 = func_00333710(a0, a1);
    s0 = v0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7953));
    if (v0 == 0) { a0 = 22; goto L_0033A684; }
    v0 = 0; goto L_0033AAC8;
L_0033A684:;
    v0 = func_00333600(a0);
    if (v0 == 0) { a0 = s1; goto L_0033A69C; }
    v0 = 0; goto L_0033AAC8;
L_0033A69C:;
    a1 = s2; v0 = func_00333740(a0, a1);
    a0 = (*(volatile s32 *) (u32) s5);
    s1 = v0; v0 = func_00325C20(a0);
    if (v0 != 0) goto L_0033A6C0;
    v0 = 1; goto L_0033A6CC;
L_0033A6C0:;
    if (s1 != s0) { v0 = 0; goto L_0033A6CC; }
    v0 = 1;
L_0033A6CC:;
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0xb0U); goto L_0033A6DC; }
    v0 = 0; goto L_0033AAC8;
L_0033A6DC:;
    a1 = (s32) ((u32) sp + 0xb4U); Pes6MatchStats_GetPossessionPercent(a0, a1);
    v0 = s0 ^ 0xd;
    a0 = (s32) ((u32) sp + 0xbcU);
    fp = (u64) v0 < (u64) (s64) 1;
    a1 = 0;
    s5 = 0;
    s6 = 0;
    s7 = 0;
    s1 = 0; func_00310340(a0, a1);
    a0 = (s32) ((u32) sp + 0xbeU);
    a1 = 1; func_00310340(a0, a1);
    a0 = s3;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    a1 = 1;
    if (v0 == a1) { v0 = s1 | s5; goto L_0033A794; }
    a0 = s2 & 0xff;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v0 + 176));
    v0 = v1 < 55;
    if (v0 != 0) { at = v1 < 46; goto L_0033A754; }
    s5 = a1;
    s6 = a1; goto L_0033A764;
L_0033A754:;
    if (at == 0) { v0 = s2 ^ 0x1; goto L_0033A768; }
    s5 = a1;
    s7 = a1;
L_0033A764:;
    v0 = s2 ^ 0x1;
L_0033A768:;
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v1 + 188));
    v0 = (*(volatile s16 *) (u32) (v0 + 188));
    at = v0 < v1;
    if (at == 0) goto L_0033A790;
    s1 = 1;
L_0033A790:;
    v0 = s1 | s5;
L_0033A794:;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_0033A7B0; }
    v0 = (*(volatile u8 *) (u32) (gp + -21536));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_0033A7B0:;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (gp + -21292));
    a0 = s4;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s1;
    if (a2 != 0) { a0 = s4; goto L_0033A7DC; }
    a2 = (u64) 0 < (u64) s5;
    a0 = s4;
L_0033A7DC:;
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    a2 = s5;
    a0 = s4;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 14;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 6; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 7;
    a2 = s6; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 17;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s4; goto L_0033A830; }
    a2 = (u64) 0 < (u64) s1;
    a0 = s4;
L_0033A830:;
    a1 = 11; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 12;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 < 13;
    a0 = s4;
    a1 = 15; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 16;
    a2 = s6; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 19;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    a2 = fp;
    a0 = s4;
    a1 = 22; Pes6BitSet_Write(a0, a1, a2);
    a2 = s6;
    a0 = s4;
    a1 = 23; Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s4;
    a1 = 26; Pes6BitSet_Write(a0, a1, a2);
    a0 = 0; v0 = func_0030DAF0(a0);
    a0 = (s32) ((u32) sp + 0xa8U);
    a1 = s2;
    a2 = 0; func_003102A0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xaaU);
    a1 = s2;
    a2 = 1; func_003102A0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xacU);
    a1 = s2;
    a2 = 2; func_003102A0(a0, a1, a2);
    a1 = s2;
    a0 = (s32) ((u32) sp + 0xaeU);
    a2 = 3; func_003102A0(a0, a1, a2);
    a1 = (*(volatile s16 *) (u32) (sp + 168));
    a3 = (*(volatile s16 *) (u32) (sp + 170));
    at = a3 < a1;
    { s32 c_ = at == 0; a0 = a1; if (c_) goto L_0033A90C; }
    v0 = a1; goto L_0033A910;
L_0033A90C:;
    v0 = a3;
L_0033A910:;
    a2 = (*(volatile s16 *) (u32) (sp + 172));
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    at = a2 < v0;
    if (at == 0) { v0 = a2; goto L_0033A938; }
    at = a3 < a0;
    if (at == 0) { v0 = a3; goto L_0033A938; }
    v0 = a1;
L_0033A938:;
    v1 = (s64) ((u64) v0 << 48);
    v0 = (*(volatile s16 *) (u32) (sp + 174));
    v1 = v1 >> 48;
    at = v0 < v1;
    if (at == 0) { a1 = v0; goto L_0033A980; }
    at = a3 < a0;
    if (at == 0) { v0 = a3; goto L_0033A960; }
    v0 = a1;
L_0033A960:;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    at = a2 < v0;
    if (at == 0) { a1 = a2; goto L_0033A980; }
    at = a3 < a0;
    if (at == 0) { a1 = a3; goto L_0033A980; }
L_0033A980:;
    v0 = (s64) ((u64) a1 << 48);
    v0 = v0 >> 48;
    if (a0 != v0) goto L_0033A998;
    s2 = 0; goto L_0033A9B4;
L_0033A998:;
    if (a3 != v0) goto L_0033A9A8;
    s2 = 1; goto L_0033A9B4;
L_0033A9A8:;
    if (a2 != v0) { s2 = 3; goto L_0033A9B4; }
    s2 = 2;
L_0033A9B4:;
    a2 = s1;
    a0 = s4;
    a1 = 29; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 14;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 30; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2 ^ 0;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 33; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 34; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 35; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 36; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 < 13;
    a0 = s4;
    a1 = 38; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2 ^ 0;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 43; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 44; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0xd;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 49; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2 ^ 0;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 52; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 53; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 54; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 55; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
L_0033AAC8:;
    return;
}
