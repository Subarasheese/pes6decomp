/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001E4E30(s32, s32, s32, s32);
void func_008B31A0(s32, s32, s32, s32);
void func_008B3280(s32, s32, s32, s32);
void func_008B3290(s32, s32, s32, s32);
void func_008B32B0(s32, s32, s32, s32);

void func_0023B090(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a2;
    s1 = a3;
    s0 = a1;
    a0 = (*(volatile s32 *) (u32) (a4 + 12));
    f21.i = f12.i; f0.f = func_001E4E30(a0, a1, a2, a3);
    v0 = (s32) 0x540000U;
    a1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + -15584));
    f20.i = f0.i; func_008B31A0(a0, a1, a2, a3);
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -15580));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    a2 = s1 & 0xffff;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x70U); func_008B32B0(a0, a1, a2, a3);
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc320U);
    s1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0x60U); func_008B3280(a0, a1, a2, a3);
    f2.f = (*(volatile f32 *) (u32) (sp + 112));
    v0 = (s32) 0x40400000U;
    f1.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    a1 = (s32) ((u32) sp + 0x60U);
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f; func_008B3290(a0, a1, a2, a3);
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc320U);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x60U); func_008B3280(a0, a1, a2, a3);
    f2.f = (*(volatile f32 *) (u32) (sp + 112));
    v0 = (s32) 0x41700000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    a0 = (*(volatile s32 *) (u32) s0);
    f1.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x60U);
    f2.f = f2.f + f20.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    f0.f = f1.f + f2.f;
    f0.f = f21.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f; func_008B3290(a0, a1, a2, a3);
    return;
}
