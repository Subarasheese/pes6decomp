/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103C00(s32, s32, s32);
f32 func_00103C20(s32, s32);
s32 func_00103DC0(s32, s32, s32);
f32 func_0011D210(f32);

s32 func_0012B220(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    s6 = a4;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a5;
    s1 = a6;
    s0 = a7;
    a1 = a3;
    a0 = (s32) ((u32) sp + 0xd0U);
    v0 = func_00103DC0(a0, a1, a2);
    a1 = s6;
    a0 = (s32) ((u32) sp + 0xc0U);
    a2 = s3; v0 = func_00103DC0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = s4;
    a2 = (s32) ((u32) sp + 0xc0U); v0 = func_00103C00(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = (s32) ((u32) sp + 0xb0U); f0.f = func_00103C20(a0, a1);
    f20.i = f0.i;
    f12.i = f20.i; f0.f = func_0011D210(f12.f);
    v0 = (s32) 0x37270000U;
    v0 = v0 | 0xc5ac;
    f1.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) { v0 = (s32) 0x3f800000U; goto L_0012B2D0; }
    v0 = 0; goto L_0012B3F0;
L_0012B2D0:;
    a1 = s5;
    f0.i = (s32) v0;
    a2 = s3;
    a0 = (s32) ((u32) sp + 0x90U);
    f21.f = f0.f / f20.f;
    v0 = func_00103DC0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) sp + 0xb0U); f0.f = func_00103C20(a0, a1);
    f20.f = f21.f * f0.f;
    f0.i = (s32) 0;
    fcc = f20.f < f0.f;
    if (fcc) goto L_0012B3C4;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (!fcc) goto L_0012B3C4;
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = (s32) ((u32) sp + 0xd0U); v0 = func_00103C00(a0, a1, a2);
    a0 = s4;
    a1 = (s32) ((u32) sp + 0xa0U); f0.f = func_00103C20(a0, a1);
    f2.f = f21.f * f0.f;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (fcc) goto L_0012B3CC;
    f1.f = f20.f + f2.f;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0012B3CC;
    if (s2 == 0) goto L_0012B38C;
    (*(volatile f32 *) (u32) s2) = f20.f;
L_0012B38C:;
    if (s1 == 0) goto L_0012B398;
    (*(volatile f32 *) (u32) s1) = f2.f;
L_0012B398:;
    a0 = (s32) ((u32) sp + 0xc0U);
    a1 = (s32) ((u32) sp + 0xa0U); f0.f = func_00103C20(a0, a1);
    { s32 c_ = s0 == 0; f1.f = f21.f * f0.f; if (c_) goto L_0012B3D4; }
    (*(volatile f32 *) (u32) s0) = f1.f; goto L_0012B3D4;
L_0012B3B4:;
    v0 = 1; goto L_0012B3F0;
L_0012B3BC:;
    v0 = 0; goto L_0012B3F0;
L_0012B3C4:;
    v0 = 0; goto L_0012B3F0;
L_0012B3CC:;
    v0 = 0; goto L_0012B3F0;
L_0012B3D4:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0012B3BC;
    goto L_0012B3B4;
L_0012B3F0:;
    return v0;
}
