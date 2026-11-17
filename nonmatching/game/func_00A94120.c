/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B30B0(s64, s64);
void func_009B3500(s64, s64, s64, s64);
s64 func_009F4C40(s64, f32);
s64 func_00A08690(s64);
s64 func_00A19D40(s64, s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_00AB3590(s64, s64);
f32 func_00AB4270(s64);
s64 func_00B04470(s64, s64, s64);
s64 func_00B044D0(s64, s64);

s64 func_00A94120(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, a5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s7 = a4;
    s6 = a1;
    s2 = a0;
    s1 = a2;
    s0 = a3;
    f0.f = func_00AB4270(a0);
    f20.i = f0.i;
    a0 = 12;
    f12.i = f0.i; v0 = func_009F4C40(a0, f12.f);
    fp = v0;
    a0 = s6;
    a1 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) v0 << 8);
    { s32 c_ = v0 >= 0; s4 = (s32) v0 >> 6; if (c_) goto L_00A941A0; }
    v0 = (s32) ((u32) v0 + 0x3fU);
    s4 = (s32) v0 >> 6;
L_00A941A0:;
    a2 = (*(volatile u8 *) (u32) (s2 + 18));
    a1 = (s32) 0x590000U;
    v0 = (s32) 0xb30f0000U;
    a0 = (*(volatile u8 *) (u32) (s2 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = v0 | 0x6353;
    s3 = (s32) ((u32) fp << 2);
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 140));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 58);
    a0 = (s32) ((u32) v1 + 0x94U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 - (u32) v1);
    a1 = (s32) ((u32) v1 << 5);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a0);
    f1.i = (s32) v1;
    v0 = (s32) ((u32) s3 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 2044));
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (fcc) { a0 = s2; goto L_00A94430; }
    v0 = (s32) 0x1900000U;
    v0 = s7 < v0;
    if (v0 != 0) { a0 = 551; goto L_00A944B4; }
    a0 = (*(volatile u8 *) (u32) (s2 + 92));
    v0 = 4864;
    a1 = (*(volatile s32 *) (u32) (s2 + 28));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = v0 < a1;
    if (at == 0) goto L_00A944FC;
    a1 = (*(volatile u16 *) (u32) (s2 + 40));
    a0 = (*(volatile u16 *) (u32) (s2 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 33;
    if (at == 0) goto L_00A944FC;
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 33;
    if (at == 0) goto L_00A944FC;
    a0 = 12;
    a1 = 90;
    s3 = (s64) ((u64) 0 + (u64) (s64) 12); v0 = func_00B044D0(a0, a1);
    v0 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 8; if (c_) goto L_00A942DC; }
    v0 = (s32) ((u32) v1 + 0xffU);
    v0 = (s32) v0 >> 8;
L_00A942DC:;
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    s5 = s1 & 0xffff;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x6400000U;
    at = s7 < at;
    v0 = (s32) ((u32) s5 + (u32) v0);
    { s32 c_ = at == 0; s1 = v0 & 0xffff; if (c_) goto L_00A9434C; }
    a0 = 550;
    a1 = 90;
    s3 = (s64) ((u64) 0 + (u64) (s64) 550); v0 = func_00B044D0(a0, a1);
    v0 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 8; if (c_) goto L_00A94330; }
    v0 = (s32) ((u32) v1 + 0xffU);
    v0 = (s32) v0 >> 8;
L_00A94330:;
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) s5 + (u32) v0);
    s1 = v0 & 0xffff;
L_00A9434C:;
    a5 = fp;
    a4 = s0 & 0xff;
    f12.i = f20.i;
    a0 = s2;
    a1 = s3;
    a2 = 0;
    a3 = s1; v0 = func_00A19D40(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    if (v0 != 0) goto L_00A94420;
    a1 = (*(volatile u16 *) (u32) (s2 + 40));
    a0 = s6; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00A943F4;
    a0 = s2; v0 = func_00A08690(a0);
    if (v0 == 0) goto L_00A943F4;
    a3 = (*(volatile u16 *) (u32) (s2 + 38));
    v1 = (s32) 0x10000U;
    a2 = (*(volatile u16 *) (u32) (s2 + 40));
    v0 = 0x8001;
    a0 = 395;
    a1 = 90;
    s3 = (s64) ((u64) 0 + (u64) (s64) 395);
    a2 = (s32) ((u32) a3 - (u32) a2);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v1 = v1 & 0xffff;
    s0 = v1 < v0; v0 = func_00B044D0(a0, a1);
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile u16 *) (u32) (s2 + 38));
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xffff; goto L_00A94420;
L_00A943F4:;
    a0 = s2;
    a1 = 226;
    s3 = (s64) ((u64) 0 + (u64) (s64) 226); v0 = func_00AB3590(a0, a1);
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) s5 + (u32) v0);
    s1 = v0 & 0xffff;
L_00A94420:;
    v1 = (s32) 0x590000U;
    v0 = s3;
    (*(volatile u16 *) (u32) (v1 + 8814)) = (u16) s1; goto L_00A9454C;
L_00A94430:;
    a1 = 255;
    a2 = 0;
    s2 = (s64) ((u64) 0 + (u64) (s64) 255); func_009B3500(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    v0 = (s32) ((u32) s3 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2044));
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A94464;
    s2 = (s64) ((u64) 0 + (u64) (s64) 256);
L_00A94464:;
    a0 = s2;
    a1 = 90; v0 = func_00B044D0(a0, a1);
    v0 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 8; if (c_) goto L_00A94488; }
    v0 = (s32) ((u32) v1 + 0xffU);
    v0 = (s32) v0 >> 8;
L_00A94488:;
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v0 = s2;
    a0 = s1 & 0xffff;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u16 *) (u32) (v1 + 8814)) = (u16) a0; goto L_00A9454C;
L_00A944B4:;
    a1 = 90;
    s3 = (s64) ((u64) 0 + (u64) (s64) 551); v0 = func_00B044D0(a0, a1);
    v0 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 8; if (c_) goto L_00A944D8; }
    v0 = (s32) ((u32) v1 + 0xffU);
    v0 = (s32) v0 >> 8;
L_00A944D8:;
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = s1 & 0xffff;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xffff; goto L_00A94420;
L_00A944FC:;
    a0 = 10;
    a1 = 36;
    a2 = 90;
    s3 = (s64) ((u64) 0 + (u64) (s64) 10); v0 = func_00B04470(a0, a1, a2);
    v0 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 8; if (c_) goto L_00A94528; }
    v0 = (s32) ((u32) v1 + 0xffU);
    v0 = (s32) v0 >> 8;
L_00A94528:;
    a0 = v0 & 0xffff;
    v1 = 1;
    v0 = -1;
    s5 = s1 & 0xffff;
    if (s0 != 0) v1 = v0;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) s5 + (u32) v0);
    s1 = v0 & 0xffff; goto L_00A9434C;
L_00A9454C:;
    return v0;
}
