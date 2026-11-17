/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6MatchContext_GetHalf(void);
s32 Pes6MatchStats_GetPossessionPercent(s32, s32);
s32 func_0030EFC0(s32, s32);
s32 func_00325FC0(s32, s32);
s32 func_00326070(s32);
s32 func_00333700(s32, s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0031D820(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    a0 = (s32) ((u32) sp + 0x90U);
    s4 = (*(volatile s32 *) (u32) (a1 + 68));
    s1 = (*(volatile s32 *) (u32) (a1 + 80));
    s3 = (*(volatile s32 *) (u32) (a1 + 76));
    s6 = (*(volatile s32 *) (u32) (a1 + 64));
    a1 = (s32) ((u32) sp + 0x94U); v0 = Pes6MatchStats_GetPossessionPercent(a0, a1);
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    s0 = (*(volatile u8 *) (u32) (sp + 159)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0; v0 = Pes6MatchContext_GetHalf();
    s2 = v0 & 0xff;
    a1 = 0;
    a0 = s2; v0 = func_0030EFC0(a0, a1);
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) v0;
    a0 = s2;
    a1 = 1; v0 = func_0030EFC0(a0, a1);
    a1 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s4;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) v0; v0 = func_00333740(a0, a1);
    s0 = v0;
    a0 = s5;
    v0 = s2 & 0xff;
    a1 = 91;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0xd;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 92; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s4; v0 = func_00333700(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 93; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 93; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a0 = s5;
    a2 = v0 ^ 0x1;
    a1 = 94; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3; v0 = func_00326070(a0);
    a2 = v0;
    a0 = s5;
    a1 = 95; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 5));
    a0 = s5;
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a1 = 96;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s5;
    v1 = (*(volatile u8 *) (u32) (s1 + 5));
    a1 = 97;
    v0 = v0 ^ 0x1;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 14));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0031D998; }
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s5;
L_0031D998:;
    a1 = 98; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 14));
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_0031D9BC; }
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0031D9BC:;
    a1 = 99; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 136));
    v0 = (u64) 0 < (u64) v0;
    if (v0 != 0) { a2 = v0 ^ 0x1; goto L_0031D9E0; }
    v0 = (*(volatile s32 *) (u32) (sp + 140));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
L_0031D9E0:;
    a0 = s5;
    a1 = 100; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (sp + 159));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_0031DA28; }
    v0 = v1 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    if (v0 == 0) { a0 = s5; goto L_0031DA2C; }
    a2 = 1;
L_0031DA28:;
    a0 = s5;
L_0031DA2C:;
    a1 = 101; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 159));
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 3);
    a2 = (s32) ((u32) v0 + (u32) s6);
    a0 = (*(volatile s32 *) (u32) (a2 + 16));
    v0 = (*(volatile s32 *) (u32) (a2 + 20));
    v1 = (*(volatile s32 *) (u32) (a2 + 28));
    a3 = (*(volatile s32 *) (u32) (a2 + 24));
    a0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (a2 + 32));
    v1 = (s32) ((u32) v1 + (u32) v0);
    at = v1 < a3;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_0031DA78; }
    v0 = a3; goto L_0031DA7C;
L_0031DA78:;
    v0 = v1;
L_0031DA7C:;
    at = v0 < a0;
    if (at == 0) { at = v1 < a3; goto L_0031DA90; }
    goto L_0031DA9C;
L_0031DA90:;
    if (at == 0) { a3 = v1; goto L_0031DA98; }
L_0031DA98:;
    a0 = a3;
L_0031DA9C:;
    if (v1 != a0) { a2 = s1; goto L_0031DAC4; }
    a0 = s3; v0 = func_00325FC0(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_0031DAC0;
    s1 = 1;
L_0031DAC0:;
    a2 = s1;
L_0031DAC4:;
    a0 = s5;
    a1 = 108; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 108; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 104; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a2 = 0;
    v1 = (s32) ((u32) v0 << 2);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (*(volatile s32 *) (u32) (v1 + 144));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 144));
    at = v0 < v1;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_0031DB2C; }
    v0 = v1 < 55;
    if (v0 != 0) goto L_0031DB2C;
    a0 = 1;
L_0031DB2C:;
    if (a0 == 0) { a0 = s5; goto L_0031DB4C; }
    v0 = s0 < 13;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_0031DB48;
    a2 = 1;
L_0031DB48:;
    a0 = s5;
L_0031DB4C:;
    a1 = 112; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return v0;
}
