/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00152130(s32, s32, s32, s32, s32);
void func_001861A0(void);
void func_001A54F0(s32);
void func_001A55C0(s32);
f32 func_001A5660(void);
void func_002727C0(s32, s32, s32, s32);
void func_00278700(s32);
s32 func_0029A0A0(void);
s32 func_002DCA30(void);
s32 func_009B4620(void);
void func_00B26320(s32);
void func_00B26490(s32);
s32 func_00B275E0(s32, f32, f32);

s32 func_00BCDE90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = func_002DCA30();
    if (v0 == 0) goto L_00BCDEC4;
    a0 = 1;
    a1 = 255; v0 = func_00152130(a0, a1, a2, a3, a4);
L_00BCDEC4:;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2720U); func_001A55C0(a0);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2710U); func_001A54F0(a0);
    f0.f = func_001A5660();
    (*(volatile f32 *) (u32) (gp + -19500)) = f0.f;
    a0 = 1; func_00278700(a0);
    func_001861A0();
    v0 = (s32) 0xcc0000U;
    a0 = 10;
    (*(volatile u8 *) (u32) (v0 + -22008)) = (u8) 0; func_002727C0(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) 0; v0 = func_0029A0A0();
    v1 = 4;
    if (v0 != v1) goto L_00BCE038;
L_00BCDF20:;
    v1 = (s32) 0xcc0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0xffffafb0U);
L_00BCDF2C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x7U);
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) 0;
    v0 = a0 < 16;
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 6)) = (u8) 0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x7U); if (c_) goto L_00BCDF2C; }
    s2 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) a0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0xffffafb0U);
    a0 = (s32) ((u32) s2 + (u32) a0);
    v1 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v1 = 5;
    if (a0 == v1) goto L_00BCE058;
    v0 = 10;
    if (a0 == v0) goto L_00BCE058;
    s0 = 0;
    s1 = 0;
L_00BCDF9C:;
    v0 = 255;
    if (s0 == v0) { a0 = 1; goto L_00BCDFB4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BCDFB4:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = 1;
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    v0 = (s32) ((u32) a0 << 6);
    a0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) 0xcc0000U;
    v1 = 852;
    a1 = (*(volatile u16 *) (u32) (v0 + -22012));
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -32228));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (*(volatile s16 *) (u32) (v0 + 4));
    v0 = (*(volatile s16 *) (u32) (v0 + 8));
    f1.i = (s32) v1;
    f12.f = (f32) f1.i;
    f0.i = (s32) v0;
    f13.f = (f32) f0.i; v0 = func_00B275E0(a0, f12.f, f13.f);
    if (v0 == 0) { (*(volatile u8 *) (u32) s2) = (u8) 0; goto L_00BCE01C; }
L_00BCE01C:;
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s0 < 23;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x24U); if (c_) goto L_00BCDF9C; }
L_00BCE030:;
    goto L_00BCE134;
L_00BCE038:;
    v0 = func_009B4620();
    a0 = v0; func_00B26490(a0);
    a0 = 1; func_00B26320(a0);
    goto L_00BCDF20;
L_00BCE058:;
    s4 = (s32) 0xcc0000U;
    s2 = 0;
    s4 = (s32) ((u32) s4 + 0xffffafb0U);
    s3 = 0;
L_00BCE068:;
    v0 = 255;
    if (s2 == v0) { a0 = 1; goto L_00BCE080; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BCE080:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = 1;
    (*(volatile u8 *) (u32) s4) = (u8) v0;
    v0 = (s32) ((u32) a0 << 6);
    s1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v0 + -22012));
L_00BCE0A8:;
    v0 = 300;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s0 = hi;
    v1 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = 852;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v1 = (s32) ((u32) s3 + (u32) v1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) (v0 + 4));
    v0 = (*(volatile s16 *) (u32) (v0 + 8));
    f1.i = (s32) v1;
    f12.f = (f32) f1.i;
    f0.i = (s32) v0;
    f13.f = (f32) f0.i; v0 = func_00B275E0(a0, f12.f, f13.f);
    if (v0 != 0) goto L_00BCE0FC;
    (*(volatile u8 *) (u32) s4) = (u8) 0; goto L_00BCE118;
L_00BCE0FC:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -22014));
    if (s0 == v1) goto L_00BCE118;
    v1 = (s32) ((u32) s0 + 0x1U); goto L_00BCE0A8;
L_00BCE118:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 23;
    s4 = (s32) ((u32) s4 + 0x1U);
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x24U); if (c_) goto L_00BCE068; }
    goto L_00BCE030;
L_00BCE134:;
    return v0;
}
