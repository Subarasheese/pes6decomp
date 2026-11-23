/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002DF0A0(s32, s32);
void func_002DF6E0(s32, f32);
f32 func_008B32A0(s32, s32);
void func_008B32B0(s32, s32, s32);
void func_008C2CA0(s32);

void func_008C2BF0(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s0 = a0; func_008C2CA0(a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 11464));
    a1 = (s32) ((u32) sp + 0x20U);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 1; func_008B32B0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 11464));
    a1 = (s32) ((u32) sp + 0x30U);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_008B32B0(a0, a1, a2);
    f2.f = (*(volatile f32 *) (u32) (sp + 32));
    a0 = (*(volatile s32 *) (u32) (gp + -20228));
    f1.f = (*(volatile f32 *) (u32) (sp + 36));
    a1 = (s32) ((u32) sp + 0x40U);
    f0.i = (s32) 0;
    (*(volatile f32 *) (u32) (sp + 64)) = f2.f;
    acc = f0.f + f1.f;
    v0 = (*(volatile s8 *) (u32) s0);
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    f2.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    f1.f = (f32) f2.i;
    f3.f = (*(volatile f32 *) (u32) (sp + 44));
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    f0.f = acc + f3.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; func_002DF0A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 11464));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 1; f0.f = func_008B32A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20228));
    f12.i = f0.i; func_002DF6E0(a0, f12.f);
    return;
}
