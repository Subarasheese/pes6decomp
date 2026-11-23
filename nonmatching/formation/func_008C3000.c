/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001B9CA0(s64, s64, s64, s64, f32, f32);
f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7BE0(s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);

void func_008C3000(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 92));
    { s32 c_ = v1 != 0; s0 = a1; if (c_) goto L_008C3108; }
    { u32 a_ = (u32) (s0 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = 4;
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s2 = v0;
    a1 = (s32) ((u32) sp + 0x80U);
    a0 = s2;
    (*(volatile u32 *) (u32) (s1 + 92)) = (u32) s2; func_001D7BE0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    a0 = s2;
    a1 = (s32) ((u32) s1 + 0x8U);
    a2 = 22;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (s1 + 6)) = (u16) v0; v0 = func_001D7A20(a0, a1, a2);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 34; v0 = func_001D7A20(a0, a1, a2);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 35; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 100));
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_008C30B0; }
L_008C30B0:;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) v0;
    a1 = s0;
    a0 = 11; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a1 = (s32) ((u32) sp + 0x70U);
    a0 = s0;
    a2 = 82;
    (*(volatile u32 *) (u32) (s1 + 100)) = (u32) s0; v0 = func_001D7A20(a0, a1, a2);
    a0 = s0;
    a1 = 82; f0.f = func_001D79A0(a0, a1);
    a0 = s0;
    a1 = 83;
    f20.i = f0.i; f0.f = func_001D79A0(a0, a1);
    f12.i = f20.i;
    a0 = (s32) ((u32) sp + 0x70U);
    f13.i = f0.i; v0 = func_001B9CA0(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u32 *) (u32) (s1 + 88)) = (u32) v0;
L_008C3108:;
    return;
}
