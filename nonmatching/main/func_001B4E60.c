/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF370(s32, s32);

void func_001B4E60(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    { s32 c_ = a2 != 0; f3.f = f0.f - f12.f; if (c_) goto L_001B4E80; }
    a2 = (s32) 0x520000U;
    a2 = (s32) ((u32) a2 + 0x28d0U);
L_001B4E80:;
    if (a1 != 0) { f1.f = (*(volatile f32 *) (u32) a2); goto L_001B4E94; }
    a1 = (s32) 0x520000U;
    a1 = (s32) ((u32) a1 + 0x28d0U);
    f1.f = (*(volatile f32 *) (u32) a2);
L_001B4E94:;
    f0.f = (*(volatile f32 *) (u32) a1);
    f2.i = (s32) 0;
    acc = f2.f + f1.f;
    f0.f = f1.f - f0.f;
    f0.f = acc - f3.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 16)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a2 + 4));
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    acc = f2.f + f1.f;
    f0.f = f1.f - f0.f;
    f0.f = acc - f3.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a2 + 8));
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    acc = f2.f + f1.f;
    f0.f = f1.f - f0.f;
    f0.f = acc - f3.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 24)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a2 + 12));
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    acc = f2.f + f1.f;
    f0.f = f1.f - f0.f;
    a1 = (s32) ((u32) sp + 0x10U);
    f0.f = acc - f3.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f; func_001EF370(a0, a1);
    return;
}
