/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DD3C0(s32);
s32 func_001DF8D0(s32, s32, s32, s32, s32, f32, f32);
s32 func_001F3D80(s32, s32, s32);
s32 func_001F4080(s32, s32, s32, s32);
s32 func_001F4140(s32, s32, s32, s32);

s32 func_001F1A30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s6 = a5;
    s5 = a4;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    { s32 c_ = s4 == 0; s1 = a3; if (c_) goto L_001F1A88; }
    a0 = s3; v0 = func_001DD3C0(a0);
    if (v0 != 0) { a0 = s4; goto L_001F1A90; }
    v0 = 0; goto L_001F1C08;
L_001F1A88:;
    v0 = 0; goto L_001F1C08;
L_001F1A90:;
    a1 = 8;
    a2 = 88; v0 = func_001F4140(a0, a1, a2, a3);
    f6.f = (*(volatile f32 *) (u32) (s4 + 8));
    s0 = v0;
    f5.f = (*(volatile f32 *) (u32) (s4 + 12));
    v0 = (s32) 0x40000000U;
    f4.f = (*(volatile f32 *) (u32) (s4 + 16));
    a0 = s0;
    f3.f = (*(volatile f32 *) (u32) (s4 + 20));
    a1 = (s32) ((u32) sp + 0x80U);
    f1.f = (*(volatile f32 *) (u32) s2);
    a2 = 0;
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 144)) = f6.f;
    acc = f0.f + f4.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f5.f;
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s2 + 4));
    (*(volatile f32 *) (u32) (sp + 152)) = f4.f;
    (*(volatile f32 *) (u32) (sp + 156)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) s2);
    f1.f = acc - f2.f * f1.f;
    acc = f0.f + f3.f;
    (*(volatile f32 *) (u32) (sp + 136)) = f1.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    f0.f = acc - f2.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 140)) = f0.f; v0 = func_001F3D80(a0, a1, a2);
    a0 = s3;
    a2 = s1;
    a3 = s5;
    a4 = s6;
    a1 = 0; v0 = func_001DF8D0(a0, a1, a2, a3, a4, f12.f, f13.f);
    (*(volatile u32 *) (u32) (s0 + 84)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 84));
    if (v0 == 0) { a0 = s0; goto L_001F1BFC; }
    if (s0 == 0) goto L_001F1B68;
    v0 = (s32) ((u32) gp + 0xffff8150U);
    if (v0 == 0) goto L_001F1B68;
    a1 = (*(volatile u8 *) (u32) (gp + -32432));
    a0 = (*(volatile u8 *) (u32) (gp + -32431));
    v1 = (*(volatile u8 *) (u32) (gp + -32430));
    v0 = (*(volatile u8 *) (u32) (gp + -32429));
    (*(volatile u8 *) (u32) (s0 + 80)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 81)) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 82)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 83)) = (u8) v0;
L_001F1B68:;
    if (s0 == 0) goto L_001F1B98;
    v0 = (*(volatile s32 *) (u32) (s0 + 84));
    if (v0 == 0) goto L_001F1B98;
    v0 = (*(volatile s32 *) (u32) (s0 + 72));
    if (v0 == 0) goto L_001F1B98;
    (*(volatile u32 *) (u32) (s0 + 72)) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (s0 + 1));
    v0 = v0 | 0x2;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
L_001F1B98:;
    if (s0 == 0) goto L_001F1BC8;
    v0 = (*(volatile s32 *) (u32) (s0 + 84));
    if (v0 == 0) goto L_001F1BC8;
    v0 = (*(volatile s32 *) (u32) (s0 + 76));
    if (v0 == 0) goto L_001F1BC8;
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (s0 + 1));
    v0 = v0 | 0x2;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
L_001F1BC8:;
    v0 = (s32) 0x1f0000U;
    v1 = (s32) 0x1f0000U;
    v0 = (s32) ((u32) v0 + 0x1c80U);
    v1 = (s32) ((u32) v1 + 0x1c30U);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    v0 = (s32) 0x1f0000U;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0x1990U);
    v1 = 255;
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) v0;
    v0 = s0;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1; goto L_001F1C08;
L_001F1BFC:;
    v0 = func_001F4080(a0, a1, a2, a3);
    v0 = 0;
L_001F1C08:;
    return v0;
}
