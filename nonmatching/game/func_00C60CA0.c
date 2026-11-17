/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0090B980(s64, s64, s64, s64);
s64 func_00990590(s64, s64, s64, s64, s64);
s64 func_00BBB8C0(s64);

s64 func_00C60CA0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    s3 = a0;
    v0 = (*(volatile u8 *) (u32) (a0 + 478));
    s0 = a1 & 0xff;
    { s32 c_ = v0 != s0; s1 = 0; if (c_) goto L_00C60CD0; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C60CD0:;
    v0 = 3;
    if (s0 == v0) goto L_00C60CF0;
    v0 = 2;
    if (s0 == v0) goto L_00C60CF0;
    v0 = 0; goto L_00C60F54;
L_00C60CF0:;
    a0 = s3;
    s2 = (s64) ((u64) 0 + (u64) (s64) 255); v0 = func_0090B980(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 7;
    if (v1 == v0) goto L_00C60DB4;
    v0 = 5;
    if (v1 == v0) goto L_00C60DB4;
    v0 = 6;
    if (v1 == v0) goto L_00C60DB4;
    v0 = 3;
    if (v1 == v0) goto L_00C60D70;
    v0 = 2;
    if (v1 == v0) goto L_00C60D70;
    v0 = 1;
    if (v1 == v0) goto L_00C60D70;
    v0 = 4;
    if (v1 == v0) goto L_00C60DF4;
    if (v1 == 0) goto L_00C60DF4;
    v0 = 255;
    if (v1 == v0) goto L_00C60DF4;
    v1 = s2 & 0xff; goto L_00C60DF8;
L_00C60D70:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00C60D88;
    if (s1 == 0) goto L_00C60DF4;
L_00C60D88:;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (s3 + 232));
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { s2 = 0; goto L_00C60DF4; }
    s2 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00C60DF4;
L_00C60DB4:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00C60DCC;
    if (s1 == 0) goto L_00C60DF4;
L_00C60DCC:;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (s3 + 232));
    f1.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.i = (s32) 0;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { s2 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00C60DF4; }
    s2 = 0;
L_00C60DF4:;
    v1 = s2 & 0xff;
L_00C60DF8:;
    v0 = 1;
    if (v1 == v0) { f1.f = (*(volatile f32 *) (u32) (s3 + 232)); goto L_00C60E5C; }
    if (v1 == 0) goto L_00C60E14;
    goto L_00C60F50;
L_00C60E14:;
    v1 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (s3 + 232));
    f1.f = (*(volatile f32 *) (u32) (v1 + 21284));
    f0.i = (s32) 0;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 2; goto L_00C60E4C; }
    v1 = 3;
    if (s0 != v1) goto L_00C60F50;
    goto L_00C60F58;
L_00C60E4C:;
    if (s0 != v1) goto L_00C60F50;
    goto L_00C60F54;
L_00C60E5C:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C60E74;
    v0 = -1;
L_00C60E74:;
    v1 = (s32) ((u32) 0 - (u32) v0);
    a4 = 2;
    a0 = (s32) ((u32) v1 << 14);
    v0 = s1 & 0xff;
    v1 = (s32) ((u32) v0 << 10);
    a1 = a0 & 0xffff;
    v0 = 8192;
    a0 = s3;
    v0 = (s32) ((u32) v0 - (u32) v1);
    a2 = v0 & 0xffff;
    v0 = (s32) 0x48a0000U;
    a3 = v0 | 0xa670; v0 = func_00990590(a0, a1, a2, a3, a4);
    if (v0 != 0) { v0 = 0; goto L_00C60F54; }
    f4.f = (*(volatile f32 *) (u32) (s3 + 232));
    f5.i = f4.i & 0x7FFFFFFF;
    v0 = (s32) 0x44000000U;
    f3.i = (s32) v0;
    if (s1 < 0) { v1 = (s32) ((u32) s1 >> 1); goto L_00C60ED4; }
    f0.i = (s32) s1;
    f2.f = (f32) f0.i; goto L_00C60EEC;
L_00C60ED4:;
    v0 = s1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C60EEC:;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    f1.i = (s32) 0;
    acc = f1.f + f0.f;
    f0.f = acc + f3.f * f2.f;
    fcc = f5.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_00C60F54; }
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f0.f = f4.f * f0.f;
    fcc = f0.f < f1.f;
    if (!fcc) { v0 = 3; goto L_00C60F40; }
    v0 = 2;
    if (s0 != v0) goto L_00C60F50;
    v0 = 1; goto L_00C60F54;
L_00C60F40:;
    if (s0 != v0) goto L_00C60F50;
    v0 = 1; goto L_00C60F54;
L_00C60F50:;
    v0 = 0;
L_00C60F54:;
L_00C60F58:;
    return v0;
}
