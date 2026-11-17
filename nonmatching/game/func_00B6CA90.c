/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0027D650(s32);
s32 func_00B61D10(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00B6A540(s32, s32, s32, s32, f32, f32);
s32 func_00B6AE70(s32, s32, s32, s32, f32, f32);
s32 func_00B6B720(s32, s32, s32, s32, f32, f32, f32, f32);

s32 func_00B6CA90(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = 9;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00B6CAE0; }
    v0 = 4;
    if (v1 == v0) goto L_00B6CAE0;
    v0 = 13;
    if (v1 == v0) goto L_00B6CAE0;
    a1 = 0; v0 = func_00B6A540(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { a0 = s0; goto L_00B6CB50; }
    v0 = 1; goto L_00B6CB64;
L_00B6CAE0:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7767));
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { a0 = s0; goto L_00B6CB18; }
    a0 = s0; v0 = func_00B6B720(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    if (v0 == 0) goto L_00B6CB30;
    a0 = 7; func_0027D650(a0);
    v0 = 1; goto L_00B6CB64;
L_00B6CB18:;
    a1 = 0; v0 = func_00B6A540(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { a0 = s0; goto L_00B6CB38; }
    v0 = 1; goto L_00B6CB64;
L_00B6CB30:;
    v0 = 0; goto L_00B6CB64;
L_00B6CB38:;
    v0 = func_00B6AE70(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00B6CB30;
    v0 = 1; goto L_00B6CB64;
L_00B6CB50:;
    v0 = func_00B61D10(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    if (v0 == 0) goto L_00B6CB30;
    v0 = 1;
L_00B6CB64:;
    return v0;
}
