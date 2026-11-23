/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008C55C0(s32, s32, s32, s32, f32, f32);

void func_008C5DF0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    (*(volatile u8 *) (u32) a0) = (u8) 0;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) 0; v0 = func_008C55C0(a0, a1, a2, a3, f12.f, f13.f); return;
}
