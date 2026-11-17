/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_009B3070(s32, s32);
s32 func_009B33F0(s32, s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00B2A420(s32);
s32 func_00B3BF40(s32);
s32 func_00BF6270(void);

void func_00B3AAC0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;

    s0 = a0; v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s1 = v0;
    a0 = s0; v0 = func_00B3BF40(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) v0;
    a0 = (*(volatile s32 *) (u32) s1);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xffff;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) (v1 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 232));
    f3.f = (*(volatile f32 *) (u32) (v1 + 224));
    f2.f = (*(volatile f32 *) (u32) (v0 + 224));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = f0.i;
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile s32 *) (u32) s1); v0 = func_009B33F0(a0, a1, a2, a3);
    a1 = s2;
    a0 = v0 & 0xffff; v0 = func_009B3070(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u16 *) (u32) (v1 + 60)) = (u16) v0;
    return;
}
