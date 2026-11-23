/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00151CF0(f32);
void func_001A3850(s32);
void func_001A38C0(s32);

void func_001843C0(s32 a0, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -64));
    if (v1 == 0) goto L_00184510;
    s0 = (s32) ((u32) v1 + 0x2cU);
    s1 = 0;
L_001843E8:;
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x3f800000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -64));
    f12.i = (s32) v1;
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u8 *) (u32) v0) = (u8) 0; f0.f = func_00151CF0(f12.f);
    v1 = (s32) 0x44610000U;
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    f12.i = (s32) v0;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f; f0.f = func_00151CF0(f12.f);
    v1 = (s32) 0x44c80000U;
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    f12.i = (s32) v0;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; f0.f = func_00151CF0(f12.f);
    v0 = (s32) 0x44c80000U;
    s1 = (s32) ((u32) s1 + 0x1U);
    f1.i = (s32) v0;
    f0.f = f1.f * f0.f;
    v0 = s1 < 42;
    (*(volatile f32 *) (u32) (s0 + 8)) = f0.f;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0xcU); if (c_) goto L_001843E8; }
    v0 = (s32) 0x520000U;
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = (*(volatile s32 *) (u32) (v0 + -64));
    s0 = (s32) ((u32) v0 + 0x224U); func_001A38C0(a0);
    a0 = (s32) ((u32) sp + 0x30U); func_001A3850(a0);
    f6.f = (*(volatile f32 *) (u32) (sp + 68));
    v1 = (s32) 0x45090000U;
    f7.f = (*(volatile f32 *) (u32) (sp + 52));
    v1 = v1 | 0x8000;
    f3.f = (*(volatile f32 *) (u32) (sp + 72));
    a0 = (s32) 0x43960000U;
    f4.f = (*(volatile f32 *) (u32) (sp + 56));
    f5.i = (s32) 0;
    f8.i = (s32) v1;
    acc = f5.f + f6.f;
    f6.f = acc + f8.f * f7.f;
    v1 = (s32) 0x44480000U;
    acc = f5.f + f3.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    f3.f = acc + f8.f * f4.f;
    f1.i = (s32) v1;
    f2.f = (*(volatile f32 *) (u32) (sp + 48));
    v1 = (s32) 0xc4610000U;
    acc = f5.f + f0.f;
    f0.f = acc + f8.f * f2.f;
    f0.f = f0.f - f1.f;
    f2.i = (s32) a0;
    (*(volatile f32 *) (u32) s0) = f0.f;
    f2.f = f6.f - f2.f;
    f1.f = f3.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 8)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00184508;
L_00184500:;
    goto L_00184514;
L_00184508:;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f; goto L_00184500;
L_00184510:;
L_00184514:;
    return;
}
