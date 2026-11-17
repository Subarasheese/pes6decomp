/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009855F0(s32);
s32 func_00AFBAB0(s32);
s32 func_00BDB730(s32);

void func_00986A20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
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

    fp = a0;
    v1 = fp & 0xff;
    s6 = a1;
    f21.i = f12.i;
    { s32 c_ = v1 != 0; f20.i = f13.i; if (c_) goto L_00986AAC; }
    a1 = 2;
    v1 = 255;
    a0 = (s32) ((u32) a1 - (u32) s6);
    if (a0 == v1) { a1 = 1; goto L_00986A90; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s6 / (s32) v1); hi = (s32) ((s32) s6 % (s32) v1); lo = q_; }
    v1 = hi;
    a1 = (s32) ((u32) a1 - (u32) v1);
L_00986A90:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s2 = (s32) ((u32) v1 + (u32) a0); goto L_00986AE8;
L_00986AAC:;
    a1 = 13;
    v1 = 255;
    a0 = (s32) ((u32) a1 - (u32) s6);
    if (a0 == v1) { a1 = 1; goto L_00986AD0; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s6 / (s32) v1); hi = (s32) ((s32) s6 % (s32) v1); lo = q_; }
    v1 = hi;
    a1 = (s32) ((u32) a1 - (u32) v1);
L_00986AD0:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s2 = (s32) ((u32) v1 + (u32) a0);
L_00986AE8:;
    v1 = fp & 0xff;
    a2 = (*(volatile u8 *) (u32) s2);
    s1 = (s32) ((u32) v1 << 1);
    s7 = 0;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e53U);
    a0 = (s32) ((u32) v1 + (u32) s1);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e54U);
    (*(volatile u8 *) (u32) a0) = (u8) a2;
    a1 = (s32) ((u32) v1 + (u32) s1);
    a0 = 5;
    v1 = (s32) 0x7fff0000U;
    (*(volatile u8 *) (u32) a1) = (u8) a2;
    s3 = v1 | 0xffff;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    { s32 c_ = v1 != a0; s4 = s3; if (c_) goto L_00986C18; }
    s0 = a2 & 0xff;
    a0 = s0; v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 11;
    a0 = (s32) ((u32) s0 - (u32) a0);
    a3 = (s32) ((u32) v1 - (u32) a0);
    v1 = s6 & 0xff;
    v1 = (u64) 0 < (u64) v1;
    a6 = v1 ^ 0x1;
    at = a6 < a3;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_00986BFC; }
    v1 = (s32) 0x590000U;
    a4 = (s32) ((u32) s0 + (u32) a6);
    a0 = 1;
    a1 = 23;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a2 = 255;
L_00986B80:;
    if (a4 == a2) { t4 = a0; goto L_00986B94; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s0 + (u32) a7);
L_00986B94:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile u8 *) (u32) (a7 + 22));
    if (a7 == a2) goto L_00986BE8;
    a7 = (s32) ((u32) s0 + (u32) a6);
    if (a7 == a2) { t4 = a0; goto L_00986BC8; }
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) a1); hi = (s32) ((s32) a6 % (s32) a1); lo = q_; }
    a7 = hi;
    t4 = (s32) ((u32) s0 + (u32) a7);
L_00986BC8:;
    a7 = (s32) ((u32) t4 << 3);
    a7 = (s32) ((u32) a7 + (u32) t4);
    a7 = (s32) ((u32) a7 << 6);
    a7 = (s32) ((u32) v1 + (u32) a7);
    a7 = (*(volatile s32 *) (u32) (a7 + 4));
    a7 = (*(volatile u8 *) (u32) (a7 + 44));
    if (a7 != 0) goto L_00986BEC;
L_00986BE8:;
    a5 = (s32) ((u32) a5 + 0x1U);
L_00986BEC:;
    a6 = (s32) ((u32) a6 + 0x1U);
    a7 = a6 < a3;
    { s32 c_ = a7 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_00986B80; }
L_00986BFC:;
    v1 = (s32) ((u32) s6 + 0x9U);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) v1 + 0x1U);
    at = a5 < v1;
    if (at == 0) goto L_00986C18;
    s7 = 1;
L_00986C18:;
    v1 = (s32) ((u32) s6 + 0xaU);
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; s5 = 0; if (c_) goto L_00986C44; }
L_00986C28:;
    v1 = (s32) 0x590000U;
    a0 = 5;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) { a0 = fp; goto L_00986D94; }
L_00986C3C:;
    goto L_00986DA4;
L_00986C44:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    s1 = (s32) ((u32) v0 + 0x53U);
    s0 = (s32) ((u32) v0 + 0x54U);
L_00986C58:;
    a0 = s2; v0 = func_00BDB730(a0);
    if (v0 == 0) goto L_00986D78;
    a0 = (*(volatile u8 *) (u32) (s2 + 22));
    v1 = 255;
    if (a0 == v1) goto L_00986D50;
L_00986C78:;
    v1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v1 + 9964));
    { s32 c_ = a2 < 0; f4.f = (*(volatile f32 *) (u32) (s2 + 240)); if (c_) goto L_00986C94; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00986CB0;
L_00986C94:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00986CB0:;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f4.f * f2.f;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    { s32 c_ = a2 < 0; f3.f = (*(volatile f32 *) (u32) (s2 + 248)); if (c_) goto L_00986CE4; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00986D00;
L_00986CE4:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00986D00:;
    f1.f = (*(volatile f32 *) (u32) (s2 + 232));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.f = f0.f - f20.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    at = s4 < v1;
    if (at == 0) goto L_00986D60;
    at = s3 < v1;
    if (at != 0) goto L_00986D78;
    s3 = v1;
    v1 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) s0) = (u8) v1; goto L_00986D78;
L_00986D50:;
    if (s7 != 0) goto L_00986D78;
    goto L_00986C78;
L_00986D60:;
    s3 = s4;
    s4 = v1;
    a0 = (*(volatile u8 *) (u32) s1);
    v1 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) s0) = (u8) a0;
    (*(volatile u8 *) (u32) s1) = (u8) v1;
L_00986D78:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = (s32) ((u32) s6 + 0xaU);
    v1 = s5 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_00986C58; }
    goto L_00986C28;
L_00986D94:;
    func_009855F0(a0);
    goto L_00986C3C;
L_00986DA4:;
    return;
}
