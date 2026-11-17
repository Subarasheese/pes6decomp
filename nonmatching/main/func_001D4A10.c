/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001D4A10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a3 = 3;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a3); hi = (s32) ((s32) a1 % (s32) a3); lo = q_; }
    v1 = hi;
    v0 = (s32) ((u32) a1 + 0x2U);
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) 0;
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v1;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a3); hi = (s32) ((s32) v0 % (s32) a3); lo = q_; }
    v1 = hi;
    v0 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) 0;
    v1 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) v1;
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a3); hi = (s32) ((s32) v0 % (s32) a3); lo = q_; }
    a3 = hi;
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) 0;
    a2 = (s32) ((u32) sp + 0x0U);
    v1 = (s32) ((u32) sp + 0x10U);
    v0 = (s32) ((u32) sp + 0x20U);
    a3 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) a0 + (u32) a3);
    a3 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) sp) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 4)) = (u32) a0;
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
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf4" : "=r"(t_)); v1 = t_; }
    v0 = a1 & 0x1;
    f1.i = (s32) v1;
    if (v0 == 0) goto L_001D4B00;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_001D4B1C;
    v0 = 0; goto L_001D4B20;
L_001D4B00:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_001D4B1C;
    v0 = 0; goto L_001D4B20;
L_001D4B1C:;
    v0 = 1;
L_001D4B20:;
    return v0;
}
