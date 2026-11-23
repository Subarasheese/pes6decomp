/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001454C0(s64);
void func_0014F2F0(s64, s64, s64, s64, s64);
void func_0017D330(s64, s64, s64, s64, s64);
void func_0017DB10(s64, s64, f32, f32);
void func_0017DCE0(s64, s64, s64);
void func_0017DEC0(s64, s64, s64, s64);
void func_0017DF20(s64, s64, s64);
void func_0017DF40(s64, s64, s64);
s64 func_001B4270(s64, s64, s64);
s64 func_001B42D0(s64, s64);

void func_001AE2D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x55550000U;
    v0 = v0 | 0x5556;
    a1 = 3;
    s5 = a0;
    a2 = (*(volatile u8 *) (u32) (a0 + 62));
    s0 = (*(volatile u8 *) (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a2 >> 31);
    v0 = hi;
    s6 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a1); hi = (s32) ((s32) a2 % (s32) a1); lo = q_; }
    s7 = hi;
    s4 = (*(volatile s32 *) (u32) (a0 + 16));
    v1 = (s32) 0x390000U;
    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 + 0x7fd0U);
    v0 = (s32) ((u32) v0 + 0x7fd4U);
    a1 = 112;
    a2 = 1;
    a0 = (s32) ((u32) s7 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    f21.f = (*(volatile f32 *) (u32) v1);
    f20.f = (*(volatile f32 *) (u32) v0);
    a0 = s4; func_0017DCE0(a0, a1, a2);
    f12.i = f21.i;
    a0 = s4;
    f13.i = f20.i;
    a1 = 112; func_0017DB10(a0, a1, f12.f, f13.f);
    s1 = (s32) 0x390000U;
    s2 = 0;
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0x7fc0U);
L_001AE390:;
    a0 = (*(volatile u8 *) (u32) (s5 + 62));
    a1 = (*(volatile u8 *) (u32) (s5 + 63));
    a2 = s3; v0 = func_001B4270(a0, a1, a2);
    a4 = (*(volatile u8 *) (u32) s1);
    a2 = v0;
    a0 = (s32) ((u32) s0 + 0x2486U);
    a3 = s2 & 0xff;
    a1 = 1312; func_0017D330(a0, a1, a2, a3, a4);
    v1 = (*(volatile u8 *) (u32) s1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 9;
    v1 = (s32) ((u32) s2 + (u32) v1);
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = v0 != 0; s2 = v1 & 0xff; if (c_) goto L_001AE390; }
    a0 = (*(volatile u8 *) (u32) (s5 + 62));
    a1 = 0; v0 = func_001B42D0(a0, a1);
    if (v0 == 0) { a0 = (s32) ((u32) s6 + 0x514U); goto L_001AE454; }
    a0 = (*(volatile u8 *) (u32) (s5 + 62));
    a1 = 0; v0 = func_001B42D0(a0, a1);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 17396));
    at = v1 < v0;
    if (at != 0) { a0 = s4; goto L_001AE420; }
    a2 = (s32) ((u32) s0 + 0x2486U);
    a0 = s4;
    a1 = 112; func_0017DF20(a0, a1, a2);
    a2 = (s32) ((u32) s6 + 0x514U); goto L_001AE430;
L_001AE420:;
    a1 = 112;
    a2 = 1311; func_0017DF20(a0, a1, a2);
L_001AE42C:;
    a2 = (s32) ((u32) s6 + 0x514U);
L_001AE430:;
    a0 = s4;
    a1 = 112; func_0017DF40(a0, a1, a2);
    v1 = (*(volatile s8 *) (u32) (s4 + 4));
    at = v1 < 4;
    if (at == 0) { a3 = (s32) ((u32) s6 + 0x517U); goto L_001AE4B0; }
    goto L_001AE4D8;
L_001AE454:;
    v0 = func_001454C0(a0);
    s0 = v0;
    a0 = 1310; v0 = func_001454C0(a0);
    a1 = v0;
    a0 = s0;
    v0 = (s32) ((u32) s7 << 4);
    a3 = 0;
    v1 = (s32) ((u32) v0 + (u32) s7);
    a4 = 0;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s64) ((u64) v0 << 48);
    a2 = a2 >> 48; func_0014F2F0(a0, a1, a2, a3, a4);
    a0 = s4;
    a1 = 112;
    a2 = 1310; func_0017DF20(a0, a1, a2);
    goto L_001AE42C;
L_001AE4B0:;
    a0 = s4;
    a1 = 3;
    a2 = 112; func_0017DEC0(a0, a1, a2, a3);
    a3 = (s32) ((u32) s6 + 0x517U);
    a0 = s4;
    a1 = 4;
    a2 = 112; func_0017DEC0(a0, a1, a2, a3);
L_001AE4D8:;
    return;
}
