/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Math_Atan2Fixed(s32, s32, s32, s32);
s32 func_00C18700(void);
s32 func_00C18C50(f32, f32);

void func_00C0F780(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;

    v1 = 3;
    v0 = 0;
    s1 = a0;
    a3 = (*(volatile u8 *) (u32) (a2 + 27));
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) a3;
    a3 = (*(volatile u8 *) (u32) (a2 + 29));
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a3;
    a0 = (*(volatile s32 *) (u32) (a2 + 8));
    { s32 c_ = a0 == v1; s0 = a2; if (c_) goto L_00C0F804; }
    v1 = 2;
    if (a0 == v1) { v0 = v0 | 0x2; goto L_00C0F7FC; }
    v1 = 4;
    if (a0 == v1) { v0 = v0 | 0x1; goto L_00C0F7F4; }
    v1 = 1;
    if (a0 == v1) { v0 = v0 | 0x50; goto L_00C0F7EC; }
    v1 = (*(volatile u8 *) (u32) (s0 + 30)); goto L_00C0F810;
L_00C0F7EC:;
    v0 = v0 & 0xff; goto L_00C0F80C;
L_00C0F7F4:;
    v0 = v0 & 0xff; goto L_00C0F80C;
L_00C0F7FC:;
    v0 = v0 & 0xff; goto L_00C0F80C;
L_00C0F804:;
    v0 = v0 | 0x3;
    v0 = v0 & 0xff;
L_00C0F80C:;
    v1 = (*(volatile u8 *) (u32) (s0 + 30));
L_00C0F810:;
    if (v1 == 0) goto L_00C0F820;
    v0 = v0 | 0x4;
    v0 = v0 & 0xff;
L_00C0F820:;
    v1 = (*(volatile u8 *) (u32) (s0 + 31));
    if (v1 == 0) goto L_00C0F834;
    v0 = v0 | 0x8;
    v0 = v0 & 0xff;
L_00C0F834:;
    v1 = 5;
    if (a1 != v1) goto L_00C0F8B0;
    v1 = (*(volatile s32 *) (u32) (s0 + 12));
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_00C0F8B0;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x32b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc0f86cU) goto L_00C0F86C; if (t_ == 0xc0f878U) goto L_00C0F878; if (t_ == 0xc0f884U) goto L_00C0F884; if (t_ == 0xc0f890U) goto L_00C0F890; if (t_ == 0xc0f89cU) goto L_00C0F89C; if (t_ == 0xc0f8a8U) goto L_00C0F8A8; if (t_ == 0xc0f8b0U) goto L_00C0F8B0; }
L_00C0F86C:;
    v0 = v0 | 0x10;
    v0 = v0 & 0xff; goto L_00C0F8B0;
L_00C0F878:;
    v0 = v0 | 0x20;
    v0 = v0 & 0xff; goto L_00C0F8B0;
L_00C0F884:;
    v0 = v0 | 0x30;
    v0 = v0 & 0xff; goto L_00C0F8B0;
L_00C0F890:;
    v0 = v0 | 0x40;
    v0 = v0 & 0xff; goto L_00C0F8B0;
L_00C0F89C:;
    v0 = v0 | 0x50;
    v0 = v0 & 0xff; goto L_00C0F8B0;
L_00C0F8A8:;
    v0 = v0 | 0x60;
    v0 = v0 & 0xff;
L_00C0F8B0:;
    v1 = 4;
    if (a1 != v1) goto L_00C0F918;
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (a0 == v1) { v0 = v0 | 0x40; goto L_00C0F914; }
    v1 = 3;
    if (a0 == v1) { v0 = v0 | 0x20; goto L_00C0F90C; }
    v1 = 2;
    if (a0 == v1) { v0 = v0 | 0x10; goto L_00C0F904; }
    v1 = 1;
    if (a0 == v1) { v0 = v0 | 0x30; goto L_00C0F8FC; }
    if (a0 == 0) goto L_00C0F918;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v0; goto L_00C0F91C;
L_00C0F8FC:;
    v0 = v0 & 0xff; goto L_00C0F918;
L_00C0F904:;
    v0 = v0 & 0xff; goto L_00C0F918;
L_00C0F90C:;
    v0 = v0 & 0xff; goto L_00C0F918;
L_00C0F914:;
    v0 = v0 & 0xff;
L_00C0F918:;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v0;
L_00C0F91C:;
    f13.f = (*(volatile f32 *) (u32) (s0 + 4));
    f12.f = (*(volatile f32 *) (u32) s0); v0 = func_00C18C50(f12.f, f13.f);
    (*(volatile u16 *) (u32) (s1 + 2)) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 27));
    f20.f = (*(volatile f32 *) (u32) (s0 + 4));
    f21.f = (*(volatile f32 *) (u32) s0);
    v0 = (s32) v0 >> 5;
    s0 = v0 & 0x1; v0 = func_00C18700();
    v1 = v0 & 0xff;
    v0 = s0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00C0F964; }
    if (v0 == 0) goto L_00C0F964;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00C0F964:;
    v1 = (s32) ((u32) v0 << 1);
    v0 = 1;
    v0 = (s32) ((u32) v0 - (u32) v1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f1.f = f21.f * f0.f;
    f0.f = f20.f * f0.f;
    f0.i = f0.i ^ (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    f0.i = (s32) f1.f;
    a1 = f0.i;
    v0 = Pes6Math_Atan2Fixed(a0, a1, a2, a3);
    a0 = v0 & 0xffff;
    v1 = (s32) 0x80000000U;
    a1 = (s32) ((u32) a0 << 8);
    v1 = v1 | 0x1;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 15;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) v1;
    return;
}
