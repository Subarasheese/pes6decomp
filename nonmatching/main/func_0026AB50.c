/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F2530(s64, s64, s64);
void func_001F27D0(s64, s64);
s64 func_001F2880(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
void func_0026AA40(s64, f32);

s64 func_0026AB50(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    s2 = a1;
    f1.f = (*(volatile f32 *) (u32) (a1 + 8));
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; f20.i = f12.i; if (c_) goto L_0026AB88; }
    s0 = 1; goto L_0026AB8C;
L_0026AB88:;
    s0 = 0;
L_0026AB8C:;
    v0 = func_001F2880(a0, a1, a2, a3);
    s1 = v0;
    v0 = (s64) ((u64) s0 << 56);
    a0 = s1;
    v0 = v0 >> 56;
    a1 = v0 & 0xff; func_001F27D0(a0, a1);
    a0 = s1;
    a1 = 1; func_001F3D10(a0, a1);
    a0 = s1;
    a1 = s2;
    a2 = 0; func_001F3D80(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    a0 = s1;
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x58U);
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 12));
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f; func_001F2530(a0, a1, a2);
    f12.i = f20.i;
    a0 = s1; func_0026AA40(a0, f12.f);
    v0 = s1;
    return v0;
}
