/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001D7F10(s32, s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008DC460(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v1 = 16;
    s4 = a2;
    a2 = (s32) ((u32) sp + 0x80U);
    if (a2 == 0) goto L_008DC4B4;
L_008DC498:;
    (*(volatile u8 *) (u32) a2) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a2 = (s32) ((u32) a2 + 0x1U);
    if (v1 != 0) goto L_008DC498;
L_008DC4B4:;
    a1 = a1 & 0xff;
    a2 = (*(volatile s32 *) (u32) (a0 + 472));
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) a0 + (u32) v1);
    { s32 c_ = a2 == 0; s2 = (s32) ((u32) v1 + 0x84U); if (c_) goto L_008DC4DC; }
    a0 = a2; goto L_008DC4EC;
L_008DC4DC:;
    a2 = (*(volatile s32 *) (u32) (a0 + 476));
    if (a2 == 0) { ; goto L_008DC5E4; }
    a0 = a2;
L_008DC4EC:;
    a1 = (s32) ((u32) sp + 0x90U); func_001D7BE0(a0, a1);
    a0 = 5;
    a1 = (s32) ((u32) sp + 0x80U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a1 = (s32) ((u32) sp + 0x90U);
    a0 = s0; func_001D7CE0(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = 36; v0 = func_001D7A20(a0, a1, a2);
    f20.f = (*(volatile f32 *) (u32) (sp + 160));
    s1 = (s32) 0x8f0000U;
    f21.f = (*(volatile f32 *) (u32) (sp + 164));
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0xffffdcd8U);
L_008DC534:;
    v1 = (s32) ((u32) s4 + (u32) s3);
    v0 = (s32) 0x51eb0000U;
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v1 = (s32) ((u32) v1 >> 31);
    v0 = (s32) v0 >> 5;
    s5 = (s32) ((u32) v0 + (u32) v1);
    if (s5 >= 0) goto L_008DC570;
    s5 = 0;
L_008DC570:;
    a2 = (*(volatile u8 *) (u32) s1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_001D7A20(a0, a1, a2);
    f1.i = (s32) s5;
    s3 = (s32) ((u32) s3 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) (sp + 160));
    v1 = (s32) 0x42c80000U;
    f2.f = (f32) f1.i;
    v0 = s3 < 6;
    s1 = (s32) ((u32) s1 + 0x1U);
    f0.f = f0.f - f20.f;
    f0.f = f2.f * f0.f;
    f1.i = (s32) v1;
    f0.f = f0.f / f1.f;
    f0.f = f20.f + f0.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 164));
    f0.f = f0.f - f21.f;
    f0.f = f2.f * f0.f;
    f0.f = f0.f / f1.f;
    f0.f = f21.f + f0.f;
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_008DC534; }
    a0 = s0; func_001D7F10(a0, a1, a2, a3);
L_008DC5E4:;
    return;
}
