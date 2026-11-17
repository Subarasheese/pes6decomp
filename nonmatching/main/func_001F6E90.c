/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F6E90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_001F6F48;
    if (a1 != 0) goto L_001F6EA8;
    goto L_001F6F4C;
L_001F6EA8:;
    a0 = (*(volatile s32 *) (u32) (a0 + 20));
    a3 = a2 & 0xffff;
    v1 = (*(volatile u8 *) (u32) a0);
    at = a3 < v1;
    if (at == 0) goto L_001F6F48;
    v1 = (s32) 0x3f800000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    f2.i = (s32) v1;
    a6 = 0;
    a5 = (s32) ((u32) sp + 0x14U);
    a4 = (s32) ((u32) sp + 0x0U);
    v1 = (s32) ((u32) a3 << 1);
    a2 = (s32) ((u32) sp + 0x10U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a3);
    v1 = (s32) ((u32) v1 << 1);
    a3 = (s32) ((u32) a0 + (u32) v1);
L_001F6EF4:;
    v1 = (s32) ((u32) a6 << 2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    a0 = (*(volatile s16 *) (u32) (v1 + 14));
    v1 = (*(volatile s16 *) (u32) (v1 + 16));
    (*(volatile u32 *) (u32) sp) = (u32) a0;
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) v1;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("vitof12.xy $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    v1 = (s32) ((u32) a6 << 1);
    v1 = (s32) ((u32) v1 + (u32) a6);
    v1 = (s32) ((u32) v1 << 2);
    a6 = (s32) ((u32) a6 + 0x1U);
    a0 = (s32) ((u32) a1 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (sp + 16));
    v1 = a6 < 4;
    f0.f = (*(volatile f32 *) (u32) a5);
    (*(volatile f32 *) (u32) a0) = f1.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) (a0 + 8)) = f2.f; if (c_) goto L_001F6EF4; }
L_001F6F48:;
L_001F6F4C:;
    return v0;
}
