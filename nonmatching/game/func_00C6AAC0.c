/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Math_Atan2Fixed(s32, s32, s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
f32 sqrtf(f32);

void func_00C6AAC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    v1 = (*(volatile u16 *) (u32) a0);
    v0 = (*(volatile u16 *) (u32) a1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    { s32 c_ = v0 <= 0; s0 = 0; if (c_) goto L_00C6AB14; }
    at = 0x8001; goto L_00C6AB1C;
L_00C6AB14:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    at = 0x8001;
L_00C6AB1C:;
    at = v0 < at;
    if (at == 0) { v0 = (s32) ((u32) v1 + 0x7fffU); goto L_00C6ABFC; }
L_00C6AB28:;
    v1 = (*(volatile u16 *) (u32) s4);
    v0 = (*(volatile s32 *) (u32) s3);
    a0 = (*(volatile u16 *) (u32) s5);
    v1 = (s32) ((u32) v1 + 0xffffc000U);
    at = v0 < 12288;
    v1 = (s32) ((u32) a0 - (u32) v1);
    { s32 c_ = at == 0; s1 = v1 & 0xffff; if (c_) goto L_00C6AC1C; }
L_00C6AB48:;
    a1 = (*(volatile s32 *) (u32) s3);
    a0 = s1; v0 = func_00BBB990(a0, a1);
    f0.i = (s32) v0;
    a1 = (*(volatile s32 *) (u32) s3);
    a0 = s1;
    f21.f = (f32) f0.i; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    a1 = (*(volatile s32 *) (u32) s3);
    a0 = s1;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x3f190000U;
    v0 = v0 | 0x999a;
    f0.i = (s32) v0;
    f20.f = f0.f * f1.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = f21.i ^ (s32) 0x80000000U;
    v0 = (s32) 0x43200000U;
    f0.i = (s32) f0.f;
    f1.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) s2);
    f3.i = (s32) v0;
    acc = f1.f + f20.f;
    a1 = f0.i;
    f20.f = acc + f3.f * f2.f;
    f0.i = f20.i ^ (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    v0 = Pes6Math_Atan2Fixed(a0, a1, a2, a3);
    { s32 c_ = s0 != 0; a1 = v0 & 0xffff; if (c_) goto L_00C6AC54; }
L_00C6ABCC:;
    acc = f20.f * f20.f;
    a0 = (*(volatile u16 *) (u32) s4);
    f0.f = acc + f21.f * f21.f;
    v1 = a1 & 0xffff;
    f0.f = sqrtf(f0.f);
    a0 = (s32) ((u32) a0 + 0xffffc000U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u16 *) (u32) s5) = (u16) v1;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u32 *) (u32) s3) = (u32) v1; goto L_00C6AC68;
L_00C6ABFC:;
    s0 = 1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) s5) = (u16) v0;
    v0 = (*(volatile u16 *) (u32) s4);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) s4) = (u16) v0; goto L_00C6AB28;
L_00C6AC1C:;
    a0 = (s32) ((u32) v0 + 0xffffd000U);
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 << 3);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x3000U);
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_00C6AB48;
L_00C6AC54:;
    v1 = (*(volatile u16 *) (u32) s4);
    v1 = (s32) ((u32) v1 + 0x7fffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) s4) = (u16) v1; goto L_00C6ABCC;
L_00C6AC68:;
    return;
}
