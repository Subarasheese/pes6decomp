/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209A00(s32, s32, s32);
void func_002727C0(s32, s32, s32, s32);
s32 func_00277360(s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_009E1CB0(s32, s32, s32, s32);
void func_00B25B70(s32);
void func_00BEC560(s32);
s32 func_00BF6270(void);

void func_00BEDFD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00BEE008; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00BEE008:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) 0x590000U;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a4 = 1;
    a5 = (*(volatile u8 *) (u32) (s0 + 18));
    a3 = -1;
    v0 = (s32) 0xc58c0000U;
    a1 = 16384;
    v0 = v0 | 0x42ab;
    v1 = 70;
    f0.i = (s32) v0;
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) 0x460a0000U;
    if (a5 != 0) a4 = a3;
    a2 = v0 | 0x6400;
    f1.i = (s32) a4;
    v0 = 4;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (s0 + 224)) = f0.f;
    (*(volatile u32 *) (u32) (s0 + 232)) = (u32) a2;
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (s0 + 38));
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) a1;
    (*(volatile u8 *) (u32) (s0 + 477)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v1;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
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
    s1 = (s32) ((u32) v0 + 0xf0U);
    a0 = s1; v0 = func_00277360(a0);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00BEE0E8; }
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 1434;
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = s1; goto L_00BEE0F8;
L_00BEE0E8:;
    a1 = 1435;
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = s1;
L_00BEE0F8:;
    v0 = func_00277360(a0);
    if (v0 != 0) { a0 = 1; goto L_00BEE118; }
    a0 = 5; func_00B25B70(a0);
    a0 = (*(volatile u8 *) (u32) s0); goto L_00BEE124;
L_00BEE118:;
    func_00B25B70(a0);
    a0 = (*(volatile u8 *) (u32) s0);
L_00BEE124:;
    func_00BEC560(a0);
    v1 = 224;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -6714)) = (u8) v1;
    a1 = 447;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + -6712)) = (u16) 0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -6732));
    a2 = 0; func_00209A00(a0, a1, a2);
    s0 = (s32) 0x590000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffe7f0U);
L_00BEE160:;
    s2 = (*(volatile u8 *) (u32) s0); v0 = func_00BF6270();
    if (s2 == v0) goto L_00BEE1E8;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
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
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 248));
    if (v0 != 0) goto L_00BEE1E8;
    v0 = (*(volatile u8 *) (u32) (v1 + 212));
    if (v0 == 0) goto L_00BEE1E8;
    f12.i = (s32) 0;
    a0 = s0;
    f13.i = f12.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) v0;
    v0 = 253;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0;
L_00BEE1E8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 22;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00BEE160; }
    a0 = 28; func_002727C0(a0, a1, a2, a3);
    a0 = 3; func_009E1CB0(a0, a1, a2, a3);
    return;
}
