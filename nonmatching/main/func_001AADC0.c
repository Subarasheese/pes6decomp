/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001A3810(void);

s32 func_001AADC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = 40;
    v1 = (s32) ((u32) sp + 0x40U);
    s1 = (*(volatile s32 *) (u32) (a0 + 16));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_001AAE04; }
L_001AADE8:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001AADE8;
L_001AAE04:;
    f20.f = (*(volatile f32 *) (u32) (s0 + 468)); f0.f = func_001A3810();
    fcc = f0.f <= f20.f;
    if (!fcc) { v0 = 0; goto L_001AAF08; }
    v0 = (*(volatile u8 *) (u32) (s0 + 443));
    { s32 c_ = v0 != 0; a0 = (*(volatile u8 *) (u32) (s0 + 442)); if (c_) goto L_001AAED8; }
    v0 = (*(volatile s8 *) (u32) (s1 + 4));
    v1 = (*(volatile u8 *) (u32) (s0 + 444));
    at = v0 < v1;
    if (at == 0) { a3 = (s32) ((u32) v1 + 0xffffffffU); goto L_001AAE3C; }
    a3 = (s32) ((u32) v0 + 0xffffffffU);
L_001AAE3C:;
    v0 = (*(volatile u8 *) (u32) (s0 + 500));
    { s32 c_ = v0 == 0; a2 = (*(volatile s32 *) (u32) (s0 + 448)); if (c_) goto L_001AAE50; }
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
L_001AAE50:;
    if (a3 <= 0) goto L_001AAECC;
    v0 = (s32) ((u32) a3 << 2);
    v1 = 1;
    a1 = (s32) ((u32) a2 + (u32) v0);
L_001AAE64:;
    f0.f = (*(volatile f32 *) (u32) a1);
    fcc = f0.f < f20.f;
    { s32 c_ = fcc; v0 = v1; if (c_) goto L_001AAE78; }
    v0 = 0;
L_001AAE78:;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { a3 = (s32) ((u32) a3 + 0xffffffffU); goto L_001AAEC4; }
    v1 = (s32) ((u32) a3 << 2);
    v0 = (s32) 0x3d070000U;
    v1 = (s32) ((u32) a2 + (u32) v1);
    v0 = v0 | 0x2b02;
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.i = (s32) v0;
    f0.f = f0.f + f1.f;
    fcc = f20.f < f0.f;
    if (!fcc) { (*(volatile u8 *) (u32) (s0 + 442)) = (u8) a3; goto L_001AAECC; }
    v0 = (s32) ((u32) a3 + 0xffffffffU);
    if (a0 == v0) goto L_001AAECC;
    (*(volatile u8 *) (u32) (s0 + 442)) = (u8) a3; goto L_001AAECC;
L_001AAEC4:;
    { s32 c_ = a3 > 0; a1 = (s32) ((u32) a1 + 0xfffffffcU); if (c_) goto L_001AAE64; }
L_001AAECC:;
    if (a3 != 0) goto L_001AAED8;
    (*(volatile u8 *) (u32) (s0 + 442)) = (u8) 0;
L_001AAED8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 442));
    if (a0 != v0) { v1 = (s32) ((u32) v0 << 2); goto L_001AAEEC; }
L_001AAEE4:;
    v0 = 1; goto L_001AAF08;
L_001AAEEC:;
    v0 = (*(volatile s32 *) (u32) (s0 + 452));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    goto L_001AAEE4;
L_001AAF08:;
    return v0;
}
