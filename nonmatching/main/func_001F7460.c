/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F7460(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_001F7470;
    if (a1 != 0) { a0 = (*(volatile s32 *) (u32) (a0 + 20)); goto L_001F7478; }
L_001F7470:;
    v0 = 0; goto L_001F754C;
L_001F7478:;
    v1 = a2 & 0xffff;
    v0 = (*(volatile u8 *) (u32) (a0 + 2));
    v0 = v1 < v0;
    if (v0 != 0) { a5 = (*(volatile s32 *) (u32) (a0 + 12)); goto L_001F7494; }
    v0 = 0; goto L_001F754C;
L_001F7494:;
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    t4 = (s32) ((u32) sp + 0x2aU);
    a3 = (s32) ((u32) v0 << 1);
    (*(volatile u16 *) (u32) (sp + 40)) = (u16) 0;
    (*(volatile u16 *) (u32) t4) = (u16) 0;
    v1 = (s32) ((u32) sp + 0x28U);
    a2 = (*(volatile s16 *) (u32) t4);
    a4 = (s32) ((u32) sp + 0x0U);
    v0 = (s32) ((u32) sp + 0x10U);
    a3 = (s32) ((u32) a3 + (u32) a5);
    a0 = (*(volatile s16 *) (u32) (sp + 40));
    a7 = (*(volatile s16 *) (u32) (a3 + 10));
    a6 = (*(volatile s16 *) (u32) (a3 + 12));
    a5 = (*(volatile s16 *) (u32) (a3 + 4));
    (*(volatile u16 *) (u32) (sp + 44)) = (u16) a7;
    (*(volatile u16 *) (u32) (sp + 46)) = (u16) a6;
    a3 = (*(volatile s16 *) (u32) (a3 + 6));
    a5 = (s32) ((u32) a0 + (u32) a5);
    a0 = (*(volatile s16 *) (u32) (v1 + 4));
    (*(volatile u16 *) (u32) (sp + 40)) = (u16) a5;
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u16 *) (u32) t4) = (u16) a2;
    a3 = (*(volatile s16 *) (u32) v1);
    a2 = (*(volatile s16 *) (u32) (v1 + 2));
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) a0;
    (*(volatile u32 *) (u32) sp) = (u32) a3;
    v1 = (*(volatile s16 *) (u32) (v1 + 6));
    (*(volatile u32 *) (u32) (sp + 4)) = (u32) a2;
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) v1;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("vitof4.xyzw $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    f3.f = (*(volatile f32 *) (u32) (sp + 16));
    v0 = (*(volatile s32 *) (u32) a1);
    f2.f = (*(volatile f32 *) (u32) (sp + 20));
    f1.f = (*(volatile f32 *) (u32) (sp + 24));
    f0.f = (*(volatile f32 *) (u32) (sp + 28));
    (*(volatile f32 *) (u32) v0) = f3.f;
    v0 = (*(volatile s32 *) (u32) a1);
    (*(volatile f32 *) (u32) (v0 + 4)) = f2.f;
    v0 = (*(volatile s32 *) (u32) a1);
    (*(volatile f32 *) (u32) (v0 + 8)) = f1.f;
    v0 = (*(volatile s32 *) (u32) a1);
    (*(volatile f32 *) (u32) (v0 + 12)) = f0.f;
    v0 = (*(volatile s32 *) (u32) a1);
L_001F754C:;
    return v0;
}
