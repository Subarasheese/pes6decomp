/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D80(s64, s64, s64, s64);
void func_008C5230(s64, s64, s64, s64, f32);
void func_008C9B60(s64, s64, s64, s64, f32, f32);
void func_008C9CB0(s64, s64);
void func_008CB5D0(s64, s64, s64, s64);
void func_008D2EF0(s64, s64, s64, s64, f32, f32);
s64 func_008D90A0(s64, s64, s64, s64);
void func_008E0100(s64, s64, s64, s64, f32, f32);
void func_008E6470(s64, s64, f32, f32);
void func_008E98F0(s64, s64, s64, s64);
void func_008E9940(s64, s64, s64, s64, f32);

s64 func_008B6EC0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x8f0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -7792));
    v0 = v0 & 0x80;
    v0 = (u64) 0 < (u64) v0;
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_008B6EF4; }
    v0 = 0; goto L_008B70B8;
L_008B6EF4:;
    a0 = (*(volatile u8 *) (u32) (s0 + 25)); v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x2000;
    v0 = 8192;
    if (v1 == v0) goto L_008B6F14;
    v0 = (s32) 0x8f0000U; goto L_008B70AC;
L_008B6F14:;
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s8 *) (u32) (v0 + -7790));
    v0 = (s32) ((u32) a0 + 0x1U);
L_008B6F20:;
    v1 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x3; if (c_) goto L_008B6F3C; }
    if (v0 == 0) { a0 = (s64) ((u64) v0 << 56); goto L_008B6F40; }
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
L_008B6F3C:;
    a0 = (s64) ((u64) v0 << 56);
L_008B6F40:;
    a0 = a0 >> 56;
    if (a0 == 0) { v0 = (s32) ((u32) a0 + 0x1U); goto L_008B6F20; }
    v0 = (s32) 0x8f0000U;
    v1 = (s64) ((u64) a0 << 56);
    v1 = v1 >> 56;
    (*(volatile u8 *) (u32) (v0 + -7790)) = (u8) a0;
    v0 = (s32) ((u32) v1 + 0xffffffffU);
    a1 = (s64) ((u64) v0 << 48);
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -7780));
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    s1 = (s32) 0x8f0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffe750U);
L_008B6F80:;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 5;
    a2 = s2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s1 + 0x1d80U); func_008E98F0(a0, a1, a2, a3);
    a2 = s2 & 0xff;
    a0 = (s32) ((u32) s1 + 0x1d80U);
    a1 = (s32) ((u32) sp + 0x40U);
    a3 = (s32) ((u32) s1 + 0x208U); func_008E9940(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 0;
    a2 = s2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    a1 = (s32) ((u32) sp + 0x40U); func_008D2EF0(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x2930U);
    a1 = (s32) ((u32) sp + 0x40U); func_008E0100(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 1;
    a2 = s2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = (s32) ((u32) sp + 0x40U); func_008E6470(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 2;
    a2 = s2; func_008C5230(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = (s32) ((u32) sp + 0x40U); func_008C9B60(a0, a1, a2, a3, f12.f, f13.f);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3224U); if (c_) goto L_008B6F80; }
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 12836;
    v0 = (s32) 0x8f0000U;
    a1 = 1;
    v0 = (s32) ((u32) v0 + 0xffffe750U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xb0cU); func_008CB5D0(a0, a1, a2, a3);
    v0 = (s32) 0x8f0000U;
    v1 = 3;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    if (v0 != v1) { a0 = (*(volatile u8 *) (u32) s0); goto L_008B7080; }
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 12836;
    v0 = (s32) 0x8f0000U;
    a1 = 0;
    v0 = (s32) ((u32) v0 + 0xffffe750U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xb0cU); func_008C9CB0(a0, a1);
    v0 = 1; goto L_008B70A4;
L_008B7080:;
    v1 = 12836;
    v0 = (s32) 0x8f0000U;
    a1 = 1;
    v0 = (s32) ((u32) v0 + 0xffffe750U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xb0cU); func_008C9CB0(a0, a1);
    v0 = 1;
L_008B70A4:;
    goto L_008B70BC;
L_008B70AC:;
    v0 = (*(volatile s8 *) (u32) (v0 + -7790));
    v0 = v0 ^ 0x3;
    v0 = (u64) v0 < (u64) (s64) 1;
L_008B70B8:;
L_008B70BC:;
    return v0;
}
