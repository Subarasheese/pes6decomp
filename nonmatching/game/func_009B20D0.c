/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_009B20D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f9 = { 0 };
    volatile union { f32 f; s32 i; } f10 = { 0 };
    volatile union { f32 f; s32 i; } f11 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f4.f = (*(volatile f32 *) (u32) (sp + 4));
    a3 = 1;
    f5.f = (*(volatile f32 *) (u32) (sp + 8));
    f9.f = (*(volatile f32 *) (u32) (v1 + 32));
    f10.f = (*(volatile f32 *) (u32) (v1 + 36));
    f11.f = (*(volatile f32 *) (u32) (v1 + 40));
    f6.f = (*(volatile f32 *) (u32) (v1 + 16));
    f7.f = (*(volatile f32 *) (u32) (v1 + 20));
    f8.f = (*(volatile f32 *) (u32) (v1 + 24));
    v1 = (s32) 0x46520000U;
    a1 = (s32) 0x43000000U;
    v1 = v1 | 0x6400;
    a2 = 128;
    f0.i = (s32) v1;
    f2.i = (s32) a1;
L_009B2114:;
    a1 = (s32) ((u32) a2 - (u32) a3);
    f1.i = (s32) a3;
    f3.i = (s32) a1;
    f1.f = (f32) f1.i;
    f3.f = (f32) f3.i;
    acc = f6.f * f1.f;
    f1.f = acc + f9.f * f3.f;
    f3.f = f1.f / f2.f;
    f1.i = (s32) f3.f;
    v1 = f1.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_009B214C; }
L_009B214C:;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009B2184;
    a3 = (s32) ((u32) a3 + 0x1U);
    at = a3 < 129;
    if (at != 0) goto L_009B2114;
L_009B2174:;
    (*(volatile f32 *) (u32) a0) = f3.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f4.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f5.f; goto L_009B21D4;
L_009B2184:;
    f0.i = (s32) a3;
    v1 = (s32) 0x43000000U;
    f1.i = (s32) a1;
    f0.f = (f32) f0.i;
    f1.f = (f32) f1.i;
    acc = f7.f * f0.f;
    f2.f = acc + f10.f * f1.f;
    acc = f8.f * f0.f;
    f0.f = acc + f11.f * f1.f;
    f1.i = (s32) v1;
    f4.f = f2.f / f1.f;
    f5.f = f0.f / f1.f;
    goto L_009B2174;
L_009B21D4:;
    return;
}
