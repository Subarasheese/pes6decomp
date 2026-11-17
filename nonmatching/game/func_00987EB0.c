/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00905590(s64, s64, s64, s64);
s64 func_00983830(s64, s64, s64, s64);
s64 func_00983E90(s64, s64, s64, s64);
s64 func_00988B20(s64, s64, s64, s64);
s64 func_00988C60(s64, s64, s64);
s64 func_0098ED30(s64);
s64 func_0098F750(s64);
s64 func_009975E0(s64);
s64 func_009B3070(s64, s64);
s64 func_009B30B0(s64, s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00AFBAB0(s64);
s64 func_00BDB730(s64);
void func_00C5F5D0(s64);

void func_00987EB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[36];
    s64 sp = (s32) (u32) frame;

    v0 = 255;
    s1 = a0 & 0xff;
    if (s1 == v0) goto L_00987EFC;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00987F00;
L_00987EFC:;
    a0 = 1;
L_00987F00:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) 0x590000U;
    v0 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a1 + 0x1e4fU);
    (*(volatile u8 *) (u32) (v0 + 22081)) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x1e50U);
    v0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = 255;
    a2 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) a1 + (u32) a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) a0 + (u32) a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) (sp + 208)) = (u8) v0;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) (sp + 224)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 208));
    { s32 c_ = v0 == v1; s5 = (*(volatile s16 *) (u32) (s2 + 20)); if (c_) goto L_00987F84; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi; goto L_00987F88;
L_00987F84:;
    a0 = 1;
L_00987F88:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 << 6);
    s0 = 0;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v0 + 7620));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9968));
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00987FF0;
    v1 = (*(volatile u8 *) (u32) (a0 + 477));
    v0 = 37;
    if (v1 != v0) goto L_00987FF0;
    v1 = (*(volatile u8 *) (u32) (s2 + 36));
    v0 = 1;
    if (v1 != v0) goto L_00987FF0;
    func_00C5F5D0(a0);
L_00987FF0:;
    a1 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    v0 = (s32) 0x7fff0000U;
    s7 = v0 | 0xffff;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a0 = (s32) ((u32) a0 + 0x1e50U);
    v0 = 255;
    a1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    s4 = (*(volatile u8 *) (u32) v1);
    a0 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = s4 == v0; fp = 0; if (c_) goto L_00988040; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) v0); hi = (s32) ((s32) s4 % (s32) v0); lo = q_; }
    v1 = hi; goto L_00988044;
L_00988040:;
    v1 = 1;
L_00988044:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = a0 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = 255;
    { s32 c_ = a0 == v1; v0 = (s32) ((u32) v0 + (u32) a1); if (c_) goto L_0098807C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00988080;
L_0098807C:;
    a1 = 1;
L_00988080:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) a1 << 6);
    v1 = 67;
    a1 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a1 + 22));
    if (a0 != v1) goto L_0098811C;
    v1 = (*(volatile u8 *) (u32) a1);
    at = (s32) 0x40000U;
    at = at | 0x1;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    at = (u64) v1 < (u64) at;
    { s32 c_ = at == 0; a0 = (*(volatile s32 *) (u32) (a1 + 272)); if (c_) goto L_009880E8; }
    at = (s32) 0x40000U;
    at = at | 0x1;
    at = (u64) a0 < (u64) at;
    if (at != 0) goto L_009880E8;
    fp = 1; goto L_0098811C;
L_009880E8:;
    at = (s32) 0x100000U;
    at = at | 0x1;
    at = (u64) a0 < (u64) at;
    if (at != 0) goto L_0098811C;
    a1 = (*(volatile u16 *) (u32) (v0 + 280));
    a0 = (*(volatile u16 *) (u32) (v0 + 268)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16384;
    if (at == 0) goto L_0098811C;
    fp = 1;
L_0098811C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    { s32 c_ = v1 != v0; (*(volatile u32 *) (u32) (sp + 256)) = (u32) 0; if (c_) goto L_00988208; }
    s3 = (*(volatile u8 *) (u32) s2);
    a0 = s3; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    a5 = 0;
    v0 = 11;
    v1 = (s32) ((u32) s3 - (u32) v1);
    a3 = (s32) ((u32) v0 - (u32) v1);
    at = a3 < 2;
    { s32 c_ = at != 0; a6 = 1; if (c_) goto L_009881F4; }
    v1 = (s32) 0x590000U;
    a4 = (s32) ((u32) s3 + 0x1U);
    v0 = a6;
    a1 = 23;
    a0 = a6;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a2 = 255;
L_00988178:;
    if (a4 == a2) { t4 = a0; goto L_0098818C; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s3 + (u32) a7);
L_0098818C:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile u8 *) (u32) (a7 + 22));
    if (a7 == a2) goto L_009881E0;
    a7 = (s32) ((u32) s3 + (u32) a6);
    if (a7 == a2) { t4 = v0; goto L_009881C0; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s3 + (u32) a7);
L_009881C0:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    a7 = (*(volatile u8 *) (u32) (a7 + 44));
    if (a7 != 0) goto L_009881E4;
L_009881E0:;
    a5 = (s32) ((u32) a5 + 0x1U);
L_009881E4:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a7 = a6 < a3;
    { s32 c_ = a7 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_00988178; }
L_009881F4:;
    at = a5 < 10;
    if (at == 0) goto L_00988208;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0;
L_00988208:;
    s6 = 0;
L_0098820C:;
    a0 = s2; v0 = func_00BDB730(a0);
    if (v0 == 0) goto L_0098847C;
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 255;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (sp + 256)); goto L_0098870C; }
    v1 = (*(volatile u8 *) (u32) (s2 + 36));
L_00988230:;
    v0 = 1;
    { s32 c_ = v1 == v0; s3 = (*(volatile s32 *) (u32) (s2 + 276)); if (c_) goto L_0098825C; }
    a0 = s2; v0 = func_00905590(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_0098825C;
    s3 = (s32) ((u32) s3 >> 8); goto L_00988464;
L_0098825C:;
    a0 = s2; v0 = func_009975E0(a0);
    if (v0 == 0) goto L_0098847C;
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 24;
    if (v1 == v0) goto L_0098847C;
    v0 = 16;
    if (v1 == v0) goto L_0098847C;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 22083));
    if (v0 == 0) goto L_009882A4;
    v0 = (*(volatile u8 *) (u32) s2);
    if (v0 == s4) goto L_0098847C;
L_009882A4:;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    f1.f = (*(volatile f32 *) (u32) (a0 + 24));
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_009882C8; }
L_009882C8:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_009882D8; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_009882D8:;
    a0 = (*(volatile u16 *) (u32) (a0 + 92));
    a1 = (*(volatile u16 *) (u32) (s2 + 268));
    s3 = (s32) ((u32) s3 + (u32) v0); v0 = func_009B3070(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 276));
    at = (u64) v1 < (u64) (s64) 385;
    { s32 c_ = at != 0; a0 = v0 & 0xffff; if (c_) goto L_0098834C; }
    v0 = (*(volatile u8 *) (u32) s2);
    if (v0 != s4) goto L_00988310;
    at = (u64) v1 < (u64) (s64) 641;
    if (at != 0) goto L_0098834C;
L_00988310:;
    v1 = a0 & 0xffff;
    at = v1 < 18433;
    if (at == 0) goto L_0098834C;
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = 18432;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 - (u32) v1);
    s3 = (s32) ((u32) s3 + (u32) v0); goto L_0098835C;
L_0098834C:;
    v0 = (*(volatile u8 *) (u32) (s2 + 469));
    if (v0 == 0) goto L_0098835C;
    s3 = (s32) ((u32) s3 + 0x2000U);
L_0098835C:;
    a0 = s2; v0 = func_00983E90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 == v0) goto L_00988394;
    v0 = 2;
    if (v1 == v0) { s3 = (s32) ((u32) s3 + 0x600U); goto L_00988394; }
    v0 = 1;
    if (v1 == v0) { s3 = (s32) ((u32) s3 + 0xc00U); goto L_00988394; }
    if (v1 == 0) { s3 = (s32) ((u32) s3 + 0x2000U); goto L_00988394; }
L_00988394:;
    v0 = (*(volatile u8 *) (u32) s2);
    if (v0 == s4) { a0 = s2; goto L_0098871C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v0 < 3;
    if (at != 0) goto L_00988464;
    v1 = (*(volatile u8 *) (u32) (s2 + 36));
    v0 = 1;
    if (v1 != v0) goto L_00988464;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = v1 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00988464;
    a0 = s2; v0 = func_00983E90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 == v0) goto L_00988464;
    v0 = 2;
    if (v1 == v0) goto L_00988450;
    v0 = 1;
    if (v1 == v0) goto L_00988438;
    if (v1 == 0) goto L_00988420;
    at = (u64) s3 < (u64) s7; goto L_00988468;
L_00988420:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 22083));
    if (v0 == 0) { s3 = (s32) ((u32) s3 + 0x2000U); goto L_00988464; }
    s3 = (s32) ((u32) s3 + 0x1000U); goto L_00988464;
L_00988438:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 22083));
    if (v0 == 0) { s3 = (s32) ((u32) s3 + 0xc00U); goto L_00988464; }
    s3 = (s32) ((u32) s3 + 0x200U); goto L_00988464;
L_00988450:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 22083));
    if (v0 == 0) { s3 = (s32) ((u32) s3 + 0x600U); goto L_00988464; }
    s3 = (s32) ((u32) s3 + 0x100U);
L_00988464:;
    at = (u64) s3 < (u64) s7;
L_00988468:;
    if (at == 0) goto L_0098847C;
    v0 = (*(volatile u8 *) (u32) s2);
    s7 = s3;
    (*(volatile u8 *) (u32) (sp + 208)) = (u8) v0;
L_0098847C:;
    v0 = (s32) ((u32) s6 + 0x1U);
    s6 = v0 & 0xff;
    v0 = s6 < 10;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_0098820C; }
    v0 = 255;
    if (s1 == v0) { a0 = 1; goto L_009884A8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009884A8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) 0 - (u32) s5);
    s2 = (s32) ((u32) v0 + (u32) a1);
    f1.i = (s32) v1;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f1.f = (f32) f1.i;
    f0.i = (s32) v0;
    f12.f = (*(volatile f32 *) (u32) (a0 + 16));
    f13.f = (*(volatile f32 *) (u32) (a0 + 24));
    f15.i = (s32) 0;
    f14.f = f0.f * f1.f; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = v0 & 0xffff;
    (*(volatile u16 *) (u32) (sp + 272)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x45a10000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_009887A4;
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = (*(volatile s32 *) (u32) (gp + -31080));
    a0 = a0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == 0) goto L_0098854C;
    a0 = s2; v0 = func_0098F750(a0);
    if (v0 != 0) goto L_009887A4;
L_0098854C:;
    a0 = (s32) 0x7fff0000U;
L_00988550:;
    v1 = 255;
    { s32 c_ = s1 == v1; s4 = a0 | 0xffff; if (c_) goto L_00988570; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v1); hi = (s32) ((s32) s1 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00988574;
L_00988570:;
    a1 = 1;
L_00988574:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    v1 = (s32) 0x590000U;
    s5 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    { s32 c_ = a0 != v1; (*(volatile u32 *) (u32) (sp + 240)) = (u32) 0; if (c_) goto L_00988678; }
    s1 = (*(volatile u8 *) (u32) s5);
    a0 = s1; v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 11;
    a0 = (s32) ((u32) s1 - (u32) a0);
    a5 = 0;
    a3 = (s32) ((u32) v1 - (u32) a0);
    at = a3 < 2;
    { s32 c_ = at != 0; a6 = 1; if (c_) goto L_00988664; }
    v1 = (s32) 0x590000U;
    a4 = (s32) ((u32) s1 + 0x1U);
    t4 = a6;
    a1 = 23;
    a0 = a6;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a2 = 255;
L_009885E8:;
    if (a4 == a2) { t5 = a0; goto L_009885FC; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t5 = (s32) ((u32) s1 + (u32) a7);
L_009885FC:;
    a7 = (s32) ((u32) t5 << 3);
    a7 = (s32) ((u32) a7 + (u32) t5);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile u8 *) (u32) (a7 + 22));
    if (a7 == a2) goto L_00988650;
    a7 = (s32) ((u32) s1 + (u32) a6);
    if (a7 == a2) { t5 = t4; goto L_00988630; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t5 = (s32) ((u32) s1 + (u32) a7);
L_00988630:;
    a7 = (s32) ((u32) t5 << 3);
    a7 = (s32) ((u32) a7 + (u32) t5);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    a7 = (*(volatile u8 *) (u32) (a7 + 44));
    if (a7 != 0) goto L_00988654;
L_00988650:;
    a5 = (s32) ((u32) a5 + 0x1U);
L_00988654:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a7 = a6 < a3;
    { s32 c_ = a7 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_009885E8; }
L_00988664:;
    at = a5 < 10;
    if (at == 0) goto L_00988678;
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v1;
L_00988678:;
    v1 = (*(volatile u8 *) (u32) (sp + 208));
    s2 = 0;
    s7 = v1;
    v1 = (*(volatile u8 *) (u32) (sp + 224));
    v1 = v1;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_00988690:;
    v1 = (*(volatile u8 *) (u32) s5);
    if (v1 != s7) { a0 = s5; goto L_009888A0; }
L_009886A0:;
    v1 = (s32) ((u32) s2 + 0x1U);
    s2 = v1 & 0xff;
    v1 = s2 < 10;
    { s32 c_ = v1 != 0; s5 = (s32) ((u32) s5 + 0x240U); if (c_) goto L_00988690; }
    v1 = (s32) 0x590000U;
    a0 = 5;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 != a0) goto L_00988AB0;
    if (v1 != a0) goto L_009886DC;
    v1 = s0 & 0xff;
    if (v1 != 0) goto L_00988AB0;
L_009886DC:;
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != s7) { a0 = (*(volatile u8 *) (u32) (sp + 208)); goto L_00988AD4; }
L_009886EC:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile u8 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (sp + 224));
    v1 = v1;
    if (a0 != v1) { a0 = (*(volatile u8 *) (u32) (sp + 224)); goto L_00988AE0; }
L_00988704:;
    goto L_00988AEC;
L_0098870C:;
    if (v0 != 0) goto L_0098847C;
    v1 = (*(volatile u8 *) (u32) (s2 + 36)); goto L_00988230;
L_0098871C:;
    v0 = func_00988C60(a0, a1, a2);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00988744;
    v0 = (s32) 0xaaaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) s3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    s3 = (s32) ((u32) v0 >> 1);
L_00988744:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00988464;
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00988770; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00988770:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (*(volatile s32 *) (u32) (s2 + 276));
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 276));
    at = (u64) v1 < (u64) v0;
    if (at == 0) goto L_00988464;
    s3 = (s32) ((u32) s3 >> 2); goto L_00988464;
L_009887A4:;
    a0 = 255; v0 = func_0098ED30(a0);
    a0 = v0 & 0xff;
    v1 = 5;
    if (a0 == v1) goto L_009887DC;
    v1 = 3;
    if (a0 == v1) goto L_009887DC;
    v1 = 2;
    if (a0 == v1) goto L_009887DC;
    a0 = (s32) 0x7fff0000U; goto L_00988550;
L_009887DC:;
    v1 = (*(volatile u8 *) (u32) (sp + 208));
    a0 = v1;
    v1 = 255;
    if (a0 == v1) { a1 = 1; goto L_009887FC; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_009887FC:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    f1.i = (s32) s5;
    a1 = (s32) ((u32) a1 << 6);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (f32) f1.i;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = f0.f * f2.f;
    f2.f = f1.f * f2.f;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_0098854C;
    v1 = (*(volatile u8 *) (u32) (sp + 224));
    a0 = v1;
    v1 = 255;
    if (a0 == v1) { a0 = 1; goto L_0098885C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a0 = hi;
L_0098885C:;
    f0.i = (s32) s5;
    v1 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v1 + (u32) a0);
    f1.f = (f32) f0.i;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 224));
    f0.f = f0.f * f1.f;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_0098854C;
    a0 = 1;
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (v1 + 22081)) = (u8) a0; goto L_0098854C;
L_009888A0:;
    v0 = func_00BDB730(a0);
    if (v0 == 0) goto L_009886A0;
    a0 = (*(volatile u8 *) (u32) (s5 + 22));
    v1 = 255;
    if (a0 == v1) goto L_00988A80;
L_009888C0:;
    v0 = 24;
    { s32 c_ = a0 == v0; s3 = (*(volatile s32 *) (u32) (s5 + 276)); if (c_) goto L_009888F8; }
    v0 = 68;
    if (a0 == v0) goto L_009888F8;
    v0 = 13;
    if (a0 == v0) goto L_009888F8;
    v0 = 16;
    if (a0 == v0) goto L_009888F8;
    goto L_00988A98;
L_009888F8:;
    s3 = (s32) ((u32) s3 + 0x2000U);
L_00988900:;
    v0 = (*(volatile u16 *) (u32) (s5 + 268));
    a0 = (*(volatile u16 *) (u32) (sp + 272));
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = v0 & 0xffff; v0 = func_009B30B0(a0, a1);
    s1 = v0 & 0xff;
    a0 = s5;
    s6 = s3; v0 = func_00983830(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 3;
    if (a0 == v1) goto L_00988978;
    v1 = 2;
    if (a0 == v1) goto L_00988970;
    v1 = 1;
    if (a0 == v1) goto L_00988968;
    if (a0 == 0) goto L_00988960;
    goto L_009889B0;
L_00988960:;
    s3 = (s32) ((u32) s3 + 0x2000U); goto L_009889B0;
L_00988968:;
    s3 = (s32) ((u32) s3 + 0xc00U); goto L_009889B0;
L_00988970:;
    s3 = (s32) ((u32) s3 + 0x600U); goto L_009889B0;
L_00988978:;
    a0 = 255; v0 = func_0098ED30(a0);
    a0 = v0 & 0xff;
    v1 = 5;
    if (a0 == v1) goto L_00988998;
    goto L_009889B0;
L_00988998:;
    a1 = s3;
    a2 = s1 & 0xff;
    a0 = s5; v0 = func_00988B20(a0, a1, a2, a3);
    s3 = v0;
L_009889B0:;
    v1 = (*(volatile u8 *) (u32) s5);
    { u32 a_ = (u32) (sp + 160) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    if (a0 != v1) goto L_00988A28;
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (a1 + 7620));
    a0 = (*(volatile u8 *) (u32) (a0 + 9968));
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) a1 / (u32) a0); hi = (s32) ((u32) a1 % (u32) a0); lo = q_; }
    a1 = hi;
    a0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 9950));
    a0 = (u64) a1 < (u64) a0;
    if (a0 != 0) goto L_00988A00;
    a0 = (s32) 0xcccc0000U;
    a0 = a0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) a0 * (s64) (u64) (u32) s3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = hi;
    s3 = (s32) ((u32) a0 >> 3);
L_00988A00:;
    a0 = s1 & 0xff;
    at = a0 < 32;
    if (at == 0) goto L_00988A58;
    a1 = (s32) ((u32) s3 >> 1);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a0 = (s32) ((u32) a0 >> 5);
    s3 = (s32) ((u32) a1 + (u32) a0); goto L_00988A58;
L_00988A28:;
    at = (u64) s3 < (u64) (s64) 768;
    if (at == 0) goto L_00988A58;
    a0 = s1 & 0xff;
    at = a0 < 32;
    if (at == 0) goto L_00988A58;
    a1 = (s32) ((u32) s3 >> 1);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a0 = (s32) ((u32) a0 >> 5);
    s3 = (s32) ((u32) a1 + (u32) a0);
L_00988A58:;
    if (fp == 0) goto L_00988A68;
    s3 = s6;
L_00988A68:;
    at = (u64) s4 < (u64) s3;
    if (at != 0) goto L_009886A0;
    s4 = s3;
    s0 = v1 & 0xff; goto L_009886A0;
L_00988A80:;
    v1 = (*(volatile s32 *) (u32) (sp + 240));
    if (v1 != 0) goto L_009886A0;
    goto L_009888C0;
L_00988A98:;
    a0 = s5; v0 = func_009975E0(a0);
    if (v0 != 0) goto L_00988900;
    s3 = (s32) ((u32) s3 + 0x2000U); goto L_00988900;
L_00988AB0:;
    v1 = s0 & 0xff;
    (*(volatile u8 *) (u32) (sp + 224)) = (u8) v1;
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 22083));
    if (v1 == 0) goto L_009886DC;
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (v1 + 22083)) = (u8) 0; goto L_009886DC;
L_00988AD4:;
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_009886EC;
L_00988AE0:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_00988704;
L_00988AEC:;
    return;
}
