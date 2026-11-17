/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Job_GetManager(void);
s64 func_002308F0(void);
s64 func_00234090(void);
s64 func_00235B60(void);
s64 func_00236630(s64);
s64 func_002955A0(void);
f32 func_002955F0(void);
s64 func_00312420(s64, s64, s64, s64);
s64 func_0032E980(s64);
s64 func_0032ED30(s64, s64, s64, s64, s64);
s64 func_0032F0E0(s64, s64, s64, s64);
s64 func_0032F470(s64, s64, s64, s64);
s64 func_0032F5F0(s64, s64, s64, s64);
s64 func_0032FBD0(s64, s64, s64, s64, s64);
s64 func_0032FE10(s64, s64, s64, s64);
s64 func_00330400(s64, s64, s64);
s64 func_003640D0(s64, s64, s64, s64);
s64 func_00364250(s64, s64, s64, s64);
s64 func_003644F0(s64, s64, s64, s64);
s64 func_00364600(s64, s64, s64, s64);
s64 func_00364710(s64);
s64 func_00364A40(s64, s64, s64, s64);
s64 func_00364AB0(s64, s64, s64, s64);
s64 func_00364B20(s64, s64, s64, s64);
s64 func_00364B90(s64, s64, s64, s64);
s64 func_00365120(s64, s64, s64, s64);
s64 func_003651E0(s64, s64, s64, s64);

s64 func_00330F40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    v0 = 3;
    s7 = a0;
    a0 = (s32) 0xff000000U;
    s3 = a3;
    s2 = a4;
    a4 = (*(volatile s32 *) (u32) (a3 + 12));
    v1 = (*(volatile u8 *) (u32) a3);
    a0 = a4 & a0;
    s0 = (s64) ((u64) a4 << 40);
    v1 = v1 & 0x3;
    s0 = (s64) ((u64) s0 >> 40);
    { s32 c_ = v1 != v0; s4 = (s32) ((u32) a0 >> 24); if (c_) goto L_0033101C; }
    v0 = -1;
    if (a1 != v0) { v0 = (s32) 0x20000U; goto L_00330FC8; }
    if (a2 != v0) goto L_00330FC4;
    if (s4 != 0) goto L_00330FC4;
    (*(volatile u32 *) (u32) s7) = (u32) v0;
    v0 = 1; goto L_00331BC0;
L_00330FC4:;
    v0 = (s32) 0x20000U;
L_00330FC8:;
    v0 = v0 | 0x6a0;
    v0 = (u64) a4 < (u64) v0;
    if (v0 != 0) { v0 = (s32) 0xfffd0000U; goto L_00330FF0; }
    at = (s32) 0x20000U;
    at = at | 0x6ba;
    at = (u64) a4 < (u64) at;
    if (at != 0) { v0 = -1; goto L_00331008; }
    v0 = (s32) 0xfffd0000U;
L_00330FF0:;
    v0 = v0 | 0xf979;
    v0 = (s32) ((u32) a4 + (u32) v0);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_0033101C;
    v0 = -1;
L_00331008:;
    if (a2 != v0) goto L_0033101C;
    (*(volatile u32 *) (u32) s7) = (u32) v0;
    v0 = 1; goto L_00331BC0;
L_0033101C:;
    v0 = Pes6Job_GetManager();
    s1 = v0;
    v0 = 255;
    if (s4 == v0) { v1 = -1; goto L_00331B14; }
    a0 = 26;
    if (s4 == a0) { v0 = 1; goto L_00331BC0; }
    v0 = 25;
    if (s4 == v0) { a0 = s2; goto L_00331B00; }
    v0 = 24;
    if (s4 == v0) { a0 = s2; goto L_00331AF0; }
    v1 = 23;
    if (s4 == v1) { a0 = s2; goto L_00331AE0; }
    v0 = 22;
    if (s4 == v0) { a0 = s2; goto L_00331AD0; }
    v0 = 21;
    if (s4 == v0) { a0 = s2; goto L_00331AC0; }
    v0 = 20;
    if (s4 == v0) { a0 = s2; goto L_00331AB0; }
    v0 = 19;
    if (s4 == v0) { a0 = s2; goto L_00331AA0; }
    v0 = 18;
    if (s4 == v0) { a0 = s2; goto L_00331A90; }
    v0 = 17;
    if (s4 == v0) { a0 = s2; goto L_00331A80; }
    v0 = 16;
    if (s4 == v0) { a0 = s2; goto L_00331A70; }
    a3 = 15;
    if (s4 == a3) { a0 = s2; goto L_00331A60; }
    v0 = 14;
    if (s4 == v0) { at = (u64) s0 < (u64) (s64) 12; goto L_0033183C; }
    a2 = 13;
    if (s4 == a2) { v0 = 3; goto L_003317F8; }
    a1 = 12;
    if (s4 == a1) { at = (u64) s0 < (u64) (s64) 17; goto L_00331730; }
    a1 = 11;
    if (s4 == a1) { at = (u64) s0 < (u64) (s64) 6; goto L_003316BC; }
    a1 = 10;
    if (s4 == a1) { at = (u64) s0 < (u64) (s64) 8; goto L_00331638; }
    a1 = 9;
    if (s4 == a1) { v0 = 1; goto L_003315D0; }
    a1 = 8;
    if (s4 == a1) { v1 = 2; goto L_00331584; }
    a1 = 6;
    if (s4 == a1) { v0 = 3; goto L_0033153C; }
    a1 = 7;
    if (s4 == a1) { v0 = 1; goto L_003313B0; }
    a1 = 5;
    if (s4 == a1) { v0 = (*(volatile s32 *) (u32) s3); goto L_00331334; }
    a5 = 4;
    if (s4 == a5) { v0 = 29; goto L_003312D8; }
    a4 = 3;
    if (s4 == a4) { v0 = (s32) 0xdede0000U; goto L_003312CC; }
    a2 = 2;
    if (s4 == a2) { v0 = (s32) 0xbcbc0000U; goto L_003312C0; }
    a3 = 1;
    if (s4 == a3) { at = (u64) s0 < (u64) (s64) 8; goto L_00331194; }
    if (s4 == 0) { v0 = (*(volatile s32 *) (u32) (s3 + 12)); goto L_0033118C; }
    v0 = 28;
    if (s4 == v0) goto L_00331188;
    goto L_00331B10;
L_00331188:;
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
L_0033118C:;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331194:;
    if (at == 0) goto L_00331B20;
    a1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) s0 << 2);
    a1 = (s32) ((u32) a1 + 0x1cf0U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0x3311b8U) goto L_003311B8; if (t_ == 0x3311d8U) goto L_003311D8; if (t_ == 0x3311f4U) goto L_003311F4; if (t_ == 0x331214U) goto L_00331214; if (t_ == 0x331234U) goto L_00331234; if (t_ == 0x331254U) goto L_00331254; if (t_ == 0x331278U) goto L_00331278; if (t_ == 0x33129cU) goto L_0033129C; }
L_003311B8:;
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) sp + 0x9cU);
    a2 = a3;
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_003311D8:;
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_003311F4:;
    v0 = (*(volatile u8 *) (u32) s3);
    a2 = a4;
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_00331214:;
    v0 = (*(volatile u8 *) (u32) s3);
    a2 = a5;
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_00331234:;
    v0 = (*(volatile u8 *) (u32) s3);
    a2 = a4;
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_00331254:;
    a3 = v0;
    a2 = a4;
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_00331278:;
    a3 = v0;
    a2 = a5;
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_0033129C:;
    v0 = (*(volatile u8 *) (u32) s3);
    a2 = a3;
    a0 = (s32) ((u32) sp + 0x9cU);
    a4 = s2;
    a3 = v1;
    a1 = v0 & 0x3; v0 = func_0032FBD0(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_003312C0:;
    v0 = v0 | 0xbcbc;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003312CC:;
    v0 = v0 | 0xdede;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003312D8:;
    if (s0 == v0) { s0 = 2; goto L_0033130C; }
    v0 = 28;
    if (s0 == v0) goto L_00331308;
    v0 = 27;
    if (s0 == v0) goto L_00331308;
    if (s0 == a0) goto L_00331308;
    v0 = (*(volatile s32 *) (u32) s3); goto L_00331310;
L_00331308:;
    s0 = 2;
L_0033130C:;
    v0 = (*(volatile s32 *) (u32) s3);
L_00331310:;
    a2 = (s32) ((u32) s0 + 0x1U);
    v1 = (*(volatile u8 *) (u32) s3);
    a0 = (s32) ((u32) sp + 0x9cU);
    v0 = (s64) ((u64) v0 << 44);
    a1 = v1 & 0x3;
    a3 = (s64) ((u64) v0 >> 59); v0 = func_0032F0E0(a0, a1, a2, a3);
    goto L_00331B20;
L_00331334:;
    a0 = (s32) ((u32) sp + 0x98U);
    v0 = (s64) ((u64) v0 << 44);
    a1 = (s64) ((u64) v0 >> 59); v0 = func_0032FE10(a0, a1, a2, a3);
    v0 = 4;
    if (s0 == v0) { s5 = 1; goto L_00331388; }
    v0 = 2;
    if (s0 == v0) { s5 = 8; goto L_00331388; }
    v0 = 1;
    if (s0 == v0) { s5 = 7; goto L_00331388; }
    if (s0 == 0) { s5 = 6; goto L_00331388; }
    v0 = 3;
    if (s0 == v0) goto L_00331384;
    goto L_00331388;
L_00331384:;
    s5 = 6;
L_00331388:;
    a0 = (*(volatile s32 *) (u32) (sp + 152));
    v0 = (s32) ((u32) s5 << 2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003313B0:;
    if (s0 == v0) { s5 = 5; goto L_003313C0; }
    if (s0 == 0) { s5 = 4; goto L_003313C0; }
L_003313C0:;
    a0 = s5;
    a1 = 0; v0 = func_0032F470(a0, a1, a2, a3);
    a0 = (s32) ((u32) s5 << 2);
    v1 = 3;
    a0 = (s32) ((u32) a0 + (u32) s1);
    { s32 c_ = s5 == v1; s0 = (*(volatile s32 *) (u32) (a0 + 104)); if (c_) goto L_00331518; }
    v1 = 2;
    if (s5 == v1) { at = v0 < 16; goto L_0033151C; }
    v1 = 1;
    if (s5 == v1) { at = v0 < 16; goto L_00331504; }
    v0 = 5;
    if (s5 == v0) goto L_003314B0;
    v0 = 4;
    if (s5 == v0) goto L_00331418;
    goto L_00331534;
L_00331418:;
    f0.f = func_002955F0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s32) ((u32) s0 + (u32) v0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00331444; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_0033145C;
L_00331444:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_0033145C:;
    v1 = (s32) 0xc1300000U;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    f1.f = f1.f - f0.f;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00331494; }
    f0.i = (s32) f1.f;
    s6 = f0.i;
    goto L_003314A8;
L_00331494:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    s6 = f0.i;
    s6 = s6 | v0;
L_003314A8:;
    goto L_00331530;
L_003314B0:;
    v0 = func_002955A0();
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_003314CC; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_003314E4;
L_003314CC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_003314E4:;
    v0 = (s32) 0x40c00000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    s6 = (s32) ((u32) s0 + (u32) v0); goto L_00331530;
L_00331504:;
    if (at == 0) { s6 = -1; goto L_00331510; }
    s6 = (s32) ((u32) s0 + (u32) v0);
L_00331510:;
    goto L_00331530;
L_00331518:;
    at = v0 < 16;
L_0033151C:;
    if (at == 0) { s6 = -1; goto L_00331530; }
    v0 = (s32) ((u32) v0 << 1);
    s6 = (s32) ((u32) s0 + (u32) v0); goto L_00331530;
L_00331530:;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) s6;
L_00331534:;
    goto L_00331B20;
L_0033153C:;
    if (s0 == v0) { s5 = v0; goto L_00331564; }
    v1 = 2;
    if (s0 == v1) { s5 = 4; goto L_00331564; }
    v0 = 1;
    if (s0 == v0) { s5 = v1; goto L_00331564; }
    if (s0 == 0) { s5 = v0; goto L_00331564; }
L_00331564:;
    v0 = (*(volatile s32 *) (u32) s3);
    a1 = s5;
    a0 = (s32) ((u32) sp + 0x9cU);
    v0 = (s64) ((u64) v0 << 44);
    a2 = (s64) ((u64) v0 >> 59); v0 = func_0032F5F0(a0, a1, a2, a3);
    goto L_00331B20;
L_00331584:;
    if (s0 == v1) { s5 = 6; goto L_003315AC; }
    v0 = 3;
    if (s0 == v0) { s5 = 4; goto L_003315AC; }
    v0 = 1;
    if (s0 == v0) { s5 = v1; goto L_003315AC; }
    if (s0 == 0) { s5 = v0; goto L_003315AC; }
L_003315AC:;
    s0 = (s32) ((u32) s5 << 2);
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 216)); v0 = func_0032E980(a0);
    v1 = (s32) ((u32) s0 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003315D0:;
    if (s0 == v0) { s5 = 2; goto L_003315E0; }
    if (s0 == 0) { s5 = v0; goto L_003315E0; }
L_003315E0:;
    s0 = (s32) ((u32) s5 << 2);
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 252)); v0 = func_0032E980(a0);
    a0 = (s32) ((u32) s0 + (u32) s1);
    v1 = (s32) 0x20000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 244));
    v1 = v1 | 0x23e9;
    v0 = (s32) ((u32) a0 + (u32) v0);
    if (v0 != v1) { (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20; }
    a0 = 2; v0 = func_0032E980(a0);
    if (v0 == 0) { v0 = (s32) 0x20000U; goto L_00331628; }
    v0 = (s32) 0x20000U;
    v0 = v0 | 0x23e8; goto L_0033162C;
L_00331628:;
    v0 = v0 | 0x23e4;
L_0033162C:;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0;
    goto L_00331B20;
L_00331638:;
    if (at == 0) { s0 = (s32) ((u32) s5 << 2); goto L_0033169C; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x1cd0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x3311b8U) goto L_003311B8; if (t_ == 0x3311d8U) goto L_003311D8; if (t_ == 0x3311f4U) goto L_003311F4; if (t_ == 0x331214U) goto L_00331214; if (t_ == 0x331234U) goto L_00331234; if (t_ == 0x331254U) goto L_00331254; if (t_ == 0x331278U) goto L_00331278; if (t_ == 0x33129cU) goto L_0033129C; if (t_ == 0x33165cU) goto L_0033165C; if (t_ == 0x331664U) goto L_00331664; if (t_ == 0x33166cU) goto L_0033166C; if (t_ == 0x331674U) goto L_00331674; if (t_ == 0x33167cU) goto L_0033167C; if (t_ == 0x331684U) goto L_00331684; if (t_ == 0x33168cU) goto L_0033168C; if (t_ == 0x331694U) goto L_00331694; }
L_0033165C:;
    s5 = 1; goto L_00331698;
L_00331664:;
    s5 = 2; goto L_00331698;
L_0033166C:;
    s5 = 3; goto L_00331698;
L_00331674:;
    s5 = 4; goto L_00331698;
L_0033167C:;
    s5 = 5; goto L_00331698;
L_00331684:;
    s5 = 6; goto L_00331698;
L_0033168C:;
    s5 = 7; goto L_00331698;
L_00331694:;
    s5 = 8;
L_00331698:;
    s0 = (s32) ((u32) s5 << 2);
L_0033169C:;
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 156)); v0 = func_0032E980(a0);
    v1 = (s32) ((u32) s0 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) (v1 + 124));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003316BC:;
    if (at == 0) { s0 = (s32) ((u32) s5 << 2); goto L_00331710; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x1cb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x3316e0U) goto L_003316E0; if (t_ == 0x3316e8U) goto L_003316E8; if (t_ == 0x3316f0U) goto L_003316F0; if (t_ == 0x3316f8U) goto L_003316F8; if (t_ == 0x331700U) goto L_00331700; if (t_ == 0x331708U) goto L_00331708; }
L_003316E0:;
    s5 = 1; goto L_0033170C;
L_003316E8:;
    s5 = 2; goto L_0033170C;
L_003316F0:;
    s5 = 3; goto L_0033170C;
L_003316F8:;
    s5 = 4; goto L_0033170C;
L_00331700:;
    s5 = 5; goto L_0033170C;
L_00331708:;
    s5 = 6;
L_0033170C:;
    s0 = (s32) ((u32) s5 << 2);
L_00331710:;
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 3900)); v0 = func_0032E980(a0);
    v1 = (s32) ((u32) s0 + (u32) s1);
    v1 = (*(volatile s32 *) (u32) (v1 + 3876));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331730:;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_003317D8; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + 0x1c60U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x331754U) goto L_00331754; if (t_ == 0x33175cU) goto L_0033175C; if (t_ == 0x331764U) goto L_00331764; if (t_ == 0x33176cU) goto L_0033176C; if (t_ == 0x331778U) goto L_00331778; if (t_ == 0x331784U) goto L_00331784; if (t_ == 0x33178cU) goto L_0033178C; if (t_ == 0x331794U) goto L_00331794; if (t_ == 0x33179cU) goto L_0033179C; if (t_ == 0x3317a4U) goto L_003317A4; if (t_ == 0x3317acU) goto L_003317AC; if (t_ == 0x3317b4U) goto L_003317B4; if (t_ == 0x3317bcU) goto L_003317BC; if (t_ == 0x3317c4U) goto L_003317C4; if (t_ == 0x3317ccU) goto L_003317CC; if (t_ == 0x3317d4U) goto L_003317D4; if (t_ == 0x3317d8U) goto L_003317D8; }
L_00331754:;
    s5 = 1; goto L_003317D8;
L_0033175C:;
    s5 = 2; goto L_003317D8;
L_00331764:;
    s5 = 3; goto L_003317D8;
L_0033176C:;
    s5 = 4;
    a4 = 1; goto L_003317D8;
L_00331778:;
    s5 = 4;
    a4 = 2; goto L_003317D8;
L_00331784:;
    s5 = 5; goto L_003317D8;
L_0033178C:;
    s5 = 6; goto L_003317D8;
L_00331794:;
    s5 = 7; goto L_003317D8;
L_0033179C:;
    s5 = 8; goto L_003317D8;
L_003317A4:;
    s5 = 9; goto L_003317D8;
L_003317AC:;
    s5 = 10; goto L_003317D8;
L_003317B4:;
    s5 = 11; goto L_003317D8;
L_003317BC:;
    s5 = a1; goto L_003317D8;
L_003317C4:;
    s5 = a2; goto L_003317D8;
L_003317CC:;
    s5 = v0; goto L_003317D8;
L_003317D4:;
    s5 = a3;
L_003317D8:;
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = s1;
    a3 = s5;
    a1 = (s32) ((u32) sp + 0x9cU);
    a2 = v0 & 0x3; v0 = func_0032ED30(a0, a1, a2, a3, a4);
    goto L_00331B20;
L_003317F8:;
    if (s0 == v0) { s5 = 4; goto L_00331820; }
    v1 = 2;
    if (s0 == v1) { s5 = v0; goto L_00331820; }
    v0 = 1;
    if (s0 == v0) { s5 = v1; goto L_00331820; }
    if (s0 == 0) { s5 = v0; goto L_00331820; }
L_00331820:;
    a0 = s1;
    a2 = s5;
    a1 = (s32) ((u32) sp + 0x9cU);
    a3 = 1; v0 = func_00330400(a0, a1, a2);
    goto L_00331B20;
L_0033183C:;
    if (at == 0) goto L_00331B20;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x1c30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x331754U) goto L_00331754; if (t_ == 0x33175cU) goto L_0033175C; if (t_ == 0x331764U) goto L_00331764; if (t_ == 0x33176cU) goto L_0033176C; if (t_ == 0x331778U) goto L_00331778; if (t_ == 0x331784U) goto L_00331784; if (t_ == 0x33178cU) goto L_0033178C; if (t_ == 0x331794U) goto L_00331794; if (t_ == 0x33179cU) goto L_0033179C; if (t_ == 0x3317a4U) goto L_003317A4; if (t_ == 0x3317acU) goto L_003317AC; if (t_ == 0x3317b4U) goto L_003317B4; if (t_ == 0x3317bcU) goto L_003317BC; if (t_ == 0x3317c4U) goto L_003317C4; if (t_ == 0x3317ccU) goto L_003317CC; if (t_ == 0x3317d4U) goto L_003317D4; if (t_ == 0x3317d8U) goto L_003317D8; if (t_ == 0x331860U) goto L_00331860; if (t_ == 0x331880U) goto L_00331880; if (t_ == 0x3318a0U) goto L_003318A0; if (t_ == 0x3318bcU) goto L_003318BC; if (t_ == 0x3318d8U) goto L_003318D8; if (t_ == 0x3318f4U) goto L_003318F4; if (t_ == 0x331910U) goto L_00331910; if (t_ == 0x331934U) goto L_00331934; if (t_ == 0x331958U) goto L_00331958; if (t_ == 0x331a54U) goto L_00331A54; if (t_ == 0x331b20U) goto L_00331B20; }
L_00331860:;
    v0 = func_00312420(a0, a1, a2, a3);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s1 + 4056));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331880:;
    v0 = func_00312420(a0, a1, a2, a3);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s1 + 4060));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003318A0:;
    v0 = func_00235B60();
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4064));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003318BC:;
    v0 = func_00235B60();
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4068));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003318D8:;
    v0 = func_00235B60();
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4084));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003318F4:;
    v0 = func_00235B60();
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4088));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331910:;
    v0 = func_00235B60();
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4076));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + -4));
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331934:;
    v0 = func_00235B60();
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4080));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + -4));
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331958:;
    v0 = func_002308F0();
    v1 = v0 & 0xff;
    v0 = 41;
    if (v1 == v0) goto L_003319CC;
    v0 = 40;
    if (v1 == v0) goto L_003319CC;
    v0 = 43;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_003319A0; }
    v0 = 42;
    if (v1 == v0) goto L_0033199C;
    goto L_00331A10;
L_0033199C:;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
L_003319A0:;
    v0 = (*(volatile u8 *) (u32) (v0 + 8));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x1; if (c_) goto L_003319BC; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 4072)); goto L_003319C0; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_003319BC:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4072));
L_003319C0:;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003319CC:;
    v0 = func_00236630(a0);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 != v0) goto L_003319F4;
    v0 = (s32) 0x20000U;
    v0 = v0 | 0x629a;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_003319F4:;
    v0 = func_00236630(a0);
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4072));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331A10:;
    v0 = func_00234090();
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_00331A38;
    v0 = (s32) 0x20000U;
    v0 = v0 | 0x629a;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331A38:;
    v0 = func_00236630(a0);
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s1 + 4072));
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331A54:;
    v0 = (*(volatile s32 *) (u32) (s1 + 88));
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331B20;
L_00331A60:;
    v0 = func_00364B90(a0, a1, a2, a3);
    goto L_00331BC4;
L_00331A70:;
    v0 = func_00364B20(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331A80:;
    v0 = func_00364AB0(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331A90:;
    v0 = func_00364A40(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331AA0:;
    v0 = func_003651E0(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331AB0:;
    v0 = func_00365120(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331AC0:;
    v0 = func_00364710(a0);
    goto L_00331BC0;
L_00331AD0:;
    v0 = func_00364600(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331AE0:;
    v0 = func_003644F0(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331AF0:;
    v0 = func_00364250(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331B00:;
    v0 = func_003640D0(a0, a1, a2, a3);
    goto L_00331BC0;
L_00331B10:;
    v1 = -1;
L_00331B14:;
    v0 = 1;
    (*(volatile u32 *) (u32) s7) = (u32) v1; goto L_00331BC0;
L_00331B20:;
    v0 = Pes6Job_GetManager();
    a0 = (*(volatile s32 *) (u32) (v0 + 4092));
    v0 = 255;
    if (a0 == v0) { v1 = (*(volatile s32 *) (u32) (sp + 156)); goto L_00331BA8; }
    if (s2 == 0) goto L_00331BA4;
    v1 = (*(volatile u8 *) (u32) (s3 + 7));
    v0 = 2;
    v1 = v1 & 0x3;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 15)); goto L_00331B94; }
    v0 = 1;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s2 + 15)); goto L_00331B7C; }
    v0 = 3;
    if (v1 == v0) { v0 = -1; goto L_00331B74; }
    goto L_00331BA4;
L_00331B74:;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331BA4;
L_00331B7C:;
    v0 = a0 ^ 0x1;
    if (v1 != v0) goto L_00331BA4;
    v0 = -1;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; goto L_00331BA4;
L_00331B94:;
    if (v0 != a0) goto L_00331BA4;
    v0 = -1;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0;
L_00331BA4:;
    v1 = (*(volatile s32 *) (u32) (sp + 156));
L_00331BA8:;
    v0 = -1;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) s7) = (u32) v1; if (c_) goto L_00331BBC; }
    v0 = 2; goto L_00331BC0;
L_00331BBC:;
    v0 = 1;
L_00331BC0:;
L_00331BC4:;
    return v0;
}
