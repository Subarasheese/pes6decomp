/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C21050(s32, f32, f32, f32);

s32 func_00C22290(s32 a0, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };

    v0 = (s32) 0x42700000U;
    f12.i = (s32) v0;
    f13.i = (s32) 0;
    v0 = (s32) 0x3f800000U;
    f14.i = (s32) v0;
    a0 = 20; v0 = func_00C21050(a0, f12.f, f13.f, f14.f); return v0;
}
