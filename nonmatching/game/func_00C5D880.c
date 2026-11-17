/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002C1DD0(s32, s32, s32, s32, s32);
s32 func_002C1FD0(s32, s32, s32, s32);
s32 func_002C4B50(s32, s32);
s32 func_00C13280(s32);
s32 func_00C132B0(s32);
s32 func_00C13640(s32, s32, s32);

s32 func_00C5D880(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    s6 = a3;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    v1 = s3 & 0xff;
    v1 = (s32) v1 >> 5;
    s2 = 0;
    { s32 c_ = s5 == v0; s0 = v1 & 0x1; if (c_) goto L_00C5DAB8; }
    if (s4 == v0) goto L_00C5DAB8;
    a0 = s4;
    a1 = s0; v0 = func_002C4B50(a0, a1);
    f0.i = (s32) v0;
    a0 = s5;
    a1 = s4;
    a2 = s3;
    f20.f = (f32) f0.i;
    a3 = 26; v0 = func_002C1FD0(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; s1 = v0; if (c_) goto L_00C5DAB8; }
    v0 = (s32) 0xcb0000U;
    fp = s0 & 0xff;
    s7 = (*(volatile s32 *) (u32) (v0 + 13416));
L_00C5D91C:;
    a0 = s5;
    a1 = s4;
    a2 = s3;
    a3 = 26;
    a4 = s1; v0 = func_002C1DD0(a0, a1, a2, a3, a4);
    s0 = v0;
    v0 = -1;
    if (s0 == v0) goto L_00C5DAA8;
    a1 = (s32) 0xcb0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0x3450U);
    a2 = s7; v0 = func_00C13640(a0, a1, a2);
    v1 = -1;
    if (v0 == v1) goto L_00C5DAA8;
    at = (u64) s4 < (u64) v0;
    if (at != 0) goto L_00C5DAA8;
    a0 = v0; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) v0 >> 5;
    v0 = v0 & 0x1;
    if (fp != v0) goto L_00C5DAA8;
    a0 = s0; v0 = func_00C13280(a0);
    a0 = (*(volatile u8 *) (u32) (v0 + 5));
    v1 = a0 & 0x10;
    { s32 c_ = v1 != 0; a1 = 1; if (c_) goto L_00C5D9B8; }
    v1 = a0 & 0x20;
    if (v1 != 0) goto L_00C5D9B8;
    a1 = 0;
L_00C5D9B8:;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) a1;
    v1 = (*(volatile u8 *) (u32) (v0 + 5));
    a0 = 312;
    v1 = v1 & 0x3;
    v1 = v1 ^ 0x3;
    a1 = (u64) v1 < (u64) (s64) 1;
    v1 = (s32) ((u32) sp + 0xb4U);
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    v1 = (*(volatile u8 *) (u32) (v0 + 5));
    v1 = v1 & 0x3;
    v1 = v1 ^ 0x2;
    a1 = (u64) v1 < (u64) (s64) 1;
    v1 = (s32) ((u32) sp + 0xb8U);
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    v0 = (*(volatile u16 *) (u32) (v0 + 2));
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
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
    a2 = (s32) ((u32) v0 >> 31);
    a1 = hi;
    v1 = (s32) 0x42a70000U;
    a0 = v1 | 0xfec;
    f1.i = (s32) a0;
    v1 = (s32) 0x46080000U;
    v0 = (s32) ((u32) a1 + (u32) v0);
    v1 = v1 | 0x6400;
    v0 = (s32) v0 >> 8;
    a0 = (s32) ((u32) sp + 0xb0U);
    v0 = (s32) ((u32) v0 + (u32) a2);
    f2.i = (s32) v0;
    f0.i = (s32) v1;
    f2.f = (f32) f2.i;
    v0 = (s32) ((u32) sp + 0xc4U);
    f1.f = f1.f * f2.f;
    f0.f = f1.f - f0.f;
    f0.f = f20.f * f0.f;
    { u32 t_ = (u32) s6; (*(volatile f32 *) (u32) v0) = f0.f; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s2 = v0;
    if (s2 != 0) goto L_00C5DAB8;
L_00C5DAA8:;
    s1 = (s32) ((u32) s1 + 0xffffffffU);
    if (s1 != 0) goto L_00C5D91C;
L_00C5DAB8:;
    v0 = s2;
    return v0;
}
