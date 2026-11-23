/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D61A0(s32, s32, s32);

s32 func_001D6D70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    { s32 c_ = a0 == 0; s0 = a2; if (c_) goto L_001D6D8C; }
    if (s0 != 0) { a2 = a1; goto L_001D6D94; }
L_001D6D8C:;
    v0 = 0; goto L_001D6E24;
L_001D6D94:;
    a1 = 1; v0 = func_001D61A0(a0, a1, a2);
    if (v0 != 0) { a2 = (*(volatile s16 *) (u32) (v0 + 4)); goto L_001D6DAC; }
    v0 = 0; goto L_001D6E24;
L_001D6DAC:;
    a3 = (s32) ((u32) sp + 0x48U);
    a1 = (*(volatile s16 *) (u32) (v0 + 6));
    a4 = (s32) ((u32) sp + 0x20U);
    a0 = (*(volatile s16 *) (u32) (v0 + 10));
    v1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u16 *) (u32) (sp + 72)) = (u16) a2;
    (*(volatile u16 *) (u32) (sp + 74)) = (u16) a1;
    v0 = (*(volatile s16 *) (u32) (v0 + 12));
    (*(volatile u16 *) (u32) (sp + 76)) = (u16) a0;
    a2 = (*(volatile s16 *) (u32) a3);
    a1 = (*(volatile s16 *) (u32) (a3 + 2));
    a0 = (*(volatile s16 *) (u32) (a3 + 4));
    (*(volatile u16 *) (u32) (sp + 78)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (a3 + 6));
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) a1;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) a0;
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) v0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("vitof4.xyzw $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    v0 = s0;
    f3.f = (*(volatile f32 *) (u32) (sp + 48));
    f2.f = (*(volatile f32 *) (u32) (sp + 52));
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    (*(volatile f32 *) (u32) s0) = f3.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 12)) = f0.f;
L_001D6E24:;
    return v0;
}
