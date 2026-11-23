/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001F3D30(s32, s32);
void func_001F3D80(s32, s32, s32);
s32 func_002DB830(s32);
s32 func_002DB940(s32);
void func_008B9B00(s32, s32, s32, s32);
s32 func_008C5740(s32);

void func_008D0CB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s2 = (*(volatile u8 *) (u32) (a1 + 6));
    s0 = a1; v0 = func_002DB940(a0);
    a0 = s1;
    s1 = v0; v0 = func_002DB830(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 488));
    s1 = (s32) ((u32) s1 - (u32) v0);
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    v0 = s2 & 0xff;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); s1 = lo; }
    f1.f = (*(volatile f32 *) (u32) (sp + 100));
    f0.i = (s32) f0.f;
    a1 = f0.i;
    f0.i = (s32) s1;
    f0.f = (f32) f0.i;
    f0.f = f1.f + f0.f;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) (s0 + 472)); func_008B9B00(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 476));
    if (v0 == 0) { a0 = (s32) ((u32) s0 + 0x214U); goto L_008D0DD0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 496));
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    f0.i = (s32) s1;
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    f2.f = (*(volatile f32 *) (u32) (sp + 100));
    f0.i = (s32) f0.f;
    f1.f = f2.f + f1.f;
    a1 = f0.i;
    f0.i = (s32) f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f1.f;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) (s0 + 476)); func_008B9B00(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 516));
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 136; v0 = func_001D7A20(a0, a1, a2);
    f0.i = (s32) s1;
    a0 = (*(volatile s32 *) (u32) (s0 + 456));
    f0.f = (f32) f0.i;
    a1 = (s32) ((u32) sp + 0x60U);
    f1.f = (*(volatile f32 *) (u32) (sp + 100));
    f20.f = (*(volatile f32 *) (u32) (sp + 96));
    f21.f = f1.f + f0.f; func_001F3D30(a0, a1);
    (*(volatile f32 *) (u32) (sp + 96)) = f20.f;
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile f32 *) (u32) (sp + 100)) = f21.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 456));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x214U);
L_008D0DD0:;
    v0 = func_008C5740(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 103; v0 = func_001D7A20(a0, a1, a2);
    f0.i = (s32) s1;
    f0.f = (f32) f0.i;
    s1 = 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 100));
    f20.f = f1.f + f0.f;
L_008D0E00:;
    a0 = (*(volatile s32 *) (u32) (s0 + 524));
    if (a0 == 0) goto L_008D0E28;
    a1 = (s32) ((u32) sp + 0x50U); func_001D7BE0(a0, a1);
    (*(volatile f32 *) (u32) (sp + 84)) = f20.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 524));
    a1 = (s32) ((u32) sp + 0x50U); func_001D7CE0(a0, a1);
L_008D0E28:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008D0E00; }
    return;
}
