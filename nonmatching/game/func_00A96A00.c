/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00A14EC0(s64, s64);
void func_00AA9F90(s64, s64, s64, s64, s64, s64, f32, f32);
s64 func_00B274B0(s64);

s64 func_00A96A00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    s2 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f21.f = (*(volatile f32 *) (u32) (a1 + 5204));
    a0 = (*(volatile u8 *) (u32) v0);
    f20.f = (*(volatile f32 *) (u32) (a1 + 5212));
    s0 = (*(volatile u8 *) (u32) (a1 + 104)); v0 = func_00B274B0(a0);
    if (v0 == 0) { v0 = (s32) 0x7fff0000U; goto L_00A96B80; }
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00A96A8C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A96A8C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = s2;
    s1 = (s32) ((u32) v0 + (u32) v1);
    a0 = s1; v0 = func_00A14EC0(a0, a1);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00A96ADC; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
L_00A96ABC:;
    v0 = (*(volatile u8 *) (u32) (v0 + 104));
L_00A96AC0:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v1 + 104)) = (u8) s0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v1 + 5204)) = f21.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v1 + 5212)) = f20.f; goto L_00A96B88;
L_00A96ADC:;
    a1 = (s32) 0x590000U;
    v0 = (s32) 0xb30f0000U;
    a0 = (*(volatile u8 *) (u32) (s2 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = v0 | 0x6353;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 140));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 58);
    a0 = (s32) ((u32) v1 + 0x94U);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) a0 - (u32) v1);
    a5 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a5 >> 31);
    v0 = hi;
    a2 = (*(volatile s32 *) (u32) (s1 + 88));
    a1 = s2;
    a0 = s1;
    a3 = 0;
    a4 = 96;
    v0 = (s32) ((u32) v0 + (u32) a5);
    v0 = (s32) v0 >> 7;
    a5 = (s32) ((u32) v0 + (u32) v1); func_00AA9F90(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A96ABC;
L_00A96B80:;
    v0 = v0 | 0xffff; goto L_00A96AC0;
L_00A96B88:;
    return v0;
}
