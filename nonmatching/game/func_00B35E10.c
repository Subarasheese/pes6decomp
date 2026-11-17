/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00B35E10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;

    a5 = (*(volatile s32 *) (u32) a0);
    a3 = 1;
    a4 = (*(volatile u8 *) (u32) a5);
    { s32 c_ = a4 == a3; v1 = (*(volatile s16 *) (u32) (a5 + 20)); if (c_) goto L_00B35F5C; }
    a3 = 12;
    if (a4 == a3) goto L_00B35F5C;
    at = a4 < 12;
    if (at == 0) { a6 = (*(volatile u8 *) (u32) (a5 + 18)); goto L_00B35ECC; }
    a6 = (*(volatile u8 *) (u32) (a5 + 18));
    a3 = (s32) ((u32) a4 << 2);
    a4 = (s32) 0x5a0000U;
    a4 = (s32) ((u32) a4 + 0x2134U);
    a5 = (s32) ((u32) a6 << 4);
    a6 = (s32) ((u32) a5 - (u32) a6);
    a5 = (s32) ((u32) a6 << 2);
    a5 = (s32) ((u32) a5 - (u32) a6);
    a5 = (s32) ((u32) a5 << 3);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile s16 *) (u32) a3);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    f0.i = (s32) a4;
    a3 = (s32) 0x5a0000U;
    a3 = (s32) ((u32) a3 + 0x2136U);
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) a1) = f0.f;
    a0 = (*(volatile s32 *) (u32) a0);
    a4 = (*(volatile u8 *) (u32) (a0 + 18));
    a0 = (*(volatile u8 *) (u32) a0);
    a1 = (s32) ((u32) a4 << 4);
    a4 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a4 << 2);
    a1 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s16 *) (u32) a0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) a2) = f0.f; goto L_00B35F54;
L_00B35ECC:;
    a3 = (s32) ((u32) a4 << 2);
    a4 = (s32) 0x5a0000U;
    a4 = (s32) ((u32) a4 + 0x2108U);
    a5 = (s32) ((u32) a6 << 4);
    a6 = (s32) ((u32) a5 - (u32) a6);
    a5 = (s32) ((u32) a6 << 2);
    a5 = (s32) ((u32) a5 - (u32) a6);
    a5 = (s32) ((u32) a5 << 3);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile s16 *) (u32) a3);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    f0.i = (s32) a4;
    a3 = (s32) 0x5a0000U;
    a3 = (s32) ((u32) a3 + 0x210aU);
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) a1) = f0.f;
    a0 = (*(volatile s32 *) (u32) a0);
    a4 = (*(volatile u8 *) (u32) (a0 + 18));
    a0 = (*(volatile u8 *) (u32) a0);
    a1 = (s32) ((u32) a4 << 4);
    a4 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a4 << 2);
    a1 = (s32) ((u32) a1 - (u32) a4);
    a1 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s16 *) (u32) a0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) a2) = f0.f;
L_00B35F54:;
    goto L_00B35F88;
L_00B35F5C:;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    v1 = (s32) 0xc63c0000U;
    v1 = v1 | 0x6400;
    f1.i = (s32) v1;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) a1) = f0.f;
    (*(volatile u32 *) (u32) a2) = (u32) 0; goto L_00B35F54;
L_00B35F88:;
    return;
}
