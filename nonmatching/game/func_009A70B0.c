/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_009A70B0(s32 a0, s32 a1, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xc6520000U;
    f0.i = (s32) v0;
    fcc = f0.f < f12.f;
    { s32 c_ = !fcc; f20.i = f13.i; if (c_) goto L_009A70FC; }
    v0 = (s32) 0x46520000U;
    f0.i = (s32) v0;
    fcc = f12.f < f0.f;
    if (!fcc) goto L_009A70FC;
    v0 = 0; goto L_009A71C8;
L_009A70FC:;
    f0.i = (s32) 0;
    fcc = f12.f <= f0.f;
    if (fcc) { v0 = (s32) 0x46520000U; goto L_009A7124; }
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f21.f = f12.f - f0.f; goto L_009A7134;
L_009A7124:;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f21.f = f0.f + f12.f;
L_009A7134:;
    s0 = a0 & 0xffff;
    a1 = 1000;
    a0 = s0; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    v1 = (s32) 0x3a830000U;
    v1 = v1 | 0x126f;
    a0 = s0;
    f1.f = (f32) f1.i;
    a1 = 1000;
    f0.i = (s32) v1;
    f22.f = f0.f * f1.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x3a830000U;
    v0 = v0 | 0x126f;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f1.f = f1.f * f2.f;
    acc = f20.f * f1.f;
    f1.f = acc + f21.f * f22.f;
    fcc = f0.f < f1.f;
    { s32 c_ = !fcc; (*(volatile u32 *) (u32) (sp + 60)) = (u32) 0; if (c_) goto L_009A71B4; }
    v1 = 1;
    v0 = 26;
    (*(volatile u8 *) (u32) (sp + 61)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 60)) = (u8) v0; goto L_009A71C4;
L_009A71B4:;
    v1 = -1;
    v0 = 24;
    (*(volatile u8 *) (u32) (sp + 61)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 60)) = (u8) v0;
L_009A71C4:;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
L_009A71C8:;
    return v0;
}
