/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00905270(s64, s64, s64, s64);
s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_00958D00(s64, f32, f32);
s64 func_0098ED30(s64);
s64 func_0098F6C0(s64);
s64 func_009909D0(s64, s64);
s64 func_00AFBAB0(s64);
s64 func_00BDB8B0(s64);
void func_00C04830(s64, s64, s64);
s64 func_00C050E0(s64, s64);

s64 func_0095E510(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 != 0; s5 = a0; if (c_) goto L_0095E558; }
    v0 = 0; goto L_0095EB90;
L_0095E558:;
    v0 = func_00958D00(a0, f12.f, f13.f);
    v0 = v0 & 0xff;
    if (v0 == 0) { a0 = s5; goto L_0095E574; }
    v0 = 0; goto L_0095EB90;
L_0095E574:;
    a1 = 2; v0 = func_00C050E0(a0, a1);
    if (v0 != 0) goto L_0095EA18;
    a0 = (*(volatile u8 *) (u32) (s5 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x56abU);
    v0 = (*(volatile u8 *) (u32) s5);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { v0 = 0; goto L_0095EB90; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 != 0) { a0 = s5; goto L_0095EA20; }
L_0095E5B4:;
    a0 = (*(volatile u8 *) (u32) (s5 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x537eU);
    v0 = 11;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_0095E5F4;
    v0 = 10;
    if (v1 == v0) goto L_0095E5F4;
    v0 = 2;
    if (v1 == v0) goto L_0095E5F4;
    v0 = 0; goto L_0095EA3C;
L_0095E5F4:;
    v1 = (*(volatile u8 *) (u32) (s5 + 36));
    v0 = 1;
    if (v1 != v0) { fp = 5; goto L_0095E60C; }
    v0 = (s32) 0x590000U;
    fp = (*(volatile u8 *) (u32) (v0 + 7100));
L_0095E60C:;
    v0 = (*(volatile s16 *) (u32) (s5 + 20));
    s3 = (s64) ((u64) 0 + (u64) (s64) 255);
    a0 = s5;
    s6 = s3;
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; v0 = func_0098F6C0(a0);
    a0 = (*(volatile u8 *) (u32) s5);
    s0 = 1024;
    if (v0 == 0) s0 = 0;
    s7 = 0; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) s5); goto L_0095EA44; }
    v0 = (s32) ((u32) s0 + 0x400U);
L_0095E654:;
    s1 = 0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = (s32) ((u32) s0 + 0x600U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = (s32) ((u32) s0 + 0xc00U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
L_0095E678:;
    a1 = (*(volatile u8 *) (u32) (s5 + 19));
    v1 = s1 & 0xff;
    v0 = 255;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) s5 + (u32) a0);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 436));
    if (v1 == v0) goto L_0095E830;
    if (v1 == v0) { a0 = 1; goto L_0095E6BC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0095E6BC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = s2; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_0095E830;
    if (s2 == s5) goto L_0095E830;
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    if (v0 == 0) goto L_0095E830;
    at = v0 < 8;
    if (at != 0) goto L_0095E830;
    f1.f = (*(volatile f32 *) (u32) (s5 + 232));
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    f3.f = (*(volatile f32 *) (u32) (s5 + 224));
    f2.f = f1.f / f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    f1.i = (s32) 0;
    acc = f1.f + f2.f;
    f1.f = acc + f3.f * f20.f;
    f0.f = f20.f * f0.f;
    fcc = f0.f < f1.f;
    if (fcc) goto L_0095E830;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21378));
    at = v0 < 3;
    if (at != 0) { a0 = 0; goto L_0095E760; }
    a0 = s0;
L_0095E760:;
    at = v0 < 3;
    if (at != 0) { v0 = 0; goto L_0095E770; }
    v0 = s0;
L_0095E770:;
    v1 = (s32) ((u32) v0 + 0x400U);
    v0 = (s32) ((u32) a0 + 0x400U);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = s2; v0 = func_009909D0(a0, a1);
    if (v0 != 0) goto L_0095E830;
    v0 = (*(volatile u8 *) (u32) s2);
    at = (s32) 0x5100000U;
    at = at | 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_0095E830;
    a1 = (*(volatile u16 *) (u32) (s5 + 42));
    a0 = s2;
    a3 = (*(volatile s32 *) (u32) (sp + 208));
    a2 = 12288; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_0095E830;
    a1 = (*(volatile u16 *) (u32) (s5 + 42));
    a0 = s2;
    a3 = (*(volatile s32 *) (u32) (sp + 192));
    a2 = 8192; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_0095E830;
    a1 = (*(volatile u16 *) (u32) (s5 + 42));
    a0 = s2;
    a3 = (*(volatile s32 *) (u32) (sp + 176));
    a2 = 4096; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_0095E830;
    a0 = s2;
    s4 = 10; v0 = func_00905270(a0, a1, a2, a3);
    if (v0 == 0) goto L_0095E81C;
    s4 = 20;
L_0095E81C:;
    at = s7 < s4;
    if (at == 0) goto L_0095E830;
    s6 = (*(volatile u8 *) (u32) s2);
    s7 = s4;
L_0095E830:;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
    v0 = s1 < 11;
    if (v0 != 0) goto L_0095E678;
    s2 = s6 & 0xff;
    v0 = 255;
    if (s2 == v0) { v0 = 0; goto L_0095EB90; }
    if (s2 == v0) { a0 = 1; goto L_0095E868; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    a0 = hi;
L_0095E868:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    at = fp < 4;
    { s32 c_ = at == 0; s0 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_0095EA54; }
L_0095E888:;
    v0 = (*(volatile u8 *) (u32) (s0 + 524));
L_0095E88C:;
    if (v0 <= 0) { v0 = (*(volatile u8 *) (u32) (s0 + 514)); goto L_0095EA80; }
    v0 = (*(volatile u8 *) (u32) (s0 + 514));
L_0095E898:;
    v0 = v0 < 20;
    if (v0 != 0) goto L_0095E8BC;
    a0 = s5;
    a2 = s6;
    a1 = 0; func_00C04830(a0, a1, a2);
    v0 = 1; goto L_0095EB90;
L_0095E8BC:;
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_0095E8E8; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_0095E8E8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    s4 = (s32) ((u32) v0 + (u32) v1);
L_0095E904:;
    a0 = s4; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_0095EAA0;
    if (s4 == s5) goto L_0095EAA0;
    v1 = (*(volatile u8 *) (u32) s4);
    if (v1 == s2) goto L_0095EAA0;
    v0 = (*(volatile u8 *) (u32) (s4 + 524));
    if (v0 <= 0) { v0 = (*(volatile u8 *) (u32) (s4 + 514)); goto L_0095EA94; }
L_0095E938:;
    v0 = (*(volatile u8 *) (u32) (s4 + 514));
    at = v0 < 36;
    if (at != 0) goto L_0095EAA0;
    f1.f = (*(volatile f32 *) (u32) (s5 + 232));
    f0.f = (*(volatile f32 *) (u32) (s4 + 232));
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    f3.f = (*(volatile f32 *) (u32) (s5 + 224));
    f2.f = f1.f / f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 224));
    f1.i = (s32) 0;
    acc = f1.f + f2.f;
    f1.f = acc + f3.f * f20.f;
    f0.f = f20.f * f0.f;
    fcc = f0.f < f1.f;
    if (fcc) goto L_0095EAA0;
    a2 = v1 & 0xff;
    at = (s32) 0x5100000U;
    a1 = (s32) ((u32) a2 << 2);
    at = at | 0x1;
    v0 = (s32) ((u32) s5 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) a0 < (u64) at;
    if (at == 0) goto L_0095EAA0;
    v1 = (s32) 0x190000U;
    v0 = (u64) a0 < (u64) v1;
    if (v0 != 0) goto L_0095EAA0;
    v0 = (s32) ((u32) s0 + (u32) a1);
    at = (s32) 0x1e40000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_0095EAA0;
    v0 = (u64) v0 < (u64) v1;
    if (v0 != 0) goto L_0095EAA0;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x400000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s5 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_0095EAA0;
    s3 = a2; goto L_0095EAA0;
L_0095EA18:;
    v0 = 0; goto L_0095EB90;
L_0095EA20:;
    a1 = (s32) 0x240000U; v0 = func_009909D0(a0, a1);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0095E5B4;
    v0 = 0; goto L_0095EB90;
L_0095EA3C:;
    goto L_0095EB94;
L_0095EA44:;
    v0 = func_00AFBAB0(a0);
    v0 = (s32) ((u32) s0 + 0x400U); goto L_0095E654;
L_0095EA54:;
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_0098ED30(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0095E888;
    v0 = (*(volatile u8 *) (u32) (s0 + 514));
    v0 = v0 < 50;
    if (v0 != 0) goto L_0095E8BC;
    v0 = (*(volatile u8 *) (u32) (s0 + 524)); goto L_0095E88C;
L_0095EA80:;
    v0 = v0 < 50;
    if (v0 != 0) goto L_0095E8BC;
    v0 = (*(volatile u8 *) (u32) (s0 + 514)); goto L_0095E898;
L_0095EA94:;
    at = v0 < 50;
    if (at == 0) goto L_0095E938;
L_0095EAA0:;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_0095E904; }
    s0 = s3 & 0xff;
    v0 = 255;
    if (s0 == v0) { v0 = 0; goto L_0095EB90; }
    if (s2 == v0) { a1 = 1; goto L_0095EAD8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    a1 = hi;
L_0095EAD8:;
    v0 = 255;
    if (s0 == v0) { v1 = 1; goto L_0095EAF0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v1 = hi;
L_0095EAF0:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe7b2U);
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 6);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v1 < v0;
    if (v0 != 0) { a0 = s5; goto L_0095EB80; }
    a0 = s5;
    a2 = s3;
    a1 = 0; func_00C04830(a0, a1, a2);
    v0 = 255;
    if (s0 == v0) { v1 = 1; goto L_0095EB54; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v1 = hi;
L_0095EB54:;
    v0 = (s32) ((u32) v1 << 3);
    a2 = s6;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a1 = 0;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 + (u32) v1); func_00C04830(a0, a1, a2);
    v0 = 1; goto L_0095EB90;
L_0095EB80:;
    a2 = s6;
    a1 = 0; func_00C04830(a0, a1, a2);
    v0 = 1;
L_0095EB90:;
L_0095EB94:;
    return v0;
}
