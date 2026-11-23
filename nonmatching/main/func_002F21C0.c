/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_002F21C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    f1.f = (*(volatile f32 *) (u32) a1);
    v1 = (s32) 0x40400000U;
    f0.i = (s32) v1;
    v1 = 3;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) a1) = f0.f;
    a3 = (*(volatile u8 *) (u32) (a0 + 2));
    a4 = a3 & 0xf;
    if (a4 != v1) { f3.f = (*(volatile f32 *) (u32) a1); goto L_002F2204; }
    f2.f = (*(volatile f32 *) (u32) a1);
    f1.f = (*(volatile f32 *) (u32) (a0 + 8));
    f0.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = f2.f + f1.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (a0 + 16)) = f0.f; goto L_002F2264;
L_002F2204:;
    v1 = (s32) 0x3f000000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 24));
    f0.i = (s32) v1;
    f2.f = f12.f - f3.f;
    f1.f = f2.f - f1.f;
    { s32 c_ = a4 < 0; f2.f = f0.f * f1.f; if (c_) goto L_002F222C; }
    f0.i = (s32) a4;
    f1.f = (f32) f0.i; goto L_002F2248;
L_002F222C:;
    a3 = (s32) ((u32) a4 >> 1);
    v1 = a4 & 0x1;
    a3 = a3 | v1;
    f0.i = (s32) a3;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_002F2248:;
    f0.i = (s32) 0;
    acc = f0.f + f3.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = acc + f1.f * f2.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (a0 + 16)) = f0.f;
L_002F2264:;
    a3 = (*(volatile u8 *) (u32) (a0 + 3));
    v1 = 3;
    a3 = a3 & 0xf;
    if (a3 != v1) { f0.f = (*(volatile f32 *) (u32) (a1 + 4)); goto L_002F228C; }
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = (*(volatile f32 *) (u32) (a0 + 12));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (a0 + 20)) = f0.f; goto L_002F2290;
L_002F228C:;
    (*(volatile f32 *) (u32) (a0 + 20)) = f0.f;
L_002F2290:;
    f2.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = (*(volatile f32 *) (u32) (a0 + 24));
    f0.f = (*(volatile f32 *) (u32) a2);
    f1.f = f2.f + f1.f;
    fcc = f0.f < f1.f;
    if (!fcc) { f2.f = (*(volatile f32 *) (u32) (a0 + 20)); goto L_002F22B4; }
    (*(volatile f32 *) (u32) a2) = f1.f;
    f2.f = (*(volatile f32 *) (u32) (a0 + 20));
L_002F22B4:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 28));
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    f1.f = f2.f + f1.f;
    fcc = f0.f < f1.f;
    if (!fcc) { f1.f = (*(volatile f32 *) (u32) (a0 + 16)); goto L_002F22D4; }
    (*(volatile f32 *) (u32) (a2 + 4)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 16));
L_002F22D4:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 24));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) a1) = f0.f;
    v1 = (*(volatile u8 *) (u32) (a0 + 3));
    v1 = v1 & 0x10;
    if (v1 != 0) goto L_002F2308;
    f1.f = (*(volatile f32 *) (u32) a1);
    v1 = (s32) 0x41500000U;
    f0.i = (s32) v1;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) a1) = f0.f;
L_002F2308:;
    return;
}
