/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_001312D0(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) v1 + (u32) a2);
    a2 = (s32) ((u32) a2 << 1);
    v1 = (s32) 0x38000000U;
    a2 = (s32) ((u32) a1 + (u32) a2);
    v1 = v1 | 0x100;
    a1 = (*(volatile s16 *) (u32) (a2 + 2));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 128)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 4));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 132)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 6));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 136)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 8));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 140)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 12));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 144)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 14));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 148)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 16));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 152)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (a2 + 18));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 156)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 128(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 128(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 144(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) v1));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 144(%0)" : : "r"((u32) a0) : "memory");
    v1 = (*(volatile u16 *) (u32) a2);
    if (v1 != 0) { a1 = (s32) v1 >> 11; goto L_001313C4; }
    f2.i = (s32) 0;
    v1 = (*(volatile u16 *) (u32) (a2 + 10)); goto L_001313E8;
L_001313C4:;
    a1 = a1 & 0x1f;
    v1 = v1 & 0x7ff;
    a1 = (s32) ((u32) a1 + 0x70U);
    v1 = (s32) ((u32) v1 << 12);
    a1 = (s32) ((u32) a1 << 23);
    v1 = a1 | v1;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) v1;
    f2.f = (*(volatile f32 *) (u32) (sp + 12));
    v1 = (*(volatile u16 *) (u32) (a2 + 10));
L_001313E8:;
    if (v1 != 0) { a1 = (s32) v1 >> 11; goto L_001313FC; }
    f0.i = (s32) 0;
    f1.f = f0.f - f2.f; goto L_00131420;
L_001313FC:;
    a1 = a1 & 0x1f;
    v1 = v1 & 0x7ff;
    a1 = (s32) ((u32) a1 + 0x70U);
    v1 = (s32) ((u32) v1 << 12);
    a1 = (s32) ((u32) a1 << 23);
    v1 = a1 | v1;
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) v1;
    f0.f = (*(volatile f32 *) (u32) (sp + 8));
    f1.f = f0.f - f2.f;
L_00131420:;
    f0.f = f12.f - f2.f;
    (*(volatile f32 *) (u32) (a0 + 192)) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 196)) = f0.f;
    return f0.f;
}
