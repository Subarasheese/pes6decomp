/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_002EF2E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_002EF2F0;
    if (a1 != 0) { a3 = (*(volatile u8 *) (u32) (a0 + 2)); goto L_002EF2F8; }
L_002EF2F0:;
    v0 = 0; goto L_002EF3B4;
L_002EF2F8:;
    v1 = (s32) 0x40000000U;
    a2 = (s32) 0x3b0000U;
    v0 = 22;
    f4.i = (s32) v1;
    a2 = (s32) ((u32) a2 + 0x3fe0U);
    v1 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) a2 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v1);
    f2.f = (*(volatile f32 *) (u32) (v1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a0 + 16));
    (*(volatile f32 *) (u32) (sp + 8)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 12)) = f2.f;
    f2.i = (s32) 0;
    acc = f2.f + f1.f;
    f3.f = (*(volatile f32 *) (u32) (sp + 8));
    f0.f = (*(volatile f32 *) (u32) (a0 + 20));
    f1.f = (*(volatile f32 *) (u32) (sp + 12));
    f3.f = acc - f4.f * f3.f;
    acc = f2.f + f0.f;
    f1.f = acc - f4.f * f1.f;
    f0.i = (s32) f1.f;
    a0 = f0.i;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v0 = hi;
    if (v0 == 0) { (*(volatile f32 *) (u32) a1) = f3.f; goto L_002EF3AC; }
    v0 = (s32) 0x2e8b0000U;
    v1 = (s32) ((u32) a0 >> 31);
    v0 = v0 | 0xa2e9;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + 0x1U);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    (*(volatile f32 *) (u32) a1) = f3.f;
L_002EF3AC:;
    v0 = a1;
    (*(volatile f32 *) (u32) (a1 + 4)) = f1.f;
L_002EF3B4:;
    return;
}
