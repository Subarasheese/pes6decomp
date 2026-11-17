/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s64, s64);
void func_00209A00(s64, s64, s64);
s64 func_002AE670(s64);
s64 func_009B3070(s64, s64);
s64 func_009B30B0(s64, s64);
s64 func_009B33A0(s64, s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);
void func_00AADDF0(s64);
s64 func_00AB3590(s64, s64);
s64 func_00B0B6B0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32);

s64 func_00AEDC50(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 28));
    at = v0 < 6913;
    { s32 c_ = at == 0; s0 = a1; if (c_) goto L_00AEDCE8; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    v0 = v0 < 1024;
    if (v0 != 0) { v0 = 0; goto L_00AEDFA8; }
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9980));
    { s32 c_ = v0 < 0; f1.f = (*(volatile f32 *) (u32) (v1 + 9944)); if (c_) goto L_00AEDCB8; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00AEDCD4;
L_00AEDCB8:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00AEDCD4:;
    fcc = f1.f <= f0.f;
    if (!fcc) { a0 = 10; goto L_00AEDCF0; }
    v0 = 0; goto L_00AEDFA8;
L_00AEDCE8:;
    v0 = 0; goto L_00AEDFA8;
L_00AEDCF0:;
    v0 = func_002AE670(a0);
    a4 = (*(volatile u8 *) (u32) (s4 + 18));
    s3 = v0;
    a3 = (s32) 0x590000U;
    a0 = (s32) 0xb30f0000U;
    a2 = (*(volatile u8 *) (u32) (s4 + 17));
    a3 = (s32) ((u32) a3 + 0x2980U);
    a0 = a0 | 0x6353;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) s3 << 2);
    a1 = (s32) ((u32) a4 << 4);
    a4 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a2 = (s32) ((u32) a4 << 8);
    a1 = (s32) ((u32) a1 << 3);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) (a1 + 140));
    a1 = (s64) ((u64) a1 << 56);
    a1 = (s64) ((u64) a1 >> 58);
    a2 = (s32) ((u32) a1 + 0x94U);
    a1 = (s32) ((u32) 0 - (u32) a2);
    a1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a2 = (s32) ((u32) a1 << 4);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 2044));
    v1 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a1);
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (fcc) { v0 = 0; goto L_00AEDFA8; }
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    v0 = 255;
    f0.i = (s32) f0.f;
    s2 = f1.i;
    s1 = f0.i;
    if (v1 == v0) { a0 = 1; goto L_00AEDDDC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AEDDDC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = s2;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a2 = s1;
    a0 = s0; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x10000U;
    at = at | 0x9000;
    at = v0 < at;
    { s32 c_ = at == 0; s5 = (*(volatile u16 *) (u32) (s4 + 268)); if (c_) goto L_00AEDE20; }
    v0 = 0; goto L_00AEDFA8;
L_00AEDE20:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = s5; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 80;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00AEDE48; }
    v0 = 0; goto L_00AEDFA8;
L_00AEDE48:;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s4 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 96;
    if (at == 0) { a0 = s4; goto L_00AEDE6C; }
    v0 = 0; goto L_00AEDFA8;
L_00AEDE6C:;
    a1 = 788; v0 = func_00AB3590(a0, a1);
    f1.i = (s32) s2;
    a0 = s4;
    f0.i = (s32) s1;
    f12.f = (f32) f1.i;
    s2 = v0 & 0xffff;
    f13.f = (f32) f0.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a3 = (*(volatile u8 *) (u32) s0);
    a4 = v0 & 0xffff;
    a2 = (s32) 0x10000U;
    a1 = 0x8001;
    a0 = 1;
    v0 = -1;
    v1 = s2 & 0xffff;
    a3 = (s32) ((u32) a3 << 1);
    a3 = (s32) ((u32) a3 + (u32) s4);
    a3 = (*(volatile u16 *) (u32) (a3 + 296));
    a3 = (s32) ((u32) a4 - (u32) a3);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a2 = a2 & 0xffff;
    s1 = a2 < a1;
    if (s1 != 0) a0 = v0;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    (*(volatile u64 *) (u32) sp) = (u64) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32420));
    a1 = 788;
    a3 = (*(volatile s32 *) (u32) (s4 + 28));
    a4 = s1;
    a5 = 0;
    a6 = s3;
    v1 = v1 & 0xffff;
    a0 = s4;
    v1 = (s32) ((u32) s5 - (u32) v1);
    a7 = s3;
    s2 = v1 & 0xffff;
    f12.f = (*(volatile f32 *) (u32) v0);
    a2 = s2; v0 = func_00B0B6B0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    if (v0 != 0) { v0 = 255; goto L_00AEDF20; }
    v0 = 0; goto L_00AEDFA8;
L_00AEDF20:;
    a1 = 788;
    (*(volatile u16 *) (u32) (s4 + 26)) = (u16) v0;
    (*(volatile u8 *) (u32) (s4 + 102)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) s1;
    (*(volatile u16 *) (u32) (s4 + 44)) = (u16) s2;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 4; func_00207390(a0, a1);
    a0 = s4; func_00AADDF0(a0);
    (*(volatile u8 *) (u32) (s4 + 102)) = (u8) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (s4 + 148)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) s0);
    (*(volatile u16 *) (u32) (s4 + 54)) = (u16) v0;
    (*(volatile u32 *) (u32) (s4 + 156)) = (u32) 0;
    (*(volatile u8 *) (u32) (s4 + 74)) = (u8) 0;
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    a0 = 12;
    if ((s32) s3 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) s3); hi = (s32) ((s32) v0 % (s32) s3); lo = q_; }
    v1 = 40;
    a1 = lo;
    v0 = 1;
    (*(volatile u16 *) (u32) (s4 + 56)) = (u16) a1;
    (*(volatile u8 *) (u32) (s4 + 22)) = (u8) a0;
    (*(volatile u16 *) (u32) (s4 + 24)) = (u16) v1;
L_00AEDFA8:;
    return v0;
}
