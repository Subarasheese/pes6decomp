/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A55C0(s32);
s32 func_001A5620(s32);

s32 func_00203FD0(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U); v0 = func_001A55C0(a0);
    if (s0 != 0) { v1 = (s32) 0x46580000U; goto L_0020400C; }
    v1 = (s32) 0x466e0000U;
    v0 = (s32) 0x46240000U;
    v1 = v1 | 0x6400;
    v0 = v0 | 0x6400;
    (*(volatile u32 *) (u32) (gp + -22940)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -22944)) = (u32) v0; goto L_00204020;
L_0020400C:;
    v0 = (s32) 0x460e0000U;
    v1 = v1 | 0x6400;
    v0 = v0 | 0x6400;
    (*(volatile u32 *) (u32) (gp + -22940)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -22944)) = (u32) v0;
L_00204020:;
    f6.f = (*(volatile f32 *) (u32) (sp + 40));
    f0.i = (s32) 0;
    f1.i = f0.i;
    f2.i = f6.i & 0x7FFFFFFF;
    f5.f = (*(volatile f32 *) (u32) (gp + -22944));
    fcc = f2.f <= f5.f;
    if (fcc) { f6.f = (*(volatile f32 *) (u32) (sp + 32)); goto L_002040E4; }
    f1.i = f6.i & 0x7FFFFFFF;
    f1.f = f1.f - f5.f;
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x40800000U;
    f1.i = (s32) v0;
    f1.f = f2.f / f1.f;
    v0 = (s32) 0x447a0000U;
    f2.i = (s32) v0;
    fcc = f1.f <= f2.f;
    if (fcc) { v0 = (s32) 0x447a0000U; goto L_00204084; }
    f1.i = f2.i;
    v0 = (s32) 0x447a0000U;
L_00204084:;
    f2.i = (s32) v0;
    f4.f = f2.f - f1.f;
    f2.i = (s32) 0;
    fcc = f6.f < f2.f;
    if (!fcc) { v0 = 1; goto L_002040A8; }
    v0 = -1;
L_002040A8:;
    f2.i = (s32) v0;
    v1 = (s32) 0x45000000U;
    f3.f = (f32) f2.i;
    v0 = (s32) 0x447a0000U;
    f2.i = (s32) v1;
    f2.f = f2.f + f5.f;
    f2.f = f2.f * f3.f;
    acc = f1.f * f2.f;
    f3.f = acc + f6.f * f4.f;
    f2.i = (s32) v0;
    f2.f = f3.f / f2.f;
    (*(volatile f32 *) (u32) (sp + 40)) = f2.f;
    f6.f = (*(volatile f32 *) (u32) (sp + 32));
L_002040E4:;
    f2.i = f6.i & 0x7FFFFFFF;
    f5.f = (*(volatile f32 *) (u32) (gp + -22940));
    fcc = f2.f <= f5.f;
    if (fcc) { f3.f = f1.f + f0.f; goto L_00204198; }
    f0.i = f6.i & 0x7FFFFFFF;
    f0.f = f0.f - f5.f;
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    f0.f = f2.f / f0.f;
    v0 = (s32) 0x447a0000U;
    f2.i = (s32) v0;
    fcc = f0.f <= f2.f;
    if (fcc) { v0 = (s32) 0x447a0000U; goto L_00204138; }
    f0.i = f2.i;
    v0 = (s32) 0x447a0000U;
L_00204138:;
    f2.i = (s32) v0;
    f4.f = f2.f - f0.f;
    f2.i = (s32) 0;
    fcc = f6.f < f2.f;
    if (!fcc) { v0 = 1; goto L_0020415C; }
    v0 = -1;
L_0020415C:;
    f2.i = (s32) v0;
    v1 = (s32) 0x45000000U;
    f3.f = (f32) f2.i;
    v0 = (s32) 0x447a0000U;
    f2.i = (s32) v1;
    f2.f = f2.f + f5.f;
    f2.f = f2.f * f3.f;
    acc = f0.f * f2.f;
    f3.f = acc + f6.f * f4.f;
    f2.i = (s32) v0;
    f2.f = f3.f / f2.f;
    (*(volatile f32 *) (u32) (sp + 32)) = f2.f;
    f3.f = f1.f + f0.f;
L_00204198:;
    f2.i = (s32) 0;
    fcc = f3.f == f2.f;
    if (fcc) { a0 = (s32) ((u32) sp + 0x20U); goto L_002041D8; }
    fcc = f1.f <= f0.f;
    if (fcc) { f1.i = f0.i; goto L_002041B8; }
L_002041B8:;
    v0 = (s32) 0x40000000U;
    f2.i = (s32) v0;
    f1.f = f1.f / f2.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 36));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    a0 = (s32) ((u32) sp + 0x20U);
L_002041D8:;
    v0 = func_001A5620(a0);
    return v0;
}
