/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B30B0(s64, s64);
s64 func_009B33A0(s64, s64, s64);
s64 func_009B9AE0(s64, s64);
void func_009D9C50(s64, s64, s64, s64, f32, f32, f32);
s64 func_00A9B980(s64);

s64 func_009DC6D0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    s4 = a2;
    s3 = a3;
    s1 = a0;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.f = (*(volatile f32 *) (u32) a3);
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; s0 = a1; if (c_) goto L_009DC8E0; }
    v1 = (*(volatile u8 *) (u32) (s1 + 74));
    v0 = 13;
    if (v1 != v0) goto L_009DC744;
    v0 = (s32) 0x590000U;
    s2 = (*(volatile u8 *) (u32) (v0 + 9980)); goto L_009DC74C;
L_009DC744:;
    v0 = (s32) 0x590000U;
    s2 = (*(volatile u8 *) (u32) (v0 + 9948));
L_009DC74C:;
    v1 = (*(volatile s32 *) (u32) (s4 + 12));
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    v0 = v1 < v0;
    if (v0 != 0) { f0.f = (*(volatile f32 *) (u32) s4); goto L_009DC8E8; }
L_009DC760:;
    a0 = s1;
    a1 = s0; v0 = func_009B9AE0(a0, a1);
    a0 = v0 & 0xffff;
    v1 = (*(volatile s32 *) (u32) (s4 + 16));
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    v0 = (s32) ((u32) v0 + (u32) s2);
    at = v0 < v1;
    if (at == 0) goto L_009DC980;
    v0 = a0 & 0xffff;
    at = v0 < 48;
    if (at == 0) goto L_009DC980;
    f0.f = (*(volatile f32 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    a2 = (s32) 0x590000U;
    v0 = (s32) 0xb60b0000U;
    a2 = (s32) ((u32) a2 + 0x2980U);
    v1 = -688;
    v0 = v0 | 0x60b7;
    (*(volatile f32 *) (u32) (a0 + 5204)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (a0 + 5212)) = f0.f;
    (*(volatile u8 *) (u32) (s1 + 74)) = (u8) 0;
    a3 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a1 = (s32) ((u32) a3 << 8);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 140));
    a0 = (s64) ((u64) a0 << 56);
    a0 = (s64) ((u64) a0 >> 58);
    a0 = (s32) ((u32) a0 + 0x94U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f1.i = (s32) v1;
    f0.f = (*(volatile f32 *) (u32) (v0 + 5208));
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) s3); goto L_009DC900; }
L_009DC84C:;
    v0 = (s32) 0x590000U;
    v1 = 157;
    v0 = (*(volatile u8 *) (u32) (v0 + 9950));
    (*(volatile u8 *) (u32) (s1 + 98)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 22));
    if (v0 != v1) { s4 = 3072; goto L_009DC874; }
    s4 = 2048;
    s2 = (s64) ((u64) 0 + (u64) (s64) 48); goto L_009DC878;
L_009DC874:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 32);
L_009DC878:;
    f1.f = (*(volatile f32 *) (u32) s3);
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (u64) v0 < (u64) v1;
    if (v0 != 0) { a0 = s1; goto L_009DC938; }
    v0 = (*(volatile u16 *) (u32) (s1 + 48));
L_009DC8AC:;
    if (v0 != 0) goto L_009DC958;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (*(volatile u16 *) (u32) (v0 + 88));
    a1 = (*(volatile u16 *) (u32) (s0 + 42)); v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    v0 = s2 & 0xffff;
    at = v0 < v1;
    if (at == 0) goto L_009DC958;
L_009DC8D8:;
    v0 = 1; goto L_009DC984;
L_009DC8E0:;
    v0 = 0; goto L_009DC984;
L_009DC8E8:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v0 + 5204)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 8));
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v0 + 5212)) = f0.f; goto L_009DC760;
L_009DC900:;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    v1 = (s32) 0x90000U;
    v0 = (u64) v0 < (u64) v1;
    if (v0 != 0) goto L_009DC84C;
    (*(volatile u8 *) (u32) (s1 + 74)) = (u8) 0;
    v0 = 1; goto L_009DC984;
L_009DC938:;
    v0 = func_00A9B980(a0);
    v1 = (s32) 0x240000U;
    v0 = v0 < v1;
    if (v0 != 0) goto L_009DC8D8;
    v0 = (*(volatile u16 *) (u32) (s1 + 48)); goto L_009DC8AC;
L_009DC958:;
    a1 = s0;
    a0 = s1; func_009D9C50(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9948));
    (*(volatile u8 *) (u32) (s1 + 70)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 9948));
    (*(volatile u8 *) (u32) (s1 + 98)) = (u8) v0; goto L_009DC8D8;
L_009DC980:;
    v0 = 0;
L_009DC984:;
    return v0;
}
