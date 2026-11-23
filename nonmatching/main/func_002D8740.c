/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D138(f32);
f32 func_0011D468(f32);

void func_002D8740(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s6 = a3;
    s5 = a0;
    s4 = 1;
    s1 = (s64) ((u64) a1 << 48);
    s1 = s1 >> 48;
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) a1;
    f0.i = (s32) s1;
    s2 = (*(volatile s16 *) (u32) (sp + 154));
    f0.f = (f32) f0.i;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) a2;
    a1 = (*(volatile u16 *) (u32) (a0 + 2));
    f20.i = f12.i;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    s0 = (s32) ((u32) a1 + 0x2U);
    (*(volatile f32 *) (u32) v1) = f0.f;
    at = s0 < 2;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    f0.i = (s32) s2;
    f0.f = (f32) f0.i;
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    { s32 c_ = at != 0; (*(volatile f32 *) (u32) (v1 + 8)) = f0.f; if (c_) goto L_002D8878; }
    s3 = 24;
L_002D87D0:;
    f1.i = (s32) s4;
    v1 = (s32) 0x40c90000U;
    f1.f = (f32) f1.i;
    v0 = (s32) ((u32) s0 + 0xfffffffeU);
    v1 = v1 | 0xfdb;
    f0.i = (s32) v0;
    f2.i = (s32) v1;
    f0.f = (f32) f0.i;
    f1.f = f2.f * f1.f;
    f21.f = f1.f / f0.f;
    f12.i = f21.i; f0.f = func_0011D468(f12.f);
    f1.i = (s32) s1;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    f2.f = (f32) f1.i;
    v0 = (s32) ((u32) v0 + (u32) s3);
    f1.i = (s32) 0;
    acc = f1.f + f2.f;
    f0.f = acc + f20.f * f0.f;
    (*(volatile f32 *) (u32) v0) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    f12.i = f21.i;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0; f0.f = func_0011D138(f12.f);
    f1.i = (s32) s2;
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    f2.f = (f32) f1.i;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < s0;
    a0 = (s32) ((u32) a0 + (u32) s3);
    s3 = (s32) ((u32) s3 + 0x18U);
    f1.i = (s32) 0;
    acc = f1.f + f2.f;
    f0.f = acc + f20.f * f0.f;
    { s32 c_ = v1 != 0; (*(volatile f32 *) (u32) (a0 + 8)) = f0.f; if (c_) goto L_002D87D0; }
L_002D8878:;
    a1 = (*(volatile u8 *) (u32) (sp + 156));
    a0 = (*(volatile u8 *) (u32) (sp + 157));
    v1 = (*(volatile u8 *) (u32) (sp + 158));
    (*(volatile u8 *) (u32) (s5 + 4)) = (u8) a1;
    (*(volatile u8 *) (u32) (s5 + 5)) = (u8) a0;
    (*(volatile u8 *) (u32) (s5 + 6)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 159));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v1;
    (*(volatile u32 *) (u32) (s5 + 20)) = (u32) s6;
    return;
}
