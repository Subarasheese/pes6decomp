/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
s32 func_009B33F0(s32, s32, s32, s32);
s32 func_00B2A420(s32);

s32 func_00B3B740(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;

    s3 = a0;
    s2 = 0;
    v0 = (*(volatile s32 *) (u32) a0);
    s1 = (*(volatile u8 *) (u32) (v0 + 19));
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) v0 + (u32) s1);
L_00B3B778:;
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile u8 *) (u32) (v0 + 436)); v0 = func_00B2A420(a0);
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = (*(volatile s32 *) (u32) v0);
    f3.f = (*(volatile f32 *) (u32) (a0 + 224));
    f2.f = (*(volatile f32 *) (u32) (a1 + 224));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.f = (*(volatile f32 *) (u32) (a1 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v1 = f1.i;
    a2 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    { s32 c_ = v1 == 0; { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a2 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; } if (c_) goto L_00B3B81C; }
    if (v0 == s3) goto L_00B3B81C;
    at = (s32) 0x400000U;
    at = at | 0x1;
    at = a2 < at;
    if (at == 0) goto L_00B3B830;
    v0 = func_009B33F0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s3);
    a0 = (*(volatile u16 *) (u32) (v1 + 38));
    a1 = v0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00B3B81C;
    v0 = 1; goto L_00B3B8FC;
L_00B3B81C:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 11;
    if (v0 != 0) goto L_00B3B778;
L_00B3B830:;
    v0 = (u64) 0 < (u64) s1;
    v1 = v0 ^ 0x1;
    s1 = 0;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00B3B84C:;
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (v0 + 436)); v0 = func_00B2A420(a0);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) s3);
    f2.f = (*(volatile f32 *) (u32) (a1 + 224));
    f3.f = (*(volatile f32 *) (u32) (a0 + 224));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.f = (*(volatile f32 *) (u32) (a1 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    { s32 c_ = v0 == 0; { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; } if (c_) goto L_00B3B8E8; }
    at = (s32) 0x400000U;
    at = at | 0x1;
    at = v1 < at;
    if (at == 0) goto L_00B3B8F8;
    v0 = func_009B33F0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s3);
    a0 = (*(volatile u16 *) (u32) (v1 + 38));
    a1 = v0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00B3B8E8;
    v0 = 1; goto L_00B3B8FC;
L_00B3B8E8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    if (v0 != 0) goto L_00B3B84C;
L_00B3B8F8:;
    v0 = 0;
L_00B3B8FC:;
    return v0;
}
