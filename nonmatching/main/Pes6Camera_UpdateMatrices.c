/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00103BB8(s64, s64, s64);
void func_00103CD0(s64, s64);
void func_00104398(s64, f32, f32, f32, f32, f32, f32, f32, f32);
f32 func_0011D550(s64, s64, s64, s64, s64, f32);
void memset(s64, s64, s64);

void Pes6Camera_UpdateMatrices(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u64 qh_v1 = 0;
    u64 qh_a2 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    volatile union { f32 f; s32 i; } f25 = { 0 };
    volatile union { f32 f; s32 i; } f26 = { 0 };
    s64 frame[44];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    (*(volatile u8 *) (u32) (v0 + -19454)) = (u8) 0;
    v0 = (s32) 0x400000U;
    s0 = (*(volatile s32 *) (u32) (v1 + -20216));
    f25.f = (*(volatile f32 *) (u32) (v0 + -20212));
    v1 = 2;
    v0 = (s32) 0x400000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -20208));
    v0 = (s32) 0x44800000U;
    f0.i = (s32) v0;
    v0 = (s32) 0x400000U;
    s5 = (*(volatile s32 *) (u32) (v0 + -20228));
    v0 = (s32) 0x400000U;
    s4 = (*(volatile s32 *) (u32) (v0 + -20224));
    v0 = (s32) 0x400000U;
    s3 = (*(volatile s32 *) (u32) (v0 + -20196));
    v0 = (s32) 0x400000U;
    s2 = (*(volatile s32 *) (u32) (v0 + -20192));
    v0 = (s32) 0x400000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -20220));
    v0 = (s32) 0x400000U;
    a0 = (*(volatile s8 *) (u32) (v0 + -19452));
    { s32 c_ = a0 == v1; f24.f = f0.f + f1.f; if (c_) goto L_0012A214; }
    v0 = 1;
    if (a0 == v0) goto L_0012A1C8;
    v0 = (s32) 0x400000U;
    f23.f = (*(volatile f32 *) (u32) (v0 + -20240)); goto L_0012A254;
L_0012A1C8:;
    v0 = (s32) 0x400000U;
    v1 = (s32) 0x40000000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -20236));
    f1.i = (s32) v1;
    f12.f = f0.f / f1.f;
    f0.f = func_0011D550(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x43a00000U;
    v0 = (s32) 0x400000U;
    f1.i = (s32) v1;
    f23.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (v0 + -20240)) = f23.f; goto L_0012A254;
L_0012A214:;
    v0 = (s32) 0x400000U;
    v1 = (s32) 0x40000000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -20232));
    f1.i = (s32) v1;
    f12.f = f0.f / f1.f;
    f0.f = func_0011D550(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x43700000U;
    v0 = (s32) 0x400000U;
    f1.i = (s32) v1;
    f23.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (v0 + -20240)) = f23.f;
L_0012A254:;
    v0 = (s32) 0x45000000U;
    a0 = (s32) 0x400000U;
    f5.i = (s32) v0;
    a0 = (s32) ((u32) a0 + 0xffffb1b0U);
    f4.i = (s32) s5;
    v0 = (s32) 0x43f00000U;
    f21.i = (s32) v0;
    f3.i = (s32) s4;
    v0 = (s32) 0x44200000U;
    f20.i = (s32) v0;
    f4.f = (f32) f4.i;
    v0 = (s32) 0x44000000U;
    f2.i = (s32) v0;
    f3.f = (f32) f3.i;
    v0 = (s32) 0x400000U;
    f22.f = f4.f / f2.f;
    f3.f = f20.f * f3.f;
    f2.f = f21.f * f4.f;
    f2.f = f3.f / f2.f;
    (*(volatile f32 *) (u32) sp) = f24.f;
    f1.f = (*(volatile f32 *) (u32) (v0 + -20204));
    f26.f = f22.f * f2.f;
    v0 = (s32) 0x400000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -20200));
    f15.f = f5.f + f1.f;
    f1.i = (s32) s3;
    f16.f = f5.f + f0.f;
    f0.i = (s32) s2;
    f17.f = (f32) f1.i;
    f18.f = (f32) f0.i;
    f12.i = f23.i;
    f19.i = f25.i;
    f13.i = f22.i;
    f14.i = f26.i; func_00104398(a0, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    f1.i = (s32) s3;
    a0 = (s32) 0x400000U;
    f0.i = (s32) s2;
    v1 = (s32) 0x400000U;
    (*(volatile f32 *) (u32) sp) = f24.f;
    v0 = (s32) 0x400000U;
    f17.f = (f32) f1.i;
    a0 = (s32) ((u32) a0 + 0xffffb1f0U);
    f18.f = (f32) f0.i;
    f15.f = (*(volatile f32 *) (u32) (v1 + -20204));
    f16.f = (*(volatile f32 *) (u32) (v0 + -20200));
    f13.i = f22.i;
    f14.i = f26.i;
    f12.i = f23.i;
    f19.i = f25.i; func_00104398(a0, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    v1 = (s32) 0x370000U;
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v1 + 23344) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + 23360) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) a0 + 0xffffb1b0U);
    a2 = (s32) ((u32) sp + 0x120U);
    a1 = a0;
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 288) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v1 + 23376) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 304) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (v0 + 23392) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    v0 = (s32) 0x3f800000U;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    f3.i = (s32) v0;
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v0 = (s32) 0x400000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -20256));
    v0 = (s32) 0x400000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -20252));
    f2.f = f3.f / f2.f;
    v0 = (s32) 0x400000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -20248));
    f1.f = f3.f / f1.f;
    f0.f = f3.f / f0.f;
    (*(volatile f32 *) (u32) (sp + 288)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 308)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 328)) = f0.f; v0 = func_00103BB8(a0, a1, a2);
    v0 = (s32) 0x400000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -19453));
    if (v0 == 0) goto L_0012A42C;
    v1 = (s32) 0x400000U;
    v0 = (s32) 0x400000U;
    a0 = (s32) 0x400000U;
    v1 = (s32) ((u32) v1 + 0xffffb230U);
    v0 = (s32) ((u32) v0 + 0xffffb3f0U);
    a0 = (s32) ((u32) a0 + 0xffffb270U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmulx.xyzw $vf4, $vf4, $vf8x");
    __asm__ volatile("vmuly.xyzw $vf5, $vf5, $vf8y");
    __asm__ volatile("vmulz.xyzw $vf6, $vf6, $vf8z");
    __asm__ volatile("vmulw.xyzw $vf7, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("sqc2 $vf5, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("sqc2 $vf6, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("sqc2 $vf7, 48(%0)" : : "r"((u32) a0) : "memory"); goto L_0012A4D4;
L_0012A42C:;
    a2 = (s32) 0x400000U;
    a1 = (s32) 0x400000U;
    a2 = (s32) ((u32) a2 + 0xffffb230U);
    a1 = (s32) ((u32) a1 + 0xffffb270U);
    a0 = 8;
L_0012A440:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_0012A440; }
    a2 = (s32) 0x400000U;
    a1 = (s32) 0x400000U;
    a2 = (s32) ((u32) a2 + 0xffffb230U);
    a1 = (s32) ((u32) a1 + 0xffffb270U);
    a0 = 8;
L_0012A474:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_0012A474; }
    v1 = (s32) 0x400000U;
    v0 = (s32) 0x400000U;
    { u32 a_ = (u32) (v1 + -19920) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x400000U;
    { u32 a_ = (u32) (v0 + -19904) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    { u32 a_ = (u32) (a1 + -19856) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    v0 = (s32) 0x400000U;
    { u32 a_ = (u32) (v1 + -19888) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v0 + -19872) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + -19840) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    v1 = (s32) 0x400000U;
    v0 = (s32) 0x400000U;
    { u32 a_ = (u32) (v1 + -19824) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (v0 + -19808) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
L_0012A4D4:;
    a0 = (s32) 0x400000U;
    a1 = (s32) 0x400000U;
    a2 = (s32) 0x400000U;
    a0 = (s32) ((u32) a0 + 0xffffb2b0U);
    a1 = (s32) ((u32) a1 + 0xffffb1b0U);
    a2 = (s32) ((u32) a2 + 0xffffb270U); v0 = func_00103BB8(a0, a1, a2);
    a0 = (s32) 0x400000U;
    a1 = (s32) 0x400000U;
    a2 = (s32) 0x400000U;
    a0 = (s32) ((u32) a0 + 0xffffb2f0U);
    a1 = (s32) ((u32) a1 + 0xffffb1f0U);
    a2 = (s32) ((u32) a2 + 0xffffb270U); v0 = func_00103BB8(a0, a1, a2);
    a0 = (s32) 0x400000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffb330U);
    a2 = 64; memset(a0, a1, a2);
    v0 = (s32) 0x40000000U;
    a0 = (s32) 0x400000U;
    f1.i = (s32) v0;
    a6 = (s32) 0xc0000000U;
    f0.i = (s32) s5;
    a4 = (s32) 0x400000U;
    f5.f = f1.f * f23.f;
    a1 = (s32) 0x3f800000U;
    v0 = (s32) 0x400000U;
    a5 = (s32) 0x400000U;
    (*(volatile u32 *) (u32) (v0 + -19620)) = (u32) a1;
    a3 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    a0 = (s32) ((u32) a0 + 0xffffb370U);
    a1 = 0;
    a2 = 64;
    f0.f = (f32) f0.i;
    f1.i = (s32) s4;
    f3.i = (s32) s0;
    f1.f = (f32) f1.i;
    f2.f = f21.f * f0.f;
    f3.f = (f32) f3.i;
    f1.f = f20.f * f1.f;
    f2.f = f3.f * f2.f;
    f1.f = f2.f / f1.f;
    f1.f = f5.f / f1.f;
    f0.i = (s32) a6;
    f4.i = (s32) s1;
    f0.f = f0.f * f24.f;
    f4.f = (f32) f4.i;
    (*(volatile f32 *) (u32) (a4 + -19644)) = f1.f;
    f4.f = f5.f / f4.f;
    f0.f = f0.f * f25.f;
    f2.f = f24.f - f25.f;
    f1.f = f24.f + f25.f;
    f1.f = f1.f / f2.f;
    f0.f = f0.f / f2.f;
    (*(volatile f32 *) (u32) (a5 + -19664)) = f4.f;
    (*(volatile f32 *) (u32) (a3 + -19624)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + -19608)) = f0.f; memset(a0, a1, a2);
    f0.i = (s32) s1;
    v0 = (s32) 0x40000000U;
    f3.i = (s32) v0;
    t5 = (s32) 0x45000000U;
    f0.f = (f32) f0.i;
    a1 = (s32) 0x400000U;
    t4 = (s32) 0x400000U;
    t7 = (s32) ((u32) s3 - (u32) s2);
    a6 = (s32) 0x400000U;
    t6 = (s32) ((u32) s3 + (u32) s2);
    a7 = (s32) 0x400000U;
    a5 = (s32) 0x400000U;
    a4 = (s32) 0x400000U;
    a2 = (s32) 0x400000U;
    a0 = (s32) 0x3f800000U;
    v0 = (s32) 0x400000U;
    f0.f = f0.f / f3.f;
    (*(volatile u32 *) (u32) (v0 + -19540)) = (u32) a0;
    a0 = (s32) 0x400000U;
    a3 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    a0 = (s32) ((u32) a0 + 0xffffb3b0U);
    a1 = (s32) ((u32) a1 + 0xffffb230U);
    (*(volatile f32 *) (u32) (t4 + -19600)) = f0.f;
    f0.i = (s32) t7;
    f1.i = (s32) s0;
    f0.f = (f32) f0.i;
    f0.f = f0.f / f3.f;
    (*(volatile f32 *) (u32) (a6 + -19560)) = f0.f;
    f0.i = (s32) t6;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    f1.f = f1.f / f3.f;
    f0.f = f0.f / f3.f;
    (*(volatile f32 *) (u32) (a7 + -19580)) = f1.f;
    (*(volatile f32 *) (u32) (a5 + -19544)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (a4 + -20204));
    f2.i = (s32) t5;
    f0.f = (*(volatile f32 *) (u32) (a2 + -20200));
    f1.f = f2.f + f1.f;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (a3 + -19552)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + -19548)) = f0.f; func_00103CD0(a0, a1);
    return;
}
