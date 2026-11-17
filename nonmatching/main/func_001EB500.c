/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001EB500(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    a4 = (s32) ((u32) sp + 0x28U);
    { s32 c_ = a4 == 0; v1 = 8; if (c_) goto L_001EB52C; }
L_001EB510:;
    (*(volatile u8 *) (u32) a4) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a4 = (s32) ((u32) a4 + 0x1U);
    if (v1 != 0) goto L_001EB510;
L_001EB52C:;
    if (a2 != 0) goto L_001EB538;
    a2 = (s32) ((u32) sp + 0x28U);
L_001EB538:;
    if (a3 == 0) goto L_001EB5B0;
    a7 = (s32) ((u32) sp + 0x14U);
    a6 = (s32) ((u32) sp + 0x0U);
    a5 = (s32) ((u32) sp + 0x10U);
L_001EB54C:;
    a4 = (*(volatile s16 *) (u32) a1);
    v1 = (*(volatile s16 *) (u32) (a1 + 2));
    (*(volatile u32 *) (u32) sp) = (u32) a4;
    (*(volatile u32 *) (u32) (a6 + 4)) = (u32) v1;
    a1 = (s32) ((u32) a1 + 0x4U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a6) : "memory");
    __asm__ volatile("vitof12.xy $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a5) : "memory");
    f1.f = (*(volatile f32 *) (u32) (a2 + 4));
    f2.f = (*(volatile f32 *) (u32) a2);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    f0.f = (*(volatile f32 *) (u32) a7);
    f3.f = (*(volatile f32 *) (u32) (sp + 16));
    f0.f = f0.f + f1.f;
    f2.f = f3.f + f2.f;
    (*(volatile f32 *) (u32) a7) = f0.f;
    (*(volatile f32 *) (u32) (sp + 16)) = f2.f;
    a4 = (*(volatile u32 *) (u32) a7);
    v1 = (*(volatile u32 *) (u32) (sp + 16));
    a4 = (s64) ((u64) a4 << 32);
    v1 = v1 | a4;
    (*(volatile u64 *) (u32) a0) = (u64) v1;
    { s32 c_ = a3 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_001EB54C; }
L_001EB5B0:;
    return v0;
}
