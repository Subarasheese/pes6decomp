/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0011F248(s64, s64, s64, s64, s64, s64);
s64 func_009B3070(s64, s64);
s64 func_00AFBA70(s64);

s64 func_00C5E780(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    u64 qh_a4 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s6 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
    s7 = 0; v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a1 = 1; goto L_00C5E7E0; }
    a0 = (*(volatile u8 *) (u32) s6); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
L_00C5E7E0:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = 0;
    s4 = (s32) ((u32) v0 + (u32) v1);
L_00C5E7FC:;
    v1 = (*(volatile u32 *) (u32) (s4 + 292));
    v0 = (s32) 0x2a60000U;
    v0 = v0 | 0x8640;
    a3 = (u64) v1 < (u64) v0;
    if (a3 != 0) goto L_00C5E868;
    a2 = (*(volatile u8 *) (u32) (s4 + 19));
    v0 = (s32) 0x45200000U;
    f0.i = (s32) v0;
    v1 = (*(volatile s16 *) (u32) (s4 + 20));
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1e00U);
    f2.f = (*(volatile f32 *) (u32) (s4 + 224));
    v0 = a2 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    f3.f = (*(volatile f32 *) (u32) (v0 + 144));
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f2.f = f3.f - f2.f;
    f1.f = f1.f * f2.f;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a3 = 1; if (c_) goto L_00C5E864; }
    a3 = 0;
L_00C5E864:;
L_00C5E868:;
    v0 = (u64) 0 < (u64) a3;
    if (v0 != 0) { a0 = (*(volatile u16 *) (u32) (s4 + 40)); goto L_00C5EA50; }
L_00C5E878:;
    s2 = (u64) 0 < (u64) v0;
    if (s2 == 0) goto L_00C5E8B8;
    a1 = (*(volatile u8 *) (u32) (s4 + 92));
    v0 = 6400;
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_00C5E8AC; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v0 >> 1;
L_00C5E8AC:;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    s2 = v1 < v0;
L_00C5E8B8:;
    v1 = (*(volatile s16 *) (u32) (s4 + 20));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    a3 = (*(volatile u32 *) (u32) (s4 + 292));
    a2 = (s32) 0x900000U;
    f3.i = (s32) v0;
    f0.i = (s32) 0;
    f4.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) (a1 + 24));
    f4.f = (f32) f4.i;
    s1 = (u64) a3 < (u64) a2;
    f2.f = (*(volatile f32 *) (u32) (a1 + 16));
    f3.f = f3.f * f4.f;
    f0.f = f0.f - f1.f;
    f2.f = f3.f - f2.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f12.f = (*(volatile f32 *) (u32) (s4 + 240));
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; } v0 = func_0011F248(a0, a1, a2, a3, a4, a5);
    a2 = (s64) ((u64) v0 << 32);
    a2 = a2 >> 32;
    { s64 m_ = (s64) (u64) (u32) a2 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = hi;
    v0 = v0 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a1; a1 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a1 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f12.f = (*(volatile f32 *) (u32) (s4 + 248));
    v0 = (s64) ((u64) v1 + (u64) v0);
    v0 = (s64) ((u64) v0 << 32);
    s5 = (s64) ((u64) v0 + (u64) a1); v0 = func_0011F248(a0, a1, a2, a3, a4, a5);
    a3 = (s64) ((u64) v0 << 32);
    a3 = a3 >> 32;
    { s64 m_ = (s64) (u64) (u32) a3 * (s64) (u64) (u32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = hi;
    v0 = v0 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a1; a2 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a2 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x3e0f0000U;
    v1 = (s64) ((u64) a1 + (u64) v1);
    v1 = (s64) ((u64) v1 << 32);
    v0 = v0 | 0x83e1;
    a2 = (s64) ((u64) v1 + (u64) a2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) s0 >> 31);
    v1 = hi;
    v0 = (s64) ((u64) s5 + (u64) a2);
    a2 = (s64) ((u64) v0 << 32);
    a2 = a2 >> 32;
    v1 = (s32) v1 >> 11;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a5 = (s64) ((u64) v1 << 32);
    a5 = a5 >> 32;
    { s64 m_ = (s64) (u64) (u32) a5 * (s64) (u64) (u32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    v1 = hi;
    v0 = v0 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a1; a4 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a4 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    v0 = a5 >> 32;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a2 = lo1; }
    a1 = (*(volatile u32 *) (u32) (s4 + 272));
    v0 = (s32) 0x590000U;
    a2 = (s64) ((u64) a3 + (u64) a2);
    a2 = (s64) ((u64) a2 << 32);
    v1 = (*(volatile u8 *) (u32) s4);
    a2 = (s64) ((u64) a2 + (u64) a4);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v1 != v0; a1 = (u64) a1 < (u64) a2; if (c_) goto L_00C5EA68; }
L_00C5E9F0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_00C5E7FC; }
L_00C5EA00:;
    v1 = (*(volatile u8 *) (u32) (s6 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efdU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00C5EA44;
    v0 = (*(volatile u8 *) (u32) (s6 + 16));
    at = v0 < 10;
    if (at == 0) { v0 = 1; goto L_00C5EA34; }
    v0 = (u64) 0 < (u64) s7;
    v0 = v0 ^ 0x1;
L_00C5EA34:;
    if (v0 != 0) goto L_00C5EA44;
    v0 = 1; goto L_00C5EA48;
L_00C5EA44:;
    v0 = 0;
L_00C5EA48:;
    goto L_00C5EA88;
L_00C5EA50:;
    a1 = (*(volatile u16 *) (u32) (s4 + 288)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 8192; goto L_00C5E878;
L_00C5EA68:;
    if (s2 != 0) goto L_00C5EA80;
    if (s1 != 0) goto L_00C5EA80;
    if (a1 == 0) goto L_00C5E9F0;
L_00C5EA80:;
    s7 = 1; goto L_00C5EA00;
L_00C5EA88:;
    return v0;
}
