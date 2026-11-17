/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001E5410(void);
s32 func_00BBB1A0(s32);
s32 func_00C76850(s32);
s32 func_00C76890(void);
s32 func_00C76950(void);
s32 func_00C76A40(void);
s32 func_00C76A90(void);
void func_00C76AE0(s32, s32);
s32 func_00C76B40(void);
s32 func_00C76BC0(void);
s32 func_00C76C10(void);
s32 func_00C76C90(void);
s32 func_00C76CF0(s32, s32, s32);

void func_00C82DB0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };

    s1 = 0;
    s0 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) s0 + 0xffffcc30U);
L_00C82DD0:;
    a0 = s1; v0 = func_00C76CF0(a0, a1, a2);
    v1 = 1;
    if (v0 == v1) goto L_00C82DF0;
    v1 = 255;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1; goto L_00C82F58;
L_00C82DF0:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = (s32) ((u32) s0 + 0x14U); func_00C76AE0(a0, a1);
    v0 = (s32) 0x3f0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30614));
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; f0.f = func_001E5410();
    f1.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.f = f1.f * f0.f;
    f0.f = f0.f / f20.f;
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f; v0 = func_00C76A40();
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0; v0 = func_00C76890();
    (*(volatile u8 *) (u32) s0) = (u8) v0; v0 = func_00C76B40();
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; v0 = func_00C76C90();
    a0 = (*(volatile u8 *) (u32) (s0 + 12));
    v1 = v0 & 0x1;
    v0 = -2;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; v0 = func_00C76C10();
    v0 = v0 & 0x1;
    a0 = (*(volatile u8 *) (u32) (s0 + 12));
    v1 = (s32) ((u32) v0 << 1);
    v0 = -3;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; v0 = func_00C76950();
    if (v0 == 0) { v0 = 11; goto L_00C82E8C; }
    v0 = 10;
L_00C82E8C:;
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0; v0 = func_00C76BC0();
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    a0 = s1; v0 = func_00C76850(a0);
    v1 = 2;
    if (v0 == v1) goto L_00C82EC8;
    v1 = 1;
    if (v0 == v1) goto L_00C82EC8;
    if (v0 == 0) goto L_00C82EC8;
    v0 = 0;
L_00C82EC8:;
    v1 = 1;
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0; if (c_) goto L_00C82F08; }
    v1 = 2;
    if (v0 == v1) goto L_00C82EF0;
    v0 = func_00C76BC0();
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; goto L_00C82F10;
L_00C82EF0:;
    v0 = func_00C76A90();
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; v0 = func_00C76A40();
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; goto L_00C82F10;
L_00C82F08:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
L_00C82F10:;
    a0 = (*(volatile s8 *) (u32) (s0 + 4)); v0 = func_00BBB1A0(a0);
    v1 = v0 & 0x3;
    a0 = (*(volatile u8 *) (u32) (s0 + 12));
    a1 = (s32) ((u32) v1 << 2);
    a2 = -13;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s8 *) (u32) (v1 + 7605));
    a0 = a0 & a2;
    a0 = a0 | a1;
    { s32 c_ = v1 == 0; (*(volatile u8 *) (u32) (s0 + 12)) = (u8) a0; if (c_) goto L_00C82F58; }
    a1 = (*(volatile u8 *) (u32) (s0 + 12));
    v1 = 0 & 0x3;
    a0 = (s32) ((u32) v1 << 2);
    v1 = a1 & a2;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v1;
L_00C82F58:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 8;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x2cU); if (c_) goto L_00C82DD0; }
    return;
}
