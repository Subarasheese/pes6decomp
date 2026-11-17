/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_0098F0C0(s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009F42B0(s32, s32);
s32 func_00AFBA70(s32);

s32 func_00A5DC80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s7 = a4;
    s6 = a1;
    s5 = a2;
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = a3; v0 = func_009B30B0(a0, a1);
    s0 = v0 & 0xffff;
    v0 = s0 < 66;
    if (v0 != 0) { a0 = 18; goto L_00A5DCE0; }
    v0 = 0; goto L_00A5DF8C;
L_00A5DCE0:;
    v0 = func_002AE670(a0);
    a0 = (*(volatile u8 *) (u32) s1);
    s2 = v0; v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { s4 = 1; goto L_00A5DD1C; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s4 = hi;
L_00A5DD1C:;
    s3 = (s32) ((u32) s2 << 2);
    s2 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) s3 + (u32) s2);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    a0 = (s32) ((u32) s3 + (u32) s2);
    f1.f = (*(volatile f32 *) (u32) (a0 + 1148));
    s2 = v0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 2940));
    v0 = (s32) ((u32) s4 << 3);
    v1 = (s32) ((u32) v0 + (u32) s4);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B33A0(a0, a1, a2);
    at = (u64) v0 < (u64) s2;
    if (at != 0) { v0 = 1; goto L_00A5DF8C; }
    at = s0 < 49;
    if (at == 0) goto L_00A5DDE8;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x66660000U;
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    v0 = v0 | 0x6667;
    a1 = (*(volatile s32 *) (u32) (v1 + 80));
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = a1 < v0;
    if (at == 0) goto L_00A5DDE8;
    v0 = 0; goto L_00A5DF8C;
L_00A5DDE8:;
    a0 = 12; v0 = func_002AE670(a0);
    s4 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s3 = (s32) ((u32) s4 << 2);
    v0 = (s32) ((u32) s3 + (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    v1 = (s32) 0x50000U;
    v1 = v1 | 0x1000;
    v0 = (u64) v0 < (u64) v1;
    if (v0 != 0) { s2 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A5DE3C; }
    v0 = 0; goto L_00A5DF8C;
L_00A5DE3C:;
    a0 = s1;
    a1 = -384; v0 = func_009F42B0(a0, a1);
    f1.i = (s32) v0;
    v0 = (s32) ((u32) s3 + (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (v0 + 2044));
    f1.f = (f32) f1.i;
    fcc = f0.f <= f1.f;
    if (fcc) { a1 = (*(volatile u16 *) (u32) (s2 + 88)); goto L_00A5DE6C; }
    v0 = 0; goto L_00A5DF8C;
L_00A5DE6C:;
    a0 = s7; v0 = func_009B30B0(a0, a1);
    a1 = v0 & 0xffff;
    at = a1 < 112;
    if (at == 0) { v0 = 0; goto L_00A5DF8C; }
    f0.i = (s32) s4;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f5.f = (*(volatile f32 *) (u32) (s1 + 224));
    f6.f = (f32) f0.i;
    v0 = (s32) ((u32) s3 + (u32) a0);
    f4.i = (s32) 0;
    f7.f = (*(volatile f32 *) (u32) (s1 + 240));
    acc = f4.f + f5.f;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f2.f = (*(volatile f32 *) (u32) (s1 + 248));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f5.f = acc + f7.f * f6.f;
    acc = f4.f + f1.f;
    f1.f = acc + f2.f * f6.f;
    f3.f = f5.f - f3.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f3.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x10000U;
    at = at | 0x9000;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < at;
    if (at == 0) goto L_00A5DF08;
    v0 = a1 < 80;
    if (v0 != 0) goto L_00A5DF08;
    v0 = 0; goto L_00A5DF8C;
L_00A5DF08:;
    v0 = (s32) ((u32) s3 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 252));
    at = v0 < 12289;
    if (at != 0) { v0 = 0; goto L_00A5DF8C; }
    at = s6 < s5;
    if (at == 0) goto L_00A5DF88;
    at = s5 < 16384;
    if (at == 0) goto L_00A5DF88;
    at = s0 < 81;
    if (at == 0) goto L_00A5DF88;
    a0 = (*(volatile u8 *) (u32) (s1 + 92));
    v0 = 6912;
    a1 = (*(volatile s32 *) (u32) (s1 + 28));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = v0 < a1;
    if (at == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00A5DF70; }
L_00A5DF68:;
    v0 = 1; goto L_00A5DF8C;
L_00A5DF70:;
    a0 = s1;
    v0 = v0 ^ 0x1;
    a1 = v0 & 0xff; v0 = func_0098F0C0(a0, a1);
    if (v0 != 0) goto L_00A5DF68;
L_00A5DF88:;
    v0 = 0;
L_00A5DF8C:;
    return v0;
}
