/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00207D10(s32);
void func_00208610(s32, s32, s32);
void func_00209820(void);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B2ACF0(s32, s32, s32, s32);
void func_00B35E10(s32, s32, s32);
void func_00B84790(s32, s32, s32, s32, s32, f32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD4040(s32, s32);

void func_00BDA490(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + -10916));
    a2 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = a2 == v0; s1 = a0; if (c_) goto L_00BDA5C0; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (*(volatile u8 *) (u32) (v0 + -12928));
    f0.i = (s32) f0.f;
    at = 0 < v1;
    a1 = f0.i;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00BDA500; }
    a0 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a0 + 0xffffd558U);
L_00BDA4E4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 5));
    if (a2 == v0) goto L_00BDA500;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < v1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_00BDA4E4; }
L_00BDA500:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12916)) = (u8) s0;
    v1 = (s32) ((u32) s0 << 1);
    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffcd70U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    at = a1 < v0;
    if (at == 0) goto L_00BDA5C0;
    a0 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x40a00000U;
    f1.i = (s32) v0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    f0.f = (*(volatile f32 *) (u32) (v1 + 40));
    f0.f = f1.f * f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 == 0) goto L_00BDA5C0;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v0); hi = (s32) ((s32) a1 % (s32) v0); lo = q_; }
    v0 = hi;
    if (v0 != 0) goto L_00BDA5C0;
    a2 = (*(volatile u16 *) (u32) (a0 + 38));
    f12.i = (s32) 0;
    a1 = (*(volatile u16 *) (u32) (v1 + 48));
    a4 = 1;
    a3 = (*(volatile u8 *) (u32) (v1 + 45));
    a0 = s1; func_00B84790(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcc70U);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffccb0U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 7788));
    f15.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) 0x590000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f14.f = (*(volatile f32 *) (u32) a0); v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u16 *) (u32) (v1 + 66)) = (u16) v0;
L_00BDA5C0:;
    a0 = s1; func_00B2ACF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00209820();
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00BDA5F0; }
L_00BDA5E8:;
    goto L_00BDA644;
L_00BDA5F0:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00208610(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = s1;
    a1 = (s32) ((u32) v0 + 0x6cU);
    a2 = (s32) ((u32) v0 + 0x70U); func_00B35E10(a0, a1, a2);
    a0 = s1;
    a1 = 2; func_00BD4040(a0, a1);
    a0 = s1;
    a1 = 5;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = 128;
    a0 = 255;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a1;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v1 + 81)) = (u8) a0; goto L_00BDA5E8;
L_00BDA644:;
    return;
}
