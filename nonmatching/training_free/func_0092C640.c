/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0092C640(s32 a0, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    f1.i = f12.i;
    f1.i = f1.i & 0x7FFFFFFF;
    v1 = (s32) 0x46620000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092C69C;
    f0.i = (s32) 0;
    fcc = f12.f < f0.f;
    if (!fcc) { v1 = 1; goto L_0092C67C; }
    v1 = -1;
L_0092C67C:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46620000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f12.f = f0.f * f1.f;
L_0092C69C:;
    f1.i = f13.i & 0x7FFFFFFF;
    v1 = (s32) 0x46180000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092C6F4;
    f0.i = (s32) 0;
    fcc = f13.f < f0.f;
    if (!fcc) { v1 = 1; goto L_0092C6D4; }
    v1 = -1;
L_0092C6D4:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46180000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f13.f = f0.f * f1.f;
L_0092C6F4:;
    (*(volatile f32 *) (u32) (a0 + 108)) = f12.f;
    (*(volatile f32 *) (u32) (a0 + 112)) = f13.f; return v0;
}
