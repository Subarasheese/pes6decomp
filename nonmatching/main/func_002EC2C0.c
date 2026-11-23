/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7CE0(s32, s32);
void func_002E3330(s32, s32);
void func_002E4500(s32, s32);

void func_002EC2C0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) a1);
    s0 = a0;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 60));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (a0 + 136));
    a1 = (s32) ((u32) sp + 0x30U); func_001D7CE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 236));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x3f94U);
    a0 = (*(volatile s32 *) (u32) (s0 + 136));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x20U); v0 = func_001D7A20(a0, a1, a2);
    f2.f = (*(volatile f32 *) (u32) (sp + 32));
    v0 = (s32) 0xbf800000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 36));
    f0.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 48)) = f2.f;
    v0 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 60));
    f0.f = f0.f + f1.f;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = (s32) ((u32) sp + 0x30U); func_002E4500(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 236));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x3f88U);
    a0 = (*(volatile s32 *) (u32) (s0 + 136));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile u16 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x20U); v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 32));
    v0 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 36));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 60));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 84));
    a1 = (s32) ((u32) sp + 0x30U); func_002E3330(a0, a1);
    v1 = 1;
    (*(volatile u32 *) (u32) (s0 + 72)) = (u32) v1;
    return;
}
