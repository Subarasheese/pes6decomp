/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 sceVu0MulMatrix(s32, s32, s32);
void sceVu0UnitMatrix(s32);

void func_00104398(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    volatile union { f32 f; s32 i; } f25 = { 0 };
    volatile union { f32 f; s32 i; } f26 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    f0.i = f17.i ^ (s32) 0x80000000U;
    f20.i = f18.i ^ (s32) 0x80000000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 160));
    f0.f = f0.f + f18.f;
    f21.f = f1.f * f19.f;
    f20.f = f20.f * f19.f;
    s0 = a0;
    f17.f = f17.f * f1.f;
    f19.i = f19.i ^ (s32) 0x80000000U;
    f21.f = f21.f * f0.f;
    f20.f = f20.f + f17.f;
    f19.f = f19.f + f1.f;
    f22.i = f12.i;
    f24.i = f13.i;
    f23.i = f14.i;
    f26.i = f15.i;
    f21.f = f21.f / f19.f;
    f20.f = f20.f / f19.f;
    f25.i = f16.i; sceVu0UnitMatrix(a0);
    at = (s32) 0x3f800000U;
    f0.i = (s32) at;
    a0 = sp;
    (*(volatile f32 *) (u32) (s0 + 20)) = f22.f;
    (*(volatile f32 *) (u32) s0) = f22.f;
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) 0;
    (*(volatile f32 *) (u32) (s0 + 44)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 56)) = f0.f; sceVu0UnitMatrix(a0);
    a0 = s0;
    (*(volatile f32 *) (u32) sp) = f24.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f23.f;
    a1 = sp;
    (*(volatile f32 *) (u32) (sp + 40)) = f21.f;
    a2 = a0;
    (*(volatile f32 *) (u32) (sp + 48)) = f26.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f25.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f20.f; v0 = sceVu0MulMatrix(a0, a1, a2);
    return;
}
