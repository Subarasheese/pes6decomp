/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6NowLoading_PhaseClose(s64, s64, s64, s64, s64);
s64 Pes6NowLoading_PhaseFadeIn(s64, s64, s64, s64, s64);
s64 Pes6NowLoading_PhaseShown(s64, s64, s64, s64, s64);
f32 func_0011D468(s64, s64, s64, s64, s64, f32);
s64 func_001BF1A0(s64, s64, s64, s64, s64, s64, s64);
s64 func_001BF780(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001BF9D0(s64, s64, s64, s64, f32, f32);
s64 func_001BFB70(s64, s64, s64, s64);
s64 func_001D7D80(s64, s64, s64, s64);
s64 func_001DF420(s64, s64);
s64 func_00266730(s64, s64, s64, s64);
s64 func_00342E30(s64, s64, s64, s64);
s64 func_00342F70(s64, s64, s64, s64);

s64 mnNowloadingMainInit(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    s1 = (s32) 0x3a0000U;
    s1 = (s32) ((u32) s1 + 0xffff8660U);
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    at = (u64) v0 < (u64) (s64) 8;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_001BFFE4; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1930U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1bfd28U) goto L_001BFD28; if (t_ == 0x1bfd34U) goto L_001BFD34; if (t_ == 0x1bfd7cU) goto L_001BFD7C; if (t_ == 0x1bfdc0U) goto L_001BFDC0; if (t_ == 0x1bfdd0U) goto L_001BFDD0; if (t_ == 0x1bfde0U) goto L_001BFDE0; if (t_ == 0x1bff34U) goto L_001BFF34; if (t_ == 0x1bff44U) goto L_001BFF44; }
L_001BFD28:;
    v0 = 1;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0; goto L_001BFFFC;
L_001BFD34:;
    a0 = (*(volatile u8 *) (u32) (s1 + 136));
    v0 = a0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s1 + 32)); goto L_001C0000; }
    v0 = -2;
    v1 = 0 & 0x1;
    v0 = a0 & v0;
    v0 = v0 | v1;
    a0 = (s32) ((u32) v1 << 1);
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0;
    v1 = -3;
    v0 = 2;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 136));
    v0 = v0 & v1;
    v0 = v0 | a0;
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0; goto L_001BFFFC;
L_001BFD7C:;
    a0 = (s32) ((u32) s1 + 0x64U); v0 = func_001BF9D0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile u8 *) (u32) (s1 + 136));
    v0 = (s64) ((u64) v0 << 60);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) { v0 = 15; goto L_001BFDA4; }
    a0 = (s32) ((u32) s1 + 0x2cU); v0 = func_001BFB70(a0, a1, a2, a3);
    v0 = 15;
L_001BFDA4:;
    (*(volatile u32 *) (u32) (s1 + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 120)) = (u32) v0;
    v0 = 3;
    (*(volatile u32 *) (u32) (s1 + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 124)) = (u32) 0; goto L_001BFFFC;
L_001BFDC0:;
    a0 = s1; v0 = Pes6NowLoading_PhaseFadeIn(a0, a1, a2, a3, a4);
    goto L_001BFFFC;
L_001BFDD0:;
    a0 = s1; v0 = Pes6NowLoading_PhaseShown(a0, a1, a2, a3, a4);
    goto L_001BFFFC;
L_001BFDE0:;
    a0 = s1;
    a1 = (s32) ((u32) s1 + 0x28U); v0 = func_001BF1A0(a0, a1, a2, a3, a4, a5, a6);
    s0 = (*(volatile s32 *) (u32) (s1 + 68));
    if (s0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 64)); goto L_001BFEF0; }
    v0 = (*(volatile u8 *) (u32) (s1 + 80));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001BFE10; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_001BFE28;
L_001BFE10:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_001BFE28:;
    v0 = (s32) 0x424c0000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s1 + 80)); goto L_001BFED8; }
    v0 = (s32) 0x3dcc0000U;
    v0 = v0 | 0x40de;
    f1.f = (*(volatile f32 *) (u32) (s1 + 76));
    f0.i = (s32) v0;
    f12.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s1 + 76)) = f12.f; f0.f = func_0011D468(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0x42cc0000U;
    v1 = (s32) 0x43190000U;
    f4.i = (s32) v0;
    v0 = (s32) 0x4f000000U;
    f3.i = (s32) v1;
    f2.i = (s32) 0;
    acc = f2.f + f3.f;
    f1.i = (s32) v0;
    f0.f = acc + f4.f * f0.f;
    fcc = f1.f <= f0.f;
    if (fcc) { f0.f = f0.f - f1.f; goto L_001BFEA8; }
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_001BFEC0;
L_001BFEA8:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_001BFEC0:;
    (*(volatile u8 *) (u32) (s1 + 80)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (s1 + 80));
    a0 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = func_001DF420(a0, a1);
    goto L_001BFEEC;
L_001BFED8:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 80)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 80));
    a0 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = func_001DF420(a0, a1);
L_001BFEEC:;
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
L_001BFEF0:;
    if (a0 == 0) goto L_001BFFFC;
    v1 = (*(volatile s32 *) (u32) (gp + -23104));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_001BFF0C; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_001BFF0C:;
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48; v0 = func_001D7D80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -23104));
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 81;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (gp + -23104)) = (u32) v0; if (c_) goto L_001BFFFC; }
    (*(volatile u32 *) (u32) (gp + -23104)) = (u32) 0; goto L_001BFFFC;
L_001BFF34:;
    a0 = s1; v0 = Pes6NowLoading_PhaseClose(a0, a1, a2, a3, a4);
    goto L_001BFFFC;
L_001BFF44:;
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = (s32) ((u32) s1 + 0x64U);
    v0 = ~(v0 | 0);
    s0 = (u64) 0 < (u64) v0; v0 = func_001BF780(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 0 & 0x1;
    a1 = (*(volatile u8 *) (u32) (s1 + 136));
    a0 = (s32) ((u32) v0 << 3);
    v1 = -9;
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 128)) = (u8) 0;
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0;
    v0 = a1 & v1;
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) 0;
    v0 = v0 | a0;
    (*(volatile u8 *) (u32) (s1 + 24)) = (u8) 0;
    { s32 c_ = s0 == 0; (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0; if (c_) goto L_001BFFC8; }
    v0 = func_00342E30(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7098));
    if (v0 == 0) goto L_001BFFB8;
    v0 = (s32) 0x590000U;
    v1 = 7;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { a0 = (*(volatile u8 *) (u32) (s1 + 136)); goto L_001BFFCC; }
L_001BFFB8:;
    v0 = func_00266730(a0, a1, a2, a3);
    v0 = func_00342F70(a0, a1, a2, a3);
L_001BFFC8:;
    a0 = (*(volatile u8 *) (u32) (s1 + 136));
L_001BFFCC:;
    v0 = -5;
    v1 = (s64) ((u64) 0 + (u64) (s64) 4);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0; goto L_001BFFFC;
L_001BFFE4:;
    a0 = (*(volatile u8 *) (u32) (s1 + 136));
    v0 = -5;
    v1 = (s64) ((u64) 0 + (u64) (s64) 4);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0;
L_001BFFFC:;
    v1 = (*(volatile s32 *) (u32) (s1 + 32));
L_001C0000:;
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s1 + 136)); goto L_001C0018; }
    (*(volatile u32 *) (u32) (s1 + 32)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 40)) = (u32) 0;
    a0 = (*(volatile u8 *) (u32) (s1 + 136));
L_001C0018:;
    v0 = (s64) ((u64) a0 << 61);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v0 = s2; goto L_001C0048; }
    v0 = 0 & 0x1;
    s2 = 1;
    v1 = (s32) ((u32) v0 << 2);
    v0 = -5;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 136)) = (u8) v0;
    v0 = s2;
L_001C0048:;
    return v0;
}
