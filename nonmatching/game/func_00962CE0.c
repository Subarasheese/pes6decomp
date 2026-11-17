/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_00962CE0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    f32 acc = 0;

    v0 = 8448;
    s1 = a0;
    s0 = a1;
    v1 = (*(volatile s32 *) (u32) (a1 + 28));
    a0 = (*(volatile u16 *) (u32) (a1 + 40));
    a1 = (s32) ((u32) v0 - (u32) v1); v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 28));
    a0 = (*(volatile u16 *) (u32) (s0 + 40));
    f1.f = (f32) f1.i;
    v0 = (s32) 0x41800000U;
    f0.i = (s32) v0;
    f20.f = f1.f / f0.f;
    v0 = 8448;
    a1 = (s32) ((u32) v0 - (u32) v1);
    v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    v0 = (s32) 0x41800000U;
    f0.i = (s32) v0;
    f3.f = f1.f / f0.f;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9952));
    if (a0 < 0) goto L_00962D88;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_00962DA4;
L_00962D88:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00962DA4:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    { s32 c_ = a0 < 0; f12.f = acc - f20.f * f2.f; if (c_) goto L_00962DC8; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_00962DE4;
L_00962DC8:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00962DE4:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    a0 = s1;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f13.f = acc - f3.f * f2.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    return v0;
}
