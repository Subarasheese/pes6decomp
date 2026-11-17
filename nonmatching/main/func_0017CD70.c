/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00103E38(s32, s32);
s32 func_00132A20(s32, s32, s32, s32, f32, f32, f32);
s32 func_00133250(s32, s32, s32, f32);
s32 func_00133390(s32, s32, s32, f32, f32);
s32 func_00133560(s32, s32, s32, s32, f32);
s32 func_001336D0(s32, s32, s32, f32);

s32 func_0017CD70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };

    v0 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) v0 - (u32) a0);
    v1 = (s32) 0x510000U;
    s3 = a1;
    a0 = (s32) ((u32) v0 << 5);
    v1 = (s32) ((u32) v1 + 0x1250U);
    v0 = (s32) ((u32) s3 << 1);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v1 = (s32) ((u32) v0 << 5);
    v0 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = a6;
    (*(volatile u32 *) (u32) (v0 + 68)) = (u32) s1;
    s0 = (s32) ((u32) v0 + 0x40U);
    f0.f = (*(volatile f32 *) (u32) a3);
    s2 = a5;
    a1 = a4;
    a0 = (s32) ((u32) s0 + 0x20U);
    (*(volatile f32 *) (u32) (v0 + 80)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a3 + 4));
    (*(volatile f32 *) (u32) (v0 + 84)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a3 + 8));
    (*(volatile f32 *) (u32) (v0 + 88)) = f0.f; v0 = func_00103E38(a0, a1);
    at = (u64) s1 < (u64) (s64) 6;
    if (at == 0) goto L_0017CEAC;
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) s1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc9f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x17ce20U) goto L_0017CE20; if (t_ == 0x17ce38U) goto L_0017CE38; if (t_ == 0x17ce58U) goto L_0017CE58; if (t_ == 0x17ce84U) goto L_0017CE84; if (t_ == 0x17ce9cU) goto L_0017CE9C; }
L_0017CE20:;
    a0 = s3;
    a1 = (s32) ((u32) s0 + 0x10U);
    a2 = (s32) ((u32) s0 + 0x20U); v0 = func_001336D0(a0, a1, a2, f12.f);
    goto L_0017CEAC;
L_0017CE38:;
    f12.f = (*(volatile f32 *) (u32) (gp + -23324));
    a0 = s3;
    f13.f = (*(volatile f32 *) (u32) (gp + -32540));
    a1 = (s32) ((u32) s0 + 0x10U);
    a2 = (s32) ((u32) s0 + 0x20U); v0 = func_00133390(a0, a1, a2, f12.f, f13.f);
    goto L_0017CEAC;
L_0017CE58:;
    a1 = s2;
    a0 = (s32) ((u32) s0 + 0x10U); v0 = func_00103E38(a0, a1);
    a1 = (s32) 0x390000U;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0x6f80U);
    a2 = (s32) ((u32) s0 + 0x10U);
    a3 = (s32) ((u32) s0 + 0x20U); v0 = func_00133560(a0, a1, a2, a3, f12.f);
    goto L_0017CEAC;
L_0017CE84:;
    a0 = s3;
    a1 = (s32) ((u32) s0 + 0x10U);
    a2 = (s32) ((u32) s0 + 0x20U); v0 = func_00133250(a0, a1, a2, f12.f);
    goto L_0017CEAC;
L_0017CE9C:;
    a0 = s3;
    a1 = (s32) ((u32) s0 + 0x10U);
    a2 = (s32) ((u32) s0 + 0x20U); v0 = func_00133250(a0, a1, a2, f12.f);
L_0017CEAC:;
    v0 = func_00132A20(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    return v0;
}
