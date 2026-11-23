/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001DF420(s64, s64);
void func_001ED8F0(s64, s64);
s64 func_002D5870(s64);
s64 func_002D58A0(s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

s64 func_00919CB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) gp + 0xffffb1dcU);
    v0 = (s32) ((u32) v0 + 0xffff9fc0U);
    a0 = (*(volatile s32 *) (u32) (gp + -20008));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s1 = (*(volatile s32 *) (u32) (v1 + 16));
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; s0 = 0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = 1;
    if (v0 != v1) { v0 = (u64) s1 < (u64) (s64) 8; goto L_00919D10; }
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (u64) s1 < (u64) (s64) 8;
L_00919D10:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_00919D20; }
    s0 = 1;
    v0 = (*(volatile s32 *) (u32) (gp + -20008));
L_00919D20:;
    v1 = (s32) ((u32) gp + 0xffffb1dcU);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) s1;
    v0 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D5870(a0);
    if (v0 == 0) goto L_00919E90;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D58A0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    s2 = v0;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00919E90;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s3 = 0; if (c_) goto L_00919DE8; }
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_00919DB0:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s2 & 0xff; func_001D76B0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_00919DB0; }
L_00919DE8:;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s3 = 1; goto L_00919E3C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_00919E30; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_00919E30:;
    a1 = s2 & 0xff; func_001ED8F0(a0, a1);
    s3 = 1;
L_00919E3C:;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_00919E40:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = s3;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00919E70;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00919E70:;
    a0 = s1;
    a1 = s2 & 0xff; func_001DF420(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = s3 < 11;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_00919E40; }
L_00919E90:;
    v0 = s0;
    return v0;
}
