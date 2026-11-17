/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00AFBA70(s64);
s64 func_00BDB8B0(s64);

s64 func_00952420(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
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
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x40000000U;
    f4.i = (s32) v0;
    f2.i = (s32) 0;
    v0 = (s32) 0xcb0000U;
    s5 = a1;
    s6 = a2;
    s4 = a3;
    s3 = a0;
    v1 = (*(volatile s32 *) (u32) (v0 + 21508));
    f3.f = (*(volatile f32 *) (u32) (a0 + 224));
    f5.f = (*(volatile f32 *) (u32) (a0 + 240));
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.f = (*(volatile f32 *) (u32) (a0 + 248));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7620));
    acc = f2.f + f3.f;
    f21.f = acc + f4.f * f5.f;
    acc = f2.f + f0.f;
    { s32 c_ = v1 != v0; f20.f = acc + f4.f * f1.f; if (c_) goto L_00952610; }
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 21459));
    if (v0 != v1) goto L_00952610;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 21460));
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f0.f == f21.f;
    if (!fcc) goto L_00952610;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 21462));
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f0.f == f20.f;
    if (!fcc) goto L_00952610;
L_009524F0:;
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_00952520; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00952520:;
    v0 = (s32) ((u32) v1 << 3);
    s2 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    s6 = s6 & 0xffff;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    s0 = 0;
    s1 = (s32) ((u32) v0 + (u32) v1);
    s2 = (s32) ((u32) s2 + 0x52a0U);
L_00952548:;
    a0 = s1; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_009525F4;
    f3.f = (*(volatile f32 *) (u32) (s1 + 224));
    v0 = (s32) 0x40000000U;
    f5.f = (*(volatile f32 *) (u32) (s1 + 240));
    v1 = (*(volatile s32 *) (u32) (s2 + 312));
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    at = (s32) 0x400000U;
    f1.f = (*(volatile f32 *) (u32) (s1 + 248));
    f2.i = (s32) 0;
    f4.i = (s32) v0;
    acc = f2.f + f3.f;
    f14.f = acc + f4.f * f5.f;
    at = (u64) v1 < (u64) at;
    acc = f2.f + f0.f;
    { s32 c_ = at == 0; f15.f = acc + f4.f * f1.f; if (c_) goto L_00952720; }
    at = (s32) 0x100000U;
    at = (u64) v1 < (u64) at;
    { s32 c_ = at == 0; s3 = (s64) ((u64) 0 + (u64) (s64) 512); if (c_) goto L_009525B0; }
    v0 = (s32) ((u32) s3 + 0x200U);
    s3 = v0 & 0xffff;
L_009525B0:;
    at = (u64) v1 < (u64) s4;
    if (at == 0) goto L_009525F4;
    f12.i = f21.i;
    f13.i = f20.i; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = s5;
    a1 = v0; v0 = func_009B3070(a0, a1);
    v1 = v0 & 0xffff;
    v0 = s3 & 0xffff;
    v0 = (s32) ((u32) s6 + (u32) v0);
    at = v1 < v0;
    if (at == 0) goto L_009525F4;
    v0 = 0; goto L_00952728;
L_009525F4:;
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00952548; }
    v0 = 1; goto L_00952728;
L_00952610:;
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00952640; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00952640:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0x52a0U);
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00952664:;
    a0 = s2; v0 = func_00BDB8B0(a0);
    if (v0 != 0) { f0.f = (*(volatile f32 *) (u32) (s2 + 224)); goto L_009526CC; }
L_00952678:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    s0 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_00952664; }
    a3 = (*(volatile u8 *) (u32) s3);
    a1 = (s32) 0xcb0000U;
    f0.i = (s32) f21.f;
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 7620));
    a0 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (a1 + 21459)) = (u8) a3;
    a1 = f0.i;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) f20.f;
    (*(volatile u32 *) (u32) (v0 + 21508)) = (u32) a2;
    (*(volatile u16 *) (u32) (a0 + 21460)) = (u16) a1;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (v1 + 21462)) = (u16) v0; goto L_009524F0;
L_009526CC:;
    v0 = (s32) 0x40000000U;
    f5.f = (*(volatile f32 *) (u32) (s2 + 240));
    f3.i = (s32) 0;
    f4.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (s2 + 232));
    f2.f = (*(volatile f32 *) (u32) (s2 + 248));
    acc = f3.f + f0.f;
    f0.f = acc + f4.f * f5.f;
    f0.f = f21.f - f0.f;
    f0.i = (s32) f0.f;
    acc = f3.f + f1.f;
    v0 = f0.i;
    f1.f = acc + f4.f * f2.f;
    f0.f = f20.f - f1.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    (*(volatile u32 *) (u32) (s0 + 312)) = (u32) v0; goto L_00952678;
L_00952720:;
    s3 = 0; goto L_009525B0;
L_00952728:;
    return v0;
}
