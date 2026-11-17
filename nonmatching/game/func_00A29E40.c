/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00A9C660(s32);
s32 func_00AFBA70(s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_00A29E40(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 36));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_00A29E88; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v0 < 3;
    if (at == 0) goto L_00A29E88;
    v0 = 0; goto L_00A29FEC;
L_00A29E88:;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00A29EB8; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A29EB8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a2 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = 130;
    v1 = 129;
    a1 = 5;
L_00A29EE0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 22));
    if (v0 != a1) goto L_00A29FC4;
    v0 = (*(volatile u16 *) (u32) (s0 + 24));
    if (v0 == a0) goto L_00A29F08;
    if (v0 == v1) goto L_00A29F08;
    a2 = (s32) ((u32) a2 + 0x1U); goto L_00A29FC8;
L_00A29F08:;
    a0 = s0; v0 = func_00A9C660(a0);
    a0 = (*(volatile u16 *) (u32) (s0 + 44));
    a1 = 2048; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s0 + 44));
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    a1 = 2048;
    f1.f = (f32) f1.i;
    f21.f = f0.f + f1.f; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    a0 = (*(volatile s16 *) (u32) (s1 + 20));
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f1.f = (f32) f1.i;
    v0 = (s32) 0xc6520000U;
    v1 = v0 | 0x6400;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f20.f = f0.f + f1.f;
    f1.i = (s32) a0;
    f2.i = (s32) 0;
    f1.f = (f32) f1.i;
    f0.i = (s32) v1;
    f22.f = f2.f - f20.f;
    f3.f = f0.f * f1.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 5212));
    f1.f = (*(volatile f32 *) (u32) (v0 + 5204));
    f23.f = f3.f - f21.f;
    f0.f = f2.f - f0.f;
    f1.f = f3.f - f1.f;
    acc = f0.f * f0.f;
    f12.f = acc + f1.f * f1.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    acc = f22.f * f22.f;
    s0 = f0.i;
    f12.f = acc + f23.f * f23.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    at = v0 < s0;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A29FDC; }
    v0 = 0; goto L_00A29FEC;
L_00A29FC4:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_00A29FC8:;
    v0 = a2 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00A29EE0; }
    v0 = 0; goto L_00A29FEC;
L_00A29FDC:;
    v0 = 1;
    (*(volatile f32 *) (u32) (v1 + 5204)) = f21.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v1 + 5212)) = f20.f;
L_00A29FEC:;
    return v0;
}
