/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_009A84B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;

    a3 = (s32) ((u32) a1 << 2);
    a2 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a3 + (u32) a1);
    a2 = (s32) ((u32) a2 + 0xffffa42cU);
    a5 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) a0 + 0x70U);
    a1 = (s32) ((u32) a2 + (u32) a5);
    a6 = 0;
    f3.f = (*(volatile f32 *) (u32) a1);
    a3 = (s32) 0xcb0000U;
    a4 = 1;
    f2.i = (s32) 0;
    a3 = (s32) ((u32) a3 + 0xffffa4f0U);
L_009A84E4:;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = f0.f * f3.f;
    (*(volatile f32 *) (u32) (v1 + 16)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 20));
    f0.f = f0.f * f3.f;
    (*(volatile f32 *) (u32) (v1 + 20)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f0.f = f0.f * f3.f;
    (*(volatile f32 *) (u32) (v1 + 24)) = f0.f;
    a1 = (*(volatile s32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    f1.f = (*(volatile f32 *) (u32) a1);
    f0.f = f1.f - f0.f;
    fcc = f0.f < f2.f;
    { s32 c_ = fcc; a2 = a4; if (c_) goto L_009A8528; }
    a2 = 0;
L_009A8528:;
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (v1 + 16)) = f0.f;
    a1 = (*(volatile s32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) (v1 + 8));
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = f1.f - f0.f;
    fcc = f0.f < f2.f;
    { s32 c_ = fcc; a2 = a4; if (c_) goto L_009A8560; }
    a2 = 0;
L_009A8560:;
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (v1 + 20));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (v1 + 20)) = f0.f;
    a1 = (*(volatile s32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) (v1 + 12));
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    f0.f = f1.f - f0.f;
    fcc = f0.f < f2.f;
    { s32 c_ = fcc; a2 = a4; if (c_) goto L_009A8598; }
    a2 = 0;
L_009A8598:;
    a1 = (s32) ((u32) a2 << 2);
    a6 = (s32) ((u32) a6 + 0x1U);
    a2 = (s32) ((u32) a3 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) a2);
    a1 = a6 < 235;
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (v1 + 24)) = f0.f;
    { s32 c_ = a1 != 0; v1 = (s32) ((u32) v1 + 0x20U); if (c_) goto L_009A84E4; }
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0xffffa430U);
    v1 = (s32) ((u32) v1 + (u32) a5);
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) (a0 + 7648));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7648)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7652));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7652)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7656));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7656)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7680));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7680)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7684));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7684)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7688));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7688)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7712));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7712)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7716));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7716)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7720));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7720)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7744));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7744)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7748));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7748)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7752));
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (a0 + 7752)) = f0.f; return;
}
