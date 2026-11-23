/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_002DB830(s32);
s32 func_002DB940(s32);
void func_008B9B00(s32, s32, s32, s32);

void func_008C2E50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = (*(volatile u8 *) (u32) (a1 + 4));
    s0 = a0; v0 = func_002DB940(a0);
    a0 = s0;
    s0 = v0; v0 = func_002DB830(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 96));
    s0 = (s32) ((u32) s0 - (u32) v0);
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 85; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    v0 = s1 & 0xff;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f1.i = (s32) f1.f;
    a1 = f1.i;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) (s2 + 84)); func_008B9B00(a0, a1, a2, a3);
    return;
}
