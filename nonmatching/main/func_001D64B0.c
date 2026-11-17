/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7CE0(s32, s32);
s32 func_001D9420(s32, s32, s32, s32);
s32 func_001E62C0(void);

s32 func_001D64B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    s0 = a3; v0 = func_001E62C0();
    v1 = v0 & 0x2;
    v0 = 2;
    if (v1 != v0) goto L_001D65DC;
    v0 = (*(volatile u8 *) (u32) (s2 + 36));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_001D65DC;
    v1 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001D651C; }
L_001D6500:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001D6500;
L_001D651C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    a2 = (s32) ((u32) sp + 0x68U);
    a7 = (*(volatile s16 *) (u32) (s0 + 4));
    a3 = (s32) ((u32) sp + 0x40U);
    a5 = (*(volatile s16 *) (u32) (s0 + 6));
    a1 = (s32) ((u32) sp + 0x50U);
    v1 = (*(volatile s16 *) (u32) (s0 + 8));
    a0 = (*(volatile s32 *) (u32) (s2 + 12));
    a6 = (*(volatile s16 *) (u32) (v0 + 4));
    a4 = (*(volatile s16 *) (u32) (v0 + 6));
    a6 = (s32) ((u32) a7 + (u32) a6);
    v0 = (*(volatile s16 *) (u32) (v0 + 8));
    a4 = (s32) ((u32) a5 + (u32) a4);
    (*(volatile u16 *) (u32) (sp + 104)) = (u16) a6;
    (*(volatile u16 *) (u32) (sp + 106)) = (u16) a4;
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u16 *) (u32) (sp + 108)) = (u16) v0;
    v1 = (*(volatile s16 *) (u32) a2);
    v0 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vitof4.xy $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a1) : "memory");
    v1 = (*(volatile s16 *) (u32) (a2 + 4));
    f2.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = (*(volatile s16 *) (u32) (a2 + 6));
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    f3.i = (s32) v1;
    f0.i = (s32) v0;
    f3.f = (f32) f3.i;
    (*(volatile f32 *) (u32) (a1 + 8)) = f3.f;
    f3.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a1 + 12)) = f3.f;
    f3.f = (*(volatile f32 *) (u32) (s1 + 112));
    f0.f = (*(volatile f32 *) (u32) (sp + 88));
    f2.f = f2.f + f3.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f2.f;
    f2.f = (*(volatile f32 *) (u32) (s1 + 116));
    f1.f = f1.f + f2.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s1 + 120));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f; v0 = func_001D7CE0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s2 + 36));
    v0 = v0 & 0xfe;
    (*(volatile u8 *) (u32) (s2 + 36)) = (u8) v0;
L_001D65DC:;
    a0 = (*(volatile s32 *) (u32) (s2 + 12)); v0 = func_001D9420(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s2 + 36)) = (u8) 0;
    return v0;
}
