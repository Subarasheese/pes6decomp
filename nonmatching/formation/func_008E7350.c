/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008E7620(s32, s32, s32, s32, f32);
void func_008E77B0(s32, s32, s32, s32);
void func_008E7860(s32, s32, s32, s32, f32);
void func_008E7AE0(s32, s32, s32);
void func_008E7B50(s32, s32);
void func_008E7C90(s32, s32, s32, s32, f32);
void func_008E7DC0(s32, s32, s32, s32, f32);
void func_008E7F00(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E7FF0(s32, s32, f32);

void func_008E7350(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
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
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    { s32 c_ = s3 == 0; s1 = a2; if (c_) goto L_008E7390; }
    a0 = (s32) ((u32) s3 + 0x54U); func_008E7F00(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) 0; goto L_008E7390;
L_008E7388:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) v1;
L_008E7390:;
    s0 = (*(volatile u8 *) (u32) (s3 + 1));
    at = s0 < 10;
    if (at == 0) goto L_008E73B8;
    v1 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) s2 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v1 != 0) { v1 = (*(volatile u8 *) (u32) (s3 + 1)); goto L_008E7388; }
L_008E73B8:;
    if (s0 == 0) { ; goto L_008E7544; }
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x50U); goto L_008E73D4; }
    s0 = (s32) ((u32) s0 + 0x1U);
    a0 = (s32) ((u32) sp + 0x50U);
L_008E73D4:;
    func_008E7620(a0, a1, a2, a3, f12.f);
    f1.i = (s32) s0;
    f1.f = (f32) f1.i;
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s3 + 68));
    if (v0 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 80)); goto L_008E7414; }
    a0 = (*(volatile s32 *) (u32) (s3 + 72));
    a1 = s1 & 0xff;
    { u32 t_ = (u32) v0; a2 = (s32) ((u32) sp + 0x50U); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
L_008E7414:;
    a0 = (s32) ((u32) s3 + 0x54U);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f; func_008E7FF0(a0, a1, f12.f);
    a2 = (*(volatile s32 *) (u32) (s2 + 104));
    if (a2 == 0) { a0 = (s32) ((u32) s3 + 0x54U); goto L_008E7450; }
    a3 = (*(volatile u8 *) (u32) (s2 + 44));
    a0 = (s32) ((u32) s3 + 0x54U);
    a1 = (s32) ((u32) sp + 0x60U); func_008E7DC0(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s3 + 0x54U);
L_008E7450:;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = (s32) ((u32) s2 + 0x4U); func_008E7C90(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s3 + 0x54U);
    a1 = (s32) ((u32) sp + 0x60U); func_008E7860(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile u8 *) (u32) (s2 + 88));
    { s32 c_ = v1 == 0; s0 = 0; if (c_) goto L_008E748C; }
    s0 = (*(volatile u8 *) (u32) (s3 + 2));
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    v1 = s0 < v1;
    if (v1 != 0) { v1 = 255; goto L_008E7490; }
    s0 = 0;
L_008E748C:;
    v1 = 255;
L_008E7490:;
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    { s32 c_ = v1 <= 0; a1 = 0; if (c_) goto L_008E74F8; }
    a3 = s2;
    a2 = s3;
L_008E74A8:;
    a0 = (s32) ((u32) s2 + (u32) a1);
    v1 = (s32) ((u32) s3 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 90));
    (*(volatile u8 *) (u32) (v1 + 5)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (s2 + 45));
    if (v1 == 0) goto L_008E74E0;
    a0 = (*(volatile s32 *) (u32) (a3 + 48));
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (s2 + 100));
    if (a0 != v1) goto L_008E74E0;
    (*(volatile u8 *) (u32) (s3 + 3)) = (u8) a1;
    s0 = a1 & 0xff;
L_008E74E0:;
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    a1 = (s32) ((u32) a1 + 0x1U);
    a3 = (s32) ((u32) a3 + 0x4U);
    v1 = a1 < v1;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_008E74A8; }
L_008E74F8:;
    if (s3 == 0) goto L_008E7540;
    a0 = (s32) ((u32) s3 + 0x54U);
    a1 = (s32) ((u32) s3 + 0x5U);
    (*(volatile u8 *) (u32) (s3 + 2)) = (u8) s0; func_008E7B50(a0, a1);
    a0 = (s32) ((u32) s3 + 0x54U);
    a1 = s0; func_008E77B0(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) s3);
    v1 = (*(volatile u8 *) (u32) (v1 + 5));
    if (v1 == 0) goto L_008E7540;
    a0 = (s32) ((u32) s3 + 0x54U);
    a1 = s0;
    a2 = 0; func_008E7AE0(a0, a1, a2);
L_008E7540:;
L_008E7544:;
    return;
}
