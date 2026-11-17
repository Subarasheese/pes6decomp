/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_002A11B0(s32, s32);
s32 func_002A95F0(s32, s32, s32);

s32 func_002AD2D0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { 0 };
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a2 = s0 & 0xff;
    a0 = (s32) ((u32) sp + 0x20U); v0 = func_002A95F0(a0, a1, a2);
    a1 = s0;
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_002A11B0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 56));
    f0.f = (*(volatile f32 *) (u32) (sp + 40));
    f3.f = (*(volatile f32 *) (u32) (sp + 48));
    f2.f = (*(volatile f32 *) (u32) (sp + 32));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    return v0;
}
