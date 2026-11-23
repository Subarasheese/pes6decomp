/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_008BAB30(s32 a0, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7664));
    if (a0 < 0) { v1 = (s32) ((u32) a0 >> 1); goto L_008BAB4C; }
    f0.i = (s32) a0;
    f1.f = (f32) f0.i; goto L_008BAB64;
L_008BAB4C:;
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_008BAB64:;
    v1 = (s32) 0x42700000U;
    v0 = (s32) 0x3f000000U;
    f0.i = (s32) v1;
    f1.f = f1.f / f0.f;
    fcc = f12.f == f13.f;
    f0.i = (s32) v0;
    { s32 c_ = !fcc; f3.f = f0.f * f1.f; if (c_) goto L_008BAB94; }
    f0.i = f12.i; goto L_008BAC4C;
L_008BAB94:;
    fcc = f12.f < f13.f;
    if (!fcc) { v0 = (s32) 0xbf800000U; goto L_008BABB0; }
    v0 = (s32) 0x3f800000U;
    f4.i = (s32) v0;
    f2.i = f14.i & 0x7FFFFFFF; goto L_008BABB8;
L_008BABB0:;
    f4.i = (s32) v0;
    f2.i = f14.i & 0x7FFFFFFF;
L_008BABB8:;
    v0 = (s32) 0x42700000U;
    f1.i = (s32) v0;
    if (a0 < 0) { v1 = (s32) ((u32) a0 >> 1); goto L_008BABD4; }
    f0.i = (s32) a0;
    f0.f = (f32) f0.i; goto L_008BABEC;
L_008BABD4:;
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008BABEC:;
    f0.f = f1.f / f0.f;
    v0 = (s32) 0x3f800000U;
    f1.f = f13.f - f12.f;
    f2.f = f0.f * f2.f;
    f1.f = f4.f * f1.f;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_008BAC24;
    f0.i = f13.i; goto L_008BAC4C;
L_008BAC24:;
    fcc = f1.f <= f2.f;
    if (fcc) { f0.f = f0.f - f3.f; goto L_008BAC44; }
    f0.i = (s32) 0;
    acc = f0.f + f12.f;
    f0.f = acc + f4.f * f2.f; goto L_008BAC4C;
L_008BAC44:;
    acc = f13.f * f0.f;
    f0.f = acc + f12.f * f3.f;
L_008BAC4C:;
    return f0.f;
}
