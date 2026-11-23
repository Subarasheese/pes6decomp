/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_009041F0(s64, s64, s64, s64);
s64 func_009048A0(s64, s64, s64, s64);
s64 func_00904D10(s64, s64, s64, s64);
s64 func_009051D0(s64, s64);
s64 func_0090B890(s64, s64);
s64 func_0098ED30(s64, s64, s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
s64 func_00BBB8C0(s64, s64, s64, s64);

s64 func_00917F90(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_00917FC8; }
    v0 = 0;
L_00917FB4:;
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s1; goto L_00918004; }
    v0 = 0; goto L_00918330;
L_00917FC8:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_00917FE0;
    v0 = 0; goto L_00917FB4;
L_00917FE0:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00917FB4; }
    v0 = 0; goto L_00917FB4;
L_00918004:;
    v0 = func_009041F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_00918330; }
    a0 = (*(volatile u8 *) (u32) (s1 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { v0 = 0; goto L_00918330; }
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xcb0000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    f3.f = (*(volatile f32 *) (u32) (a0 + 16));
    f1.f = f2.f * f4.f;
    f0.f = f3.f * f4.f;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_00918330; }
    f0.f = f2.f - f3.f;
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45d20000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_00918330; }
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e88U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f * f4.f;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_00918330; }
    f0.f = (*(volatile f32 *) (u32) (a0 + 24));
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45b50000U;
    v0 = v0 | 0xdaab;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) s1); goto L_009180E0; }
    v0 = 0; goto L_00918330;
L_009180E0:;
    v0 = func_0098ED30(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = v0 < 4;
    if (at == 0) { v0 = 0; goto L_00918330; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00918128; }
    v0 = 0; goto L_00918330;
L_00918128:;
    a1 = 34; v0 = func_009051D0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_00918140; }
    v0 = 0; goto L_00918330;
L_00918140:;
    a1 = 18; v0 = func_009048A0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) s1);
    s0 = v0 & 0xff;
    a1 = 1; v0 = func_00904D10(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = v1 < 3;
    if (v0 != 0) goto L_009182DC;
    v0 = (s32) ((u32) v1 + 0xfffffffeU);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = v0 & 0xff; goto L_009182DC;
L_0091817C:;
    v0 = 0; goto L_00918194;
L_00918184:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00918194;
L_0091818C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00918194;
L_00918194:;
    v1 = s0 & 0xff;
    v0 = v0 & 0xff;
    at = v1 < v0;
    if (at == 0) { v0 = 0; goto L_00918330; }
    v0 = (*(volatile u8 *) (u32) (s1 + 16));
    v0 = (s32) ((u32) v0 + 0xffffffe1U);
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) goto L_009181D8;
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe4b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x918270U) goto L_00918270; }
L_009181D8:;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00918208; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00918208:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a2 = (*(volatile u8 *) (u32) (v0 + 18));
    a1 = 40;
    v1 = (*(volatile u8 *) (u32) (v0 + 17));
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 118));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
L_00918270:;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = s1; goto L_009182B4; }
    a0 = s1;
    a1 = 2; v0 = func_0090B890(a0, a1);
    a0 = s1;
    a1 = 3; v0 = func_0090B890(a0, a1);
    a0 = 100; goto L_009182CC;
L_009182B4:;
    a1 = 5; v0 = func_0090B890(a0, a1);
    a0 = s1;
    a1 = 6; v0 = func_0090B890(a0, a1);
    a0 = 100;
L_009182CC:;
    v0 = func_00BBB8C0(a0, a1, a2, a3);
    v0 = 0; goto L_00918330;
L_009182DC:;
    a0 = (*(volatile u8 *) (u32) (s1 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1eeeU);
    v0 = 4;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00918194; }
    v0 = 3;
    if (v1 == v0) goto L_0091818C;
    v0 = 2;
    if (v1 == v0) goto L_0091818C;
    v0 = 1;
    if (v1 == v0) goto L_00918184;
    if (v1 == 0) goto L_0091817C;
    goto L_0091818C;
L_00918330:;
    return v0;
}
