/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00143300(s32, s32, s32, s32);
void func_0017D710(s32, s32, f32, f32);
void func_0017DB10(s32, s32, f32, f32);
void func_0017DCE0(s32, s32, s32);
void func_0017DEC0(s32, s32, s32, s32);
void func_0017DF20(s32, s32, s32);
void func_0017DF40(s32, s32, s32);

void func_001ADC30(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;

    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    a1 = 121;
    s1 = a0;
    v1 = (*(volatile u8 *) (u32) a0);
    s0 = (*(volatile s32 *) (u32) (a0 + 16));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = s0;
    s2 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (s2 + 102));
    a2 = (s32) ((u32) v0 + 0x247cU); func_0017DF20(a0, a1, a2);
    a0 = s0;
    a1 = 121;
    a2 = 9489; func_0017DF40(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s2 + 102));
    a0 = s0;
    a1 = 121;
    a2 = (s32) ((u32) v0 + 0x247cU); func_0017DF20(a0, a1, a2);
    a0 = s0;
    a1 = 121;
    a2 = 1; func_0017DCE0(a0, a1, a2);
    v1 = (s32) 0x41000000U;
    v0 = (s32) 0x41800000U;
    f12.i = (s32) v1;
    a0 = s0;
    f13.i = (s32) v0;
    a1 = 121; func_0017D710(a0, a1, f12.f, f13.f);
    v0 = (s32) 0x3e000000U;
    v1 = (*(volatile u8 *) (u32) s1);
    f3.i = (s32) v0;
    a0 = s0;
    f0.i = (s32) 0;
    a1 = 121;
    v0 = (s32) 0x3d800000U;
    f2.i = (s32) v0;
    v0 = (s32) 0x3f340000U;
    f1.i = (s32) v0;
    acc = f0.f + f1.f;
    v0 = v1 & 0x7;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    v0 = (s32) ((u32) v1 >> 3);
    f0.i = (s32) v0;
    f12.f = f3.f * f1.f;
    f0.f = (f32) f0.i;
    f13.f = acc + f2.f * f0.f; func_0017DB10(a0, a1, f12.f, f13.f);
    v0 = (*(volatile u8 *) (u32) s1);
    a0 = s0;
    a1 = 0;
    a2 = 121;
    a3 = (s32) ((u32) v0 + 0x2422U); func_0017DEC0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) s1);
    a0 = s0;
    a1 = 1;
    a2 = 121;
    a3 = (s32) ((u32) v0 + 0x2422U); func_0017DEC0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a2 = 121;
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 0; func_00143300(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a2 = 121;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (v0 + 12));
    a3 = 0; func_00143300(a0, a1, a2, a3);
    return;
}
