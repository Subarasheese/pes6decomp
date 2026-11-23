/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103F50(s64, s64, s64, f32);
void func_001040A0(s64, s64, s64, f32);
f32 func_0011D610(f32, f32);
s64 func_00141000(s64);
void sceVu0InversMatrix(s64, s64);
s64 sceVu0MulMatrix(s64, s64, s64);
void sceVu0TransposeMatrix(s64, s64);
f32 sqrtf(f32);

void func_002794B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u64 qh_v1 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_a6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;
    s64 frame[62];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    v0 = (*(volatile s32 *) (u32) (a0 + 44));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = (s32) ((u32) s4 + 0x50U); v0 = func_00141000(a0);
    a3 = (*(volatile s32 *) (u32) (s4 + 40));
    a0 = (s32) ((u32) sp + 0x1b0U);
    v1 = (s32) 0x3f800000U;
    s0 = v0;
    a1 = s1;
    a2 = a0;
    a3 = (*(volatile s32 *) (u32) (a3 + 4));
    a3 = (*(volatile s32 *) (u32) a3);
    { u32 a_ = (u32) (a3 + 1632) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 1648) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 1664) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 1680) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 432) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (sp + 448) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (sp + 464) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 480) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    f0.f = (*(volatile f32 *) (u32) (v0 + 432));
    (*(volatile f32 *) (u32) (sp + 480)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 436));
    (*(volatile f32 *) (u32) (sp + 484)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 440));
    (*(volatile f32 *) (u32) (sp + 488)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 492)) = (u32) v1; v0 = sceVu0MulMatrix(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s4 + 40));
    a1 = s1;
    a0 = (s32) ((u32) sp + 0x170U);
    s1 = (s32) ((u32) sp + 0x1a0U);
    v0 = (s32) 0x3f800000U;
    a2 = a0;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 a_ = (u32) (v1 + 4352) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v1 + 4368) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v1 + 4384) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v1 + 4400) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (sp + 384) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 400) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 416) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    f0.f = (*(volatile f32 *) (u32) (s0 + 1072));
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 1076));
    (*(volatile f32 *) (u32) (sp + 420)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 1080));
    (*(volatile f32 *) (u32) (sp + 424)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 428)) = (u32) v0; v0 = sceVu0MulMatrix(a0, a1, a2);
    v0 = (s32) 0x41f00000U;
    v1 = (s32) ((u32) sp + 0x170U);
    a0 = (s32) ((u32) sp + 0x160U);
    f21.i = (s32) v0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v0));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) s3) : "memory");
    v0 = (s32) ((u32) sp + 0xc0U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s3) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v0) : "memory");
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = (s32) ((u32) sp + 0x1b0U); sceVu0TransposeMatrix(a0, a1);
    v1 = (s32) ((u32) sp + 0x70U);
    v0 = (s32) ((u32) sp + 0xc0U);
    a0 = (s32) ((u32) sp + 0xb0U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddz.xyzw $vf8, $vf6, $vf8z");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) a0) : "memory");
    s1 = (s32) ((u32) sp + 0xb4U);
    s0 = (s32) ((u32) sp + 0xb8U);
    f13.f = (*(volatile f32 *) (u32) s1);
    f12.f = (*(volatile f32 *) (u32) s0); f0.f = func_0011D610(f12.f, f13.f);
    f1.f = (*(volatile f32 *) (u32) s0);
    f20.i = f0.i;
    f0.f = (*(volatile f32 *) (u32) s1);
    acc = f1.f * f1.f;
    f0.f = acc + f0.f * f0.f;
    f13.f = sqrtf(f0.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 176));
    f12.i = f0.i ^ (s32) 0x80000000U; f0.f = func_0011D610(f12.f, f13.f);
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0xd0U);
    f12.i = f0.i;
    a1 = (s32) ((u32) a1 + 0x5b30U); func_00103F50(a0, a1, a2, f12.f);
    a0 = (s32) ((u32) sp + 0xd0U);
    f12.i = f20.i ^ (s32) 0x80000000U;
    a1 = a0; func_001040A0(a0, a1, a2, f12.f);
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0xffffb960U);
    a2 = a0; v0 = sceVu0MulMatrix(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = a0; sceVu0InversMatrix(a0, a1);
    v0 = (s32) ((u32) sp + 0x180U);
    v1 = (s32) ((u32) sp + 0x110U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    v0 = f21.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v0));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) v1) : "memory");
    a0 = (s32) ((u32) sp + 0x120U);
    a1 = (s32) ((u32) sp + 0x1b0U); sceVu0TransposeMatrix(a0, a1);
    v1 = (s32) ((u32) sp + 0x110U);
    v0 = (s32) ((u32) sp + 0x120U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    v0 = (s32) ((u32) sp + 0xd0U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    f13.f = (*(volatile f32 *) (u32) (sp + 276));
    f12.f = (*(volatile f32 *) (u32) (sp + 280)); f0.f = func_0011D610(f12.f, f13.f);
    (*(volatile f32 *) (u32) s2) = f0.f;
    return;
}
