/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_002C1DD0(s32, s32, s32, s32, s32);
s32 func_002C1FD0(s32, s32, s32, s32);
s32 func_002C4B50(s32, s32);
s32 func_002C5800(s32);
s32 func_00C13280(s32);
s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
s32 func_00C13740(s32, s32);

s32 func_00C5D1F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    v1 = -1;
    v0 = a0;
    s2 = a1;
    s1 = a3;
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) a0;
    (*(volatile u8 *) (u32) (sp + 203)) = (u8) a2;
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0; if (c_) goto L_00C5D498; }
    if (s2 == v1) goto L_00C5D498;
    v0 = (*(volatile u8 *) (u32) (sp + 203));
    a0 = s2;
    s5 = v0;
    v0 = (s32) s5 >> 5;
    a1 = v0 & 0x1; v0 = func_002C4B50(a0, a1);
    f0.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) (sp + 204));
    a2 = (*(volatile u8 *) (u32) (sp + 203));
    a1 = s2;
    f20.f = (f32) f0.i;
    a3 = 40; v0 = func_002C1FD0(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; fp = v0; if (c_) goto L_00C5D498; }
    s4 = (s32) ((u32) sp + 0xd4U);
    s6 = (s32) ((u32) sp + 0xd8U);
    s7 = (s32) ((u32) sp + 0xdcU);
L_00C5D290:;
    a0 = (*(volatile s32 *) (u32) (sp + 204));
    a1 = s2;
    a2 = (*(volatile u8 *) (u32) (sp + 203));
    a3 = 40;
    a4 = fp; v0 = func_002C1DD0(a0, a1, a2, a3, a4);
    s0 = v0;
    a0 = s0; v0 = func_002C5800(a0);
    v1 = -1;
    if (s0 == v1) goto L_00C5D498;
    if (v0 == v1) goto L_00C5D498;
    a0 = v0; v0 = func_00C132C0(a0);
    v1 = v0 & 0xff;
    v0 = 11;
    if (v1 == v0) goto L_00C5D2F4;
L_00C5D2E0:;
    fp = (s32) ((u32) fp + 0xffffffffU);
    if (fp != 0) goto L_00C5D290;
    v0 = (*(volatile s32 *) (u32) (sp + 176)); goto L_00C5D49C;
L_00C5D2F4:;
L_00C5D2F8:;
    a0 = s0;
    a1 = 27;
    s3 = s0; v0 = func_00C13740(a0, a1);
    s0 = v0;
    v0 = -1;
    if (s0 == v0) goto L_00C5D2E0;
    a0 = s0; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    if (s5 != v0) goto L_00C5D2E0;
    at = (u64) s2 < (u64) s0;
    if (at != 0) goto L_00C5D2E0;
    a0 = s0; v0 = func_00C13280(a0);
    a0 = s3;
    s3 = (*(volatile u16 *) (u32) (v0 + 2)); v0 = func_00C13280(a0);
    v1 = (*(volatile u16 *) (u32) (v0 + 2));
    v0 = 312;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
    a0 = (s32) 0x42ad0000U;
    a1 = a0 | 0x2eeb;
    f3.i = (s32) a1;
    a0 = (s32) 0x46520000U;
    f0.i = (s32) a2;
    a1 = a0 | 0x6400;
    f0.f = (f32) f0.i;
    a0 = (s32) 0xd20d0000U;
    a5 = a0 | 0x20d3;
    f0.f = f3.f * f0.f;
    f1.i = (s32) a1;
    f0.f = f0.f - f1.f;
    f2.f = f20.f * f0.f;
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a4 = (s32) ((u32) v1 >> 31);
    a3 = hi;
    a2 = (s32) 0x42a70000U;
    a2 = a2 | 0xfec;
    a0 = (s32) 0x46080000U;
    a0 = a0 | 0x6400;
    a1 = s3 & 0xffff;
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (s32) v1 >> 8;
    v1 = (s32) ((u32) v1 + (u32) a4);
    f0.i = (s32) v1;
    f6.i = (s32) a2;
    f0.f = (f32) f0.i;
    f0.f = f6.f * f0.f;
    f5.i = (s32) a0;
    f0.f = f0.f - f5.f;
    f4.f = f20.f * f0.f;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v0); hi = (s32) ((s32) a1 % (s32) v0); lo = q_; }
    v0 = hi;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f0.f = f0.f - f1.f;
    f1.f = f20.f * f0.f;
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    v0 = (s32) 0x3f000000U;
    f0.f = f2.f + f1.f;
    (*(volatile u32 *) (u32) s4) = (u32) 0;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 8;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f3.i = (s32) v1;
    f1.f = f2.f - f1.f;
    f3.f = (f32) f3.i;
    f3.f = f6.f * f3.f;
    f3.f = f3.f - f5.f;
    f2.i = (s32) v0;
    f3.f = f20.f * f3.f;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 208)) = f0.f;
    f0.f = f4.f + f3.f;
    f2.f = f2.f * f0.f;
    f0.f = f4.f - f3.f;
    acc = f0.f * f0.f;
    f12.f = acc + f1.f * f1.f;
    (*(volatile f32 *) (u32) s6) = f2.f; f0.f = func_001CD9E0();
    (*(volatile f32 *) (u32) s7) = f0.f;
    { u32 t_ = (u32) s1; a0 = (s32) ((u32) sp + 0xd0U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00C5D2F8;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
L_00C5D498:;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
L_00C5D49C:;
    return v0;
}
