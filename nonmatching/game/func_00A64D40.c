/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0099DFF0(s32);
s32 func_009B30B0(s32, s32);
s32 func_00A1B990(s32);
s32 func_00A64EE0(s32, s32, s32, s32, f32);
s32 func_00AFBAB0(s32);

s32 func_00A64D40(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 36));
    { s32 c_ = v0 != 0; s5 = a0; if (c_) goto L_00A64D7C; }
    v0 = func_0099DFF0(a0);
    a0 = (*(volatile u8 *) (u32) s5); goto L_00A64D88;
L_00A64D7C:;
    v0 = func_00A64EE0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile u8 *) (u32) s5);
L_00A64D88:;
    s1 = v0 & 0xffff; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00A64DB4; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00A64DB4:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x7fff0000U;
    a0 = (s32) ((u32) a0 << 6);
    s0 = v0 | 0xffff;
    s2 = (s32) ((u32) v1 + (u32) a0);
    s4 = 0;
L_00A64DD8:;
    if (s5 == s2) goto L_00A64E98;
    a0 = s2; v0 = func_00A1B990(a0);
    if (v0 != 0) goto L_00A64E98;
    v1 = (*(volatile s16 *) (u32) (s2 + 20));
    v0 = (s32) 0xc6080000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.i = (s32) v0;
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00A64E98;
    v0 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s5 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = s1; v0 = func_009B30B0(a0, a1);
    a0 = v0 & 0xffff;
    at = a0 < 40;
    if (at == 0) goto L_00A64E98;
    v0 = (*(volatile u8 *) (u32) s2);
    at = (s32) 0x3100000U;
    at = at | 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v0 + 344));
    at = v1 < at;
    if (at == 0) goto L_00A64E98;
    v0 = (s32) 0x90000U;
    v0 = v1 < v0;
    if (v0 != 0) goto L_00A64E98;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = s0 < v0;
    if (at != 0) goto L_00A64E98;
    s0 = v0;
    s3 = s2;
L_00A64E98:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 10;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_00A64DD8; }
    v0 = (s32) 0x7fff0000U;
    v0 = v0 | 0xffff;
    if (s0 != v0) { v0 = (*(volatile u8 *) (u32) s3); goto L_00A64EBC; }
    v0 = 0;
L_00A64EBC:;
    return v0;
}
