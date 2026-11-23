/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetHeaderBlock(void);
s64 Pes6SaveData_IsUnavailable(void);
s64 func_00225820(void);
s64 func_00225B20(s64);
s64 func_00226710(void);
s64 func_00229010(s64);
s64 func_002293F0(void);
s64 func_00229460(void);
void func_00233040(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_00233EF0(s64, s64);
void func_002343F0(s64, s64, s64);
s64 func_00234C90(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_00236680(s64);
void func_00236FE0(void);

s64 func_00231260(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a0 = 0;
    s64 gp = 0x3ef370;
    s64 frame[44];
    s64 sp = (s32) (u32) frame;

    fp = 0;
    s7 = 0;
    v0 = (*(volatile u8 *) (u32) (sp + 349));
    (*(volatile u8 *) (u32) (sp + 256)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -31676));
    (*(volatile u8 *) (u32) (sp + 303)) = (u8) a0;
    s3 = (*(volatile u8 *) (u32) (sp + 348));
    s4 = (*(volatile u8 *) (u32) (v0 + 5873));
    (*(volatile u16 *) (u32) (sp + 300)) = (u16) a1;
    (*(volatile u16 *) (u32) (sp + 298)) = (u16) a2;
    (*(volatile u8 *) (u32) (sp + 297)) = (u8) a3;
    a0 = s4;
    (*(volatile u8 *) (u32) (sp + 296)) = (u8) a4;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) 0; v0 = func_00236680(a0);
    v0 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00229460();
    s1 = v0; v0 = Pes6SaveData_GetHeaderBlock();
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_002293F0();
    { s32 c_ = s1 != 0; s6 = v0; if (c_) goto L_002312F4; }
    v0 = 0; goto L_00231D74;
L_002312F4:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (v0 != 0) goto L_00231308;
    v0 = 0; goto L_00231D74;
L_00231308:;
    if (s6 != 0) goto L_00231318;
    v0 = 0; goto L_00231D74;
L_00231318:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 7;
    if (v1 == v0) { s2 = 0; goto L_00231350; }
    v0 = 1;
    if (v1 == v0) goto L_0023134C;
    if (v1 == 0) goto L_0023134C;
    s0 = s4 & 0xff; goto L_0023139C;
L_0023134C:;
    s2 = 0;
L_00231350:;
    s0 = 0;
L_00231354:;
    a0 = s2 & 0xff; v0 = func_00225B20(a0);
    v1 = 1;
    if (v0 != v1) goto L_00231370;
    v0 = (s32) ((u32) s0 + 0x1U);
    s0 = v0 & 0xff;
L_00231370:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 72;
    if (v0 != 0) goto L_00231354;
    v0 = s0 & 0xff;
    at = v0 < 2;
    if (at != 0) goto L_00231398;
    v0 = 0; goto L_00231D74;
L_00231398:;
    s0 = s4 & 0xff;
L_0023139C:;
    v0 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 2);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v1 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) (v1 + 19137));
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_00231430; }
    v0 = (s32) ((u32) v1 + 0x4ac1U);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s4 = v0 & 0xff;
L_002313CC:;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    s5 = (*(volatile u8 *) (u32) (v0 + 44));
    a0 = s4 & 0xff; v0 = func_00229010(a0);
    v0 = v0 & 0xff;
    if (s5 != v0) goto L_002313F0;
    s3 = s4 & 0xff; goto L_00231418;
L_002313F0:;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    s5 = (*(volatile u8 *) (u32) (v0 + 45));
    a0 = s4 & 0xff; v0 = func_00229010(a0);
    v0 = v0 & 0xff;
    if (s5 != v0) goto L_00231418;
    v0 = s4 & 0xff;
    (*(volatile u8 *) (u32) (sp + 256)) = (u8) v0;
L_00231418:;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x1U); if (c_) goto L_002313CC; }
L_00231430:;
    v0 = (s32) ((u32) s0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = s3;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    s4 = (*(volatile u8 *) (u32) (v0 + 19126));
    v0 = (*(volatile u8 *) (u32) (v0 + 19130));
    a1 = s4;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00233EF0(a0, a1);
    if (v0 != 0) goto L_0023155C;
    a0 = (*(volatile u8 *) (u32) (sp + 256));
    a1 = s4; v0 = func_00233EF0(a0, a1);
    if (v0 != 0) goto L_0023155C;
    v0 = (*(volatile u8 *) (u32) (sp + 300));
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (sp + 298)); goto L_002314B8; }
    a0 = s3;
    a1 = s4;
    a2 = 0; v0 = func_00234C90(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = s0 & 0xff;
    at = v1 < 255;
    if (at != 0) { (*(volatile u8 *) (u32) v0) = (u8) s0; goto L_002314B4; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 254);
    (*(volatile u8 *) (u32) v0) = (u8) s0;
L_002314B4:;
    v0 = (*(volatile u8 *) (u32) (sp + 298));
L_002314B8:;
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_002314F4;
    a0 = (*(volatile u8 *) (u32) (sp + 256));
    a1 = s4;
    a2 = 0; v0 = func_00234C90(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = s0 & 0xff;
    at = v1 < 255;
    if (at != 0) { (*(volatile u8 *) (u32) v0) = (u8) s0; goto L_002314F4; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 254);
    (*(volatile u8 *) (u32) v0) = (u8) s0;
L_002314F4:;
    v0 = Pes6SaveData_IsUnavailable();
    a2 = 1;
    if (v0 == a2) goto L_00231518;
    a0 = s3;
    a1 = s4; v0 = func_00234C90(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
L_00231518:;
    v0 = Pes6SaveData_IsUnavailable();
    a2 = 1;
    if (v0 == a2) { a0 = s3; goto L_00231540; }
    a0 = (*(volatile u8 *) (u32) (sp + 256));
    a1 = s4; v0 = func_00234C90(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    a0 = s3;
L_00231540:;
    a1 = s4;
    a2 = 1; func_002343F0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 256));
    a1 = s4;
    a2 = 1; func_002343F0(a0, a1, a2);
L_0023155C:;
    v0 = func_00229460();
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) { { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_0023159C; }
    if (s0 == 0) goto L_00231598;
    func_00236FE0();
    a0 = 255;
    a1 = (s32) ((u32) s0 + 0x71U);
    a2 = (s32) ((u32) s0 + 0x4ba6U); func_00233040(a0, a1, a2, a3, a4, a5, a6, a7);
L_00231598:;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_0023159C:;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) (v0 + 19128));
    { s32 c_ = v0 <= 0; v1 = 0; if (c_) goto L_00231618; }
    { u32 a_ = (u32) (sp + 240) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    a1 = a0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (sp + 303));
    a4 = (s32) ((u32) s6 + (u32) a1);
    a0 = a0;
    { s32 c_ = a0 >= 0; a3 = a0 & 0x1; if (c_) goto L_002315D4; }
    if (a3 == 0) { { u32 a_ = (u32) (sp + 208) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); } goto L_002315D8; }
    a3 = (s32) ((u32) a3 + 0xfffffffeU);
L_002315D4:;
    { u32 a_ = (u32) (sp + 208) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
L_002315D8:;
    a2 = (*(volatile s32 *) (u32) (gp + -31680));
    a0 = (s32) ((u32) s1 + (u32) a0);
    a1 = (s32) ((u32) a0 + 0x4ab8U);
    a0 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile u8 *) (u32) (a0 + 44));
L_002315EC:;
    a0 = (*(volatile u8 *) (u32) (a4 + 113));
    a0 = (s32) ((u32) s6 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a2 != a0) { a0 = (*(volatile u8 *) (u32) a1); goto L_00231608; }
    s7 = v1 & 0xff; goto L_00231618;
L_00231608:;
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = v1 < a0;
    { s32 c_ = a0 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_002315EC; }
L_00231618:;
    { s32 c_ = v0 <= 0; s0 = 0; if (c_) goto L_002316C8; }
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) s1 + (u32) v0);
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s1 = (s32) ((u32) sp + 0x130U);
    v0 = v0 & 0xff;
    s2 = (s32) ((u32) s6 + (u32) v0);
    v0 = (s32) ((u32) v1 + 0x4ab8U);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00231640:;
    s6 = (*(volatile u8 *) (u32) (s2 + 113)); v0 = func_00229460();
    s5 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00231668;
    v0 = 0; goto L_002316A8;
L_00231668:;
    if (s5 != 0) goto L_00231678;
    v0 = 0; goto L_002316A8;
L_00231678:;
    v1 = s6 & 0xff;
    v0 = v1 < 113;
    if (v0 != 0) goto L_00231690;
    v0 = 0; goto L_002316A8;
L_00231690:;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 19373));
L_002316A8:;
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = s0 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00231640; }
L_002316C8:;
    a0 = s3;
    a1 = s4;
    a2 = 0; func_002343F0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 256));
    a1 = s4;
    a2 = 0; func_002343F0(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 297));
    s0 = v0;
    at = (u64) s0 < (u64) (s64) 7;
    if (at == 0) { a0 = fp & 0xff; goto L_00231AF4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8670U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x231718U) goto L_00231718; if (t_ == 0x231734U) goto L_00231734; if (t_ == 0x2319c0U) goto L_002319C0; if (t_ == 0x231a94U) goto L_00231A94; if (t_ == 0x231ad4U) goto L_00231AD4; }
L_00231718:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    if (v0 != 0) goto L_00231AF0;
    fp = (*(volatile u8 *) (u32) (sp + 272)); goto L_00231AF0;
L_00231734:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v1 = 52;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_002318C0; }
    v1 = 54;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_002318A4; }
    v1 = 51;
    if (v0 == v1) goto L_002318A0;
    v1 = 56;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00231884; }
    v1 = 47;
    if (v0 == v1) goto L_00231880;
    v1 = 44;
    if (v0 == v1) goto L_00231880;
    v1 = 41;
    if (v0 == v1) goto L_00231880;
    v1 = 37;
    if (v0 == v1) goto L_00231880;
    v1 = 36;
    if (v0 == v1) goto L_00231880;
    v1 = 16;
    if (v0 == v1) goto L_00231880;
    v1 = 7;
    if (v0 == v1) goto L_00231880;
    v1 = 6;
    if (v0 == v1) goto L_00231880;
    v1 = 1;
    if (v0 == v1) goto L_00231880;
    if (v0 == 0) goto L_00231880;
    v1 = 50;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00231868; }
    v1 = 40;
    if (v0 == v1) goto L_00231864;
    v1 = 26;
    if (v0 == v1) goto L_00231864;
    v1 = 24;
    if (v0 == v1) goto L_00231864;
    v1 = 22;
    if (v0 == v1) goto L_00231864;
    v1 = 20;
    if (v0 == v1) goto L_00231864;
    v1 = 18;
    if (v0 == v1) goto L_00231864;
    v1 = 15;
    if (v0 == v1) goto L_00231864;
    v1 = 13;
    if (v0 == v1) goto L_00231864;
    v1 = 11;
    if (v0 == v1) goto L_00231864;
    goto L_00231880;
L_00231864:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00231868:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    if (v0 != 0) { v0 = 4; goto L_002318DC; }
    fp = (*(volatile u8 *) (u32) (sp + 272)); goto L_002318D8;
L_00231880:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2);
L_00231884:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 2;
    if (at == 0) goto L_002318D8;
    fp = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002318D8;
L_002318A0:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 3);
L_002318A4:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 3;
    if (at == 0) goto L_002318D8;
    fp = (s64) ((u64) 0 + (u64) (s64) 1); goto L_002318D8;
L_002318C0:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 4;
    if (at == 0) goto L_002318D8;
    fp = (s64) ((u64) 0 + (u64) (s64) 1);
L_002318D8:;
    v0 = 4;
L_002318DC:;
    if (s0 != v0) { v1 = 1; goto L_00231950; }
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u8 *) (u32) (v0 + 36));
    v1 = (s64) ((u64) v1 << 60);
    v0 = 1;
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) goto L_0023194C;
    v0 = (*(volatile u8 *) (u32) (sp + 303));
    a0 = (*(volatile s32 *) (u32) (gp + -31680));
    v1 = v0;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00231920; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 + (u32) a0); goto L_00231924; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00231920:;
    v0 = (s32) ((u32) v0 + (u32) a0);
L_00231924:;
    s1 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_00225820();
    v0 = v0 & 0xff;
    if (s1 != v0) goto L_0023194C;
    v0 = (*(volatile u8 *) (u32) (sp + 296));
    v0 = v0;
    if (v0 != 0) goto L_0023194C;
    fp = 0;
L_0023194C:;
    v1 = 1;
L_00231950:;
    if (s0 != v1) goto L_00231AF0;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) (v0 + 38));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != v1) goto L_00231AF0;
    v0 = (*(volatile u8 *) (u32) (sp + 303));
    a0 = (*(volatile s32 *) (u32) (gp + -31680));
    v1 = v0;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00231990; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 + (u32) a0); goto L_00231994; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00231990:;
    v0 = (s32) ((u32) v0 + (u32) a0);
L_00231994:;
    s1 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_00225820();
    v0 = v0 & 0xff;
    if (s1 != v0) goto L_00231AF0;
    v0 = (*(volatile u8 *) (u32) (sp + 296));
    v0 = v0;
    if (v0 != 0) goto L_00231AF0;
    fp = 0; goto L_00231AF0;
L_002319C0:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 52;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_00231A78; }
    v0 = 54;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_00231A5C; }
    v0 = 47;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00231A40; }
    v0 = 41;
    if (v1 == v0) goto L_00231A3C;
    v0 = 50;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00231A20; }
    v0 = 40;
    if (v1 == v0) goto L_00231A1C;
    goto L_00231A3C;
L_00231A1C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2);
L_00231A20:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 2;
    if (at == 0) goto L_00231AF0;
    fp = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00231AF0;
L_00231A3C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 3);
L_00231A40:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 3;
    if (at == 0) goto L_00231AF0;
    fp = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00231AF0;
L_00231A5C:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 4;
    if (at == 0) goto L_00231AF0;
    fp = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00231AF0;
L_00231A78:;
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 5;
    if (at == 0) goto L_00231AF0;
    fp = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00231AF0;
L_00231A94:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2);
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 2;
    if (at == 0) { { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00231AB4; }
    fp = (s64) ((u64) 0 + (u64) (s64) 1);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00231AB4:;
    v1 = (*(volatile u8 *) (u32) (v0 + 37));
    v1 = (s64) ((u64) v1 << 57);
    v0 = 1;
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) goto L_00231AF0;
    fp = 0; goto L_00231AF0;
L_00231AD4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 14);
    (*(volatile u8 *) (u32) (sp + 272)) = (u8) v0;
    v0 = s7 & 0xff;
    at = v0 < 14;
    if (at == 0) goto L_00231AF0;
    fp = (s64) ((u64) 0 + (u64) (s64) 1);
L_00231AF0:;
    a0 = fp & 0xff;
L_00231AF4:;
    v1 = 1;
    v0 = (s32) ((u32) v1 - (u32) a0);
    { s32 c_ = a0 != v1; s1 = v0 & 0xff; if (c_) goto L_00231B78; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = s4 & 0xff;
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) a2 + 0xffffffffU);
    at = a1 < v0;
    if (at == 0) { v1 = s1 & 0xff; goto L_00231B7C; }
    v1 = s7 & 0xff;
    at = v1 < 31;
    if (at == 0) goto L_00231B78;
    v0 = (*(volatile u8 *) (u32) (sp + 272));
    a0 = v0;
    at = a0 < 31;
    if (at == 0) goto L_00231B78;
    v0 = (s32) ((u32) a2 - (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v1 + 304));
    v1 = (s32) ((u32) a0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v1 + 304));
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = v0 < a1;
    if (at != 0) goto L_00231B78;
    fp = 0;
L_00231B78:;
    v1 = s1 & 0xff;
L_00231B7C:;
    v0 = 1;
    if (v1 != v0) { v0 = 5; goto L_00231C00; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = s4 & 0xff;
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) a2 + 0xffffffffU);
    at = a1 < v0;
    if (at == 0) goto L_00231BFC;
    a0 = s7 & 0xff;
    at = a0 < 31;
    if (at == 0) goto L_00231BFC;
    v0 = (*(volatile u8 *) (u32) (sp + 272));
    v1 = v0;
    at = v1 < 31;
    if (at == 0) goto L_00231BFC;
    v0 = (s32) ((u32) a2 - (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v1 + 303));
    v1 = (s32) ((u32) a0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v1 + 304));
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = v0 < a1;
    if (at != 0) goto L_00231BFC;
    s1 = 0;
L_00231BFC:;
    v0 = 5;
L_00231C00:;
    if (s0 != v0) { v0 = 4; goto L_00231C50; }
    v0 = (*(volatile u8 *) (u32) (sp + 296));
    v0 = v0;
    if (v0 != 0) goto L_00231C4C;
    v1 = fp & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_00231C4C;
    v1 = v0 & 0x1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v1 << 5);
    a0 = (*(volatile u8 *) (u32) (v0 + 37));
    v0 = -33;
    v0 = a0 & v0;
    v1 = v0 | v1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v0 + 37)) = (u8) v1;
L_00231C4C:;
    v0 = 4;
L_00231C50:;
    if (s0 != v0) { v0 = 1; goto L_00231CD8; }
    v0 = (*(volatile u8 *) (u32) (sp + 303));
    a0 = (*(volatile s32 *) (u32) (gp + -31680));
    v1 = v0;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00231C78; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 + (u32) a0); goto L_00231C7C; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00231C78:;
    v0 = (s32) ((u32) v0 + (u32) a0);
L_00231C7C:;
    s2 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_00225820();
    v0 = v0 & 0xff;
    if (s2 != v0) goto L_00231CD4;
    v0 = (*(volatile u8 *) (u32) (sp + 296));
    v0 = v0;
    if (v0 != 0) goto L_00231CD4;
    v1 = fp & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_00231CD4;
    v1 = v0 & 0x1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v1 << 2);
    a0 = (*(volatile u8 *) (u32) (v0 + 36));
    v0 = -5;
    v0 = a0 & v0;
    v1 = v0 | v1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v0 + 36)) = (u8) v1;
L_00231CD4:;
    v0 = 1;
L_00231CD8:;
    if (s0 != v0) { v0 = (*(volatile u8 *) (u32) (sp + 296)); goto L_00231D5C; }
    v0 = (*(volatile u8 *) (u32) (sp + 303));
    a0 = (*(volatile s32 *) (u32) (gp + -31680));
    v1 = v0;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00231D00; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 + (u32) a0); goto L_00231D04; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00231D00:;
    v0 = (s32) ((u32) v0 + (u32) a0);
L_00231D04:;
    s0 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_00225820();
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_00231D58;
    v0 = (*(volatile u8 *) (u32) (sp + 296));
    v0 = v0;
    if (v0 != 0) goto L_00231D58;
    v1 = fp & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_00231D58;
    v1 = v0 & 0x1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile u8 *) (u32) (v0 + 38));
    v0 = -2;
    v0 = a0 & v0;
    v1 = v0 | v1;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v0 + 38)) = (u8) v1;
L_00231D58:;
    v0 = (*(volatile u8 *) (u32) (sp + 296));
L_00231D5C:;
    v1 = v0;
    v0 = 1;
    if (v1 != v0) { v0 = fp & 0xff; goto L_00231D74; }
    fp = s1 & 0xff;
    v0 = fp & 0xff;
L_00231D74:;
    return v0;
}
