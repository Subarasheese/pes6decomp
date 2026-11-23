/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_002B4BF0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    a2 = (s32) 0x590000U;
    a4 = 0;
    a3 = 0;
    a5 = 0;
    a2 = (s32) ((u32) a2 + 0xffffe5b0U);
    v1 = (s32) 0x44230000U;
    a1 = (s32) 0x5e0000U;
    v1 = v1 | 0xd70b;
    a1 = (s32) ((u32) a1 + 0x26f0U);
    f0.i = (s32) v1;
L_002B4C18:;
    v1 = (*(volatile u8 *) (u32) a2);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    f2.f = (*(volatile f32 *) (u32) (v1 + 20));
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    acc = f2.f * f2.f;
    f1.f = acc + f1.f * f1.f;
    f1.i = (s32) f1.f;
    a0 = f1.i;
    f1.f = (f32) f1.i;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_002B4C58;
    v1 = (s32) ((u32) a3 + 0x1U);
    a3 = (s64) ((u64) v1 << 48);
    a3 = a3 >> 48;
L_002B4C58:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 23;
    a4 = (s32) ((u32) a4 + (u32) a0);
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x240U); if (c_) goto L_002B4C18; }
    v1 = (s32) 0xb2160000U;
    v1 = v1 | 0x42c9;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a4 >> 31);
    a1 = hi;
    v1 = (s32) 0x5e0000U;
    (*(volatile u16 *) (u32) (v1 + 10172)) = (u16) a3;
    a0 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) a1 + (u32) a4);
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u32 *) (u32) (a0 + 10168)) = (u32) v1; return;
}
