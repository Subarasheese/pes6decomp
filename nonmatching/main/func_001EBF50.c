/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001EBF50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, t8 = 0, t9 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = 16;
    a4 = (s32) ((u32) sp + 0x30U);
    if (a4 == 0) goto L_001EBF88;
L_001EBF6C:;
    (*(volatile u8 *) (u32) a4) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a4 = (s32) ((u32) a4 + 0x1U);
    if (v1 != 0) goto L_001EBF6C;
L_001EBF88:;
    if (a2 != 0) goto L_001EBF94;
    a2 = (s32) ((u32) sp + 0x30U);
L_001EBF94:;
    v1 = (s32) 0x530000U;
    a4 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -20220));
    at = 0 < a3;
    s2 = 0;
    v1 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -20224));
    f1.f = (f32) f1.i;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a4 + -20128)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (v1 + -20124)) = f0.f; if (c_) goto L_001EC0D0; }
    v1 = (s32) 0x45000000U;
    s1 = (s32) ((u32) sp + 0x44U);
    f5.i = (s32) v1;
    s0 = (s32) ((u32) sp + 0x48U);
    t9 = (s32) ((u32) sp + 0x4cU);
    t5 = (s32) 0x530000U;
    a7 = (s32) 0x530000U;
    t4 = (s32) 0x530000U;
    a5 = (s32) 0x530000U;
    a6 = (s32) 0x530000U;
    a4 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    t8 = (s32) ((u32) sp + 0x40U);
    t6 = (s32) 0x530000U;
L_001EC000:;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vadd.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) t8) : "memory");
    f0.f = (*(volatile f32 *) (u32) (t6 + -20220));
    f3.f = (*(volatile f32 *) (u32) (gp + -32444));
    f4.f = (*(volatile f32 *) (u32) s1);
    f2.f = (*(volatile f32 *) (u32) (sp + 64));
    f6.f = (f32) f0.i;
    f0.f = f2.f + f5.f;
    f1.f = (*(volatile f32 *) (u32) s0);
    f3.f = f4.f * f3.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    f0.f = f3.f + f5.f;
    fcc = f1.f <= f6.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) s1) = f0.f; if (c_) goto L_001EC04C; }
    f0.f = (*(volatile f32 *) (u32) (t4 + -20128)); goto L_001EC06C;
L_001EC04C:;
    f0.f = (*(volatile f32 *) (u32) (t5 + -20224));
    f6.f = (f32) f0.i;
    fcc = f1.f < f6.f;
    if (!fcc) { f6.i = f1.i; goto L_001EC068; }
    goto L_001EC068;
L_001EC068:;
    f0.f = (*(volatile f32 *) (u32) (t4 + -20128));
L_001EC06C:;
    (*(volatile f32 *) (u32) s0) = f6.f;
    fcc = f6.f < f0.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) t9) = f6.f; if (c_) goto L_001EC080; }
    (*(volatile f32 *) (u32) (a7 + -20128)) = f6.f;
L_001EC080:;
    f0.f = (*(volatile f32 *) (u32) (a6 + -20124));
    fcc = f6.f <= f0.f;
    if (fcc) goto L_001EC094;
    (*(volatile f32 *) (u32) (a5 + -20124)) = f6.f;
L_001EC094:;
    f2.f = (*(volatile f32 *) (u32) (a4 + -20212));
    f1.f = (*(volatile f32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + -20216));
    f1.f = f2.f / f1.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) t8) : "memory");
    __asm__ volatile("vftoi4.xy $vf5, $vf4");
    __asm__ volatile("vftoi0.zw $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    s2 = (s32) ((u32) s2 + 0x1U);
    t7 = s2 < a3;
    a1 = (s32) ((u32) a1 + 0x10U);
    { s32 c_ = t7 != 0; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_001EC000; }
L_001EC0D0:;
    return v0;
}
