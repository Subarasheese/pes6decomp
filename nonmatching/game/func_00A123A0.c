/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_009B33A0(s64, s64, s64);
s64 func_009B3440(s64, s64, s64, s64, f32, f32);
void func_00A8A7B0(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00AFBA70(s64);

s64 func_00A123A0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 hi = 0, lo = 0;

    f1.i = (s32) a1;
    s3 = a0;
    f12.f = (f32) f1.i;
    s0 = a2;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) s0;
    f13.f = (f32) f0.i; v0 = func_009B3440(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile u8 *) (u32) s3);
    s2 = v0 & 0xffff; v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00A1240C; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A1240C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 137;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    if (v1 == v0) goto L_00A12474;
    v0 = 132;
    if (v1 == v0) goto L_00A1246C;
    v0 = 158;
    if (v1 == v0) goto L_00A1246C;
    v0 = 48;
    if (v1 == v0) goto L_00A1246C;
    v0 = 131;
    if (v1 == v0) goto L_00A1246C;
    v1 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00A124B4;
L_00A1246C:;
    v0 = 1; goto L_00A124DC;
L_00A12474:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (v1 != v0) goto L_00A126CC;
    v0 = (*(volatile s32 *) (u32) (a0 + 276));
    at = (u64) v0 < (u64) (s64) 256;
    if (at == 0) goto L_00A126CC;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    at = v0 < 4096;
    if (at == 0) goto L_00A126CC;
    v0 = 0; goto L_00A124DC;
L_00A124B4:;
    v0 = 440;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00A124D8;
    v0 = 636;
    if (v1 == v0) goto L_00A124D8;
    v0 = 0; goto L_00A124DC;
L_00A124D8:;
    v0 = 1;
L_00A124DC:;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s3 + 36)); goto L_00A12588; }
    v0 = (*(volatile u8 *) (u32) (s3 + 36));
    { s32 c_ = v0 == 0; s1 = (s64) ((u64) 0 + (u64) (s64) 8); if (c_) goto L_00A12620; }
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 30;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 120));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x88880000U;
    v1 = v1 | 0x8889;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v0 >> 31);
    a0 = hi;
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21378));
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = v0 & 0xffff;
    a0 = (s32) ((u32) s1 - (u32) v0);
    v0 = v1 < 4;
    { s32 c_ = v0 != 0; s1 = a0 & 0xffff; if (c_) goto L_00A12620; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_00A12620;
L_00A12588:;
    { s32 c_ = v0 == 0; s1 = (s64) ((u64) 0 + (u64) (s64) 24); if (c_) goto L_00A12620; }
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 30;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 120));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v0 >> 31);
    v1 = hi;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21378));
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = v1 & 0xffff;
    v1 = (s32) ((u32) s1 - (u32) v1);
    v0 = v0 < 4;
    { s32 c_ = v0 != 0; s1 = v1 & 0xffff; if (c_) goto L_00A12620; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 15);
L_00A12620:;
    v1 = (*(volatile s16 *) (u32) (s3 + 20));
    v0 = (s32) 0x46560000U;
    v0 = v0 | 0x6400;
    s0 = (s64) ((u64) s0 << 48);
    s0 = s0 >> 48;
    a0 = s3;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = s0; v0 = func_009B33A0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a3 = v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 19));
    a2 = s1;
    a1 = s2;
    f12.f = (*(volatile f32 *) (u32) (v1 + 1180));
    f13.f = (*(volatile f32 *) (u32) (v1 + 2972));
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff; func_00A8A7B0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e53U);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 ^ 0xff;
    v0 = (u64) 0 < (u64) v0;
    if (v0 != 0) { v0 = 0; goto L_00A126D4; }
    v0 = s2 & 0xffff;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (s3 + 148)) = (u32) s0; if (c_) goto L_00A126C4; }
    v0 = (s32) ((u32) s2 + 0x1U);
    s2 = v0 & 0xffff;
L_00A126C4:;
    v0 = s2; goto L_00A126D4;
L_00A126CC:;
    v0 = 1; goto L_00A124DC;
L_00A126D4:;
    return v0;
}
