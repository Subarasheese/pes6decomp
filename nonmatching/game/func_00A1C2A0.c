/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00987A40(s32, s32, s32, f32, f32);
s32 func_009B30B0(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00AFBA70(s32);
s32 func_00AFBAB0(s32);

s32 func_00A1C2A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    f0.i = (s32) 0;
    s5 = a2;
    s4 = a0;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; s3 = a1; if (c_) goto L_00A1C340; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00A1C324; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A1C324:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a2 = (s32) ((u32) v0 + (u32) v1); goto L_00A1C388;
L_00A1C340:;
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00A1C370; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A1C370:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a2 = (s32) ((u32) v0 + (u32) v1);
L_00A1C388:;
    if (s4 == a2) goto L_00A1C470;
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00A1C470;
    v1 = (*(volatile s16 *) (u32) (s4 + 20));
    v0 = (s32) 0xc6510000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    a1 = (s32) ((u32) s3 << 2);
    f1.i = (s32) v1;
    v0 = (s32) ((u32) a1 + (u32) a0);
    f6.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f1.f = (f32) f1.i;
    f1.f = f1.f * f6.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A1C470;
    f0.i = (s32) s3;
    f5.f = (*(volatile f32 *) (u32) (a2 + 224));
    f2.f = (*(volatile f32 *) (u32) (a2 + 240));
    f4.f = (f32) f0.i;
    f1.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (v0 + 2940));
    acc = f1.f + f5.f;
    f0.f = acc + f2.f * f4.f;
    f0.f = f0.f - f6.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    f2.f = (*(volatile f32 *) (u32) (a2 + 232));
    f0.f = (*(volatile f32 *) (u32) (a2 + 248));
    acc = f1.f + f2.f;
    f0.f = acc + f0.f * f4.f;
    f0.f = f0.f - f3.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a0 = (s32) ((u32) s5 + 0x1000U);
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = v0 < a0;
    if (v0 != 0) { v0 = 2; goto L_00A1C684; }
    f1.f = f5.f - f6.f;
    f0.f = f2.f - f3.f;
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < a0;
    if (at == 0) goto L_00A1C470;
    v0 = 2; goto L_00A1C684;
L_00A1C470:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s1 = (s32) ((u32) s3 << 2);
    v1 = (*(volatile u8 *) (u32) (s4 + 19));
    a1 = 0;
    a2 = 0;
    v0 = (s32) ((u32) s1 + (u32) v0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    v1 = v1 ^ 0x1;
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = v1 & 0xff; func_00987A40(a0, a1, a2, f12.f, f13.f);
    s2 = 0;
L_00A1C4A0:;
    a0 = (*(volatile u8 *) (u32) (s4 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e00U);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v1 + 83));
    if (v1 == v0) goto L_00A1C548;
    if (v1 == v0) { a0 = 1; goto L_00A1C4E0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A1C4E0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00A1C548;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) s1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s0; v0 = func_009B33A0(a0, a1, a2);
    s6 = v0;
    at = s6 < s5;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A1C560; }
    v0 = 1; goto L_00A1C684;
L_00A1C548:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    if (v0 != 0) goto L_00A1C4A0;
    v0 = 0; goto L_00A1C684;
L_00A1C560:;
    v0 = (s32) ((u32) s1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s4; v0 = func_009B33A0(a0, a1, a2);
    v1 = (s32) ((u32) s6 + 0x1000U);
    at = (u64) v1 < (u64) v0;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A1C618; }
L_00A1C594:;
    v1 = (*(volatile s32 *) (u32) (s4 + 272));
    v0 = (*(volatile s32 *) (u32) (s0 + 272));
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) s4); goto L_00A1C65C; }
L_00A1C5A8:;
    f1.i = (s32) s3;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f6.f = (f32) f1.i;
    v0 = (s32) ((u32) s1 + (u32) v0);
    f4.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 240));
    acc = f4.f + f0.f;
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f5.f = acc + f2.f * f6.f;
    f2.f = (*(volatile f32 *) (u32) (s0 + 248));
    f3.f = f5.f - f3.f;
    acc = f4.f + f1.f;
    f1.f = acc + f2.f * f6.f;
    f0.f = f1.f - f0.f;
    f3.i = (s32) f3.f;
    f0.i = (s32) f0.f;
    v0 = f3.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < s5;
    if (at == 0) goto L_00A1C548;
    v0 = 1; goto L_00A1C684;
L_00A1C618:;
    v0 = (s32) ((u32) s1 + (u32) v0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = s4; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile u8 *) (u32) s0);
    a1 = v0;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) s4 + (u32) v0);
    a0 = (*(volatile u16 *) (u32) (v0 + 296)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00A1C594;
    v0 = 1; goto L_00A1C684;
L_00A1C65C:;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = (*(volatile u16 *) (u32) (s0 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 33;
    if (at == 0) goto L_00A1C5A8;
    v0 = 0;
L_00A1C684:;
    return v0;
}
