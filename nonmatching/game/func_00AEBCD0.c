/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002AE670(s64);
s64 func_009B30B0(s64, s64);
s64 func_00A14EC0(s64, s64);
s64 func_00AA3540(s64);
void func_00AA9F90(s64, s64, s64, s64, s64, s64, f32, f32);

s64 func_00AEBCD0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s2 = a0;
    a0 = 16;
    v0 = func_002AE670(a0);
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = (*(volatile u16 *) (u32) (s2 + 42));
    s1 = v0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    a0 = s2;
    s0 = v0 & 0x7f; v0 = func_00AA3540(a0);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) { v0 = 0; goto L_00AEBFAC; }
    a4 = (*(volatile u8 *) (u32) (s2 + 18));
    a3 = (s32) 0x590000U;
    a0 = (s32) 0xb30f0000U;
    a2 = (*(volatile u8 *) (u32) (s2 + 17));
    a3 = (s32) ((u32) a3 + 0x2980U);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = a0 | 0x6353;
    v1 = (s32) ((u32) s1 << 2);
    a1 = (s32) ((u32) a4 << 4);
    a4 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a2 = (s32) ((u32) a4 << 8);
    a1 = (s32) ((u32) a1 << 3);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) (a1 + 140));
    a1 = (s64) ((u64) a1 << 56);
    a1 = (s64) ((u64) a1 >> 58);
    a2 = (s32) ((u32) a1 + 0x94U);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a2 - (u32) a1);
    a3 = (s32) ((u32) a1 << 5);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a3 >> 31);
    a1 = hi;
    a0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 2044));
    a0 = (s32) ((u32) a1 + (u32) a3);
    a0 = (s32) a0 >> 7;
    a0 = (s32) ((u32) a0 + (u32) a2);
    f1.i = (s32) a0;
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (fcc) { v0 = 0; goto L_00AEBFAC; }
    a1 = (s32) ((u32) v0 + 0xb7cU);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9952));
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s32 c_ = v0 <= 0; a2 = 0; if (c_) goto L_00AEBE00; }
    goto L_00AEBE04;
L_00AEBE00:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_00AEBE04:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s0 & 0xffff; goto L_00AEBE34; }
    a2 = 1; goto L_00AEBE94;
L_00AEBE34:;
    v0 = a0 < 24;
    if (v0 != 0) goto L_00AEBE94;
    at = a0 < 105;
    if (at == 0) goto L_00AEBE94;
    v0 = (s32) ((u32) a1 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00AEBE68; }
L_00AEBE68:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x45f80000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00AEBE94;
    a2 = 1;
L_00AEBE94:;
    v0 = 1;
    if (a2 != v0) goto L_00AEBF00;
    a0 = s2;
    a1 = s2; v0 = func_00A14EC0(a0, a1);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00AEBF08; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
L_00AEBEB8:;
    f0.f = (*(volatile f32 *) (u32) (v0 + 5212));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00AEBED0; }
L_00AEBED0:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46040000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00AEBF00;
    v0 = 1; goto L_00AEBFAC;
L_00AEBF00:;
    v0 = 0; goto L_00AEBFAC;
L_00AEBF08:;
    a1 = (s32) 0x590000U;
    v0 = (s32) 0xb30f0000U;
    a0 = (*(volatile u8 *) (u32) (s2 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = v0 | 0x6353;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 140));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 58);
    a0 = (s32) ((u32) v1 + 0x94U);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) a0 - (u32) v1);
    a5 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a5 >> 31);
    v0 = hi;
    a2 = (*(volatile s32 *) (u32) (s2 + 28));
    a0 = s2;
    a1 = s2;
    a3 = 0;
    a4 = 192;
    v0 = (s32) ((u32) v0 + (u32) a5);
    v0 = (s32) v0 >> 7;
    a5 = (s32) ((u32) v0 + (u32) v1); func_00AA9F90(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00AEBEB8;
L_00AEBFAC:;
    return v0;
}
