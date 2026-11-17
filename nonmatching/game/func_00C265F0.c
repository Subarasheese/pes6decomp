/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00984160(s32, f32, f32);

s32 func_00C265F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
    a3 = 0;
    a4 = 0;
    v1 = (s32) ((u32) v1 << 2);
    a2 = (s32) ((u32) v0 + (u32) v1);
    v1 = 1;
    a1 = 9;
L_00C2661C:;
    v0 = (*(volatile u8 *) (u32) (a2 + 31));
    if (v0 != a1) goto L_00C26630;
    a3 = v1;
L_00C26630:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 4;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x1U); if (c_) goto L_00C2661C; }
    if (a3 == 0) { v0 = 1; goto L_00C2670C; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) 0x590000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + 21284));
    a1 = (*(volatile u8 *) (u32) (a0 + 19));
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    v1 = (s32) ((u32) v1 + 0x1e80U);
    f2.i = (s32) 0;
    v0 = (s32) 0x44800000U;
    f0.i = (s32) v0;
    f1.f = f1.f * f4.f;
    v0 = a1 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f3.f = (*(volatile f32 *) (u32) v0);
    acc = f2.f + f0.f;
    f0.f = acc + f3.f * f4.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C2670C; }
    v0 = (s32) 0x44400000U;
    f0.i = (s32) v0;
    acc = f2.f + f3.f;
    v0 = (s32) 0xcb0000U;
    f0.f = acc + f0.f * f4.f;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    v0 = v0 < 8;
    if (v0 != 0) goto L_00C266E0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x43000000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 21276));
    f1.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    acc = f2.f + f0.f;
    f0.f = acc + f1.f * f4.f;
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f;
L_00C266E0:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    a1 = (s32) 0xcb0000U;
    a2 = 4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (a1 + 21280)) = f0.f;
    (*(volatile u8 *) (u32) (a0 + 513)) = (u8) a2;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f12.f = (*(volatile f32 *) (u32) (v1 + 21276)); func_00984160(a0, f12.f, f13.f);
    v0 = 3;
L_00C2670C:;
    return v0;
}
