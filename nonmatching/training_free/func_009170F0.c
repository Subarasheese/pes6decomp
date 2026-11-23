/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_009041F0(s64, s64, s64, s64);
s64 func_009051D0(s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
s64 func_00BBB8C0(s64, s64, s64, s64);

s64 func_009170F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_00917128; }
    v0 = 0;
L_00917114:;
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s1; goto L_00917164; }
    v0 = 0; goto L_00917378;
L_00917128:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_00917140;
    v0 = 0; goto L_00917114;
L_00917140:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00917114; }
    v0 = 0; goto L_00917114;
L_00917164:;
    v0 = func_009041F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_00917378; }
    a0 = (*(volatile u8 *) (u32) (s1 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_009171A0; }
    v0 = 0; goto L_00917378;
L_009171A0:;
    a1 = 33; v0 = func_009051D0(a0, a1);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (s1 + 18)); goto L_009171B8; }
    v0 = 0; goto L_00917378;
L_009171B8:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 106));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x88880000U;
    v1 = v1 | 0x8889;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = (s32) ((u32) v0 >> 31);
    a2 = hi;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + (u32) a3);
    s0 = v0 & 0xff;
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 126));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) goto L_00917368;
    v0 = (*(volatile u8 *) (u32) (v1 + 122));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) goto L_00917368;
L_00917294:;
    v1 = (*(volatile u8 *) (u32) (s1 + 468));
    v0 = 3;
    if (v1 != v0) goto L_00917374;
    v0 = (*(volatile u8 *) (u32) (s1 + 473));
    if (v0 == 0) goto L_00917374;
    a0 = 100; v0 = func_00BBB8C0(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    at = v1 < v0;
    if (at != 0) { v0 = 0; goto L_00917378; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = f2.f * f3.f;
    f1.f = f1.f * f3.f;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_00917378; }
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e90U);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f2.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45000000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00917374;
    v0 = (*(volatile s32 *) (u32) (s1 + 272));
    at = (s32) 0x1000000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00917374;
    v0 = (*(volatile u8 *) (u32) (s1 + 473));
    at = (s32) 0x100000U;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00917374;
    v0 = 1; goto L_00917378;
L_00917368:;
    v0 = (s32) ((u32) s0 + 0xaU);
    s0 = v0 & 0xff; goto L_00917294;
L_00917374:;
    v0 = 0;
L_00917378:;
    return v0;
}
