/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BBD840(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a4 = (*(volatile s32 *) (u32) (gp + -32420));
    v1 = (s32) 0x42700000U;
    f1.i = (s32) v1;
    a3 = (s32) 0x42c80000U;
    a2 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a1 = 0;
    f0.f = (*(volatile f32 *) (u32) a4);
    f6.f = f0.f / f1.f;
    (*(volatile u32 *) (u32) (a2 + -11688)) = (u32) a3;
    (*(volatile u32 *) (u32) (a0 + -11692)) = (u32) a3;
    (*(volatile u32 *) (u32) (v1 + -11696)) = (u32) a3;
    a3 = (s32) 0x46080000U;
    t6 = (s32) 0x590000U;
    a4 = a3 | 0x6400;
    a2 = (s32) 0xc5a80000U;
    a3 = a2 | 0x5000;
    v1 = 1;
    a2 = (s32) 0x45a80000U;
    a0 = 23;
    a2 = a2 | 0x5000;
    a5 = (s32) 0xcc0000U;
    f5.i = (s32) a4;
    a6 = (s32) 0xcc0000U;
    f2.i = (s32) a3;
    a7 = (s32) 0xcc0000U;
    f1.i = (s32) a2;
    a4 = (s32) 0xcc0000U;
    f4.i = (s32) 0;
    t6 = (s32) ((u32) t6 + 0xffffe5b0U);
    a3 = (s32) 0xcc0000U;
    a2 = (s32) 0xcc0000U;
    t7 = 255;
L_00BBD8C8:;
    t4 = a1 & 0xff;
    if (t4 == t7) { t5 = v1; goto L_00BBD8DC; }
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) t4 / (s32) a0); hi = (s32) ((s32) t4 % (s32) a0); lo = q_; }
    t5 = hi;
L_00BBD8DC:;
    t4 = (s32) ((u32) t5 << 3);
    t4 = (s32) ((u32) t4 + (u32) t5);
    t4 = (s32) ((u32) t4 << 6);
    t5 = (s32) ((u32) t6 + (u32) t4);
    t4 = (*(volatile s32 *) (u32) (t5 + 4));
    t4 = (*(volatile u8 *) (u32) (t4 + 44));
    if (t4 == 0) goto L_00BBD964;
    f0.f = (*(volatile f32 *) (u32) (t5 + 232));
    fcc = f0.f < f5.f;
    if (fcc) { f0.f = f5.f - f0.f; goto L_00BBD914; }
    f3.i = f4.i; goto L_00BBD920;
L_00BBD914:;
    f3.f = f6.f * f0.f;
    f0.f = (*(volatile f32 *) (u32) (t5 + 248));
    f3.f = f3.f / f0.f;
L_00BBD920:;
    f0.f = (*(volatile f32 *) (u32) (t5 + 224));
    fcc = f0.f < f2.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (a3 + -11696)); goto L_00BBD980; }
    fcc = f0.f < f1.f;
    if (!fcc) { f0.f = (*(volatile f32 *) (u32) (a5 + -11688)); goto L_00BBD954; }
    f0.f = (*(volatile f32 *) (u32) (a7 + -11692));
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBD964;
    (*(volatile f32 *) (u32) (a6 + -11692)) = f3.f; goto L_00BBD964;
L_00BBD954:;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBD964;
    (*(volatile f32 *) (u32) (a4 + -11688)) = f3.f;
L_00BBD964:;
    a1 = (s32) ((u32) a1 + 0x1U);
    a1 = a1 & 0xff;
    t4 = a1 < 23;
    if (t4 != 0) goto L_00BBD8C8;
    goto L_00BBD994;
L_00BBD980:;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBD964;
    (*(volatile f32 *) (u32) (a2 + -11696)) = f3.f; goto L_00BBD964;
L_00BBD994:;
    return;
}
