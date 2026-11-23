/* compiler: mwcc-3.0.1b210 */
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
void func_003110E0(s32, s32);
void func_003139A0(s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_0034BD60(s32, s32, s32, s32);

s32 func_0034B380(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s6 = 0;
    s0 = a0; v0 = func_0030EA70();
    s5 = v0; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s5 & 0xff; goto L_0034B3DC; }
    if (v0 == 0) goto L_0034B3D8;
    v1 = s5 & 0xff; goto L_0034B3FC;
L_0034B3D8:;
    v1 = s5 & 0xff;
L_0034B3DC:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034B420; }
    a0 = 1; goto L_0034B420;
L_0034B3FC:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034B41C;
    goto L_0034B420;
L_0034B41C:;
    a0 = 0;
L_0034B420:;
    if (a0 != 0) { s1 = (*(volatile s32 *) (u32) (s0 + 64)); goto L_0034B430; }
    v0 = 0; goto L_0034B564;
L_0034B430:;
    a1 = 5;
    a2 = (s32) ((u32) sp + 0xb8U);
    s0 = (s32) ((u32) sp + 0x90U);
    a0 = s0; Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xbfU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 191));
    a0 = s1; v0 = func_00333740(a0, a1);
    s2 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 176)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 178)) = (u16) v0;
    v1 = (s32) ((u32) s5 >> 31);
    v0 = (s32) 0xb60b0000U;
    a1 = (*(volatile u8 *) (u32) (sp + 191));
    v0 = v0 | 0x60b7;
    a0 = (s32) ((u32) sp + 0xb4U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    s3 = s2 < 13;
    v0 = s2 < 14;
    s4 = v0 ^ 0x1;
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) s5);
    v0 = (s32) v0 >> 5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = v0 ^ 0x1;
    s7 = (u64) v0 < (u64) (s64) 1; func_003110E0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (sp + 180));
    v0 = v0 < 61;
    s1 = v0 ^ 0x1;
    if (s1 == 0) { a0 = s0; goto L_0034B4D8; }
    s1 = (u64) 0 < (u64) s7;
    a0 = s0;
L_0034B4D8:;
    a1 = 1;
    a2 = s4; Pes6BitSet_Write(a0, a1, a2);
    a0 = s0;
    a1 = 2;
    a2 = s3; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s1;
    if (a2 == 0) { a0 = s0; goto L_0034B50C; }
    v0 = s4 | s3;
    a2 = (u64) 0 < (u64) v0;
    a0 = s0;
L_0034B50C:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    if (v0 == 0) { v0 = s6; goto L_0034B564; }
    s1 = (*(volatile u8 *) (u32) (sp + 191)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s1;
    a1 = s5;
    a0 = (*(volatile u8 *) (u32) (sp + 191));
    a2 = s2;
    a3 = (s32) ((u32) sp + 0xb0U); v0 = func_0034BD60(a0, a1, a2, a3);
    if (v0 == 0) { a1 = s0; goto L_0034B550; }
    a0 = s0; func_003139A0(a0);
    a1 = s0;
L_0034B550:;
    a0 = 180;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    s6 = v0;
    v0 = s6;
L_0034B564:;
    return v0;
}
