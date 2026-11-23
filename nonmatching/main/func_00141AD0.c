/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00141AD0(s32 a0, s32 a1, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;
    f32 acc = 0;

    fcc = f14.f <= f15.f;
    if (!fcc) { v1 = (s32) 0x43000000U; goto L_00141B04; }
    v1 = (s32) 0x43000000U;
    a0 = (s32) 0x370000U;
    f1.i = (s32) v1;
    f0.f = f1.f * f14.f;
    v1 = (s32) 0x370000U;
    (*(volatile f32 *) (u32) (a0 + 25736)) = f0.f;
    f0.f = f1.f * f15.f;
    (*(volatile f32 *) (u32) (v1 + 25740)) = f0.f; goto L_00141B24;
L_00141B04:;
    a0 = (s32) 0x370000U;
    f1.i = (s32) v1;
    f0.f = f1.f * f15.f;
    v1 = (s32) 0x370000U;
    (*(volatile f32 *) (u32) (a0 + 25736)) = f0.f;
    f0.f = f1.f * f14.f;
    (*(volatile f32 *) (u32) (v1 + 25740)) = f0.f;
L_00141B24:;
    fcc = f13.f == f12.f;
    if (fcc) { v1 = (s32) 0x3f000000U; goto L_00141B74; }
L_00141B30:;
    f1.f = f15.f - f14.f;
    a1 = (s32) 0x43000000U;
    a0 = (s32) 0x370000U;
    v1 = (s32) 0x370000U;
    acc = f13.f * f14.f;
    f2.i = (s32) a1;
    f0.f = acc - f12.f * f15.f;
    f1.f = f2.f * f1.f;
    f3.f = f13.f - f12.f;
    f0.f = f2.f * f0.f;
    f1.f = f1.f / f3.f;
    f0.f = f0.f / f3.f;
    (*(volatile f32 *) (u32) (a0 + 25728)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + 25732)) = f0.f; goto L_00141B88;
L_00141B74:;
    f0.i = (s32) v1;
    f12.f = f12.f + f0.f;
    f13.f = f13.f - f0.f; goto L_00141B30;
L_00141B88:;
    return;
}
