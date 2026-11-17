/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_002AE670(s32);
s32 func_009B3070(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00A1B990(s32);
void func_00AA9F90(s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_00BBB990(s32, s32);

s32 func_00B95380(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    s2 = a0;
    v0 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
    at = (u64) v0 < (u64) (s64) 13;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00B95414; }
    v1 = 1;
    v0 = (s32) ((u32) v1 << (v0 & 31));
    v0 = v0 & 0x10dd;
    if (v0 == 0) goto L_00B95414;
    s0 = v1; goto L_00B95414;
L_00B953C8:;
    if (s0 != 0) goto L_00B953DC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9958));
    s1 = (s32) ((u32) s1 + (u32) v0);
L_00B953DC:;
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 16;
    if (v1 != v0) goto L_00B953F8;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9958));
    s1 = (s32) ((u32) s1 + (u32) v0);
L_00B953F8:;
    v0 = 20;
    if (v1 == v0) { a0 = 100; goto L_00B95450; }
L_00B95404:;
    if (s0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00B95460; }
L_00B9540C:;
    v0 = s1; goto L_00B956D8;
L_00B95414:;
    a0 = s2;
    a1 = s2;
    a2 = 8448;
    a3 = 0;
    a4 = 0;
    a5 = -256; func_00AA9F90(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    s1 = (*(volatile u8 *) (u32) (v0 + 104));
    a0 = s2; v0 = func_00A1B990(a0);
    if (v0 == 0) goto L_00B953DC;
    goto L_00B953C8;
L_00B95450:;
    v0 = func_002AE670(a0);
    s1 = (s32) ((u32) s1 + (u32) v0); goto L_00B95404;
L_00B95460:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 5204));
    f13.f = (*(volatile f32 *) (u32) (v0 + 5212));
    a0 = s2; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile u16 *) (u32) (s2 + 40));
    a1 = v0; v0 = func_009B3070(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s2 + 28));
    a0 = v0; v0 = func_00BBB990(a0, a1);
    v1 = 8448;
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    s0 = (s32) ((u32) v1 - (u32) v0);
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a3 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    a2 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a2 = (s32) ((u32) a2 - (u32) a3);
    v0 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 111));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) v0 >> 31);
    a1 = hi;
    v1 = (*(volatile u8 *) (u32) (s2 + 94));
    a0 = (*(volatile u8 *) (u32) (s2 + 92));
    v0 = 6400;
    a1 = (s32) a1 >> 2;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x28U);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a1); hi = (s32) ((s32) v0 % (s32) a1); lo = q_; }
    v0 = lo;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v1 = lo;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00B95544; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00B95544:;
    at = v0 < 33;
    if (at == 0) { a2 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00B95618; }
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 111));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) v0 >> 31);
    a1 = hi;
    v1 = (*(volatile u8 *) (u32) (s2 + 94));
    a0 = (*(volatile u8 *) (u32) (s2 + 92));
    v0 = 6400;
    a1 = (s32) a1 >> 2;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x28U);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a1); hi = (s32) ((s32) v0 % (s32) a1); lo = q_; }
    v0 = lo;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v0 = lo;
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_00B95604; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v0 >> 1;
L_00B95604:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x26dcU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_00B956D0;
L_00B95618:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 111));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) v0 >> 31);
    a1 = hi;
    v1 = (*(volatile u8 *) (u32) (s2 + 94));
    a0 = (*(volatile u8 *) (u32) (s2 + 92));
    v0 = 6400;
    a1 = (s32) a1 >> 2;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x28U);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a1); hi = (s32) ((s32) v0 % (s32) a1); lo = q_; }
    v0 = lo;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v0 = lo;
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 1; if (c_) goto L_00B956C8; }
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = (s32) v0 >> 1;
L_00B956C8:;
    v0 = func_002AE670(a0);
L_00B956D0:;
    s1 = (s32) ((u32) s1 + (u32) v0); goto L_00B9540C;
L_00B956D8:;
    return v0;
}
