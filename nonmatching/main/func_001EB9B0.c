/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001EB9B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v1 = 16;
    a4 = (s32) ((u32) sp + 0x70U);
    if (a4 == 0) goto L_001EB9F4;
L_001EB9D8:;
    (*(volatile u8 *) (u32) a4) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a4 = (s32) ((u32) a4 + 0x1U);
    if (v1 != 0) goto L_001EB9D8;
L_001EB9F4:;
    if (a2 != 0) goto L_001EBA00;
    a2 = (s32) ((u32) sp + 0x70U);
L_001EBA00:;
    v1 = (s32) 0x530000U;
    a4 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -20220));
    at = 0 < a3;
    a7 = 0;
    v1 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -20224));
    f1.f = (f32) f1.i;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a4 + -20128)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (v1 + -20124)) = f0.f; if (c_) goto L_001EBB84; }
    v1 = (s32) 0x45000000U;
    a6 = (s32) ((u32) sp + 0x94U);
    f5.i = (s32) v1;
    a5 = (s32) ((u32) sp + 0x98U);
    a4 = (s32) ((u32) sp + 0x9cU);
    s0 = (s32) 0x530000U;
    t8 = (s32) 0x530000U;
    t9 = (s32) 0x530000U;
    t6 = (s32) 0x530000U;
    t7 = (s32) 0x530000U;
    t5 = (s32) 0x530000U;
    t4 = (s32) 0x530000U;
    s3 = (s32) ((u32) sp + 0x90U);
    v1 = (s32) ((u32) sp + 0x80U);
    s5 = (s32) ((u32) sp + 0x60U);
    s1 = (s32) 0x530000U;
L_001EBA74:;
    s4 = (*(volatile s16 *) (u32) a1);
    s2 = (*(volatile s16 *) (u32) (a1 + 2));
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) s4;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) s2;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s5) : "memory");
    __asm__ volatile("vitof4.xy $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    s4 = (*(volatile s16 *) (u32) (a1 + 4));
    s2 = (*(volatile s16 *) (u32) (a1 + 6));
    f1.i = (s32) s4;
    f0.i = (s32) s2;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v1 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + 12)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) s3) : "memory");
    f0.f = (*(volatile f32 *) (u32) (s1 + -20220));
    f3.f = (*(volatile f32 *) (u32) (gp + -32444));
    f4.f = (*(volatile f32 *) (u32) a6);
    f2.f = (*(volatile f32 *) (u32) (sp + 144));
    f6.f = (f32) f0.i;
    f0.f = f2.f + f5.f;
    f1.f = (*(volatile f32 *) (u32) a5);
    f3.f = f4.f * f3.f;
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f;
    f0.f = f3.f + f5.f;
    fcc = f1.f <= f6.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a6) = f0.f; if (c_) goto L_001EBB00; }
    f0.f = (*(volatile f32 *) (u32) (t9 + -20128)); goto L_001EBB20;
L_001EBB00:;
    f0.f = (*(volatile f32 *) (u32) (s0 + -20224));
    f6.f = (f32) f0.i;
    fcc = f1.f < f6.f;
    if (!fcc) { f6.i = f1.i; goto L_001EBB1C; }
    goto L_001EBB1C;
L_001EBB1C:;
    f0.f = (*(volatile f32 *) (u32) (t9 + -20128));
L_001EBB20:;
    (*(volatile f32 *) (u32) a5) = f6.f;
    fcc = f6.f < f0.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) a4) = f6.f; if (c_) goto L_001EBB34; }
    (*(volatile f32 *) (u32) (t8 + -20128)) = f6.f;
L_001EBB34:;
    f0.f = (*(volatile f32 *) (u32) (t7 + -20124));
    fcc = f6.f <= f0.f;
    if (fcc) goto L_001EBB48;
    (*(volatile f32 *) (u32) (t6 + -20124)) = f6.f;
L_001EBB48:;
    f2.f = (*(volatile f32 *) (u32) (t5 + -20212));
    f1.f = (*(volatile f32 *) (u32) a5);
    f0.f = (*(volatile f32 *) (u32) (t4 + -20216));
    f1.f = f2.f / f1.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) a5) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s3) : "memory");
    __asm__ volatile("vftoi4.xy $vf5, $vf4");
    __asm__ volatile("vftoi0.zw $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    a7 = (s32) ((u32) a7 + 0x1U);
    s2 = a7 < a3;
    a1 = (s32) ((u32) a1 + 0x6U);
    { s32 c_ = s2 != 0; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_001EBA74; }
L_001EBB84:;
    return v0;
}
