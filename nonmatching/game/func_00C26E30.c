/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00984160(s32, f32, f32);
s32 func_009B33A0(s32, s32, s32);

s32 func_00C26E30(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;

    s1 = a0;
    v0 = (*(volatile s16 *) (u32) (a1 + 12));
    s0 = a1;
    a2 = (*(volatile s16 *) (u32) (a1 + 14));
    a1 = v0; v0 = func_009B33A0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s0 + 40));
    v1 = 1;
    if (a0 == v1) { a2 = (*(volatile s16 *) (u32) (s0 + 12)); goto L_00C26EF8; }
    if (a0 == 0) { a3 = (*(volatile s16 *) (u32) (s0 + 12)); goto L_00C26E78; }
    v0 = 4; goto L_00C26F6C;
L_00C26E78:;
    v1 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 21284));
    a0 = (s32) 0x44c00000U;
    f3.i = (s32) a0;
    a1 = (s32) 0xcb0000U;
    f0.i = (s32) 0;
    a0 = (s32) 0xcb0000U;
    f1.i = (s32) a3;
    v1 = (s32) 0x590000U;
    f1.f = (f32) f1.i;
    a2 = (*(volatile u8 *) (u32) (v1 + 7140));
    acc = f0.f + f1.f;
    v1 = (s32) ((u32) a2 << 1);
    f0.f = acc + f3.f * f2.f;
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile f32 *) (u32) (a1 + 21276)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (s0 + 14));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 21280)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    at = (u64) v1 < (u64) a0;
    if (at != 0) goto L_00C26F90;
    at = (s32) 0x100000U;
    at = at | 0x1;
    at = v0 < at;
    if (at != 0) goto L_00C26F68;
    v0 = 1; goto L_00C26F94;
L_00C26EF8:;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (s32) 0x44800000U;
    f3.i = (s32) v1;
    a0 = (s32) 0xcb0000U;
    f0.i = (s32) 0;
    v1 = (s32) 0xcb0000U;
    f1.i = (s32) a2;
    v0 = (s32) 0x590000U;
    f1.f = (f32) f1.i;
    a1 = (*(volatile u8 *) (u32) (v0 + 7140));
    acc = f0.f + f1.f;
    v0 = (s32) ((u32) a1 << 1);
    f0.f = acc - f3.f * f2.f;
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile f32 *) (u32) (a0 + 21276)) = f0.f;
    v0 = (s32) ((u32) v0 << 1);
    a0 = (*(volatile s16 *) (u32) (s0 + 14));
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v1 + 21280)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_00C26F9C;
L_00C26F60:;
    v0 = 1; goto L_00C26FDC;
L_00C26F68:;
    v0 = 4;
L_00C26F6C:;
    (*(volatile u8 *) (u32) (s1 + 513)) = (u8) v0;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = s1; func_00984160(a0, f12.f, f13.f);
    v0 = 3; goto L_00C26FDC;
L_00C26F90:;
    v0 = 1;
L_00C26F94:;
    (*(volatile u8 *) (u32) (s0 + 40)) = (u8) v0; goto L_00C26F68;
L_00C26F9C:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 21276));
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x40000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00C26F68;
    goto L_00C26F60;
L_00C26FDC:;
    return v0;
}
