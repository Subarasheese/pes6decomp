/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
void func_0030D5B0(s32, s32, s32, s32, s32);
void func_0030D600(s32, s32, s32, s32, s32);
s32 func_0030DAF0(s32);
s32 func_0030EA70(void);
void func_00310E70(s32, s32);
void func_003139A0(s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_0034BD60(s32, s32, s32, s32);

s32 func_0034B810(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 hi = 0, lo = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) 0; v0 = func_0030EA70();
    s4 = v0; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s4 & 0xff; goto L_0034B870; }
    if (v0 == 0) goto L_0034B86C;
    v1 = s4 & 0xff; goto L_0034B890;
L_0034B86C:;
    v1 = s4 & 0xff;
L_0034B870:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034B8B4; }
    a0 = 1; goto L_0034B8B4;
L_0034B890:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034B8B0;
    goto L_0034B8B4;
L_0034B8B0:;
    a0 = 0;
L_0034B8B4:;
    if (a0 != 0) { s5 = (s32) ((u32) sp + 0xb0U); goto L_0034B8C4; }
    v0 = 0; goto L_0034BB20;
L_0034B8C4:;
    s0 = (*(volatile s32 *) (u32) (s0 + 64));
    a0 = s5;
    a1 = 16;
    a2 = (s32) ((u32) sp + 0xd8U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xdfU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 223));
    a0 = s0; v0 = func_00333740(a0, a1);
    s3 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 212)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 214)) = (u16) v0;
    fp = s3 < 13;
    v0 = s3 < 14;
    s6 = (*(volatile u8 *) (u32) (sp + 223));
    s2 = v0 ^ 0x1;
    v0 = s3 ^ 0xd;
    s1 = (u64) v0 < (u64) (s64) 1; v0 = func_0030EA70();
    s0 = v0 & 0xff;
    a4 = (s32) 0x350000U;
    s7 = (s32) ((u32) s0 + 0xffffffecU);
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = s0;
    a2 = s7 & 0xff;
    a3 = s6;
    a4 = (s32) ((u32) a4 + 0xffffab40U); func_0030D600(a0, a1, a2, a3, a4);
    a4 = (s32) 0x350000U;
    a2 = s7 & 0xff;
    a1 = s0;
    a3 = s6;
    a0 = (s32) ((u32) sp + 0xc8U);
    a4 = (s32) ((u32) a4 + 0xffffaaf0U); func_0030D5B0(a0, a1, a2, a3, a4);
    v1 = (*(volatile s32 *) (u32) (sp + 200));
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    at = v1 < v0;
    if (at == 0) goto L_0034B988;
    s0 = 1; goto L_0034B994;
L_0034B988:;
    if (v0 != v1) { s0 = 2; goto L_0034B994; }
    s0 = 3;
L_0034B994:;
    a1 = (*(volatile u8 *) (u32) (sp + 223));
    a0 = (s32) ((u32) sp + 0xd0U); func_00310E70(a0, a1);
    v0 = (*(volatile u8 *) (u32) (sp + 223));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034B9C0; }
    v0 = s2 | s1;
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0034B9C0:;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s5;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 5;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = s5;
    a1 = 6;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = s5;
    a1 = 7;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = s5;
    a1 = 8;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = s5;
    a1 = 9;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 223));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034BA68; }
    v0 = fp | s1;
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0034BA68:;
    a1 = 10; Pes6BitSet_Write(a0, a1, a2);
    a2 = fp;
    a0 = s5;
    a1 = 11; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s5;
    a1 = 12; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034BAC8; }
    a0 = s5;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s5;
    a1 = 10; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s0 | v0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0034BAC8:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (sp + 172)); goto L_0034BB20; }
    s0 = (*(volatile u8 *) (u32) (sp + 223)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = s4;
    a0 = (*(volatile u8 *) (u32) (sp + 223));
    a2 = s3;
    a3 = (s32) ((u32) sp + 0xd4U); v0 = func_0034BD60(a0, a1, a2, a3);
    if (v0 == 0) { a1 = s5; goto L_0034BB0C; }
    a0 = s5; func_003139A0(a0);
    a1 = s5;
L_0034BB0C:;
    a0 = 178;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 172));
L_0034BB20:;
    return v0;
}
