/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 sqrtf(f32);

s32 func_001CD870(s32 a0, s32 a1) {
    s32 v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    f3.f = (*(volatile f32 *) (u32) a1);
    f0.i = (s32) 0;
    fcc = f0.f == f3.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (a1 + 4)); goto L_001CD8E0; }
L_001CD888:;
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.i = (s32) 0;
    acc = f0.f * f0.f;
    f0.f = acc + f3.f * f3.f;
    f0.f = sqrtf(f0.f);
    fcc = f1.f == f0.f;
    if (fcc) { (*(volatile f32 *) (u32) a0) = f1.f; goto L_001CD8F8; }
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v0;
    f2.f = f1.f / f0.f;
    f1.f = f3.f * f2.f;
    (*(volatile f32 *) (u32) a0) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.f = f1.f * f2.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f1.f;
L_001CD8D8:;
    goto L_001CD900;
L_001CD8E0:;
    fcc = f0.f == f1.f;
    if (!fcc) goto L_001CD888;
    (*(volatile f32 *) (u32) a0) = f0.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f; goto L_001CD8D8;
L_001CD8F8:;
    (*(volatile f32 *) (u32) (a0 + 4)) = f1.f; goto L_001CD8D8;
L_001CD900:;
    return v0;
}
