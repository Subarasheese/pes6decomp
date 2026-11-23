/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C74CC0(s32, s32, s32, s32);

void func_008FAA20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { 0 };

    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) ((u32) a0 << 2);
    f12.i = (s32) 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    f13.i = f12.i; v0 = func_00C74CC0(a0, a1, a2, a3); return;
}
