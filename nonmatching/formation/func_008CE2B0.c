/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
s64 func_001E6E10(s64);
void func_001F1810(s64, s64);
void func_001F1860(s64, s64);
s64 func_001F1A20(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
s64 func_002DB830(s64);
s64 func_008B9D60(s64, s64, s64, s64);
s64 func_008B9F20(s64, s64, s64, s64);
void func_008BA0D0(s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);
void strcpy(s64, s64);

void func_008CE2B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s6 = a1;
    s5 = a0;
    if (s6 == 0) goto L_008CE540;
    s1 = (*(volatile s32 *) (u32) (s5 + 52));
    if (s1 == 0) { ; goto L_008CE544; }
    s0 = (*(volatile s32 *) (u32) (s5 + 56));
    if (s0 == 0) goto L_008CE540;
    a0 = (*(volatile s32 *) (u32) (s5 + 504));
    if (a0 == 0) goto L_008CE540;
    a1 = (s32) ((u32) sp + 0xd0U);
    a2 = 114; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s5 + 468)); v0 = func_002DB830(a0);
    s7 = v0;
    a0 = 20188; v0 = func_001E6E10(a0);
    fp = v0;
    a0 = 20001; v0 = func_001E6E10(a0);
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0;
    a0 = s6;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 212));
    f1.f = (*(volatile f32 *) (u32) (sp + 216));
    f2.f = (*(volatile f32 *) (u32) (sp + 208));
    (*(volatile f32 *) (u32) (sp + 196)) = f0.f;
    f0.i = (s32) f0.f;
    (*(volatile f32 *) (u32) (sp + 200)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 220));
    v1 = f0.i;
    (*(volatile f32 *) (u32) (sp + 192)) = f2.f;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    (*(volatile f32 *) (u32) (sp + 204)) = f1.f;
    a0 = (*(volatile u8 *) (u32) (s5 + 5));
    v1 = (*(volatile u8 *) (u32) (s5 + 4));
    s4 = (s32) ((u32) 0 - (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = s4 < v1;
    { s32 c_ = at == 0; s3 = v0; if (c_) goto L_008CE540; }
    v1 = (s32) ((u32) s1 + (u32) s7);
    s1 = (s32) ((u32) v1 + (u32) s4);
L_008CE39C:;
    a0 = (s32) ((u32) s4 + (u32) s7);
    if (a0 < 0) goto L_008CE520;
    at = a0 < 11;
    if (at == 0) goto L_008CE520;
    v0 = (*(volatile u8 *) (u32) (s5 + 6));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    { s32 c_ = a0 != 0; (*(volatile f32 *) (u32) (sp + 212)) = f0.f; if (c_) goto L_008CE400; }
    a0 = (s32) ((u32) sp + 0xf0U);
    a1 = 0; func_008BA0D0(a0, a1);
    a2 = (*(volatile s32 *) (u32) (sp + 188));
    a0 = s3;
    a1 = (s32) ((u32) sp + 0xd0U);
    a3 = (s32) ((u32) sp + 0xf0U); v0 = func_008B9D60(a0, a1, a2, a3);
    goto L_008CE520;
L_008CE400:;
    v1 = (*(volatile u8 *) (u32) (s1 + 46));
    v0 = (s32) 0x8f0000U;
    a0 = s3;
    v0 = (s32) ((u32) v0 + 0xffffc090U);
    a1 = (s32) ((u32) sp + 0xd0U);
    v1 = (s32) ((u32) v1 << 3);
    a2 = fp;
    a3 = (s32) ((u32) v0 + (u32) v1); v0 = func_008B9D60(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 46));
    v1 = v1 < 2;
    if (v1 != 0) goto L_008CE520;
    v1 = (*(volatile u8 *) (u32) (s1 + 57));
    at = v1 < 11;
    if (at == 0) goto L_008CE520;
    v0 = (s32) ((u32) s0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 1894));
    f0.f = (*(volatile f32 *) (u32) (sp + 212));
    v1 = (s32) ((u32) sp + 0xe8U);
    (*(volatile f32 *) (u32) (sp + 196)) = f0.f;
    a0 = (s32) ((u32) s0 + (u32) a0);
    a1 = (*(volatile u8 *) (u32) (a0 + 403));
    a0 = (*(volatile u8 *) (u32) (a0 + 115));
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_008CE488; }
L_008CE46C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008CE46C;
L_008CE488:;
    a2 = a0 & 0xff;
    if (a2 <= 0) goto L_008CE4A8;
    at = a2 < 100;
    if (at == 0) goto L_008CE4A8;
    if (a1 == 0) goto L_008CE4C0;
L_008CE4A8:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0xfcU);
    a1 = (s32) ((u32) a1 + 0xffffda58U); strcpy(a0, a1);
    goto L_008CE4D0;
L_008CE4C0:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0xfcU);
    a1 = (s32) ((u32) a1 + 0xffffda60U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_008CE4D0:;
    a0 = s6;
    a1 = 33;
    a2 = (s32) ((u32) sp + 0xe8U);
    a3 = (s32) ((u32) sp + 0xfcU); v0 = func_001F1A20(a0, a1, a2, a3);
    s2 = v0;
    a1 = 1;
    a0 = s2; func_001F3D10(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0xc0U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = s2;
    a1 = 1; func_001F1860(a0, a1);
    a0 = s2;
    a1 = 1; func_001F1810(a0, a1);
L_008CE520:;
    a0 = (*(volatile u8 *) (u32) (s5 + 4));
    v1 = (*(volatile u8 *) (u32) (s5 + 5));
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008CE39C; }
L_008CE540:;
L_008CE544:;
    return;
}
