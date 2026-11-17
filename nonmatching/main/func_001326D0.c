/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0012BE80(s64, s64);
s64 func_0012BFE0(s64, s64, s64);

s64 func_001326D0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };

    v1 = (*(volatile s8 *) (u32) (a0 + 29));
    v1 = v1 | 0x6;
    (*(volatile u8 *) (u32) (a0 + 29)) = (u8) v1;
    s0 = (*(volatile s32 *) (u32) a0);
    if (s0 == 0) goto L_001327E0;
    v0 = (s32) 0x3f800000U;
    f20.i = (s32) v0;
L_00132700:;
    v0 = (*(volatile s32 *) (u32) (s0 + 264));
    if (v0 != 0) goto L_00132768;
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x50U); v0 = func_0012BE80(a0, a1);
    (*(volatile f32 *) (u32) (s0 + 76)) = f20.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 64));
    (*(volatile f32 *) (u32) (s0 + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 68));
    (*(volatile f32 *) (u32) (s0 + 52)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 72));
    (*(volatile f32 *) (u32) (s0 + 56)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 60)) = f20.f;
    f3.f = (*(volatile f32 *) (u32) (s0 + 80));
    f2.f = (*(volatile f32 *) (u32) (s0 + 84));
    f1.f = (*(volatile f32 *) (u32) (s0 + 88));
    f0.f = (*(volatile f32 *) (u32) (s0 + 92));
    (*(volatile f32 *) (u32) (s0 + 96)) = f3.f;
    (*(volatile f32 *) (u32) (s0 + 100)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 104)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 108)) = f0.f;
    { u32 a_ = (u32) (s0 + 64) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 112) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } goto L_001327D0;
L_00132768:;
    a1 = (s32) ((u32) v0 + 0x60U);
    a0 = (s32) ((u32) s0 + 0x60U);
    a2 = (s32) ((u32) s0 + 0x50U); v0 = func_0012BFE0(a0, a1, a2);
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x60U); v0 = func_0012BE80(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 264));
    __asm__ volatile("lqc2 $vf8, 64(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf0w");
    __asm__ volatile("sqc2 $vf8, 112(%0)" : : "r"((u32) s0) : "memory");
    (*(volatile f32 *) (u32) (s0 + 124)) = f20.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 112));
    (*(volatile f32 *) (u32) (s0 + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 116));
    (*(volatile f32 *) (u32) (s0 + 52)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 120));
    (*(volatile f32 *) (u32) (s0 + 56)) = f0.f;
    (*(volatile f32 *) (u32) (s0 + 60)) = f20.f;
L_001327D0:;
    (*(volatile f32 *) (u32) (s0 + 60)) = f20.f;
    s0 = (*(volatile s32 *) (u32) (s0 + 260));
    if (s0 != 0) goto L_00132700;
L_001327E0:;
    return v0;
}
