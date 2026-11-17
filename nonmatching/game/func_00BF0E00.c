/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0027D460(void);
void func_0027D4E0(s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);

void func_00BF0E00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
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

    v0 = (s32) 0x590000U;
    v1 = 255;
    s2 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_00BF0E3C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF0E3C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 2;
    s1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (s1 + 156));
    if (v1 == v0) { (*(volatile u32 *) (u32) (s2 + 156)) = (u32) v0; goto L_00BF0E9C; }
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s1 + 77)); goto L_00BF0E94; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile u16 *) (u32) (s1 + 558)); goto L_00BF0E84; }
    (*(volatile u8 *) (u32) (s2 + 545)) = (u8) 0; goto L_00BF0EA8;
L_00BF0E84:;
    (*(volatile u16 *) (u32) (s2 + 558)) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 76));
    (*(volatile u8 *) (u32) (s2 + 76)) = (u8) v0; goto L_00BF0EA4;
L_00BF0E94:;
    (*(volatile u8 *) (u32) (s2 + 77)) = (u8) v0; goto L_00BF0EA4;
L_00BF0E9C:;
    v0 = (*(volatile u8 *) (u32) (s1 + 77));
    (*(volatile u8 *) (u32) (s2 + 77)) = (u8) v0;
L_00BF0EA4:;
    (*(volatile u8 *) (u32) (s2 + 545)) = (u8) 0;
L_00BF0EA8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 160));
    (*(volatile u32 *) (u32) (s2 + 160)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 156));
    (*(volatile u32 *) (u32) (s2 + 156)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BF0ED4; }
L_00BF0ED4:;
    f0.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s2 + 160));
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    a1 = 256; v0 = func_00BBB990(a0, a1);
    f0.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s2 + 160));
    a1 = 256;
    f20.f = (f32) f0.i; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f3.f = (f32) f1.i;
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00BF0F40; }
    v0 = -1;
L_00BF0F40:;
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    fcc = f20.f == f0.f;
    { s32 c_ = fcc; f12.f = f1.f * f2.f; if (c_) goto L_00BF1028; }
    f0.i = (s32) f20.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BF0F80; }
L_00BF0F80:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    f1.f = (*(volatile f32 *) (u32) (v1 + 24));
    v0 = lo;
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f13.f = acc + f3.f * f2.f;
    (*(volatile f32 *) (u32) (s2 + 108)) = f12.f;
L_00BF0FB0:;
    a0 = s2;
    (*(volatile f32 *) (u32) (s2 + 112)) = f13.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s2 + 46)) = (u16) v0;
    a3 = (s32) 0x590000U;
    v0 = 2;
    a1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (s2 + 24)) = (u16) v0;
    a3 = (s32) ((u32) a3 + 0x1e4fU);
    a4 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) s1);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a1 + 7756)) = (u8) a4;
    a1 = (*(volatile u8 *) (u32) (s2 + 19));
    a4 = (*(volatile u8 *) (u32) s2);
    a1 = (s32) ((u32) a1 << 1);
    a1 = (s32) ((u32) a3 + (u32) a1);
    (*(volatile u8 *) (u32) a1) = (u8) a4;
    a1 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) (a0 + 7757)) = (u8) a1;
    (*(volatile u8 *) (u32) (v1 + 7758)) = (u8) a2;
    (*(volatile u8 *) (u32) (v0 + 7704)) = (u8) 0; func_0027D460();
    a0 = (*(volatile u8 *) (u32) s2); func_0027D4E0(a0);
    v1 = 57;
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) v1; goto L_00BF1060;
L_00BF1028:;
    v0 = (*(volatile s32 *) (u32) (s2 + 160));
    at = 0x8001;
    at = v0 < at;
    if (at == 0) { v0 = (s32) 0x46080000U; goto L_00BF1050; }
    v0 = (s32) 0xc6080000U;
    v0 = v0 | 0x6400;
    f13.i = (s32) v0;
    goto L_00BF1058;
L_00BF1050:;
    v0 = v0 | 0x6400;
    f13.i = (s32) v0;
L_00BF1058:;
    (*(volatile f32 *) (u32) (s2 + 108)) = f12.f; goto L_00BF0FB0;
L_00BF1060:;
    return;
}
