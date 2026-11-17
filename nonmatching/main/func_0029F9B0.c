/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0029F9B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    a3 = (*(volatile s32 *) (u32) (gp + -32420));
    a2 = (s32) 0x42700000U;
    f1.i = (s32) a2;
    v1 = (s32) 0x42400000U;
    f0.i = (s32) v1;
    f1.f = f1.f * f12.f;
    f2.f = (*(volatile f32 *) (u32) a3);
    f1.f = f1.f / f2.f;
    f3.f = f0.f / f2.f;
    fcc = f1.f <= f3.f;
    if (fcc) { v1 = (s32) 0x3f190000U; goto L_0029F9F8; }
    a2 = (s32) 0x41200000U; goto L_0029FA28;
L_0029F9F8:;
    v1 = v1 | 0x9999;
    f0.i = (s32) v1;
    f3.f = f0.f / f2.f;
    fcc = f1.f < f3.f;
    if (!fcc) { f3.i = f1.i; goto L_0029FA24; }
    goto L_0029FA24;
L_0029FA24:;
    a2 = (s32) 0x41200000U;
L_0029FA28:;
    v1 = (s32) 0x40000000U;
    f0.i = (s32) a2;
    f1.i = (s32) v1;
    f0.f = f3.f / f0.f;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_0029FA54;
    f0.i = f1.i;
L_0029FA54:;
    v1 = (*(volatile u16 *) (u32) (a1 + 16));
    v1 = v1 & 0x8;
    if (v1 != 0) { a3 = (*(volatile u16 *) (u32) (a1 + 12)); goto L_0029FAB0; }
    v1 = (*(volatile u16 *) (u32) (a1 + 12));
    if (v1 < 0) { a2 = (s32) ((u32) v1 >> 1); goto L_0029FA7C; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_0029FA94;
L_0029FA7C:;
    v1 = v1 & 0x1;
    a2 = a2 | v1;
    f1.i = (s32) a2;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_0029FA94:;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = (*(volatile u16 *) (u32) (a1 + 16)); goto L_0029FBF8; }
L_0029FAA0:;
    v1 = (s32) 0x40000000U;
    f0.i = (s32) v1;
    v1 = (*(volatile u16 *) (u32) (a1 + 12)); goto L_0029FAF4;
L_0029FAB0:;
    if (a3 < 0) { a2 = (s32) ((u32) a3 >> 1); goto L_0029FAC4; }
    f1.i = (s32) a3;
    f1.f = (f32) f1.i; goto L_0029FADC;
L_0029FAC4:;
    v1 = a3 & 0x1;
    a2 = a2 | v1;
    f1.i = (s32) a2;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_0029FADC:;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0029FAF0;
    (*(volatile u16 *) (u32) (a1 + 14)) = (u16) a3;
    (*(volatile u16 *) (u32) (a1 + 12)) = (u16) 0;
L_0029FAF0:;
    v1 = (*(volatile u16 *) (u32) (a1 + 12));
L_0029FAF4:;
    if (v1 == 0) { f2.f = (*(volatile f32 *) (u32) (a1 + 8)); goto L_0029FC10; }
L_0029FAFC:;
    f2.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) a0);
    f1.f = f2.f + f1.f;
    (*(volatile f32 *) (u32) (a1 + 4)) = f1.f;
    v1 = (*(volatile u16 *) (u32) (a1 + 12));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (a1 + 12)) = (u16) v1;
    f2.f = (*(volatile f32 *) (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (a1 + 20));
    fcc = f2.f <= f1.f;
    if (!fcc) { (*(volatile f32 *) (u32) (a1 + 20)) = f2.f; goto L_0029FB2C; }
L_0029FB2C:;
    f2.f = (*(volatile f32 *) (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (a1 + 24));
    fcc = f2.f < f1.f;
    if (fcc) { (*(volatile f32 *) (u32) (a1 + 24)) = f2.f; goto L_0029FB40; }
L_0029FB40:;
    f3.f = (*(volatile f32 *) (u32) (a1 + 32));
    f1.f = (*(volatile f32 *) (u32) (a1 + 24));
    fcc = f1.f <= f3.f;
    if (fcc) { f3.i = f1.i; goto L_0029FB54; }
L_0029FB54:;
    f2.f = (*(volatile f32 *) (u32) (a1 + 28));
    f1.f = (*(volatile f32 *) (u32) (a1 + 20));
    fcc = f1.f <= f2.f;
    if (fcc) { f1.i = f2.i; goto L_0029FB68; }
L_0029FB68:;
    a2 = (*(volatile u16 *) (u32) (a1 + 12));
    f5.f = f1.f + f3.f;
    v1 = (*(volatile u16 *) (u32) (a1 + 14));
    a3 = (s32) 0x3f000000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f4.i = (s32) 0;
    f3.i = (s32) a3;
    v1 = (s32) ((u32) a2 + (u32) v1);
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    acc = f4.f + f1.f;
    f1.f = acc + f3.f * f5.f;
    f1.f = f3.f * f1.f;
    (*(volatile f32 *) (u32) a0) = f1.f;
    v1 = (*(volatile u16 *) (u32) (a1 + 16));
    v1 = v1 & 0x8;
    if (v1 == 0) { f0.f = (*(volatile f32 *) (u32) a0); goto L_0029FBE4; }
    v1 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    f2.f = (*(volatile f32 *) (u32) (a1 + 36));
    f3.f = f0.f - f1.f;
    f1.f = (*(volatile f32 *) (u32) a0);
    acc = f4.f + f1.f;
    f1.f = acc + f3.f * f2.f;
    f0.f = f1.f / f0.f;
L_0029FBE4:;
    (*(volatile f32 *) (u32) a1) = f0.f;
    (*(volatile f32 *) (u32) (a1 + 36)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) a1);
    (*(volatile f32 *) (u32) a0) = f0.f; goto L_0029FC40;
L_0029FBF8:;
    v1 = v1 | 0x8;
    (*(volatile u16 *) (u32) (a1 + 16)) = (u16) v1;
    v1 = (*(volatile u16 *) (u32) (a1 + 12));
    (*(volatile u16 *) (u32) (a1 + 14)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 12)) = (u16) 0; goto L_0029FAA0;
L_0029FC10:;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = f1.f - f2.f;
    (*(volatile f32 *) (u32) (a1 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (a1 + 8)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 20));
    (*(volatile f32 *) (u32) (a1 + 28)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 24));
    (*(volatile f32 *) (u32) (a1 + 32)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) a0);
    (*(volatile f32 *) (u32) (a1 + 24)) = f1.f;
    (*(volatile f32 *) (u32) (a1 + 20)) = f1.f; goto L_0029FAFC;
L_0029FC40:;
    return;
}
