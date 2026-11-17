/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002871C0(s32);

s32 func_009A7690(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s3 = (s32) ((u32) sp + 0xb8U);
    s2 = a0;
    s1 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (a1 + 8));
    a0 = (s32) ((u32) sp + 0x90U);
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    s1 = (s32) ((u32) s1 + 0x7730U);
    f0.f = (*(volatile f32 *) (u32) a1);
    s0 = 0;
    (*(volatile f32 *) (u32) s3) = f2.f;
    (*(volatile f32 *) (u32) (sp + 180)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 176)) = f0.f; func_002871C0(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 176)); goto L_009A7880; }
L_009A76F4:;
    v0 = (s32) 0x46ea0000U;
    a3 = 0;
    a2 = (s32) ((u32) sp + 0x50U);
    a1 = s2;
    v1 = 0xffff;
    a0 = v0 | 0x6000;
L_009A770C:;
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    a3 = (s32) ((u32) a3 + 0x8U);
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    v0 = a3 < 16;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v1;
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 4)) = (u16) v1;
    (*(volatile u32 *) (u32) (a2 + 12)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 6)) = (u16) v1;
    (*(volatile u32 *) (u32) (a2 + 16)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 8)) = (u16) v1;
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 10)) = (u16) v1;
    (*(volatile u32 *) (u32) (a2 + 24)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 12)) = (u16) v1;
    (*(volatile u32 *) (u32) (a2 + 28)) = (u32) a0;
    (*(volatile u16 *) (u32) (a1 + 14)) = (u16) v1;
    a2 = (s32) ((u32) a2 + 0x20U);
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x10U); if (c_) goto L_009A770C; }
    v0 = (s32) ((u32) sp + 0xb8U);
    v1 = (s32) ((u32) sp + 0xb4U);
    f4.f = (*(volatile f32 *) (u32) v0);
    a4 = 0;
    f5.f = (*(volatile f32 *) (u32) v1);
    a3 = (s32) ((u32) sp + 0xa4U);
    f6.f = (*(volatile f32 *) (u32) (sp + 176));
    a2 = (s32) ((u32) sp + 0xa8U);
    v0 = (s32) 0x3ca30000U;
    v0 = v0 | 0xd70a;
    v1 = 1;
    f3.i = (s32) v0;
L_009A7790:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 120));
    a5 = 0;
    f2.f = (*(volatile f32 *) (u32) (s1 + 116));
    f0.f = (*(volatile f32 *) (u32) (s1 + 124));
    f1.f = f1.f - f5.f;
    f1.f = f1.f * f3.f;
    f2.f = f2.f - f6.f;
    f0.f = f0.f - f4.f;
    f2.f = f2.f * f3.f;
    f0.f = f0.f * f3.f;
    acc = f1.f * f1.f;
    (*(volatile f32 *) (u32) a3) = f1.f;
    acc = acc + f2.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 160)) = f2.f;
    (*(volatile f32 *) (u32) a2) = f0.f;
    f1.f = acc + f0.f * f0.f;
L_009A77D0:;
    v0 = (s32) ((u32) a5 + (u32) s0);
    { s32 c_ = v0 >= 0; a1 = v0 & 0xf; if (c_) goto L_009A77E8; }
    if (a1 == 0) goto L_009A77E8;
    a1 = (s32) ((u32) a1 + 0xfffffff0U);
L_009A77E8:;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    a0 = (s32) ((u32) a0 + 0x50U);
    f0.f = (*(volatile f32 *) (u32) a0);
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; v0 = v1; if (c_) goto L_009A7808; }
    v0 = 0;
L_009A7808:;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_009A7830;
    v0 = (s32) ((u32) a1 << 1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile f32 *) (u32) a0) = f1.f;
    (*(volatile u16 *) (u32) v0) = (u16) a4; goto L_009A7840;
L_009A7830:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 16;
    if (v0 != 0) goto L_009A77D0;
L_009A7840:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 239;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x20U); if (c_) goto L_009A7790; }
    v0 = 0;
    a0 = 0xffff;
L_009A7858:;
    v1 = (*(volatile u16 *) (u32) s2);
    if (v1 != a0) { v0 = (s32) ((u32) v0 + 0x1U); goto L_009A786C; }
    goto L_009A78A8;
L_009A786C:;
    v1 = v0 < 16;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_009A7858; }
    goto L_009A78A4;
L_009A7880:;
    v0 = (s32) 0xbf800000U;
    f0.f = (*(volatile f32 *) (u32) s3);
    f2.i = (s32) v0;
    f1.f = f1.f * f2.f;
    f0.f = f0.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 176)) = f1.f;
    (*(volatile f32 *) (u32) s3) = f0.f; goto L_009A76F4;
L_009A78A4:;
L_009A78A8:;
    return v0;
}
