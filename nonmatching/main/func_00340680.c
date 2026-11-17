/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00340680(s32 a0, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;

    f1.i = f12.i;
    f1.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x46550000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_003406D4; }
    f14.i = f14.i & 0x7FFFFFFF;
    v0 = (s32) 0x460b0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f14.f <= f0.f;
    if (fcc) { v0 = 1; goto L_003406D4; }
    v0 = 0;
    goto L_003406D4;
    v0 = 1;
L_003406D4:;
    if (v0 != 0) { at = (u64) a0 < (u64) (s64) 7; goto L_003406E8; }
    v0 = 0; goto L_003407A0;
    at = (u64) a0 < (u64) (s64) 7;
L_003406E8:;
    if (at == 0) { v0 = 0; goto L_003407A0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x6050U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x34070cU) goto L_0034070C; if (t_ == 0x340724U) goto L_00340724; if (t_ == 0x34073cU) goto L_0034073C; if (t_ == 0x340754U) goto L_00340754; if (t_ == 0x34076cU) goto L_0034076C; if (t_ == 0x340784U) goto L_00340784; if (t_ == 0x34079cU) goto L_0034079C; }
L_0034070C:;
    fcc = f12.f == f13.f;
    { s32 c_ = fcc; v0 = 1; if (c_) goto L_003407A0; }
    v0 = 0;
    goto L_003407A0;
L_00340724:;
    fcc = f12.f == f13.f;
    { s32 c_ = !fcc; v0 = 1; if (c_) goto L_003407A0; }
    v0 = 0;
    goto L_003407A0;
L_0034073C:;
    fcc = f12.f < f13.f;
    { s32 c_ = fcc; v0 = 1; if (c_) goto L_003407A0; }
    v0 = 0;
    goto L_003407A0;
L_00340754:;
    fcc = f12.f <= f13.f;
    { s32 c_ = !fcc; v0 = 1; if (c_) goto L_003407A0; }
    v0 = 0;
    goto L_003407A0;
L_0034076C:;
    fcc = f12.f <= f13.f;
    { s32 c_ = fcc; v0 = 1; if (c_) goto L_003407A0; }
    v0 = 0;
    goto L_003407A0;
L_00340784:;
    fcc = f12.f < f13.f;
    { s32 c_ = !fcc; v0 = 1; if (c_) goto L_003407A0; }
    v0 = 0;
    goto L_003407A0;
L_0034079C:;
    v0 = 0;
L_003407A0:;
    return v0;
}
