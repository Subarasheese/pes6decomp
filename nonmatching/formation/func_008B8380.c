/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001B68B0(s64, s64, s64, s64);
s64 func_001F87E0(s64, s64);
s64 func_00821570(s64, s64, s64, s64);
s64 func_008472D0(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);
s64 func_00858FA0(s64, s64, s64, s64);
s64 func_00858FD0(s64, s64, s64, s64);
void func_008B2E50(s64, s64, s64, s64);
void func_008B3050(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
void func_008B3FD0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);
void func_008BBB40(s64, s64);
void func_008E5D20(s64, s64, s64, s64);
void memmove(s64, s64, s64);

s64 func_008B8380(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B84B8;
    s0 = (s32) 0x8f0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffe750U);
L_008B83B8:;
    a0 = s1 & 0xff; v0 = func_00858C20(a0, a1, a2, a3);
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_008472D0(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = s2 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 != 0) goto L_008B84A8;
    v1 = s1 & 0xff;
    v0 = 139;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0x4ba0U);
    a1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (a1 + 134));
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) a1 + 0x86U); if (c_) goto L_008B8410; }
    v0 = 0; goto L_008B8428;
L_008B8410:;
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = 134; memmove(a0, a1, a2);
    (*(volatile u8 *) (u32) s2) = (u8) 0;
    v0 = 1;
L_008B8428:;
    if (v0 == 0) goto L_008B84A8;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B84A8;
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00858C20(a0, a1, a2, a3);
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_008472D0(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = s2 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 != 0) goto L_008B84A8;
    a0 = (s32) ((u32) s0 + 0x208U);
    a1 = (s32) ((u32) sp + 0x40U); func_008BBB40(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x129cU); func_008E5D20(a0, a1, a2, a3);
    a0 = s0; func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x946U); func_008B2E50(a0, a1, a2, a3);
L_008B84A8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x3224U); if (c_) goto L_008B83B8; }
L_008B84B8:;
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) goto L_008B8504;
    v0 = func_008472D0(a0, a1, a2, a3);
    a1 = (*(volatile s16 *) (u32) v0);
    a0 = (s32) 0x8b0000U;
    a0 = (s32) ((u32) a0 + 0x21c0U); v0 = func_00858FD0(a0, a1, a2, a3);
    a0 = v0; v0 = func_00858FA0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_008B8504;
    goto L_008B8534;
L_008B8504:;
    v0 = (s32) 0x8f0000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + -6295));
    if (v0 != v1) { v1 = 0; goto L_008B8534; }
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 6541));
    if (v0 != v1) goto L_008B8530;
    v1 = 1; goto L_008B8534;
L_008B8530:;
    v1 = 0;
L_008B8534:;
    if (v1 != 0) { v0 = 1; goto L_008B85A8; }
    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x100;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -31364)); goto L_008B8568; }
    v0 = func_00821570(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B85A4;
    v0 = 0; goto L_008B85A8;
L_008B8568:;
    if (v0 >= 0) goto L_008B858C;
    a0 = 0;
    a1 = 64; v0 = func_001F87E0(a0, a1);
    if (v0 != 0) goto L_008B85A4;
    v0 = 0; goto L_008B85A8;
L_008B858C:;
    v0 = func_001B68B0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B85A4;
    v0 = 0; goto L_008B85A8;
L_008B85A4:;
    v0 = 1;
L_008B85A8:;
    return v0;
}
