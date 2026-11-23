/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008B6080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    s2 = a0;
    v0 = (*(volatile u8 *) (u32) (a0 + 11));
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    at = v0 < 41;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_008B60D8; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffbba0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) { at = s1 < 41; goto L_008B60DC; }
    { u32 t_ = (u32) v0; a1 = 1; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    s1 = v0;
L_008B60D8:;
    at = s1 < 41;
L_008B60DC:;
    if (at == 0) { (*(volatile u8 *) (u32) (s2 + 28)) = (u8) 0; goto L_008B6270; }
    v0 = 40;
    if (s1 != v0) { v0 = 39; goto L_008B60F8; }
    v0 = 1; goto L_008B62A0;
L_008B60F8:;
    if (s1 != v0) goto L_008B61AC;
    s0 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = (s32) ((u32) s0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    at = v0 < 41;
    if (at == 0) { v0 = s0 & 0xff; goto L_008B6144; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffbba0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_008B6140;
    a0 = s2;
    { u32 t_ = (u32) v0; a1 = 2; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_008B6140:;
    v0 = s0 & 0xff;
L_008B6144:;
    if (v0 <= 0) { v0 = s0 & 0xff; goto L_008B6168; }
    v1 = (s32) ((u32) s0 + (u32) s2);
    v0 = (s32) ((u32) s0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) 0;
    s0 = v0 & 0xff;
    (*(volatile u8 *) (u32) (s2 + 11)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) 0;
    v0 = s0 & 0xff;
L_008B6168:;
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    at = v0 < 41;
    if (at == 0) goto L_008B626C;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffbba0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_008B626C;
    a0 = s2;
    { u32 t_ = (u32) v0; a1 = 0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    goto L_008B626C;
L_008B61AC:;
    if (s1 <= 0) goto L_008B626C;
    v0 = (*(volatile u8 *) (u32) (s2 + 11));
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    at = v0 < 41;
    if (at == 0) { v0 = s1 & 0xff; goto L_008B61F8; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffbba0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_008B61F4;
    a0 = s2;
    { u32 t_ = (u32) v0; a1 = 2; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_008B61F4:;
    v0 = s1 & 0xff;
L_008B61F8:;
    at = v0 < 32;
    { s32 c_ = at == 0; v1 = (*(volatile u8 *) (u32) (s2 + 11)); if (c_) goto L_008B620C; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v1 = v0 & 0xff;
L_008B620C:;
    v0 = v1 & 0xff;
    at = v0 < 10;
    if (at == 0) { v0 = v1 & 0xff; goto L_008B6230; }
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) s1;
    (*(volatile u8 *) (u32) (s2 + 11)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) 0;
    v0 = v1 & 0xff;
L_008B6230:;
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    at = v0 < 41;
    if (at == 0) goto L_008B626C;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffbba0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_008B626C;
    a0 = s2;
    { u32 t_ = (u32) v0; a1 = 0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_008B626C:;
    (*(volatile u8 *) (u32) (s2 + 28)) = (u8) 0;
L_008B6270:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 != 0) { v0 = 0; goto L_008B62A0; }
    v0 = 31;
    if (s1 != v0) goto L_008B629C;
    v0 = 1; goto L_008B62A0;
L_008B629C:;
    v0 = 0;
L_008B62A0:;
    return;
}
