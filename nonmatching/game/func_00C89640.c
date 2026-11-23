/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);

void func_00C89640(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    at = (u64) a0 < (u64) (s64) 127;
    { s32 c_ = at == 0; s0 = a1; if (c_) goto L_00C89680; }
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce4cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_001EE5D0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s0);
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 12));
    (*(volatile f32 *) (u32) (s0 + 12)) = f0.f;
L_00C89680:;
    return;
}
