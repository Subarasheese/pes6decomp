/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00912D50(s32, s32, s32, s32);
f32 func_00983610(f32, f32, f32);
void func_009842D0(s32, s32, s32, s32, f32, f32);
void func_00C6A440(s32, s32, s32, s32);

void func_00C624F0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;

    a1 = 0;
    s0 = a0; func_00912D50(a0, a1, a2, a3);
    v0 = (s32) 0x40000000U;
    a0 = (s32) 0x590000U;
    f1.i = (s32) v0;
    v1 = (s32) 0x40a00000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = (s32) ((u32) a0 + 0x1e90U);
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    f14.i = (s32) v1;
    v0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f13.f = f0.f / f1.f;
    f0.f = func_00983610(f12.f, f13.f, f14.f);
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v0 + 21276)) = f0.f;
    v0 = (s32) 0x40a00000U;
    f14.i = (s32) v0;
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v1 + 24));
    f12.f = (*(volatile f32 *) (u32) (v0 + 21280)); f0.f = func_00983610(f12.f, f13.f, f14.f);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xcb0000U;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f2.f = (*(volatile f32 *) (u32) (v1 + 24));
    f1.f = f0.f - f2.f;
    f3.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x44c00000U;
    f0.i = (s32) v0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00C625E4;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = 1; goto L_00C625C0; }
    a0 = -1;
L_00C625C0:;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 8);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f0.f;
L_00C625E4:;
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 21173));
    if (v1 == v0) goto L_00C62608;
    a0 = s0; func_00C6A440(a0, a1, a2, a3);
    goto L_00C62624;
L_00C62608:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s0; func_009842D0(a0, a1, a2, a3, f12.f, f13.f);
L_00C62624:;
    return;
}
