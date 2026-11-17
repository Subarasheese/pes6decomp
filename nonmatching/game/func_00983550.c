/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_00983550(f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;

    f0.f = f13.f - f12.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00983568; }
L_00983568:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f0.f < f14.f;
    if (!fcc) { f1.f = f12.f - f13.f; goto L_00983588; }
    f0.i = f12.i; goto L_009835B8;
L_00983588:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_009835A0; }
    v0 = -1;
L_009835A0:;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f1.f = (f32) f1.i;
    acc = f0.f + f13.f;
    f0.f = acc + f14.f * f1.f;
L_009835B8:;
    return f0.f;
}
