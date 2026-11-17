/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0012BBD0(s64, s64);
s64 func_0012BF70(s64, s64, s64);
s64 func_0012BFE0(s64, s64, s64);
s64 func_001314F0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);

s64 func_00131DB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f20 = { 0 };

    a1 = (*(volatile s8 *) (u32) (a0 + 29));
    v1 = a1 & 0x2;
    { s32 c_ = v1 != 0; s1 = a0; if (c_) goto L_00131EF8; }
    v1 = a1 & 0x1;
    if (v1 == 0) { v1 = a1 & 0x4; goto L_00131E90; }
    s0 = (*(volatile s32 *) (u32) s1);
    if (s0 == 0) goto L_00131E80;
    v1 = (s32) 0x3f800000U;
    f20.i = (s32) v1;
L_00131DF4:;
    v1 = (*(volatile s32 *) (u32) (s0 + 264));
    if (v1 != 0) goto L_00131E30;
    f3.f = (*(volatile f32 *) (u32) (s0 + 80));
    f2.f = (*(volatile f32 *) (u32) (s0 + 84));
    f1.f = (*(volatile f32 *) (u32) (s0 + 88));
    f0.f = (*(volatile f32 *) (u32) (s0 + 92));
    (*(volatile f32 *) (u32) (s0 + 96)) = f3.f;
    (*(volatile f32 *) (u32) (s0 + 100)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 104)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 108)) = f0.f;
    { u32 a_ = (u32) (s0 + 64) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 112) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    (*(volatile f32 *) (u32) (s0 + 124)) = f20.f; goto L_00131E70;
L_00131E30:;
    a1 = (s32) ((u32) v1 + 0x60U);
    a0 = (s32) ((u32) s0 + 0x60U);
    a2 = (s32) ((u32) s0 + 0x50U); v0 = func_0012BFE0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 264));
    a0 = (s32) ((u32) s0 + 0x70U);
    a2 = (s32) ((u32) s0 + 0x40U);
    a1 = (s32) ((u32) v0 + 0x60U); v0 = func_0012BF70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 264));
    __asm__ volatile("lqc2 $vf4, 112(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf5, 112(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 112(%0)" : : "r"((u32) s0) : "memory");
    (*(volatile f32 *) (u32) (s0 + 124)) = f20.f;
L_00131E70:;
    s0 = (*(volatile s32 *) (u32) (s0 + 260));
    if (s0 != 0) goto L_00131DF4;
L_00131E80:;
    v1 = (*(volatile s8 *) (u32) (s1 + 29));
    v1 = v1 | 0x6;
    (*(volatile u8 *) (u32) (s1 + 29)) = (u8) v1; goto L_00131EF8;
L_00131E90:;
    if (v1 == 0) { a1 = 0; goto L_00131EF0; }
    s0 = (*(volatile s32 *) (u32) s1);
    if (s0 == 0) goto L_00131EE0;
L_00131EA4:;
    a0 = (s32) ((u32) s0 + 0x60U);
    a1 = s0; v0 = func_0012BBD0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s0 + 48));
    (*(volatile f32 *) (u32) (s0 + 112)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 52));
    (*(volatile f32 *) (u32) (s0 + 116)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 56));
    (*(volatile f32 *) (u32) (s0 + 120)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 60));
    (*(volatile f32 *) (u32) (s0 + 124)) = f0.f;
    s0 = (*(volatile s32 *) (u32) (s0 + 260));
    if (s0 != 0) goto L_00131EA4;
L_00131EE0:;
    v1 = (*(volatile s8 *) (u32) (s1 + 29));
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) (s1 + 29)) = (u8) v1; goto L_00131EF8;
L_00131EF0:;
    v0 = func_001314F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_00131EF8:;
    return v0;
}
