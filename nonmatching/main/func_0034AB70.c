/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030DAF0(s32);
s32 func_0030EA70(void);
void func_003139A0(s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_0034BD60(s32, s32, s32, s32);

s32 func_0034AB70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s2 = 0;
    s1 = a0;
    v0 = func_0030EA70();
    s3 = v0; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s3 & 0xff; goto L_0034ABC0; }
    if (v0 == 0) goto L_0034ABBC;
    v1 = s3 & 0xff; goto L_0034ABE0;
L_0034ABBC:;
    v1 = s3 & 0xff;
L_0034ABC0:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034AC04; }
    a0 = 1; goto L_0034AC04;
L_0034ABE0:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034AC00;
    goto L_0034AC04;
L_0034AC00:;
    a0 = 0;
L_0034AC04:;
    if (a0 != 0) { s0 = (*(volatile s32 *) (u32) (s1 + 80)); goto L_0034AC14; }
    v0 = 0; goto L_0034AD28;
L_0034AC14:;
    s4 = (s32) ((u32) sp + 0x60U);
    a0 = s4;
    a1 = 4;
    s1 = (*(volatile s32 *) (u32) (s1 + 64));
    a2 = (s32) ((u32) sp + 0x88U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x8fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s1; v0 = func_00333740(a0, a1);
    s1 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 132)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 134)) = (u16) v0;
    at = s1 < 13;
    { s32 c_ = at == 0; v0 = (*(volatile u8 *) (u32) (sp + 143)); if (c_) goto L_0034AC78; }
    a2 = 0; goto L_0034ACCC;
L_0034AC78:;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s16 *) (u32) (v1 + 84));
    v0 = v0 < 2;
    if (v0 != 0) { a2 = 0; goto L_0034ACCC; }
    v0 = (*(volatile s16 *) (u32) (v1 + 88));
    v0 = v0 < 2;
    if (v0 != 0) goto L_0034ACC8;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 92));
    v0 = (*(volatile u8 *) (u32) (v0 + 7120));
    v0 = (s32) ((u32) v0 << 1);
    v0 = v1 < v0;
    if (v0 != 0) goto L_0034ACC8;
    a2 = 1; goto L_0034ACCC;
L_0034ACC8:;
    a2 = 0;
L_0034ACCC:;
    a0 = s4;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    if (v0 == 0) { v0 = s2; goto L_0034AD28; }
    s0 = (*(volatile u8 *) (u32) (sp + 143)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = s3;
    a0 = (*(volatile u8 *) (u32) (sp + 143));
    a2 = s1;
    a3 = (s32) ((u32) sp + 0x84U); v0 = func_0034BD60(a0, a1, a2, a3);
    if (v0 == 0) { a1 = s4; goto L_0034AD14; }
    a0 = s4; func_003139A0(a0);
    a1 = s4;
L_0034AD14:;
    a0 = 183;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    s2 = v0;
    v0 = s2;
L_0034AD28:;
    return v0;
}
