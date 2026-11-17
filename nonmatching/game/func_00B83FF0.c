/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

void func_00B83FF0(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };

    v0 = a0 & 0xffff;
    v1 = (s32) ((u32) v0 + 0x4000U);
    a1 = a1 & 0xff;
    a0 = 1;
    v0 = -1;
    if (a1 != 0) a0 = v0;
    f0.i = (s32) a0;
    v0 = (s32) 0x461c0000U;
    v0 = v0 | 0x4000;
    f2.f = (f32) f0.i;
    s2 = a2;
    f1.i = (s32) v0;
    f0.f = f1.f * f14.f;
    v0 = v1 & 0xffff;
    f14.f = f0.f * f2.f;
    f15.f = f15.f * f1.f;
    f22.i = f12.i;
    f21.i = f13.i;
    { s32 c_ = v1 >= 0; f20.i = f16.i; if (c_) goto L_00B84078; }
    if (v0 == 0) goto L_00B84078;
    v0 = (s32) ((u32) v0 + 0x0U);
L_00B84078:;
    s1 = v0 & 0xffff;
    v0 = (s32) 0x42c80000U;
    a0 = s1;
    f1.i = (s32) v0;
    f0.i = (s32) f15.f;
    v0 = (s32) 0x10000U;
    s4 = (s32) ((u32) v0 - (u32) s1);
    f20.f = f20.f / f1.f;
    s0 = f0.i;
    f0.i = (s32) f14.f;
    s5 = f0.i;
    a1 = s5; v0 = func_00BBB990(a0, a1);
    s3 = v0;
    a0 = s4 & 0xffff;
    a1 = s0; v0 = func_00BBB9C0(a0, a1);
    v0 = (s32) ((u32) s3 + (u32) v0);
    a0 = s4 & 0xffff;
    f0.i = (s32) v0;
    a1 = s5;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x42c80000U;
    f1.f = f20.f * f0.f;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f0.f = f22.f + f0.f;
    (*(volatile f32 *) (u32) s2) = f0.f; v0 = func_00BBB9C0(a0, a1);
    a1 = s0;
    a0 = s1;
    s0 = (s32) ((u32) 0 - (u32) v0); v0 = func_00BBB990(a0, a1);
    a0 = (s32) ((u32) s0 + (u32) v0);
    v1 = (s32) 0x42c80000U;
    f1.i = (s32) a0;
    f0.i = (s32) v1;
    f1.f = (f32) f1.i;
    f1.f = f20.f * f1.f;
    f0.f = f1.f / f0.f;
    f0.f = f21.f + f0.f;
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    return;
}
