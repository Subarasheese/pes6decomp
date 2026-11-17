/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00129FD0(s32 a0, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x400000U;
    (*(volatile f32 *) (u32) (v1 + -20304)) = f12.f;
    v1 = (s32) 0x400000U;
    (*(volatile f32 *) (u32) (v1 + -20300)) = f13.f;
    v1 = (s32) 0x400000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -20288));
    if (v1 < 0) { a0 = (s32) ((u32) v1 >> 1); goto L_00129FFC; }
    f0.i = (s32) v1;
    f5.f = (f32) f0.i; goto L_0012A014;
L_00129FFC:;
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f5.f = (f32) f0.i;
    f5.f = f5.f + f5.f;
L_0012A014:;
    f1.f = f13.f - f12.f;
    f0.i = (s32) 0;
    fcc = f0.f == f1.f;
    if (!fcc) { v1 = (s32) 0x3f800000U; goto L_0012A03C; }
    v1 = (s32) 0x3f800000U;
    f4.i = (s32) v1;
    f1.f = f13.f + f12.f; goto L_0012A04C;
L_0012A03C:;
    f0.i = (s32) v1;
    f4.f = f0.f / f1.f;
    f1.f = f13.f + f12.f;
L_0012A04C:;
    v1 = (s32) 0x40000000U;
    a0 = (s32) 0x400000U;
    f3.i = f5.i ^ (s32) 0x80000000U;
    f2.i = (s32) v1;
    f3.f = f3.f * f1.f;
    v1 = (s32) 0x437f0000U;
    f0.i = (s32) v1;
    f1.f = f0.f - f5.f;
    v1 = (s32) 0x400000U;
    f0.f = f5.f * f13.f;
    f0.f = f12.f * f0.f;
    f0.f = f4.f * f0.f;
    (*(volatile f32 *) (u32) (v1 + -20292)) = f0.f;
    f0.i = (s32) 0;
    acc = f0.f + f5.f;
    f0.f = acc + f4.f * f3.f;
    f0.f = f0.f / f2.f;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (a0 + -20296)) = f0.f; return v0;
}
