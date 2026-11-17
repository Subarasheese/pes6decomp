/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0012BF70(s64, s64, s64);
s64 func_0012BFC0(s64, s64);
s64 func_0012BFE0(s64, s64, s64);

s64 func_001322C0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = s1; if (c_) goto L_00132380; }
    v0 = (s32) 0x3f800000U;
    f20.i = (s32) v0;
L_001322E8:;
    v0 = (*(volatile s32 *) (u32) (s0 + 264));
    if (v0 != 0) goto L_00132330;
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) s0 + 0x60U);
    a1 = (s32) ((u32) a1 + 0x5c40U);
    a2 = (s32) ((u32) s0 + 0x50U); v0 = func_0012BFE0(a0, a1, a2);
    (*(volatile f32 *) (u32) (s0 + 76)) = f20.f;
    { u32 a_ = (u32) (s0 + 64) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 112) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    f0.f = (*(volatile f32 *) (u32) (s0 + 112));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (s0 + 112)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 120));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (s0 + 120)) = f0.f; goto L_00132370;
L_00132330:;
    a1 = (s32) ((u32) v0 + 0x60U);
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
L_00132370:;
    (*(volatile u8 *) (u32) (s0 + 258)) = (u8) 0;
    s0 = (*(volatile s32 *) (u32) (s0 + 260));
    if (s0 != 0) goto L_001322E8;
L_00132380:;
    if (s1 == 0) goto L_001324E0;
L_00132388:;
    v1 = (*(volatile s8 *) (u32) (s1 + 258));
    if (v1 != 0) goto L_001324D0;
    s0 = (*(volatile s32 *) (u32) (s1 + 268));
    if (s0 != 0) goto L_001323E8;
    a0 = (*(volatile s8 *) (u32) (s1 + 257));
    v1 = 1;
    if (a0 == v1) goto L_001324D0;
    if (a0 == 0) goto L_001323C0;
    goto L_001324D0;
L_001323C0:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 96));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (s1 + 96)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 100));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (s1 + 100)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 120));
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (s1 + 120)) = f0.f; goto L_001324D0;
L_001323E8:;
    a0 = (s32) ((u32) s1 + 0x60U);
    a1 = a0;
    a2 = (s32) ((u32) s1 + 0xe0U); v0 = func_0012BFE0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x60U);
    a2 = (s32) ((u32) s0 + 0xe0U);
    a1 = a0; v0 = func_0012BFE0(a0, a1, a2);
    f3.f = (*(volatile f32 *) (u32) (s0 + 96));
    { u32 a_ = (u32) (s0 + 112) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    f2.f = (*(volatile f32 *) (u32) (s0 + 100));
    v0 = (s32) 0x370000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 104));
    v0 = (s32) ((u32) v0 + 0x5c50U);
    f0.f = (*(volatile f32 *) (u32) (s0 + 108));
    a1 = (s32) ((u32) sp + 0x60U);
    a0 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 96)) = f3.f;
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    (*(volatile f32 *) (u32) (sp + 100)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 104)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 96(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 96(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 96(%0)" : : "r"((u32) s1) : "memory");
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x5c60U);
    __asm__ volatile("lqc2 $vf4, 112(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 112(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmul.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 112(%0)" : : "r"((u32) s1) : "memory");
    v0 = 1;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) s1 + 0xe0U);
    (*(volatile u8 *) (u32) (s1 + 258)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 258)) = (u8) v0; v0 = func_0012BFC0(a0, a1);
    a0 = (s32) ((u32) s1 + 0x60U);
    a2 = (s32) ((u32) sp + 0x40U);
    a1 = a0; v0 = func_0012BFE0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) s0 + 0xe0U); v0 = func_0012BFC0(a0, a1);
    a0 = (s32) ((u32) s0 + 0x60U);
    a2 = (s32) ((u32) sp + 0x40U);
    a1 = a0; v0 = func_0012BFE0(a0, a1, a2);
L_001324D0:;
    s1 = (*(volatile s32 *) (u32) (s1 + 260));
    if (s1 != 0) goto L_00132388;
L_001324E0:;
    return v0;
}
