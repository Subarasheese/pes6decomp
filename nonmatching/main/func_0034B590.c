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

s32 func_0034B590(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s7 = 0;
    s0 = a0; v0 = func_0030EA70();
    s2 = v0; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s2 & 0xff; goto L_0034B5EC; }
    if (v0 == 0) goto L_0034B5E8;
    v1 = s2 & 0xff; goto L_0034B60C;
L_0034B5E8:;
    v1 = s2 & 0xff;
L_0034B5EC:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034B630; }
    a0 = 1; goto L_0034B630;
L_0034B60C:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034B62C;
    goto L_0034B630;
L_0034B62C:;
    a0 = 0;
L_0034B630:;
    if (a0 != 0) { s5 = (s32) ((u32) sp + 0x90U); goto L_0034B640; }
    v0 = 0; goto L_0034B7E4;
L_0034B640:;
    s6 = (*(volatile s32 *) (u32) (s0 + 80));
    s1 = (*(volatile s32 *) (u32) (s0 + 64));
    a0 = s5;
    a1 = 7;
    a2 = (s32) ((u32) sp + 0xb8U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xbfU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 191));
    v0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s6);
    a0 = (*(volatile s32 *) (u32) (v0 + 780));
    if (a0 == 0) { s0 = 0; goto L_0034B6A0; }
    v1 = (*(volatile s32 *) (u32) (v0 + 788));
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    s0 = lo;
L_0034B6A0:;
    a1 = a1 & 0xff;
    a0 = s1; v0 = func_00333740(a0, a1);
    s1 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 180)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 182)) = (u16) v0;
    a0 = s5;
    v0 = s1 < 14;
    a1 = 1;
    s4 = v0 ^ 0x1;
    s3 = s1 < 13;
    v0 = s0 < 81;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 2;
    a2 = s4; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = s3; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 < 40;
    a0 = s5;
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 5;
    a2 = s4; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 6;
    a2 = s3; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 81;
    a2 = v0 ^ 0x1;
    if (a2 != 0) goto L_0034B74C;
    a2 = s0 < 40;
L_0034B74C:;
    if (a2 == 0) goto L_0034B75C;
    v0 = s4 | s3;
    a2 = (u64) 0 < (u64) v0;
L_0034B75C:;
    if (a2 == 0) { a0 = s5; goto L_0034B78C; }
    v1 = (*(volatile u8 *) (u32) (sp + 191));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7120));
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v1 + (u32) s6);
    v1 = (s32) ((u32) v0 << 1);
    v0 = (*(volatile s32 *) (u32) (a0 + 780));
    a2 = v0 < v1;
    a2 = a2 ^ 0x1;
    a0 = s5;
L_0034B78C:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    if (v0 == 0) { v0 = s7; goto L_0034B7E4; }
    s0 = (*(volatile u8 *) (u32) (sp + 191)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = s2;
    a0 = (*(volatile u8 *) (u32) (sp + 191));
    a2 = s1;
    a3 = (s32) ((u32) sp + 0xb4U); v0 = func_0034BD60(a0, a1, a2, a3);
    if (v0 == 0) { a1 = s5; goto L_0034B7D0; }
    a0 = s5; func_003139A0(a0);
    a1 = s5;
L_0034B7D0:;
    a0 = 179;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    s7 = v0;
    v0 = s7;
L_0034B7E4:;
    return v0;
}
