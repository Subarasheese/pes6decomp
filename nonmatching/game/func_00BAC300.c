/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s64 func_00208310(s64);
s64 func_002AE670(s64);
s64 func_009B3350(s64, s64, s64);
s64 func_00BBB8C0(s64);
s64 func_00BC03A0(s64, s64, s64, s64);
s64 func_00BC13A0(s64, s64, s64, s64);

void func_00BAC300(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;

    s3 = a0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48)); v0 = func_00BC03A0(a0, a1, a2, a3);
    v1 = 43;
    if (v0 == v1) { a0 = 44; goto L_00BAC348; }
    v1 = 38;
    a0 = 39; v0 = func_00BC13A0(a0, a1, a2, a3);
    a0 = v0 & 0xffff; goto L_00BAC354;
L_00BAC348:;
    v0 = func_00BC13A0(a0, a1, a2, a3);
    a0 = v0 & 0xffff;
L_00BAC354:;
    v0 = func_00208310(a0);
    v1 = (*(volatile s16 *) (u32) (s3 + 20));
    s1 = v0;
    v0 = (s32) 0xc6520000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B3350(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BAC3A8; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00BAC3C0;
L_00BAC3A8:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00BAC3C0:;
    f0.f = func_001CD9E0();
    v0 = (s32) 0x590000U;
    f0.i = (s32) f0.f;
    v1 = (*(volatile u8 *) (u32) (v0 + 7757));
    v0 = 255;
    s0 = f0.i;
    if (v1 == v0) { a0 = 1; goto L_00BAC3F0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BAC3F0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 3;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = (*(volatile s32 *) (u32) (a2 + 4));
    v1 = (*(volatile u8 *) (u32) (a1 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 57);
    if (v1 == v0) goto L_00BAC43C;
    a0 = 4;
    if (v1 == a0) goto L_00BAC43C;
    goto L_00BAC4F0;
L_00BAC43C:;
    v0 = (*(volatile u16 *) (u32) (a1 + 8));
    f0.f = (*(volatile f32 *) (u32) (a2 + 56));
    v0 = (s32) ((u32) v0 << 1);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    s2 = f0.i;
L_00BAC460:;
    at = s0 < 7681;
    if (at != 0) { a1 = 24; goto L_00BAC470; }
    a1 = 22;
L_00BAC470:;
    v1 = (*(volatile u8 *) (u32) (s1 + 1));
    v0 = (*(volatile u8 *) (u32) (s1 + 2));
    a0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v0 - (u32) a0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00BAC494; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00BAC494:;
    v0 = (s32) ((u32) a0 + (u32) v0);
    at = s0 < 5376;
    v0 = (s32) ((u32) a1 - (u32) v0);
    { s32 c_ = at == 0; s2 = (s32) ((u32) s2 + (u32) v0); if (c_) goto L_00BAC4AC; }
    s2 = (s32) ((u32) s2 + 0x2U);
L_00BAC4AC:;
    a0 = 4; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 + 0xfffffffaU);
    v0 = (s32) ((u32) s2 + (u32) v0);
    if (v0 > 0) goto L_00BAC4C8;
    v0 = 0;
L_00BAC4C8:;
    (*(volatile u8 *) (u32) (s3 + 98)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s3 + 98)); v0 = func_002AE670(a0);
    (*(volatile u8 *) (u32) (s3 + 98)) = (u8) v0;
    a0 = 53;
    (*(volatile u16 *) (u32) (s3 + 60)) = (u16) 0;
    v1 = 2;
    (*(volatile u8 *) (u32) (s3 + 22)) = (u8) a0;
    (*(volatile u16 *) (u32) (s3 + 24)) = (u16) v1; goto L_00BAC500;
L_00BAC4F0:;
    v0 = func_00BBB8C0(a0);
    s2 = (s32) ((u32) v0 + 0x8U); goto L_00BAC460;
L_00BAC500:;
    return;
}
