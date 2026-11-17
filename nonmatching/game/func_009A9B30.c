/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_009A9B30(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0;
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
    volatile union { f32 f; s32 i; } f10 = { 0 };
    volatile union { f32 f; s32 i; } f11 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x44fa0000U;
    f4.f = (*(volatile f32 *) (u32) a1);
    v0 = v0 | 0xe147;
    f14.f = (*(volatile f32 *) (u32) a0);
    f0.f = (*(volatile f32 *) (u32) a2);
    f2.f = (*(volatile f32 *) (u32) (a1 + 8));
    f7.f = (*(volatile f32 *) (u32) (a0 + 8));
    f3.f = (*(volatile f32 *) (u32) (a1 + 4));
    f12.f = (*(volatile f32 *) (u32) (a0 + 4));
    f13.f = f4.f - f14.f;
    f10.f = f2.f - f7.f;
    f11.f = f3.f - f12.f;
    f9.f = f0.f - f14.f;
    f5.f = (*(volatile f32 *) (u32) (a2 + 8));
    f6.f = (*(volatile f32 *) (u32) (a2 + 4));
    f4.f = (*(volatile f32 *) (u32) (a3 + 8));
    f2.f = (*(volatile f32 *) (u32) (a3 + 4));
    f3.f = (*(volatile f32 *) (u32) a3);
    f1.i = (s32) v0;
    f5.f = f5.f - f7.f;
    f8.f = f6.f - f12.f;
    f4.f = f4.f - f7.f;
    acc = f11.f * f5.f;
    f7.f = acc - f10.f * f8.f;
    acc = f10.f * f9.f;
    f6.f = acc - f13.f * f5.f;
    f2.f = f2.f - f12.f;
    f3.f = f3.f - f14.f;
    (*(volatile f32 *) (u32) (sp + 24)) = f5.f;
    acc = f13.f * f8.f;
    f5.f = acc - f11.f * f9.f;
    acc = f6.f * f2.f;
    acc = acc + f7.f * f3.f;
    f3.f = acc + f5.f * f4.f;
    acc = f6.f * f6.f;
    acc = acc + f7.f * f7.f;
    f2.f = acc + f5.f * f5.f;
    f2.f = f1.f * f2.f;
    f1.f = f3.f * f3.f;
    fcc = f1.f <= f2.f;
    f0.i = (s32) 0;
    (*(volatile f32 *) (u32) (sp + 32)) = f13.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f11.f;
    (*(volatile f32 *) (u32) (sp + 40)) = f10.f;
    (*(volatile f32 *) (u32) (sp + 16)) = f9.f;
    (*(volatile f32 *) (u32) (sp + 20)) = f8.f;
    (*(volatile f32 *) (u32) sp) = f7.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f7.f;
    (*(volatile f32 *) (u32) (sp + 4)) = f6.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f6.f;
    (*(volatile f32 *) (u32) (sp + 8)) = f5.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) (sp + 56)) = f5.f; if (c_) goto L_009A9C10; }
    goto L_009A9C18;
L_009A9C10:;
    f0.i = f3.i;
L_009A9C18:;
    return;
}
