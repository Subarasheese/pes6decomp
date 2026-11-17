/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002DB830(s64);
s64 func_002DB940(s64);
void func_002DF0A0(s64, s64, s64, f32, f32);
void func_002DF8E0(s64, s64, s64, s64);
void func_00C8F830(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00C8FBC0(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00C8E0D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13) {
    s64 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    a0 = (*(volatile s32 *) (u32) (a1 + 372));
    s0 = a1;
    s1 = (s32) ((u32) s0 + 0x174U); v0 = func_002DB940(a0);
    a0 = (*(volatile s32 *) (u32) s1);
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_002DB830(a0);
    s1 = (s64) ((u64) v0 << 48);
    v0 = (*(volatile u8 *) (u32) (s0 + 1));
    s1 = s1 >> 48;
    if (v0 == s1) { v0 = (s32) ((u32) s2 - (u32) s1); goto L_00C8E124; }
    a0 = s0; func_00C8F830(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) s2 - (u32) s1);
L_00C8E124:;
    a1 = (s32) ((u32) sp + 0x40U);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    f0.i = (s32) v0;
    f2.f = (f32) f0.i;
    f5.f = (*(volatile f32 *) (u32) (s0 + 132));
    f4.f = (*(volatile f32 *) (u32) (s0 + 136));
    f3.f = (*(volatile f32 *) (u32) (s0 + 140));
    f1.f = (*(volatile f32 *) (u32) (s0 + 144));
    f0.i = (s32) 0;
    (*(volatile f32 *) (u32) (sp + 64)) = f5.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f4.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 68));
    f3.f = (*(volatile f32 *) (u32) (s0 + 128));
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 180));
    s1 = (s32) ((u32) s0 + 0xb4U); func_002DF0A0(a0, a1, a2, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 1; func_002DF8E0(a0, a1, a2, a3);
    v0 = 1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0; func_00C8FBC0(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
