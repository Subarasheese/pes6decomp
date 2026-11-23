/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008BA6E0(s32, s32, s32, s32, f32);

void func_008BA6C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v1 = 255;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (v0 + -13919)) = (u8) v1;
    a0 = 3;
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -20296)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + -13920)) = (u8) v1; v0 = func_008BA6E0(a0, a1, a2, a3, f12.f); return;
}
