/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_009909D0(s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00954230(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v0 = 2;
    s1 = a0;
    s0 = 0;
    a1 = (*(volatile s16 *) (u32) (a0 + 20));
    v1 = (*(volatile s32 *) (u32) (a0 + 480));
    f0.i = (s32) a1;
    { s32 c_ = v1 != v0; f20.f = (f32) f0.i; if (c_) goto L_00954268; }
    s0 = 1;
L_00954268:;
    a1 = (*(volatile u16 *) (u32) (s1 + 42));
    a0 = s1;
    a2 = 8192;
    a3 = (s32) 0x1000000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00954308;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_009542B8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009542B8:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x44000000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f3.f = (*(volatile f32 *) (u32) (v1 + 224));
    f1.i = (s32) s0;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.f = (f32) f1.i;
    f3.f = f20.f * f3.f;
    f2.i = (s32) v0;
    acc = f20.f * f0.f;
    f0.f = acc - f2.f * f1.f;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00954308;
    v0 = 0; goto L_00954448;
L_00954308:;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v0 = 0; goto L_00954448; }
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v0 = 0; goto L_00954448; }
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f4.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44000000U;
    f2.i = (s32) s0;
    f3.i = (s32) v0;
    f2.f = (f32) f2.i;
    v0 = (s32) 0x45e00000U;
    v0 = v0 | 0xc800;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    fcc = f4.f <= f0.f;
    if (fcc) { v0 = (s32) ((u32) s0 << 9); goto L_00954384; }
    v0 = 0; goto L_00954448;
L_00954384:;
    v0 = (s32) ((u32) v0 + 0x500U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = s1; v0 = func_009909D0(a0, a1);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_00954448; }
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x537eU);
    v0 = 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) v1);
    if (a0 == v0) goto L_009543E8;
    v0 = 1;
    if (a0 == v0) goto L_009543E8;
    v1 = 3;
    if (a0 == v1) goto L_009543E8;
    if (s0 == 0) { a2 = (*(volatile u8 *) (u32) (s1 + 18)); goto L_009543F0; }
    goto L_0095444C;
L_009543E8:;
    v0 = 0; goto L_00954448;
L_009543F0:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 114));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = v0; v0 = func_00BBB8C0(a0);
    v0 = v0 < 20;
L_00954448:;
L_0095444C:;
    return v0;
}
