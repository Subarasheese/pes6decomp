/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00AFBAB0(s64);
s64 func_00B274B0(s64);
s64 func_00B79860(s64);
s64 func_00BEE9D0(void);
s64 func_00BEEA30(s64);
s64 func_00BF0520(void);

s64 func_0096BC00(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s5 = (s64) ((u64) 0 + (u64) (s64) 255);
    v0 = func_00BF0520();
    s0 = v0 & 0xff;
    a0 = s0; v0 = func_00B274B0(a0);
    if (v0 == 0) { v0 = 255; goto L_0096BED0; }
    v1 = s0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0096BC58; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0096BC58:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BEE9D0();
    a0 = (*(volatile u8 *) (u32) s1);
    s0 = v0 & 0xff; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0096BCA8; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0096BCA8:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 << 6);
    s4 = 0;
    v0 = (s32) 0x7fff0000U;
    s2 = (s32) ((u32) v1 + (u32) a0);
    s3 = v0 | 0xffff;
L_0096BCCC:;
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (*(volatile u8 *) (u32) s1);
    if (v1 != v0) { a0 = s2; goto L_0096BCF8; }
L_0096BCE0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 11;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_0096BCCC; }
    v0 = s5; goto L_0096BED0;
L_0096BCF8:;
    v0 = func_00B79860(a0);
    if (v0 == 0) goto L_0096BCE0;
    a0 = s2; v0 = func_00BEEA30(a0);
    if (v0 != 0) goto L_0096BCE0;
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    a0 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) s1 + (u32) a0);
    at = (u64) v0 < (u64) (s64) 41;
    { s32 c_ = at == 0; a0 = (*(volatile s32 *) (u32) (a0 + 344)); if (c_) goto L_0096BE48; }
    a2 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) v0 << 2);
    a2 = (s32) ((u32) a2 + 0xffff9cf0U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    { u32 t_ = (u32) a1; ; if (t_ == 0x96bce0U) goto L_0096BCE0; if (t_ == 0x96bd50U) goto L_0096BD50; if (t_ == 0x96bd78U) goto L_0096BD78; if (t_ == 0x96bdd0U) goto L_0096BDD0; if (t_ == 0x96bdf8U) goto L_0096BDF8; if (t_ == 0x96be48U) goto L_0096BE48; }
L_0096BD50:;
    a1 = (*(volatile s16 *) (u32) (s1 + 20));
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f2.i = (s32) a1;
    f1.f = (*(volatile f32 *) (u32) (a2 + 16));
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0096BCE0;
L_0096BD78:;
    a1 = (*(volatile u8 *) (u32) (s2 + 19));
    if (a1 != 0) goto L_0096BDA8;
    a1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0096BE48;
    goto L_0096BCE0;
L_0096BDA8:;
    a1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0096BE48;
    goto L_0096BCE0;
L_0096BDD0:;
    a1 = (*(volatile s16 *) (u32) (s1 + 20));
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f2.i = (s32) a1;
    f1.f = (*(volatile f32 *) (u32) (a2 + 16));
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0096BCE0;
L_0096BDF8:;
    a1 = (*(volatile u8 *) (u32) (s2 + 19));
    if (a1 != 0) goto L_0096BE28;
    a1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0096BE48;
    goto L_0096BCE0;
L_0096BE28:;
    a1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a1 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0096BCE0;
L_0096BE48:;
    a1 = 1;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 7;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 33;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 35;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 31;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 38;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 40;
    if (v0 == a1) goto L_0096BEB0;
    a1 = 36;
    if (v0 == a1) goto L_0096BEB0;
    goto L_0096BEB8;
L_0096BEB0:;
    if (s0 == 0) goto L_0096BCE0;
L_0096BEB8:;
    at = a0 < s3;
    if (at == 0) goto L_0096BCE0;
    s3 = a0;
    s5 = v1 & 0xff; goto L_0096BCE0;
L_0096BED0:;
    return v0;
}
