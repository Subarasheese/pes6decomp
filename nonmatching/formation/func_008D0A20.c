/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_008B9B70(s32, s32, s32, s32);
void func_008CE6C0(s32, s32, s32, s32, f32);

void func_008D0A20(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a1 = 1;
    v0 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = v0 != a1; s0 = a0; if (c_) goto L_008D0A4C; }
    a1 = 3; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 496)); goto L_008D0A58;
L_008D0A4C:;
    func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 496));
L_008D0A58:;
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 80));
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 0; v0 = func_008B9B70(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 476)) = (u32) v0;
    return;
}
