/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030DAF0(s32);
s32 func_0030EA70(void);
void func_00310D50(s32, s32);
void func_003139A0(s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_0034BD60(s32, s32, s32, s32);

void func_0034AD50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_0030EA70();
    s4 = v0; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s4 & 0xff; goto L_0034ADA0; }
    if (v0 == 0) goto L_0034AD9C;
    v1 = s4 & 0xff; goto L_0034ADC0;
L_0034AD9C:;
    v1 = s4 & 0xff;
L_0034ADA0:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034ADE4; }
    a0 = 1; goto L_0034ADE4;
L_0034ADC0:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034ADE0;
    goto L_0034ADE4;
L_0034ADE0:;
    a0 = 0;
L_0034ADE4:;
    if (a0 != 0) { s1 = (*(volatile s32 *) (u32) (s0 + 80)); goto L_0034ADF4; }
    v0 = 0; goto L_0034B0E0;
L_0034ADF4:;
    s5 = (s32) ((u32) sp + 0x70U);
    a0 = s5;
    a1 = 12;
    s0 = (*(volatile s32 *) (u32) (s0 + 64));
    a2 = (s32) ((u32) sp + 0x98U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s0; v0 = func_00333740(a0, a1);
    s3 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 148)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 150)) = (u16) v0;
    a0 = (s32) ((u32) sp + 0x88U);
    a1 = 0; func_00310D50(a0, a1);
    a0 = (s32) ((u32) sp + 0x8cU);
    a1 = 1; func_00310D50(a0, a1);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a1 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 780));
    if (a0 == 0) { s0 = 0; goto L_0034AE94; }
    v1 = (*(volatile s32 *) (u32) (v0 + 788));
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    s0 = lo;
L_0034AE94:;
    v0 = (s32) ((u32) a1 + (u32) sp);
    a0 = s5;
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    a1 = 2;
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s5;
    a1 = 3;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = v0 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s5;
    a1 = 4;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = 100;
    v0 = (s32) ((u32) v0 - (u32) s0);
    v0 = v0 < 51;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s5; goto L_0034AF48; }
    a0 = s5;
    a1 = 2; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s5;
    a1 = 3; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = s0 | v0;
    a0 = s5;
    a1 = 4; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = v0 | s0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0034AF48:;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s5;
    a1 = 6;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s5;
    a1 = 7;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = v0 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s5;
    a1 = 8;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s5; goto L_0034B028; }
    a0 = s5;
    a1 = 6; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) goto L_0034B00C;
    a0 = s5;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
L_0034B00C:;
    if (a2 != 0) goto L_0034B024;
    a0 = s5;
    a1 = 8; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
L_0034B024:;
    a0 = s5;
L_0034B028:;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 5; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) goto L_0034B058;
    a0 = s5;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
L_0034B058:;
    if (a2 == 0) { a0 = s5; goto L_0034B088; }
    v1 = (*(volatile u8 *) (u32) (sp + 159));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7120));
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (*(volatile s32 *) (u32) (a0 + 780));
    a2 = v0 < v1;
    a2 = a2 ^ 0x1;
    a0 = s5;
L_0034B088:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    if (v0 == 0) { v0 = s2; goto L_0034B0E0; }
    s0 = (*(volatile u8 *) (u32) (sp + 159)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = s4;
    a0 = (*(volatile u8 *) (u32) (sp + 159));
    a2 = s3;
    a3 = (s32) ((u32) sp + 0x94U); v0 = func_0034BD60(a0, a1, a2, a3);
    if (v0 == 0) { a1 = s5; goto L_0034B0CC; }
    a0 = s5; func_003139A0(a0);
    a1 = s5;
L_0034B0CC:;
    a0 = 182;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    s2 = v0;
    v0 = s2;
L_0034B0E0:;
    return;
}
