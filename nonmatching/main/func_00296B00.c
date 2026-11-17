/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00103BB8(s64, s64, s64);
void func_00103F50(s64, s64, s64, s64, f32);
void func_00103FF8(s64, s64, s64, s64, f32);
void func_001040A0(s64, s64, s64, s64, f32);
f32 func_0011D238(f32);
void func_0017C010(s64, s64, s64);

void func_00296B00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13, f32 fa14) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_a6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    volatile union { f32 f; s32 i; } f25 = { 0 };
    s32 fcc = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    f0.i = (s32) 0;
    s0 = a0;
    v0 = (*(volatile s32 *) (u32) a0);
    f20.f = (*(volatile f32 *) (u32) (a0 + 64));
    f21.f = (*(volatile f32 *) (u32) (a0 + 68));
    f22.f = (*(volatile f32 *) (u32) (a0 + 72));
    fcc = f0.f == f12.f;
    f24.i = f13.i;
    { u32 a_ = (u32) (v0 + 144) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    f23.i = f14.i;
    { u32 a_ = (u32) (v0 + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v0 + 160) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v0 + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (s0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (s0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { s32 c_ = !fcc; { u32 a_ = (u32) (s0 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_00296C6C; }
L_00296B6C:;
    f0.i = (s32) 0;
    fcc = f0.f == f23.f;
    if (!fcc) { v0 = (s32) 0x3e220000U; goto L_00296D20; }
L_00296B80:;
    f0.i = (s32) 0;
    fcc = f0.f == f24.f;
    if (fcc) goto L_00296C40;
    v0 = (s32) 0x3e220000U;
    v0 = v0 | 0xf983;
    f0.i = (s32) v0;
    f23.f = f0.f * f24.f;
    f12.i = f23.i; f0.f = func_0011D238(f12.f);
    f23.f = f23.f - f0.f;
    v0 = (s32) 0x3f000000U;
    f0.i = (s32) v0;
    fcc = f23.f <= f0.f;
    if (fcc) goto L_00296BDC;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f23.f = f23.f - f0.f;
L_00296BDC:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x40490000U;
    f0.i = (s32) v0;
    v1 = v1 | 0xfdb;
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x40U);
    f0.f = f0.f * f23.f;
    a1 = (s32) ((u32) a1 + 0x5b30U);
    f1.i = (s32) v1;
    f12.f = f1.f * f0.f; func_001040A0(a0, a1, a2, a3, f12.f);
    { u32 a_ = (u32) (sp + 64) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 80) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 96) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x400000U;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = (s32) 0x400000U;
    a1 = (s32) ((u32) a1 + 0xffffb060U);
    a2 = a0;
    { u32 a_ = (u32) (a3 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (v1 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v0 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; } v0 = func_00103BB8(a0, a1, a2);
L_00296C40:;
    (*(volatile f32 *) (u32) (s0 + 64)) = f20.f;
    v0 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) (s0 + 68)) = f21.f;
    a1 = 0;
    (*(volatile f32 *) (u32) (s0 + 72)) = f22.f;
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) s0);
    a2 = (s32) ((u32) s0 + 0x10U); func_0017C010(a0, a1, a2);
    goto L_00296DD0;
L_00296C6C:;
    v0 = (s32) 0x3e220000U;
    v0 = v0 | 0xf983;
    f0.i = (s32) v0;
    f25.f = f0.f * f12.f;
    f12.i = f25.i; f0.f = func_0011D238(f12.f);
    f25.f = f25.f - f0.f;
    v0 = (s32) 0x3f000000U;
    f0.i = (s32) v0;
    fcc = f25.f <= f0.f;
    if (fcc) goto L_00296CB4;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f25.f = f25.f - f0.f;
L_00296CB4:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x40490000U;
    f0.i = (s32) v0;
    v1 = v1 | 0xfdb;
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0xc0U);
    f0.f = f0.f * f25.f;
    a1 = (s32) ((u32) a1 + 0x5b30U);
    f1.i = (s32) v1;
    f12.f = f1.f * f0.f; func_00103FF8(a0, a1, a2, a3, f12.f);
    { u32 a_ = (u32) (sp + 192) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 208) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 224) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x400000U;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = (s32) 0x400000U;
    a1 = (s32) ((u32) a1 + 0xffffb060U);
    a2 = a0;
    { u32 a_ = (u32) (a3 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (v1 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v0 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; } v0 = func_00103BB8(a0, a1, a2);
    goto L_00296B6C;
L_00296D20:;
    v0 = v0 | 0xf983;
    f0.i = (s32) v0;
    f23.f = f0.f * f23.f;
    f12.i = f23.i; f0.f = func_0011D238(f12.f);
    f23.f = f23.f - f0.f;
    v0 = (s32) 0x3f000000U;
    f0.i = (s32) v0;
    fcc = f23.f <= f0.f;
    if (fcc) goto L_00296D64;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f23.f = f23.f - f0.f;
L_00296D64:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x40490000U;
    f0.i = (s32) v0;
    v1 = v1 | 0xfdb;
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x80U);
    f0.f = f0.f * f23.f;
    a1 = (s32) ((u32) a1 + 0x5b30U);
    f1.i = (s32) v1;
    f12.f = f1.f * f0.f; func_00103F50(a0, a1, a2, a3, f12.f);
    { u32 a_ = (u32) (sp + 128) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 144) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x400000U;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = (s32) 0x400000U;
    a1 = (s32) ((u32) a1 + 0xffffb060U);
    a2 = a0;
    { u32 a_ = (u32) (a3 + -20384) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (v1 + -20368) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v0 + -20352) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; } v0 = func_00103BB8(a0, a1, a2);
    goto L_00296B80;
L_00296DD0:;
    return;
}
