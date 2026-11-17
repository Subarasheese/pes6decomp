/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C13280(s32, s32, s32, s32);
s32 func_00C132B0(s32, s32, s32, s32);
s32 func_00C132C0(s32, s32, s32, s32);
s32 func_00C136E0(s32, s32, s32, s32);
s32 func_00C13740(s32, s32, s32, s32);
s32 func_00C13840(s32, s32, s32, s32);
s32 func_00C18DC0(s32, s32, s32, s32);

s32 func_002C4580(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    a0 = s2;
    v0 = func_00C132B0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = s2;
    v0 = (s32) v0 >> 5;
    s1 = s2;
    s0 = v0 & 0x1; v0 = func_00C132C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 == a1) goto L_002C4624;
    a0 = s2; v0 = func_00C136E0(a0, a1, a2, a3);
    s1 = v0;
    v0 = -1;
    if (s1 != v0) goto L_002C4624;
    v0 = func_00C13840(a0, a1, a2, a3);
    s1 = v0;
    a0 = s1; v0 = func_00C132C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 != a1) { a0 = s1; goto L_002C4618; }
    a0 = s1; goto L_002C4628;
L_002C4618:;
    v0 = func_00C13740(a0, a1, a2, a3);
    s1 = v0;
L_002C4624:;
    a0 = s1;
L_002C4628:;
    v0 = func_00C13280(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (v0 + 1)); v0 = func_00C18DC0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = s0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002C4658; }
    if (v0 == 0) goto L_002C4658;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002C4658:;
    v1 = (s32) ((u32) v0 << 1);
    a0 = s2;
    v0 = 1;
    v0 = (s32) ((u32) v0 - (u32) v1);
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; v0 = func_00C13280(a0, a1, a2, a3);
    v1 = (*(volatile u16 *) (u32) (v0 + 2));
    v0 = 312;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
    v1 = (s32) 0x42ad0000U;
    v1 = v1 | 0x2eeb;
    v0 = (s32) 0x46520000U;
    f0.i = (s32) v1;
    v0 = v0 | 0x6400;
    f1.i = (s32) a1;
    a0 = s2;
    f1.f = (f32) f1.i;
    f1.f = f0.f * f1.f;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f0.f = f20.f * f0.f;
    (*(volatile f32 *) (u32) s3) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) 0; v0 = func_00C13280(a0, a1, a2, a3);
    a3 = (*(volatile u16 *) (u32) (v0 + 2));
    v1 = (s32) 0xd20d0000U;
    v1 = v1 | 0x20d3;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a3 >> 31);
    a1 = hi;
    v1 = (s32) 0x42a70000U;
    a0 = v1 | 0xfec;
    f1.i = (s32) a0;
    v1 = (s32) 0x46080000U;
    v1 = v1 | 0x6400;
    a0 = (s32) ((u32) a1 + (u32) a3);
    a0 = (s32) a0 >> 8;
    a0 = (s32) ((u32) a0 + (u32) a2);
    f2.i = (s32) a0;
    f0.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    f0.f = f1.f - f0.f;
    f0.f = f20.f * f0.f;
    (*(volatile f32 *) (u32) (s3 + 8)) = f0.f;
    return v0;
}
