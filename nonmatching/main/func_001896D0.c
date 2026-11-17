/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00181920(s32, s32, s32, s32, f32, f32);

s32 func_001896D0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f20 = { 0 };

    v1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    s3 = 10300;
    (*(volatile u16 *) (u32) (v1 + 226)) = (u16) 0;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 228)) = (u32) 0;
    v1 = (s32) 0x520000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -116));
    v1 = (s32) 0x520000U;
    s1 = (s32) ((u32) a1 + 0x4U);
    (*(volatile u32 *) (u32) (a0 + 232)) = (u32) a1;
    (*(volatile u32 *) (u32) (v1 + 236)) = (u32) s1;
    v1 = (*(volatile u8 *) (u32) (a1 + 1));
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; s0 = 0; if (c_) goto L_00189734; }
L_0018972C:;
    goto L_001897D0;
L_00189734:;
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (*(volatile u8 *) (u32) (s1 + 1));
    { s32 c_ = v0 < 0; s2 = (s32) ((u32) v1 + 0x28a0U); if (c_) goto L_00189750; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_0018976C;
L_00189750:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_0018976C:;
    v0 = (s32) 0x3e800000U;
    a0 = 21;
    f13.i = (s32) v0;
    a1 = s3;
    a2 = s2;
    f20.f = f13.f * f0.f;
    f12.i = f20.i; v0 = func_00181920(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) 0x3e800000U;
    a2 = s2;
    f13.i = (s32) v0;
    a0 = 3;
    f12.i = f20.i;
    a1 = s3; v0 = func_00181920(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (s32) 0x520000U;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (v1 + 232));
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x1U); if (c_) goto L_00189734; }
    goto L_0018972C;
L_001897D0:;
    return v0;
}
