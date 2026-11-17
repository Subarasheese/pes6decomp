/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CD9E0(void);
s32 func_00288670(s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00A14EC0(s32, s32);

s32 func_00C565C0(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    s1 = a0;
    a1 = (*(volatile u16 *) (u32) (s1 + 42));
    a0 = (*(volatile u16 *) (u32) (a0 + 168)); v0 = func_009B30B0(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) 0x590000U;
    s0 = v0 & 0xffff;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00C56618; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C56618:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = a1 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = v0 ^ 0x1;
    a1 = (s32) ((u32) v1 << 6);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = 255;
    { s32 c_ = v1 == v0; a0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00C56668; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s2 = hi; goto L_00C5666C;
L_00C56668:;
    s2 = 1;
L_00C5666C:;
    a1 = s1; v0 = func_00A14EC0(a0, a1);
    v1 = (s32) ((u32) s2 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = s1;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00A14EC0(a0, a1);
    v1 = (*(volatile s16 *) (u32) (s1 + 20));
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    a0 = s1;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00C566DC; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00C566F4;
L_00C566DC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00C566F4:;
    v0 = func_001CD9E0();
    a0 = (*(volatile s32 *) (u32) (s1 + 276));
    v0 = (s32) 0xcccc0000U;
    v0 = v0 | 0xcccd;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    a0 = (s32) ((u32) v0 >> 3);
    at = a0 < 4609;
    if (at != 0) goto L_00C5672C;
    a0 = 4608;
L_00C5672C:;
    v0 = s0 & 0xffff;
    v1 = 64;
    v0 = (s32) ((u32) v1 - (u32) v0);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s32 c_ = v0 >= 0; s0 = (s32) v0 >> 6; if (c_) goto L_00C5674C; }
    v0 = (s32) ((u32) v0 + 0x3fU);
    s0 = (s32) v0 >> 6;
L_00C5674C:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 131));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    at = v0 < 60;
    if (at == 0) goto L_00C567B8;
    at = s0 < 1537;
    if (at != 0) goto L_00C567B8;
    s0 = 1536;
L_00C567B8:;
    at = s0 < 1024;
    if (at == 0) goto L_00C567C8;
    s0 = 1024;
L_00C567C8:;
    v0 = s0;
    return v0;
}
