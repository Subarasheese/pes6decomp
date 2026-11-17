/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);

f32 func_002C2990(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x47c30000U;
    v0 = v0 | 0x5000;
    f0.i = (s32) v0;
    s2 = a0;
    s1 = a1;
    s0 = a2;
    if (s2 == 0) goto L_002C2A6C;
    if (s1 == 0) goto L_002C2A6C;
    if (s0 == 0) goto L_002C2A6C;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    f3.f = (*(volatile f32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) s1);
    f21.f = f1.f - f0.f;
    f20.f = f3.f - f2.f;
    acc = f21.f * f21.f;
    f12.f = acc + f20.f * f20.f; f0.f = func_001CD9E0();
    f5.i = (s32) 0;
    fcc = f5.f == f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (s0 + 4)); goto L_002C2A48; }
    f2.f = (*(volatile f32 *) (u32) (s2 + 4));
    f1.f = (*(volatile f32 *) (u32) (s1 + 4));
    f4.f = (*(volatile f32 *) (u32) s2);
    f3.f = (*(volatile f32 *) (u32) s1);
    f1.f = f2.f - f1.f;
    f1.f = f20.f * f1.f;
    f3.f = f4.f - f3.f;
    acc = f5.f + f1.f;
    f1.f = acc - f21.f * f3.f;
    f0.f = f1.f / f0.f;
    f0.i = f0.i & 0x7FFFFFFF; goto L_002C2A6C;
L_002C2A48:;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    f3.f = (*(volatile f32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) s2);
    f0.f = f1.f - f0.f;
    f0.f = f0.f * f0.f;
    f2.f = f3.f - f2.f;
    acc = f5.f + f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
L_002C2A6C:;
    return f0.f;
}
