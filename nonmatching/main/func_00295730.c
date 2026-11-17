/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00296B00(s64, s64, s64, s64, f32, f32, f32);
s64 func_009B34C0(s64, s64, s64, s64);

s64 func_00295730(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    union { f32 f; s32 i; } f15 = { 0 };
    s64 hi = 0, lo = 0;

    s1 = 0;
    s0 = (s32) 0x5a0000U;
    s0 = (s32) ((u32) s0 + 0x24c0U);
L_0029574C:;
    v1 = (*(volatile s32 *) (u32) (s0 + 80));
    if (v1 == 0) goto L_00295834;
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00295774; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00295774:;
    f2.f = (*(volatile f32 *) (u32) (s0 + 64));
    v0 = (s32) ((u32) a0 << 3);
    f0.f = (*(volatile f32 *) (u32) (s0 + 72));
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x40a00000U;
    f1.i = (s32) v0;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f2.i = f2.i ^ (s32) 0x80000000U;
    f14.f = (*(volatile f32 *) (u32) (v1 + 224));
    f15.f = (*(volatile f32 *) (u32) (v1 + 232));
    f12.f = f1.f * f2.f;
    f13.f = f1.f * f0.f; v0 = func_009B34C0(a0, a1, a2, a3);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_002957C8; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_002957E0;
L_002957C8:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_002957E0:;
    f0.i = (s32) f0.f;
    v0 = (s32) 0x38c90000U;
    a1 = v0 | 0xfdb;
    a0 = s0;
    v0 = (s32) 0x3fc90000U;
    v1 = v0 | 0xfdb;
    v0 = (s32) 0x40490000U;
    v0 = v0 | 0xfdb;
    a2 = f0.i;
    f1.i = (s32) a1;
    f0.i = (s32) v1;
    a1 = (s64) ((u64) a2 << 48);
    a1 = a1 >> 48;
    f2.i = (s32) a1;
    f14.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    f0.f = f1.f - f0.f;
    f12.i = (s32) 0;
    f13.i = f0.i ^ (s32) 0x80000000U; v0 = func_00296B00(a0, a1, a2, a3, f12.f, f13.f, f14.f);
L_00295834:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 10;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x60U); if (c_) goto L_0029574C; }
    return v0;
}
