/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008DFC10(s32, s32, s32, s32, f32, f32);

void func_008E0130(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v1 = a1 & 0xff;
    v0 = 5;
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (a0 + 81)) = (u8) v0;
    a1 = v0 & 0xff; v0 = func_008DFC10(a0, a1, a2, a3, f12.f, f13.f); return;
}
