/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Ball_CopyPosition(s64);
s64 Pes6MatchPlayer_GetTeamRelativeX(s64, s64);
s64 Pes6MatchPlayer_GetTeamRelativeXZ(s64, s64, s64);
s64 func_0030D990(s64);
s64 func_0030E750(s64, s64, s64, s64);
f32 func_0030EBB0(s64, s64, f32);
s64 func_0030FAB0(s64, s64, s64, s64);
s64 func_00313ED0(s64);
s64 func_00336A80(s64, s64);
s64 func_003405E0(f32, f32);
s64 func_00340F30(s64);
s64 func_00340F80(s64);
s64 func_00340FA0(s64);
s64 func_00340FC0(s64);
s64 func_00341040(s64);
s64 func_00341090(s64);
s64 func_00341390(s64);
s64 func_003413D0(s64, s64, s64, s64);
s64 func_00341620(s64);

s64 func_00313F40(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = 0; v0 = func_00313ED0(a0);
    s3 = (s32) 0xcb0000U;
    s3 = (s32) ((u32) s3 + 0x5f20U);
L_00313F78:;
    a0 = (*(volatile u8 *) (u32) (s2 + 10));
    v1 = (*(volatile u8 *) (u32) (s3 + 8));
    { s32 c_ = v1 != a0; s0 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_0031484C; }
    v1 = (*(volatile u8 *) (u32) (s0 + 5));
    v0 = 4;
    (*(volatile u8 *) (u32) (s2 + 19)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) s0);
    if (v1 == v0) { (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0; goto L_003148F0; }
    v0 = 5;
    if (v1 == v0) goto L_00314840;
    v0 = 3;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (s0 + 48)); goto L_0031407C; }
    v0 = 1;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (s0 + 33)); goto L_00313FCC; }
    goto L_00314840;
L_00313FCC:;
    a1 = 16;
    if (a2 == a1) { v1 = 1; goto L_0031402C; }
    v0 = 6;
    if (a2 == v0) goto L_00314028;
    v0 = 11;
    if (a2 == v0) { v1 = 1; goto L_00314014; }
    a0 = 13;
    if (a2 == a0) goto L_00314010;
    v1 = 12;
    if (a2 == v1) goto L_00314010;
    v0 = 9; goto L_00314040;
L_00314010:;
    v1 = 1;
L_00314014:;
    v0 = 10;
    (*(volatile u8 *) (u32) (s2 + 40)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0; goto L_003148F0;
L_00314028:;
    v1 = 1;
L_0031402C:;
    v0 = 9;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 41)) = (u8) v1; goto L_003148F0;
L_00314040:;
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 19));
    if (v0 == a0) { v0 = 1; goto L_0031406C; }
    if (v0 == v1) goto L_00314068;
    if (v0 == a1) { (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0; goto L_003148F0; }
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0; goto L_00314074;
L_00314068:;
    v0 = 1;
L_0031406C:;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) v0; goto L_003148F0;
L_00314074:;
    goto L_003148F0;
L_0031407C:;
    { s32 c_ = v0 < 0; s3 = (s32) ((u32) s0 + 0x20U); if (c_) goto L_00314090; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_003140AC;
L_00314090:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_003140AC:;
    v0 = (s32) 0x4a800000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; v1 = 1; if (c_) goto L_003140C8; }
    v1 = 0;
L_003140C8:;
    (*(volatile u8 *) (u32) (s2 + 43)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) s3);
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 4));
    v0 = v0 ^ 0x2;
    v0 = (u64) v0 < (u64) (s64) 1;
    (*(volatile u8 *) (u32) (s2 + 28)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    v0 = (s64) ((u64) v0 << 61);
    v0 = (s64) ((u64) v0 >> 63);
    (*(volatile u8 *) (u32) (s2 + 34)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    v0 = (s64) ((u64) v0 << 60);
    v0 = (s64) ((u64) v0 >> 63);
    (*(volatile u8 *) (u32) (s2 + 33)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 6));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
    (*(volatile u8 *) (u32) (s2 + 32)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 7));
    v0 = v0 ^ 0;
    v0 = (u64) v0 < (u64) (s64) 1;
    (*(volatile u8 *) (u32) (s2 + 36)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_0031413C; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00314154;
L_0031413C:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00314154:;
    v0 = (s32) 0x47800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; v1 = 1; if (c_) goto L_00314170; }
    v1 = 0;
L_00314170:;
    if (v1 == 0) { (*(volatile u8 *) (u32) (s2 + 20)) = (u8) v1; goto L_00314184; }
    v0 = (*(volatile u8 *) (u32) (gp + -21560));
    v1 = (u64) 0 < (u64) v0;
    (*(volatile u8 *) (u32) (s2 + 20)) = (u8) v1;
L_00314184:;
    a0 = (*(volatile u8 *) (u32) (s2 + 17)); v0 = func_00340FC0(a0);
    if (v0 == 0) { v0 = 1; goto L_0031419C; }
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0; goto L_003141C4;
L_0031419C:;
    a0 = (s32) ((u32) sp + 0x98U);
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) v0;
    a1 = s0; v0 = func_00336A80(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 152));
    v0 = 3;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s3 + 16)); goto L_003141C8; }
    v0 = (*(volatile u16 *) (u32) (s2 + 60));
    (*(volatile u16 *) (u32) (s2 + 48)) = (u16) v0;
L_003141C4:;
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
L_003141C8:;
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_003141DC; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_003141F4;
L_003141DC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_003141F4:;
    v0 = (s32) 0x47800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; v1 = 1; if (c_) goto L_00314210; }
    v1 = 0;
L_00314210:;
    if (v1 == 0) goto L_00314220;
    v0 = (*(volatile u8 *) (u32) (s2 + 31));
    v1 = (u64) 0 < (u64) v0;
L_00314220:;
    if (v1 == 0) { (*(volatile u8 *) (u32) (s2 + 20)) = (u8) v1; goto L_00314234; }
    v0 = (*(volatile u8 *) (u32) (gp + -21560));
    v1 = (u64) 0 < (u64) v0;
    (*(volatile u8 *) (u32) (s2 + 20)) = (u8) v1;
L_00314234:;
    a0 = (*(volatile u8 *) (u32) (s2 + 10)); v0 = func_0030E750(a0, a1, a2, a3);
    s4 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x80U); v0 = Pes6Ball_CopyPosition(a0);
    a1 = s4;
    a0 = (s32) ((u32) sp + 0x90U); v0 = Pes6MatchPlayer_GetTeamRelativeX(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    v0 = 8;
    if (v1 != v0) { (*(volatile u8 *) (u32) (s2 + 38)) = (u8) 0; goto L_0031430C; }
    f3.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.i = (s32) f3.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_0031427C; }
L_0031427C:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x43f00000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { (*(volatile u8 *) (u32) (s2 + 38)) = (u8) 0; goto L_0031430C; }
    f2.f = (*(volatile f32 *) (u32) (sp + 128));
    f0.i = (s32) f2.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_003142BC; }
L_003142BC:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x43f00000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00314308;
    f1.f = f2.f * f3.f;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00314308;
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 38)) = (u8) v0; goto L_0031430C;
L_00314308:;
    (*(volatile u8 *) (u32) (s2 + 38)) = (u8) 0;
L_0031430C:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s1 << 6);
    v0 = (s32) ((u32) v0 + 0x5f20U);
    a1 = (*(volatile u8 *) (u32) (s2 + 10));
    v0 = (s32) ((u32) v0 + (u32) v1);
    s5 = s1;
    s4 = (s32) ((u32) v0 + 0x4U);
    v1 = 255;
    a0 = s4;
L_00314330:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    if (v0 == a1) { s5 = (s32) ((u32) s5 + 0x1U); goto L_00314364; }
    if (v0 == v1) goto L_00314360;
    v0 = func_00341090(a0);
    if (v0 == 0) goto L_00314370;
    s6 = s5;
    v0 = 1; goto L_00314374;
L_00314360:;
    s5 = (s32) ((u32) s5 + 0x1U);
L_00314364:;
    v0 = s5 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_00314330; }
L_00314370:;
    v0 = 0;
L_00314374:;
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_003143C4; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s6 << 6);
    v0 = (s32) ((u32) v0 + 0x5f45U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = 6;
    if (v1 != v0) { v0 = 3; goto L_003143A8; }
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003143AC;
L_003143A8:;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0;
L_003143AC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 28));
    v0 = 1;
    if (v1 != v0) goto L_003148F0;
    (*(volatile u8 *) (u32) (s2 + 41)) = (u8) v0; goto L_003148F0;
L_003143C4:;
    s5 = s1;
    a0 = s4;
    v1 = 255;
L_003143D0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    if (v0 == a1) { s5 = (s32) ((u32) s5 + 0x1U); goto L_00314404; }
    if (v0 == v1) goto L_00314400;
    v0 = func_00340F30(a0);
    if (v0 == 0) goto L_00314410;
    s6 = s5;
    v0 = 1; goto L_00314414;
L_00314400:;
    s5 = (s32) ((u32) s5 + 0x1U);
L_00314404:;
    v0 = s5 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_003143D0; }
L_00314410:;
    v0 = 0;
L_00314414:;
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_00314520; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s6 << 6);
    v0 = (s32) ((u32) v0 + 0x5f20U);
    a1 = 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 8));
    f12.f = (*(volatile f32 *) (u32) (v0 + 24));
    s1 = (s32) ((u32) v0 + 0x4U); f0.f = func_0030EBB0(a0, a1, f12.f);
    v0 = (*(volatile u8 *) (u32) (s1 + 6));
    (*(volatile f32 *) (u32) (sp + 156)) = f0.f;
    a0 = s1;
    v0 = v0 & 0x1;
    (*(volatile u8 *) (u32) (s2 + 35)) = (u8) v0; v0 = func_00341040(a0);
    if (v0 == 0) { v0 = (s32) 0x45be0000U; goto L_0031446C; }
    v0 = 7;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003144B4;
L_0031446C:;
    v0 = v0 | 0xf266;
    f1.f = (*(volatile f32 *) (u32) (sp + 156));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00314494;
    v0 = 4;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003144B4;
L_00314494:;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 5; goto L_003144B0; }
    v0 = 6;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003144B4;
L_003144B0:;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0;
L_003144B4:;
    f2.f = (*(volatile f32 *) (u32) (s1 + 20));
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45020000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { f1.f = (*(volatile f32 *) (u32) (s0 + 20)); goto L_003144E4; }
    v0 = 3;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0; goto L_003148F0;
L_003144E4:;
    f0.i = (s32) 0;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = 2; goto L_00314510; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0;
    v0 = (*(volatile u16 *) (u32) (s2 + 60));
    (*(volatile u16 *) (u32) (s2 + 52)) = (u16) v0; goto L_003148F0;
L_00314510:;
    (*(volatile u8 *) (u32) (s2 + 42)) = (u8) v0;
    v0 = (*(volatile u16 *) (u32) (s2 + 60));
    (*(volatile u16 *) (u32) (s2 + 50)) = (u16) v0; goto L_003148F0;
L_00314520:;
    s5 = s1;
    a0 = s4;
    v1 = 255;
L_0031452C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    if (v0 == a1) { s5 = (s32) ((u32) s5 + 0x1U); goto L_00314560; }
    if (v0 == v1) goto L_0031455C;
    v0 = func_00341620(a0);
    if (v0 == 0) goto L_00314570;
    s6 = s5;
    v0 = 1; goto L_00314574;
L_0031455C:;
    s5 = (s32) ((u32) s5 + 0x1U);
L_00314560:;
    v0 = s5 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_0031452C; }
L_00314570:;
    v0 = 0;
L_00314574:;
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_00314598; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 != v1) goto L_003148F0;
    (*(volatile u8 *) (u32) (s2 + 40)) = (u8) v1; goto L_003148F0;
L_00314598:;
    s5 = s1;
    a0 = s4;
    v1 = 255;
L_003145A4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    if (v0 == a1) { s5 = (s32) ((u32) s5 + 0x1U); goto L_003145D8; }
    if (v0 == v1) goto L_003145D4;
    v0 = func_00341390(a0);
    if (v0 == 0) goto L_003145E8;
    s6 = s5;
    v0 = 1; goto L_003145EC;
L_003145D4:;
    s5 = (s32) ((u32) s5 + 0x1U);
L_003145D8:;
    v0 = s5 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_003145A4; }
L_003145E8:;
    v0 = 0;
L_003145EC:;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s3 + 5)); goto L_00314608; }
    v0 = 8;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0;
    v0 = (*(volatile u16 *) (u32) (s2 + 60));
    (*(volatile u16 *) (u32) (s2 + 54)) = (u16) v0; goto L_003148F0;
L_00314608:;
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_00314674; }
    a2 = (*(volatile u8 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) sp + 0x94U);
    a1 = (s32) ((u32) sp + 0x9cU); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f13.f = (*(volatile f32 *) (u32) (sp + 156));
    f12.f = (*(volatile f32 *) (u32) (sp + 148)); v0 = func_003405E0(f12.f, f13.f);
    if (v0 == 0) { v0 = 9; goto L_0031466C; }
    f0.f = (*(volatile f32 *) (u32) (sp + 156));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44700000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00314668;
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 45)) = (u8) v0;
L_00314668:;
    v0 = 9;
L_0031466C:;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003148F0;
L_00314674:;
    s0 = s1;
    a0 = s4;
    v1 = 255;
L_00314680:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    if (v0 == a1) { s0 = (s32) ((u32) s0 + 0x1U); goto L_003146B4; }
    if (v0 == v1) goto L_003146B0;
    v0 = func_003413D0(a0, a1, a2, a3);
    if (v0 == 0) goto L_003146C0;
    s6 = s0;
    v0 = 1; goto L_003146C4;
L_003146B0:;
    s0 = (s32) ((u32) s0 + 0x1U);
L_003146B4:;
    v0 = s0 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_00314680; }
L_003146C0:;
    v0 = 0;
L_003146C4:;
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s2 + 10)); goto L_00314748; }
    v0 = 10;
    v1 = (s32) ((u32) s6 << 6);
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0;
    v0 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) (s2 + 10));
    v0 = (s32) ((u32) v0 + 0x5f20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile u8 *) (u32) (v0 + 8));
    s1 = (s32) ((u32) v0 + 0x4U); v0 = func_0030E750(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 != v0) { a0 = (*(volatile u8 *) (u32) (s1 + 4)); goto L_0031470C; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 46)) = (u8) v0; goto L_003148F0;
L_0031470C:;
    v0 = func_0030FAB0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s2 + 10));
    s0 = v0 & 0xff; v0 = func_0030FAB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 == v0) goto L_003148F0;
    a0 = (*(volatile u8 *) (u32) (s1 + 4)); v0 = func_0030D990(a0);
    v1 = 1;
    if (v0 != v1) goto L_003148F0;
    (*(volatile u8 *) (u32) (s2 + 47)) = (u8) v1; goto L_003148F0;
L_00314748:;
    s0 = s1;
    a0 = s4;
    v1 = 255;
L_00314754:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    if (v0 == a1) { s0 = (s32) ((u32) s0 + 0x1U); goto L_00314788; }
    if (v0 == v1) goto L_00314784;
    v0 = func_00340F80(a0);
    if (v0 == 0) goto L_00314798;
    s6 = s0;
    v0 = 1; goto L_0031479C;
L_00314784:;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00314788:;
    v0 = s0 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_00314754; }
L_00314798:;
    v0 = 0;
L_0031479C:;
    if (v0 != 0) goto L_003147FC;
    a0 = (*(volatile u8 *) (u32) (s2 + 10));
    v1 = 255;
L_003147AC:;
    v0 = (*(volatile u8 *) (u32) (s4 + 4));
    if (v0 == a0) { s1 = (s32) ((u32) s1 + 0x1U); goto L_003147E0; }
    if (v0 == v1) goto L_003147DC;
    a0 = s4; v0 = func_00340FA0(a0);
    if (v0 == 0) goto L_003147F0;
    s6 = s1;
    v0 = 1; goto L_003147F4;
L_003147DC:;
    s1 = (s32) ((u32) s1 + 0x1U);
L_003147E0:;
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x40U); if (c_) goto L_003147AC; }
L_003147F0:;
    v0 = 0;
L_003147F4:;
    if (v0 == 0) { v0 = 10; goto L_00314838; }
L_003147FC:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s6 << 6);
    v0 = (s32) ((u32) v0 + 0x5f20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile u8 *) (u32) (v0 + 8));
    a0 = (*(volatile u8 *) (u32) (s2 + 10)); v0 = func_0030E750(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 != v0) { v0 = 10; goto L_00314830; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 46)) = (u8) v0;
    v0 = 10;
L_00314830:;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003148F0;
L_00314838:;
    (*(volatile u8 *) (u32) (s2 + 29)) = (u8) v0; goto L_003148F0;
L_00314840:;
    (*(volatile u8 *) (u32) (s2 + 31)) = (u8) 0;
    goto L_003148F0;
L_0031484C:;
    v0 = 255;
    if (v1 != v0) goto L_003148E0;
    v1 = (*(volatile u8 *) (u32) (s0 + 32));
    v0 = 1;
    if (v1 == v0) goto L_00314880;
    v0 = 2;
    if (v1 == v0) goto L_00314880;
    goto L_003148E0;
L_00314880:;
    f12.f = (*(volatile f32 *) (u32) (s0 + 20));
    f1.i = f12.i & 0x7FFFFFFF;
    v0 = (s32) 0x445e0000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_003148B0;
    v0 = 3;
    (*(volatile u8 *) (u32) (s2 + 18)) = (u8) v0; goto L_003148E0;
L_003148B0:;
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    f1.i = (s32) 0;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_003148D8;
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 18)) = (u8) v0; goto L_003148E0;
L_003148D8:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 18)) = (u8) v0;
L_003148E0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x40U); if (c_) goto L_00313F78; }
L_003148F0:;
    v0 = 1;
    return v0;
}
