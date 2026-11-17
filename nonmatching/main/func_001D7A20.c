/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001D7A20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_001D7A30;
    if (a1 != 0) { a5 = (*(volatile s32 *) (u32) (a0 + 28)); goto L_001D7A38; }
L_001D7A30:;
    v0 = 0; goto L_001D7B74;
L_001D7A38:;
    a3 = (s32) ((u32) sp + 0x10U);
    a4 = (s32) ((u32) sp + 0x30U);
    v1 = (*(volatile s16 *) (u32) (a5 + 4));
    v0 = (*(volatile s16 *) (u32) (a5 + 6));
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) v0;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("vitof4.xy $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a4) : "memory");
    a7 = 0;
    v1 = (*(volatile s16 *) (u32) (a5 + 8));
    v0 = (*(volatile s16 *) (u32) (a5 + 10));
    a3 = (*(volatile u8 *) (u32) (a5 + 2));
    a6 = (*(volatile s32 *) (u32) (a5 + 20));
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = (f32) f1.i;
    at = 0 < a3;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a4 + 8)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (a4 + 12)) = f0.f; if (c_) goto L_001D7B70; }
    v1 = a2 & 0xffff;
L_001D7A98:;
    v0 = (*(volatile u16 *) (u32) (a6 + 2));
    if (v1 != v0) { a7 = (s32) ((u32) a7 + 0x1U); goto L_001D7B60; }
    a2 = (*(volatile s16 *) (u32) (a6 + 10));
    t5 = (s32) ((u32) sp + 0x4aU);
    v1 = (*(volatile s16 *) (u32) (a6 + 12));
    a4 = (s32) ((u32) sp + 0x48U);
    t4 = (*(volatile s16 *) (u32) (a6 + 4));
    a5 = (s32) ((u32) sp + 0x0U);
    a3 = (*(volatile s16 *) (u32) (a6 + 6));
    v0 = (s32) ((u32) sp + 0x20U);
    (*(volatile u16 *) (u32) (sp + 72)) = (u16) 0;
    (*(volatile u16 *) (u32) t5) = (u16) 0;
    a7 = (*(volatile s16 *) (u32) (sp + 72));
    (*(volatile u16 *) (u32) (sp + 78)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a4 + 6));
    a6 = (*(volatile s16 *) (u32) t5);
    (*(volatile u16 *) (u32) (sp + 76)) = (u16) a2;
    a2 = (*(volatile s16 *) (u32) (a4 + 4));
    a7 = (s32) ((u32) a7 + (u32) t4);
    (*(volatile u16 *) (u32) (sp + 72)) = (u16) a7;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) v1;
    a3 = (s32) ((u32) a6 + (u32) a3);
    (*(volatile u16 *) (u32) t5) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) a4);
    v1 = (*(volatile s16 *) (u32) (a4 + 2));
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) a2;
    (*(volatile u32 *) (u32) sp) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 4)) = (u32) v1;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a5) : "memory");
    __asm__ volatile("vitof4.xyzw $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    f6.f = (*(volatile f32 *) (u32) (a0 + 112));
    f5.f = (*(volatile f32 *) (u32) (sp + 48));
    f3.f = (*(volatile f32 *) (u32) (sp + 52));
    f4.f = (*(volatile f32 *) (u32) (sp + 32));
    v0 = a1;
    f2.f = (*(volatile f32 *) (u32) (sp + 36));
    f1.f = (*(volatile f32 *) (u32) (sp + 40));
    f5.f = f6.f + f5.f;
    f4.f = f4.f + f5.f;
    (*(volatile f32 *) (u32) a1) = f4.f;
    f4.f = (*(volatile f32 *) (u32) (a0 + 116));
    f0.f = (*(volatile f32 *) (u32) (sp + 44));
    f3.f = f4.f + f3.f;
    f2.f = f2.f + f3.f;
    (*(volatile f32 *) (u32) (a1 + 4)) = f2.f;
    (*(volatile f32 *) (u32) (a1 + 8)) = f1.f;
    (*(volatile f32 *) (u32) (a1 + 12)) = f0.f; goto L_001D7B74;
L_001D7B60:;
    v0 = a7 < a3;
    { s32 c_ = v0 != 0; a6 = (s32) ((u32) a6 + 0xeU); if (c_) goto L_001D7A98; }
L_001D7B70:;
    v0 = 0;
L_001D7B74:;
    return v0;
}
