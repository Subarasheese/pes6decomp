/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001E7D10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a4 = (*(volatile s32 *) (u32) (a0 + 4));
    a3 = (s32) ((u32) sp + 0x8U);
    a2 = (s32) ((u32) sp + 0xcU);
    a5 = (s32) ((u32) sp + 0x4U);
    a6 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    a7 = (s32) ((u32) sp + 0x0U);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    v1 = (s32) ((u32) sp + 0x10U);
    (*(volatile u32 *) (u32) (a3 + 16)) = (u32) 0;
    v0 = (s32) ((u32) sp + 0x20U);
    (*(volatile u32 *) (u32) (a3 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) a5) = (u32) a4;
    a4 = (*(volatile s32 *) (u32) (a0 + 16));
    a3 = (*(volatile s32 *) (u32) (a0 + 20));
    (*(volatile u32 *) (u32) (a2 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 32)) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) (a0 + 32));
    (*(volatile u32 *) (u32) sp) = (u32) a6;
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) a4;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) a3;
    a0 = (*(volatile s32 *) (u32) (a0 + 36));
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) a2;
    (*(volatile u32 *) (u32) (a5 + 32)) = (u32) a0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a7) : "memory");
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
    if (a1 != 0) goto L_001E7DCC;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_001E7DE8;
    v0 = 1; goto L_001E7DEC;
L_001E7DCC:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_001E7DE8;
    v0 = 1; goto L_001E7DEC;
L_001E7DE8:;
    v0 = 0;
L_001E7DEC:;
    return v0;
}
