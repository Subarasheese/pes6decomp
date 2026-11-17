/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00A99850(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v1 + 9980));
    { s32 c_ = a2 < 0; f3.f = (*(volatile f32 *) (u32) (a0 + 240)); if (c_) goto L_00A9986C; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00A99888;
L_00A9986C:;
    a1 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a1 = a1 | v1;
    f0.i = (s32) a1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00A99888:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) 0;
    f4.f = (*(volatile f32 *) (u32) (a0 + 248));
    acc = f0.f + f1.f;
    { s32 c_ = a2 < 0; f5.f = acc + f3.f * f2.f; if (c_) goto L_00A998AC; }
    f0.i = (s32) a2;
    f3.f = (f32) f0.i; goto L_00A998C8;
L_00A998AC:;
    a1 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a1 = a1 | v1;
    f0.i = (s32) a1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00A998C8:;
    f2.f = (*(volatile f32 *) (u32) (a0 + 232));
    v1 = (s32) 0x46520000U;
    v1 = v1 | 0x2400;
    f0.i = (s32) v1;
    f1.i = (s32) 0;
    fcc = f5.f <= f0.f;
    acc = f1.f + f2.f;
    { s32 c_ = fcc; f1.f = acc + f4.f * f3.f; if (c_) goto L_00A998F4; }
    f5.i = f0.i;
L_00A998F4:;
    v1 = (s32) 0xc6520000U;
    v1 = v1 | 0x2400;
    f0.i = (s32) v1;
    fcc = f5.f < f0.f;
    if (!fcc) goto L_00A99914;
    f5.i = f0.i;
L_00A99914:;
    v1 = (s32) 0x46080000U;
    v1 = v1 | 0x2400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A99934;
    f1.i = f0.i;
L_00A99934:;
    v1 = (s32) 0xc6080000U;
    v1 = v1 | 0x2400;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A99954;
    f1.i = f0.i;
L_00A99954:;
    (*(volatile f32 *) (u32) (a0 + 108)) = f5.f;
    (*(volatile f32 *) (u32) (a0 + 112)) = f1.f; return;
}
