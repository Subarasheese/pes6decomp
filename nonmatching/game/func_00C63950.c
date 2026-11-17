/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00990750(s64, s64, f32, f32);

s64 func_00C63950(s64 a0, s64 a1, s64 a2, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    f32 acc = 0;

    a2 = a1 & 0xff;
    v0 = (*(volatile u8 *) (u32) (a0 + 478));
    { s32 c_ = v0 != a2; v1 = 0; if (c_) goto L_00C6396C; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C6396C:;
    v0 = 2;
    if (a2 == v0) { a2 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00C63B58; }
    v0 = 3;
    if (a2 == v0) { a1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00C63AB4; }
    v0 = 1;
    if (a2 == v0) { v0 = (*(volatile u8 *) (u32) (a0 + 16)); goto L_00C639DC; }
    a1 = 4;
    if (a2 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 224)); goto L_00C639A4; }
    v0 = 0; goto L_00C63BBC;
L_00C639A4:;
    v1 = v1 & 0xff;
    a0 = (s32) ((u32) v1 << 9);
    v1 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 21284));
    v1 = (s32) ((u32) a0 + 0xb00U);
    f0.i = (s32) v1;
    f1.f = f2.f * f1.f;
    f0.f = (f32) f0.i;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C63BB8;
    goto L_00C63BC0;
L_00C639DC:;
    v0 = v0 < 15;
    if (v0 != 0) goto L_00C63A30;
    v0 = (s32) 0xcb0000U;
    a1 = v1 & 0xff;
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    v0 = (s32) ((u32) a1 << 9);
    f0.i = (s32) v0;
    f1.f = f2.f * f1.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (f32) f0.i;
    f1.f = f1.f - f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = f2.f * f0.f;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00C63A30;
    v0 = 0; goto L_00C63BBC;
L_00C63A30:;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (a2 + 24));
    f1.f = f1.f - f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C63A54; }
    v0 = -1;
L_00C63A54:;
    a1 = (s32) ((u32) v0 << 11);
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    f0.i = (s32) a1;
    v0 = v1 & 0xff;
    v0 = (s32) ((u32) v0 << 9);
    v1 = (s32) 0x45000000U;
    f0.f = (f32) f0.i;
    a1 = (s32) ((u32) v0 + 0x800U);
    v0 = (s32) 0xcb0000U;
    a0 = a0 ^ 0x1;
    a0 = a0 & 0xff;
    f13.f = f2.f + f0.f;
    f1.f = (*(volatile f32 *) (u32) (a2 + 16));
    f2.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f3.i = (s32) v1;
    acc = f0.f + f1.f;
    f12.f = acc + f3.f * f2.f; v0 = func_00990750(a0, a1, f12.f, f13.f);
    v0 = v0 & 0xff;
    if (v0 <= 0) goto L_00C63BB8;
    v0 = 1; goto L_00C63BBC;
L_00C63AB4:;
    f4.f = (*(volatile f32 *) (u32) (a1 + 16));
    f1.i = f4.i & 0x7FFFFFFF;
    v0 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f5.f = (*(volatile f32 *) (u32) (a1 + 24));
    v0 = (s32) 0x41200000U;
    f0.i = (s32) v0;
    f2.f = f1.f / f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.i = (s32) 0;
    acc = f1.f + f4.f;
    f0.f = f0.f - f5.f;
    fcc = f0.f < f1.f;
    { s32 c_ = !fcc; f12.f = acc - f3.f * f2.f; if (c_) goto L_00C63B00; }
    a2 = -1; goto L_00C63B04;
L_00C63B00:;
    a2 = 1;
L_00C63B04:;
    v0 = v1 & 0xff;
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v0 << 9);
    a1 = (s32) ((u32) a1 << 1);
    v0 = 2048;
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 8);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f13.f = f5.f + f0.f; v0 = func_00990750(a0, a1, f12.f, f13.f);
    v0 = v0 & 0xff;
    at = v0 < 2;
    if (at == 0) goto L_00C63BB8;
    v0 = 1; goto L_00C63BBC;
L_00C63B58:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (a2 + 24));
    f1.f = f1.f - f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C63B78; }
    v0 = -1;
L_00C63B78:;
    a1 = (s32) ((u32) v0 << 11);
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    f0.i = (s32) a1;
    v0 = v1 & 0xff;
    v1 = (s32) ((u32) v0 << 9);
    f0.f = (f32) f0.i;
    v0 = 1536;
    a1 = (s32) ((u32) v0 - (u32) v1);
    f12.f = (*(volatile f32 *) (u32) (a2 + 16));
    f13.f = f2.f + f0.f; v0 = func_00990750(a0, a1, f12.f, f13.f);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00C63BB8;
    v0 = 1; goto L_00C63BBC;
L_00C63BB8:;
    v0 = 0;
L_00C63BBC:;
L_00C63BC0:;
    return v0;
}
