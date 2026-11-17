/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
s32 func_009F42B0(s32, s32);

s32 func_00A194A0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (a0 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 64;
    if (at == 0) goto L_00A19570;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x43bc0000U;
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 48));
    fcc = f1.f < f0.f;
    if (fcc) goto L_00A19570;
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = (*(volatile u16 *) (u32) (v1 + 88)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 32;
    if (at == 0) { v0 = 0; goto L_00A1965C; }
    at = v0 < 17;
    if (at == 0) goto L_00A1954C;
    v0 = (*(volatile s32 *) (u32) (s2 + 276));
    v0 = (u64) v0 < (u64) (s64) 256;
    if (v0 != 0) goto L_00A1954C;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    at = v0 < 4097;
    if (at != 0) goto L_00A1954C;
    v0 = 0; goto L_00A1965C;
L_00A1954C:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    s1 = (*(volatile u8 *) (u32) (v1 + 9950));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    v0 = s1 < v0;
    if (v0 != 0) goto L_00A19578;
L_00A19568:;
    v0 = 0; goto L_00A1965C;
L_00A19570:;
    v0 = 0; goto L_00A1965C;
L_00A19578:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s0 = (s32) ((u32) s1 << 2);
    a0 = s2;
    a1 = -448;
    s3 = (s32) ((u32) v0 + (u32) s0); v0 = func_009F42B0(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s3 + 2040));
    f1.f = (f32) f1.i;
    fcc = f0.f <= f1.f;
    if (!fcc) { a0 = s2; goto L_00A195D0; }
L_00A195A8:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 9950));
    v0 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    v0 = s1 < v0;
    if (v0 != 0) goto L_00A19578;
    goto L_00A19568;
L_00A195D0:;
    a1 = -256; v0 = func_009F42B0(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s3 + 2040));
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00A195A8;
    f1.i = (s32) s1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    f6.f = (f32) f1.i;
    v0 = (s32) ((u32) v0 + (u32) s0);
    f4.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s2 + 240));
    acc = f4.f + f0.f;
    f3.f = (*(volatile f32 *) (u32) (v0 + 1144));
    f1.f = (*(volatile f32 *) (u32) (s2 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2936));
    f5.f = acc + f2.f * f6.f;
    f2.f = (*(volatile f32 *) (u32) (s2 + 248));
    f3.f = f5.f - f3.f;
    acc = f4.f + f1.f;
    f1.f = acc + f2.f * f6.f;
    f0.f = f1.f - f0.f;
    f3.i = (s32) f3.f;
    f0.i = (s32) f0.f;
    v0 = f3.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < 16384;
    if (at == 0) goto L_00A195A8;
    v0 = 1;
L_00A1965C:;
    return v0;
}
