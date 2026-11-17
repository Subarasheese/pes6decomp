/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00C12940(s32);
s32 func_00C13280(s32);
s32 func_00C132B0(s32);
s32 func_00C13510(s32, s32, s32);
void func_00C22390(s32, s32);

void func_00C58BE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    a0 = a2;
    f20.i = f12.i; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    a0 = s3;
    v0 = (s32) v0 >> 5;
    s2 = v0 & 0x1; v0 = func_00C132B0(a0);
    v1 = v0 & 0xff;
    a1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) v1 >> 5;
    a2 = (*(volatile s32 *) (u32) (v0 + 13488));
    s1 = v1 & 0x1;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0x34a8U); v0 = func_00C13510(a0, a1, a2);
    s0 = v0;
    v1 = -1;
    if (s0 == v1) goto L_00C58E10;
    a0 = s0; v0 = func_00C12940(a0);
    if (v0 == 0) goto L_00C58C74;
    goto L_00C58E14;
L_00C58C74:;
    a0 = s3; v0 = func_00C13280(a0);
    a0 = s0;
    s0 = (*(volatile u16 *) (u32) (v0 + 2)); v0 = func_00C13280(a0);
    a4 = s0 & 0xffff;
    a2 = 312;
    v0 = (*(volatile u16 *) (u32) (v0 + 2));
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) a2); hi = (s32) ((s32) a4 % (s32) a2); lo = q_; }
    a1 = hi;
    v1 = (s32) 0x42ad0000U;
    a0 = v1 | 0x2eeb;
    v1 = (s32) 0x46520000U;
    f0.i = (s32) a1;
    v1 = v1 | 0x6400;
    f3.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f2.i = (s32) v1;
    f1.f = f0.f - f2.f;
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a2); hi = (s32) ((s32) v0 % (s32) a2); lo = q_; }
    a0 = hi;
    v1 = (s32) 0xd20d0000U;
    a3 = v1 | 0x20d3;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f0.f = f0.f - f2.f;
    f4.f = f1.f - f0.f;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a4 >> 31);
    a1 = hi;
    v1 = (s32) 0x42a70000U;
    a0 = v1 | 0xfec;
    f3.i = (s32) a0;
    v1 = (s32) 0x46080000U;
    v1 = v1 | 0x6400;
    a0 = (s32) ((u32) a1 + (u32) a4);
    a0 = (s32) a0 >> 8;
    a0 = (s32) ((u32) a0 + (u32) a2);
    f0.i = (s32) a0;
    f2.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f1.f = f0.f - f2.f;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v0 >> 31);
    v1 = hi;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) v0 >> 8;
    v0 = (s32) ((u32) v0 + (u32) a0);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f3.f * f0.f;
    f0.f = f0.f - f2.f;
    f0.f = f1.f - f0.f;
    acc = f0.f * f0.f;
    f12.f = acc + f4.f * f4.f; f0.f = func_001CD9E0();
    v0 = (s32) 0x46520000U;
    s0 = (s32) ((u32) sp + 0x7cU);
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f12.f = f0.f / f1.f;
    f0.f = func_001CD9E0();
    v0 = (s32) 0x40e00000U;
    v1 = s2 & 0xff;
    f1.i = (s32) v0;
    f0.f = f1.f * f0.f;
    v0 = s1 & 0xff;
    f0.f = f20.f * f0.f;
    f1.f = f20.f * f0.f;
    { s32 c_ = v1 != v0; (*(volatile f32 *) (u32) s0) = f1.f; if (c_) goto L_00C58DF8; }
L_00C58DC4:;
    v0 = 24;
    a0 = s3;
    (*(volatile u8 *) (u32) (sp + 120)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 122)) = (u8) s1; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    a0 = s4;
    v0 = v0 & 0x1f;
    a1 = (s32) ((u32) sp + 0x78U);
    (*(volatile u8 *) (u32) (sp + 123)) = (u8) v0; func_00C22390(a0, a1);
    goto L_00C58E10;
L_00C58DF8:;
    v0 = (s32) 0xbfc00000U;
    f0.i = (s32) v0;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_00C58DC4;
L_00C58E10:;
L_00C58E14:;
    return;
}
