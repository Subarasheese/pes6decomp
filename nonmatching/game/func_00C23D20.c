/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00905220(s64, s64, s64, s64);
void func_00984160(s64, f32, f32);
s64 func_009B33A0(s64, s64, s64);

s64 func_00C23D20(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    f32 acc = 0;

    s3 = a0;
    s2 = a1;
    v0 = (*(volatile u8 *) (u32) (a0 + 469));
    { s32 c_ = v0 == 0; s0 = 0; if (c_) goto L_00C23D64; }
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s2 + 40));
    if (v1 == v0) goto L_00C23D64;
    v0 = 1; goto L_00C23EF0;
L_00C23D64:;
    v1 = (*(volatile s32 *) (u32) (s2 + 40));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00C23D80; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C23D80:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a1 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x45000000U;
    s1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    v1 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (a0 + 21284));
    f13.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.i = (s32) 0;
    f3.i = (s32) v0;
    acc = f0.f + f1.f;
    v0 = (s32) 0xcb0000U;
    f12.f = acc - f3.f * f2.f;
    a0 = s3;
    (*(volatile f32 *) (u32) (v1 + 21276)) = f12.f;
    (*(volatile f32 *) (u32) (v0 + 21280)) = f13.f; func_00984160(a0, f12.f, f13.f);
    v0 = (*(volatile u8 *) (u32) (s3 + 36));
    a0 = 1;
    if (v0 != a0) goto L_00C23E68;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v1 < 3;
    if (at != 0) goto L_00C23DFC;
    s0 = a0 & 0xff;
L_00C23DFC:;
    v0 = 2;
    if (v1 != v0) goto L_00C23E68;
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
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
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v0 = v0 < 80;
    if (v0 != 0) goto L_00C23E68;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C23E68:;
    if (s0 != 0) goto L_00C23E90;
L_00C23E70:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    at = (u64) v0 < (u64) v1;
    if (at != 0) { a0 = s1; goto L_00C23EDC; }
L_00C23E88:;
    v0 = 3; goto L_00C23EF0;
L_00C23E90:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 21276));
    f0.f = (*(volatile f32 *) (u32) (v0 + 21280));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x40000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00C23E70;
    v0 = (*(volatile s32 *) (u32) (s3 + 176));
    v0 = v0 | 0x800;
    (*(volatile u32 *) (u32) (s3 + 176)) = (u32) v0; goto L_00C23E70;
L_00C23EDC:;
    v0 = func_00905220(a0, a1, a2, a3);
    if (v0 != 0) goto L_00C23E88;
    v0 = 1;
L_00C23EF0:;
    return v0;
}
