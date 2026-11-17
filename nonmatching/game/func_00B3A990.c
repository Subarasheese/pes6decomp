/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00B3FED0(s32, s32, s32, s32, f32, f32);
void func_00B3FFA0(s32, s32, s32, s32, f32, f32);
void func_00B40370(s32, s32, s32, s32, f32, f32);
void func_00B40730(s32, s32, s32, s32, f32, f32);
void func_00B40A40(s32, s32, s32, s32, f32, f32);
void func_00B40D50(s32, s32, s32, s32, f32, f32);
void func_00B410A0(s32, s32, s32, s32, f32, f32);
void func_00B41320(s32, s32, s32, s32, f32, f32);
void func_00B41530(s32, s32, s32, s32, f32, f32);
void func_00B417B0(s32, s32, s32, s32, f32, f32);
void func_00B41A80(s32, s32, s32, s32, f32, f32);

void func_00B3A990(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 79));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_00B3AA9C; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B3A9B0:;
    a1 = (s32) ((u32) v1 + 0x4fU);
    v1 = (*(volatile u8 *) (u32) (v1 + 79));
    at = (u64) v1 < (u64) (s64) 11;
    if (at == 0) goto L_00B3AA90;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffc030U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb3a9e0U) goto L_00B3A9E0; if (t_ == 0xb3a9f0U) goto L_00B3A9F0; if (t_ == 0xb3aa00U) goto L_00B3AA00; if (t_ == 0xb3aa10U) goto L_00B3AA10; if (t_ == 0xb3aa20U) goto L_00B3AA20; if (t_ == 0xb3aa30U) goto L_00B3AA30; if (t_ == 0xb3aa40U) goto L_00B3AA40; if (t_ == 0xb3aa50U) goto L_00B3AA50; if (t_ == 0xb3aa60U) goto L_00B3AA60; if (t_ == 0xb3aa70U) goto L_00B3AA70; if (t_ == 0xb3aa80U) goto L_00B3AA80; }
L_00B3A9E0:;
    a0 = s0; func_00B41A80(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3A9F0:;
    a0 = s0; func_00B417B0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA00:;
    a0 = s0; func_00B41530(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA10:;
    a0 = s0; func_00B41320(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA20:;
    a0 = s0; func_00B410A0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA30:;
    a0 = s0; func_00B40D50(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA40:;
    a0 = s0; func_00B40A40(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA50:;
    a0 = s0; func_00B40730(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA60:;
    a0 = s0; func_00B3FFA0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA70:;
    a0 = s0; func_00B40370(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA80:;
    a0 = s0; func_00B3FED0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B3AA94;
L_00B3AA90:;
    (*(volatile u8 *) (u32) a1) = (u8) 0;
L_00B3AA94:;
    goto L_00B3AAAC;
L_00B3AA9C:;
    func_00B3FED0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B3A9B0;
L_00B3AAAC:;
    return;
}
