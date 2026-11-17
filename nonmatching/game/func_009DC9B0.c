/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3350(s32, s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00A14EC0(s32, s32);
void func_00A15540(s32);
void func_00AA9F90(s32, s32, s32, s32, s32, s32, f32, f32);

void func_009DC9B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    a0 = s2;
    a1 = s3;
    v0 = func_00A14EC0(a0, a1);
    if (v0 == 0) { a2 = (*(volatile s32 *) (u32) (s2 + 88)); goto L_009DCBD8; }
L_009DC9F4:;
    a0 = (*(volatile u8 *) (u32) (s3 + 19));
L_009DC9F8:;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 + 0x1e53U);
    v0 = (*(volatile u8 *) (u32) s2);
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v0 == v1; s0 = (*(volatile u8 *) (u32) (a1 + 104)); if (c_) goto L_009DCB18; }
    v0 = 255;
    if (v1 == v0) goto L_009DCB18;
    f20.f = (*(volatile f32 *) (u32) (a1 + 5212));
    { s32 c_ = v1 == v0; f21.f = (*(volatile f32 *) (u32) (a1 + 5204)); if (c_) goto L_009DCA4C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_009DCA50;
L_009DCA4C:;
    a0 = 1;
L_009DCA50:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = s3;
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = s2; v0 = func_00A14EC0(a0, a1);
    if (v0 != 0) goto L_009DCAB4;
    a2 = (*(volatile s32 *) (u32) (s2 + 88));
    a0 = s2;
    a1 = s3;
    a3 = 0;
    a4 = 768;
    a5 = -704; func_00AA9F90(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 7;
    if (v1 != v0) goto L_009DCAB4;
    a0 = s2;
    a1 = s3; func_00A15540(a0);
L_009DCAB4:;
    f0.i = (s32) f21.f;
    s4 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = f0.i;
    f0.i = (s32) f20.f;
    a2 = f0.i;
    a0 = s4; v0 = func_009B3350(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (s4 + 5204));
    s2 = v0;
    f0.f = (*(volatile f32 *) (u32) (s4 + 5212));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s4; v0 = func_009B3350(a0, a1, a2);
    at = (u64) s2 < (u64) v0;
    if (at == 0) goto L_009DCB18;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v0 + 5204)) = f21.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v0 + 5212)) = f20.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s0 = (*(volatile u8 *) (u32) (v0 + 104));
L_009DCB18:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 5204));
    (*(volatile f32 *) (u32) s1) = f0.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 5208));
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 5212));
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) s0;
    f1.f = (*(volatile f32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 8));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) v0;
    v1 = (s32) 0xc6520000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 20));
    v1 = v1 | 0x6400;
    f3.i = (s32) v1;
    f2.f = (*(volatile f32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) (s1 + 8));
    f0.i = (s32) 0;
    f4.i = (s32) a0;
    f4.f = (f32) f4.i;
    f3.f = f3.f * f4.f;
    f0.f = f0.f - f1.f;
    f2.f = f3.f - f2.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v1 = f1.i;
    a1 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = (s32) 0x590000U;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a1 * (s64) (u64) (u32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (s1 + 20)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (a1 + 5204));
    (*(volatile f32 *) (u32) (a0 + 8820)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 5212));
    (*(volatile f32 *) (u32) (v1 + 8824)) = f0.f; goto L_009DCC14;
L_009DCBD8:;
    a0 = s2;
    a1 = s3;
    a3 = 0;
    a4 = 768;
    a5 = -704; func_00AA9F90(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 7;
    if (v1 != v0) goto L_009DC9F4;
    a0 = s2;
    a1 = s3; func_00A15540(a0);
    a0 = (*(volatile u8 *) (u32) (s3 + 19)); goto L_009DC9F8;
L_009DCC14:;
    return;
}
