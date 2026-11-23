/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE580(s32, s32);
void func_001EF5B0(s32, s32);

void func_0026D250(s32 a0, s32 a1, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    f21.i = f12.i;
    { s32 c_ = s0 == 0; f20.i = f13.i; if (c_) goto L_0026D2B0; }
    a1 = (s32) ((u32) sp + 0x30U); func_001EE580(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    a0 = s0;
    f2.f = (*(volatile f32 *) (u32) (sp + 52));
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    f0.f = f2.f + f20.f;
    f1.f = f1.f + f21.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f; func_001EF5B0(a0, a1);
L_0026D2B0:;
    return;
}
