/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 Pes6Job_SetDone(s64);
s64 Pes6MatchContext_GetHalf(void);
s64 func_0030DAF0(s64);
s64 func_0030EA70(s64, s64, s64, s64);
s64 func_0031EE70(s64, s64, s64);
s64 func_00326120(s64);
s64 func_003336F0(s64);
s64 func_00333710(s64, s64);
s64 func_003414D0(s64, s64, s64, s64);

s64 func_0031EF90(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[36];
    s64 sp = (s32) (u32) frame;

    a1 = 55;
    a2 = (s32) ((u32) sp + 0x110U);
    s4 = (s32) ((u32) sp + 0xf0U);
    (*(volatile u32 *) (u32) (sp + 236)) = (u32) a0;
    a0 = s4;
    v0 = Pes6BitSet_Initialize(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 236));
    a0 = (s32) ((u32) sp + 0x11fU);
    a1 = 2;
    s3 = (*(volatile s32 *) (u32) (v0 + 68));
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 287));
    a0 = s3; v0 = func_00333710(a0, a1);
    s6 = v0; v0 = Pes6MatchContext_GetHalf();
    s5 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    a0 = 1;
    v0 = v0 >> 48;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030DAF0(a0);
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    s0 = (s32) ((u32) v1 - (u32) v0);
    { s32 c_ = s0 <= 0; { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_0031F040; }
    v0 = s6 < 14; goto L_0031F048;
L_0031F040:;
    s0 = (s32) ((u32) 0 - (u32) s0);
    v0 = s6 < 14;
L_0031F048:;
    s1 = s6 < 13;
    s2 = v0 ^ 0x1; v0 = func_0030EA70(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s3; v0 = func_00326120(a0);
    a2 = (*(volatile u8 *) (u32) (sp + 287));
    a1 = s6;
    s7 = v0;
    a0 = s3; v0 = func_0031EE70(a0, a1, a2);
    fp = v0;
    a0 = s3; v0 = func_003336F0(a0);
    v1 = (*(volatile s32 *) (u32) s3);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = 11;
    { s32 c_ = v1 == v0; s6 = 1; if (c_) goto L_0031F0A4; }
    v0 = 12;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (gp + -21592)); goto L_0031F0A8; }
    s6 = 0;
L_0031F0A4:;
    a2 = (*(volatile u8 *) (u32) (gp + -21592));
L_0031F0A8:;
    a0 = s4;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 1;
    v0 = v0 < 70;
    a2 = v0 ^ 0x1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s7 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0031F0E4; }
    a2 = (u64) 0 < (u64) s6;
    a0 = s4;
L_0031F0E4:;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 3;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 4;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s7 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0031F124; }
    a2 = (u64) 0 < (u64) s6;
    a0 = s4;
L_0031F124:;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 6;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 7;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s7 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0031F164; }
    a2 = (u64) 0 < (u64) s6;
    a0 = s4;
L_0031F164:;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 9;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 10;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = fp ^ 0x4;
    a0 = s4;
    a2 = (u64) 0 < (u64) v0;
    a1 = 11; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = fp ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = fp ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 13; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 287));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0031F1F8; }
    v0 = (*(volatile s32 *) (u32) (s3 + 48));
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_0031F1F8:;
    a1 = 14; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 15;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 16;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_0031F240; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 < 16;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_0031F240:;
    a1 = 22; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 23;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 26; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s5 ^ 0;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 27; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 28;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 29;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s5 < 1;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 30; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 31;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 32;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 34; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 35;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 36;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 38; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 39;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 40;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0031F36C; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_0031F36C:;
    a1 = 41; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s5 ^ 0;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 42; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s5 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 43; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = v0 < 11;
    if (a2 == 0) { a0 = s4; goto L_0031F3B8; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = v0 < 11;
    a0 = s4;
L_0031F3B8:;
    a1 = 44; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 49; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 50;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 51;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x5;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 52; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s4;
    a1 = 53; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s4;
    a1 = 54; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 61;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile s32 *) (u32) (sp + 236)); v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
