/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_002C2690(s32, s32, s32, s32);
s32 func_002C4B50(s32, s32);
s32 func_002C5800(s32);
s32 func_002C5940(s32);
s32 func_00C13280(s32);
s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
s32 func_00C13740(s32, s32);
s32 func_00C137B0(s32);

s32 func_00C5D5B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    s7 = a3;
    s6 = 0;
    s3 = a0;
    s1 = a1;
    { s32 c_ = s3 == v0; s0 = a2; if (c_) goto L_00C5D848; }
    if (s1 == v0) goto L_00C5D848;
    s2 = s0 & 0xff;
    a0 = s1;
    v0 = (s32) s2 >> 5;
    a1 = v0 & 0x1; v0 = func_002C4B50(a0, a1);
    f0.i = (s32) v0;
    a0 = s3;
    f20.f = (f32) f0.i; v0 = func_00C132C0(a0);
    v1 = v0 & 0xff;
    v0 = 15;
    if (v1 == v0) { v0 = s3; goto L_00C5D64C; }
    a0 = s3; v0 = func_00C137B0(a0);
    a0 = v0;
    a1 = 15; v0 = func_00C13740(a0, a1);
L_00C5D64C:;
    at = (u64) s1 < (u64) v0;
    { s32 c_ = at != 0; s5 = v0; if (c_) goto L_00C5D848; }
    fp = (s32) ((u32) sp + 0xb4U);
L_00C5D65C:;
    a0 = s5; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    if (s2 != v0) goto L_00C5D82C;
    a0 = s5; v0 = func_002C5940(a0);
    s4 = v0;
    a0 = s5; v0 = func_002C5800(a0);
    s3 = v0;
    v0 = -1;
    if (s4 == v0) goto L_00C5D82C;
    if (s3 == v0) goto L_00C5D82C;
    a0 = s4; v0 = func_00C13280(a0);
    v0 = (*(volatile u16 *) (u32) (v0 + 2));
    v1 = 312;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a2 = hi;
    a0 = (s32) 0x42ad0000U;
    a1 = a0 | 0x2eeb;
    v1 = (s32) 0x46520000U;
    a0 = v1 | 0x6400;
    (*(volatile u32 *) (u32) fp) = (u32) 0;
    f1.i = (s32) a2;
    v1 = (s32) 0xd20d0000U;
    f0.i = (s32) a1;
    v1 = v1 | 0x20d3;
    f1.f = (f32) f1.i;
    f1.f = f0.f * f1.f;
    f0.i = (s32) a0;
    f0.f = f1.f - f0.f;
    f0.f = f20.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 176)) = f0.f;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) v0 >> 31);
    a1 = hi;
    v1 = (s32) 0x42a70000U;
    a0 = v1 | 0xfec;
    f1.i = (s32) a0;
    v1 = (s32) 0x46080000U;
    v0 = (s32) ((u32) a1 + (u32) v0);
    v1 = v1 | 0x6400;
    v0 = (s32) v0 >> 8;
    a0 = s3;
    v0 = (s32) ((u32) v0 + (u32) a2);
    f2.i = (s32) v0;
    f0.i = (s32) v1;
    f2.f = (f32) f2.i;
    v0 = (s32) ((u32) sp + 0xb8U);
    f1.f = f1.f * f2.f;
    f0.f = f1.f - f0.f;
    f0.f = f20.f * f0.f;
    (*(volatile f32 *) (u32) v0) = f0.f; v0 = func_00C13280(a0);
    v0 = (*(volatile u16 *) (u32) (v0 + 2));
    v1 = 312;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a2 = hi;
    a0 = (s32) 0x42ad0000U;
    a0 = a0 | 0x2eeb;
    v1 = (s32) ((u32) sp + 0xc0U);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    f0.i = (s32) a0;
    f1.i = (s32) a2;
    v1 = (s32) 0x46520000U;
    a1 = v1 | 0x6400;
    f1.f = (f32) f1.i;
    v1 = (s32) 0xd20d0000U;
    a0 = v1 | 0x20d3;
    v1 = (s32) ((u32) sp + 0xbcU);
    f1.f = f0.f * f1.f;
    f0.i = (s32) a1;
    f0.f = f1.f - f0.f;
    f0.f = f20.f * f0.f;
    (*(volatile f32 *) (u32) v1) = f0.f;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a4 = (s32) ((u32) v0 >> 31);
    a2 = hi;
    v1 = (s32) 0x42a70000U;
    a3 = v1 | 0xfec;
    a0 = s4;
    v1 = (s32) 0x46080000U;
    a1 = s3;
    a2 = (s32) ((u32) a2 + (u32) v0);
    v0 = v1 | 0x6400;
    v1 = (s32) a2 >> 8;
    v1 = (s32) ((u32) v1 + (u32) a4);
    a2 = s0;
    f1.i = (s32) v1;
    f0.i = (s32) a3;
    f1.f = (f32) f1.i;
    f1.f = f0.f * f1.f;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    v0 = (s32) ((u32) sp + 0xc4U);
    f0.f = f20.f * f0.f;
    (*(volatile f32 *) (u32) v0) = f0.f; f0.f = func_002C2690(a0, a1, a2, a3);
    v0 = (s32) ((u32) sp + 0xc8U);
    a0 = (s32) ((u32) sp + 0xb0U);
    { u32 t_ = (u32) s7; (*(volatile f32 *) (u32) v0) = f0.f; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    if (v0 == 0) goto L_00C5D82C;
    s6 = 1; goto L_00C5D848;
L_00C5D82C:;
    a0 = s5;
    a1 = 15; v0 = func_00C13740(a0, a1);
    s5 = v0;
    at = (u64) s1 < (u64) s5;
    if (at == 0) goto L_00C5D65C;
L_00C5D848:;
    v0 = s6;
    return v0;
}
