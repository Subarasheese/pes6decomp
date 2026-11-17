/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00984160(s32, f32, f32);

s32 func_00C24B10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (*(volatile u8 *) (u32) (a1 + 40));
    if (v0 == 0) { v1 = 1; goto L_00C24BCC; }
L_00C24B24:;
    v1 = (*(volatile u8 *) (u32) (a1 + 40));
    v0 = 2;
    if (v1 == v0) goto L_00C24B48;
    v0 = 1;
    if (v1 == v0) goto L_00C24C30;
    a2 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_00C24C34;
L_00C24B48:;
    v0 = (s32) 0xcb0000U;
    a2 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (a0 + 19));
    f0.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a2 = (s32) ((u32) a2 + 0x1e90U);
    v0 = a3 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a2 + (u32) v0);
    f3.f = (*(volatile f32 *) (u32) v0);
    f2.f = (*(volatile f32 *) (u32) (v1 + 16));
    f1.f = f3.f * f0.f;
    f0.f = f2.f * f0.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C24B8C;
    f3.i = f2.i;
L_00C24B8C:;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f3.f;
L_00C24B94:;
    a3 = (*(volatile s16 *) (u32) (a1 + 14));
    a2 = 4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    f0.i = (s32) a3;
    a1 = (s32) 0xcb0000U;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a1 + 21280)) = f0.f;
    (*(volatile u8 *) (u32) (a0 + 513)) = (u8) a2;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f12.f = (*(volatile f32 *) (u32) (v1 + 21276)); func_00984160(a0, f12.f, f13.f);
    v0 = 3; goto L_00C24C74;
L_00C24BCC:;
    v0 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (a1 + 40)) = (u8) v1;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    v1 = (s32) ((u32) v1 + 0x1e90U);
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    f1.f = f0.f * f2.f;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C24B24;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = f0.f * f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C24B24;
    v0 = 2;
    (*(volatile u8 *) (u32) (a1 + 40)) = (u8) v0; goto L_00C24B24;
L_00C24C30:;
    a2 = (*(volatile u8 *) (u32) (a0 + 19));
L_00C24C34:;
    v1 = (s32) 0x44800000U;
    f3.i = (s32) v1;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e90U);
    f0.i = (s32) 0;
    a2 = a2 ^ 0x1;
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) v1);
    acc = f0.f + f1.f;
    f0.f = acc - f3.f * f2.f;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f; goto L_00C24B94;
L_00C24C74:;
    return v0;
}
