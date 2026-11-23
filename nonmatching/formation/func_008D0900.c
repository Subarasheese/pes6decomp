/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_001F08B0(s32);
void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
s32 func_001F1A20(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
s32 func_002DB830(s32);
s32 func_008C5050(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008D0900(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = 8;
    s2 = a1;
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = a0 == 0; s0 = a2; if (c_) goto L_008D0948; }
L_008D092C:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008D092C;
L_008D0948:;
    v1 = (*(volatile s32 *) (u32) (s1 + 516));
    if (v1 == 0) { ; goto L_008D0A08; }
    a0 = (*(volatile s32 *) (u32) (s1 + 496));
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 468)); v0 = func_002DB830(a0);
    v1 = (*(volatile u8 *) (u32) (s1 + 6));
    a0 = s2 & 0xff;
    a0 = (s32) ((u32) a0 - (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    v0 = (s32) 0x6c0000U;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f1.i = (s32) v1;
    a0 = v0 | 0x67;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; v0 = func_001F08B0(a0);
    a2 = s0 & 0xff;
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x5cU); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    a1 = 23;
    a2 = (s32) ((u32) sp + 0x50U);
    a3 = (s32) ((u32) sp + 0x5cU); v0 = func_001F1A20(a0, a1, a2, a3);
    s0 = v0;
    a1 = 1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s1 + 456)) = (u32) s0; func_001F3D10(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = s0;
    a1 = 1; func_001F1860(a0, a1);
    a0 = 0; v0 = func_008C5050(a0);
    a0 = s0;
    a1 = v0; func_001F18D0(a0, a1);
L_008D0A08:;
    return;
}
