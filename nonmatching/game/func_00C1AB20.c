/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009E1C90(s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
s32 func_00BF6270(void);
s32 func_00BF6280(void);

s32 func_00C1AB20(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    s1 = a1;
    s0 = (s32) 0x590000U;
    a0 = 1;
    s0 = (s32) ((u32) s0 + 0xffffe5b0U);
    v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) goto L_00C1ACF0;
L_00C1AB74:;
    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -12830));
    if (a0 == v1) { a0 = 1; goto L_00C1AB94; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C1AB94:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = (s32) ((u32) v0 + (u32) v1);
L_00C1ABAC:;
    f3.f = (*(volatile f32 *) (u32) (s3 + 232));
    s2 = (*(volatile s32 *) (u32) s2);
    f2.f = (*(volatile f32 *) (u32) (s0 + 232));
    a0 = s1 & 0xffff;
    f1.f = (*(volatile f32 *) (u32) (s3 + 224));
    a1 = 2560;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f22.f = f2.f - f3.f;
    f21.f = f1.f - f0.f;
    f0.i = f22.i ^ (s32) 0x80000000U;
    acc = f0.f * f1.f;
    f20.f = acc - f21.f * f3.f; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    a0 = s1 & 0xffff;
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    a1 = 2560;
    f1.f = (f32) f1.i;
    f23.f = (*(volatile f32 *) (u32) (s2 + 232));
    f24.f = f0.f + f1.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (f32) f0.i;
    f0.f = f23.f + f0.f;
    f5.f = f0.f - f23.f;
    f0.i = f5.i ^ (s32) 0x80000000U;
    f1.f = f2.f - f24.f;
    acc = f0.f * f2.f;
    f4.f = acc - f1.f * f23.f;
    acc = f21.f * f5.f;
    f3.i = (s32) 0;
    f2.f = acc - f1.f * f22.f;
    fcc = f3.f == f2.f;
    if (fcc) { v0 = 1; goto L_00C1AD4C; }
    f0.f = f20.f * f1.f;
    acc = f3.f + f0.f;
    f0.f = f22.f * f4.f;
    f1.f = acc - f4.f * f21.f;
    acc = f3.f + f0.f;
    f0.f = acc - f5.f * f20.f;
    f6.f = f0.f / f2.f;
    f5.f = (*(volatile f32 *) (u32) (s3 + 224));
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    fcc = f0.f <= f5.f;
    { s32 c_ = fcc; f7.f = f1.f / f2.f; if (c_) goto L_00C1AC74; }
    f4.i = f0.i; goto L_00C1AC7C;
L_00C1AC74:;
    f4.i = f5.i;
    f5.i = f0.i;
L_00C1AC7C:;
    f3.f = (*(volatile f32 *) (u32) (s3 + 232));
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    fcc = f0.f <= f3.f;
    if (fcc) { f2.i = f3.i; goto L_00C1AC98; }
    f2.i = f0.i; goto L_00C1AC9C;
L_00C1AC98:;
    f3.i = f0.i;
L_00C1AC9C:;
    v0 = (s32) 0x43c00000U;
    f1.i = (s32) v0;
    f0.f = f1.f + f4.f;
    fcc = f7.f < f0.f;
    if (!fcc) goto L_00C1AD48;
    f0.f = f5.f - f1.f;
    fcc = f7.f <= f0.f;
    if (fcc) goto L_00C1AD48;
    f0.f = f1.f + f2.f;
    fcc = f6.f < f0.f;
    if (!fcc) goto L_00C1AD48;
    f0.f = f3.f - f1.f;
    fcc = f6.f <= f0.f;
    if (fcc) goto L_00C1AD48;
    v0 = 0; goto L_00C1AD4C;
L_00C1ACF0:;
    v0 = func_00BF6280();
    v1 = 2;
    if (v0 != v1) goto L_00C1AB74;
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00C1AD2C; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00C1AD2C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = (s32) ((u32) v0 + (u32) v1); goto L_00C1ABAC;
L_00C1AD48:;
    v0 = 1;
L_00C1AD4C:;
    return v0;
}
