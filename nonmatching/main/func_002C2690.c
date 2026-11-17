/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00C13110(s32, s32, s32, s32);
s32 func_00C13280(s32, s32, s32, s32);
s32 func_00C132B0(s32, s32, s32, s32);
s32 func_00C132C0(s32, s32, s32, s32);
s32 func_00C13510(s32, s32, s32, s32);

f32 func_002C2690(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    v0 = -1;
    s6 = a2;
    s3 = a1;
    f20.i = (s32) 0;
    { s32 c_ = a0 == v0; s2 = a0; if (c_) goto L_002C28C8; }
    if (s3 == v0) goto L_002C28C8;
    s0 = s6 & 0xff;
    v0 = 255;
    if (s0 == v0) goto L_002C28C8;
    v0 = (s32) 0xcb0000U;
    s5 = (*(volatile s32 *) (u32) (v0 + 13472));
L_002C26F0:;
    a2 = (s32) 0x2c0000U;
    a0 = s2;
    a1 = s3;
    a2 = (s32) ((u32) a2 + 0x2900U);
    (*(volatile u8 *) (u32) (gp + -32132)) = (u8) s6; v0 = func_00C13110(a0, a1, a2, a3);
    s2 = v0;
    v0 = -1;
    if (s2 == v0) goto L_002C28C8;
    a0 = s2; v0 = func_00C132C0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 27;
    if (v1 == v0) goto L_002C2758;
    v0 = 15;
    if (v1 == v0) goto L_002C2748;
    goto L_002C28C8;
L_002C2748:;
    a0 = s2; v0 = func_00C13280(a0, a1, a2, a3);
    s1 = (*(volatile u16 *) (u32) (v0 + 2)); goto L_002C2768;
L_002C2758:;
    a0 = s2; v0 = func_00C13280(a0, a1, a2, a3);
    s1 = (*(volatile u16 *) (u32) (v0 + 2));
L_002C2768:;
    a2 = (s32) 0xc10000U;
    a0 = s2;
    a1 = s3;
    a2 = (s32) ((u32) a2 + 0x2a40U); v0 = func_00C13110(a0, a1, a2, a3);
    a1 = (s32) 0xcb0000U;
    a0 = s2;
    s4 = v0;
    a1 = (s32) ((u32) a1 + 0x3498U);
    a2 = s5; v0 = func_00C13510(a0, a1, a2, a3);
    s2 = v0;
    at = (u64) s2 < (u64) s3;
    if (at == 0) goto L_002C28C8;
    at = (u64) s2 < (u64) s4;
    if (at == 0) goto L_002C26F0;
    a0 = s2; v0 = func_00C132B0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_002C26F0;
    a0 = s2; v0 = func_00C13280(a0, a1, a2, a3);
    s4 = (*(volatile u16 *) (u32) (v0 + 2));
    a2 = 312;
    v0 = s1 & 0xffff;
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) a2); hi = (s32) ((s32) s4 % (s32) a2); lo = q_; }
    a1 = hi;
    v1 = (s32) 0x42ad0000U;
    a0 = v1 | 0x2eeb;
    v1 = (s32) 0x46520000U;
    f0.i = (s32) a1;
    v1 = v1 | 0x6400;
    f3.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f2.i = (s32) v1;
    f1.f = f0.f - f2.f;
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a2); hi = (s32) ((s32) v0 % (s32) a2); lo = q_; }
    a0 = hi;
    v1 = (s32) 0xd20d0000U;
    a3 = v1 | 0x20d3;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f0.f = f0.f - f2.f;
    f4.f = f1.f - f0.f;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) s4 >> 31);
    a1 = hi;
    v1 = (s32) 0x42a70000U;
    a0 = v1 | 0xfec;
    f3.i = (s32) a0;
    v1 = (s32) 0x46080000U;
    v1 = v1 | 0x6400;
    a0 = (s32) ((u32) a1 + (u32) s4);
    a0 = (s32) a0 >> 8;
    a0 = (s32) ((u32) a0 + (u32) a2);
    f0.i = (s32) a0;
    f2.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f1.f = f0.f - f2.f;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v0 >> 31);
    v1 = hi;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) v0 >> 8;
    v0 = (s32) ((u32) v0 + (u32) a0);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f0.f = f0.f - f2.f;
    f0.f = f1.f - f0.f;
    acc = f0.f * f0.f;
    f12.f = acc + f4.f * f4.f; f0.f = func_001CD9E0();
    f20.f = f20.f + f0.f;
    s1 = s4 & 0xffff; goto L_002C2768;
L_002C28C8:;
    v0 = (s32) 0x43800000U;
    f0.i = (s32) v0;
    f0.f = f20.f / f0.f;
    return f0.f;
}
