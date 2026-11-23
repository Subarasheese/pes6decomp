/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030EA70(void);
s32 func_00326040(s32, s32);
s32 func_003336F0(s32);
s32 func_00333740(s32, s32);
s32 func_00335390(void);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0034CCD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 hi = 0, lo = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    a1 = 20;
    a2 = (s32) ((u32) sp + 0xc8U);
    s5 = (s32) ((u32) sp + 0xb0U);
    s0 = a0;
    a0 = s5; Pes6BitSet_Initialize(a0, a1, a2);
    s1 = (*(volatile s32 *) (u32) (s0 + 76));
    s3 = (*(volatile s32 *) (u32) (s0 + 64));
    v0 = (*(volatile u8 *) (u32) (s1 + 23));
    { s32 c_ = v0 != 0; fp = (*(volatile s32 *) (u32) (s0 + 72)); if (c_) goto L_0034CD30; }
    v0 = 0; goto L_0034CF5C;
L_0034CD30:;
    a0 = (s32) ((u32) sp + 0xcfU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = s3; v0 = func_00333740(a0, a1);
    s0 = v0; v0 = func_0030EA70();
    s6 = v0 & 0xff;
    a1 = (*(volatile u8 *) (u32) (s1 + 19));
    a0 = (*(volatile u8 *) (u32) (sp + 207));
    v0 = s0 < 14;
    v0 = v0 ^ 0x1;
    s2 = 0;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v1 = a1 ^ 0x1;
    s4 = a0 ^ a1;
    s7 = a0 ^ v1;
    v0 = 13;
    s4 = (u64) s4 < (u64) (s64) 1;
    { s32 c_ = s0 != v0; s7 = (u64) s7 < (u64) (s64) 1; if (c_) goto L_0034CDA8; }
    a0 = s3; v0 = func_003336F0(a0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_0034CDAC; }
    s2 = 1;
L_0034CDA8:;
    v0 = (*(volatile u8 *) (u32) (s1 + 19));
L_0034CDAC:;
    s3 = s0 < 13;
    s0 = s6 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) (v0 + 5));
    s6 = (s32) ((u32) s0 - (u32) v0); v0 = Pes6MatchContext_GetHalf();
    v1 = 1;
    if (v0 == v1) { v0 = 45; goto L_0034CDE4; }
    if (v0 == 0) goto L_0034CDE0;
    v0 = 15; goto L_0034CE00;
L_0034CDE0:;
    v0 = 45;
L_0034CDE4:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { v1 = 0; goto L_0034CE20; }
    v1 = 1; goto L_0034CE20;
L_0034CE00:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034CE1C;
    goto L_0034CE20;
L_0034CE1C:;
    v1 = 0;
L_0034CE20:;
    if (v1 != 0) { s0 = (*(volatile u8 *) (u32) (sp + 207)); goto L_0034CE30; }
    v0 = 0; goto L_0034CF5C;
L_0034CE30:;
    v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0; v0 = func_00335390();
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_0034CE64; }
    v0 = s6 < 5;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_0034CE60;
    a2 = s6 < 11;
L_0034CE60:;
    a0 = s5;
L_0034CE64:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = fp; v0 = func_00326040(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = s5;
    a1 = 5;
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = s5;
    a1 = 6;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 8;
    a2 = s4; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 9;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    a2 = s4;
    a0 = s5;
    a1 = 12; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 160));
    a0 = s5;
    a1 = 13; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 14;
    a2 = s3; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 15;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s5;
    a1 = 17; Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s5;
    a1 = 18; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s5;
    a1 = 19; Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 163;
    a2 = 1;
    (*(volatile u8 *) (u32) (s1 + 23)) = (u8) 0; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034CF5C:;
    return v0;
}
