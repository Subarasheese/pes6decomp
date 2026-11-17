/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0029EBC0(s32, s32, s32, f32, f32, f32);

f32 func_0029EA50(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    s0 = a2;
    a0 = (s32) ((u32) sp + 0x5cU);
    a1 = (s32) ((u32) sp + 0x58U);
    f20.i = f15.i;
    f21.i = f12.i;
    f23.i = f13.i;
    f12.f = f21.f / f20.f;
    f13.f = f23.f / f20.f;
    f22.i = f14.i;
    func_0029EBC0(a0, a1, a2, f12.f, f13.f, f14.f);
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    f0.f = f0.f * f20.f;
    fcc = f20.f <= f1.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 92)) = f0.f; if (c_) goto L_0029EB44; }
    f1.f = (*(volatile f32 *) (u32) s0);
    fcc = f20.f <= f1.f;
    if (!fcc) { f0.f = f22.f + f23.f; goto L_0029EB80; }
    f2.f = (*(volatile f32 *) (u32) (sp + 88));
    v1 = (s32) 0x3f000000U;
    f4.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.i = (s32) v1;
    f1.f = f1.f - f2.f;
    f3.f = f23.f - f4.f;
    f2.f = f20.f - f2.f;
    f2.f = f3.f * f2.f;
    f1.f = f2.f / f1.f;
    f5.f = f4.f + f1.f;
    (*(volatile f32 *) (u32) s1) = f5.f;
    f2.f = (*(volatile f32 *) (u32) (sp + 92));
    f4.f = (*(volatile f32 *) (u32) (sp + 88));
    f3.f = f21.f + f2.f;
    f1.f = f20.f - f4.f;
    f2.f = f2.f + f5.f;
    acc = f2.f * f1.f;
    f1.f = acc + f4.f * f3.f;
    f0.f = f0.f * f1.f;
    f0.f = f0.f / f20.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    f0.f = f0.f - f20.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
L_0029EB3C:;
    goto L_0029EB90;
L_0029EB44:;
    f0.f = f0.f - f21.f;
    v1 = (s32) 0x3f000000U;
    f0.f = f20.f * f0.f;
    f0.f = f0.f / f1.f;
    f0.f = f21.f + f0.f;
    f1.f = f21.f + f0.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.i = (s32) v1;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) s0);
    f0.f = f0.f - f20.f;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_0029EB3C;
L_0029EB80:;
    (*(volatile f32 *) (u32) s1) = f23.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    (*(volatile u32 *) (u32) s0) = (u32) 0; goto L_0029EB3C;
L_0029EB90:;
    return f0.f;
}
