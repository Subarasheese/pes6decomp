/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C10CF0(s32 a0) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };

    f0.i = (s32) 0;
    if (a0 == 0) goto L_00C10D50;
    v1 = 0;
L_00C10D00:;
    f6.f = (*(volatile f32 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0x8U);
    f5.f = (*(volatile f32 *) (u32) (a0 + 4));
    v0 = v1 < 48;
    f4.f = (*(volatile f32 *) (u32) (a0 + 8));
    f3.f = (*(volatile f32 *) (u32) (a0 + 12));
    f2.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = (*(volatile f32 *) (u32) (a0 + 20));
    f0.f = f0.f + f6.f;
    f0.f = f0.f + f5.f;
    f0.f = f0.f + f4.f;
    f0.f = f0.f + f3.f;
    f0.f = f0.f + f2.f;
    f2.f = f0.f + f1.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 24));
    f0.f = (*(volatile f32 *) (u32) (a0 + 28));
    f1.f = f2.f + f1.f;
    a0 = (s32) ((u32) a0 + 0x20U);
    { s32 c_ = v0 != 0; f0.f = f1.f + f0.f; if (c_) goto L_00C10D00; }
L_00C10D50:;
    return v0;
}
