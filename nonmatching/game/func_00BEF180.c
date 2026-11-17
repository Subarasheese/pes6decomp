/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);

void func_00BEF180(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -16816));
    v0 = v1 & 0x1;
    { s32 c_ = v0 != 0; s2 = a0; if (c_) goto L_00BEF3A8; }
    v0 = (s64) ((u64) v1 << 60);
    v1 = (s64) ((u64) v0 >> 63);
    v0 = (s32) 0x590000U;
    a0 = v1 & 0xff;
    v1 = (*(volatile s32 *) (u32) (v0 + 7804));
    v0 = v1 & 0x80;
    { s32 c_ = v0 == 0; a1 = (s64) ((u64) 0 + (u64) (s64) 255); if (c_) goto L_00BEF1E8; }
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00BEF1E8; }
    a1 = 0;
L_00BEF1E8:;
    v0 = v1 & 0x20;
    if (v0 == 0) goto L_00BEF214;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { a1 = 0; goto L_00BEF214; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00BEF214:;
    s1 = a1 & 0xff;
    v0 = 255;
    if (s1 == v0) { v0 = 0; goto L_00BEF3BC; }
    v0 = a1 & 0x1;
    v1 = a0 & 0xff;
    a1 = (s32) ((u32) v0 << 3);
    a0 = -9;
    v0 = (s32) 0xcc0000U;
    a2 = (*(volatile u8 *) (u32) (v0 + -16816));
    a0 = a2 & a0;
    v0 = (s32) 0xcc0000U;
    a0 = a0 | a1;
    { s32 c_ = s1 != v1; (*(volatile u8 *) (u32) (v0 + -16816)) = (u8) a0; if (c_) goto L_00BEF3B0; }
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16818));
    at = v0 < 8;
    if (at == 0) goto L_00BEF270;
    v1 = (s32) ((u32) v0 + 0x1U);
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -16818)) = (u8) v1;
L_00BEF270:;
    f12.f = (*(volatile f32 *) (u32) (s2 + 224));
    f13.i = (s32) 0;
    a0 = s2; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s0 = v0 & 0xffff;
    a0 = 1;
    v0 = (s32) 0xcc0000U;
    v1 = -1;
    v0 = (*(volatile u8 *) (u32) (v0 + -16818));
    if (s1 != 0) a0 = v1;
    v0 = (s32) ((u32) v0 << 5);
    v0 = (s32) ((u32) v0 + 0x80U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile u16 *) (u32) (s2 + 38));
    v1 = v1 & 0xffff;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) v0;
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = s0; v0 = func_009B3070(a0, a1);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BEF2D4; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00BEF2EC;
L_00BEF2D4:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00BEF2EC:;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x8889;
    f4.i = (s32) v0;
    fcc = f0.f < f4.f;
    if (fcc) goto L_00BEF3A0;
    a0 = 1;
    v1 = -1;
    if (s1 != 0) a0 = v1;
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) s0;
    f0.i = (s32) a0;
    v0 = (*(volatile u16 *) (u32) (s2 + 38));
    { s32 c_ = v0 < 0; f3.f = (f32) f0.i; if (c_) goto L_00BEF334; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00BEF350;
L_00BEF334:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00BEF350:;
    f1.i = (s32) 0;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    acc = f1.f + f2.f;
    f1.f = acc + f4.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00BEF384; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00BEF39C;
L_00BEF384:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00BEF39C:;
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) v1;
L_00BEF3A0:;
    v0 = 0; goto L_00BEF3BC;
L_00BEF3A8:;
    v0 = 0; goto L_00BEF3BC;
L_00BEF3B0:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -16818)) = (u8) 0; goto L_00BEF270;
L_00BEF3BC:;
    return;
}
