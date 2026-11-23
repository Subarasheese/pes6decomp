/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0098F4A0(s64, s64, s64, s64);

s64 func_009045F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 fcc = 0;

    v0 = 29;
    s1 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 477));
    { s32 c_ = v1 != v0; s0 = 0; if (c_) goto L_00904618; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00904618:;
    a0 = s1; v0 = func_0098F4A0(a0, a1, a2, a3);
    if (v0 != 0) goto L_009047AC;
    v1 = (*(volatile u8 *) (u32) (s1 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    a0 = 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_009047AC;
    v0 = (s32) 0xcb0000U;
    v1 = s0 & 0xff;
    f4.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v0 = (s32) ((u32) v1 << 9);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x45000000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f2.i = (s32) v0;
    f3.f = f4.f * f3.f;
    f2.f = f3.f - f2.f;
    f0.f = f4.f * f0.f;
    f1.f = f2.f - f1.f;
    fcc = f0.f < f1.f;
    if (fcc) goto L_009047AC;
    v1 = (*(volatile u8 *) (u32) (s1 + 477));
    v0 = 6;
    if (v1 == v0) goto L_00904798;
    v0 = 2;
    if (v1 == v0) goto L_00904798;
    if (v1 == a0) goto L_00904798;
    v0 = 32;
    if (v1 == v0) goto L_00904798;
    v0 = 18;
    if (v1 == v0) goto L_00904798;
    v0 = 20;
    if (v1 == v0) goto L_00904798;
    v0 = 28;
    if (v1 == v0) goto L_00904798;
    v0 = 19;
    if (v1 == v0) goto L_00904798;
    v0 = 26;
    if (v1 == v0) goto L_00904798;
    v0 = 25;
    if (v1 == v0) goto L_00904798;
    v0 = 24;
    if (v1 == v0) goto L_00904798;
    v0 = 23;
    if (v1 == v0) goto L_00904798;
    v0 = 22;
    if (v1 == v0) goto L_00904798;
    v0 = 17;
    if (v1 == v0) goto L_00904798;
    v0 = 16;
    if (v1 == v0) goto L_00904798;
    v0 = 15;
    if (v1 == v0) goto L_00904798;
    v0 = 13;
    if (v1 == v0) goto L_00904798;
    v0 = 11;
    if (v1 == v0) goto L_00904790;
    v0 = 10;
    if (v1 == v0) goto L_00904790;
    v0 = 9;
    if (v1 == v0) goto L_00904790;
    v0 = 0; goto L_0090479C;
L_00904790:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0090479C;
L_00904798:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2);
L_0090479C:;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff; goto L_009047B0;
L_009047AC:;
    v0 = 0;
L_009047B0:;
    return v0;
}
