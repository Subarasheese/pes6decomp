/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 __floatundisf(s64, s64, s64, s64, s64, s64);
s64 func_0011F248(s64, s64, s64, s64, s64, s64);
f32 func_00264900(s64);

void func_00264A10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    a1 = (*(volatile s64 *) (u32) a0);
    f21.i = (s32) 0;
    v1 = (*(volatile s64 *) (u32) (a0 + 8));
    v0 = (*(volatile s64 *) (u32) (a0 + 16));
    (*(volatile u64 *) (u32) (sp + 32)) = (u64) a1;
    (*(volatile u64 *) (u32) (sp + 40)) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 48)) = (u64) v0;
    a1 = (*(volatile s64 *) (u32) (a0 + 24));
    v1 = (*(volatile s64 *) (u32) (a0 + 32));
    v0 = (*(volatile s64 *) (u32) (a0 + 40));
    (*(volatile u64 *) (u32) (sp + 56)) = (u64) a1;
    (*(volatile u64 *) (u32) (sp + 64)) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 72)) = (u64) v0;
    v1 = (*(volatile s64 *) (u32) (a0 + 48));
    v0 = (*(volatile s64 *) (u32) (a0 + 56));
    (*(volatile u64 *) (u32) (sp + 80)) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 88)) = (u64) v0;
    a0 = 0; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 32));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = f21.i;
    a0 = 1;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 40));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    a0 = 2;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 48));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    a0 = 3;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 56));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    a0 = 4;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 64));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    a0 = 5;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 72));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    a0 = 6;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 80));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    a0 = 7;
    acc = f1.f + f21.f;
    f21.f = acc + f0.f * f20.f; f0.f = func_00264900(a0);
    a0 = (*(volatile s64 *) (u32) (sp + 88));
    f20.i = f0.i; f0.f = __floatundisf(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) 0;
    acc = f1.f + f21.f;
    f12.f = acc + f0.f * f20.f; v0 = func_0011F248(a0, a1, a2, a3, a4, a5);
    return;
}
