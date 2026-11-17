/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009A8760(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

void func_009A6DC0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    f0.i = (s32) 0;
    f22.i = f12.i;
    fcc = f22.f <= f0.f;
    f21.i = f13.i;
    { s32 c_ = fcc; f20.i = f14.i; if (c_) goto L_009A6E00; }
    v0 = 0; goto L_009A6E04;
L_009A6E00:;
    v0 = 0x8000;
L_009A6E04:;
    f0.i = (s32) 0;
    fcc = f22.f <= f0.f;
    { s32 c_ = fcc; v1 = v0 & 0xffff; if (c_) goto L_009A6E2C; }
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0xd400;
    f1.i = (s32) v0;
    v0 = (s32) 0xc6520000U; goto L_009A6E3C;
L_009A6E2C:;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0xd400;
    f1.i = (s32) v0;
    v0 = (s32) 0xc6520000U;
L_009A6E3C:;
    f0.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_009A6E70;
    v0 = (s32) 0x46520000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009A6E70;
    a1 = 0; goto L_009A6F3C;
L_009A6E70:;
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s32) 0x46520000U; goto L_009A6E98; }
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f23.f = f1.f - f0.f; goto L_009A6EA8;
L_009A6E98:;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f23.f = f0.f + f1.f;
L_009A6EA8:;
    s0 = v1 & 0xffff;
    a1 = 1000;
    a0 = s0; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    v1 = (s32) 0x3a830000U;
    v1 = v1 | 0x126f;
    a0 = s0;
    f1.f = (f32) f1.i;
    a1 = 1000;
    f0.i = (s32) v1;
    f24.f = f0.f * f1.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x3a830000U;
    v0 = v0 | 0x126f;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f1.f = f1.f * f2.f;
    acc = f20.f * f1.f;
    f1.f = acc + f23.f * f24.f;
    fcc = f0.f < f1.f;
    { s32 c_ = !fcc; (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0; if (c_) goto L_009A6F28; }
    v1 = 1;
    v0 = 26;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0; goto L_009A6F38;
L_009A6F28:;
    v1 = -1;
    v0 = 24;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0;
L_009A6F38:;
    a1 = (*(volatile s32 *) (u32) (sp + 92));
L_009A6F3C:;
    { s32 c_ = a1 != 0; v0 = 0; if (c_) goto L_009A6F5C; }
    v1 = 1;
L_009A6F48:;
    if (v0 == v1) goto L_009A6FB4;
    v0 = 0;
L_009A6F54:;
    goto L_009A6FD4;
L_009A6F5C:;
    v1 = (s32) ((u32) sp + 0x48U);
    { s32 c_ = v1 == 0; v0 = 12; if (c_) goto L_009A6F84; }
L_009A6F68:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_009A6F68;
L_009A6F84:;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) a1;
    a0 = (s32) 0xcb0000U;
    a1 = (*(volatile u8 *) (u32) (sp + 88));
    a0 = (s32) ((u32) a0 + 0x7730U);
    a3 = (*(volatile s8 *) (u32) (sp + 89));
    a2 = (s32) ((u32) sp + 0x48U);
    (*(volatile f32 *) (u32) (sp + 72)) = f22.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f20.f; v0 = func_009A8760(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = 1; goto L_009A6F48;
L_009A6FB4:;
    a0 = (s32) 0xcc0000U;
    v0 = v1;
    a0 = (s32) ((u32) a0 + 0xffffa918U);
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 214));
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) (a0 + 214)) = (u8) v1; goto L_009A6F54;
L_009A6FD4:;
    return;
}
