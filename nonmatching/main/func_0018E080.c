/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDAA0(void);

void func_0018E080(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 528));
    if (v1 == 0) goto L_0018E128;
    v0 = func_001CDAA0();
    if (v0 != 0) { v1 = (s32) 0x3d970000U; goto L_0018E0BC; }
    v1 = (s32) 0x3d7d0000U;
    v1 = v1 | 0xf3b6;
    f1.i = (s32) v1;
    goto L_0018E0C4;
L_0018E0BC:;
    v1 = v1 | 0x8d50;
    f1.i = (s32) v1;
L_0018E0C4:;
    v1 = (s32) 0x520000U;
    a0 = 0;
    a1 = (*(volatile s32 *) (u32) (v1 + 528));
L_0018E0D0:;
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    a0 = (s32) ((u32) a0 + 0x6U);
    v1 = a0 < 12;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 12)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 412));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 412)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 812));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 812)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 1212));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 1212)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 1612));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 1612)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 2012));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (a1 + 2012)) = f0.f;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x960U); if (c_) goto L_0018E0D0; }
L_0018E128:;
    return;
}
