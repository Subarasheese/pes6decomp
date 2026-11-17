/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DEF70(s32, f32);
s32 func_001DF750(s32, f32, f32);
s32 func_001E1BE0(s32, s32, s32, s32);
s32 func_001E62C0(void);

s32 func_001D6B10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s0 = (*(volatile s32 *) (u32) (a0 + 8));
    s1 = a3; v0 = func_001E62C0();
    v1 = v0 & 0x2;
    v0 = 2;
    if (v1 != v0) goto L_001D6C10;
    a6 = (*(volatile s16 *) (u32) (s1 + 4));
    a0 = (s32) ((u32) sp + 0x78U);
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) sp + 0x50U);
    a5 = (*(volatile s16 *) (u32) (s1 + 6));
    a2 = (s32) ((u32) sp + 0x60U);
    a4 = (*(volatile s16 *) (u32) (s0 + 6));
    a3 = (*(volatile s16 *) (u32) (s1 + 8));
    v0 = (*(volatile s16 *) (u32) (s0 + 8));
    v1 = (s32) ((u32) a6 + (u32) v1);
    (*(volatile u16 *) (u32) (sp + 120)) = (u16) v1;
    a4 = (s32) ((u32) a5 + (u32) a4);
    v1 = (*(volatile s16 *) (u32) a0);
    (*(volatile u16 *) (u32) (sp + 122)) = (u16) a4;
    v0 = (s32) ((u32) a3 + (u32) v0);
    (*(volatile u16 *) (u32) (sp + 124)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (a0 + 2));
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) v0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("vitof4.xy $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    v0 = (s32) ((u32) sp + 0x64U);
    f2.f = (*(volatile f32 *) (u32) (s2 + 116));
    s0 = (s32) ((u32) sp + 0x68U);
    f4.f = (*(volatile f32 *) (u32) (s2 + 112));
    f1.f = (*(volatile f32 *) (u32) (s2 + 120));
    f0.f = (*(volatile f32 *) (u32) v0);
    a1 = (*(volatile s16 *) (u32) (a0 + 4));
    v1 = (*(volatile s16 *) (u32) (a0 + 6));
    f3.f = (*(volatile f32 *) (u32) (sp + 96));
    f13.f = f0.f + f2.f;
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
    f2.i = (s32) a1;
    f0.i = (s32) v1;
    f2.f = (f32) f2.i;
    f0.f = (f32) f0.i;
    f12.f = f3.f + f4.f;
    (*(volatile f32 *) (u32) (a2 + 8)) = f2.f;
    (*(volatile f32 *) (u32) (a2 + 12)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    (*(volatile f32 *) (u32) v0) = f13.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f12.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) s0) = f0.f; v0 = func_001DF750(a0, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
    f12.f = (*(volatile f32 *) (u32) s0); v0 = func_001DEF70(a0, f12.f);
L_001D6C10:;
    a0 = (*(volatile s32 *) (u32) (s3 + 12)); v0 = func_001E1BE0(a0, a1, a2, a3);
    return v0;
}
