/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
void func_001A58E0(s64, s64);
void func_00209A00(s64, s64, s64);
s64 func_00908020(s64);
void func_00910F30(s64);
s64 func_009177C0(s64);

void func_00902AB0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;

    a0 = 1000;
    v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    s2 = 0;
    v0 = 7;
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    s1 = hi;
L_00902AE0:;
    a0 = 0; v0 = func_00908020(a0);
    if (v0 != 0) goto L_00902B00;
    a0 = 1; v0 = func_00908020(a0);
    if (v0 != 0) goto L_00902B10;
L_00902B00:;
    a0 = s2 & 0xff; v0 = func_009177C0(a0);
    s0 = v0; goto L_00902B20;
L_00902B10:;
    v0 = s2 & 0xff;
    a0 = (s32) ((u32) v0 + 0xbU); v0 = func_009177C0(a0);
    s0 = v0;
L_00902B20:;
    a1 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 212));
    if (v0 != 0) goto L_00902B90;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001A58E0(a0, a1);
    goto L_00902C78;
L_00902B90:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 1;
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) a1;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0); func_001A58E0(a0, a1);
    a0 = 1000; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
    v0 = (s32) 0x930000U;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = 7;
    a1 = (s32) ((u32) s1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffb420U);
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) a1 / (u32) v1); hi = (s32) ((u32) a1 % (u32) v1); lo = q_; }
    v1 = hi;
    s1 = v1 & 0xff;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u16 *) (u32) v0);
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = s0; func_00910F30(a0);
    v1 = -90;
    v1 = (s32) ((u32) v1 + 0x168U);
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    at = v1 < 361;
    if (at != 0) goto L_00902C28;
    v1 = (s32) ((u32) v1 + 0xfffffe98U);
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
L_00902C28:;
    a1 = (s64) ((u64) v1 << 48);
    a1 = a1 >> 48;
    a0 = 182;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v1 = s2 & 0xff;
    a0 = (s32) 0x930000U;
    a1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a0 + 0xffffb3c0U);
    v1 = (s32) 0x42c80000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) a2;
    f1.f = (*(volatile f32 *) (u32) a0);
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) a2;
    f0.f = (*(volatile f32 *) (u32) (a0 + 4));
    f2.i = (s32) v1;
    f1.f = f2.f * f1.f;
    f0.f = f2.f * f0.f;
    (*(volatile f32 *) (u32) (s0 + 224)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 232)) = f0.f;
L_00902C78:;
    v1 = (s32) ((u32) s2 + 0x1U);
    s2 = v1 & 0xff;
    v1 = s2 < 11;
    if (v1 != 0) goto L_00902AE0;
    return;
}
