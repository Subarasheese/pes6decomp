/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_009B30B0(s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_009BD8A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile u16 *) (u32) (a0 + 106));
    if (v1 == 0) { s1 = (*(volatile u16 *) (u32) (a0 + 88)); goto L_009BD91C; }
    v0 = (*(volatile u8 *) (u32) (a0 + 108));
    if (v0 == 0) { v0 = v1 & 0xffff; goto L_009BD904; }
    v0 = v1 & 0xffff;
    a0 = (*(volatile u16 *) (u32) (a0 + 88));
    v1 = 0xc000;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) a0 + (u32) v0);
    s1 = v0 & 0xffff; goto L_009BD91C;
L_009BD904:;
    a0 = (*(volatile u16 *) (u32) (a0 + 88));
    v1 = 0xc000;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) a0 - (u32) v0);
    s1 = v0 & 0xffff;
L_009BD91C:;
    v0 = (*(volatile u16 *) (u32) (s2 + 42));
    a0 = s1;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = v0 & 0xffff; v0 = func_009B30B0(a0, a1);
    s0 = v0 & 0xffff;
    v0 = s0 < 61;
    if (v0 != 0) { v1 = (*(volatile s16 *) (u32) (s2 + 20)); goto L_009BD94C; }
    v0 = 0; goto L_009BDB88;
L_009BD94C:;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    a0 = s1;
    f0.i = (s32) v0;
    a1 = 12288;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f23.f = f0.f * f1.f; v0 = func_00BBB990(a0, a1);
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = s1;
    f0.i = (s32) v0;
    a1 = 12288;
    f22.f = (f32) f0.i; v0 = func_00BBB9C0(a0, a1);
    v1 = (s32) ((u32) s0 << 2);
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (s32) ((u32) v1 + 0x480U);
    f0.i = (s32) a0;
    v1 = (s32) 0x590000U;
    f1.i = (s32) v0;
    f20.f = (f32) f0.i;
    a0 = 64;
    f0.f = (*(volatile f32 *) (u32) (a1 + 16));
    f1.f = (f32) f1.i;
    f0.f = f23.f - f0.f;
    f0.f = f1.f * f0.f;
    f22.f = f0.f / f22.f;
    f21.f = (*(volatile f32 *) (u32) (v1 + 9944));
    v0 = func_002AE670(a0);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f21.f < f0.f;
    if (fcc) goto L_009BDB38;
L_009BD9F0:;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (a1 + 24));
    f0.f = f0.f + f22.f;
    f0.i = (s32) f0.f;
    f0.f = (f32) f0.i;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009BDA18; }
L_009BDA18:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f0.f < f20.f;
    if (!fcc) { v0 = 0; goto L_009BDB88; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9980));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_009BDA4C; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_009BDA64;
L_009BDA4C:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_009BDA64:;
    fcc = f21.f <= f0.f;
    if (fcc) goto L_009BDB30;
    v0 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = a3 < 255;
    if (at == 0) goto L_009BDB30;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a3 << 2);
    a0 = (*(volatile u8 *) (u32) (v0 + 9952));
    a2 = (s32) ((u32) a1 + (u32) v1);
    v0 = (s32) 0x46520000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = v0 | 0xe400;
    f0.i = (s32) v0;
L_009BDAA4:;
    f1.f = (*(volatile f32 *) (u32) (a2 + 1148));
    f1.i = (s32) f1.f;
    v0 = f1.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009BDABC; }
L_009BDABC:;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    fcc = f1.f <= f0.f;
    if (fcc) { a3 = (s32) ((u32) a3 + (u32) a0); goto L_009BDB24; }
    v1 = (s32) ((u32) a3 << 2);
    v0 = (s32) 0xc44c0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) (v1 + 2044));
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_009BDB88; }
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009BDB10; }
L_009BDB10:;
    at = v0 < 1249;
    if (at != 0) { v0 = 1; goto L_009BDB88; }
    v0 = 0; goto L_009BDB88;
L_009BDB24:;
    v0 = a3 < 255;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + (u32) v1); if (c_) goto L_009BDAA4; }
L_009BDB30:;
    v0 = 1; goto L_009BDB88;
L_009BDB38:;
    v0 = (s32) 0x590000U;
    f21.f = (*(volatile f32 *) (u32) (v0 + 9944));
    a0 = 64; v0 = func_002AE670(a0);
    f0.i = (s32) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    f0.f = (f32) f0.i;
    v0 = (s32) 0x40800000U;
    f4.f = f0.f - f21.f;
    f3.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) 0x42800000U;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = f3.f * f2.f;
    f0.f = acc + f0.f * f4.f;
    f20.f = f20.f + f0.f; goto L_009BD9F0;
L_009BDB88:;
    return v0;
}
