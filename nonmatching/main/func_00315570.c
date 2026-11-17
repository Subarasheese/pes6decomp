/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Lookup(s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
void Pes6Job_SetDone(s64);
s64 Pes6MatchContext_GetHalf(void);
s64 func_0030DAF0(s64);
void func_00311210(s64, s64);
void func_003139F0(s64, s64);
s64 func_00325FC0(s64, s64);
s64 func_00326070(s64);
void func_00326760(s64, s64, s64);
s64 func_0032E8D0(s64);
s64 func_00333700(s64, s64);
s64 func_00333710(s64, s64);
s64 func_00333740(s64, s64);
s64 func_00335390(void);
s64 func_00341010(s64);
s64 func_003414D0(s64, s64, s64, s64);

s64 func_00315570(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    s64 frame[84];
    s64 sp = (s32) (u32) frame;

    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    s6 = (*(volatile s32 *) (u32) (a0 + 64));
    s4 = (*(volatile s32 *) (u32) (a0 + 68));
    (*(volatile u32 *) (u32) (sp + 604)) = (u32) a0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 664)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 666)) = (u16) v0;
    a0 = (s32) ((u32) sp + 0x294U);
    a1 = s4;
    a2 = 0; func_00326760(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x294U);
    a1 = s4;
    a2 = 1; func_00326760(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) (sp + 664));
    a0 = s6;
    v0 = (*(volatile s16 *) (u32) (sp + 666));
    s1 = (*(volatile u8 *) (u32) (s0 + 5));
    v0 = (s32) ((u32) v1 + (u32) v0);
    { u32 a_ = (u32) (sp + 496) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = s1;
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 480) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00333740(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s0 + 5));
    s5 = v0;
    a0 = s6; v0 = func_00333710(a0, a1);
    s3 = v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 5));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    s7 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = Pes6MatchContext_GetHalf();
    v1 = s3 < 14;
    a2 = v0 & 0xff;
    v1 = v1 ^ 0x1;
    v0 = (*(volatile u8 *) (u32) (s0 + 5));
    { u32 a_ = (u32) (sp + 432) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = s3 < 13;
    a0 = (*(volatile u8 *) (u32) (s0 + 9));
    { u32 a_ = (u32) (sp + 416) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a1 = (s32) ((u32) v0 << 2);
    v1 = a2 ^ 0;
    a1 = (s32) ((u32) a1 + (u32) s4);
    v1 = (u64) v1 < (u64) (s64) 1;
    s2 = v0 ^ a0;
    { u32 a_ = (u32) (sp + 400) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s2 = (u64) s2 < (u64) (s64) 1;
    v1 = a2 ^ 0x1;
    a1 = (*(volatile s32 *) (u32) (a1 + 2260));
    v1 = (u64) v1 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 384) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = a0 ^ 0x1;
    fp = v0 ^ v1;
    { u32 a_ = (u32) (sp + 400) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 384) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    fp = (u64) fp < (u64) (s64) 1;
    v1 = a0 | v1;
    a0 = (u64) 0 < (u64) v1;
    v1 = a1 < 3;
    { u32 a_ = (u32) (sp + 464) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a1 = a1 < 4;
    v1 = a0 ^ 0x1;
    { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = a1 ^ 0x1;
    { u32 a_ = (u32) (sp + 448) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = 1;
    a1 = (*(volatile u8 *) (u32) (s0 + 29));
    (*(volatile u32 *) (u32) (sp + 544)) = (u32) v1;
    { u32 a_ = (u32) (sp + 496) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 ^ 0x2;
    a0 = (u64) v1 < (u64) (s64) 1;
    v1 = a1 ^ 0x3;
    v1 = (u64) v1 < (u64) (s64) 1;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (sp + 576)) = (u32) v1; if (c_) goto L_003156F8; }
    v1 = (s32) ((u32) s1 << 1);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v1 + 664));
    v1 = v1 ^ 0x2;
    a0 = (u64) v1 < (u64) (s64) 1;
L_003156F8:;
    { u32 a_ = (u32) (sp + 400) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 & a0;
    if (v1 != 0) { v1 = s3 ^ 0x10; goto L_0031571C; }
    at = s3 < 18;
    if (at == 0) goto L_00315718;
    (*(volatile u32 *) (u32) (sp + 544)) = (u32) 0;
L_00315718:;
    v1 = s3 ^ 0x10;
L_0031571C:;
    a0 = s5 ^ 0x10;
    v1 = (u64) v1 < (u64) (s64) 1;
    a0 = (u64) a0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 352) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (sp + 384) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 & a0;
    (*(volatile u32 *) (u32) (sp + 560)) = (u32) v1;
    v1 = (*(volatile u8 *) (u32) (s6 + 55));
    { s32 c_ = v0 != v1; (*(volatile u32 *) (u32) (sp + 528)) = (u32) 0; if (c_) goto L_00315758; }
    { u32 a_ = (u32) (sp + 352) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (v0 == 0) { v0 = (s32) ((u32) s1 << 1); goto L_0031575C; }
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 528)) = (u32) v0;
L_00315758:;
    v0 = (s32) ((u32) s1 << 1);
L_0031575C:;
    (*(volatile u32 *) (u32) (sp + 512)) = (u32) 0;
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v1 + 664));
    v1 = (*(volatile s16 *) (u32) (v1 + 660));
    { s32 c_ = v1 != v0; { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_00315798; }
    v0 = s1 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v0 + 660));
    v0 = (*(volatile s16 *) (u32) (v0 + 664));
    if (v1 != v0) { a0 = s6; goto L_0031579C; }
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 512)) = (u32) v0;
L_00315798:;
    a0 = s6;
L_0031579C:;
    a1 = s1; v0 = func_00333700(a0, a1);
    (*(volatile u32 *) (u32) (sp + 600)) = (u32) v0;
    a0 = s4;
    a1 = s1; v0 = func_00325FC0(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a0 = (s32) ((u32) sp + 0x29fU);
    v0 = v0 ^ 0x1;
    a1 = 2;
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x280U);
    a1 = 0; func_00311210(a0, a1);
    a0 = (s32) ((u32) sp + 0x284U);
    a1 = 1; func_00311210(a0, a1);
    s5 = (s32) ((u32) sp + 0x260U);
    a1 = 71;
    a0 = s5;
    a2 = (s32) ((u32) sp + 0x288U); Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 5));
    a0 = s5; func_003139F0(a0, a1);
    a0 = s4; v0 = func_00326070(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_0031582C; }
    v0 = func_00335390();
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0031582C:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 4;
    a2 = fp; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 480) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_00315868;
    a2 = (u64) 0 < (u64) s2;
L_00315868:;
    if (a2 == 0) goto L_0031587C;
    a0 = 50; v0 = func_0032E8D0(a0);
    a2 = (u64) 0 < (u64) v0;
L_0031587C:;
    if (a2 == 0) { a0 = s5; goto L_00315890; }
    { u32 a_ = (u32) (sp + 400) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315890:;
    a1 = 6; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s2;
    if (a2 == 0) goto L_003158B8;
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
L_003158B8:;
    if (a2 == 0) { a0 = s5; goto L_003158CC; }
    v0 = (*(volatile s32 *) (u32) (sp + 512));
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_003158CC:;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    v0 = s3 ^ 0xd;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 9; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 528));
    a0 = s5;
    a1 = 10; Pes6BitSet_Write(a0, a1, a2);
    v0 = s3 < 17;
    a0 = s5;
    a2 = v0 ^ 0x1;
    a1 = 11; Pes6BitSet_Write(a0, a1, a2);
    v0 = s7 < 80;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_00315924;
    { u32 a_ = (u32) (sp + 384) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
L_00315924:;
    if (a2 != 0) goto L_00315934;
    v0 = s7 < 115;
    a2 = v0 ^ 0x1;
L_00315934:;
    if (a2 == 0) goto L_00315940;
    a2 = (u64) 0 < (u64) fp;
L_00315940:;
    if (a2 == 0) goto L_00315960;
    v0 = s1 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
L_00315960:;
    if (a2 == 0) { a0 = s5; goto L_00315990; }
    v0 = (*(volatile s32 *) (u32) (sp + 528));
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) goto L_0031597C;
    a2 = s3 < 10;
L_0031597C:;
    if (a2 != 0) goto L_0031598C;
    v0 = (*(volatile s32 *) (u32) (sp + 512));
    a2 = (u64) 0 < (u64) v0;
L_0031598C:;
    a0 = s5;
L_00315990:;
    a1 = 12; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 14;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 15;
    a2 = fp; Pes6BitSet_Write(a0, a1, a2);
    v0 = s7 < 80;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_003159D0;
    { u32 a_ = (u32) (sp + 384) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
L_003159D0:;
    if (a2 != 0) goto L_003159E0;
    v0 = s7 < 115;
    a2 = v0 ^ 0x1;
L_003159E0:;
    if (a2 == 0) goto L_003159EC;
    a2 = (u64) 0 < (u64) s2;
L_003159EC:;
    if (a2 == 0) { a0 = s5; goto L_00315A50; }
    a0 = s5;
    a1 = 8; v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 304) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s5;
    a1 = 9; v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 304) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 10;
    v0 = v1 | v0;
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 288) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 11;
    v0 = v0 | v1;
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 | v1;
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315A50:;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 6; v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s5;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 12;
    v0 = v1 | v0;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 5;
    a2 = v0 | v1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 5; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 480) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_00315AD8; }
    { u32 a_ = (u32) (sp + 320) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315AD8:;
    a1 = 53; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 671));
    a0 = s5;
    a1 = 54;
    a2 = s1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 671));
    a0 = s5;
    a1 = 55;
    v0 = v0 ^ 0x1;
    a2 = s1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3; v0 = func_00341010(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_00315B34;
    { u32 a_ = (u32) (sp + 480) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
L_00315B34:;
    if (a2 == 0) { a0 = s5; goto L_00315B48; }
    { u32 a_ = (u32) (sp + 320) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315B48:;
    a1 = 56; Pes6BitSet_Write(a0, a1, a2);
    v0 = s3 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_00315B6C; }
    { u32 a_ = (u32) (sp + 320) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315B6C:;
    a1 = 57; Pes6BitSet_Write(a0, a1, a2);
    v0 = s3 < 17;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_00315B98;
    v0 = s7 < 11;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_00315B98;
    a2 = s7 < 76;
L_00315B98:;
    if (a2 == 0) { a0 = s5; goto L_00315BAC; }
    { u32 a_ = (u32) (sp + 320) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315BAC:;
    a1 = 58; Pes6BitSet_Write(a0, a1, a2);
    v0 = s3 ^ 0xa;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_00315BD8; }
    v1 = (*(volatile u8 *) (u32) (s0 + 5));
    v0 = (*(volatile u8 *) (u32) (sp + 671));
    a2 = v0 ^ v1;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s5;
L_00315BD8:;
    a1 = 59; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 29));
    v0 = 3;
    if (v1 == v0) { v0 = 1; goto L_00315C08; }
    v0 = 2;
    if (v1 == v0) goto L_00315C04;
    v0 = 0; goto L_00315C08;
L_00315C04:;
    v0 = 1;
L_00315C08:;
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) { a0 = s5; goto L_00315C20; }
    v0 = v1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00315C20:;
    a1 = 60; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 30));
    v0 = 3;
    if (v1 == v0) { v0 = 1; goto L_00315C50; }
    v0 = 2;
    if (v1 == v0) goto L_00315C4C;
    v0 = 0; goto L_00315C50;
L_00315C4C:;
    v0 = 1;
L_00315C50:;
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) { a0 = s5; goto L_00315C68; }
    v0 = v1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00315C68:;
    a1 = 61; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 576));
    a0 = s5;
    a1 = 62; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 29));
    a0 = s5;
    a1 = 63;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 576));
    a0 = s5;
    a1 = 64; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 29));
    v0 = v0 ^ 0x8;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_00315CCC; }
    a0 = 30; v0 = func_0032E8D0(a0);
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315CCC:;
    a1 = 65; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 39));
    a0 = s5;
    a1 = 67;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 39));
    a0 = s5;
    a1 = 68;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = 1;
    { s32 c_ = v0 != a0; a2 = 0; if (c_) goto L_00315D40; }
    v1 = (*(volatile u8 *) (u32) (s0 + 39));
    v0 = 2;
    if (v1 == v0) goto L_00315D34;
    v0 = 3;
    if (v1 == v0) goto L_00315D34;
    a0 = 0;
L_00315D34:;
    if (a0 == 0) { a0 = s5; goto L_00315D44; }
    a2 = 1;
L_00315D40:;
    a0 = s5;
L_00315D44:;
    a1 = 66; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_00315D70; }
    a0 = 30; v0 = func_0032E8D0(a0);
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_00315D70:;
    a1 = 69; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 33));
    a0 = s5;
    a1 = 70; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 496) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 ^ 0x2;
    v1 = (u64) v0 < (u64) (s64) 1;
    if (v1 == 0) { { u32 a_ = (u32) (sp + 400) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00315DAC; }
    { u32 a_ = (u32) (sp + 336) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 ^ 0x2;
    v1 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 400) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00315DAC:;
    a0 = s5;
    a1 = 20;
    a2 = v0 & v1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 560));
    a0 = s5;
    a1 = 21; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 368) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    { u32 a_ = (u32) (sp + 352) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 22;
    s3 = v1 & v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 7));
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & s3; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 464) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 20;
    v1 = v0 & s2;
    { u32 a_ = (u32) (sp + 432) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 & v1;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    s7 = v0;
    a0 = s5;
    a1 = 21; v0 = Pes6BitSet_Lookup(a0, a1);
    s7 = s7 | v0;
    a0 = s5;
    a1 = 22; v0 = Pes6BitSet_Lookup(a0, a1);
    v1 = v0 | s7;
    a0 = s5;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 19;
    a2 = v0 & v1; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 400) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    { u32 a_ = (u32) (sp + 480) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 24;
    s7 = v1 & v0;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 544));
    a0 = s5;
    a1 = 25; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 560));
    a0 = s5;
    a1 = 26; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 7));
    a0 = s5;
    a1 = 27;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & s3; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 464) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 24;
    v1 = v0 & fp;
    { u32 a_ = (u32) (sp + 416) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 & v1;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s5;
    a1 = 25; v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 26;
    v0 = v1 | v0;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 27;
    v0 = v0 | v1;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6BitSet_Lookup(a0, a1);
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 23;
    v1 = v0 | v1;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = v0 & v1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s5;
    a1 = 29; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 544));
    a0 = s5;
    a1 = 30; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 560));
    a0 = s5;
    a1 = 31; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 7));
    a0 = s5;
    a1 = 32;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & s3; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 448) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 29;
    v1 = v0 & s2;
    { u32 a_ = (u32) (sp + 432) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = v0 & v1; v0 = Pes6BitSet_Lookup(a0, a1);
    s2 = v0;
    a0 = s5;
    a1 = 30; v0 = Pes6BitSet_Lookup(a0, a1);
    s2 = s2 | v0;
    a0 = s5;
    a1 = 31; v0 = Pes6BitSet_Lookup(a0, a1);
    s2 = v0 | s2;
    a0 = s5;
    a1 = 32; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = v0 | s2;
    a0 = s5;
    a2 = s7 & v0;
    a1 = 28; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 544));
    a0 = s5;
    a1 = 34; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 7));
    a0 = s5;
    a1 = 35;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & s3; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 448) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 34;
    v1 = v0 & fp;
    { u32 a_ = (u32) (sp + 416) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = v0 & v1; v0 = Pes6BitSet_Lookup(a0, a1);
    s3 = v0;
    a0 = s5;
    a1 = 35; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s3 | v0;
    a0 = s5;
    a2 = s2 & v0;
    a1 = 33; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 19; v0 = Pes6BitSet_Lookup(a0, a1);
    s3 = v0;
    a0 = s5;
    a1 = 23; v0 = Pes6BitSet_Lookup(a0, a1);
    s3 = s3 | v0;
    a0 = s5;
    a1 = 28; v0 = Pes6BitSet_Lookup(a0, a1);
    s3 = v0 | s3;
    a0 = s5;
    a1 = 33; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 | s3;
    a0 = s5;
    a1 = 18; Pes6BitSet_Write(a0, a1, a2);
    s1 = s1 ^ 0x1;
    a0 = s6;
    a1 = s1; v0 = func_00333700(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 39; Pes6BitSet_Write(a0, a1, a2);
    a0 = s6;
    a1 = s1; v0 = func_00333700(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a0 = s5;
    a2 = v0 ^ 0x1;
    a1 = 40; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 39; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s5;
    a1 = 40; v0 = Pes6BitSet_Lookup(a0, a1);
    v1 = s1 | v0;
    a0 = s5;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 38;
    a2 = v0 & v1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 600));
    a0 = s5;
    a1 = 42; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 600));
    a0 = s5;
    a1 = 43;
    v0 = (u64) 0 < (u64) v0;
    s1 = v0 ^ 0x1;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 39; v0 = Pes6BitSet_Lookup(a0, a1);
    s3 = v0;
    a0 = s5;
    a1 = 40; v0 = Pes6BitSet_Lookup(a0, a1);
    v1 = s3 | v0;
    a0 = s5;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 41;
    a2 = v0 & v1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s5;
    a1 = 44; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 600));
    a0 = s5;
    a1 = 49; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s5;
    a1 = 50; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s5;
    a1 = 47; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 38; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s5;
    a1 = 41; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = s1 | v0;
    a0 = s5;
    a1 = 44; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 47; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 | s1;
    a0 = s5;
    a1 = 37; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = v0 ^ 0x8;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0031620C;
    v1 = (*(volatile s32 *) (u32) (sp + 640));
    v0 = (*(volatile s32 *) (u32) (sp + 644));
    v0 = (s32) ((u32) v1 + (u32) v0);
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
L_0031620C:;
    if (a2 == 0) { a0 = s5; goto L_0031623C; }
    a0 = s5;
    a1 = 37; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s5;
    a1 = 18; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s1 & v0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_0031623C:;
    a1 = 17; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 53; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s5;
    a1 = 56; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = s1 | v0;
    a0 = s5;
    a1 = 57; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 58; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 59; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 60; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 65; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 66; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 69; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s5;
    a1 = 17; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = v0 | s1;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_00316308; }
    a1 = (*(volatile u8 *) (u32) (s0 + 5));
    a0 = s4; v0 = func_00325FC0(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_00316308:;
    a1 = 52; Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 77;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile s32 *) (u32) (sp + 604)); Pes6Job_SetDone(a0);
    v0 = 0;
    return v0;
}
