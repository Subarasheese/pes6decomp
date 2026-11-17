/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

void func_00BF1820(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s32 c_ = v0 <= 0; s1 = a0; if (c_) goto L_00BF1858; }
    goto L_00BF185C;
L_00BF1858:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_00BF185C:;
    f0.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s1 + 160));
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    a1 = 256; v0 = func_00BBB990(a0, a1);
    f0.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s1 + 160));
    a1 = 256;
    f20.f = (f32) f0.i; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f3.f = (f32) f1.i;
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00BF18C8; }
    v0 = -1;
L_00BF18C8:;
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    fcc = f20.f == f0.f;
    { s32 c_ = fcc; f12.f = f1.f * f2.f; if (c_) goto L_00BF194C; }
    f0.i = (s32) f20.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BF1908; }
L_00BF1908:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    f1.f = (*(volatile f32 *) (u32) (v1 + 24));
    v0 = lo;
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f13.f = acc + f3.f * f2.f;
    (*(volatile f32 *) (u32) (s1 + 108)) = f12.f;
L_00BF1938:;
    a0 = s1;
    (*(volatile f32 *) (u32) (s1 + 112)) = f13.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s1 + 46)) = (u16) v0; goto L_00BF1984;
L_00BF194C:;
    v0 = (*(volatile s32 *) (u32) (s1 + 160));
    at = 0x8001;
    at = v0 < at;
    if (at == 0) { v0 = (s32) 0x46080000U; goto L_00BF1974; }
    v0 = (s32) 0xc6080000U;
    v0 = v0 | 0x6400;
    f13.i = (s32) v0;
    goto L_00BF197C;
L_00BF1974:;
    v0 = v0 | 0x6400;
    f13.i = (s32) v0;
L_00BF197C:;
    (*(volatile f32 *) (u32) (s1 + 108)) = f12.f; goto L_00BF1938;
L_00BF1984:;
    return;
}
