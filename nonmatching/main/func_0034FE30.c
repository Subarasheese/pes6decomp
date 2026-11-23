/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0034FE30(f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    f12.i = f12.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a80000U;
    v0 = v0 | 0x5000;
    f0.i = (s32) v0;
    fcc = f12.f <= f0.f;
    { s32 c_ = !fcc; v1 = 1; if (c_) goto L_0034FE54; }
    v1 = 0;
L_0034FE54:;
    v0 = v1 ^ 0x1; return v0;
}
