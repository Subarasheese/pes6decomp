/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_002AE670(s32);
s32 func_009B3070(s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00A9C640(s32);
void func_00AEC650(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AECD00(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);

void func_00AED7F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = 255;
    s1 = a0;
    v1 = (*(volatile u8 *) (u32) (a1 + 1));
    { s32 c_ = v1 == v0; s0 = a1; if (c_) goto L_00AED834; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00AED838;
L_00AED834:;
    a0 = 1;
L_00AED838:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (*(volatile s32 *) (u32) (s1 + 276));
    a0 = (s32) ((u32) a0 << 6);
    v0 = (u64) v0 < (u64) (s64) 128;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_00AED8F8; }
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) 0x590000U;
    v0 = (s32) 0x66660000U;
    a0 = (*(volatile u8 *) (u32) (s1 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 151));
    v1 = v1 & 0x7f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    a0 = hi;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 9960));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 9944));
    v0 = (s32) a0 >> 3;
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v1 - (u32) v0);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (!fcc) { a0 = 10; goto L_00AED900; }
    v0 = 0; goto L_00AEDC30;
L_00AED8F8:;
    v0 = 0; goto L_00AEDC30;
L_00AED900:;
    v0 = func_002AE670(a0);
    s2 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s3 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 80;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00AED940; }
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = (*(volatile u16 *) (u32) (s1 + 268)); v0 = func_009B3070(a0, a1);
    s4 = v0 & 0xffff; goto L_00AED950;
L_00AED940:;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s1 + 268)); v0 = func_009B3070(a0, a1);
    s4 = v0 & 0xffff;
L_00AED950:;
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = (*(volatile u16 *) (u32) (s1 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < s4;
    if (at == 0) goto L_00AEDA18;
    s4 = v0; goto L_00AEDA18;
L_00AED974:;
    a0 = s1; v0 = func_00A9C640(a0);
    a0 = s2;
    a1 = v0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at == 0) goto L_00AED9BC;
    a1 = (*(volatile u16 *) (u32) (s3 + 38));
    a0 = (*(volatile u16 *) (u32) (s1 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at == 0) goto L_00AED9BC;
    v0 = 0; goto L_00AEDC30;
L_00AED9BC:;
    a1 = (*(volatile u16 *) (u32) (s1 + 38));
    a0 = s2; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 48;
    if (v0 != 0) goto L_00AED9DC;
    s2 = (*(volatile u16 *) (u32) (s1 + 268));
L_00AED9DC:;
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v1 = v0 & 0xffff;
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    if (v0 == 0) { at = v1 < 12289; goto L_00AEDA48; }
L_00AED9F8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 14));
    if (v0 != 0) { v0 = 0; goto L_00AEDC30; }
    v0 = (*(volatile u8 *) (u32) (s0 + 15));
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (s1 + 18)); goto L_00AEDAC4; }
    v0 = 0; goto L_00AEDC30;
L_00AEDA18:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = s1; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    at = s4 < 8193;
    { s32 c_ = at == 0; s2 = v0 & 0xffff; if (c_) goto L_00AED9BC; }
    goto L_00AED974;
L_00AEDA48:;
    if (at == 0) goto L_00AED9F8;
    v0 = 1;
L_00AEDA54:;
    if (v0 == 0) { v0 = 0; goto L_00AEDC30; }
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    at = v0 < 6401;
    { s32 c_ = at != 0; v1 = 0; if (c_) goto L_00AEDC28; }
    at = v0 < 6912;
    if (at == 0) goto L_00AEDA94;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    at = (s32) 0x10000U;
    at = at | 0xb901;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00AEDA94;
    v1 = 1;
L_00AEDA94:;
    v0 = 1;
    if (v1 != v0) { a0 = s1; goto L_00AEDAB4; }
    a0 = s1;
    a1 = s0; func_00AECD00(a0, a1, a2, a3, a4, a5, f12.f, f13.f, f14.f, f15.f);
    goto L_00AEDABC;
L_00AEDAB4:;
    a1 = s0; func_00AEC650(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_00AEDABC:;
    goto L_00AEDC34;
L_00AEDAC4:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x88880000U;
    v1 = v1 | 0x8889;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v0 >> 31);
    a0 = hi;
    v1 = 8;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) v1 - (u32) v0); v0 = func_002AE670(a0);
    f1.i = (s32) v0;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 9944));
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (!fcc) { a0 = (*(volatile u16 *) (u32) (s1 + 268)); goto L_00AEDB64; }
    v0 = 0; goto L_00AEDC30;
L_00AEDB64:;
    a1 = (*(volatile u16 *) (u32) (s1 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 65;
    if (at != 0) { a0 = (*(volatile u16 *) (u32) (s1 + 38)); goto L_00AEDB84; }
    v0 = 0; goto L_00AEDC30;
L_00AEDB84:;
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12289;
    if (at != 0) { a0 = (*(volatile u16 *) (u32) (s1 + 40)); goto L_00AEDBA4; }
    v0 = 0; goto L_00AEDC30;
L_00AEDBA4:;
    a1 = (*(volatile u16 *) (u32) (s3 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 32;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) s3); goto L_00AEDBF4; }
L_00AEDBBC:;
    at = s4 < 20480;
    if (at == 0) goto L_00AEDC20;
    v0 = s4 < 18432;
    if (v0 != 0) goto L_00AEDC20;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    at = (s32) 0x10000U;
    at = at | 0xb901;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00AEDC20;
    v0 = 0; goto L_00AEDC30;
L_00AEDBF4:;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = s2; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 32;
    if (at == 0) goto L_00AEDBBC;
    v0 = 0; goto L_00AEDC30;
L_00AEDC20:;
    v0 = 1; goto L_00AEDA54;
L_00AEDC28:;
    v1 = 1; goto L_00AEDA94;
L_00AEDC30:;
L_00AEDC34:;
    return;
}
