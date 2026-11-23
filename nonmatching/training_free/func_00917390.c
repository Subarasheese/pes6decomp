/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009051D0(s64, s64);
s64 func_0090B890(s64, s64);
s64 func_0098F8D0(s64, s64, s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
s64 func_00C23970(s64, s64, s64, s64);

s64 func_00917390(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_0091749C; }
    v0 = 0;
L_009173B8:;
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_0091769C; }
    a0 = (*(volatile u8 *) (u32) (s1 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1eeeU);
    v0 = 4;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_00917420;
    v0 = 3;
    if (v1 == v0) { s0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00917424; }
    v0 = 2;
    if (v1 == v0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00917424; }
    v0 = 1;
    if (v1 == v0) goto L_00917418;
    if (v1 == 0) goto L_00917418;
    s0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00917424;
L_00917418:;
    s0 = 0; goto L_00917424;
L_00917420:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 3);
L_00917424:;
    a0 = s1;
    a1 = 6; v0 = func_00C23970(a0, a1, a2, a3);
    s2 = v0 & 0xff;
    a0 = s1;
    a1 = 7; v0 = func_00C23970(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s2 + (u32) v0);
    a1 = 32;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 >> 1);
    s2 = v0 & 0xff; v0 = func_009051D0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s2 + (u32) v0);
    a1 = 15;
    s2 = v0 & 0xff; v0 = func_009051D0(a0, a1);
    v0 = v0 & 0xff;
    s0 = s0 & 0xff;
    v0 = (s32) ((u32) s2 + (u32) v0);
    v0 = v0 & 0xff;
    v0 = v0 < s0;
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_009174D8; }
    v0 = 0; goto L_0091769C;
L_0091749C:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_009174B4;
    v0 = 0; goto L_009173B8;
L_009174B4:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_009173B8; }
    v0 = 0; goto L_009173B8;
L_009174D8:;
    v0 = a0 ^ 0x1;
    a1 = v0 & 0xff; v0 = func_0098F8D0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = (s32) ((u32) s0 + 0x1U);
    at = v1 < v0;
    if (at == 0) { v0 = 0; goto L_0091769C; }
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    v0 = (s32) 0x45e00000U;
    f1.f = f2.f * f1.f;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_0091769C; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21193));
    if (v0 != 0) { a0 = s1; goto L_0091753C; }
L_00917534:;
    v0 = 0; goto L_0091769C;
L_0091753C:;
    a1 = 2;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1280); v0 = func_0090B890(a0, a1);
    v0 = v0 & 0xff;
    a0 = s1;
    v0 = (s32) ((u32) v0 << 8);
    a1 = 3;
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = v0 & 0xffff; v0 = func_0090B890(a0, a1);
    v0 = v0 & 0xff;
    a0 = s1;
    v0 = (s32) ((u32) v0 << 7);
    a1 = 1;
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = v0 & 0xffff; v0 = func_0090B890(a0, a1);
    v1 = v0 & 0xff;
    v0 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) v1 << 7);
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    v1 = (s32) 0x45a00000U;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    v1 = v1 | 0xc800;
    a0 = a0 & 0xffff;
    a0 = (s32) ((u32) s0 + (u32) a0);
    f0.i = (s32) v1;
    f2.f = f1.f * f3.f;
    fcc = f2.f < f0.f;
    { s32 c_ = fcc; a0 = a0 & 0xffff; if (c_) goto L_00917698; }
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    if (a0 < 0) { v1 = (s32) ((u32) a0 >> 1); goto L_009175E4; }
    f0.i = (s32) a0;
    f0.f = (f32) f0.i; goto L_009175FC;
L_009175E4:;
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_009175FC:;
    f0.f = f1.f - f0.f;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_0091764C;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45320000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0091764C;
    f0.f = (*(volatile f32 *) (u32) (s1 + 108));
    f0.f = f3.f * f0.f;
    fcc = f0.f < f2.f;
    if (!fcc) goto L_0091764C;
    v0 = 1; goto L_0091769C;
L_0091764C:;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x44000000U;
    f1.i = (s32) v0;
    v1 = (s32) 0x590000U;
    f0.i = (s32) 0;
    v1 = (s32) ((u32) v1 + 0x1e90U);
    f2.f = (*(volatile f32 *) (u32) (s1 + 108));
    acc = f0.f + f1.f;
    v0 = a0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = acc + f2.f * f3.f;
    f1.f = f1.f * f3.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00917534;
    v0 = 1; goto L_0091769C;
L_00917698:;
    v0 = 0;
L_0091769C:;
    return v0;
}
