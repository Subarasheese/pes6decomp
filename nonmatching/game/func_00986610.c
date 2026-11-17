/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009855F0(s32);
s32 func_009975E0(s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00AFBAB0(s32);

void func_00986610(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s7 = a0;
    (*(volatile u8 *) (u32) (sp + 191)) = (u8) a1;
    s4 = a2;
    v1 = (*(volatile u8 *) (u32) (sp + 191));
    v1 = v1;
    f21.i = f12.i;
    { s32 c_ = v1 != 0; f20.i = f13.i; if (c_) goto L_009866A4; }
    a1 = 2;
    v1 = 255;
    a0 = (s32) ((u32) a1 - (u32) s4);
    if (a0 == v1) { a1 = 1; goto L_00986688; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) v1); hi = (s32) ((s32) s4 % (s32) v1); lo = q_; }
    v1 = hi;
    a1 = (s32) ((u32) a1 - (u32) v1);
L_00986688:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s1 = (s32) ((u32) v1 + (u32) a0); goto L_009866E0;
L_009866A4:;
    a1 = 13;
    v1 = 255;
    a0 = (s32) ((u32) a1 - (u32) s4);
    if (a0 == v1) { a1 = 1; goto L_009866C8; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) v1); hi = (s32) ((s32) s4 % (s32) v1); lo = q_; }
    v1 = hi;
    a1 = (s32) ((u32) a1 - (u32) v1);
L_009866C8:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s1 = (s32) ((u32) v1 + (u32) a0);
L_009866E0:;
    v1 = (s32) 0x7fff0000U;
    s0 = 255;
    s2 = v1 | 0xffff;
    fp = s0;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    { s32 c_ = a0 != v1; s6 = 0; if (c_) goto L_009867E8; }
    s3 = (*(volatile u8 *) (u32) s1);
    a0 = s3; v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 11;
    a0 = (s32) ((u32) s3 - (u32) a0);
    a3 = (s32) ((u32) v1 - (u32) a0);
    v1 = s4 & 0xff;
    v1 = (u64) 0 < (u64) v1;
    a6 = v1 ^ 0x1;
    at = a6 < a3;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_009867CC; }
    v1 = (s32) 0x590000U;
    a4 = (s32) ((u32) s3 + (u32) a6);
    a0 = 1;
    a1 = 23;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a2 = s0;
L_00986750:;
    if (a4 == a2) { t4 = a0; goto L_00986764; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s3 + (u32) a7);
L_00986764:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile u8 *) (u32) (a7 + 22));
    if (a7 == a2) goto L_009867B8;
    a7 = (s32) ((u32) s3 + (u32) a6);
    if (a7 == a2) { t4 = a0; goto L_00986798; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s3 + (u32) a7);
L_00986798:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    a7 = (*(volatile u8 *) (u32) (a7 + 44));
    if (a7 != 0) goto L_009867BC;
L_009867B8:;
    a5 = (s32) ((u32) a5 + 0x1U);
L_009867BC:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a7 = a6 < a3;
    { s32 c_ = a7 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_00986750; }
L_009867CC:;
    v1 = (s32) ((u32) s4 + 0x9U);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 + 0x1U);
    at = a5 < v1;
    if (at == 0) goto L_009867E8;
    s6 = 1;
L_009867E8:;
    v1 = (s32) ((u32) s4 + 0xaU);
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; s3 = 0; if (c_) goto L_00986840; }
    v1 = (*(volatile u8 *) (u32) (sp + 191));
L_009867FC:;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e53U);
    v1 = v1;
    a2 = (s32) ((u32) v1 << 1);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x1e54U);
    (*(volatile u8 *) (u32) a1) = (u8) s0;
    a0 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) a0) = (u8) fp;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    a0 = 5;
    if (v1 == a0) { a0 = (*(volatile u8 *) (u32) (sp + 191)); goto L_009869DC; }
L_00986838:;
    goto L_009869EC;
L_00986840:;
    a0 = s1; v0 = func_009975E0(a0);
    if (v0 == 0) goto L_009869C0;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
    v1 = 255;
    if (a0 == v1) goto L_00986878;
    v1 = 53;
    if (a0 == v1) goto L_009869C0;
    goto L_00986888;
L_00986878:;
    if (s6 == 0) goto L_009868B0;
    goto L_009869C0;
L_00986888:;
    a0 = (*(volatile u8 *) (u32) (s1 + 477));
    v1 = 1;
    if (a0 != v1) goto L_009868B0;
    v1 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 21178));
    if (a0 == v1) goto L_009869C0;
L_009868B0:;
    if (s1 == s7) goto L_009869C0;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 9964));
    { s32 c_ = a1 < 0; f4.f = (*(volatile f32 *) (u32) (s1 + 240)); if (c_) goto L_009868D4; }
    f0.i = (s32) a1;
    f2.f = (f32) f0.i; goto L_009868F0;
L_009868D4:;
    v1 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_009868F0:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f4.f * f2.f;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s32 c_ = a1 < 0; f3.f = (*(volatile f32 *) (u32) (s1 + 248)); if (c_) goto L_00986924; }
    f0.i = (s32) a1;
    f2.f = (f32) f0.i; goto L_00986940;
L_00986924:;
    v1 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00986940:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.f = f0.f - f20.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f12.i = f21.i;
    f13.i = f20.i;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s5 = lo; }
    a0 = s1; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v1 + 88));
    a0 = v0; v0 = func_009B30B0(a0, a1);
    a0 = v0 & 0xffff;
    v1 = 128;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = v1 & 0xffff;
    v1 = (s32) ((u32) v1 << 4);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) ((u32) s5 + (u32) v1);
    at = s2 < v1;
    if (at != 0) goto L_009869C0;
    fp = s0;
    s2 = v1;
    s0 = (*(volatile u8 *) (u32) s1);
L_009869C0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) ((u32) s4 + 0xaU);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00986840; }
    v1 = (*(volatile u8 *) (u32) (sp + 191)); goto L_009867FC;
L_009869DC:;
    func_009855F0(a0);
    goto L_00986838;
L_009869EC:;
    return;
}
