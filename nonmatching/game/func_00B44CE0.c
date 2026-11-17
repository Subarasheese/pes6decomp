/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
s32 func_00BF6260(void);

void func_00B44CE0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s2 = a0;
    v0 = func_00BF6260();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B44D24; }
    v0 = func_00BF6260();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B44D24:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (s0 + 20));
    f12.f = (*(volatile f32 *) (u32) (s0 + 224));
    f15.i = (s32) 0;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    f0.f = f1.f * f12.f;
    fcc = f0.f <= f15.f;
    if (!fcc) { v0 = (s32) 0x46520000U; goto L_00B44DF4; }
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f13.f = (*(volatile f32 *) (u32) (s0 + 232));
    f14.f = f0.f * f1.f; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = v0 & 0xffff;
    v0 = (s32) 0x10000U;
    at = 0x8001;
    v1 = (s32) ((u32) a0 - (u32) v1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xffff;
    at = v0 < at;
    if (at != 0) { v0 = -1; goto L_00B44DA8; }
    v0 = 1;
L_00B44DA8:;
    v0 = (s32) ((u32) v0 << 10);
    a1 = 6400;
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) a0 - (u32) v0);
    s1 = v0 & 0xffff;
    a0 = s1; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    a0 = s1;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    a1 = 6400;
    f1.f = (f32) f1.i;
    f20.f = f0.f + f1.f; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f1.f = (f32) f1.i;
    f21.f = f0.f + f1.f; goto L_00B44EE4;
L_00B44DF4:;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f13.f = (*(volatile f32 *) (u32) (s0 + 232));
    f14.f = f0.f * f1.f; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    s1 = v0 & 0xffff;
    a1 = 1792;
    a0 = s1; v0 = func_00BBB990(a0, a1);
    f1.i = (s32) v0;
    a0 = s1;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    a1 = 1792;
    f1.f = (f32) f1.i;
    f20.f = f0.f + f1.f; v0 = func_00BBB9C0(a0, a1);
    f1.i = (s32) v0;
    a0 = (*(volatile u16 *) (u32) (s0 + 42));
    v1 = s1 & 0xffff;
    at = 0x8001;
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    v0 = (s32) 0x10000U;
    f1.f = (f32) f1.i;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xffff;
    at = v0 < at;
    { s32 c_ = at == 0; f21.f = f0.f + f1.f; if (c_) goto L_00B44E74; }
    v0 = (s32) ((u32) s1 + 0x4000U);
    s1 = v0 & 0xffff; goto L_00B44E7C;
L_00B44E74:;
    v0 = (s32) ((u32) s1 + 0xffffc000U);
    s1 = v0 & 0xffff;
L_00B44E7C:;
    v1 = (*(volatile s16 *) (u32) (s0 + 20));
    v0 = (s32) 0x45f00000U;
    v0 = v0 | 0xc800;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (!fcc) { s0 = 1536; goto L_00B44EB0; }
    s0 = 2048;
L_00B44EB0:;
    a0 = s1;
    a1 = s0; v0 = func_00BBB990(a0, a1);
    f0.i = (s32) v0;
    a0 = s1;
    a1 = s0;
    f0.f = (f32) f0.i;
    f20.f = f20.f + f0.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f21.f = f21.f + f0.f;
L_00B44EE4:;
    a0 = (*(volatile s32 *) (u32) s2);
    f12.i = f20.i;
    f13.i = f21.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile f32 *) (u32) (v1 + 108)) = f20.f;
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile f32 *) (u32) (v1 + 112)) = f21.f;
    return;
}
