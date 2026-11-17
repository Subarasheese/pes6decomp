/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002079F0(s32, s32, s32);
void func_00209830(s32);
f32 func_002A95A0(void);
void func_002A95B0(f32);
void func_009B37F0(s32, s32, s32, s32, s32);
s32 func_00B2A420(s32);
void func_00B35470(s32);
s32 func_00C37760(s32, s32);
s32 func_00C37850(s32);
void func_00C391E0(s32, s32, s32, s32, s32, f32, f32, f32, f32);

void func_00C3AC00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffb908U);
    s4 = a0;
    a1 = (*(volatile u8 *) (u32) (v0 + -18100));
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -18180));
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s2 = (s32) ((u32) v0 << 2); v0 = func_00C37850(a0);
    a0 = v0; v0 = func_00B2A420(a0);
    s5 = v0;
    a1 = s2;
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002079F0(a0, a1, a2);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_00C3AD20;
L_00C3AC98:;
    v0 = (*(volatile u8 *) (u32) (s4 + 2));
    at = 0 < v0;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00C3ACF8; }
L_00C3ACA8:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -18180));
    a1 = s0; v0 = func_00C37760(a0, a1);
    a0 = v0 & 0xff; v0 = func_00B2A420(a0);
    s3 = v0;
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00209830(a0);
    a0 = s3; func_00C391E0(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    a0 = (*(volatile s32 *) (u32) s3); func_009B37F0(a0, a1, a2, a3, a4);
    v0 = (*(volatile u8 *) (u32) (s4 + 2));
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < v0;
    if (v0 != 0) goto L_00C3ACA8;
L_00C3ACF8:;
    v0 = (*(volatile s32 *) (u32) s5);
    a1 = s2;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = (s32) ((u32) s1 + 0x1U); v0 = func_002079F0(a0, a1, a2);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00C3AC98;
L_00C3AD20:;
    v0 = (*(volatile u8 *) (u32) (s4 + 2));
    at = 0 < v0;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00C3AD68; }
L_00C3AD30:;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -18180));
    a1 = s0; v0 = func_00C37760(a0, a1);
    a0 = v0 & 0xff; v0 = func_00B2A420(a0);
    a0 = v0; func_00B35470(a0);
    v0 = (*(volatile u8 *) (u32) (s4 + 2));
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < v0;
    if (v0 != 0) goto L_00C3AD30;
L_00C3AD68:;
    f0.f = func_002A95A0();
    v0 = (*(volatile u8 *) (u32) (gp + -19322));
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f2.i = (s32) v1;
    v0 = (s32) 0x42700000U;
    f1.i = (s32) v0;
    f2.f = (f32) f2.i;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    f0.f = f2.f / f0.f;
    { s32 c_ = v0 < 0; f1.f = f0.f * f1.f; if (c_) goto L_00C3ADB0; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00C3ADCC;
L_00C3ADB0:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00C3ADCC:;
    f12.f = f1.f / f0.f;
    func_002A95B0(f12.f);
    return;
}
