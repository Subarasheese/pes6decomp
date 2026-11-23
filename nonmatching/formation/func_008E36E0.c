/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008E37C0(s32, s32, s32, s32);

void func_008E36E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = (*(volatile u8 *) (u32) (a0 + 1));
    { s32 c_ = v0 == 0; s0 = a1; if (c_) goto L_008E372C; }
    a0 = (*(volatile s16 *) (u32) a2);
    (*(volatile u16 *) (u32) (sp + 72)) = (u16) a0;
    v1 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) (sp + 74)) = (u16) v1;
    v0 = (*(volatile s16 *) (u32) (a2 + 4));
    v0 = (s32) ((u32) a0 + (u32) v0);
    (*(volatile u16 *) (u32) (sp + 76)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (a2 + 6));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u16 *) (u32) (sp + 78)) = (u16) v0; goto L_008E3754;
L_008E372C:;
    a0 = (*(volatile s16 *) (u32) a2);
    (*(volatile u16 *) (u32) (sp + 76)) = (u16) a0;
    v1 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) (sp + 78)) = (u16) v1;
    v0 = (*(volatile s16 *) (u32) (a2 + 4));
    v0 = (s32) ((u32) a0 + (u32) v0);
    (*(volatile u16 *) (u32) (sp + 72)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (a2 + 6));
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u16 *) (u32) (sp + 74)) = (u16) v0;
L_008E3754:;
    a1 = (*(volatile u8 *) (u32) (s1 + 1));
    a0 = s1;
    a2 = (s32) ((u32) sp + 0x40U);
    a3 = (s32) ((u32) sp + 0x4cU); func_008E37C0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 1));
    a0 = s1;
    a2 = (s32) ((u32) sp + 0x38U);
    a3 = (s32) ((u32) sp + 0x48U); func_008E37C0(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 60));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (s0 + 12)) = f0.f;
    return;
}
