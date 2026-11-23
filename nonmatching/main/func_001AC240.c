/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_001AC240(s32 a0) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (*(volatile s32 *) (u32) (gp + -23224));
    f1.i = (s32) a0;
    f0.i = (s32) 0;
    f2.f = (f32) f1.i;
    v0 = (*(volatile s32 *) (u32) v1);
    f3.f = (*(volatile f32 *) (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    f1.f = (*(volatile f32 *) (u32) (v0 + 4));
    f2.f = f2.f - f3.f;
    f1.f = f1.f - f3.f;
    f3.f = f2.f / f1.f;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_001AC288;
    f3.i = f0.i;
L_001AC288:;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    fcc = f3.f <= f0.f;
    if (fcc) goto L_001AC2A4;
    f3.i = f0.i;
L_001AC2A4:;
    f2.f = (*(volatile f32 *) (u32) (v1 + 4));
    f1.f = (*(volatile f32 *) (u32) (v1 + 12));
    f0.i = (s32) 0;
    acc = f0.f + f2.f;
    f0.f = f1.f - f2.f;
    f0.f = acc + f3.f * f0.f; return f0.f;
}
