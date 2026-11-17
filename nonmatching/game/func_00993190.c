/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00993190(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (*(volatile s16 *) (u32) (a0 + 20));
    a4 = 0;
    a3 = (*(volatile s32 *) (u32) (gp + -31080));
    a5 = 0;
    a2 = (*(volatile u8 *) (u32) a0);
    f0.i = (s32) v0;
    a1 = 4;
    v1 = 1;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x45a00000U;
    f0.i = (s32) v0;
L_009931BC:;
    v0 = (*(volatile u8 *) (u32) (a3 + 8));
    if (v0 != a2) goto L_00993218;
    v0 = (*(volatile s32 *) (u32) (a3 + 4));
    if (v0 != a1) goto L_00993218;
    v0 = (*(volatile u8 *) (u32) (a3 + 44));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) { v0 = 0; goto L_0099321C; }
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    f3.f = (*(volatile f32 *) (u32) (a3 + 16));
    acc = f1.f * f2.f;
    f1.f = acc - f3.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00993208;
    a4 = v1;
L_00993208:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 10;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x40U); if (c_) goto L_009931BC; }
L_00993218:;
    v0 = a4 & 0xff;
L_0099321C:;
    return v0;
}
