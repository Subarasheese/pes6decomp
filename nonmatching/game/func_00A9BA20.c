/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00AFBAB0(s64);

s64 func_00A9BA20(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s1 = a0;
    s0 = (*(volatile s16 *) (u32) (a0 + 20));
    a0 = (*(volatile u8 *) (u32) a0); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00A9BA64; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00A9BA64:;
    f0.i = (s32) s0;
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) 0x590000U;
    f2.f = (f32) f0.i;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = -13465;
    a1 = 0;
    a0 = (s32) ((u32) v1 + (u32) a0);
L_00A9BA8C:;
    if (a0 == s1) goto L_00A9BAD8;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v1 == 0) goto L_00A9BAD8;
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A9BAD8;
    f0.i = (s32) f1.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
L_00A9BAD8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 10;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x240U); if (c_) goto L_00A9BA8C; }
    f1.i = (s32) s0;
    v1 = (s32) 0x45000000U;
    f0.i = (s32) v1;
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.f = (f32) f1.i;
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    f1.f = f1.f * f2.f;
    f1.f = f1.f - f0.f;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A9BB50;
    v0 = (s32) ((u32) s0 << 11);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f2.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
L_00A9BB50:;
    return v0;
}
