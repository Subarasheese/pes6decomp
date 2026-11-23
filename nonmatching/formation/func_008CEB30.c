/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_001D7D80(s64, s64, s64, s64);
s64 func_001E6E10(s64);
s64 func_002DB830(s64);
s64 func_008B9D60(s64, s64, s64, s64);
s64 func_008B9F20(s64, s64, s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);
void func_008CDD20(s64, s64, s64, s64, s64, s64);

void func_008CEB30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s64 frame[30];
    s64 sp = (s32) (u32) frame;

    v1 = 16;
    s3 = a0;
    a0 = (s32) ((u32) sp + 0xc0U);
    { s32 c_ = a0 == 0; s0 = a1; if (c_) goto L_008CEB8C; }
L_008CEB70:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008CEB70;
L_008CEB8C:;
    f0.f = (*(volatile f32 *) (u32) (s3 + 48));
    { s32 c_ = s0 == 0; (*(volatile f32 *) (u32) (sp + 200)) = f0.f; if (c_) goto L_008CEED8; }
    s7 = (*(volatile s32 *) (u32) (s3 + 52));
    if (s7 == 0) { ; goto L_008CEEDC; }
    v0 = (*(volatile s32 *) (u32) (s3 + 512));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s3 + 512)); goto L_008CEBFC; }
    a0 = (*(volatile s32 *) (u32) (s3 + 500));
    a1 = (s32) ((u32) sp + 0xd0U);
    a2 = 113; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 208));
    a0 = 26;
    f0.f = (*(volatile f32 *) (u32) (sp + 212));
    a1 = (s32) ((u32) sp + 0xc0U);
    (*(volatile f32 *) (u32) (sp + 192)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 196)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s3 + 512)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s7 + 101));
    if (v0 <= 0) goto L_008CEBF8;
    a0 = (*(volatile s32 *) (u32) (s3 + 512));
    a1 = 1; func_001D7D80(a0, a1, a2, a3);
L_008CEBF8:;
    a0 = (*(volatile s32 *) (u32) (s3 + 512));
L_008CEBFC:;
    a1 = (s32) ((u32) sp + 0xd0U);
    a2 = 120; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 468)); v0 = func_002DB830(a0);
    fp = v0;
    a0 = 20188; v0 = func_001E6E10(a0);
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 212));
    a0 = (*(volatile u8 *) (u32) (s3 + 5));
    v1 = (*(volatile u8 *) (u32) (s3 + 4));
    s0 = v0;
    f0.i = (s32) f0.f;
    s2 = (s32) ((u32) 0 - (u32) a0);
    a0 = (s32) ((u32) v1 + (u32) a0);
    at = s2 < a0;
    v1 = f0.i;
    { s32 c_ = at == 0; { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_008CEED8; }
    v1 = (s32) ((u32) s7 + (u32) fp);
    s6 = (s32) ((u32) v1 + (u32) s2);
L_008CEC64:;
    a0 = (s32) ((u32) s2 + (u32) fp);
    if (a0 < 0) goto L_008CEEB8;
    v1 = (*(volatile u8 *) (u32) (s7 + 33));
    at = a0 < v1;
    if (at == 0) goto L_008CEEB8;
    v0 = (*(volatile u8 *) (u32) (s6 + 1));
    a0 = (s32) ((u32) s7 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (a0 + 368));
    s4 = (*(volatile u8 *) (u32) (a0 + 101));
    { s32 c_ = v0 == 0; s5 = (*(volatile u8 *) (u32) (a0 + 400)); if (c_) goto L_008CECB8; }
    v0 = (*(volatile u8 *) (u32) (a0 + 336));
    if (v0 == 0) goto L_008CECB0;
    v0 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_008CED38;
L_008CECB0:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_008CED38;
L_008CECB8:;
    v1 = (*(volatile u8 *) (u32) (a0 + 336));
    v0 = 2;
    if (v1 == v0) goto L_008CECE8;
    v0 = 1;
    if (v1 == v0) goto L_008CECE0;
    goto L_008CECF0;
L_008CECE0:;
    v0 = 0; goto L_008CED38;
L_008CECE8:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_008CED38;
L_008CECF0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 432));
    if (v0 == 0) goto L_008CED08;
    v0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_008CED38;
L_008CED08:;
    v1 = s4 & 0xff;
    if (v1 <= 0) goto L_008CED30;
    v0 = s5 & 0xff;
    v0 = v0 < v1;
    if (v0 != 0) goto L_008CED30;
    v0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_008CED38;
L_008CED30:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 4);
L_008CED38:;
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) v0 << 3);
    a2 = (*(volatile s32 *) (u32) (sp + 188));
    v0 = (s32) 0x8f0000U;
    a3 = (s32) ((u32) sp + 0xe8U);
    v0 = (s32) ((u32) v0 + 0xffffc0b0U);
    a0 = s0;
    a5 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) sp + 0xd0U);
    a4 = (*(volatile s16 *) (u32) a5);
    v1 = (*(volatile s16 *) (u32) (a5 + 2));
    v0 = (*(volatile s16 *) (u32) (a5 + 4));
    (*(volatile u16 *) (u32) (sp + 232)) = (u16) a4;
    (*(volatile u16 *) (u32) (sp + 234)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 236)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (a5 + 6));
    f0.i = (s32) v0;
    (*(volatile u16 *) (u32) (sp + 238)) = (u16) v0;
    f0.f = (f32) f0.i;
    v1 = (*(volatile u8 *) (u32) (s3 + 6));
    v0 = (*(volatile s16 *) (u32) (sp + 236));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); s1 = lo; }
    (*(volatile f32 *) (u32) (sp + 220)) = f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile f32 *) (u32) (sp + 216)) = f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 212)) = f0.f; v0 = func_008B9D60(a0, a1, a2, a3);
    a1 = s4 & 0xff;
    if (a1 == 0) goto L_008CEEB8;
    v0 = s5 & 0xff;
    a0 = 100;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) a0); hi = (s32) ((u32) v0 % (u32) a0); lo = q_; }
    v1 = hi;
    v0 = (s32) 0x66660000U;
    if ((u32) a0 != 0) { s64 q_ = (s32) ((u32) a1 / (u32) a0); hi = (s32) ((u32) a1 % (u32) a0); lo = q_; }
    s4 = v1 & 0xff;
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) s4 >> 31);
    a0 = hi;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a3 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = a3 == 0; s5 = a0 & 0xff; if (c_) goto L_008CEE28; }
    a0 = s3;
    a1 = s0;
    a2 = s1;
    a4 = 0;
    a5 = 0; func_008CDD20(a0, a1, a2, a3, a4, a5);
L_008CEE28:;
    v0 = 10;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) v0); hi = (s32) ((s32) s4 % (s32) v0); lo = q_; }
    a0 = s3;
    a1 = s0;
    a2 = s1;
    a4 = 1;
    a3 = hi;
    a5 = 0; func_008CDD20(a0, a1, a2, a3, a4, a5);
    v0 = (s32) 0x66660000U;
    s4 = s5 & 0xff;
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) s4 >> 31);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a3 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = a3 == 0; s5 = 2; if (c_) goto L_008CEE90; }
    a0 = s3;
    a1 = s0;
    a2 = s1;
    a4 = s5;
    a5 = 0; func_008CDD20(a0, a1, a2, a3, a4, a5);
    s5 = (s32) ((u32) s5 + 0x1U);
L_008CEE90:;
    v0 = 10;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s4 / (s32) v0); hi = (s32) ((s32) s4 % (s32) v0); lo = q_; }
    a2 = s1;
    a4 = s5;
    a0 = s3;
    a1 = s0;
    a3 = hi;
    a5 = 0; func_008CDD20(a0, a1, a2, a3, a4, a5);
L_008CEEB8:;
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    v1 = (*(volatile u8 *) (u32) (s3 + 5));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = s2 < v1;
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x1U); if (c_) goto L_008CEC64; }
L_008CEED8:;
L_008CEEDC:;
    return;
}
