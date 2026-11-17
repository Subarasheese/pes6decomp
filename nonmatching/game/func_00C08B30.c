/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00958AD0(s64, s64);
void func_0096D0A0(s64, s64, s64);
s64 func_0098F410(s64);
s64 func_009916B0(s64);
s64 func_009B3070(s64, s64);
s64 func_009B32D0(s64, s64, s64);
s64 func_00AFBAB0(s64);
s64 func_00BDB8B0(s64);
void func_00C04830(s64, s64, s64);
s64 func_00C0A830(s64, s64, s64, s64);

s64 func_00C08B30(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s4 = 0;
    s2 = 0;
    s1 = a0;
    s0 = a1; v0 = func_0098F410(a0);
    if (v0 == 0) goto L_00C08B70;
    s2 = 1;
L_00C08B70:;
    v1 = (*(volatile u16 *) (u32) (s0 + 40));
    v0 = 255;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s1); goto L_00C08CA4; }
    s3 = v1 & 0xff;
    if (s3 == v0) { a0 = 1; goto L_00C08B98; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s3 / (s32) v0); hi = (s32) ((s32) s3 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C08B98:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = s3 & 0xff;
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 << 1);
    s2 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile u16 *) (u32) (s1 + 38));
    a0 = (*(volatile u16 *) (u32) (v0 + 296));
    a2 = 16384; v0 = func_009B32D0(a0, a1, a2);
    a1 = v0 & 0xffff;
    a0 = s1;
    a2 = 0; func_0096D0A0(a0, a1, a2);
    a3 = s0;
    a0 = s1;
    a1 = s3;
    a2 = 0;
    s0 = 0; v0 = func_00C0A830(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C08C00;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C08C00:;
    v0 = (*(volatile u8 *) (u32) (s2 + 514));
    at = v0 < 2;
    if (at != 0) { a0 = s1; goto L_00C08E8C; }
L_00C08C10:;
    v0 = s0 & 0xff;
    if (v0 != 0) { v0 = 2; goto L_00C08EC0; }
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e80U);
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f1.f = f0.f - f1.f;
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x44800000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (fcc) { a0 = s1; goto L_00C08EAC; }
    f1.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = s1; goto L_00C08C8C; }
    a0 = s1;
    a2 = s3;
    a1 = 2; func_00C04830(a0, a1, a2);
    v0 = 1; goto L_00C08C9C;
L_00C08C8C:;
    a2 = s3;
    a1 = 10; func_00C04830(a0, a1, a2);
L_00C08C98:;
    v0 = 1;
L_00C08C9C:;
    goto L_00C08EC4;
L_00C08CA4:;
    v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00C08CD0; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00C08CD0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = 0;
    s5 = (s32) ((u32) v0 + (u32) v1);
L_00C08CEC:;
    a0 = s5; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_00C08E14;
    if (s1 == s5) goto L_00C08E14;
    a0 = (*(volatile u8 *) (u32) s5);
    at = (s32) 0x5100000U;
    at = at | 0x1;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v1 < (u64) at;
    if (at == 0) goto L_00C08E14;
    v0 = (s32) 0x190000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00C08E14;
    if (s2 != 0) { v0 = (s32) ((u32) a0 << 1); goto L_00C08E3C; }
    v1 = (*(volatile s16 *) (u32) (s1 + 20));
L_00C08D44:;
    v0 = (s32) 0x45000000U;
    f0.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    v0 = (*(volatile s16 *) (u32) (s5 + 20));
    f3.f = (*(volatile f32 *) (u32) (s5 + 224));
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f1.f = f1.f * f2.f;
    f1.f = f1.f - f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    fcc = f1.f < f0.f;
    { s32 c_ = !fcc; a0 = 0; if (c_) goto L_00C08D8C; }
    a0 = (s32) ((u32) a0 + 0x1U);
L_00C08D8C:;
    v1 = (*(volatile u8 *) (u32) (s5 + 514));
    if (v1 <= 0) goto L_00C08DFC;
    v0 = 1;
    v1 = (s32) ((u32) v0 - (u32) v1);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00C08DB0; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00C08DB0:;
    f1.f = f2.f - f3.f;
    a0 = (s32) ((u32) a0 + (u32) v0);
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45800000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00C08DFC;
    f0.i = (s32) f1.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00C08DE8; }
L_00C08DE8:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 7; if (c_) goto L_00C08DF8; }
    v0 = (s32) ((u32) v1 + 0x7fU);
    v0 = (s32) v0 >> 7;
L_00C08DF8:;
    a0 = (s32) ((u32) a0 + (u32) v0);
L_00C08DFC:;
    at = a0 < s4;
    if (at != 0) goto L_00C08E14;
    v0 = (*(volatile u8 *) (u32) s5);
    s4 = a0;
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) v0;
L_00C08E14:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 10;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x240U); if (c_) goto L_00C08CEC; }
    v1 = (*(volatile u16 *) (u32) (s0 + 40));
    v0 = 255;
    if (v1 != v0) { a1 = v1 & 0xff; goto L_00C08E64; }
    v0 = 1; goto L_00C08EC0;
L_00C08E3C:;
    v0 = (s32) ((u32) s1 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = (*(volatile u16 *) (u32) (s1 + 42)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 24577;
    if (at == 0) goto L_00C08E14;
    v1 = (*(volatile s16 *) (u32) (s1 + 20)); goto L_00C08D44;
L_00C08E64:;
    a0 = s1;
    a2 = 0; v0 = func_00958AD0(a0, a1);
    v0 = v0 & 0xff;
    if (v0 != 0) { v0 = v0 & 0xff; goto L_00C08E84; }
L_00C08E7C:;
    v0 = 2; goto L_00C08EC0;
L_00C08E84:;
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) v0; goto L_00C08E7C;
L_00C08E8C:;
    v0 = func_009916B0(a0);
    v0 = v0 & 0xff;
    at = v0 < 3;
    if (at != 0) goto L_00C08C10;
    s0 = 0; goto L_00C08C10;
L_00C08EAC:;
    a2 = s3;
    a1 = 0; func_00C04830(a0, a1, a2);
    goto L_00C08C98;
L_00C08EC0:;
L_00C08EC4:;
    return v0;
}
