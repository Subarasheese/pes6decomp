/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008D4B00(s32, s32, s32, s32, f32);

void func_008E2A20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    (*(volatile u8 *) (u32) a0) = (u8) a1;
    a0 = (s32) ((u32) a0 + 0x4U); v0 = func_008D4B00(a0, a1, a2, a3, f12.f); return;
}
