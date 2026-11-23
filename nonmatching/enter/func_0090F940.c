/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001AFD80(s32, s32, f32);
void func_001B36A0(s32, s32, s32, s32);
s32 func_00208330(s32);

void func_0090F940(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s0 = a0;
    a0 = (*(volatile u16 *) (u32) (a0 + 16)); v0 = func_00208330(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    if (v1 == 0) { ; goto L_0090FDA8; }
    v1 = (s32) 0x930000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -3888));
    v1 = a1 & 0x2000;
    if (v1 == 0) { v1 = 1; goto L_0090F984; }
    v1 = 2;
L_0090F984:;
    a0 = (*(volatile u8 *) (u32) (s0 + 4));
    { s32 c_ = a0 != 0; v1 = v1 & 0xff; if (c_) goto L_0090F99C; }
    a0 = a1 & 0x10;
    if (a0 == 0) goto L_0090FDA4;
L_0090F99C:;
    f2.f = (*(volatile f32 *) (u32) (s0 + 24));
    a0 = (s32) 0x3a830000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 52));
    a0 = a0 | 0x126f;
    f0.i = (s32) a0;
    f1.f = f1.f + f2.f;
    (*(volatile f32 *) (u32) (s0 + 52)) = f1.f;
    f2.f = (*(volatile f32 *) (u32) (s0 + 52));
    a2 = (*(volatile u16 *) (u32) (s0 + 16));
    a1 = (*(volatile s32 *) (u32) (gp + -32420));
    f1.f = f0.f + f2.f;
    a0 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (a0 + 12248));
    f0.f = (f32) f0.i;
    fcc = f0.f <= f1.f;
    if (!fcc) { f0.f = (*(volatile f32 *) (u32) (s0 + 52)); goto L_0090FA14; }
    a0 = a2 < 1434;
    if (a0 != 0) goto L_0090FA10;
    f1.f = f2.f - f0.f;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) (s0 + 52)) = f1.f; if (c_) goto L_0090FA10; }
    (*(volatile f32 *) (u32) (s0 + 52)) = f0.f;
L_0090FA10:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 52));
L_0090FA14:;
    a0 = (s32) 0x3b0000U;
    at = (s32) 0xfffe0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -852));
    at = at | 0xff1d;
    f0.i = (s32) f0.f;
    a0 = (s32) ((u32) a0 + (u32) at);
    at = (u64) a0 < (u64) (s64) 20;
    a2 = f0.i;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 12)); goto L_0090FA98; }
    a1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + 0xffffe030U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0x90fa58U) goto L_0090FA58; if (t_ == 0x90fa78U) goto L_0090FA78; if (t_ == 0x90fa94U) goto L_0090FA94; }
L_0090FA58:;
    a1 = (*(volatile u16 *) (u32) (s0 + 16));
    a0 = 1434;
    if (a1 == a0) { a0 = 1792; goto L_0090FA70; }
    goto L_0090FA94;
L_0090FA70:;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) a0; goto L_0090FA94;
L_0090FA78:;
    a1 = (*(volatile u16 *) (u32) (s0 + 16));
    a0 = 1445;
    if (a1 == a0) { a0 = 384; goto L_0090FA90; }
    goto L_0090FA94;
L_0090FA90:;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) a0;
L_0090FA94:;
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
L_0090FA98:;
    a1 = v1 & 0xff;
    v1 = (s32) a2 >> 1;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s32 c_ = a2 >= 0; (*(volatile u32 *) (u32) (s0 + 12)) = (u32) a0; if (c_) goto L_0090FAB4; }
    v1 = (s32) ((u32) a2 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0090FAB4:;
    v1 = (s32) ((u32) v1 << 1);
    at = 0x8000;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    v0 = (*(volatile u8 *) (u32) v0);
    a0 = (s32) ((u32) v0 << 8);
    at = a0 < at;
    if (at == 0) { v0 = (*(volatile u16 *) (u32) (s0 + 20)); goto L_0090FAE8; }
    v0 = (*(volatile u16 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u16 *) (u32) (s0 + 22)) = (u16) v0; goto L_0090FAF8;
L_0090FAE8:;
    v1 = (s32) 0x10000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u16 *) (u32) (s0 + 22)) = (u16) v0;
L_0090FAF8:;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v1 = a1 & 0xff;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s32 c_ = v0 >= 0; a2 = (s32) v0 >> 8; if (c_) goto L_0090FB14; }
    v0 = (s32) ((u32) v0 + 0xffU);
    a2 = (s32) v0 >> 8;
L_0090FB14:;
    { s32 c_ = a2 != 0; (*(volatile u32 *) (u32) (s0 + 8)) = (u32) a2; if (c_) goto L_0090FB28; }
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) 0; goto L_0090FBCC;
L_0090FB28:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile u16 *) (u32) (s0 + 22));
    f0.f = (*(volatile f32 *) (u32) (v1 + 7148));
    a0 = (s32) ((u32) a0 + 0xffffdc30U);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a1 + 0xffffc000U);
    v1 = v1 & 0xffff;
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) v1);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) v1 >> 12;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (s0 + 40)) = f0.f;
    v1 = (*(volatile u16 *) (u32) (s0 + 22));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7148));
    v1 = (s32) v1 >> 7;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) v1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    v0 = (s32) v0 >> 12;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (s0 + 48)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 40));
    f0.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s0 + 28)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 48));
    f0.f = (*(volatile f32 *) (u32) (s0 + 36));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s0 + 36)) = f0.f;
L_0090FBCC:;
    v1 = (*(volatile u16 *) (u32) (s0 + 20));
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v0 + 496)) = (u16) v1;
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (s0 + 28));
    v0 = (*(volatile s32 *) (u32) (v0 + 472));
    (*(volatile f32 *) (u32) v0) = f0.f;
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    v0 = (*(volatile s32 *) (u32) (v0 + 472));
    (*(volatile f32 *) (u32) (v0 + 4)) = f0.f;
    v0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (s0 + 36));
    v0 = (*(volatile s32 *) (u32) (v0 + 472));
    (*(volatile f32 *) (u32) (v0 + 8)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s0);
    f12.f = (*(volatile f32 *) (u32) (s0 + 52));
    v1 = (*(volatile u16 *) (u32) (s0 + 16));
    v0 = (*(volatile s32 *) (u32) (gp + -32420));
    a0 = (*(volatile s32 *) (u32) (a0 + 16));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (a0 + 36));
    a1 = (*(volatile s32 *) (u32) (v0 + 6028));
    s1 = (*(volatile s32 *) (u32) (v1 + 4));
    a0 = s1; func_001AFD80(a0, a1, f12.f);
    (*(volatile u8 *) (u32) (s1 + 31)) = (u8) 0;
    f0.f = (*(volatile f32 *) (u32) (s0 + 52));
    v1 = (*(volatile u16 *) (u32) (s0 + 16));
    v0 = (*(volatile s32 *) (u32) (gp + -32420));
    f0.i = (s32) f0.f;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile s32 *) (u32) (v0 + 6028));
    a2 = f0.i;
    a3 = (*(volatile u8 *) (u32) (s0 + 18)); func_001B36A0(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0x10000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -852));
    v1 = a0 | 0xfb;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xf0;
    if (a1 == v1) { a0 = (*(volatile u16 *) (u32) (s0 + 16)); goto L_0090FD70; }
    v1 = a0 | 0xee;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xed;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xec;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xeb;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xe8;
    if (a1 == v1) { a0 = (*(volatile u16 *) (u32) (s0 + 16)); goto L_0090FD3C; }
    v1 = a0 | 0xf6;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xf5;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xf4;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xf3;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xe7;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xe6;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xe5;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xe4;
    if (a1 == v1) goto L_0090FDA4;
    v1 = a0 | 0xe3;
    if (a1 == v1) goto L_0090FDA4;
    goto L_0090FDA4;
L_0090FD3C:;
    v1 = 1434;
    if (a0 == v1) { f1.f = (*(volatile f32 *) (u32) (s0 + 52)); goto L_0090FD50; }
    goto L_0090FDA4;
L_0090FD50:;
    v1 = (s32) 0x427c0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0090FDA4;
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) 0; goto L_0090FDA4;
L_0090FD70:;
    v1 = 1445;
    if (a0 == v1) { f1.f = (*(volatile f32 *) (u32) (s0 + 52)); goto L_0090FD84; }
    goto L_0090FDA4;
L_0090FD84:;
    v1 = (s32) 0x43050000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0090FDA4;
    v1 = (s32) 0x41800000U;
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v1;
L_0090FDA4:;
L_0090FDA8:;
    return;
}
