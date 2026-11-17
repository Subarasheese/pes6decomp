/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00151CF0(f32);
f32 func_00183590(s32, s32, s32, s32, f32, f32, f32);

void func_00190620(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;

    s3 = a0;
    s2 = a1;
    f0.f = func_00183590(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    v1 = (s32) 0x3f190000U;
    v1 = v1 | 0x999a;
    f1.i = (s32) v1;
    fcc = f0.f < f1.f;
    if (fcc) goto L_001907C4;
    v1 = (s32) 0x520000U;
    s0 = 0;
    s1 = (*(volatile s32 *) (u32) (v1 + 552));
L_0019066C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 24));
    if (v1 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_001907B8; }
    f0.f = (*(volatile f32 *) (u32) s3);
    v0 = (s32) 0x41a00000U;
    f1.f = (*(volatile f32 *) (u32) s2);
    v1 = (s32) 0xc0a00000U;
    f2.i = (s32) 0;
    f3.i = (s32) v0;
    v0 = (s32) 0x40c00000U;
    acc = f2.f + f0.f;
    f0.f = acc + f3.f * f1.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    f1.f = (*(volatile f32 *) (u32) (s2 + 8));
    f12.i = (s32) v0;
    acc = f2.f + f0.f;
    f0.f = acc + f3.f * f1.f;
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1; f0.f = func_00151CF0(f12.f);
    v1 = (s32) 0x41000000U;
    v0 = (s32) 0xbf800000U;
    f1.i = (s32) v1;
    f2.i = (s32) v0;
    f0.f = f1.f + f0.f;
    v0 = (s32) 0x40c00000U;
    f0.f = f2.f * f0.f;
    f12.i = (s32) v0;
    (*(volatile f32 *) (u32) (s1 + 16)) = f0.f; f0.f = func_00151CF0(f12.f);
    f3.f = (*(volatile f32 *) (u32) s2);
    v0 = (s32) 0x41000000U;
    f2.i = (s32) 0;
    v1 = (s32) 0x40400000U;
    f4.i = (s32) v0;
    acc = f2.f + f0.f;
    v0 = (s32) 0x40c00000U;
    f1.i = (s32) v1;
    f0.f = acc + f4.f * f3.f;
    f0.f = f0.f - f1.f;
    f12.i = (s32) v0;
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f; f0.f = func_00151CF0(f12.f);
    f4.f = (*(volatile f32 *) (u32) (s2 + 8));
    v0 = (s32) 0x41000000U;
    f3.i = (s32) v0;
    f2.i = (s32) 0;
    v0 = (s32) 0x40400000U;
    f1.i = (s32) v0;
    acc = f2.f + f0.f;
    f0.f = acc + f3.f * f4.f;
    v0 = (s32) 0x41800000U;
    f0.f = f0.f - f1.f;
    f12.i = (s32) v0;
    (*(volatile f32 *) (u32) (s1 + 20)) = f0.f; f0.f = func_00151CF0(f12.f);
    v1 = 1;
    v0 = s0 & 0x1;
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) v1;
    v1 = 38;
    (*(volatile u8 *) (u32) (s1 + 36)) = (u8) v1;
    { s32 c_ = v0 == 0; (*(volatile u8 *) (u32) (s1 + 38)) = (u8) 0; if (c_) goto L_0019077C; }
    v0 = 35;
    (*(volatile u8 *) (u32) (s1 + 37)) = (u8) v0; goto L_00190784;
L_0019077C:;
    v0 = 42;
    (*(volatile u8 *) (u32) (s1 + 37)) = (u8) v0;
L_00190784:;
    v0 = (s32) 0x40e00000U;
    v1 = 255;
    f12.i = (s32) v0;
    (*(volatile u8 *) (u32) (s1 + 39)) = (u8) v1; f0.f = func_00151CF0(f12.f);
    v1 = (s32) 0x3d800000U;
    f2.i = (s32) v1;
    f1.f = f2.f * f0.f;
    f0.f = f2.f + f1.f;
    (*(volatile f32 *) (u32) (s1 + 28)) = f1.f;
    (*(volatile f32 *) (u32) (s1 + 32)) = f0.f; goto L_001907C4;
L_001907B8:;
    v1 = s0 < 20;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x28U); if (c_) goto L_0019066C; }
L_001907C4:;
    return;
}
