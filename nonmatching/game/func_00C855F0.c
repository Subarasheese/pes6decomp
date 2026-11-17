/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C855F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };

    v1 = (s32) ((u32) a0 << 2);
    a1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 + 0xffffc200U);
    a0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) a0 + 0xffffc2f4U);
    a4 = (s32) ((u32) a1 + (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) v1);
    a1 = (s32) 0xcd0000U;
    f0.f = (*(volatile f32 *) (u32) a0);
    a1 = (s32) ((u32) a1 + 0xffffc2f8U);
    a2 = (s32) ((u32) a1 + (u32) v1);
    f7.f = (*(volatile f32 *) (u32) a2);
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffc250U);
    a1 = (s32) ((u32) a0 + (u32) v1);
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffc254U);
    a0 = (s32) ((u32) a0 + (u32) v1);
    f6.f = (*(volatile f32 *) (u32) a0);
    f3.f = (*(volatile f32 *) (u32) a1);
    f2.f = (*(volatile f32 *) (u32) (a4 + 216));
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffc224U);
    a1 = (s32) ((u32) a0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) a1);
    f4.f = (*(volatile f32 *) (u32) (a4 + 220));
    a0 = 4;
    { s32 c_ = a1 == a0; a3 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00C85718; }
    a0 = 3;
    if (a1 == a0) { a0 = (s32) 0x40000000U; goto L_00C856EC; }
    a0 = 1;
    if (a1 == a0) { a0 = (s32) 0x40000000U; goto L_00C856C8; }
    a0 = 2;
    if (a1 == a0) { a0 = (s32) 0x40000000U; goto L_00C856A4; }
    if (a1 == 0) goto L_00C856A0;
    goto L_00C85748;
L_00C856A0:;
    a0 = (s32) 0x40000000U;
L_00C856A4:;
    f1.i = (s32) a0;
    f1.f = f6.f / f1.f;
    f0.f = f4.f + f7.f;
    f1.f = f1.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (a3 + 4));
    f5.f = (*(volatile f32 *) (u32) a3);
    f1.f = f0.f + f1.f; goto L_00C85748;
L_00C856C8:;
    f0.i = (s32) a0;
    f0.f = f6.f / f0.f;
    f5.f = (*(volatile f32 *) (u32) a3);
    f1.f = (*(volatile f32 *) (u32) (a3 + 4));
    f0.f = f4.f - f0.f;
    f1.f = f1.f + f0.f; goto L_00C85748;
L_00C856EC:;
    f1.i = (s32) a0;
    f0.f = f3.f / f1.f;
    f3.f = f2.f - f0.f;
    f0.f = f7.f / f1.f;
    f0.f = f4.f + f0.f;
    f2.f = (*(volatile f32 *) (u32) a3);
    f1.f = (*(volatile f32 *) (u32) (a3 + 4));
    f5.f = f2.f + f3.f;
    f1.f = f1.f + f0.f; goto L_00C85748;
L_00C85718:;
    f0.f = f2.f + f0.f;
    a0 = (s32) 0x40000000U;
    f2.i = (s32) a0;
    f1.f = f3.f / f2.f;
    f3.f = f1.f + f0.f;
    f0.f = f7.f / f2.f;
    f0.f = f4.f + f0.f;
    f2.f = (*(volatile f32 *) (u32) a3);
    f1.f = (*(volatile f32 *) (u32) (a3 + 4));
    f5.f = f2.f + f3.f;
    f1.f = f1.f + f0.f;
L_00C85748:;
    a1 = (s32) 0xcd0000U;
    a0 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffc260U);
    a0 = (s32) ((u32) a0 + 0xffffc264U);
    a1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile f32 *) (u32) a1) = f5.f;
    (*(volatile f32 *) (u32) v1) = f1.f; return;
}
