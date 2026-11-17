/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3480(s32, s32, s32, s32, f32, f32);

s32 func_00B35C60(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v1 = 1;
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    a1 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = a1 == v1; v0 = (*(volatile s16 *) (u32) (a0 + 20)); if (c_) goto L_00B35D88; }
    v1 = 12;
    if (a1 == v1) goto L_00B35D88;
    at = a1 < 12;
    if (at == 0) { a2 = (*(volatile u8 *) (u32) (a0 + 18)); goto L_00B35CFC; }
    a2 = (*(volatile u8 *) (u32) (a0 + 18));
    a3 = (s32) ((u32) a1 << 2);
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x2134U);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a2 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x2136U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    f0.i = (s32) a1;
    v1 = (*(volatile s16 *) (u32) v1);
    f12.f = (f32) f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    f0.i = (s32) v0;
    f13.f = (f32) f0.i; goto L_00B35D58;
L_00B35CFC:;
    a3 = (s32) ((u32) a1 << 2);
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x2108U);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a2 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x210aU);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    f0.i = (s32) a1;
    v1 = (*(volatile s16 *) (u32) v1);
    f12.f = (f32) f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    f0.i = (s32) v0;
    f13.f = (f32) f0.i;
L_00B35D58:;
    v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = v0 & 0xffff;
    v1 = (s32) 0x10000U;
    v0 = 0x8001;
    a0 = (*(volatile u16 *) (u32) (a0 + 38));
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xffff;
    v0 = v1 < v0; goto L_00B35DA8;
L_00B35D88:;
    f0.i = (s32) v0;
    f13.i = (s32) 0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0xc63c0000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f12.f = f1.f * f0.f; goto L_00B35D58;
L_00B35DA8:;
    return v0;
}
