/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00255E70(s64);
s64 func_00992DF0(s64, s64, s64, s64);
s64 func_00993A80(s64, s64, s64, s64);
s64 func_009E1C90(s64, s64, s64, s64);

s64 func_00300740(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };
    union { f32 f; s32 i; } f13 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 24360));
    { s32 c_ = v0 != 0; s1 = a0; if (c_) goto L_00300768; }
    v0 = 255; goto L_003008CC;
L_00300768:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 24424));
    if (v0 != 0) { a0 = 1; goto L_00300780; }
    v0 = 255; goto L_003008CC;
L_00300780:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 == a1) goto L_003007A0;
    v0 = 255; goto L_003008CC;
L_003007A0:;
    v0 = (s32) 0xcb0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    if (a0 == v1) goto L_003007C0;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a1 = hi;
L_003007C0:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    { s32 c_ = s1 == 0; s0 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_0030081C; }
    v1 = (*(volatile s16 *) (u32) (s0 + 20));
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 24368));
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) ((u32) v1 << 10);
    f1.i = (s32) v1;
    v0 = (s32) 0xcb0000U;
    f1.f = (f32) f1.i;
    f13.f = (*(volatile f32 *) (u32) (v0 + 24376));
    f12.f = f0.f + f1.f; v0 = func_00992DF0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 <= 0) { a0 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_00300820; }
    v0 = 0; goto L_003008CC;
L_0030081C:;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
L_00300820:;
    s1 = 0; v0 = func_00993A80(a0, a1, a2, a3);
    if (v0 == 0) goto L_00300834;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00300834:;
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 24368));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 24376));
    a0 = (*(volatile u8 *) (u32) (s0 + 19)); v0 = func_00992DF0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 <= 0) { v0 = s1 & 0xff; goto L_003008A4; }
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 24376));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00300874; }
L_00300874:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_003008A0;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_003008A0:;
    v0 = s1 & 0xff;
L_003008A4:;
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_003008B4; }
    v0 = 255; goto L_003008CC;
L_003008B4:;
    v0 = func_00255E70(a0);
    if (v0 == 0) { v0 = 3; goto L_003008CC; }
    v0 = 0; goto L_003008CC;
L_003008CC:;
    return v0;
}
