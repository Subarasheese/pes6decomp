/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_008C1430(s32, f32, f32);
s32 func_008C5740(s32);
void func_008C5BF0(s32, s32, s32);

void func_008E6470(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    f1.f = (*(volatile f32 *) (u32) a1);
    s0 = a1;
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (s32) ((u32) s4 + 0x9ecU); func_008C5BF0(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) s0);
    f13.f = (*(volatile f32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (s4 + 2512)); func_008C1430(a0, f12.f, f13.f);
    f12.f = (*(volatile f32 *) (u32) s0);
    f13.f = (*(volatile f32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (s4 + 2516)); func_008C1430(a0, f12.f, f13.f);
    f12.f = (*(volatile f32 *) (u32) s0);
    f13.f = (*(volatile f32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (s4 + 2520)); func_008C1430(a0, f12.f, f13.f);
    a0 = (s32) ((u32) s4 + 0x9ecU); v0 = func_008C5740(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 2512));
    s2 = v0;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 99; v0 = func_001D7A20(a0, a1, a2);
    s3 = 11;
    s1 = (s32) ((u32) s4 + 0x58U);
    s0 = (s32) ((u32) s4 + 0x2cU);
L_008E650C:;
    v0 = (s32) ((u32) s3 + 0x4cU);
    a0 = s2;
    a2 = v0 & 0xffff;
    a1 = (s32) ((u32) sp + 0x70U); v0 = func_001D7A20(a0, a1, a2);
    f2.f = (*(volatile f32 *) (u32) (sp + 120));
    v0 = (s32) 0x40000000U;
    f3.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    f2.f = f2.f / f3.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 128));
    f0.f = f1.f - f0.f;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 124));
    f1.f = (*(volatile f32 *) (u32) (sp + 116));
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    f2.f = f2.f / f3.f;
    f0.f = f1.f - f0.f;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 2148));
    a1 = (s32) ((u32) sp + 0x60U); func_001EE5D0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 8));
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 2148));
    a1 = (s32) ((u32) sp + 0x60U); func_001EF860(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x8U);
    v0 = s3 < 23;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008E650C; }
    a0 = (*(volatile s32 *) (u32) (s4 + 2512));
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 99; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 1728));
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    return;
}
