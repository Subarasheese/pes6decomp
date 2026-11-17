/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00AFBA70(s64);
s64 func_00AFBAB0(s64);

s64 func_00990310(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    v1 = a4 & 0xff;
    f2.i = (s32) 0;
    v0 = 1;
    fp = a3;
    s7 = a1;
    s6 = a5;
    f1.i = (s32) s6;
    s5 = a0;
    f3.f = (f32) f1.i;
    s2 = a2;
    s1 = 0;
    s0 = 11;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f4.f = (*(volatile f32 *) (u32) (a0 + 240));
    f1.f = (*(volatile f32 *) (u32) (a0 + 248));
    acc = f2.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f21.f = acc + f4.f * f3.f;
    acc = f2.f + f0.f;
    { s32 c_ = v1 == v0; f20.f = acc + f1.f * f3.f; if (c_) goto L_00990404; }
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s5); goto L_009903B8; }
    v0 = 3;
    s4 = (s32) 0x590000U;
    s0 = 22;
    s4 = (s32) ((u32) s4 + 0xffffe7f0U); goto L_0099044C;
L_009903B8:;
    v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009903E8; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009903E8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s4 = (s32) ((u32) v0 + (u32) v1); goto L_0099044C;
L_00990404:;
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00990434; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00990434:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s4 = (s32) ((u32) v0 + (u32) v1);
L_0099044C:;
    at = 0 < s0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00990550; }
    v0 = s2 & 0xffff;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00990460:;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00990538;
    if (s5 == s4) goto L_00990538;
    f1.i = (s32) s6;
    f0.f = (*(volatile f32 *) (u32) (s4 + 224));
    f4.f = (f32) f1.i;
    f3.i = (s32) 0;
    f5.f = (*(volatile f32 *) (u32) (s4 + 240));
    acc = f3.f + f0.f;
    f1.f = (*(volatile f32 *) (u32) (s4 + 232));
    f2.f = (*(volatile f32 *) (u32) (s4 + 248));
    f14.f = acc + f5.f * f4.f;
    f0.f = f21.f - f14.f;
    f0.i = (s32) f0.f;
    acc = f3.f + f1.f;
    v0 = f0.i;
    f15.f = acc + f2.f * f4.f;
    f0.f = f20.f - f15.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x400000U;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    at = (u64) v1 < (u64) at;
    if (at == 0) { s2 = 0; goto L_009904F0; }
    at = (s32) 0x100000U;
    at = (u64) v1 < (u64) at;
    { s32 c_ = at == 0; s2 = (s64) ((u64) 0 + (u64) (s64) 768); if (c_) goto L_009904F0; }
    v0 = (s32) ((u32) s2 + 0x200U);
    s2 = v0 & 0xffff;
L_009904F0:;
    at = (u64) v1 < (u64) fp;
    if (at == 0) goto L_00990538;
    f12.i = f21.i;
    f13.i = f20.i; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = s7;
    a1 = v0; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v1 = s2 & 0xffff;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = a0 < v0;
    if (at == 0) goto L_00990538;
    s1 = (s32) ((u32) s1 + 0x1U);
L_00990538:;
    v0 = (s32) ((u32) s3 + 0x1U);
    s3 = v0 & 0xffff;
    v0 = s3 < s0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_00990460; }
L_00990550:;
    v0 = s1 & 0xff;
    return v0;
}
