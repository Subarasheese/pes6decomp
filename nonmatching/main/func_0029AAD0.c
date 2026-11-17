/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0029AAD0(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f9 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    f32 acc = 0;

    v1 = -1;
    if (a1 == v1) { v1 = (s32) 0x40000000U; goto L_0029ABB4; }
    v1 = 1;
    if (a1 != v1) { v1 = (s32) 0x40400000U; goto L_0029AB34; }
    v1 = (s32) 0x40000000U;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    f0.i = (s32) v1;
    f3.f = f0.f * f13.f;
    v1 = (s32) 0x3f000000U;
    f0.f = f12.f - f3.f;
    f0.f = f14.f + f0.f;
    f2.i = (s32) v1;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f;
    f0.i = f12.i ^ (s32) 0x80000000U;
    f0.f = f0.f + f14.f;
    f1.f = f2.f * f0.f;
    f0.f = f2.f * f3.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f; goto L_0029ABAC;
L_0029AB34:;
    f0.i = f12.i ^ (s32) 0x80000000U;
    f8.i = (s32) v1;
    f7.f = f0.f + f15.f;
    v1 = (s32) 0x3f000000U;
    f5.i = (s32) v1;
    f0.f = f0.f + f14.f;
    v1 = (s32) 0x40800000U;
    f4.i = (s32) v1;
    f1.f = f5.f * f0.f;
    v1 = (s32) 0x40a00000U;
    f3.i = (s32) v1;
    f6.i = (s32) 0;
    v1 = (s32) 0x40000000U;
    f2.i = (s32) v1;
    f9.f = f13.f - f14.f;
    f0.f = f2.f * f13.f;
    acc = f6.f + f7.f;
    f6.f = acc + f8.f * f9.f;
    acc = f2.f * f12.f;
    acc = acc - f3.f * f13.f;
    f2.f = acc + f4.f * f14.f;
    f2.f = f2.f - f15.f;
    f3.f = f5.f * f6.f;
    f2.f = f5.f * f2.f;
    (*(volatile f32 *) (u32) a0) = f3.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f2.f;
    f0.f = f5.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f;
L_0029ABAC:;
    goto L_0029AC14;
L_0029ABB4:;
    a2 = (s32) 0x3f000000U;
    f0.i = (s32) 0;
    a1 = (s32) 0xc0400000U;
    f4.i = (s32) v1;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    acc = f0.f + f13.f;
    v1 = (s32) 0x40800000U;
    f0.i = (s32) v1;
    f3.f = acc - f4.f * f14.f;
    acc = f0.f * f14.f;
    f0.f = f15.f + f3.f;
    f2.i = (s32) a2;
    f1.i = (s32) a1;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f;
    f0.f = acc + f1.f * f13.f;
    f1.f = f0.f - f15.f;
    f0.f = f4.f * f13.f;
    f1.f = f2.f * f1.f;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f; goto L_0029ABAC;
L_0029AC14:;
    return;
}
