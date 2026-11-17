/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00983E90(s32, s32, s32, s32);
void func_009855F0(s32);
s32 func_009975E0(s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00AFBAB0(s32);

void func_00985770(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
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

    s4 = a0;
    s3 = a1;
    s2 = a2;
    a0 = (*(volatile u8 *) (u32) a0);
    f21.i = f12.i;
    f20.i = f13.i; v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 255;
    if (a0 == v1) { a1 = 1; goto L_009857E4; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_009857E4:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    { s32 c_ = s3 != 0; s1 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_00985804; }
    s1 = (s32) ((u32) s1 + 0x240U);
L_00985804:;
    v1 = (s32) 0x7fff0000U;
    a3 = (*(volatile u8 *) (u32) (s1 + 19));
    s5 = v1 | 0xffff;
    a2 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    a2 = (s32) ((u32) a2 + 0x1e53U);
    a4 = 255;
    a1 = (s32) ((u32) a1 + 0x1e54U);
    s7 = 0;
    s6 = s5;
    a3 = (s32) ((u32) a3 << 1);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a1 = (s32) ((u32) a1 + (u32) a3);
    (*(volatile u8 *) (u32) a2) = (u8) a4;
    v1 = 5;
    { s32 c_ = a0 != v1; (*(volatile u8 *) (u32) a1) = (u8) a4; if (c_) goto L_00985934; }
    s0 = (*(volatile u8 *) (u32) s1);
    a0 = s0; v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 11;
    a0 = (s32) ((u32) s0 - (u32) a0);
    a3 = (s32) ((u32) v1 - (u32) a0);
    v1 = s3 & 0xff;
    v1 = (u64) 0 < (u64) v1;
    a6 = v1 ^ 0x1;
    at = a6 < a3;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_00985918; }
    v1 = (s32) 0x590000U;
    a4 = (s32) ((u32) s0 + (u32) a6);
    a0 = 1;
    a1 = 23;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a2 = 255;
L_0098589C:;
    if (a4 == a2) { t4 = a0; goto L_009858B0; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s0 + (u32) a7);
L_009858B0:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile u8 *) (u32) (a7 + 22));
    if (a7 == a2) goto L_00985904;
    a7 = (s32) ((u32) s0 + (u32) a6);
    if (a7 == a2) { t4 = a0; goto L_009858E4; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s0 + (u32) a7);
L_009858E4:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    a7 = (*(volatile u8 *) (u32) (a7 + 44));
    if (a7 != 0) goto L_00985908;
L_00985904:;
    a5 = (s32) ((u32) a5 + 0x1U);
L_00985908:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a7 = a6 < a3;
    { s32 c_ = a7 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_0098589C; }
L_00985918:;
    v1 = (s32) ((u32) s3 + 0x9U);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 + 0x1U);
    at = a5 < v1;
    if (at == 0) goto L_00985934;
    s7 = 1;
L_00985934:;
    v1 = (s32) ((u32) s3 + 0xaU);
    at = 0 < v1;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00985CCC; }
L_00985944:;
    a0 = s1; v0 = func_009975E0(a0);
    if (v0 == 0) goto L_00985CB8;
    a2 = (*(volatile u8 *) (u32) (s1 + 22));
    v1 = 255;
    if (a2 == v1) goto L_00985978;
    v1 = 53;
    if (a2 == v1) goto L_00985CB8;
    goto L_00985980;
L_00985978:;
    if (s7 != 0) goto L_00985CB8;
L_00985980:;
    if (s2 == 0) goto L_00985A54;
    v1 = 2;
    if (s2 == v1) { a1 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00985A08; }
    v1 = 5;
    if (s2 == v1) goto L_009859B4;
    v1 = 3;
    if (s2 == v1) goto L_009859B4;
    v1 = 5; goto L_00985A60;
L_009859B4:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9956));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x40000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) { a0 = s1; goto L_00985CE8; }
L_009859F8:;
    if (s1 != s4) goto L_00985A5C;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_00985CBC;
L_00985A08:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e00U);
    a0 = (*(volatile u8 *) (u32) s1);
    a1 = (s32) ((u32) a1 << 1);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) (a1 + 80));
    if (a0 == v1) goto L_00985A5C;
    v1 = 21;
    if (a2 == v1) goto L_00985A48;
    v1 = 7;
    if (a2 == v1) goto L_00985A48;
    goto L_00985CB8;
L_00985A48:;
    v1 = (*(volatile u8 *) (u32) (a1 + 79));
    if (a0 == v1) goto L_00985CB8;
L_00985A54:;
    if (s1 == s4) goto L_00985CB8;
L_00985A5C:;
    v1 = 5;
L_00985A60:;
    if (s2 == v1) goto L_00985AA8;
    v1 = 4;
    if (s2 == v1) { f1.f = (*(volatile f32 *) (u32) (s1 + 224)); goto L_00985A7C; }
    v1 = (s32) 0x590000U; goto L_00985BD4;
L_00985A7C:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.f = f1.f - f21.f;
    f0.f = f0.f - f20.f;
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    v1 = f1.i;
    a0 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; } goto L_00985C80;
L_00985AA8:;
    v1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v1 + 9956));
    { s32 c_ = a2 < 0; f4.f = (*(volatile f32 *) (u32) (s1 + 240)); if (c_) goto L_00985AC4; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00985AE0;
L_00985AC4:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00985AE0:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f4.f * f2.f;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    { s32 c_ = a2 < 0; f3.f = (*(volatile f32 *) (u32) (s1 + 248)); if (c_) goto L_00985B14; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00985B30;
L_00985B14:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00985B30:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.f = f0.f - f20.f;
    f0.i = (s32) f0.f;
    a3 = f0.i;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a2 = (*(volatile u8 *) (u32) (s1 + 19));
    a0 = 255;
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1e00U);
    a2 = a2 ^ 0x1;
    a2 = (s32) ((u32) a2 << 1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) (a1 + 79));
    { s32 c_ = a1 == a0; { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a3 * (s64) (u64) (u32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; } if (c_) goto L_00985B90; }
    a0 = 23;
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a0); hi = (s32) ((s32) a1 % (s32) a0); lo = q_; }
    a2 = hi; goto L_00985B94;
L_00985B90:;
    a2 = 1;
L_00985B94:;
    a0 = (s32) ((u32) a2 << 3);
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a0 + (u32) a2);
    a1 = (s32) ((u32) a1 + 0xffffe5b0U);
    a0 = (*(volatile s32 *) (u32) (s1 + 284));
    a2 = (s32) ((u32) a2 << 6);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) (a1 + 292));
    a0 = (s32) ((u32) a0 + 0xffff8000U);
    a0 = (s32) ((u32) a0 + 0xffff8000U);
    at = (u64) a1 < (u64) a0;
    if (at == 0) goto L_00985C80;
    a0 = (s32) 0x40000U;
    v1 = (s32) ((u32) v1 + (u32) a0); goto L_00985C80;
L_00985BD4:;
    a2 = (*(volatile u8 *) (u32) (v1 + 9964));
    { s32 c_ = a2 < 0; f4.f = (*(volatile f32 *) (u32) (s1 + 240)); if (c_) goto L_00985BEC; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00985C08;
L_00985BEC:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00985C08:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f4.f * f2.f;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    { s32 c_ = a2 < 0; f3.f = (*(volatile f32 *) (u32) (s1 + 248)); if (c_) goto L_00985C3C; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00985C58;
L_00985C3C:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00985C58:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.f = f0.f - f20.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
L_00985C80:;
    at = s6 < v1;
    if (at == 0) { a1 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00985D04; }
    at = s5 < v1;
    if (at != 0) goto L_00985CB8;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    s5 = v1;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) s1);
    v1 = (s32) ((u32) v1 + 0x1e00U);
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (v1 + 84)) = (u8) a1;
L_00985CB8:;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00985CBC:;
    v1 = (s32) ((u32) s3 + 0xaU);
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00985944; }
L_00985CCC:;
    v1 = (s32) 0x590000U;
    a0 = 5;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00985D30; }
L_00985CE0:;
    goto L_00985D40;
L_00985CE8:;
    v0 = func_00983E90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    if (v1 == 0) goto L_00985CB8;
    goto L_009859F8;
L_00985D04:;
    a0 = (s32) 0x590000U;
    s5 = s6;
    a0 = (s32) ((u32) a0 + 0x1e00U);
    s6 = v1;
    v1 = (*(volatile u8 *) (u32) s1);
    a1 = (s32) ((u32) a1 << 1);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a1 + 83));
    (*(volatile u8 *) (u32) (a1 + 84)) = (u8) a0;
    (*(volatile u8 *) (u32) (a1 + 83)) = (u8) v1; goto L_00985CB8;
L_00985D30:;
    func_009855F0(a0);
    goto L_00985CE0;
L_00985D40:;
    return;
}
