/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B4F10(s32, s32, f32);
s32 func_001B5350(s32, s32, s32, s32, f32, f32);
s32 func_001E6E10(s32);
s32 func_001ED840(s32, s32);
s32 func_001ED880(s32, f32);
s32 func_001EDA30(s32, s32);
s32 func_001EDAE0(s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
s32 func_001EEF60(s32, s32);

s32 func_001BE320(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    s6 = a0;
    s0 = (s32) ((u32) s6 + 0x30U); v0 = func_001EE0D0(a0, a1, a2, a3);
    s2 = (s32) 0x3a0000U;
    s5 = v0;
    s4 = 0;
    s2 = (s32) ((u32) s2 + 0xffff84e0U);
    s1 = s6;
L_001BE364:;
    a0 = (*(volatile s32 *) (u32) s2); v0 = func_001E6E10(a0);
    f12.f = (*(volatile f32 *) (u32) s0);
    a0 = (s32) ((u32) s2 + 0x4U);
    f13.f = (*(volatile f32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) s2 + 0x14U);
    a2 = s5;
    a3 = v0; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
    s3 = v0;
    a1 = (s32) ((u32) s2 + 0x1cU);
    a0 = s3; v0 = func_001EEF60(a0, a1);
    v0 = 3;
    v0 = (s32) ((u32) v0 - (u32) s4);
    { s32 c_ = v0 < 0; (*(volatile u32 *) (u32) (s1 + 8)) = (u32) s3; if (c_) goto L_001BE3B4; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_001BE3D0;
L_001BE3B4:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_001BE3D0:;
    a0 = s3; v0 = func_001B4F10(a0, a1, f12.f);
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x2cU);
    v0 = (u64) s4 < (u64) (s64) 3;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001BE364; }
    a0 = s5;
    a1 = 3; v0 = func_001EDA30(a0, a1);
    a0 = s5;
    a1 = 1; v0 = func_001ED840(a0, a1);
    v0 = (s32) 0xc53b0000U;
    v0 = v0 | 0x8000;
    f12.i = (s32) v0;
    a0 = s5; v0 = func_001ED880(a0, f12.f);
    a0 = s5;
    a1 = 1; v0 = func_001EDAE0(a0, a1);
    (*(volatile u32 *) (u32) (s6 + 4)) = (u32) s5;
    return v0;
}
