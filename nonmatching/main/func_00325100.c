/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6MatchStats_GetS16(s64, s64);
s64 func_0030DAF0(s64);
s64 func_003336F0(s64);
s64 func_00333700(s64, s64);
s64 func_00333710(s64, s64);

void func_00325100(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 frame[40];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    v0 = (s32) ((u32) s2 << 4);
    a0 = 0;
    v0 = (s32) ((u32) v0 - (u32) s2);
    a1 = 0;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s5 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0x50U); v0 = Pes6MatchStats_GetS16(a0, a1);
    (*(volatile u16 *) (u32) (sp + 316)) = (u16) v0;
    a0 = 1;
    a1 = 0; v0 = Pes6MatchStats_GetS16(a0, a1);
    (*(volatile u16 *) (u32) (sp + 318)) = (u16) v0;
    a0 = 0;
    a1 = 1; v0 = Pes6MatchStats_GetS16(a0, a1);
    a0 = 1;
    (*(volatile u16 *) (u32) (sp + 312)) = (u16) v0;
    a1 = a0; v0 = Pes6MatchStats_GetS16(a0, a1);
    (*(volatile u16 *) (u32) (sp + 314)) = (u16) v0;
    a0 = s4;
    a1 = s2; v0 = func_00333710(a0, a1);
    fp = s2 ^ 0;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s0 = v0;
    fp = (u64) fp < (u64) (s64) 1;
    v0 = (u64) 0 < (u64) fp;
    s6 = s2 ^ 0x1;
    v0 = v0 ^ 0x1;
    a0 = v1 < 5;
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = s2;
    v0 = (s32) ((u32) s2 << 2);
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s2 << 1);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v0 + (u32) s5);
    v0 = a0 ^ 0x1;
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = (*(volatile s32 *) (u32) (v1 + 2260));
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (s32) ((u32) s6 << 1);
    s7 = (*(volatile s16 *) (u32) (v1 + 316));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 316));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a0 < 3;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a0 < 4;
    v0 = v0 ^ 0x1;
    a0 = s4;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 - (u32) s7);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00333700(a0, a1);
    if (v0 == 0) { (*(volatile u16 *) (u32) (s1 + 56)) = (u16) 0; goto L_0032524C; }
    v0 = (*(volatile s16 *) (u32) (s1 + 56));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (s1 + 56)) = (u16) v0;
L_0032524C:;
    v1 = (*(volatile s32 *) (u32) s5);
    v0 = 11;
    if (v1 == v0) { v0 = 0; goto L_003256FC; }
    v0 = 17;
    if (v1 == v0) goto L_00325298;
    v0 = 10;
    if (v1 == v0) { { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_0032528C; }
    v0 = 16;
    if (v1 == v0) goto L_00325288;
    s1 = (s32) ((u32) s1 + 0x34U); goto L_003252A4;
L_00325288:;
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_0032528C:;
    v0 = (s32) ((u32) s5 + (u32) v0);
    s1 = (s32) ((u32) v0 + 0x8e4U); goto L_003252A4;
L_00325298:;
    v0 = 0;
    goto L_003256FC;
L_003252A4:;
    at = s0 < 14;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) s1) = (u32) 0; if (c_) goto L_0032546C; }
    v0 = s0 < 19;
    if (v0 != 0) { v0 = s0 < 19; goto L_003252CC; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x1;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = s0 < 19;
L_003252CC:;
    if (v0 != 0) { { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_003252F8; }
    a0 = s4;
    a1 = s6; v0 = func_00333700(a0, a1);
    if (v0 == 0) goto L_003252F4;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x2;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003252F4:;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_003252F8:;
    if (v0 == 0) { { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00325310; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x4;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00325310:;
    at = v0 < s7;
    if (at == 0) { v0 = (*(volatile u8 *) (u32) (s4 + 55)); goto L_00325344; }
    a0 = s2; v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    if (s7 != v0) goto L_00325340;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x8;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00325340:;
    v0 = (*(volatile u8 *) (u32) (s4 + 55));
L_00325344:;
    if (v0 != s2) { { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_0032535C; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x10;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_0032535C:;
    at = s7 < v0;
    if (at == 0) { v0 = (s32) ((u32) s0 + 0xfffffff1U); goto L_0032539C; }
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v0 + (u32) sp);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile s16 *) (u32) (v1 + 312));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 312));
    at = v0 < v1;
    if (at == 0) goto L_00325398;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00325398:;
    v0 = (s32) ((u32) s0 + 0xfffffff1U);
L_0032539C:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 16; goto L_003253CC; }
    a0 = s4;
    a1 = s6; v0 = func_00333700(a0, a1);
    if (v0 != 0) goto L_003253C8;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x40;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003253C8:;
    v0 = 16;
L_003253CC:;
    if (s0 != v0) { { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_003253F0; }
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    if (v0 != s6) goto L_003253EC;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x80;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003253EC:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_003253F0:;
    if (v0 == 0) { { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00325408; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x100;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00325408:;
    if (v0 == 0) goto L_0032543C;
    v0 = 16;
    if (s0 != v0) goto L_0032543C;
    a0 = s4;
    a1 = s6; v0 = func_00333700(a0, a1);
    if (v0 == 0) goto L_0032543C;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x200;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_0032543C:;
    if (fp == 0) { { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00325454; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x400;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00325454:;
    if (v0 == 0) { v0 = 1; goto L_003256FC; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x800;
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_003256F8;
L_0032546C:;
    v0 = 13;
    if (s0 != v0) { { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00325538; }
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s3 + 5)); goto L_00325494; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x1000;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
L_00325494:;
    if (v0 != s2) { v0 = (*(volatile u8 *) (u32) (s3 + 5)); goto L_003254AC; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x2000;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
L_003254AC:;
    if (v0 != s6) goto L_003254C0;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x4000;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003254C0:;
    if (fp == 0) { { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_003254D8; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 | 0x8000;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_003254D8:;
    if (v0 == 0) { a0 = s4; goto L_003254F4; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x10000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    a0 = s4;
L_003254F4:;
    v0 = func_003336F0(a0);
    if (v0 == 0) { v0 = (s32) ((u32) s2 + (u32) s5); goto L_00325518; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x80000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = (s32) ((u32) s2 + (u32) s5);
L_00325518:;
    v0 = (*(volatile u8 *) (u32) (v0 + 2288));
    if (v0 == 0) goto L_003256F8;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x10000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_003256F8;
L_00325538:;
    if (v0 == 0) { at = s0 < 8; goto L_00325554; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x20000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    at = s0 < 8;
L_00325554:;
    if (at == 0) { v0 = 12; goto L_00325570; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x40000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = 12;
L_00325570:;
    if (s0 != v0) { { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_0032558C; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x80000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_0032558C:;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s3 + 5)); goto L_003255A8; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x100000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
L_003255A8:;
    if (v0 != s2) { { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_003255E8; }
    v0 = (*(volatile u8 *) (u32) (s3 + 4));
    if (v0 != s2) goto L_003255E4;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 57));
    at = v0 < 81;
    if (at != 0) goto L_003255E4;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x200000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003255E4:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_003255E8:;
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
    v0 = 2;
    if (a0 != v0) { v0 = 1; goto L_0032562C; }
    if (s7 == 0) goto L_00325628;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 312));
    if (v0 != 0) goto L_00325628;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x400000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00325628:;
    v0 = 1;
L_0032562C:;
    if (a0 != v0) { v0 = 10; goto L_00325664; }
    if (s7 == 0) goto L_00325660;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 312));
    if (v0 != 0) goto L_00325660;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x800000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_00325660:;
    v0 = 10;
L_00325664:;
    if (s0 != v0) { v1 = (*(volatile u8 *) (u32) (s4 + 55)); goto L_00325680; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x1000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v1 = (*(volatile u8 *) (u32) (s4 + 55));
L_00325680:;
    if (v1 == s2) goto L_003256A4;
    v0 = 255;
    if (v1 == v0) goto L_003256A4;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x2000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003256A4:;
    if (fp == 0) { { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_003256C0; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x4000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    { u32 a_ = (u32) (sp + 288) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_003256C0:;
    if (v0 == 0) { v0 = (s32) ((u32) s2 + (u32) s5); goto L_003256DC; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x8000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = (s32) ((u32) s2 + (u32) s5);
L_003256DC:;
    v0 = (*(volatile u8 *) (u32) (v0 + 2288));
    if (v0 == 0) goto L_003256F8;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x10000000U;
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_003256F8:;
    v0 = 1;
L_003256FC:;
    return;
}
