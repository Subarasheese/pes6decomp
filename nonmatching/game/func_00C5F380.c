/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_0098ED30(s64);
s64 func_0098F4A0(s64);
s64 func_0098F7E0(s64);
s64 func_00990750(s64, s64, f32, f32);

s64 func_00C5F380(s64 a0, s64 a1, s64 a2, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = 19;
    s1 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 477));
    { s32 c_ = v1 != v0; s0 = 0; if (c_) goto L_00C5F3C4; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C5F3AC:;
    a0 = s1; v0 = func_0098F7E0(a0);
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) s1); goto L_00C5F4C8; }
    v0 = 0; goto L_00C5F5B8;
L_00C5F3C4:;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_0098ED30(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 4;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00C5F3E4; }
L_00C5F3DC:;
    v0 = 0; goto L_00C5F5B8;
L_00C5F3E4:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f0.f = f1.f - f0.f;
    f20.i = f0.i & 0x7FFFFFFF;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
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
    a0 = (s32) ((u32) v0 << 1);
    v1 = (s32) 0x45800000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 << 3);
    f1.i = (s32) v0;
    f0.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f - f1.f;
    fcc = f20.f <= f0.f;
    if (!fcc) goto L_00C5F3DC;
    a0 = s1; v0 = func_0098F4A0(a0);
    if (v0 == 0) goto L_00C5F3AC;
    a0 = (*(volatile s16 *) (u32) (s1 + 20));
    v0 = (s32) 0x44800000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    acc = f0.f + f1.f;
    f1.i = (s32) a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f3.f = (f32) f1.i;
    f1.f = f3.f * f0.f;
    f0.f = acc + f3.f * f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C5F3AC;
    v0 = 0; goto L_00C5F5B8;
L_00C5F4C8:;
    v0 = func_0098ED30(a0);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) goto L_00C5F58C;
    v0 = 1;
    if (v1 == v0) goto L_00C5F58C;
    if (v1 == 0) goto L_00C5F58C;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f13.f = (*(volatile f32 *) (u32) (a2 + 24));
    f0.f = f0.f - f13.f;
    f4.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44000000U;
    f3.i = (s32) v0;
    if (s0 < 0) { v1 = (s32) ((u32) s0 >> 1); goto L_00C5F524; }
    f0.i = (s32) s0;
    f2.f = (f32) f0.i; goto L_00C5F53C;
L_00C5F524:;
    v0 = s0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C5F53C:;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    fcc = f4.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_00C5F5B8; }
    v1 = (*(volatile s32 *) (u32) (s1 + 272));
    v0 = s0 & 0xff;
    a1 = (s32) ((u32) v0 << 9);
    v0 = (s32) 0x640000U;
    v0 = (s32) ((u32) a1 + (u32) v0);
    at = (u64) v0 < (u64) v1;
    if (at != 0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00C5F594; }
L_00C5F584:;
    v0 = 1; goto L_00C5F5B8;
L_00C5F58C:;
    v0 = 0; goto L_00C5F5B8;
L_00C5F594:;
    f12.f = (*(volatile f32 *) (u32) (a2 + 16));
    v0 = 2560;
    a1 = (s32) ((u32) v0 - (u32) a1); v0 = func_00990750(a0, a1, f12.f, f13.f);
    v0 = v0 & 0xff;
    at = v0 < 3;
    if (at != 0) goto L_00C5F584;
    v0 = 0;
L_00C5F5B8:;
    return v0;
}
