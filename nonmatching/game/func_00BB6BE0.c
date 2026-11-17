/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB6BE0(s32 a0, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0xcc0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -11704));
    f6.i = (s32) 0;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    fcc = f1.f <= f6.f;
    { s32 c_ = fcc; f7.f = f0.f * f0.f; if (c_) goto L_00BB6C6C; }
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0x46520000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + -11712));
    v1 = v1 | 0x6400;
    f5.i = (s32) v1;
    a0 = (s32) 0x3f800000U;
    f1.i = (s32) a0;
    v1 = (s32) 0x41100000U;
    f3.f = f1.f - f7.f;
    v0 = (s32) 0x40e00000U;
    f4.f = f4.f / f5.f;
    f4.f = f4.f * f4.f;
    f0.i = (s32) v0;
    f1.f = f1.f - f4.f;
    f0.f = f0.f * f4.f;
    f2.i = (s32) v1;
    acc = f6.f + f0.f;
    f0.f = acc + f2.f * f1.f;
    f0.f = f7.f * f0.f;
    acc = f6.f + f0.f;
    f12.f = acc + f12.f * f3.f; goto L_00BB6C90;
L_00BB6C6C:;
    v0 = (s32) 0x3f800000U;
    v1 = (s32) 0x40a00000U;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f0.f = f0.f - f7.f;
    f0.f = f12.f * f0.f;
    acc = f6.f + f0.f;
    f12.f = acc + f1.f * f7.f;
L_00BB6C90:;
    f0.i = f12.i; return;
}
