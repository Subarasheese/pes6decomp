/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_00983610(f32 fa12, f32 fa13, f32 fa14) {
    s64 v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;

    f0.i = (s32) 0;
    fcc = f14.f <= f0.f;
    if (fcc) { f0.i = f12.i; goto L_00983658; }
    v0 = (s32) 0x41200000U;
    f1.i = (s32) v0;
    fcc = f14.f < f1.f;
    if (!fcc) { f0.i = f13.i; goto L_00983658; }
    f0.f = f1.f - f14.f;
    acc = f12.f * f0.f;
    f0.f = acc + f13.f * f14.f;
    f0.f = f0.f / f1.f;
L_00983658:;
    return f0.f;
}
