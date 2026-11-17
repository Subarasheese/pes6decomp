/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002C4B50(s32, s32);
s32 func_00C13280(s32);
void func_00C22390(s32, s32);

void func_00C582D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    a0 = s4;
    v0 = func_00C13280(a0);
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    s2 = (s32) ((u32) sp + 0x7aU);
    a0 = 16;
    s1 = (s32) ((u32) sp + 0x7bU);
    s0 = (s32) ((u32) sp + 0x7cU);
    v1 = (s32) 0xc0a00000U;
    s3 = v0;
    a1 = (s32) a1 >> 5;
    a1 = a1 & 0x1;
    (*(volatile u8 *) (u32) s2) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    (*(volatile u8 *) (u32) (sp + 120)) = (u8) a0;
    a0 = a1 & 0x1f;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u8 *) (u32) s1) = (u8) a0;
    v0 = (*(volatile u8 *) (u32) (v0 + 5));
    v0 = v0 & 0x6;
    if (v0 != 0) { f1.f = (*(volatile f32 *) (u32) s0); goto L_00C58380; }
L_00C5834C:;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    v0 = v0 & 0x30;
    if (v0 != 0) { f1.f = (*(volatile f32 *) (u32) s0); goto L_00C58398; }
L_00C5835C:;
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x78U); func_00C22390(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    v1 = 255;
    if (a0 != v1) { v0 = (s32) a0 >> 5; goto L_00C583B0; }
L_00C58378:;
    goto L_00C58534;
L_00C58380:;
    v0 = (s32) 0x41700000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_00C5834C;
L_00C58398:;
    v0 = (s32) 0x41700000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_00C5835C;
L_00C583B0:;
    v1 = 17;
    v0 = v0 & 0x1;
    a0 = s4;
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    a2 = (*(volatile u8 *) (u32) (s3 + 4));
    v0 = (s32) 0x40400000U;
    a1 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) (sp + 120)) = (u8) v1;
    v1 = a2 & 0x1f;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    (*(volatile u8 *) (u32) s1) = (u8) v1; v0 = func_002C4B50(a0, a1);
    a2 = (*(volatile u16 *) (u32) (s3 + 2));
    f0.i = (s32) v0;
    v0 = 312;
    f3.f = (f32) f0.i;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) 0x42ad0000U;
    v1 = v0 | 0x2eeb;
    f1.i = (s32) v1;
    v0 = (s32) 0x46520000U;
    f2.i = (s32) a0;
    v1 = v0 | 0x6400;
    f2.f = (f32) f2.i;
    v0 = (s32) 0xd20d0000U;
    v0 = v0 | 0x20d3;
    f1.f = f1.f * f2.f;
    f0.i = (s32) v1;
    f0.f = f1.f - f0.f;
    f4.f = f3.f * f0.f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    v0 = (s32) 0x42a70000U;
    v1 = v0 | 0xfec;
    f1.i = (s32) v1;
    v0 = (s32) 0x46080000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) a0 >> 8;
    v1 = v0 | 0x6400;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) 0x46100000U;
    f2.i = (s32) a0;
    v0 = v0 | 0x6400;
    f0.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    f1.f = f1.f - f0.f;
    f0.i = (s32) v0;
    fcc = f4.f < f0.f;
    if (fcc) goto L_00C584DC;
    f1.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C584DC;
    f1.f = (*(volatile f32 *) (u32) s0);
    v0 = (s32) 0x41700000U;
    f0.i = (s32) v0;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
L_00C584C8:;
    a0 = s5;
    a1 = (s32) ((u32) sp + 0x78U); func_00C22390(a0, a1);
    goto L_00C58378;
L_00C584DC:;
    f1.i = f4.i & 0x7FFFFFFF;
    v0 = (s32) 0x46520000U;
    v1 = v0 | 0x6400;
    f0.i = (s32) v1;
    v0 = (s32) 0x41400000U;
    f2.i = (s32) v0;
    f3.f = f1.f / f0.f;
    f1.f = (*(volatile f32 *) (u32) s0);
    f0.i = (s32) 0;
    fcc = f4.f <= f0.f;
    acc = f0.f + f1.f;
    f1.f = acc + f2.f * f3.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) s0) = f1.f; if (c_) goto L_00C584C8; }
    v0 = (s32) 0x3f8c0000U;
    v0 = v0 | 0xcccd;
    f0.i = (s32) v0;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_00C584C8;
L_00C58534:;
    return;
}
