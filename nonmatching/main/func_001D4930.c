/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001D4930(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    a6 = (*(volatile s32 *) (u32) (a0 + 36));
    a2 = (s32) ((u32) sp + 0x0U);
    a5 = (*(volatile s32 *) (u32) (a0 + 16));
    v1 = (s32) ((u32) sp + 0x10U);
    a4 = (*(volatile s32 *) (u32) (a0 + 20));
    v0 = (s32) ((u32) sp + 0x20U);
    a3 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) a5;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) a4;
    (*(volatile u32 *) (u32) sp) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) a7;
    (*(volatile u32 *) (u32) (sp + 4)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) a6;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf6, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vitof0.xyzw $vf4, $vf4");
    __asm__ volatile("vitof0.xyzw $vf5, $vf5");
    __asm__ volatile("vitof0.xyzw $vf6, $vf6");
    __asm__ volatile("vsub.xyz $vf4, $vf5, $vf4");
    __asm__ volatile("vsub.xyz $vf5, $vf6, $vf5");
    __asm__ volatile("vopmula.xyz ACC, $vf4, $vf5");
    __asm__ volatile("vopmsub.xyz $vf4, $vf5, $vf4");
    __asm__ volatile("vaddz.x $vf4, $vf0, $vf4z");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf4" : "=r"(t_)); v0 = t_; }
    f1.i = (s32) v0;
    if (a1 != 0) goto L_001D49E0;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_001D49FC;
    v0 = 0; goto L_001D4A00;
L_001D49E0:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_001D49FC;
    v0 = 0; goto L_001D4A00;
L_001D49FC:;
    v0 = 1;
L_001D4A00:;
    return v0;
}
