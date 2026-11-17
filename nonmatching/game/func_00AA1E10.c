/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B30B0(s64, s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00A09690(s64, f32, f32);
s64 func_00AA2020(s64, s64, s64, s64, f32, f32, f32, f32);

s64 func_00AA1E10(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    f0.i = (s32) 0;
    f14.f = (*(volatile f32 *) (u32) (a0 + 224));
    fcc = f14.f < f0.f;
    { s32 c_ = !fcc; s0 = a0; if (c_) goto L_00AA1E44; }
    v0 = -1; goto L_00AA1E48;
L_00AA1E44:;
    v0 = 1;
L_00AA1E48:;
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f2.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x400;
    f0.i = (s32) v0;
    f21.f = f0.f * f2.f;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00AA1E80; }
    v0 = -1;
L_00AA1E80:;
    f0.i = (s32) v0;
    v0 = (s32) 0x446d0000U;
    a0 = v0 | 0xc000;
    v0 = (s32) 0x590000U;
    f1.f = (f32) f0.i;
    v1 = (*(volatile u8 *) (u32) (v0 + 7756));
    f0.i = (s32) a0;
    v0 = (*(volatile u8 *) (u32) s0);
    { s32 c_ = v1 != v0; f20.f = f0.f * f1.f; if (c_) goto L_00AA1EB0; }
    v0 = 0; goto L_00AA1FF8;
L_00AA1EB0:;
    f12.i = (s32) 0;
    f13.i = f12.i;
    f15.i = f12.i; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    s1 = v0 & 0xffff;
    a0 = s0; v0 = func_00A09690(a0, f12.f, f13.f);
    a1 = s1;
    a0 = v0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 97;
    if (at != 0) { a0 = (*(volatile u16 *) (u32) (s0 + 38)); goto L_00AA1EF4; }
    v0 = 0; goto L_00AA1FF8;
L_00AA1EF4:;
    a1 = (*(volatile u16 *) (u32) (s0 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 41;
    if (at == 0) { v0 = 0; goto L_00AA1FF8; }
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 == 0) { v0 = 0; goto L_00AA1FF8; }
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 9952));
    { s32 c_ = a1 < 0; f4.f = (*(volatile f32 *) (u32) (s0 + 240)); if (c_) goto L_00AA1F34; }
    f0.i = (s32) a1;
    f2.f = (f32) f0.i; goto L_00AA1F50;
L_00AA1F34:;
    v1 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00AA1F50:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f4.f * f2.f;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s32 c_ = a1 < 0; f3.f = (*(volatile f32 *) (u32) (s0 + 248)); if (c_) goto L_00AA1F84; }
    f0.i = (s32) a1;
    f2.f = (f32) f0.i; goto L_00AA1FA0;
L_00AA1F84:;
    v1 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00AA1FA0:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.f = f0.f - f20.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x10000U;
    at = at | 0x1;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    at = (u64) v0 < (u64) at;
    if (at != 0) { a0 = s0; goto L_00AA1FEC; }
    v0 = 0; goto L_00AA1FF8;
L_00AA1FEC:;
    v0 = func_00AA2020(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = (u64) 0 < (u64) v0;
L_00AA1FF8:;
    return v0;
}
