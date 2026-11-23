/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00904820(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e80U);
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f - f0.f;
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x43800000U;
    f1.i = (s32) v0;
    if (a1 < 0) { v1 = (s32) ((u32) a1 >> 1); goto L_00904860; }
    f0.i = (s32) a1;
    f0.f = (f32) f0.i; goto L_00904878;
L_00904860:;
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00904878:;
    f0.f = f1.f * f0.f;
    fcc = f2.f < f0.f;
    { s32 c_ = fcc; v0 = 1; if (c_) goto L_0090488C; }
    v0 = 0;
L_0090488C:;
    v0 = v0 & 0xff; return v0;
}
