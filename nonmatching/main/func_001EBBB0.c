/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103F50(s64, s64, s64, s64, f32);
void func_00103FF8(s64, s64, s64, s64, f32);
void func_001040A0(s64, s64, s64, s64, f32);
void func_001EBF50(s64, s64, s64, s64);

void func_001EBBB0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_a6 = 0;
    u64 qh_a7 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[50];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x370000U;
    s5 = a2;
    s4 = a3;
    s3 = a4;
    s2 = a5;
    a3 = (s32) ((u32) sp + 0x130U);
    { u32 a_ = (u32) (v1 + 23344) & ~15U; a7 = *(volatile s64 *) a_; qh_a7 = *(volatile u64 *) (a_ + 8); }
    s1 = a1;
    s0 = a0;
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) a7; *(volatile u64 *) (a_ + 8) = qh_a7; }
    { u32 a_ = (u32) (v1 + 23360) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a7; *(volatile u64 *) (a_ + 8) = qh_a7; }
    { u32 a_ = (u32) (sp + 320) & ~15U; *(volatile u64 *) a_ = (u64) a7; *(volatile u64 *) (a_ + 8) = qh_a7; }
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (v1 + 23376) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (sp + 336) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v1 + 23392) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (sp + 352) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    v1 = 16;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { s32 c_ = a3 == 0; { u32 a_ = (u32) (sp + 368) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; } if (c_) goto L_001EBC60; }
L_001EBC44:;
    (*(volatile u8 *) (u32) a3) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a3 = (s32) ((u32) a3 + 0x1U);
    if (v1 != 0) goto L_001EBC44;
L_001EBC60:;
    if (a2 != 0) goto L_001EBC6C;
    s5 = (s32) ((u32) sp + 0x130U);
L_001EBC6C:;
    if (s3 != 0) goto L_001EBC7C;
    v1 = 0; goto L_001EBCD0;
L_001EBC7C:;
    v1 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) s3);
    f0.f = (*(volatile f32 *) (u32) (v1 + -20144));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EBCCC;
    v1 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s3 + 4));
    f0.f = (*(volatile f32 *) (u32) (v1 + -20140));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EBCCC;
    v1 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s3 + 8));
    f0.f = (*(volatile f32 *) (u32) (v1 + -20136));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EBCCC;
    v1 = 0; goto L_001EBCD0;
L_001EBCCC:;
    v1 = 1;
L_001EBCD0:;
    if (v1 != 0) goto L_001EBD3C;
    if (s4 != 0) goto L_001EBCE8;
    v1 = 0; goto L_001EBD24;
L_001EBCE8:;
    v1 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (v1 + -27744));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EBD20;
    v1 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (s4 + 4));
    f0.f = (*(volatile f32 *) (u32) (v1 + -27740));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EBD20;
    v1 = 0; goto L_001EBD24;
L_001EBD20:;
    v1 = 1;
L_001EBD24:;
    if (v1 != 0) goto L_001EBD3C;
    a3 = s2; func_001EBF50(a0, a1, a2, a3);
    goto L_001EBF24;
L_001EBD3C:;
    if (s3 == 0) goto L_001EBD78;
    f12.f = (*(volatile f32 *) (u32) s3);
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0xf0U);
    a1 = (s32) ((u32) a1 + 0x5b30U); func_00103FF8(a0, a1, a2, a3, f12.f);
    f12.f = (*(volatile f32 *) (u32) (s3 + 4));
    a0 = (s32) ((u32) sp + 0xf0U);
    a1 = a0; func_001040A0(a0, a1, a2, a3, f12.f);
    f12.f = (*(volatile f32 *) (u32) (s3 + 8));
    a0 = (s32) ((u32) sp + 0x140U);
    a1 = (s32) ((u32) sp + 0xf0U); func_00103F50(a0, a1, a2, a3, f12.f);
L_001EBD78:;
    if (s4 == 0) goto L_001EBDB8;
    v1 = (s32) ((u32) sp + 0x140U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) s4) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vmulx.xyzw $vf4, $vf4, $vf8x");
    __asm__ volatile("vmuly.xyzw $vf5, $vf5, $vf8y");
    __asm__ volatile("vmulz.xyzw $vf6, $vf6, $vf8z");
    __asm__ volatile("vmulw.xyzw $vf7, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("sqc2 $vf5, 16(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("sqc2 $vf6, 32(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("sqc2 $vf7, 48(%0)" : : "r"((u32) v1) : "memory");
L_001EBDB8:;
    v1 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -20220));
    at = 0 < s2;
    s4 = 0;
    v1 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -20224));
    f1.f = (f32) f1.i;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + -20128)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (v1 + -20124)) = f0.f; if (c_) goto L_001EBF20; }
    v1 = (s32) 0x45000000U;
    s3 = (s32) ((u32) sp + 0x184U);
    f5.i = (s32) v1;
    t7 = (s32) ((u32) sp + 0x188U);
    t6 = (s32) ((u32) sp + 0x18cU);
    a5 = (s32) 0x530000U;
    a3 = (s32) 0x530000U;
    a4 = (s32) 0x530000U;
    a1 = (s32) 0x530000U;
    a2 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    t5 = (s32) ((u32) sp + 0x180U);
    t4 = (s32) ((u32) sp + 0x140U);
    a6 = (s32) 0x530000U;
L_001EBE28:;
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) t4) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) t4) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) t4) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) t4) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) t5) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) t5) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) s5) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) t5) : "memory");
    f0.f = (*(volatile f32 *) (u32) (a6 + -20220));
    f3.f = (*(volatile f32 *) (u32) (gp + -32444));
    f4.f = (*(volatile f32 *) (u32) s3);
    f2.f = (*(volatile f32 *) (u32) (sp + 384));
    f6.f = (f32) f0.i;
    f0.f = f2.f + f5.f;
    f1.f = (*(volatile f32 *) (u32) t7);
    f3.f = f4.f * f3.f;
    (*(volatile f32 *) (u32) (sp + 384)) = f0.f;
    f0.f = f3.f + f5.f;
    fcc = f1.f <= f6.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) s3) = f0.f; if (c_) goto L_001EBE9C; }
    f0.f = (*(volatile f32 *) (u32) (a4 + -20128)); goto L_001EBEBC;
L_001EBE9C:;
    f0.f = (*(volatile f32 *) (u32) (a5 + -20224));
    f6.f = (f32) f0.i;
    fcc = f1.f < f6.f;
    if (!fcc) { f6.i = f1.i; goto L_001EBEB8; }
    goto L_001EBEB8;
L_001EBEB8:;
    f0.f = (*(volatile f32 *) (u32) (a4 + -20128));
L_001EBEBC:;
    (*(volatile f32 *) (u32) t7) = f6.f;
    fcc = f6.f < f0.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) t6) = f6.f; if (c_) goto L_001EBED0; }
    (*(volatile f32 *) (u32) (a3 + -20128)) = f6.f;
L_001EBED0:;
    f0.f = (*(volatile f32 *) (u32) (a2 + -20124));
    fcc = f6.f <= f0.f;
    if (fcc) goto L_001EBEE4;
    (*(volatile f32 *) (u32) (a1 + -20124)) = f6.f;
L_001EBEE4:;
    f2.f = (*(volatile f32 *) (u32) (a0 + -20212));
    f1.f = (*(volatile f32 *) (u32) t7);
    f0.f = (*(volatile f32 *) (u32) (v1 + -20216));
    f1.f = f2.f / f1.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) t7) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) t5) : "memory");
    __asm__ volatile("vftoi4.xy $vf5, $vf4");
    __asm__ volatile("vftoi0.zw $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) s0) : "memory");
    s4 = (s32) ((u32) s4 + 0x1U);
    a7 = s4 < s2;
    s1 = (s32) ((u32) s1 + 0x10U);
    { s32 c_ = a7 != 0; s0 = (s32) ((u32) s0 + 0x10U); if (c_) goto L_001EBE28; }
L_001EBF20:;
L_001EBF24:;
    return;
}
