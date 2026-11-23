/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EF370(s32, s32);

void func_002FA280(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = a4;
    a0 = s2;
    a2 = a3 & 0xffff;
    a1 = (s32) ((u32) sp + 0x60U);
    v0 = func_001D7A20(a0, a1, a2);
    f20.f = (*(volatile f32 *) (u32) (sp + 96));
    v0 = (s32) ((u32) sp + 0x88U);
    f21.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 136)) = f20.f;
    { s32 c_ = v0 == 0; (*(volatile f32 *) (u32) (sp + 140)) = f21.f; if (c_) goto L_002FA2E0; }
    a2 = s1 & 0xffff; goto L_002FA2F0;
L_002FA2E0:;
    f20.i = (s32) 0;
    f21.i = f20.i;
    a2 = s1 & 0xffff;
L_002FA2F0:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    f1.f = f1.f - f20.f;
    f0.f = f0.f - f21.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    { s32 c_ = s0 == 0; (*(volatile f32 *) (u32) (sp + 116)) = f0.f; if (c_) goto L_002FA338; }
    f0.f = (*(volatile f32 *) (u32) s0);
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 4));
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
L_002FA338:;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x70U); func_001EF370(a0, a1);
    return;
}
