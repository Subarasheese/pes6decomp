/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00905270(s64, s64, s64, s64);
s64 func_00958AD0(s64, s64);
s64 func_00962890(s64);
s64 func_00962900(s64, s64);
s64 func_0098F750(s64);
s64 func_00990590(s64, s64, s64, s64, s64);
s64 func_00990900(s64, s64);
s64 func_009909D0(s64, s64);
s64 func_009B3070(s64, s64);
s64 func_00AFBAB0(s64);
s64 func_00BDB8B0(s64);
s64 func_00C04830(s64, s64, s64);

s64 func_0095FA40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, a4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s6 = 0;
    s2 = a0;
    s1 = 0;
    (*(f32 *) (u32) sp) = f20.f;
    s0 = 0;
    a1 = (*(s16 *) (u32) (a0 + 20));
    v1 = (*(u8 *) (u32) (a0 + 19));
    v0 = (*(s32 *) (u32) (gp + -31080));
    f0.i = (s32) a1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    { s32 c_ = v0 == 0; f20.f = (f32) f0.i; if (c_) goto L_0095FAA0; }
L_0095FA98:;
    v0 = 0; goto L_0095FD70;
L_0095FAA0:;
    v0 = func_00905270(a0, a1, a2, a3);
    if (v0 != 0) goto L_0095FA98;
    a1 = (*(u16 *) (u32) (s2 + 288));
    a0 = s2;
    a3 = (*(s32 *) (u32) (s2 + 292));
    a2 = 8192;
    a4 = 1; v0 = func_00990590(a0, a1, a2, a3, a4);
    v0 = v0 & 0xff;
    at = v0 < 3;
    if (at == 0) { a0 = s2; goto L_0095FAE0; }
    v0 = 0; goto L_0095FD70;
L_0095FAE0:;
    v0 = func_0098F750(a0);
    if (v0 == 0) goto L_0095FAF4;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0095FAF4:;
    a0 = (*(u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0095FB24; }
    a0 = (*(u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0095FB24:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s4 = 0;
    s5 = (s32) ((u32) v0 + (u32) v1);
L_0095FB40:;
    a0 = s5; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_0095FCA8;
    if (s2 == s5) goto L_0095FCA8;
    v0 = (*(u8 *) (u32) (s5 + 16));
    if (v0 == 0) goto L_0095FCA8;
    if (s0 == 0) goto L_0095FBB0;
    v0 = (*(u8 *) (u32) (s5 + 514));
    at = v0 < 35;
    if (at == 0) goto L_0095FB98;
    f1.f = (*(f32 *) (u32) (s2 + 224));
    f0.f = (*(f32 *) (u32) (s5 + 224));
    f1.f = f1.f * f20.f;
    f0.f = f0.f * f20.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0095FCA8;
L_0095FB98:;
    a0 = s5;
    a1 = (s32) 0x240000U; v0 = func_009909D0(a0, a1);
    if (v0 != 0) goto L_0095FCA8;
L_0095FBB0:;
    v0 = (s32) 0x45a00000U;
    f3.f = (*(f32 *) (u32) (s2 + 224));
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f2.f = (*(f32 *) (u32) (s5 + 224));
    acc = f0.f + f1.f;
    f1.f = f3.f * f20.f;
    f0.f = acc + f2.f * f20.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0095FCA8;
    v0 = (*(s32 *) (u32) (s5 + 28));
    at = v0 < 7425;
    if (at != 0) goto L_0095FC18;
    v0 = (*(u8 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s5 + (u32) v0);
    a1 = (*(u16 *) (u32) (v0 + 296));
    a0 = (*(u16 *) (u32) (s5 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 12288;
    if (v0 != 0) goto L_0095FCA8;
L_0095FC18:;
    a0 = s5; v0 = func_00962890(a0);
    a1 = v0 & 0xff;
    v0 = 255;
    if (a1 == v0) goto L_0095FCA8;
    a0 = s5; v0 = func_00962900(a0, a1);
    s3 = v0 & 0xff;
    v0 = (*(u8 *) (u32) (s5 + 514));
    at = v0 < 21;
    if (at != 0) goto L_0095FCA8;
    if (s0 != 0) goto L_0095FC88;
L_0095FC58:;
    a0 = (*(u8 *) (u32) (s5 + 514));
    v1 = s3 & 0xff;
    v0 = s1 & 0xff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xff;
    at = v0 < v1;
    if (at == 0) goto L_0095FCA8;
    s6 = (*(u8 *) (u32) s5);
    s1 = v1; goto L_0095FCA8;
L_0095FC88:;
    a0 = s5;
    a1 = (s32) 0x240000U; v0 = func_00990900(a0, a1);
    v0 = v0 & 0xff;
    v0 = v0 < 2;
    if (v0 != 0) goto L_0095FC58;
L_0095FCA8:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 11;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x240U); if (c_) goto L_0095FB40; }
    a0 = s2;
    a1 = s6;
    a2 = 0; v0 = func_00958AD0(a0, a1);
    a0 = v0 & 0xff;
    if (a0 == 0) goto L_0095FD50;
    v1 = s6 & 0xff;
    v0 = 255;
    if (v1 == v0) { a1 = 1; goto L_0095FCF0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
L_0095FCF0:;
    v1 = a0 & 0xff;
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_0095FD0C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_0095FD0C:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe7b2U);
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 6);
    v1 = (*(u8 *) (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(u8 *) (u32) v0);
    at = v1 < v0;
    if (at == 0) goto L_0095FD50;
    v0 = 0; goto L_0095FD70;
L_0095FD50:;
    if (s6 != 0) { a0 = s2; goto L_0095FD60; }
    v0 = 0; goto L_0095FD70;
L_0095FD60:;
    a2 = s6;
    a1 = 0; v0 = func_00C04830(a0, a1, a2);
    v0 = 1;
L_0095FD70:;
    f20.f = (*(f32 *) (u32) sp);
    return v0;
}
