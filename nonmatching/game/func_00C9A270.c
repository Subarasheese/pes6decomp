/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C99E60(s32, s32, s32, s32, s32, f32);

s32 func_00C9A270(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = a2;
    a4 = a3;
    a2 = a1;
    a3 = v0;
    a1 = 0; v0 = func_00C99E60(a0, a1, a2, a3, a4, f12.f); return v0;
}
