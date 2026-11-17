/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_00130A50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };

    v1 = (s32) 0x400000U;
    a2 = (s32) 0x38000000U;
    a5 = (*(volatile s32 *) (u32) (v1 + -18552));
    a1 = (s32) 0x400000U;
    a2 = a2 | 0x100;
    v1 = (s32) 0x400000U;
    a3 = (s32) ((u32) a5 + 0x8U);
    a4 = (*(volatile s32 *) (u32) (v1 + -18548));
    (*(volatile u32 *) (u32) (a1 + -18552)) = (u32) a3;
    v1 = (s32) 0x400000U;
    a1 = (s32) ((u32) a4 + 0x8U);
    (*(volatile u32 *) (u32) (v1 + -18548)) = (u32) a1;
    v1 = (*(volatile s16 *) (u32) a5);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 128)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a5 + 2));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 132)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a5 + 4));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 136)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a5 + 6));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 140)) = f0.f;
    v1 = (*(volatile s16 *) (u32) a4);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 144)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a4 + 2));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 148)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a4 + 4));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 152)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a4 + 6));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + 156)) = f0.f;
    __asm__ volatile("lqc2 $vf4, 128(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a2));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 128(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf4, 144(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a2));
    __asm__ volatile("vmulx.xyzw $vf6, $vf4, $vf5x");
    __asm__ volatile("sqc2 $vf6, 144(%0)" : : "r"((u32) a0) : "memory"); return f0.f;
}
