/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001E5410(void);

void func_00C85770(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    volatile union { f32 f; s32 i; } f25 = { 0 };
    volatile union { f32 f; s32 i; } f26 = { 0 };
    volatile union { f32 f; s32 i; } f27 = { 0 };
    volatile union { f32 f; s32 i; } f28 = { 0 };
    volatile union { f32 f; s32 i; } f29 = { 0 };
    s32 fcc = 0;

    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) v0 << 6);
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffc254U);
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffc200U);
    a2 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    s1 = (s32) ((u32) a2 + 0xa0U);
    s0 = (s32) ((u32) a2 + 0x10U);
    f29.f = (*(volatile f32 *) (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (a2 + 16));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffc2f4U);
    a1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffc2f8U);
    v1 = (s32) ((u32) v0 + (u32) a0);
    f28.f = (*(volatile f32 *) (u32) a1);
    a0 = (s32) 0x40000000U;
    f2.i = (s32) a0;
    v0 = (s32) 0x3f0000U;
    f27.f = (*(volatile f32 *) (u32) v1);
    f0.i = f28.i ^ (s32) 0x80000000U;
    f26.f = f0.f / f2.f;
    v1 = (*(volatile s16 *) (u32) (v0 + 30612));
    v0 = (s32) ((u32) 0 - (u32) v1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f0.f / f2.f;
    f22.f = f29.f + f0.f;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f / f2.f;
    f21.f = f0.f - f29.f;
    f0.i = f27.i ^ (s32) 0x80000000U;
    f25.f = f0.f / f2.f;
    f0.f = f28.f / f2.f;
    f24.f = f1.f - f0.f;
    f23.f = f1.f + f0.f; f0.f = func_001E5410();
    f1.i = f0.i ^ (s32) 0x80000000U;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f20.f = f29.f + f0.f; f0.f = func_001E5410();
    v1 = (s32) 0x40000000U;
    f2.i = (s32) v1;
    f0.f = f0.f / f2.f;
    f3.f = f0.f - f29.f;
    f0.f = f27.f / f2.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    fcc = f24.f < f22.f;
    f2.f = f1.f - f0.f;
    { s32 c_ = !fcc; f1.f = f1.f + f0.f; if (c_) goto L_00C858B8; }
    f0.f = f22.f - f24.f;
    f26.f = f26.f + f0.f; goto L_00C858CC;
L_00C858B8:;
    fcc = f23.f <= f21.f;
    if (fcc) goto L_00C858CC;
    f0.f = f21.f - f23.f;
    f26.f = f26.f + f0.f;
L_00C858CC:;
    fcc = f2.f < f20.f;
    if (!fcc) goto L_00C858E4;
    f0.f = f20.f - f2.f;
    f25.f = f25.f + f0.f; goto L_00C858F8;
L_00C858E4:;
    fcc = f1.f <= f3.f;
    if (fcc) { (*(volatile f32 *) (u32) (s1 + 56)) = f26.f; goto L_00C858FC; }
    f0.f = f3.f - f1.f;
    f25.f = f25.f + f0.f;
L_00C858F8:;
    (*(volatile f32 *) (u32) (s1 + 56)) = f26.f;
L_00C858FC:;
    (*(volatile f32 *) (u32) (s1 + 60)) = f25.f;
    (*(volatile f32 *) (u32) (s1 + 64)) = f28.f;
    (*(volatile f32 *) (u32) (s1 + 68)) = f27.f;
    return;
}
