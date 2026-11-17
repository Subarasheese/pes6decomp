/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B33A0(s64, s64, s64);
s64 func_009B33F0(s64, s64, s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);

s64 func_00B99C30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_s0 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[108];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    s4 = a0;
    s3 = a1;
    a0 = (*(volatile u16 *) (u32) (a1 + 38));
    f20.f = (*(volatile f32 *) (u32) (v1 + 7788));
    f21.f = (*(volatile f32 *) (u32) (v0 + 7796));
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    (*(volatile u8 *) (u32) (sp + 863)) = (u8) a2; v0 = func_009B3070(a0, a1);
    v1 = v0 & 0xffff;
    a0 = s4;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    s0 = (s32) v1 >> 12; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    fp = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    a0 = s4; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s1 = v0;
    a0 = s4;
    a1 = s3; v0 = func_009B33F0(a0, a1, a2, a3);
    a0 = s1;
    a1 = v0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = 0 < s0;
    { s32 c_ = at == 0; { u32 a_ = (u32) (sp + 800) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_00B99D00; }
    a1 = 80; goto L_00B99D04;
L_00B99D00:;
    a1 = 0;
L_00B99D04:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) ((u32) v1 << 1);
    s1 = (s32) ((u32) v1 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s4; v0 = func_009B33A0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 784) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    s5 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.f = f20.f - f1.f;
    f0.f = f21.f - f0.f;
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a0 = s3;
    f0.i = (s32) f20.f;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a1 = f0.i;
    f0.i = (s32) f21.f;
    a2 = f0.i;
    { u32 a_ = (u32) (sp + 768) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B33A0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 752) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    a0 = (*(volatile u16 *) (u32) (s3 + 38));
    v0 = (s64) ((u64) s1 << 32);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    v0 = v0 >> 32;
    (*(volatile u64 *) (u32) (sp + 816)) = (u64) v0; v0 = func_009B3070(a0, a1);
    a0 = s3;
    f12.i = f20.i;
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = s3;
    f12.i = f20.i;
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    a0 = s3;
    f12.i = f20.i;
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = (*(volatile u16 *) (u32) (s3 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 8193;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_00B99E88;
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = (*(volatile u16 *) (u32) (s3 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 20480;
L_00B99E88:;
    if (v0 == 0) goto L_00B99EB4;
    a0 = s3;
    f12.i = f20.i;
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 20480;
L_00B99EB4:;
    if (v0 == 0) goto L_00B99ED8;
    a0 = s3;
    f12.i = f20.i;
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
L_00B99ED8:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s4; v0 = func_009B33A0(a0, a1, a2);
    s6 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 736) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s4;
    a1 = s3; v0 = func_009B33F0(a0, a1, a2, a3);
    s7 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    a0 = s4; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    a0 = s3; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s1 = v0 & 0xffff;
    a0 = s7;
    a1 = s2; v0 = func_009B3070(a0, a1);
    a0 = s7;
    a1 = s2; v0 = func_009B3070(a0, a1);
    a0 = s1;
    a1 = s2; v0 = func_009B3070(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = (*(volatile u16 *) (u32) (s3 + 38)); v0 = func_009B3070(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s4 + 40));
    a0 = (*(volatile u16 *) (u32) (s3 + 40)); v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 38));
    a1 = s2; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 40));
    a1 = s2; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    a1 = s2; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s4 + 40));
    a1 = s2; v0 = func_009B3070(a0, a1);
    { u32 a_ = (u32) (sp + 800) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = fp & 0xffff;
    a3 = (*(volatile u8 *) (u32) s3);
    v0 = v0 & 0xffff;
    v0 = v0 < 5376;
    { u32 a_ = (u32) (sp + 704) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 784) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    fp = (s32) ((u32) v0 - (u32) s5);
    v0 = s7 < 5376;
    { u32 a_ = (u32) (sp + 720) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = 0 < fp;
    { u32 a_ = (u32) (sp + 688) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x190000U;
    v0 = s5 < v0;
    { u32 a_ = (u32) (sp + 672) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v0 + 7705));
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 7706));
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) 0x66660000U;
    v1 = v0 | 0x6667;
    v0 = a3 ^ a2;
    v0 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 656) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a3 ^ a1;
    v0 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 640) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a0 >> 31);
    a1 = hi;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x590000U;
    a0 = s3;
    v0 = (*(volatile s32 *) (u32) (v0 + 7716));
    a1 = (s32) a1 >> 2;
    a1 = (s32) ((u32) a1 + (u32) a2);
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    v0 = (u64) v0 < (u64) a1;
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    { u32 a_ = (u32) (sp + 624) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B33A0(a0, a1, a2);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    v0 = (u64) v0 < (u64) (s64) 4096;
    { u32 a_ = (u32) (sp + 608) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7705));
    v0 = (*(volatile u8 *) (u32) s4);
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) (sp + 832)) = (u32) 0; if (c_) goto L_00B9A0CC; }
    v0 = (*(volatile u8 *) (u32) s3);
    if (v0 == v1) goto L_00B9A0CC;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 832)) = (u32) v0;
L_00B9A0CC:;
    v0 = s7 < 24576;
    a5 = (s32) 0x590000U;
    { u32 a_ = (u32) (sp + 592) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a5 = (s32) ((u32) a5 + 0x1e4fU);
    v0 = (s32) 0x590000U;
    a6 = (*(volatile u8 *) (u32) (s4 + 19));
    a1 = (*(volatile s32 *) (u32) (v0 + 7984));
    v1 = (s32) 0x1900000U;
    a3 = (*(volatile s32 *) (u32) (s3 + 272));
    a0 = s3;
    a4 = (*(volatile u8 *) (u32) s3);
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 7988));
    v0 = a6 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    a5 = (s32) ((u32) a5 + (u32) v0);
    v0 = (u64) a3 < (u64) v1;
    v1 = (*(volatile u8 *) (u32) a5);
    { u32 a_ = (u32) (sp + 560) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a1 ^ 0x7fff;
    v0 = (u64) 0 < (u64) v0;
    { u32 a_ = (u32) (sp + 544) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a4 ^ v1;
    v0 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 576) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B33A0(a0, a1, a2);
    v1 = (*(volatile s64 *) (u32) (sp + 816));
    a0 = (s32) 0x1900000U;
    v0 = (u64) v0 < (u64) a0;
    { u32 a_ = (u32) (sp + 528) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = (s64) ((u64) v1 << 32);
    a2 = a2 >> 32;
    { s64 m_ = (s64) (u64) (u32) a2 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = hi;
    v0 = v1;
    v1 = v0 >> 32;
    { u64 s_ = (u64) a0, t_ = (u64) a1; v0 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_v0 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a4 = lo1; }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a0 = (s32) 0x590000U;
    a5 = (*(volatile u8 *) (u32) (a0 + 7705));
    a3 = (*(volatile s32 *) (u32) (gp + -32252));
    a2 = (s64) ((u64) a4 + (u64) a2);
    { u32 a_ = (u32) (sp + 768) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a2 = (s64) ((u64) a2 << 32);
    a2 = (s64) ((u64) a2 + (u64) v0);
    a0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (a0 + 7140));
    a4 = (*(volatile u16 *) (u32) (a3 + 132));
    a1 = (s64) ((u64) v1 << 32);
    a1 = a1 >> 32;
    v1 = s0 < 7;
    s7 = (u64) a1 < (u64) a2;
    v1 = v1 ^ 0x1;
    { u32 a_ = (u32) (sp + 512) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s7 = s7 ^ 0x1;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s4);
    a2 = (*(volatile u8 *) (u32) (a0 + 7706));
    a3 = (*(volatile u8 *) (u32) (a3 + 225));
    a0 = (s32) 0x2aaa0000U;
    a1 = a0 | 0xaaab;
    a0 = a5 ^ v1;
    v1 = v1 ^ a2;
    a0 = (u64) 0 < (u64) a0;
    v1 = (u64) v1 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 496) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 384) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a0 = a4 ^ 0xf;
    v1 = a4 ^ 0xa;
    v1 = (u64) 0 < (u64) v1;
    { u32 a_ = (u32) (sp + 480) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (u64) 0 < (u64) a0;
    { u32 a_ = (u32) (sp + 464) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a0 = a3 ^ 0xa;
    v1 = a4 ^ 0xb;
    v1 = (u64) 0 < (u64) v1;
    { u32 a_ = (u32) (sp + 448) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (u64) a0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 432) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a0 = a3 ^ 0xb;
    v1 = a3 ^ 0xf;
    v1 = (u64) v1 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 416) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (u64) a0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 400) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v0 >> 31);
    a0 = hi;
    v1 = (s32) 0x590000U;
    a3 = (*(volatile s32 *) (u32) (v1 + 7720));
    a2 = (s32) ((u32) v0 >> 1);
    v0 = (s32) 0x590000U;
    a4 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 38));
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    v1 = (*(volatile s32 *) (u32) (v0 + 7716));
    v0 = (u64) a3 < (u64) a4;
    { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (u64) v1 < (u64) a2;
    { u32 a_ = (u32) (sp + 352) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 38));
    v0 = v0 & 0xffff;
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    v0 = v0 < 8193;
    v0 = v0 ^ 0x1;
    { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    a0 = s3;
    v0 = v0 < 20480;
    f12.i = f20.i;
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    a0 = s3;
    v0 = v0 < 20480;
    f12.i = f20.i;
    { u32 a_ = (u32) (sp + 304) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = v0; v0 = func_009B3070(a0, a1);
    { u32 a_ = (u32) (sp + 752) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 & 0xffff;
    v0 = v0 < 20480;
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    v1 = (s32) ((u32) v1 + 0x40U);
    v0 = s5 < v1;
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 736) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = s6 < v0;
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 736) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + 0x6400U);
    v0 = s6 < v0;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    a0 = s2;
    v0 = v0 < 16384;
    a1 = s1;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    v0 = v0 & 0xffff;
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    v0 = v0 < 4096;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s4 + 40));
    v0 = v0 & 0xffff;
    a1 = (*(volatile u16 *) (u32) (s3 + 40));
    v0 = v0 < 12288;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    v0 = v0 & 0xffff;
    v0 = v0 < 10240;
    a1 = s2;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s4 + 40));
    a1 = s2;
    v0 = v0 & 0xffff;
    s2 = v0 < 12288; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 38));
    v0 = v0 & 0xffff;
    s4 = v0 < 10240;
    a1 = s1; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 40));
    a1 = s1;
    v0 = v0 & 0xffff;
    s1 = v0 < 12288; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    { u32 a_ = (u32) (sp + 768) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a7 = v0 < 10240;
    a0 = (s64) ((u64) fp << 32);
    { u32 a_ = (u32) (sp + 720) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = a0 >> 32;
    a3 = (u64) a0 < (u64) (s64) 4096;
    a1 = (*(volatile u8 *) (u32) s3);
    a5 = s0 < 1;
    a4 = s0 < 2;
    t7 = 0;
    a2 = s5 < v1;
    v1 = (u64) 0 < (u64) v0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7756));
    v0 = (s32) 0x40000U;
    a6 = a0 ^ a1;
    v0 = s6 < v0;
    { s32 c_ = v1 == 0; a6 = (u64) a6 < (u64) (s64) 1; if (c_) goto L_00B9A40C; }
    { u32 a_ = (u32) (sp + 704) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A40C:;
    if (v1 == 0) goto L_00B9A41C;
    { u32 a_ = (u32) (sp + 688) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A41C:;
    if (v1 == 0) goto L_00B9A434;
    { u32 a_ = (u32) (sp + 672) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 == 0) goto L_00B9A434;
    t7 = 1;
L_00B9A434:;
    { u32 a_ = (u32) (sp + 656) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    { s32 c_ = v1 != 0; t6 = 1; if (c_) goto L_00B9A45C; }
    { u32 a_ = (u32) (sp + 640) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00B9A45C;
    { u32 a_ = (u32) (sp + 624) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A45C:;
    if (v1 != 0) goto L_00B9A46C;
    { u32 a_ = (u32) (sp + 608) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A46C:;
    if (v1 != 0) goto L_00B9A4A4;
    v1 = (*(volatile u8 *) (u32) (sp + 863));
    v1 = v1;
    v1 = v1 ^ 0;
    v1 = (u64) v1 < (u64) (s64) 1;
    if (v1 == 0) goto L_00B9A4A4;
    v1 = (*(volatile s32 *) (u32) (sp + 832));
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00B9A4A4;
    { u32 a_ = (u32) (sp + 592) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A4A4:;
    if (v1 != 0) goto L_00B9A4F0;
    { u32 a_ = (u32) (sp + 576) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00B9A4E4;
    { u32 a_ = (u32) (sp + 560) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 != 0) goto L_00B9A4E4;
    { u32 a_ = (u32) (sp + 544) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00B9A4E4;
    { u32 a_ = (u32) (sp + 528) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A4E4:;
    if (v1 != 0) goto L_00B9A4F0;
    t6 = 0;
L_00B9A4F0:;
    { u32 a_ = (u32) (sp + 512) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 == 0) { s7 = 1; goto L_00B9A4FC; }
L_00B9A4FC:;
    { u32 a_ = (u32) (sp + 496) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = v1 != 0; t5 = 1; if (c_) goto L_00B9A53C; }
    { u32 a_ = (u32) (sp + 480) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00B9A520;
    { u32 a_ = (u32) (sp + 464) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A520:;
    if (v1 == 0) goto L_00B9A530;
    { u32 a_ = (u32) (sp + 448) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A530:;
    if (v1 != 0) goto L_00B9A53C;
    t5 = 0;
L_00B9A53C:;
    { u32 a_ = (u32) (sp + 432) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 != 0) goto L_00B9A554;
    { u32 a_ = (u32) (sp + 416) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A554:;
    if (v1 != 0) goto L_00B9A564;
    { u32 a_ = (u32) (sp + 400) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A564:;
    if (v1 == 0) goto L_00B9A574;
    { u32 a_ = (u32) (sp + 384) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A574:;
    if (v1 == 0) goto L_00B9A584;
    { u32 a_ = (u32) (sp + 368) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A584:;
    if (v1 == 0) goto L_00B9A594;
    { u32 a_ = (u32) (sp + 352) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A594:;
    a1 = v1 ^ 0x1;
    { u32 a_ = (u32) (sp + 336) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00B9A5B0;
    { u32 a_ = (u32) (sp + 320) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A5B0:;
    if (v1 == 0) goto L_00B9A5C0;
    { u32 a_ = (u32) (sp + 304) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A5C0:;
    if (v1 == 0) goto L_00B9A5D0;
    { u32 a_ = (u32) (sp + 288) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A5D0:;
    if (v1 == 0) goto L_00B9A5E0;
    { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v1 = (u64) 0 < (u64) v1;
L_00B9A5E0:;
    a0 = v1 ^ 0x1;
    s0 = 1;
    v1 = (*(volatile u8 *) (u32) (sp + 863));
    v1 = v1;
    { s32 c_ = v1 != s0; t4 = 0; if (c_) goto L_00B9A6A4; }
    { u32 a_ = (u32) (sp + 256) & ~15U; s0 = *(volatile s64 *) a_; qh_s0 = *(volatile u64 *) (a_ + 8); }
    s0 = (u64) 0 < (u64) s0;
    if (s0 == 0) goto L_00B9A610;
    { u32 a_ = (u32) (sp + 224) & ~15U; s0 = *(volatile s64 *) a_; qh_s0 = *(volatile u64 *) (a_ + 8); }
    s0 = (u64) 0 < (u64) s0;
L_00B9A610:;
    if (s0 == 0) goto L_00B9A620;
    { u32 a_ = (u32) (sp + 208) & ~15U; s0 = *(volatile s64 *) a_; qh_s0 = *(volatile u64 *) (a_ + 8); }
    s0 = (u64) 0 < (u64) s0;
L_00B9A620:;
    if (s0 != 0) goto L_00B9A680;
    { u32 a_ = (u32) (sp + 240) & ~15U; s0 = *(volatile s64 *) a_; qh_s0 = *(volatile u64 *) (a_ + 8); }
    s0 = (u64) 0 < (u64) s0;
    if (s0 == 0) goto L_00B9A680;
    { u32 a_ = (u32) (sp + 192) & ~15U; s0 = *(volatile s64 *) a_; qh_s0 = *(volatile u64 *) (a_ + 8); }
    s0 = (u64) 0 < (u64) s0;
    if (s0 == 0) goto L_00B9A650;
    { u32 a_ = (u32) (sp + 176) & ~15U; s0 = *(volatile s64 *) a_; qh_s0 = *(volatile u64 *) (a_ + 8); }
    s0 = (u64) 0 < (u64) s0;
L_00B9A650:;
    if (s0 == 0) goto L_00B9A65C;
    s0 = (u64) 0 < (u64) s2;
L_00B9A65C:;
    if (s0 == 0) goto L_00B9A668;
    s0 = (u64) 0 < (u64) s4;
L_00B9A668:;
    if (s0 == 0) goto L_00B9A674;
    s0 = (u64) 0 < (u64) s1;
L_00B9A674:;
    if (s0 == 0) goto L_00B9A680;
    s0 = (u64) 0 < (u64) a7;
L_00B9A680:;
    if (s0 == 0) goto L_00B9A698;
    s0 = (u64) 0 < (u64) a6;
    if (s0 != 0) goto L_00B9A698;
    s0 = (u64) 0 < (u64) v0;
L_00B9A698:;
    if (s0 == 0) goto L_00B9A6A4;
    t4 = 1;
L_00B9A6A4:;
    a6 = (u64) 0 < (u64) t4;
    v0 = (u64) 0 < (u64) t7;
    { s32 c_ = v0 != 0; a6 = a6 ^ 0x1; if (c_) goto L_00B9A6F4; }
    v0 = (u64) 0 < (u64) t6;
    if (v0 == 0) goto L_00B9A6C4;
    v0 = (u64) 0 < (u64) s7;
L_00B9A6C4:;
    if (v0 == 0) goto L_00B9A6D0;
    v0 = (u64) 0 < (u64) t5;
L_00B9A6D0:;
    if (v0 == 0) goto L_00B9A6DC;
    v0 = (u64) 0 < (u64) a1;
L_00B9A6DC:;
    if (v0 == 0) goto L_00B9A6E8;
    v0 = (u64) 0 < (u64) a0;
L_00B9A6E8:;
    if (v0 == 0) goto L_00B9A6F4;
    v0 = (u64) 0 < (u64) a6;
L_00B9A6F4:;
    if (v0 != 0) goto L_00B9A734;
    v0 = v1 ^ 0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_00B9A734;
    v0 = (u64) 0 < (u64) a5;
    if (v0 != 0) goto L_00B9A728;
    v0 = (u64) 0 < (u64) a4;
    if (v0 == 0) goto L_00B9A728;
    v0 = (u64) 0 < (u64) a3;
L_00B9A728:;
    if (v0 == 0) goto L_00B9A734;
    v0 = (u64) 0 < (u64) a2;
L_00B9A734:;
    return v0;
}
