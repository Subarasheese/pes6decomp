/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B9CA0(s32, s32, s32, s32, f32, f32);
f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001D7E40(s32, s32, s32, s32);
void func_001D7F10(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);

s32 func_001B9B30(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a1;
    s2 = a2;
    s0 = a3;
    v0 = func_001D7F90(a0, a1, a2, a3);
    s1 = v0;
    a1 = s3;
    a0 = s1; func_001D7E40(a0, a1, a2, a3);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = s2; v0 = func_001D7A20(a0, a1, a2);
    a1 = s2;
    a0 = s1; f0.f = func_001D79A0(a0, a1);
    a1 = s0;
    a0 = s1;
    f20.i = f0.i; f0.f = func_001D79A0(a0, a1);
    f12.i = f20.i;
    a0 = (s32) ((u32) sp + 0x60U);
    f13.i = f0.i; v0 = func_001B9CA0(a0, a1, a2, a3, f12.f, f13.f);
    s0 = v0;
    a0 = s1; func_001D7F10(a0, a1, a2, a3);
    v0 = s0;
    return v0;
}
