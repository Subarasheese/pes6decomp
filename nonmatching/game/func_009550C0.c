/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_00990590(s32, s32, s32, s32, s32);
s32 func_009909D0(s32, s32);
s32 func_009B3070(s32, s32);
s32 func_00AFBAB0(s32);
s32 func_00BDB8B0(s32);

s32 func_009550C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a2 = 8192;
    a3 = (s32) 0x240000U;
    a4 = 2;
    a1 = (*(volatile u16 *) (u32) (a0 + 288));
    s3 = a0; v0 = func_00990590(a0, a1, a2, a3, a4);
    if (v0 != 0) { v0 = 0; goto L_00955284; }
    a0 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e80U);
    f0.f = (*(volatile f32 *) (u32) (s3 + 224));
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45400000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_00955284; }
    v0 = (s32) 0xcb0000U;
    s0 = 3072;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = 2048;
    if (v1 == 0) s0 = v0;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (*(volatile u16 *) (u32) (s3 + 288));
    a0 = s3;
    a2 = 8192; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { v0 = (s32) ((u32) s0 >> 1); goto L_00955178; }
    v0 = 0; goto L_00955284;
L_00955178:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = s3; v0 = func_009909D0(a0, a1);
    if (v0 == 0) { v0 = (*(volatile s16 *) (u32) (s3 + 20)); goto L_00955194; }
    v0 = 0; goto L_00955284;
L_00955194:;
    s0 = 0;
    a0 = (*(volatile u8 *) (u32) s3);
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009551D0; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009551D0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_009551EC:;
    a0 = s2; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00955270;
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    if (v0 == 0) goto L_00955270;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (*(volatile f32 *) (u32) (s3 + 224));
    f1.f = f20.f * f1.f;
    f0.f = f20.f * f0.f;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00955270;
    a0 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) s3 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00955270;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) s3 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = (*(volatile u16 *) (u32) (s3 + 288)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at == 0) goto L_00955270;
    s0 = (*(volatile u8 *) (u32) s2);
L_00955270:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_009551EC; }
    v0 = s0;
L_00955284:;
    return v0;
}
