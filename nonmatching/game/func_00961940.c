/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);

void func_00961940(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    s1 = a1;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    s2 = a0;
    f3.i = (s32) v1;
    fcc = f1.f < f0.f;
    f0.f = (f32) f3.i;
    { s32 c_ = !fcc; f12.f = f2.f * f0.f; if (c_) goto L_00961990; }
    v0 = -1; goto L_00961994;
L_00961990:;
    v0 = 1;
L_00961994:;
    f0.i = (s32) v0;
    a0 = s2;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446a0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    f13.f = f0.f * f1.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s16 *) (u32) (s2 + 20));
    s0 = v0 & 0xffff;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (s2 + 232));
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    f3.i = (s32) v1;
    f3.f = (f32) f3.i;
    fcc = f1.f < f0.f;
    { s32 c_ = !fcc; f12.f = f2.f * f3.f; if (c_) goto L_009619F0; }
    v0 = -1; goto L_009619F4;
L_009619F0:;
    v0 = 1;
L_009619F4:;
    f0.i = (s32) v0;
    a0 = s2;
    f1.f = (f32) f0.i;
    v0 = (s32) 0xc46a0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    f13.f = f0.f * f1.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = v0 & 0xffff; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = s0; v0 = func_009B3070(a0, a1);
    v1 = 0x8000;
    v0 = 4;
    { s32 c_ = s1 == v0; (*(volatile u32 *) (u32) (s2 + 180)) = (u32) v1; if (c_) goto L_00961A68; }
    v0 = 3;
    if (s1 == v0) { v0 = 1; goto L_00961A60; }
    v0 = 2;
    if (s1 == v0) goto L_00961A58;
    v0 = 1;
L_00961A58:;
    (*(volatile u8 *) (u32) (s2 + 76)) = (u8) 0; goto L_00961A70;
L_00961A60:;
    (*(volatile u8 *) (u32) (s2 + 76)) = (u8) v0; goto L_00961A70;
L_00961A68:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 76)) = (u8) v0;
L_00961A70:;
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5360U);
    v0 = 0;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    return;
}
