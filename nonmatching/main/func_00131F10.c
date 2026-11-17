/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0012BBD0(s64, s64);
s64 func_0012BF70(s64, s64, s64);
s64 func_0012BFC0(s64, s64);
s64 func_0012BFE0(s64, s64, s64);
s64 func_001314F0(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32);

s64 func_00131F10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    a1 = (*(volatile s8 *) (u32) (a0 + 29));
    v1 = a1 & 0x1;
    { s32 c_ = v1 != 0; s0 = a0; if (c_) goto L_001320F0; }
    v1 = a1 & 0x2;
    if (v1 == 0) { v1 = a1 & 0x4; goto L_00131FE0; }
    s1 = (*(volatile s32 *) (u32) s0);
    if (s1 == 0) goto L_00131FD0;
L_00131F48:;
    v1 = (*(volatile s32 *) (u32) (s1 + 264));
    if (v1 != 0) goto L_00131F80;
    f3.f = (*(volatile f32 *) (u32) (s1 + 96));
    f2.f = (*(volatile f32 *) (u32) (s1 + 100));
    f1.f = (*(volatile f32 *) (u32) (s1 + 104));
    f0.f = (*(volatile f32 *) (u32) (s1 + 108));
    (*(volatile f32 *) (u32) (s1 + 80)) = f3.f;
    (*(volatile f32 *) (u32) (s1 + 84)) = f2.f;
    (*(volatile f32 *) (u32) (s1 + 88)) = f1.f;
    (*(volatile f32 *) (u32) (s1 + 92)) = f0.f;
    { u32 a_ = (u32) (s1 + 112) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } goto L_00131FC0;
L_00131F80:;
    a1 = (s32) ((u32) v1 + 0x60U);
    a0 = (s32) ((u32) sp + 0x60U); v0 = func_0012BFC0(a0, a1);
    a0 = (s32) ((u32) s1 + 0x50U);
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = (s32) ((u32) s1 + 0x60U); v0 = func_0012BFE0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 264));
    a2 = (s32) ((u32) sp + 0x50U);
    __asm__ volatile("lqc2 $vf4, 112(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf5, 112(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a2) : "memory");
    a0 = (s32) ((u32) s1 + 0x40U);
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_0012BF70(a0, a1, a2);
L_00131FC0:;
    s1 = (*(volatile s32 *) (u32) (s1 + 260));
    if (s1 != 0) goto L_00131F48;
L_00131FD0:;
    v1 = (*(volatile s8 *) (u32) (s0 + 29));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 29)) = (u8) v1; goto L_001320F0;
L_00131FE0:;
    if (v1 == 0) { a1 = 0; goto L_001320E8; }
    s1 = (*(volatile s32 *) (u32) s0);
    if (s1 == 0) goto L_001320D8;
L_00131FF4:;
    v0 = (*(volatile s32 *) (u32) (s1 + 264));
    if (v0 != 0) goto L_00132058;
    a0 = (s32) ((u32) s1 + 0x60U);
    a1 = s1; v0 = func_0012BBD0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 48));
    (*(volatile f32 *) (u32) (s1 + 112)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 52));
    (*(volatile f32 *) (u32) (s1 + 116)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 56));
    (*(volatile f32 *) (u32) (s1 + 120)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 60));
    (*(volatile f32 *) (u32) (s1 + 124)) = f0.f;
    f3.f = (*(volatile f32 *) (u32) (s1 + 96));
    f2.f = (*(volatile f32 *) (u32) (s1 + 100));
    f1.f = (*(volatile f32 *) (u32) (s1 + 104));
    f0.f = (*(volatile f32 *) (u32) (s1 + 108));
    (*(volatile f32 *) (u32) (s1 + 80)) = f3.f;
    (*(volatile f32 *) (u32) (s1 + 84)) = f2.f;
    (*(volatile f32 *) (u32) (s1 + 88)) = f1.f;
    (*(volatile f32 *) (u32) (s1 + 92)) = f0.f;
    { u32 a_ = (u32) (s1 + 112) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } goto L_001320C8;
L_00132058:;
    a0 = (s32) ((u32) s1 + 0x60U);
    a1 = s1; v0 = func_0012BBD0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 48));
    a0 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (s1 + 112)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 52));
    (*(volatile f32 *) (u32) (s1 + 116)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 56));
    (*(volatile f32 *) (u32) (s1 + 120)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 60));
    (*(volatile f32 *) (u32) (s1 + 124)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s1 + 264));
    a1 = (s32) ((u32) v0 + 0x60U); v0 = func_0012BFC0(a0, a1);
    a0 = (s32) ((u32) s1 + 0x50U);
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = (s32) ((u32) s1 + 0x60U); v0 = func_0012BFE0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 264));
    a2 = (s32) ((u32) sp + 0x30U);
    __asm__ volatile("lqc2 $vf4, 112(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf5, 112(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a2) : "memory");
    a0 = (s32) ((u32) s1 + 0x40U);
    a1 = (s32) ((u32) sp + 0x40U); v0 = func_0012BF70(a0, a1, a2);
L_001320C8:;
    s1 = (*(volatile s32 *) (u32) (s1 + 260));
    if (s1 != 0) goto L_00131FF4;
L_001320D8:;
    v1 = (*(volatile s8 *) (u32) (s0 + 29));
    v1 = v1 | 0x3;
    (*(volatile u8 *) (u32) (s0 + 29)) = (u8) v1; goto L_001320F0;
L_001320E8:;
    v0 = func_001314F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_001320F0:;
    return v0;
}
